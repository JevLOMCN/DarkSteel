// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// Construct @ 1430233c0

void __thiscall SColorTrash::Construct(SColorTrash *this,FArguments *param_1)

{
  longlong *this_00;
  SWidget *pSVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SBorder *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FArguments *this_01;
  FText *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget_const_,1> *pTVar12;
  ulong64 uVar13;
  FArguments *pFVar14;
  FSlot *this_02;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  ISlateStyle *pIVar17;
  FName *pFVar18;
  TSharedRef<SImage,1> *pTVar19;
  TSharedRef<SHorizontalBox,1> *pTVar20;
  TSharedRef<SBorder,1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_b08 [2];
  FDestructionSentinel local_b00;
  TSharedRef<SWidget_const_,1> local_ae8;
  SImage *local_ad8;
  FSharedReferencer<1> local_ad0;
  FSlateBrush *local_ac8;
  undefined1 local_ac0;
  undefined1 local_ab8 [8];
  ForAnyElementType FStack_ab0;
  ulonglong local_aa8;
  FText local_aa0;
  undefined1 local_a90;
  undefined1 local_a88 [8];
  ForAnyElementType FStack_a80;
  ulonglong local_a78;
  FDestructionSentinel local_a70;
  undefined1 *local_a58;
  TAttribute<float> local_a50;
  FText local_a30;
  FName local_a20;
  TSharedRef<SBorder,1> local_a18;
  TSharedRef<SHorizontalBox,1> local_a08;
  TSharedRef<SImage,1> local_9f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_9e8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_9d0;
  undefined8 *local_9b8 [2];
  TReferenceControllerBase<1> *local_9a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_988;
  undefined4 local_970;
  undefined1 local_96c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_950;
  TDelegateBase<FNotThreadSafeDelegateMode> local_930;
  char local_918;
  TDelegateBase<FNotThreadSafeDelegateMode> local_908;
  TDelegateBase<FNotThreadSafeDelegateMode> local_8e8;
  FArguments local_8d0;
  FArguments local_6c8;
  FArguments local_420;
  
  local_res8 = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  this->bBorderActivated = false;
  this_01 = SBorder::FArguments::FArguments(&local_420);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_a30,L"SColorThemes",L"MouseOverToolTip",L"Delete Color");
  FText::FText(&local_aa0,pFVar10);
  local_a90 = 1;
  local_a78 = 0;
  local_a88 = (undefined1  [8])0x0;
  FStack_a80.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_01,&local_aa0);
  *(undefined1 *)&this_01->_padding_ = local_a90;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a88,
             (FWriteAccessScope *)&local_b00);
  if (((int)local_a78 != 0) && (FStack_a80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a80,0,0,0x10);
    local_a78 = local_a78 & 0xffffffff00000000;
  }
  if (local_b00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b00.Accessor,&local_b00);
  }
  if (FStack_a80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a88);
  if (local_aa0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_aa0.TextData.Reference + 0x10))();
  }
  (this_01->_BorderImage).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this_01->_BorderImage).Getter,(FWriteAccessScope *)&local_a70);
  local_a58 = &(this_01->_BorderImage).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_a58);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar22 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_b00._0_8_ = GetBorderStyle;
    local_b00.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_a30._12_4_ << 0x20)
    ;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ae8);
    pTVar22 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar12->Object;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSColorTrash___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar1;
    puVar11[4] = pTVar22;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    puVar11[5] = local_b00._0_8_;
    puVar11[6] = local_b00.Accessor;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ae8.SharedReferenceCount.ReferenceController);
  }
  if (local_a70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a70.Accessor,&local_a70);
  }
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_8d0);
  this_02 = ::operator_new(0x58);
  local_ae8.Object = (SWidget *)0x0;
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    local_ae8.Object = (SWidget *)SHorizontalBox::FSlot::FSlot(this_02);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_9b8,(FSlot *)&local_ae8);
  local_970 = 2;
  local_a50.Getter._16_8_ = 0;
  local_96c = 1;
  local_a50.Value = 1.0;
  local_a50.bIsSet = true;
  local_a50.Getter._0_8_ = 0;
  local_a50.Getter._8_8_ = 0;
  pFVar15 = SHorizontalBox::FSlot::FSlotArguments::FillWidth((FSlotArguments *)local_9b8,&local_a50)
  ;
  pFVar16 = SImage::FArguments::FArguments(&local_6c8);
  pIVar17 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar17 + 0x50);
  pFVar18 = ::FName::FName(&local_a20,"Icons.Delete");
  local_ac8 = (FSlateBrush *)(*pcVar2)(pIVar17,*pFVar18);
  local_ac0 = 1;
  local_ab8 = (undefined1  [8])0x0;
  FStack_ab0.Data = (FScriptContainerElement *)0x0;
  local_aa8 = 0;
  (pFVar16->_Image).Value = local_ac8;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ab8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ab8,
             (FWriteAccessScope *)&local_b00);
  if (((int)local_aa8 != 0) && (FStack_ab0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ab0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ab0,0,0,0x10);
    local_aa8 = local_aa8 & 0xffffffff00000000;
  }
  if (local_b00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b00.Accessor,&local_b00);
  }
  if (FStack_ab0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ab0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ab8);
  FLLMScope::FLLMScope(local_b08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ae8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_b00,(FName *)&local_ae8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_a70,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0xa2,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_b00);
  FLLMScope::~FLLMScope(local_b08);
  pTVar19 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_a70,&local_9f8,
                       pFVar16);
  pTVar22 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_ad8 = pTVar19->Object;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ad0.ReferenceController = pTVar22;
  if ((SImage **)&pFVar15->field_0x8 != &local_ad8) {
    *(SImage **)&pFVar15->field_0x8 = local_ad8;
    local_ad8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_ad0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ad0.ReferenceController);
  pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar15);
  FLLMScope::FLLMScope(local_b08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b00.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_b00._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_ae8,(FName *)&local_b00,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_9d0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x9f,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_ae8);
  FLLMScope::~FLLMScope(local_b08);
  pTVar20 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9d0,&local_a08,pFVar14);
  pTVar3 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_b00._0_8_ = pTVar20->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_01->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_01->_Content).Widget.Object = (SWidget *)local_b00._0_8_;
  (this_01->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  local_b00.Accessor = (FMRSWRecursiveAccessDetector *)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_b08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b00.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_b00._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_ae8,(FName *)&local_b00,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_9e8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x9b,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_ae8);
  FLLMScope::~FLLMScope(local_b08);
  pTVar21 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9e8,&local_a18,this_01);
  this_00 = &this->_padding_;
  pTVar4 = (pTVar21->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar21->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar4;
  local_b00._0_8_ = pSVar5;
  local_b00.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a70.Accessor);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6c8._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6c8._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6c8._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6c8._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_8e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_908);
  if (local_918 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_930);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_950);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_988);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9a8);
  if (local_9b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_9b8[0])(local_9b8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_8d0._Slots.AllocatorInstance.Data,local_8d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_8d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_8d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8d0);
  if (local_a30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a30.TextData.Reference + 0x10))();
  }
  SBorder::FArguments::~FArguments(&local_420);
  return;
}

// GetBorderStyle @ 143033240

FSlateBrush * __thiscall SColorTrash::GetBorderStyle(SColorTrash *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  
  if (this->bBorderActivated != false) {
    pIVar2 = FAppStyle::Get();
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = ::FName::FName(&local_res8,"FocusRectangle");
    pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
    return pFVar4;
  }
  pFVar4 = FStyleDefaults::GetNoBrush();
  return pFVar4;
}

// OnDragEnter @ 14303a2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SColorTrash::OnDragEnter(SColorTrash *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FColorDragDrop::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 == (FDragDropOperation *)0x0) {
        return;
      }
      this->bBorderActivated = true;
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnDragLeave @ 14303a430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorTrash::OnDragLeave(SColorTrash *this,FDragDropEvent *param_1)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (param_1->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FColorDragDrop::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      pTVar3 = (param_1->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 == (FDragDropOperation *)0x0) {
        return;
      }
      this->bBorderActivated = false;
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnDrop @ 14303a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorTrash::OnDrop(SColorTrash *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                   FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_14303a935:
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FColorDragDrop::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 == '\0') goto LAB_14303a935;
    pTVar5 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDragDropOperation *)0x0) {
      *(undefined1 *)&pFVar1[2].CursorDecoratorWindow.Object = 1;
      bVar4 = true;
      this->bBorderActivated = false;
      goto LAB_14303a939;
    }
  }
  bVar4 = false;
LAB_14303a939:
  FReply::FReply(__return_storage_ptr__,bVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

