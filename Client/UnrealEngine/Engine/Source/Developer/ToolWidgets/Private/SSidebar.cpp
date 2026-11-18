// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 41

// ~SSidebar @ 142d67540

void __thiscall SSidebar::~SSidebar(SSidebar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->_padding_ = (longlong)&___7SSidebar__6B_;
  DestructItems<TSharedRef<FSidebarDrawer,1>,int>
            ((TSharedRef<FSidebarDrawer,1> *)(this->Drawers).AllocatorInstance.Data,
             (this->Drawers).ArrayNum);
  pFVar3 = (this->Drawers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabButtonContainer).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStateChanged);
  pvVar4 = *(void **)&(this->OnStateChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetContent);
  pvVar4 = *(void **)&(this->OnGetContent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetContent);
  pTVar5 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AreAllDrawersDocked @ 142d72150

bool __thiscall SSidebar::AreAllDrawersDocked(SSidebar *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(char *)(*(longlong *)pFVar2 + 0x1e1) == '\0') {
      return false;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return true;
}

// BuildOptionsMenu @ 142d738b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SSidebar::BuildOptionsMenu(SSidebar *this,UToolMenu *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  UClass *pUVar7;
  FText *pFVar8;
  FName *pFVar9;
  FToolMenuSection *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar10;
  FUIAction *pFVar11;
  FSlateIcon *pFVar12;
  FName *pFVar13;
  FMRSWRecursiveAccessDetector *this_01;
  FDestructionSentinel *pFVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  bool local_res10 [8];
  FName local_res18;
  FName local_res20;
  FDestructionSentinel local_368;
  FDestructionSentinel local_348;
  undefined1 local_328 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  ForAnyElementType FStack_308;
  ulonglong local_300;
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [8];
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  undefined1 local_2c8 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  ulonglong local_290;
  FName local_288;
  undefined4 local_280;
  FText local_278;
  undefined1 local_268 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  ForAnyElementType FStack_248;
  ulonglong local_240;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_238;
  FName local_220;
  FText local_218;
  FSlateIcon local_208;
  FUIAction local_1e8;
  FToolUIActionChoice local_180;
  
  if (param_1 == (UToolMenu *)0x0) {
    return;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  pFVar15 = (param_1->Context).ContextObjects.AllocatorInstance.Data;
  iVar2 = (param_1->Context).ContextObjects.ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar2 * 8;
  do {
    if ((param_1->Context).ContextObjects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar15 == pFVar1) {
      return;
    }
    lVar4 = *(longlong *)pFVar15;
    if (lVar4 != 0) {
      pUVar7 = USidebarButtonMenuContext::StaticClass();
      iVar3 = (int)pUVar7->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar7->_padding_)) break;
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
  if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  pTVar16 = *(TReferenceControllerBase<1> **)(lVar4 + 0x40);
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) goto LAB_142d73974;
  aVar5 = pTVar16->SharedReferenceCount;
  do {
    if (aVar5 == (atomic<int>)0x0) {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_142d73974;
    }
    LOCK();
    aVar6 = pTVar16->SharedReferenceCount;
    bVar17 = aVar5 == aVar6;
    if (bVar17) {
      pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar6 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar6;
  } while (!bVar17);
  pFVar13 = *(FName **)(lVar4 + 0x38);
  if (pFVar13 == (FName *)0x0) goto LAB_142d73974;
  local_280 = CONCAT22(local_280._2_2_,0x300);
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_218,L"SSidebar",L"Options",L"Options");
  FText::FText((FText *)local_268,pFVar8);
  local_268[0x10] = true;
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  pFVar9 = ::FName::FName(&local_220,L"Options");
  local_348.Accessor = (FMRSWRecursiveAccessDetector *)CONCAT44(local_348.Accessor._4_4_,local_280);
  local_348.AccessType = local_288.ComparisonIndex.Value;
  local_348._4_4_ = local_288.Number;
  this_00 = UToolMenu::FindOrAddSection
                      (param_1,*pFVar9,(TAttribute<FText> *)local_268,(FToolMenuInsert *)&local_348)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_368);
  if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_248.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_248,0,0,0x10);
    local_240 = local_240 & 0xffffffff00000000;
  }
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  if (FStack_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_248.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
  }
  if (local_218.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
  }
  local_res20 = *pFVar13;
  local_348.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_348.Accessor & 0xffffffff00000000);
  local_348._0_8_ = SetDrawerDocked;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  if (*(char *)((longlong)&pFVar13[0x3c].ComparisonIndex.Value + 1) == '\0') {
    local_res10[0] = true;
    local_368._0_8_ = SetDrawerDocked;
    local_368.Accessor = local_348.Accessor;
    pTVar10 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SSidebar,FName,bool>
                        (&local_238,this,(pmf_ee3e1d3f *)&local_368,&local_res20,local_res10);
    pFVar11 = FUIAction::FUIAction(&local_1e8,pTVar10,RepeatDisabled);
    FToolUIActionChoice::FToolUIActionChoice(&local_180,pFVar11);
    pFVar12 = FSlateIcon::FSlateIcon(&local_208);
    local_2c8._0_8_ = pFVar12->StyleSetName;
    local_2c8._8_8_ = pFVar12->StyleName;
    local_2c8._16_8_ = pFVar12->SmallStyleName;
    local_2c8._24_8_ = pFVar12->StatusOverlayStyleName;
    local_2c8[0x20] = true;
    local_290 = 0;
    local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_298.Data = (FScriptContainerElement *)0x0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_348,L"SSidebar",L"DockToolTip",L"Docks the drawer");
    FText::FText((FText *)local_2f8,pFVar8);
    local_2f8[0x10] = true;
    local_2e0 = (undefined1  [8])0x0;
    FStack_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_278,L"SSidebar",L"DockLabel",L"Dock");
    FText::FText((FText *)local_328,pFVar8);
    local_328[0x10] = true;
    local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_308.Data = (FScriptContainerElement *)0x0;
    local_300 = 0;
    pFVar9 = ::FName::FName(&local_288,L"Dock");
    FToolMenuSection::AddMenuEntry
              (this_00,*pFVar9,(TAttribute<FText> *)local_328,(TAttribute<FText> *)local_2f8,
               (TAttribute<FSlateIcon> *)local_2c8,&local_180,Button,local_res18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_310,(FWriteAccessScope *)&local_368);
    if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_308.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
      local_300 = local_300 & 0xffffffff00000000;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
    if (FStack_308.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_308.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
    if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
               (FWriteAccessScope *)&local_368);
    if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
      local_2d0 = local_2d0 & 0xffffffff00000000;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
    if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2e0);
    if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
    }
    if ((FName)local_348._0_8_ != (FName)0x0) {
      (**(code **)(*(longlong *)local_348._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2a0,(FWriteAccessScope *)&local_368);
    if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_298.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
      local_290 = local_290 & 0xffffffff00000000;
    }
    if (local_368.bDestroyed == false) {
      pFVar14 = &local_368;
      this_01 = local_368.Accessor;
      goto LAB_142d7404d;
    }
  }
  else {
    local_res10[0] = false;
    local_348._0_8_ = SetDrawerDocked;
    pTVar10 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SSidebar,FName,bool>
                        (&local_238,this,(pmf_ee3e1d3f *)&local_348,&local_res20,local_res10);
    pFVar11 = FUIAction::FUIAction(&local_1e8,pTVar10,RepeatDisabled);
    FToolUIActionChoice::FToolUIActionChoice(&local_180,pFVar11);
    pFVar12 = FSlateIcon::FSlateIcon(&local_208);
    local_2c8._0_8_ = pFVar12->StyleSetName;
    local_2c8._8_8_ = pFVar12->StyleName;
    local_2c8._16_8_ = pFVar12->SmallStyleName;
    local_2c8._24_8_ = pFVar12->StatusOverlayStyleName;
    local_2c8[0x20] = true;
    local_290 = 0;
    local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_298.Data = (FScriptContainerElement *)0x0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_368,L"SSidebar",L"UndockToolTip",L"Undocks the drawer");
    FText::FText((FText *)local_328,pFVar8);
    local_328[0x10] = true;
    local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_308.Data = (FScriptContainerElement *)0x0;
    local_300 = 0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_278,L"SSidebar",L"UndockLabel",L"Undock");
    FText::FText((FText *)local_2f8,pFVar8);
    local_2f8[0x10] = true;
    local_2e0 = (undefined1  [8])0x0;
    FStack_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    pFVar9 = ::FName::FName(&local_288,L"Undock");
    FToolMenuSection::AddMenuEntry
              (this_00,*pFVar9,(TAttribute<FText> *)local_2f8,(TAttribute<FText> *)local_328,
               (TAttribute<FSlateIcon> *)local_2c8,&local_180,Button,(FName)0x0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
               (FWriteAccessScope *)&local_348);
    if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
      local_2d0 = local_2d0 & 0xffffffff00000000;
    }
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2e0);
    if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_310,(FWriteAccessScope *)&local_348);
    if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_308.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
      local_300 = local_300 & 0xffffffff00000000;
    }
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    if (FStack_308.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_308.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
    if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 0x10))();
    }
    if ((ITextData *)local_368._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_368._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2a0,(FWriteAccessScope *)&local_348);
    if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_298.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
      local_290 = local_290 & 0xffffffff00000000;
    }
    if (local_348.bDestroyed == false) {
      pFVar14 = &local_348;
      this_01 = local_348.Accessor;
LAB_142d7404d:
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_01,pFVar14);
    }
  }
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
  FToolUIActionChoice::~FToolUIActionChoice(&local_180);
  FUIAction::~FUIAction(&local_1e8);
  local_res20 = *pFVar13;
  local_348.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_348.Accessor & 0xffffffff00000000);
  local_348._0_8_ = SetDrawerPinned;
  local_368._0_8_ = SetDrawerPinned;
  local_368.Accessor = local_348.Accessor;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  if ((char)pFVar13[0x3c].ComparisonIndex.Value == '\0') {
    local_res10[0] = true;
    pTVar10 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SSidebar,FName,bool>
                        (&local_238,this,(pmf_ee3e1d3f *)&local_368,&local_res20,local_res10);
    pFVar11 = FUIAction::FUIAction(&local_1e8,pTVar10,RepeatDisabled);
    FToolUIActionChoice::FToolUIActionChoice(&local_180,pFVar11);
    pFVar12 = FSlateIcon::FSlateIcon(&local_208);
    local_2c8._0_8_ = pFVar12->StyleSetName;
    local_2c8._8_8_ = pFVar12->StyleName;
    local_2c8._16_8_ = pFVar12->SmallStyleName;
    local_2c8._24_8_ = pFVar12->StatusOverlayStyleName;
    local_2c8[0x20] = true;
    local_290 = 0;
    local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_298.Data = (FScriptContainerElement *)0x0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_348,L"SSidebar",L"PinTooltip",
                        L"Pins the drawer to always be displayed");
    FText::FText((FText *)local_2f8,pFVar8);
    local_2f8[0x10] = true;
    local_2e0 = (undefined1  [8])0x0;
    FStack_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_278,L"SSidebar",L"PinLabel",L"Pin");
    FText::FText((FText *)local_328,pFVar8);
    local_328[0x10] = true;
    local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_308.Data = (FScriptContainerElement *)0x0;
    local_300 = 0;
    pFVar13 = ::FName::FName(&local_288,L"Pin");
    FToolMenuSection::AddMenuEntry
              (this_00,*pFVar13,(TAttribute<FText> *)local_328,(TAttribute<FText> *)local_2f8,
               (TAttribute<FSlateIcon> *)local_2c8,&local_180,Button,local_res18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_310,(FWriteAccessScope *)&local_368);
    if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_308.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
      local_300 = local_300 & 0xffffffff00000000;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
    if (FStack_308.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_308.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
    if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  }
  else {
    local_res10[0] = false;
    pTVar10 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SSidebar,FName,bool>
                        (&local_238,this,(pmf_ee3e1d3f *)&local_368,&local_res20,local_res10);
    pFVar11 = FUIAction::FUIAction(&local_1e8,pTVar10,RepeatDisabled);
    FToolUIActionChoice::FToolUIActionChoice(&local_180,pFVar11);
    pFVar12 = FSlateIcon::FSlateIcon(&local_208);
    local_2c8._0_8_ = pFVar12->StyleSetName;
    local_2c8._8_8_ = pFVar12->StyleName;
    local_2c8._16_8_ = pFVar12->SmallStyleName;
    local_2c8._24_8_ = pFVar12->StatusOverlayStyleName;
    local_2c8[0x20] = true;
    local_290 = 0;
    local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_298.Data = (FScriptContainerElement *)0x0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_348,L"SSidebar",L"UnpinTooltip",
                        L"Unpins the drawer from always being displayed");
    FText::FText((FText *)local_2f8,pFVar8);
    local_2f8[0x10] = true;
    local_2e0 = (undefined1  [8])0x0;
    FStack_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_278,L"SSidebar",L"UnpinLabel",L"Unpin");
    FText::FText((FText *)local_328,pFVar8);
    local_328[0x10] = true;
    local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_308.Data = (FScriptContainerElement *)0x0;
    local_300 = 0;
    pFVar13 = ::FName::FName(&local_288,L"Unpin");
    FToolMenuSection::AddMenuEntry
              (this_00,*pFVar13,(TAttribute<FText> *)local_328,(TAttribute<FText> *)local_2f8,
               (TAttribute<FSlateIcon> *)local_2c8,&local_180,Button,(FName)0x0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_310,(FWriteAccessScope *)&local_368);
    if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_308.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
      local_300 = local_300 & 0xffffffff00000000;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
    if (FStack_308.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_308.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
    if ((ITextData *)local_328._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_328._0_8_ + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
               (FWriteAccessScope *)&local_368);
    if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
      local_2d0 = local_2d0 & 0xffffffff00000000;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
  }
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
  }
  if ((FName)local_348._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_348._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a0,(FWriteAccessScope *)&local_368);
  if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_298.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
    local_290 = local_290 & 0xffffffff00000000;
  }
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
  FToolUIActionChoice::~FToolUIActionChoice(&local_180);
  FUIAction::~FUIAction(&local_1e8);
LAB_142d73974:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// CloseAllDrawers @ 142d75540

void __thiscall SSidebar::CloseAllDrawers(SSidebar *this,bool param_1)

{
  SSidebarContainer *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d75570;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->ContainerWidgetWeak).Object;
    if (this_00 != (SSidebarContainer *)0x0) {
      SSidebarContainer::CloseAllDrawerWidgets(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142d75570:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7775876802932637459>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                     ,0xed,"ContainerWidget.IsValid()");
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Construct @ 142d87c50

void __thiscall
SSidebar::Construct(SSidebar *this,FArguments *param_1,TSharedRef<SSidebarContainer,1> *param_2)

{
  atomic<int> *paVar1;
  undefined1 *this_00;
  atomic<int> aVar2;
  ESidebarTabLocation EVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  SBorder *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  char cVar10;
  bool bVar11;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar12;
  FArguments *pFVar13;
  ISlateStyle *pIVar14;
  FName *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SScrollBox,1> *pTVar17;
  TSharedRef<SBorder,1> *pTVar18;
  EOrientation EVar19;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  undefined1 local_8d8 [8];
  ForAnyElementType local_8d0;
  int local_8c8;
  FSlateBrush *local_8c0;
  undefined1 local_8b8;
  undefined1 local_8b0 [8];
  ForAnyElementType FStack_8a8;
  ulonglong local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined1 local_888;
  undefined1 local_880 [8];
  ForAnyElementType FStack_878;
  ulonglong local_870;
  SScrollBox *local_868;
  TReferenceControllerBase<1> *pTStack_860;
  SBorder *local_858;
  TReferenceControllerBase<1> *pTStack_850;
  FName local_848;
  FMemScope local_840;
  FName local_838;
  FMemScope local_830;
  TAttribute<EVisibility> local_828;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_808;
  TAttribute<FMargin> local_7f0;
  FDestructionSentinel local_7c0;
  FDestructionSentinel local_7a8;
  FDestructionSentinel local_790;
  FName local_778;
  SScrollBox *local_770;
  TReferenceControllerBase<1> *pTStack_768;
  TSharedRef<SBorder,1> local_760;
  TSharedRef<SScrollBox,1> local_750;
  FReadAccessScope local_740;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_728;
  FReadAccessScope local_710;
  FArguments local_6f8;
  FArguments local_430;
  
  (this->ContainerWidgetWeak).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController = pTVar4;
  }
  this->TabLocation = param_1->_TabLocation;
  param_2->Object->SidebarSizePercent = param_1->_InitialDrawerSize;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetContent,&param_1->_OnGetContent);
  this->bHideWhenAllDocked = param_1->_HideWhenAllDocked;
  this->bAlwaysUseMaxButtonSize = param_1->_AlwaysUseMaxButtonSize;
  this->bDisablePin = param_1->_DisablePin;
  this->bDisableDock = param_1->_DisableDock;
  if (&param_1->_OnStateChanged != &this->OnStateChanged) {
    local_8d8 = (undefined1  [8])0x0;
    local_8d0.Data = (FScriptContainerElement *)0x0;
    local_8c8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnStateChanged,
               &local_710);
    if ((*(int *)&(param_1->_OnStateChanged).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(param_1->_OnStateChanged).field_0x8, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x50))(plVar6,local_8d8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_710);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d8,
               (FWriteAccessScope *)&local_7c0);
    if ((local_8c8 != 0) && (local_8d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8d0,0,0,0x10);
      local_8c8 = 0;
    }
    if (local_7c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
    }
    if (local_8d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetContent,
             &local_740);
  if (((*(int *)&(this->OnGetContent).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(this->OnGetContent).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar10 = (**(code **)(*plVar6 + 0x38))(), cVar10 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_740);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("OnGetContent.IsBound()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                        ,0x26,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_740);
  }
  local_828.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_828.bIsSet = true;
  local_828.Getter._16_8_ = 0;
  local_828.Getter._0_8_ = 0;
  local_828.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_828);
  EVar3 = this->TabLocation;
  local_7f0.Value.Left = 0.0;
  if (EVar3 == Top) {
    local_7f0.Value.Right = 0.0;
    local_7f0.Value.Top = 0.0;
    local_7f0.Value.Bottom = __real_40000000;
  }
  else {
    local_7f0.Value.Bottom = 0.0;
    if (EVar3 == Left) {
      local_7f0.Value.Right = __real_40000000;
      local_7f0.Value.Top = 0.0;
    }
    else {
      local_7f0.Value.Right = 0.0;
      local_7f0.Value.Top = __real_40000000;
      if ((EVar3 != Bottom) && (local_7f0.Value.Top = 0.0, EVar3 == Right)) {
        local_7f0.Value.Left = __real_40000000;
      }
    }
  }
  local_7f0.Getter._16_8_ = 0;
  local_7f0.Getter._0_8_ = 0;
  local_7f0.Getter._8_8_ = 0;
  local_7f0.bIsSet = true;
  pTVar12 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)&this->_padding_,&local_7f0);
  pFVar13 = SBorder::FArguments::FArguments(&local_430);
  local_888 = 1;
  local_870 = 0;
  local_898 = 0;
  uStack_890 = 0;
  (pFVar13->_Padding).bIsSet = true;
  local_880 = (undefined1  [8])0x0;
  FStack_878.Data = (FScriptContainerElement *)0x0;
  (pFVar13->_Padding).Value.Left = 0.0;
  (pFVar13->_Padding).Value.Top = 0.0;
  (pFVar13->_Padding).Value.Right = 0.0;
  (pFVar13->_Padding).Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_880,
             (FWriteAccessScope *)&local_7a8);
  if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_878.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
    local_870 = local_870 & 0xffffffff00000000;
  }
  if (local_7a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
  }
  if (FStack_878.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_878.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_880);
  pIVar14 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar14 + 0x50);
  pFVar15 = ::FName::FName(&local_778,L"Docking.Sidebar.Background");
  local_8c0 = (FSlateBrush *)(*pcVar7)(pIVar14,*pFVar15);
  local_8b8 = 1;
  local_8a0 = 0;
  local_8b0 = (undefined1  [8])0x0;
  FStack_8a8.Data = (FScriptContainerElement *)0x0;
  (pFVar13->_BorderImage).Value = local_8c0;
  (pFVar13->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b0,
             (FWriteAccessScope *)&local_790);
  if (((int)local_8a0 != 0) && (FStack_8a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8a8,0,0,0x10);
    local_8a0 = local_8a0 & 0xffffffff00000000;
  }
  if (local_790.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
  }
  if (FStack_8a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8b0);
  pFVar16 = SScrollBox::FArguments::FArguments(&local_6f8);
  if ((this->TabLocation == Top) || (EVar19 = Orient_Vertical, this->TabLocation == Bottom)) {
    EVar19 = Orient_Horizontal;
  }
  pFVar16->_Orientation = EVar19;
  pFVar16->_ScrollBarAlwaysVisible = false;
  (pFVar16->_ScrollBarVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_848 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_840,&local_848,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            (&local_808,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
             ,0x35,local_res8);
  FMemScope::~FMemScope(&local_840);
  FLLMScope::~FLLMScope(local_res18);
  if (local_808._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_808._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_808._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_770 = (this->TabButtonContainer).Object;
  pTStack_768 = (this->TabButtonContainer).SharedReferenceCount.ReferenceController;
  (this->TabButtonContainer).Object = local_808._Widget.Object;
  (this->TabButtonContainer).SharedReferenceCount.ReferenceController =
       local_808._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_768);
  pTVar17 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_808,&local_750,pFVar16);
  pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_868 = pTVar17->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_Content).Widget.Object = (SWidget *)local_868;
  (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_860 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_838 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_830,&local_838,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_728,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
             ,0x31,local_res10);
  FMemScope::~FMemScope(&local_830);
  FLLMScope::~FLLMScope(local_res20);
  pTVar18 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_728,&local_760,pFVar13);
  this_00 = &pTVar12->field_0x20;
  pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar18->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = *(TReferenceControllerBase<1> **)&pTVar12->field_0x38;
  *(SBorder **)&pTVar12->field_0x30 = pSVar8;
  *(TReferenceControllerBase<1> **)&pTVar12->field_0x38 = pTVar5;
  local_858 = pSVar8;
  pTStack_850 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_760.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_728._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_750.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808._Widget.SharedReferenceCount.ReferenceController);
  SScrollBox::FArguments::~FArguments(&local_6f8);
  SBorder::FArguments::~FArguments(&local_430);
  return;
}

// ContainsDrawer @ 142d912f0

bool __thiscall SSidebar::ContainsDrawer(SSidebar *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = (this->Drawers).AllocatorInstance.Data;
  pFVar4 = pFVar1 + (longlong)(this->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar1 == pFVar4) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      pFVar2 = (FName *)0x0;
LAB_142d9132b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return pFVar2 != (FName *)0x0;
    }
    pFVar2 = *(FName **)pFVar1;
    if (param_1 == *pFVar2) {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_142d9132b;
    }
    pFVar1 = pFVar1 + 0x10;
  } while( true );
}

// ContainsDrawerSection @ 142d91360

bool __thiscall SSidebar::ContainsDrawerSection(SSidebar *this,FName param_1,FName param_2)

{
  FName FVar1;
  ulonglong uVar2;
  FName *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FName *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FName FVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  TReferenceControllerBase<1> *pTVar20;
  
  pFVar11 = (this->Drawers).AllocatorInstance.Data;
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  uVar15 = 0;
  pFVar19 = pFVar11 + (longlong)(this->Drawers).ArrayNum * 0x10;
  for (; pFVar11 != pFVar19; pFVar11 = pFVar11 + 0x10) {
    pFVar3 = *(FName **)pFVar11;
    if (param_1 == *pFVar3) {
      pTVar22 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = 0;
      local_60 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar3 == (FName *)0x0) goto LAB_142d913b2;
      FVar1 = (FName)(pFVar3 + 0x28);
      uVar23 = pFVar3[0x2b].ComparisonIndex.Value;
      uVar8 = 1;
      uVar18 = 0;
      uVar9 = uVar15;
      if (uVar23 == 0) goto LAB_142d9148e;
      FVar21 = pFVar3[0x2a];
      if (pFVar3[0x2a] == (FName)0x0) {
        FVar21 = FVar1;
      }
      uVar9 = *(uint *)FVar21;
      pTVar20 = pTVar17;
      uVar18 = 0;
      uVar15 = 0;
      goto joined_r0x000142d91444;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar22 = pTVar17;
LAB_142d913b2:
  bVar6 = false;
LAB_142d913b4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return bVar6;
joined_r0x000142d91444:
  if (uVar9 != 0) goto LAB_142d91466;
  iVar16 = (int)pTVar17;
  uVar18 = (int)pTVar20 + 0x20;
  pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)uVar18;
  uVar15 = iVar16 + 1;
  pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)uVar15;
  uVar9 = uVar23;
  if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
  goto LAB_142d9148e;
  uVar9 = ((uint *)((longlong)FVar21 + 4))[iVar16];
  goto joined_r0x000142d91444;
LAB_142d91466:
  uVar8 = -uVar9 & uVar9;
  uVar2 = (ulonglong)uVar8 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_res10 = (int)lVar13;
  uVar9 = (uVar18 - 1) + local_res10;
  if ((int)uVar23 < (int)uVar9) {
    uVar9 = uVar23;
  }
LAB_142d9148e:
  uVar10 = pFVar3[0x2b].ComparisonIndex.Value;
  uVar14 = uVar10 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar8,uVar15);
  TStack_90.CurrentBitIndex = uVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar10 >> 5;
  TStack_90._28_4_ = uVar9;
  TStack_90.BaseBitIndex = uVar18;
  uStack_70 = CONCAT44(uStack_9c,pFVar3[0x27].ComparisonIndex.Value - pFVar3[0x2c].Number);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  if ((((int)uVar10 < 0) || ((int)uVar23 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar15 = pFVar3[0x2b].ComparisonIndex.Value;
  if (uVar10 != uVar15) {
    FVar21 = pFVar3[0x2a];
    if (pFVar3[0x2a] == (FName)0x0) {
      FVar21 = FVar1;
    }
    uVar23 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar16 * 4);
    while (uVar23 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar10 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_142d915a0;
      uVar23 = ((uint *)((longlong)FVar21 + 4))[lVar13];
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar10 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar15 < (int)uVar10) {
      uVar10 = uVar15;
    }
  }
LAB_142d915a0:
  do {
    if (pFVar3[0x27].ComparisonIndex.Value - pFVar3[0x2c].Number != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar10) && ((FName)TStack_90.Array == FVar1))
    goto LAB_142d913b2;
    plVar4 = *(longlong **)((longlong)TStack_90.CurrentBitIndex * 0x20 + 8 + (longlong)pFVar3[0x26])
    ;
    pFVar12 = (FName *)(**(code **)(*plVar4 + 0x10))(plVar4,local_68);
    if (*pFVar12 == param_2) break;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
  bVar6 = true;
  goto LAB_142d913b4;
}

// FindDrawer @ 142da64e0

TSharedPtr<FSidebarDrawer,1> * __thiscall
SSidebar::FindDrawer
          (SSidebar *this,TSharedPtr<FSidebarDrawer,1> *__return_storage_ptr__,FName param_1)

{
  FSidebarDrawer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->Drawers).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->Drawers).ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      __return_storage_ptr__->Object = (FSidebarDrawer *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    pFVar1 = *(FSidebarDrawer **)pFVar3;
    if (param_1 == (pFVar1->Config).UniqueId) break;
    pFVar3 = pFVar3 + 0x10;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetAllDrawers @ 142daa980

TArray<TSharedRef<FSidebarDrawer,1>,TSizedDefaultAllocator<32>_> * __thiscall
SSidebar::GetAllDrawers(SSidebar *this)

{
  return &this->Drawers;
}

// GetDockedDrawerIds @ 142dabd50

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
SSidebar::GetDockedDrawerIds
          (SSidebar *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *this_00;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FSparseArrayAllocationInfo local_a8;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res18 = (this->Drawers).ArrayNum;
  uVar16 = (ulonglong)(int)local_res18;
  pFVar22 = (this->Drawers).AllocatorInstance.Data;
  local_res20 = pFVar22 + uVar16 * 0x10;
  do {
    pFVar7 = local_res20;
    if ((this->Drawers).ArrayNum != (int)uVar16) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar22 == pFVar7) {
      return __return_storage_ptr__;
    }
    if (*(char *)((longlong)*(longlong **)pFVar22 + 0x1e1) != '\0') {
      iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      lVar17 = **(longlong **)pFVar22;
      if (iVar10 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar3 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar3 != (undefined1 *)0x0) {
          this_00 = puVar3;
        }
        bVar13 = (byte)iVar10 & 0x1f;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0x1f;
          bVar13 = bVar13 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) & ~(1 << (bVar13 & 0x1f));
      }
      else {
        iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        lVar2 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar9 * 0x10);
        iVar10 = iVar10 + -1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_a8,iVar9);
      pvVar8 = local_a8.Pointer;
      iVar10 = local_a8.Index;
      if (local_a8.Pointer != (longlong *)0x0) {
        *(longlong *)local_a8.Pointer = lVar17;
        *(undefined4 *)((longlong)local_a8.Pointer + 8) = 0xffffffff;
      }
      lVar17 = *(longlong *)local_a8.Pointer;
      uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar17);
      uVar11 = uVar11 + (int)((ulonglong)lVar17 >> 0x20);
      iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar1 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if ((iVar9 - iVar1 != 1) && (iVar9 != iVar1)) {
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar14 +
                        (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar11) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)
                 (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar9 * 0x10) ==
                *(longlong *)pvVar8) {
              if (iVar9 != -1) {
                *(longlong *)
                 (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar9 * 0x10) =
                     *(longlong *)pvVar8;
                TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,iVar10,1);
                goto LAB_142dac198;
              }
              break;
            }
            iVar9 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                            (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      uVar18 = 1;
      uVar15 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar15) {
        uVar16 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar17 & 0x1f);
      }
      if (((int)uVar15 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
        uVar11 = __return_storage_ptr__->HashSize - 1U & uVar11;
        *(uint *)((longlong)pvVar8 + 0xc) = uVar11;
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar4;
        }
        uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
        *(undefined4 *)((longlong)pvVar8 + 8) = *(undefined4 *)((longlong)FVar14 + uVar16 * 4);
        *(int *)((longlong)FVar14 + uVar16 * 4) = iVar10;
      }
      else {
        __return_storage_ptr__->HashSize = uVar18;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar18 != 0) {
          uVar11 = uVar18;
          if (uVar18 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar11 = 0;
              goto LAB_142dabfda;
            }
          }
          else {
LAB_142dabfda:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar11,4
                      );
          }
          if (0 < (int)uVar18) {
            uVar20 = (ulonglong)uVar18;
            uVar16 = 0;
            do {
              FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar4;
              }
              uVar12 = uVar16 & (longlong)(int)uVar18 - 1U;
              uVar16 = uVar16 + 1;
              *(undefined4 *)((longlong)FVar14 + uVar12 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize != 0) {
          iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_90 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_94 = 1;
          local_98 = 0;
          iStack_84 = 0;
          iStack_80 = 0;
          if (iVar10 != 0) {
            puVar5 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar21 = (uint *)puStack_90;
            if (puVar5 != (uint *)0x0) {
              puVar21 = puVar5;
            }
            uVar11 = *puVar21;
            iStack_80 = 0;
            local_98 = 0;
            while (uVar11 == 0) {
              iStack_80 = iStack_80 + 0x20;
              lVar17 = (longlong)local_98;
              local_98 = local_98 + 1;
              if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98)
              goto LAB_142dac0c9;
              uVar11 = puVar21[lVar17 + 1];
            }
            uStack_94 = -uVar11 & uVar11;
            uVar16 = (ulonglong)uStack_94 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iStack_84 = (int)lVar17 + -1 + iStack_80;
            if (iVar10 < iStack_84) {
LAB_142dac0c9:
              iStack_84 = iVar10;
            }
          }
          local_88 = 0xffffffff;
          local_70._padding_ = CONCAT44(uStack_94,local_98);
          local_70.CurrentBitIndex = iStack_84;
          local_70.UnvisitedBitMask = 0xffffffff;
          local_70._28_4_ = uStack_7c;
          local_70.BaseBitIndex = iStack_80;
          iVar9 = iStack_84;
          local_78 = __return_storage_ptr__;
          local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_90;
          if (iStack_84 < iVar10) {
            do {
              puVar19 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)&local_78->Elements);
              uVar6 = *puVar19;
              uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
              uVar11 = __return_storage_ptr__->HashSize - 1U &
                       uVar11 + (int)((ulonglong)uVar6 >> 0x20);
              *(uint *)((longlong)puVar19 + 0xc) = uVar11;
              FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar4;
              }
              uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
              *(undefined4 *)(puVar19 + 1) = *(undefined4 *)((longlong)FVar14 + uVar16 * 4);
              *(int *)((longlong)FVar14 + uVar16 * 4) = iVar9;
              local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
              iVar9 = local_70.CurrentBitIndex;
            } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
          }
        }
      }
    }
LAB_142dac198:
    uVar16 = (ulonglong)local_res18;
    pFVar22 = pFVar22 + 0x10;
  } while( true );
}

// GetDrawerCount @ 142dac2d0

int __thiscall SSidebar::GetDrawerCount(SSidebar *this)

{
  return (this->Drawers).ArrayNum;
}

// GetMainContent @ 142dad080

TSharedRef<SWidget,1> * __thiscall
SSidebar::GetMainContent(SSidebar *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  FSharedReferencer<1> FVar4;
  int iVar5;
  int iVar6;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  plVar3 = (longlong *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetContent,&local_28
            );
  iVar5 = 0;
  if (((*(int *)&(this->OnGetContent).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->OnGetContent).field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
    local_38 = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar6 = 2;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetContent,
               &local_28);
    if (*(int *)&(this->OnGetContent).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->OnGetContent).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    FVar4.ReferenceController = local_30;
    iVar6 = iVar5;
    iVar5 = 1;
  }
  __return_storage_ptr__->Object = local_38;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (iVar6 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if (iVar5 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return __return_storage_ptr__;
}

// GetOpenedDrawerId @ 142daeb40

FName __thiscall SSidebar::GetOpenedDrawerId(SSidebar *this)

{
  int iVar1;
  SSidebarContainer *pSVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint uVar7;
  FName FVar8;
  longlong lVar9;
  FName in_RDX;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  
  pTVar11 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar11;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_142daeb81:
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7775876802932637247>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                        ,0x1c1,"ContainerWidget.IsValid()");
    pTVar11 = pTVar10;
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      FVar8 = (FName)(*pcVar4)();
      return FVar8;
    }
  }
  else {
    aVar5 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar14;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142daeb81;
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar15 = aVar5 == aVar6;
      if (bVar15) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar15);
    pSVar2 = (this->ContainerWidgetWeak).Object;
    pTVar10 = pTVar11;
    if (pSVar2 == (SSidebarContainer *)0x0) goto LAB_142daeb81;
    iVar1 = (pSVar2->OpenDrawerWidgets).ArrayNum;
    if (iVar1 != 0) {
      uVar7 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar7 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        FVar8 = (FName)(*pcVar4)();
        return FVar8;
      }
      pFVar3 = (pSVar2->OpenDrawerWidgets).AllocatorInstance.Data;
      lVar9 = (longlong)(pSVar2->OpenDrawerWidgets).ArrayNum;
      pTVar10 = *(TReferenceControllerBase<1> **)(pFVar3 + lVar9 * 0x10 + -8);
      lVar9 = *(longlong *)(pFVar3 + lVar9 * 0x10 + -0x10);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar13 = *(TReferenceControllerBase<1> **)(lVar9 + 0x2b0);
      pTVar12 = pTVar13;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_142daec81:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pTVar13 = pTVar12;
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          FVar8 = (FName)(*pcVar4)();
          return FVar8;
        }
      }
      else {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          pTVar12 = pTVar14;
          if (aVar5 == (atomic<int>)0x0) goto LAB_142daec81;
          LOCK();
          aVar6 = pTVar13->SharedReferenceCount;
          bVar15 = aVar5 == aVar6;
          if (bVar15) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar15);
        pTVar14 = *(TReferenceControllerBase<1> **)(lVar9 + 0x2a8);
        pTVar12 = pTVar13;
        if (pTVar14 == (TReferenceControllerBase<1> *)0x0) goto LAB_142daec81;
      }
      *(longlong *)in_RDX = pTVar14->_padding_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      goto LAB_142daebb1;
    }
  }
  *(undefined8 *)in_RDX = 0;
LAB_142daebb1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return in_RDX;
}

// GetPinnedDrawerIds @ 142daf980

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
SSidebar::GetPinnedDrawerIds
          (SSidebar *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *this_00;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FSparseArrayAllocationInfo local_a8;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res18 = (this->Drawers).ArrayNum;
  uVar16 = (ulonglong)(int)local_res18;
  pFVar22 = (this->Drawers).AllocatorInstance.Data;
  local_res20 = pFVar22 + uVar16 * 0x10;
  do {
    pFVar7 = local_res20;
    if ((this->Drawers).ArrayNum != (int)uVar16) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar22 == pFVar7) {
      return __return_storage_ptr__;
    }
    if ((char)(*(longlong **)pFVar22)[0x3c] != '\0') {
      iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      lVar17 = **(longlong **)pFVar22;
      if (iVar10 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar3 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar3 != (undefined1 *)0x0) {
          this_00 = puVar3;
        }
        bVar13 = (byte)iVar10 & 0x1f;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0x1f;
          bVar13 = bVar13 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar10 >> 5) * 4) & ~(1 << (bVar13 & 0x1f));
      }
      else {
        iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        lVar2 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar9 * 0x10);
        iVar10 = iVar10 + -1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_a8,iVar9);
      pvVar8 = local_a8.Pointer;
      iVar10 = local_a8.Index;
      if (local_a8.Pointer != (longlong *)0x0) {
        *(longlong *)local_a8.Pointer = lVar17;
        *(undefined4 *)((longlong)local_a8.Pointer + 8) = 0xffffffff;
      }
      lVar17 = *(longlong *)local_a8.Pointer;
      uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar17);
      uVar11 = uVar11 + (int)((ulonglong)lVar17 >> 0x20);
      iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar1 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if ((iVar9 - iVar1 != 1) && (iVar9 != iVar1)) {
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar14 +
                        (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar11) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)
                 (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar9 * 0x10) ==
                *(longlong *)pvVar8) {
              if (iVar9 != -1) {
                *(longlong *)
                 (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar9 * 0x10) =
                     *(longlong *)pvVar8;
                TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,iVar10,1);
                goto LAB_142dafdc8;
              }
              break;
            }
            iVar9 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                            (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      uVar18 = 1;
      uVar15 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar15) {
        uVar16 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar17 & 0x1f);
      }
      if (((int)uVar15 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
        uVar11 = __return_storage_ptr__->HashSize - 1U & uVar11;
        *(uint *)((longlong)pvVar8 + 0xc) = uVar11;
        FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar4;
        }
        uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
        *(undefined4 *)((longlong)pvVar8 + 8) = *(undefined4 *)((longlong)FVar14 + uVar16 * 4);
        *(int *)((longlong)FVar14 + uVar16 * 4) = iVar10;
      }
      else {
        __return_storage_ptr__->HashSize = uVar18;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar18 != 0) {
          uVar11 = uVar18;
          if (uVar18 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar11 = 0;
              goto LAB_142dafc0a;
            }
          }
          else {
LAB_142dafc0a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar11,4
                      );
          }
          if (0 < (int)uVar18) {
            uVar20 = (ulonglong)uVar18;
            uVar16 = 0;
            do {
              FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar4;
              }
              uVar12 = uVar16 & (longlong)(int)uVar18 - 1U;
              uVar16 = uVar16 + 1;
              *(undefined4 *)((longlong)FVar14 + uVar12 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize != 0) {
          iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_90 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_94 = 1;
          local_98 = 0;
          iStack_84 = 0;
          iStack_80 = 0;
          if (iVar10 != 0) {
            puVar5 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar21 = (uint *)puStack_90;
            if (puVar5 != (uint *)0x0) {
              puVar21 = puVar5;
            }
            uVar11 = *puVar21;
            iStack_80 = 0;
            local_98 = 0;
            while (uVar11 == 0) {
              iStack_80 = iStack_80 + 0x20;
              lVar17 = (longlong)local_98;
              local_98 = local_98 + 1;
              if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98)
              goto LAB_142dafcf9;
              uVar11 = puVar21[lVar17 + 1];
            }
            uStack_94 = -uVar11 & uVar11;
            uVar16 = (ulonglong)uStack_94 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iStack_84 = (int)lVar17 + -1 + iStack_80;
            if (iVar10 < iStack_84) {
LAB_142dafcf9:
              iStack_84 = iVar10;
            }
          }
          local_88 = 0xffffffff;
          local_70._padding_ = CONCAT44(uStack_94,local_98);
          local_70.CurrentBitIndex = iStack_84;
          local_70.UnvisitedBitMask = 0xffffffff;
          local_70._28_4_ = uStack_7c;
          local_70.BaseBitIndex = iStack_80;
          iVar9 = iStack_84;
          local_78 = __return_storage_ptr__;
          local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_90;
          if (iStack_84 < iVar10) {
            do {
              puVar19 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)&local_78->Elements);
              uVar6 = *puVar19;
              uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
              uVar11 = __return_storage_ptr__->HashSize - 1U &
                       uVar11 + (int)((ulonglong)uVar6 >> 0x20);
              *(uint *)((longlong)puVar19 + 0xc) = uVar11;
              FVar4 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar4;
              }
              uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
              *(undefined4 *)(puVar19 + 1) = *(undefined4 *)((longlong)FVar14 + uVar16 * 4);
              *(int *)((longlong)FVar14 + uVar16 * 4) = iVar9;
              local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
              iVar9 = local_70.CurrentBitIndex;
            } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
          }
        }
      }
    }
LAB_142dafdc8:
    uVar16 = (ulonglong)local_res18;
    pFVar22 = pFVar22 + 0x10;
  } while( true );
}

// GetState @ 142db1ce0

FSidebarState * __thiscall SSidebar::GetState(SSidebar *this,FSidebarState *__return_storage_ptr__)

{
  TArray<FSidebarDrawerState,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  SSidebarContainer *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  int iVar9;
  FSidebarState *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  float fVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_50;
  
  pTVar1 = &__return_storage_ptr__->DrawerStates;
  __return_storage_ptr__->DrawerSize = 0.0;
  __return_storage_ptr__->ContentSize = 0.0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DrawerStates).ArrayNum = 0;
  (__return_storage_ptr__->DrawerStates).ArrayMax = 0;
  __return_storage_ptr__->bHidden = false;
  local_50 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = local_50->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        local_50 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142db1d48;
      }
      LOCK();
      aVar8 = local_50->SharedReferenceCount;
      bVar18 = aVar7 == aVar8;
      if (bVar18) {
        local_50->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar18);
    pSVar5 = (this->ContainerWidgetWeak).Object;
    if (pSVar5 != (SSidebarContainer *)0x0) {
      fVar2 = pSVar5->SidebarSizePercent;
      fVar19 = __real_3f800000 - fVar2;
      __return_storage_ptr__->DrawerSize = fVar2;
      __return_storage_ptr__->ContentSize = fVar19;
      goto LAB_142db1d75;
    }
  }
LAB_142db1d48:
  bVar18 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_7775876802932637012>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                      ,0x2ac,"ContainerWidget.IsValid()");
  if (bVar18) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FSidebarState *)(*pcVar6)();
    return pFVar10;
  }
LAB_142db1d75:
  uVar3 = (this->Drawers).ArrayNum;
  uVar11 = (ulonglong)(int)uVar3;
  pFVar17 = (this->Drawers).AllocatorInstance.Data;
  pFVar15 = pFVar17 + uVar11 * 0x10;
  do {
    if ((this->Drawers).ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar17 == pFVar15) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      return __return_storage_ptr__;
    }
    iVar9 = (__return_storage_ptr__->DrawerStates).ArrayNum;
    lVar4 = *(longlong *)pFVar17;
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    pFVar16 = (FScriptContainerElement *)(lVar4 + 0x188);
    pFVar13 = pFVar12 + (longlong)iVar9 * 0x60;
    while( true ) {
      if ((__return_storage_ptr__->DrawerStates).ArrayNum != iVar9) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FSidebarDrawerState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar12 == pFVar13) break;
      if (*(longlong *)pFVar12 == *(longlong *)pFVar16) goto LAB_142db1f2c;
      pFVar12 = pFVar12 + 0x60;
    }
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar12 <= pFVar16) &&
        (pFVar16 < pFVar12 + (longlong)(__return_storage_ptr__->DrawerStates).ArrayMax * 0x60)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSidebarState *)(*pcVar6)();
      return pFVar10;
    }
    iVar9 = (__return_storage_ptr__->DrawerStates).ArrayNum;
    if (iVar9 == (__return_storage_ptr__->DrawerStates).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&pTVar1->AllocatorInstance,
                         &(__return_storage_ptr__->DrawerStates).ArrayMax);
    }
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    (__return_storage_ptr__->DrawerStates).ArrayNum = iVar9 + 1;
    lVar14 = (longlong)iVar9 * 0x60;
    *(longlong *)(pFVar12 + lVar14) = *(longlong *)pFVar16;
    *(undefined8 *)
     &((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar12 + lVar14 + 8))->
      Elements = 0;
    *(undefined8 *)(pFVar12 + lVar14 + 0x10) = 0;
    *(undefined8 *)(pFVar12 + lVar14 + 0x28) = 0;
    *(undefined4 *)(pFVar12 + lVar14 + 0x30) = 0;
    *(undefined4 *)(pFVar12 + lVar14 + 0x34) = 0x80;
    *(undefined4 *)(pFVar12 + lVar14 + 0x38) = 0xffffffff;
    *(undefined4 *)(pFVar12 + lVar14 + 0x3c) = 0;
    *(undefined8 *)(pFVar12 + lVar14 + 0x48) = 0;
    *(undefined4 *)(pFVar12 + lVar14 + 0x50) = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar12 + lVar14 + 8),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar4 + 400));
    pFVar12[lVar14 + 0x58] = *(FScriptContainerElement *)(lVar4 + 0x1e0);
    pFVar12[lVar14 + 0x59] = *(FScriptContainerElement *)(lVar4 + 0x1e1);
LAB_142db1f2c:
    pFVar17 = pFVar17 + 0x10;
    uVar11 = (ulonglong)uVar3;
  } while( true );
}

// GetTabLocation @ 142db1f70

ESidebarTabLocation __thiscall SSidebar::GetTabLocation(SSidebar *this)

{
  return this->TabLocation;
}

// HasDrawerDocked @ 142db3350

bool __thiscall SSidebar::HasDrawerDocked(SSidebar *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(char *)(*(longlong *)pFVar2 + 0x1e1) != '\0') {
      return true;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return false;
}

// HasDrawerOpened @ 142db33d0

bool __thiscall SSidebar::HasDrawerOpened(SSidebar *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(char *)(*(longlong *)pFVar2 + 0x182) != '\0') {
      return true;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return false;
}

// HasDrawerPinned @ 142db3450

bool __thiscall SSidebar::HasDrawerPinned(SSidebar *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(char *)(*(longlong *)pFVar2 + 0x1e0) != '\0') {
      return true;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return false;
}

// IsDrawerDocked @ 142db5620

bool __thiscall SSidebar::IsDrawerDocked(SSidebar *this,FName param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar5 = pFVar2 + (longlong)(this->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar2 == pFVar5) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
LAB_142db565e:
      uVar3 = 0;
LAB_142db5660:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (bool)uVar3;
    }
    pFVar1 = *(FName **)pFVar2;
    if (param_1 == *pFVar1) {
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar1 == (FName *)0x0) goto LAB_142db565e;
      uVar3 = *(undefined1 *)((longlong)&pFVar1[0x3c].ComparisonIndex.Value + 1);
      goto LAB_142db5660;
    }
    pFVar2 = pFVar2 + 0x10;
  } while( true );
}

// IsDrawerOpened @ 142db56a0

bool __thiscall SSidebar::IsDrawerOpened(SSidebar *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar3 = (this->Drawers).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if ((*(char *)((longlong)&(*(FName **)pFVar3)[0x30].ComparisonIndex.Value + 2) != '\0') &&
       (**(FName **)pFVar3 == param_1)) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// IsDrawerPinned @ 142db5740

bool __thiscall SSidebar::IsDrawerPinned(SSidebar *this,FName param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar5 = pFVar2 + (longlong)(this->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar2 == pFVar5) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
LAB_142db577e:
      uVar3 = 0;
LAB_142db5780:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (bool)uVar3;
    }
    pFVar1 = *(FName **)pFVar2;
    if (param_1 == *pFVar1) {
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar1 == (FName *)0x0) goto LAB_142db577e;
      uVar3 = (undefined1)pFVar1[0x3c].ComparisonIndex.Value;
      goto LAB_142db5780;
    }
    pFVar2 = pFVar2 + 0x10;
  } while( true );
}

// IsHorizontal @ 142db57d0

bool __thiscall SSidebar::IsHorizontal(SSidebar *this)

{
  if ((this->TabLocation != Top) && (this->TabLocation != Bottom)) {
    return false;
  }
  return true;
}

// IsVertical @ 142db7190

bool __thiscall SSidebar::IsVertical(SSidebar *this)

{
  if ((this->TabLocation != Left) && (this->TabLocation != Right)) {
    return false;
  }
  return true;
}

// OnDrawerTabDockToggled @ 142dbe0e0

void __thiscall
SSidebar::OnDrawerTabDockToggled(SSidebar *this,TSharedRef<FSidebarDrawer,1> *param_1,bool param_2)

{
  SSidebarContainer *pSVar1;
  FSidebarDrawer *pFVar2;
  SSidebarDrawer *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FGeometry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  float fVar10;
  float local_res10;
  
  SetDrawerDocked(this,(param_1->Object->Config).UniqueId,param_2);
  if ((!param_2) && ((param_1->Object->DrawerWidget).Object != (SSidebarDrawer *)0x0)) {
    pTVar8 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142dbe140;
        }
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar9 = aVar5 == aVar6;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar9);
      pSVar1 = (this->ContainerWidgetWeak).Object;
      if (pSVar1 != (SSidebarContainer *)0x0) {
        if (((pSVar1->DrawersOverlay).Object == (SOverlay *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = SWidget::GetTickSpaceGeometry((SWidget *)(pSVar1->DrawersOverlay).Object);
        local_res10 = SUB84(pFVar7->Size,0);
        local_res10 = local_res10 * pSVar1->SidebarSizePercent;
        pFVar2 = param_1->Object;
        if (((pFVar2->DrawerWidget).Object == (SSidebarDrawer *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar3 = (pFVar2->DrawerWidget).Object;
        fVar10 = pSVar3->TargetDrawerSize;
        if (local_res10 <= pSVar3->TargetDrawerSize) {
          fVar10 = local_res10;
        }
        if (fVar10 <= pSVar3->MinDrawerSize) {
          fVar10 = pSVar3->MinDrawerSize;
        }
        pSVar3->CurrentSize = fVar10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        return;
      }
    }
LAB_142dbe140:
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7775876802932636953>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                       ,0x2e7,"ContainerWidget.IsValid()");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return;
}

// OnDrawerTabPinToggled @ 142dbe260

void __thiscall
SSidebar::OnDrawerTabPinToggled(SSidebar *this,TSharedRef<FSidebarDrawer,1> *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    bVar4 = false;
    if (*(FSidebarDrawer **)pFVar2 == param_1->Object) {
      bVar4 = param_2;
    }
    SetDrawerPinned(this,((*(FSidebarDrawer **)pFVar2)->Config).UniqueId,bVar4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// OnGetTabDrawerContextMenuWidget @ 142dbe710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SSidebar::OnGetTabDrawerContextMenuWidget
          (SSidebar *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<FSidebarDrawer,1> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  SWidget *pSVar5;
  FSidebarDrawer *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  UToolMenus *this_00;
  FName *pFVar14;
  UToolMenu *this_01;
  TSharedRef<SWidget,1> *pTVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  longlong *plVar20;
  TReferenceControllerBase<1> *pTVar21;
  FName FVar22;
  undefined1 auStack_308 [32];
  undefined1 local_2d8 [8];
  FDelegateAllocation local_2d0;
  ulonglong local_2c0;
  FName local_2b8;
  undefined2 local_2b0;
  undefined2 uStack_2ae;
  TSharedRef<FSidebarDrawer,1> *local_2a8;
  undefined1 local_2a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_288;
  ForAnyElementType FStack_280;
  int local_278;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  int local_260;
  FName local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  SSidebar *local_248;
  UToolMenus *local_240;
  FName local_238 [2];
  FToolMenuInsert local_228;
  TSharedRef<SWidget,1> local_218;
  TSharedPtr<FUICommandList,1> local_208;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDelegateAllocation *local_198;
  FToolMenuContext local_188;
  FName local_118;
  FName local_110;
  TSharedRef<SWidget,1> local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TSharedPtr<FExtender,1> local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_2c0 = local_2c0 & 0xffffffff00000000;
  local_2a8 = param_1;
  local_248 = this;
  this_00 = UToolMenus::Get();
  local_240 = this_00;
  if ((this_00 == (UToolMenus *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar12 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(FVar12.ReferenceController)->SharedReferenceCount;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    pTVar21 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    pFVar14 = ::FName::FName(&local_258,L"SidebarTabMenu");
    bVar13 = UToolMenus::IsMenuRegistered(this_00,*pFVar14);
    if (!bVar13) {
      local_2c0 = 0;
      pFVar14 = ::FName::FName(local_238,L"SidebarTabMenu");
      this_01 = UToolMenus::RegisterMenu(this_00,*pFVar14,(FName)0x0,Menu,true);
      if (((this_01 == (UToolMenu *)0x0) || (((uint)this_01->_padding_ >> 0x1e & 1) != 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(NewMenu)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                              ,0x12d,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar8)();
        return pTVar15;
      }
      local_2b8.ComparisonIndex.Value = 0;
      local_2b8.Number = 0;
      local_2b0._0_1_ = Default;
      local_2b0._1_1_ = Log|Insert;
      local_2d8 = (undefined1  [8])0x0;
      local_2d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
                 (FWriteAccessScope *)&local_1b0);
      local_198 = &local_2d0;
      puVar16 = UE::Core::Private::DelegateAllocate(0x38,&local_2d0);
      FVar22 = local_238[0];
      if (puVar16 != (undefined8 *)0x0) {
        uStack_250 = 0;
        local_258 = (FName)BuildOptionsMenu;
        uStack_24c = local_208.SharedReferenceCount.ReferenceController._4_4_;
        pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_108);
        FVar22 = (FName)(pTVar15->SharedReferenceCount).ReferenceController;
        pSVar5 = pTVar15->Object;
        if (FVar22 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar22 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)((longlong)FVar22 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
          UNLOCK();
        }
        *puVar16 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVUToolMenu___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar16[2] = uVar17;
        *puVar16 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSSidebar___00__A6AXPEAVUToolMenu___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar16[3] = pSVar5;
        *(FName *)(puVar16 + 4) = FVar22;
        if (FVar22 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar22 + 0xc) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 0xc) + 1);
          UNLOCK();
        }
        bVar11 = true;
        bVar10 = true;
        bVar9 = true;
        *(FName *)(puVar16 + 5) = local_258;
        puVar16[6] = CONCAT44(uStack_24c,uStack_250);
        this = local_248;
      }
      if (bVar9) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar22);
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar22);
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
      }
      if (local_1b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
      }
      TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *)local_2a0,
                 (TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *)local_2d8);
      local_278 = 0;
      local_260 = 0;
      local_288.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_280.Data = (FScriptContainerElement *)0x0;
      local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_268.Data = (FScriptContainerElement *)0x0;
      pFVar14 = ::FName::FName(&local_118,L"Options");
      local_228.Position = (EToolMenuInsertType)local_2b0;
      local_228.Fallback = local_2b0._1_1_;
      local_228._10_2_ = uStack_2ae;
      local_228.Name = local_2b8;
      UToolMenu::AddDynamicSection
                (this_01,*pFVar14,(FNewSectionConstructChoice *)local_2a0,&local_228);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_270,(FWriteAccessScope *)&local_1f8);
      if ((local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_268.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
        local_260 = 0;
      }
      if (local_1f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
      }
      if (FStack_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_268.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_288,(FWriteAccessScope *)&local_1e0);
      if ((local_278 != 0) && (FStack_280.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_280.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_280,0,0,0x10);
        local_278 = 0;
      }
      if (local_1e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
      }
      if (FStack_280.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_280.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_288.AccessDetector);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a0);
      if ((void *)local_2a0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2a0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
                 (FWriteAccessScope *)&local_1c8);
      if ((local_2d0.DelegateSize != 0) &&
         (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2d0,0,0,0x10);
        local_2d0.DelegateSize = 0;
      }
      if (local_1c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
      }
      if (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2d8);
      param_1 = local_2a8;
    }
    pUVar18 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar18,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = USidebarButtonMenuContext::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar19);
    local_c8._8_8_ = pUVar18;
    pUVar18 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar20 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    pTVar21 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar6 = param_1->Object;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_218);
    pTVar7 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar15->Object;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_f8 = *(undefined4 *)(pUVar18 + 1);
    uStack_f4 = *(undefined4 *)&pUVar18[1].field_0x4;
    uStack_f0 = *(undefined4 *)&pUVar18[1].field_0x8;
    uStack_ec = *(undefined4 *)&pUVar18[1].field_0xc;
    plVar20 = *(longlong **)&pUVar18[1].field_0x8;
    *(SWidget **)(pUVar18 + 1) = pSVar5;
    *(TReferenceControllerBase<1> **)&pUVar18[1].field_0x8 = pTVar7;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_e8 = *(undefined4 *)&pUVar18[1].field_0x10;
    uStack_e4 = *(undefined4 *)&pUVar18[1].field_0x14;
    uStack_e0 = *(undefined4 *)&pUVar18[1].field_0x18;
    uStack_dc = *(undefined4 *)&pUVar18[1].field_0x1c;
    plVar20 = *(longlong **)&pUVar18[1].field_0x18;
    *(FSidebarDrawer **)&pUVar18[1].field_0x10 = pFVar6;
    *(TReferenceControllerBase<1> **)&pUVar18[1].field_0x18 = pTVar21;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar7->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar21->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar21->_padding_ + 8))(pTVar21,1);
      }
    }
    local_d8.Object = (FExtender *)0x0;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_208.Object = (FUICommandList *)0x0;
    local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FToolMenuContext::FToolMenuContext(&local_188,&local_208,&local_d8,pUVar18);
    pFVar14 = ::FName::FName(&local_110,L"SidebarTabMenu");
    UToolMenus::GenerateWidget(local_240,__return_storage_ptr__,*pFVar14,&local_188);
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_188.Extenders.AllocatorInstance.Data,
               local_188.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_188.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_188.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_188.CommandLists.AllocatorInstance.Data,
               local_188.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_188.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_188.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_188.ContextCleanupFuncs.AllocatorInstance.Data
               ,local_188.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_188.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_188.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_188.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_188.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_188.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_188.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_188.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.ContextObjects.AllocatorInstance.Data);
    }
    pTVar21 = (local_2a8->SharedReferenceCount).ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  return __return_storage_ptr__;
}

// OnTabDrawerButtonPressed @ 142dc9f30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSidebar::OnTabDrawerButtonPressed(SSidebar *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  SSidebarContainer *pSVar1;
  FSidebarDrawer *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  uint uVar6;
  char cVar7;
  atomic<int> aVar8;
  FScriptContainerElement *pFVar9;
  FSlateApplication *this_00;
  FScriptContainerElement *pFVar10;
  SSidebarContainer *this_01;
  SSidebarContainer *pSVar11;
  SSidebarContainer *pSVar12;
  bool bVar13;
  TSharedPtr<SWidget,1> local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  pSVar1 = (SSidebarContainer *)(this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  pSVar12 = (SSidebarContainer *)0x0;
  this_01 = pSVar12;
  pSVar11 = pSVar1;
  if (pSVar1 != (SSidebarContainer *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      this_01 = (SSidebarContainer *)0x0;
      pSVar11 = pSVar12;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142dc9f75;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar1->_padding_;
      bVar13 = aVar5 == aVar8;
      if (bVar13) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar13);
    this_01 = (this->ContainerWidgetWeak).Object;
    pSVar11 = pSVar1;
  }
LAB_142dc9f75:
  pFVar2 = param_1->Object;
  if (pFVar2->bIsOpen == false) {
    if ((pFVar2->State).bIsDocked == false) {
      if (this_01 == (SSidebarContainer *)0x0) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7775876802932637434>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                            ,0x106,"ContainerWidget.IsValid()");
        if (bVar13) goto code_r0x000142dca13e;
      }
      else {
        SSidebarContainer::OpenDrawer_Internal(this_01,param_1,true);
      }
    }
  }
  else {
    pFVar9 = (this->Drawers).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)(this->Drawers).ArrayNum * 0x10;
    for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
      pFVar3 = *(FName **)pFVar9;
      if ((pFVar2->Config).UniqueId == *pFVar3) {
        pSVar12 = *(SSidebarContainer **)(pFVar9 + 8);
        if (pSVar12 != (SSidebarContainer *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar12->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar12->_padding_ + 1);
          UNLOCK();
        }
        local_30 = 0;
        local_38 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pFVar3 == (FName *)0x0) goto LAB_142dc9fd8;
        uVar6 = pFVar3[0x3c].ComparisonIndex.Value;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar12);
        if ((char)uVar6 == '\0') goto LAB_142dc9fe0;
        pFVar2 = param_1->Object;
        if (((pFVar2->DrawerWidget).Object == (SSidebarDrawer *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar7 = (**(code **)(((pFVar2->DrawerWidget).Object)->_padding_ + 0x1a0))();
        if (cVar7 == '\0') {
          this_00 = FSlateApplication::Get();
          local_48.Object = (SWidget *)(param_1->Object->DrawerWidget).Object;
          local_48.SharedReferenceCount.ReferenceController =
               (param_1->Object->DrawerWidget).SharedReferenceCount.ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FSlateApplication::SetKeyboardFocus(this_00,&local_48,SetDirectly);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
        }
        goto LAB_142dca14c;
      }
    }
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_142dc9fd8:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar12);
LAB_142dc9fe0:
    if (this_01 == (SSidebarContainer *)0x0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7775876802932637444>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                          ,0xfc,"ContainerWidget.IsValid()");
      if (bVar13) {
code_r0x000142dca13e:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      SSidebarContainer::CloseDrawer_Internal(this_01,param_1,true,true);
    }
  }
LAB_142dca14c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  return;
}

// RebuildDrawer @ 142dd0c80

void __thiscall SSidebar::RebuildDrawer(SSidebar *this,FName param_1,bool param_2)

{
  FName *pFVar1;
  FName this_00;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  
  pFVar3 = (this->Drawers).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)(this->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar3 == pFVar5) {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
      FVar6 = FVar4;
LAB_142dd0ccb:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar4);
LAB_142dd0cd0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar6);
      return;
    }
    pFVar1 = *(FName **)pFVar3;
    if (param_1 == *pFVar1) {
      FVar6 = *(FName *)(pFVar3 + 8);
      if (FVar6 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar6 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar6 + 8) + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((pFVar1 == (FName *)0x0) || (pFVar1[0x1e] != (FName)0x0)) ||
         ((param_2 && (bVar2 = IsDrawerOpened(this,param_1), !bVar2)))) goto LAB_142dd0cd0;
      FVar4 = pFVar1[0x25];
      this_00 = pFVar1[0x24];
      if (FVar4 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar4 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar4 + 8) + 1);
        UNLOCK();
      }
      if (this_00 != (FName)0x0) {
        SSidebarDrawerContent::BuildContent((SSidebarDrawerContent *)this_00);
      }
      goto LAB_142dd0ccb;
    }
    pFVar3 = pFVar3 + 0x10;
  } while( true );
}

// RegisterDrawer @ 142dd2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142dd2610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall SSidebar::RegisterDrawer(SSidebar *this,FSidebarDrawerConfig *param_1)

{
  int *piVar1;
  TArray<TSharedRef<FSidebarDrawer,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  SWidget *pSVar3;
  TSharedRef<FSidebarDrawer,1> *pTVar4;
  SSidebarContainer *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  atomic<int> aVar9;
  FSidebarDrawer *pFVar10;
  FName FVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  atomic<int> aVar18;
  FScriptContainerElement *pFVar19;
  TIntrusiveReferenceController<FSidebarDrawer,1> *this_01;
  FArguments *pFVar20;
  TSharedRef<SSidebarDrawerContent,1> *pTVar21;
  FName FVar22;
  FArguments *pFVar23;
  undefined8 *puVar24;
  TSharedRef<SWidget,1> *pTVar25;
  ulong64 uVar26;
  FScriptContainerElement *pFVar27;
  FName *pFVar28;
  TReferenceControllerBase<1> *pTVar29;
  TReferenceControllerBase<1> *pTVar30;
  FMemScope FVar31;
  float fVar32;
  undefined1 auStackY_7c8 [32];
  ESidebarTabLocation local_778 [16];
  TSharedRef<FSidebarDrawer,1> local_768;
  code *local_758;
  ulonglong uStack_750;
  undefined4 local_748;
  FLLMScope local_744;
  FName local_740;
  FName local_738;
  FSharedReferencer<1> local_730;
  FName local_728;
  TReferenceControllerBase<1> *local_720;
  undefined8 *local_718;
  FMemScope local_710;
  FName local_708;
  FSharedReferencer<1> local_700;
  FName local_6f8;
  T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&> local_6f0;
  FMemScope local_6e8;
  FName local_6e0;
  TReferenceControllerBase<1> *local_6d8;
  FName local_6d0;
  TReferenceControllerBase<1> *local_6c8;
  TAttribute<EVisibility> local_6c0;
  T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,ESidebarTabLocation_&&> local_6a0;
  TSharedRef<FSidebarDrawer,1> local_688;
  FDestructionSentinel local_678;
  undefined1 *local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  TSharedRef<SSidebarDrawerContent,1> local_638;
  TSharedRef<SWidget,1> local_628;
  code *local_618;
  ulonglong uStack_610;
  code *local_608;
  ulonglong uStack_600;
  TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
  local_5f8;
  undefined1 local_5e0 [520];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  FSlateBaseNamedArgs local_378;
  FScopedWidgetSlotArguments local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  local_748 = 0;
  pFVar19 = (this->Drawers).AllocatorInstance.Data;
  pFVar27 = pFVar19 + (longlong)(this->Drawers).ArrayNum * 0x10;
  for (; pFVar19 != pFVar27; pFVar19 = pFVar19 + 0x10) {
    pFVar28 = *(FName **)pFVar19;
    if (param_1->UniqueId == *pFVar28) {
      pTVar30 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_650 = 0;
      local_658 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
      if (pFVar28 != (FName *)0x0) {
        return false;
      }
      goto LAB_142dd2216;
    }
  }
  local_640 = 0;
  local_648 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_142dd2216:
  this_01 = ::operator_new(0x228);
  if (this_01 == (TIntrusiveReferenceController<FSidebarDrawer,1> *)0x0) {
    local_768.Object = ___xmm_00000000000000000000000000000010;
    local_768.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    local_768.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         SharedPointerInternals::TIntrusiveReferenceController<FSidebarDrawer,1>::
         TIntrusiveReferenceController<FSidebarDrawer,1><FSidebarDrawerConfig>(this_01,param_1);
    local_768.Object =
         (FSidebarDrawer *)
         &((TIntrusiveReferenceController<FSidebarDrawer,1> *)
          local_768.SharedReferenceCount.ReferenceController)->ObjectStorage;
    if ((local_768.Object == (FSidebarDrawer *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
  }
  pFVar10 = local_768.Object;
  ((local_768.Object)->State).DrawerId = (param_1->InitialState).DrawerId;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&((local_768.Object)->State).SelectedSections,&(param_1->InitialState).SelectedSections
            );
  (pFVar10->State).bIsPinned = (param_1->InitialState).bIsPinned;
  (pFVar10->State).bIsDocked = (param_1->InitialState).bIsDocked;
  (local_768.Object)->bDisablePin = this->bDisablePin;
  (local_768.Object)->bDisableDock = this->bDisableDock;
  FVar22 = (FName)((local_768.Object)->Config).OverrideContentWidget.Object;
  if (FVar22 == (FName)0x0) {
    pFVar20 = SSidebarDrawerContent::FArguments::FArguments((FArguments *)&local_378);
    local_6f0.Arg0 = &local_768;
    bVar8 = true;
    bVar7 = true;
    bVar14 = true;
    bVar6 = true;
    bVar12 = false;
    FLLMScope::FLLMScope(&local_744,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_6f8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_6e8,&local_6f8,true);
    TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
    ::
    TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
              (&local_5f8,"SSidebarDrawerContent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
               ,0x4a,&local_6f0);
    FMemScope::~FMemScope(&local_6e8);
    FLLMScope::~FLLMScope(&local_744);
    pTVar21 = TSlateDecl<SSidebarDrawerContent,RequiredArgs::T1RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&>_>
              ::operator<<=(&local_5f8,&local_638,pFVar20);
    local_6d8 = (pTVar21->SharedReferenceCount).ReferenceController;
    FVar22 = (FName)pTVar21->Object;
    if (local_6d8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_6d8->SharedReferenceCount = (atomic<int>)((int)local_6d8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = &local_6e0;
    local_6e0 = FVar22;
  }
  else {
    local_6c8 = ((local_768.Object)->Config).OverrideContentWidget.SharedReferenceCount.
                ReferenceController;
    bVar8 = false;
    bVar7 = false;
    bVar14 = false;
    bVar6 = false;
    bVar12 = true;
    if (local_6c8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_6c8->SharedReferenceCount = (atomic<int>)((int)local_6c8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = &local_6d0;
    local_6d0 = FVar22;
  }
  if (&(local_768.Object)->ContentWidget != (TSharedPtr<SWidget,1> *)pFVar28) {
    ((local_768.Object)->ContentWidget).Object = (SWidget *)FVar22;
    pFVar28->ComparisonIndex = 0;
    pFVar28->Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&((local_768.Object)->ContentWidget).SharedReferenceCount,
               (FSharedReferencer<1> *)(pFVar28 + 1));
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6d8);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638.SharedReferenceCount.ReferenceController);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5f8._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_378);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6c8);
  }
  bVar6 = false;
  bVar12 = false;
  if (((this->TabButtonContainer).Object == (SScrollBox *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  FVar22 = (FName)SScrollBox::AddSlot((this->TabButtonContainer).Object,&local_178);
  local_740 = FVar22;
  pFVar23 = SSidebarButton::FArguments::FArguments((FArguments *)local_5e0);
  fVar32 = __real_42c80000;
  if (this->bAlwaysUseMaxButtonSize != false) {
    fVar32 = __real_43480000;
  }
  pFVar23->_MinButtonSize = fVar32;
  pFVar23->_MaxButtonSize = 200.0;
  pFVar23->_ButtonThickness = 25.0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_OnPressed,
             (FWriteAccessScope *)&local_678);
  local_660 = &(pFVar23->_OnPressed).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_660);
  FVar31 = local_710;
  if (puVar24 != (undefined8 *)0x0) {
    local_758 = OnTabDrawerButtonPressed;
    uStack_750 = (ulonglong)local_688.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_628);
    FVar31 = (FMemScope)(pTVar25->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar25->Object;
    if (FVar31 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar31 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar31 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar31 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar31 + 8) + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar12 = true;
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VFSidebarDrawer___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSidebar___00__A6AXAEBV__TSharedRef_VFSidebarDrawer___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = pSVar3;
    *(FMemScope *)(puVar24 + 4) = FVar31;
    if (FVar31 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar31 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar31 + 0xc) + 1);
      UNLOCK();
    }
    puVar24[5] = local_758;
    puVar24[6] = uStack_750;
    FVar22 = local_740;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar31);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar31);
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  local_758 = OnDrawerTabPinToggled;
  uStack_750 = uStack_750 & 0xffffffff00000000;
  local_618 = OnDrawerTabPinToggled;
  uStack_610 = uStack_750;
  TDelegateRegistration<void___cdecl(TSharedRef<FSidebarDrawer,1>_const_&,bool),FDefaultDelegateUserPolicy>
  ::BindSP<SSidebar>((TDelegateRegistration<void___cdecl(TSharedRef<FSidebarDrawer,1>_const_&,bool),FDefaultDelegateUserPolicy>
                      *)&pFVar23->_OnPinToggled,this,(pmf_c345f9cc *)&local_618);
  uStack_750 = uStack_750 & 0xffffffff00000000;
  local_758 = OnDrawerTabDockToggled;
  local_608 = OnDrawerTabDockToggled;
  uStack_600 = uStack_750;
  TDelegateRegistration<void___cdecl(TSharedRef<FSidebarDrawer,1>_const_&,bool),FDefaultDelegateUserPolicy>
  ::BindSP<SSidebar>((TDelegateRegistration<void___cdecl(TSharedRef<FSidebarDrawer,1>_const_&,bool),FDefaultDelegateUserPolicy>
                      *)&pFVar23->_OnDockToggled,this,(pmf_c345f9cc *)&local_608);
  local_688.Object = local_768.Object;
  local_688.SharedReferenceCount.ReferenceController =
       local_768.SharedReferenceCount.ReferenceController;
  if ((TIntrusiveReferenceController<FSidebarDrawer,1> *)
      local_768.SharedReferenceCount.ReferenceController !=
      (TIntrusiveReferenceController<FSidebarDrawer,1> *)0x0) {
    LOCK();
    (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_750 = uStack_750 & 0xffffffff00000000;
  local_758 = OnGetTabDrawerContextMenuWidget;
  pFVar23 = SSidebarButton::FArguments::
            OnGetContextMenuContent<SSidebar,TSharedRef<FSidebarDrawer,1>_>
                      (pFVar23,this,(pmf_97f62f56 *)&local_758,&local_688);
  local_778[0] = this->TabLocation;
  local_6a0.Arg0 = &local_768;
  local_6a0.Arg1 = local_778;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_748,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_740 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_710,&local_740,true);
  TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
  ::
  TSlateDecl<SSidebarButton,RequiredArgs::T2RequiredArgs<TSharedRef<FSidebarDrawer,1>_const_&,enum_ESidebarTabLocation_&&>_>
            (&local_728,"SSidebarButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
             ,0x4f,&local_6a0);
  FMemScope::~FMemScope(&local_710);
  FLLMScope::~FLLMScope((FLLMScope *)&local_748);
  FVar11 = local_728;
  local_708 = local_728;
  local_700.ReferenceController = local_720;
  if (local_720 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_720->SharedReferenceCount = (atomic<int>)((int)local_720->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&(local_768.Object)->ButtonWidget != (TSharedPtr<SWidget,1> *)&local_708) {
    ((local_768.Object)->ButtonWidget).Object = (SWidget *)local_728;
    local_708.ComparisonIndex.Value = 0;
    local_708.Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&((local_768.Object)->ButtonWidget).SharedReferenceCount,&local_700);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700.ReferenceController);
  if ((local_728 == (FName)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_728,(FSlateBaseNamedArgs *)pFVar23);
  SSidebarButton::Construct
            ((SSidebarButton *)local_728,pFVar23,(TSharedRef<FSidebarDrawer,1> *)*local_718,
             *(ESidebarTabLocation *)local_718[1]);
  if ((local_728 == (FName)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  if ((*(byte *)((longlong)local_728 + 0x30) & 0x10) == 0) {
    cVar15 = (**(code **)(*(longlong *)local_728 + 0x228))(local_728);
    bVar16 = 0;
    if (cVar15 != '\0') goto LAB_142dd285e;
  }
  else {
LAB_142dd285e:
    bVar16 = 0x20;
  }
  *(byte *)((longlong)local_728 + 0x30) = *(byte *)((longlong)local_728 + 0x30) & 0xdf;
  *(byte *)((longlong)local_728 + 0x30) = *(byte *)((longlong)local_728 + 0x30) | bVar16;
  if ((local_728 == (FName)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  *(byte *)((longlong)local_728 + 0x31) = *(byte *)((longlong)local_728 + 0x31) | 4;
  if ((local_728 == (FName)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  pTVar30 = local_720;
  local_720 = (TReferenceControllerBase<1> *)0x0;
  local_728.ComparisonIndex.Value = 0;
  local_728.Number = 0;
  if ((FVar11 == (FName)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  local_738 = FVar11;
  local_730.ReferenceController = pTVar30;
  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FName *)((longlong)FVar22 + 8) != &local_738) {
    *(FName *)((longlong)FVar22 + 8) = FVar11;
    local_738.ComparisonIndex.Value = 0;
    local_738.Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar22 + 0x10),&local_730);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_730.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
  if ((void *)local_390._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_390._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a8);
  if ((void *)local_3a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  if ((void *)local_3c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d8);
  if ((void *)local_3d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_5e0);
  TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_178);
  pTVar2 = &this->Drawers;
  pTVar4 = (TSharedRef<FSidebarDrawer,1> *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar4 <= &local_768) && (&local_768 < pTVar4 + (this->Drawers).ArrayMax)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  iVar17 = (this->Drawers).ArrayNum;
  piVar1 = &(this->Drawers).ArrayMax;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Drawers).ArrayNum = iVar17 + 1;
  pFVar19 = (pTVar2->AllocatorInstance).Data;
  *(FSidebarDrawer **)(pFVar19 + (longlong)iVar17 * 0x10) = local_768.Object;
  *(TReferenceControllerBase<1> **)(pFVar19 + (longlong)iVar17 * 0x10 + 8) =
       local_768.SharedReferenceCount.ReferenceController;
  if ((TIntrusiveReferenceController<FSidebarDrawer,1> *)
      local_768.SharedReferenceCount.ReferenceController !=
      (TIntrusiveReferenceController<FSidebarDrawer,1> *)0x0) {
    LOCK();
    (local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar22 = ((local_768.Object)->Config).UniqueId;
  if (((local_768.Object)->State).bIsPinned == false) {
    if (((local_768.Object)->State).bIsDocked != false) {
      SetDrawerDocked(this,FVar22,true);
    }
  }
  else {
    UndockAllDrawers(this);
    SetDrawerPinned(this,FVar22,true);
  }
  pTVar30 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  pTVar29 = pTVar30;
  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTVar30->SharedReferenceCount;
    do {
      pTVar29 = (TReferenceControllerBase<1> *)0x0;
      if (aVar9 == (atomic<int>)0x0) goto LAB_142dd2b55;
      LOCK();
      aVar18 = pTVar30->SharedReferenceCount;
      bVar12 = aVar9 == aVar18;
      if (bVar12) {
        pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar18 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar18;
    } while (!bVar12);
    this_00 = (this->ContainerWidgetWeak).Object;
    pTVar29 = pTVar30;
    if (this_00 != (SSidebarContainer *)0x0) {
      SSidebarContainer::UpdateDrawerTabAppearance(this_00);
      goto LAB_142dd2b82;
    }
  }
LAB_142dd2b55:
  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_7775876802932637592>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                      ,0x68,"ContainerWidget.IsValid()");
  pTVar30 = pTVar29;
  if (bVar12) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
LAB_142dd2b82:
  if ((this->bHideWhenAllDocked != false) && (bVar12 = AreAllDrawersDocked(this), !bVar12)) {
    local_6c0.Value = (EVisibility)EVisibility::Visible.Value.Value;
    local_6c0.bIsSet = true;
    local_6c0.Getter._16_8_ = 0;
    local_6c0.Getter._0_8_ = 0;
    local_6c0.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_6c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_768.SharedReferenceCount.ReferenceController);
  return true;
}

// RegisterDrawerSection @ 142dd2f30

bool __thiscall
SSidebar::RegisterDrawerSection
          (SSidebar *this,FName param_1,TSharedPtr<ISidebarDrawerContent,1> *param_2)

{
  FName *pFVar1;
  longlong lVar2;
  FName this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FName FVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  TPairInitializer<FName_const_&,TSharedRef<ISidebarDrawerContent,1>_&&> local_res8;
  ISidebarDrawerContent *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<ISidebarDrawerContent,1> **local_48;
  ISidebarDrawerContent **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pFVar8 = (this->Drawers).AllocatorInstance.Data;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  pFVar11 = pFVar8 + (longlong)(this->Drawers).ArrayNum * 0x10;
  for (; FVar10 = FVar9, pFVar8 != pFVar11; pFVar8 = pFVar8 + 0x10) {
    pFVar1 = *(FName **)pFVar8;
    if (param_1 == *pFVar1) {
      FVar10 = *(FName *)(pFVar8 + 8);
      if (FVar10 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar10 + 8) + 1);
        UNLOCK();
      }
      local_30 = 0;
      local_38 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar1 == (FName *)0x0) goto LAB_142dd2f7e;
      if ((param_2->Object == (ISidebarDrawerContent *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      (**(code **)(*(longlong *)param_2->Object + 8))(param_2->Object,&local_res8.Value);
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)local_res8.Value);
      if (pFVar1[0x27].ComparisonIndex.Value == pFVar1[0x2c].Number) goto LAB_142dd3069;
      FVar9 = pFVar1[0x2e];
      if (pFVar1[0x2e] == (FName)0x0) {
        FVar9 = (FName)(pFVar1 + 0x2d);
      }
      iVar7 = *(int *)((longlong)FVar9 +
                      (ulonglong)
                      (pFVar1[0x2f].ComparisonIndex.Value - 1 &
                      (int)((ulonglong)local_res8.Value >> 0x20) + uVar6) * 4);
      if (iVar7 == -1) goto LAB_142dd3069;
      lVar2 = *(longlong *)
               &((TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
                  *)(pFVar1 + 0x26))->Elements;
      goto LAB_142dd3050;
    }
  }
  goto LAB_142dd2f79;
  while (iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar2), iVar7 != -1) {
LAB_142dd3050:
    if (*(TSharedRef<ISidebarDrawerContent,1> **)((longlong)iVar7 * 0x20 + lVar2) ==
        local_res8.Value) goto LAB_142dd2f7e;
  }
LAB_142dd3069:
  if ((param_2->Object == (ISidebarDrawerContent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  local_58 = param_2->Object;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_58 == (ISidebarDrawerContent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_48 = &local_res8.Value;
  local_40 = &local_58;
  TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<ISidebarDrawerContent,1>_&&>_>
            ((TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
              *)(pFVar1 + 0x26),&local_res8,(bool *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  this_00 = pFVar1[0x24];
  FVar9 = pFVar1[0x25];
  if (FVar9 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)FVar9 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar9 + 8) + 1);
    UNLOCK();
  }
  if (this_00 != (FName)0x0) {
    SSidebarDrawerContent::BuildContent((SSidebarDrawerContent *)this_00);
  }
LAB_142dd2f79:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
LAB_142dd2f7e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar10);
  return false;
}

// RemoveAllDrawers @ 142dd4820

void __thiscall SSidebar::RemoveAllDrawers(SSidebar *this)

{
  int *piVar1;
  TArray<TSharedRef<FSidebarDrawer,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TSharedRef<FSidebarDrawer,1> *pTVar4;
  TSharedRef<FSidebarDrawer,1> *pTVar5;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->Drawers;
  iVar3 = (this->Drawers).ArrayNum;
  pTVar4 = (TSharedRef<FSidebarDrawer,1> *)(pTVar2->AllocatorInstance).Data;
  pTVar5 = pTVar4 + iVar3;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar4 == pTVar5) break;
    RemoveDrawer(this,pTVar4);
    pTVar4 = pTVar4 + 1;
  }
  DestructItems<TSharedRef<FSidebarDrawer,1>,int>
            ((TSharedRef<FSidebarDrawer,1> *)(pTVar2->AllocatorInstance).Data,
             (this->Drawers).ArrayNum);
  piVar1 = &(this->Drawers).ArrayMax;
  (this->Drawers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveDrawer @ 142dd4e60

void __thiscall SSidebar::RemoveDrawer(SSidebar *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  int *piVar1;
  FName FVar2;
  FSidebarDrawer *pFVar3;
  SScrollBox *this_00;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  SSidebarContainer *this_01;
  SSidebarContainer *pSVar8;
  SSidebarContainer *pSVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  TArray<TSharedRef<FSidebarDrawer,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  TSharedRef<SWidget,1> local_58;
  FReadAccessScope local_48;
  
  pSVar9 = (SSidebarContainer *)(this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  FVar2 = (param_1->Object->Config).UniqueId;
  this_01 = (SSidebarContainer *)0x0;
  pSVar8 = pSVar9;
  if (pSVar9 != (SSidebarContainer *)0x0) {
    iVar7 = (int)pSVar9->_padding_;
    do {
      this_01 = (SSidebarContainer *)0x0;
      pSVar8 = (SSidebarContainer *)0x0;
      if (iVar7 == 0) goto LAB_142dd4eb7;
      LOCK();
      iVar6 = (int)pSVar9->_padding_;
      bVar15 = iVar7 == iVar6;
      if (bVar15) {
        *(int *)&pSVar9->_padding_ = iVar7 + 1;
        iVar6 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar6;
    } while (!bVar15);
    this_01 = (this->ContainerWidgetWeak).Object;
    pSVar8 = pSVar9;
    if (this_01 != (SSidebarContainer *)0x0) {
      if ((param_1->Object->DrawerWidget).Object != (SSidebarDrawer *)0x0) {
        SSidebarContainer::RemoveDrawerOverlaySlot(this_01,param_1,false);
      }
      goto LAB_142dd4ee4;
    }
  }
LAB_142dd4eb7:
  bVar15 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_7775876802932637322>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                      ,0x176,"ContainerWidget.IsValid()");
  pSVar9 = pSVar8;
  if (bVar15) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_142dd4ee4:
  if ((param_1->Object->ButtonWidget).Object != (SWidget *)0x0) {
    if (((this->TabButtonContainer).Object == (SScrollBox *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = param_1->Object;
    this_00 = (this->TabButtonContainer).Object;
    if (((pFVar3->ButtonWidget).Object == (SWidget *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58.Object = (pFVar3->ButtonWidget).Object;
    local_58.SharedReferenceCount.ReferenceController =
         (pFVar3->ButtonWidget).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58.Object == (SWidget *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SScrollBox::RemoveSlot(this_00,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  pTVar14 = &this->Drawers;
  pFVar12 = (pTVar14->AllocatorInstance).Data;
  iVar7 = (this->Drawers).ArrayNum;
  pFVar11 = pFVar12;
  do {
    if (pFVar11 == pFVar12 + (longlong)iVar7 * 0x10) {
LAB_142dd50e6:
      pFVar3 = param_1->Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar3->DrawerClosedDelegate,&local_48);
      if ((*(int *)&(pFVar3->DrawerClosedDelegate).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(pFVar3->DrawerClosedDelegate).field_0x8,
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,FVar2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (this_01 != (SSidebarContainer *)0x0) {
        SSidebarContainer::UpdateDrawerTabAppearance(this_01);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar9);
      return;
    }
    if (FVar2 == **(FName **)pFVar11) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar12 >> 4);
      if (uVar10 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar10 < iVar7) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (pTVar14->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar12 + 8));
        iVar7 = (this->Drawers).ArrayNum + ~uVar10;
        if (iVar7 != 0) {
          memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar7 << 4);
        }
        piVar1 = &(this->Drawers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar14->AllocatorInstance,(this->Drawers).ArrayNum,
                   &(this->Drawers).ArrayMax);
      }
      goto LAB_142dd50e6;
    }
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// SetDrawerDocked @ 142dd85b0

void __thiscall SSidebar::SetDrawerDocked(SSidebar *this,FName param_1,bool param_2)

{
  int iVar1;
  FName *pFVar2;
  SSidebarContainer *this_00;
  SSidebar *pSVar3;
  longlong *plVar4;
  code *pcVar5;
  atomic<int> aVar6;
  char cVar7;
  TReferenceControllerBase<1> *pTVar8;
  atomic<int> aVar9;
  FSidebarState *pFVar10;
  FScriptContainerElement *pFVar11;
  TAttribute<EVisibility> *pTVar12;
  TSharedRef<FSidebarDrawer,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FScriptContainerElement *pFVar15;
  TSharedRef<FSidebarDrawer,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  FName local_res10;
  char local_res18;
  undefined1 local_res20 [8];
  FSidebarState local_150;
  FSidebarState local_130;
  TReferenceControllerBase<1> *local_110;
  TAttribute<EVisibility> local_108;
  TAttribute<EVisibility> local_e8;
  TAttribute<EVisibility> local_c8;
  FName *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FSidebarState local_88;
  FReadAccessScope local_68;
  
  pFVar15 = (this->Drawers).AllocatorInstance.Data;
  pFVar11 = pFVar15 + (longlong)(this->Drawers).ArrayNum * 0x10;
  for (; local_res10 = param_1, local_res18 = param_2, pFVar15 != pFVar11; pFVar15 = pFVar15 + 0x10)
  {
    pFVar2 = *(FName **)pFVar15;
    local_a8 = pFVar2;
    if (param_1 == *pFVar2) {
      pTVar17 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_90 = 0;
      local_98 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      cVar7 = local_res18;
      if (pFVar2 == (FName *)0x0) goto LAB_142dd8621;
      pTVar14 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
      pTVar8 = pTVar14;
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) goto LAB_142dd89df;
      aVar6 = pTVar14->SharedReferenceCount;
      goto joined_r0x000142dd8686;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  goto LAB_142dd8621;
  while( true ) {
    LOCK();
    aVar9 = pTVar14->SharedReferenceCount;
    bVar18 = aVar6 == aVar9;
    if (bVar18) {
      pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
      aVar9 = aVar6;
    }
    UNLOCK();
    aVar6 = aVar9;
    if (bVar18) break;
joined_r0x000142dd8686:
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    if (aVar6 == (atomic<int>)0x0) goto LAB_142dd89df;
  }
  this_00 = (this->ContainerWidgetWeak).Object;
  pTVar8 = pTVar14;
  if (this_00 == (SSidebarContainer *)0x0) {
LAB_142dd89df:
    pTVar14 = pTVar8;
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7775876802932637115>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                        ,0x245,"ContainerWidget.IsValid()");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar1 = (this->Drawers).ArrayNum;
    pFVar15 = (this->Drawers).AllocatorInstance.Data;
    pFVar11 = pFVar15 + (longlong)iVar1 * 0x10;
    local_110 = pTVar17;
    while( true ) {
      if ((this->Drawers).ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      pFVar2 = local_a8;
      pTVar17 = local_110;
      if (pFVar15 == pFVar11) break;
      if (cVar7 != '\0') {
        SetDrawerPinned(this,**(FName **)pFVar15,false);
      }
      local_150._1_2_ = 0;
      local_150._3_1_ = 0;
      local_150.ContentSize = 0.0;
      local_150._12_4_ = 0;
      *(undefined1 *)(*(longlong *)pFVar15 + 0x182) = 0;
      local_150.bHidden = false;
      local_150.DrawerSize = 0.0;
      local_150.DrawerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined1 *)(*(longlong *)pFVar15 + 0x1e1) = 0;
      local_150.DrawerStates.ArrayNum = 0;
      local_150.DrawerStates.ArrayMax = 0;
      SSidebarContainer::Reconstruct(this_00,&local_150);
      DestructItems<FSidebarDrawerState,int>((FSidebarDrawerState *)0x0,0);
      SSidebarContainer::UpdateDrawerTabAppearance(this_00);
      pFVar15 = pFVar15 + 0x10;
    }
    if (local_res18 == '\0') {
      if ((this->bHideWhenAllDocked != false) && (bVar18 = AreAllDrawersDocked(this), !bVar18)) {
        local_c8.Value = (EVisibility)EVisibility::Visible.Value.Value;
        pTVar12 = &local_c8;
        local_c8.bIsSet = true;
        local_c8.Getter._16_8_ = 0;
        local_c8.Getter._0_8_ = 0;
        local_c8.Getter._8_8_ = 0;
        goto LAB_142dd8951;
      }
    }
    else {
      if ((char)local_a8[0x3c].ComparisonIndex.Value != '\0') {
        SetDrawerPinned(this,local_res10,false);
      }
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (((this_00->SidebarWidget).Object == (SSidebar *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pSVar3 = (this_00->SidebarWidget).Object;
      iVar1 = (pSVar3->Drawers).ArrayNum;
      pTVar13 = (TSharedRef<FSidebarDrawer,1> *)(pSVar3->Drawers).AllocatorInstance.Data;
      pTVar16 = pTVar13 + iVar1;
      while( true ) {
        if ((pSVar3->Drawers).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res10);
        }
        if (pTVar13 == pTVar16) break;
        SSidebarContainer::CloseDrawer_Internal(this_00,pTVar13,false,true);
        pTVar13 = pTVar13 + 1;
      }
      *(undefined1 *)((longlong)&pFVar2[0x30].ComparisonIndex.Value + 2) = 1;
      local_130._1_2_ = 0;
      local_130._3_1_ = 0;
      local_130.ContentSize = 0.0;
      local_130._12_4_ = 0;
      local_130.bHidden = false;
      local_130.DrawerSize = 0.0;
      local_130.DrawerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.DrawerStates.ArrayNum = 0;
      local_130.DrawerStates.ArrayMax = 0;
      *(undefined2 *)&pFVar2[0x3c].ComparisonIndex.Value = 0x100;
      SSidebarContainer::Reconstruct(this_00,&local_130);
      DestructItems<FSidebarDrawerState,int>((FSidebarDrawerState *)0x0,0);
      SSidebarContainer::UpdateDrawerTabAppearance(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      if (this->bHideWhenAllDocked != false) {
        if (pFVar2[0x24] == (FName)0x0) {
          bVar18 = AreAllDrawersDocked(this);
          if (!bVar18) {
            local_e8.Value = (EVisibility)EVisibility::Visible.Value.Value;
            pTVar12 = &local_e8;
            local_e8.bIsSet = true;
            local_e8.Getter._16_8_ = 0;
            local_e8.Getter._0_8_ = 0;
            local_e8.Getter._8_8_ = 0;
            goto LAB_142dd8951;
          }
        }
        else {
          bVar18 = AreAllDrawersDocked(this);
          if (bVar18) {
            local_108.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
            pTVar12 = &local_108;
            local_108.bIsSet = true;
            local_108.Getter._16_8_ = 0;
            local_108.Getter._0_8_ = 0;
            local_108.Getter._8_8_ = 0;
LAB_142dd8951:
            SCompoundWidget::SetVisibility((SCompoundWidget *)this,pTVar12);
          }
        }
      }
    }
    pFVar10 = GetState(this,&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
               &local_68);
    if ((*(int *)&(this->OnStateChanged).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnStateChanged).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,pFVar10);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    DestructItems<FSidebarDrawerState,int>
              ((FSidebarDrawerState *)local_88.DrawerStates.AllocatorInstance.Data,
               local_88.DrawerStates.ArrayNum);
    if ((FSidebarDrawerState *)local_88.DrawerStates.AllocatorInstance.Data !=
        (FSidebarDrawerState *)0x0) {
      FMemory::Free(local_88.DrawerStates.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_142dd8621:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return;
}

// SetDrawerPinned @ 142dd8a20

void __thiscall SSidebar::SetDrawerPinned(SSidebar *this,FName param_1,bool param_2)

{
  int iVar1;
  FSidebarDrawer *pFVar2;
  longlong lVar3;
  SSidebarContainer *this_00;
  longlong *plVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  FSidebarState *pFVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSharedRef<FSidebarDrawer,1> local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FReadAccessScope local_78;
  FSidebarState local_60;
  
  pFVar11 = (this->Drawers).AllocatorInstance.Data;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pFVar9 = pFVar11 + (longlong)(this->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar11 == pFVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
LAB_142dd8a71:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
    pFVar2 = *(FSidebarDrawer **)pFVar11;
    if (param_1 == (pFVar2->Config).UniqueId) {
      pTVar10 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_90 = 0;
      local_98 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar2 != (FSidebarDrawer *)0x0) {
        if (param_2) {
          iVar1 = (this->Drawers).ArrayNum;
          pFVar11 = (this->Drawers).AllocatorInstance.Data;
          pFVar9 = pFVar11 + (longlong)iVar1 * 0x10;
          while( true ) {
            if ((this->Drawers).ArrayNum != iVar1) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar11 == pFVar9) break;
            SetDrawerPinned(this,**(FName **)pFVar11,false);
            pFVar11 = pFVar11 + 0x10;
          }
          if ((pFVar2->State).bIsDocked != false) {
            SetDrawerDocked(this,param_1,false);
          }
          if (pFVar2->bIsOpen == false) {
            pTVar12 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
            if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_142dd8b73:
              bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_7775876802932637183>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                                  ,0x201,"ContainerWidget.IsValid()");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              aVar6 = pTVar12->SharedReferenceCount;
              do {
                if (aVar6 == (atomic<int>)0x0) {
                  pTVar12 = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_142dd8b73;
                }
                LOCK();
                aVar7 = pTVar12->SharedReferenceCount;
                bVar13 = aVar6 == aVar7;
                if (bVar13) {
                  pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                  aVar7 = aVar6;
                }
                UNLOCK();
                aVar6 = aVar7;
              } while (!bVar13);
              this_00 = (this->ContainerWidgetWeak).Object;
              if (this_00 == (SSidebarContainer *)0x0) goto LAB_142dd8b73;
              if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar10->SharedReferenceCount =
                     (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_a8.Object = pFVar2;
              local_a8.SharedReferenceCount.ReferenceController = pTVar10;
              SSidebarContainer::OpenDrawerNextFrame(this_00,&local_a8,false);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar10);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar12);
          }
          iVar1 = (this->Drawers).ArrayNum;
          pFVar11 = (this->Drawers).AllocatorInstance.Data;
          pFVar9 = pFVar11 + (longlong)iVar1 * 0x10;
          while( true ) {
            if ((this->Drawers).ArrayNum != iVar1) {
              `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar11 == pFVar9) break;
            lVar3 = *(longlong *)pFVar11;
            pFVar11 = pFVar11 + 0x10;
            *(undefined1 *)(lVar3 + 0x1e0) = 0;
          }
          (pFVar2->State).bIsPinned = param_2;
          pFVar2->bIsOpen = true;
        }
        else {
          (pFVar2->State).bIsPinned = param_2;
        }
        pFVar8 = GetState(this,&local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
                   &local_78);
        if ((*(int *)&(this->OnStateChanged).field_0x10 != 0) &&
           (plVar4 = *(longlong **)&(this->OnStateChanged).field_0x8, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x68))(plVar4,pFVar8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_78);
        DestructItems<FSidebarDrawerState,int>
                  ((FSidebarDrawerState *)local_60.DrawerStates.AllocatorInstance.Data,
                   local_60.DrawerStates.ArrayNum);
        if ((FSidebarDrawerState *)local_60.DrawerStates.AllocatorInstance.Data !=
            (FSidebarDrawerState *)0x0) {
          FMemory::Free(local_60.DrawerStates.AllocatorInstance.Data);
        }
      }
      goto LAB_142dd8a71;
    }
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// SetWidgetDrawerSize @ 142dd9ea0

void __thiscall SSidebar::SetWidgetDrawerSize(SSidebar *this,TSharedRef<FSidebarDrawer,1> *param_1)

{
  SSidebarContainer *pSVar1;
  FSidebarDrawer *pFVar2;
  SSidebarDrawer *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FGeometry *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  float fVar10;
  float local_res10;
  
  if ((param_1->Object->DrawerWidget).Object == (SSidebarDrawer *)0x0) {
    return;
  }
  pTVar8 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar8->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dd9ee5;
      }
      LOCK();
      aVar6 = pTVar8->SharedReferenceCount;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    pSVar1 = (this->ContainerWidgetWeak).Object;
    if (pSVar1 != (SSidebarContainer *)0x0) {
      if (((pSVar1->DrawersOverlay).Object == (SOverlay *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = SWidget::GetTickSpaceGeometry((SWidget *)(pSVar1->DrawersOverlay).Object);
      local_res10 = SUB84(pFVar7->Size,0);
      local_res10 = local_res10 * pSVar1->SidebarSizePercent;
      pFVar2 = param_1->Object;
      if (((pFVar2->DrawerWidget).Object == (SSidebarDrawer *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar3 = (pFVar2->DrawerWidget).Object;
      fVar10 = pSVar3->TargetDrawerSize;
      if (local_res10 <= pSVar3->TargetDrawerSize) {
        fVar10 = local_res10;
      }
      if (fVar10 <= pSVar3->MinDrawerSize) {
        fVar10 = pSVar3->MinDrawerSize;
      }
      pSVar3->CurrentSize = fVar10;
      goto LAB_142dd9f12;
    }
  }
LAB_142dd9ee5:
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7775876802932636953>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                     ,0x2e7,"ContainerWidget.IsValid()");
  if (bVar9) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_142dd9f12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// TryOpenDrawer @ 142ddb380

bool __thiscall SSidebar::TryOpenDrawer(SSidebar *this,FName param_1)

{
  char cVar1;
  FName *pFVar2;
  FSidebarDrawer *pFVar3;
  SSidebarContainer *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TSharedRef<FSidebarDrawer,1> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  bVar6 = IsDrawerOpened(this,param_1);
  if (bVar6) {
    return false;
  }
  pFVar9 = (this->Drawers).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->Drawers).ArrayNum * 0x10;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
    pFVar2 = *(FName **)pFVar9;
    if (param_1 == *pFVar2) {
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50 = 0;
      local_58 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar2 == (FName *)0x0) goto LAB_142ddb3ec;
      cVar1 = *(char *)((longlong)&pFVar2[0x3c].ComparisonIndex.Value + 1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      if (cVar1 != '\0') {
        return false;
      }
      goto LAB_142ddb3f4;
    }
  }
  local_40 = 0;
  local_48 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar11 = pTVar14;
LAB_142ddb3ec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_142ddb3f4:
  pFVar9 = (this->Drawers).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->Drawers).ArrayNum * 0x10;
  do {
    if (pFVar9 == pFVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar11 = pTVar14;
LAB_142ddb42c:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      return false;
    }
    pFVar3 = *(FSidebarDrawer **)pFVar9;
    if (param_1 == (pFVar3->Config).UniqueId) {
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_30 = 0;
      local_38 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar3 == (FSidebarDrawer *)0x0) goto LAB_142ddb42c;
      pTVar13 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
      pTVar12 = pTVar13;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ddb4f1;
      aVar5 = pTVar13->SharedReferenceCount;
      break;
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
  while( true ) {
    LOCK();
    aVar8 = pTVar13->SharedReferenceCount;
    bVar6 = aVar5 == aVar8;
    if (bVar6) {
      pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar8 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar8;
    if (bVar6) break;
    pTVar12 = pTVar14;
    if (aVar5 == (atomic<int>)0x0) goto LAB_142ddb4f1;
  }
  this_00 = (this->ContainerWidgetWeak).Object;
  pTVar12 = pTVar13;
  if (this_00 == (SSidebarContainer *)0x0) {
LAB_142ddb4f1:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7775876802932637470>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                       ,0xe2,"ContainerWidget.IsValid()");
    pTVar13 = pTVar12;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = pFVar3;
    local_68.SharedReferenceCount.ReferenceController = pTVar11;
    SSidebarContainer::OpenDrawerNextFrame(this_00,&local_68,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return true;
}

// UndockAllDrawers @ 142ddb580

void __thiscall SSidebar::UndockAllDrawers(SSidebar *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    SetDrawerDocked(this,**(FName **)pFVar2,false);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// UnpinAllDrawers @ 142ddbcd0

void __thiscall SSidebar::UnpinAllDrawers(SSidebar *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Drawers).ArrayNum;
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Drawers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FSidebarDrawer,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    SetDrawerPinned(this,**(FName **)pFVar2,false);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// UnregisterDrawer @ 142ddbd50

bool __thiscall SSidebar::UnregisterDrawer(SSidebar *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  SSidebarContainer *this_00;
  bool bVar11;
  TAttribute<EVisibility> local_28;
  
  pTVar8 = (this->ContainerWidgetWeak).WeakReferenceCount.ReferenceController;
  this_00 = (SSidebarContainer *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ddbda4;
      }
      LOCK();
      aVar6 = pTVar8->SharedReferenceCount;
      bVar11 = aVar4 == aVar6;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar11);
    this_00 = (this->ContainerWidgetWeak).Object;
    if (this_00 != (SSidebarContainer *)0x0) {
      bVar11 = IsDrawerOpened(this,param_1);
      if (bVar11) {
        SSidebarContainer::CloseAllDrawerWidgets(this_00,false);
      }
      goto LAB_142ddbdd1;
    }
  }
LAB_142ddbda4:
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_7775876802932637576>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebar.cpp"
                      ,0x78,"ContainerWidget.IsValid()");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_142ddbdd1:
  pFVar2 = (this->Drawers).AllocatorInstance.Data;
  iVar1 = (this->Drawers).ArrayNum;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (longlong)iVar1 * 0x10) {
LAB_142ddbe02:
      bVar11 = false;
LAB_142ddbe04:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      return bVar11;
    }
    if (param_1 == **(FName **)pFVar10) {
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 4);
      if (uVar9 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar9 < iVar1) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        RemoveDrawer(this,(TSharedRef<FSidebarDrawer,1> *)
                          ((this->Drawers).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10));
        if (this_00 != (SSidebarContainer *)0x0) {
          SSidebarContainer::SummonPinnedTabIfNothingOpened(this_00);
        }
        SetDrawerPinned(this,param_1,false);
        if ((this->Drawers).ArrayNum == 0) {
          local_28.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
          local_28.bIsSet = true;
          local_28.Getter._16_8_ = 0;
          local_28.Getter._0_8_ = 0;
          local_28.Getter._8_8_ = 0;
          SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_28);
          bVar11 = true;
        }
        else {
          if (this_00 != (SSidebarContainer *)0x0) {
            SSidebarContainer::UpdateDrawerTabAppearance(this_00);
          }
          bVar11 = true;
        }
        goto LAB_142ddbe04;
      }
      goto LAB_142ddbe02;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// UnregisterDrawerSection @ 142ddc4e0

bool __thiscall SSidebar::UnregisterDrawerSection(SSidebar *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  
  pFVar5 = (this->Drawers).AllocatorInstance.Data;
  pFVar8 = pFVar5 + (longlong)(this->Drawers).ArrayNum * 0x10;
  for (; pFVar5 != pFVar8; pFVar5 = pFVar5 + 0x10) {
    pFVar1 = *(FName **)pFVar5;
    if (param_1 == *pFVar1) {
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar1 == (FName *)0x0) goto LAB_142ddc52b;
      uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
      if (pFVar1[0x27].ComparisonIndex.Value == pFVar1[0x2c].Number) goto LAB_142ddc52b;
      FVar6 = pFVar1[0x2e];
      if (pFVar1[0x2e] == (FName)0x0) {
        FVar6 = (FName)(pFVar1 + 0x2d);
      }
      iVar4 = *(int *)((longlong)FVar6 +
                      (ulonglong)(pFVar1[0x2f].ComparisonIndex.Value - 1 & param_2.Number + uVar3) *
                      4);
      if (iVar4 == -1) goto LAB_142ddc52b;
      lVar2 = *(longlong *)
               &((TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
                  *)(pFVar1 + 0x26))->Elements;
      goto LAB_142ddc5a3;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  goto LAB_142ddc52b;
  while (iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2), iVar4 != -1) {
LAB_142ddc5a3:
    if (*(FName *)((longlong)iVar4 * 0x20 + lVar2) == param_2) {
      local_res8 = param_2;
      uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
                           *)(pFVar1 + 0x26),param_2.Number + uVar3,&local_res8);
      break;
    }
  }
LAB_142ddc52b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return false;
}

