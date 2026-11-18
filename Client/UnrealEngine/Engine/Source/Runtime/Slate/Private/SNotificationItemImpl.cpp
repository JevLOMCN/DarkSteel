// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SNotificationItemImpl @ 1429bac00

/* WARNING: Enum "Type": Some values do not have unique names */

SNotificationItemImpl * __thiscall
SNotificationItemImpl::SNotificationItemImpl(SNotificationItemImpl *this)

{
  SNotificationExtendable::SNotificationExtendable((SNotificationExtendable *)this);
  this->_padding_ = (longlong)&___7SNotificationItemImpl__6B_;
  *(undefined8 *)&this->CheckBoxStateChanged = 0;
  *(undefined8 *)&(this->CheckBoxStateChanged).field_0x8 = 0;
  *(undefined4 *)&(this->CheckBoxStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->Hyperlink = 0;
  *(undefined8 *)&(this->Hyperlink).field_0x8 = 0;
  *(undefined4 *)&(this->Hyperlink).field_0x10 = 0;
  FText::FText(&(this->HyperlinkText).Value);
  (this->HyperlinkText).bIsSet = false;
  *(undefined8 *)&(this->HyperlinkText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HyperlinkText).Getter = 0;
  *(undefined8 *)&(this->HyperlinkText).Getter.field_0x8 = 0;
  return this;
}

// ~SNotificationItemImpl @ 1429bff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationItemImpl::~SNotificationItemImpl(SNotificationItemImpl *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HyperlinkText).Getter);
  pvVar1 = *(void **)&(this->HyperlinkText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HyperlinkText).Getter);
  pIVar2 = (this->HyperlinkText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Hyperlink);
  pvVar1 = *(void **)&(this->Hyperlink).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Hyperlink);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CheckBoxStateChanged);
  pvVar1 = *(void **)&(this->CheckBoxStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CheckBoxStateChanged);
  SNotificationExtendable::~SNotificationExtendable((SNotificationExtendable *)this);
  return;
}

// Construct @ 1429d5c50

/* WARNING: Removing unreachable block (ram,0x0001429d629e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationItemImpl::Construct(SNotificationItemImpl *this,FArguments *param_1)

{
  SWidget *pSVar1;
  SNotificationBackground *pSVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget_const_,1> *pTVar12;
  ulong64 uVar13;
  TSharedRef<SWidget,1> *pTVar14;
  TSharedRef<SNotificationBackground,1> *pTVar15;
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  SWidget *local_res10;
  FName local_res18;
  FMemScope local_res20;
  float local_3c8;
  undefined1 local_3c4;
  undefined1 local_3c0 [8];
  ForAnyElementType FStack_3b8;
  ulonglong local_3b0;
  SNotificationBackground *local_3a8;
  TReferenceControllerBase<1> *pTStack_3a0;
  FDestructionSentinel local_398;
  FDestructionSentinel local_380;
  FDestructionSentinel local_368;
  undefined1 *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  undefined1 local_330 [8];
  ForAnyElementType FStack_328;
  ulonglong local_320;
  FArguments local_318;
  
  local_res8 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  bVar6 = false;
  bVar5 = false;
  bVar3 = false;
  TAttribute<FText>::operator=((TAttribute<FText> *)&this->_padding_,&param_1->_Text);
  TAttribute<FText>::operator=((TAttribute<FText> *)&this->_padding_,&param_1->_SubText);
  local_3c8 = param_1->_FadeInDuration;
  local_3b0 = 0;
  *(float *)&this->_padding_ = local_3c8;
  local_3c4 = 1;
  local_3c0 = (undefined1  [8])0x0;
  FStack_3b8.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (FWriteAccessScope *)&local_398);
  if (((int)local_3b0 != 0) && (FStack_3b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b8,0,0,0x10);
    local_3b0 = local_3b0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_398.Accessor._4_4_,local_398.Accessor._0_4_),&local_398);
  }
  if (FStack_3b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  local_3c8 = param_1->_FadeOutDuration;
  local_3b0 = 0;
  *(float *)&this->_padding_ = local_3c8;
  local_3c4 = 1;
  local_3c0 = (undefined1  [8])0x0;
  FStack_3b8.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (FWriteAccessScope *)&local_398);
  if (((int)local_3b0 != 0) && (FStack_3b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b8,0,0,0x10);
    local_3b0 = local_3b0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_398.Accessor._4_4_,local_398.Accessor._0_4_),&local_398);
  }
  if (FStack_3b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  local_3c8 = param_1->_ExpireDuration;
  local_3b0 = 0;
  *(float *)&this->_padding_ = local_3c8;
  local_3c4 = 1;
  local_3c0 = (undefined1  [8])0x0;
  FStack_3b8.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (FWriteAccessScope *)&local_398);
  if (((int)local_3b0 != 0) && (FStack_3b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b8,0,0,0x10);
    local_3b0 = local_3b0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_398.Accessor._4_4_,local_398.Accessor._0_4_),&local_398);
  }
  if (FStack_3b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  pFVar10 = SNotificationBackground::FArguments::FArguments(&local_318);
  uVar8 = _UNK_150978bf8;
  local_338 = 1;
  local_320 = 0;
  local_348 = ___xmm_41000000418000004100000041800000;
  uStack_340 = _UNK_150978bf8;
  local_330 = (undefined1  [8])0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  uVar7 = _UNK_150978bf4;
  (pFVar10->_Padding).Value.Left = (float)___xmm_41000000418000004100000041800000;
  uVar9 = _UNK_150978bf8;
  (pFVar10->_Padding).Value.Top = (float)uVar7;
  _UNK_150978bf8 = (undefined4)uVar8;
  _UNK_150978bfc = SUB84(uVar8,4);
  uVar7 = _UNK_150978bfc;
  (pFVar10->_Padding).Value.Right = (float)_UNK_150978bf8;
  _UNK_150978bf8 = uVar9;
  (pFVar10->_Padding).Value.Bottom = (float)uVar7;
  (pFVar10->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_330);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_330,
             (FWriteAccessScope *)&local_380);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_380.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_380.Accessor,&local_380);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_330);
  (pFVar10->_BorderBackgroundColor).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar10->_BorderBackgroundColor).Getter,(FWriteAccessScope *)&local_368);
  local_350 = &(pFVar10->_BorderBackgroundColor).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_350);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_3a8 = (SNotificationBackground *)SNotificationExtendable::GetContentColor;
    pTStack_3a0 = (TReferenceControllerBase<1> *)((ulonglong)local_398.Accessor._4_4_ << 0x20);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_380);
    pTVar16 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar12->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar1;
    puVar11[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar3 = true;
    puVar11[5] = local_3a8;
    puVar11[6] = pTStack_3a0;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_380.Accessor);
  }
  bVar6 = false;
  bVar5 = false;
  bVar3 = false;
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  (pFVar10->_ColorAndOpacity).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar10->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_368);
  local_350 = &(pFVar10->_ColorAndOpacity).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_350);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_3a8 = (SNotificationBackground *)SNotificationExtendable::GetContentColorRaw;
    pTStack_3a0 = (TReferenceControllerBase<1> *)((ulonglong)local_398.Accessor._4_4_ << 0x20);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_380);
    pTVar16 = (pTVar12->SharedReferenceCount).ReferenceController;
    local_res10 = pTVar12->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar6 = true;
    bVar5 = true;
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = local_res10;
    puVar11[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar11[5] = local_3a8;
    puVar11[6] = pTStack_3a0;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_380.Accessor);
  }
  bVar5 = false;
  bVar3 = false;
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  (pFVar10->_DesiredSizeScale).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar10->_DesiredSizeScale).Getter,(FWriteAccessScope *)&local_368);
  local_350 = &(pFVar10->_DesiredSizeScale).Getter.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_350);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_3a8 = (SNotificationBackground *)SNotificationExtendable::GetItemScale;
    pTStack_3a0 = (TReferenceControllerBase<1> *)((ulonglong)local_398.Accessor._4_4_ << 0x20);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_380);
    pTVar16 = (pTVar12->SharedReferenceCount).ReferenceController;
    local_res10 = pTVar12->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar5 = true;
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = local_res10;
    puVar11[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar11[5] = local_3a8;
    puVar11[6] = pTStack_3a0;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_380.Accessor);
  }
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  pTVar14 = ConstructInternals(this,(TSharedRef<SWidget,1> *)&local_398,param_1);
  pTVar16 = (pTVar14->SharedReferenceCount).ReferenceController;
  pSVar1 = pTVar14->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_Content).Widget.Object = pSVar1;
  (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs> *)&local_380,
             "SNotificationBackground",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x1ae,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
  pTVar15 = TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs> *)
                       &local_380,(TSharedRef<SNotificationBackground,1> *)&local_3c8,pFVar10);
  this_00 = &this->_padding_;
  pTVar16 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar15->Object;
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar16;
  local_3a8 = pSVar2;
  pTStack_3a0 = pTVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_380.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_398.Accessor._4_4_,local_398.Accessor._0_4_));
  SNotificationBackground::FArguments::~FArguments(&local_318);
  return;
}

// ConstructInternals @ 1429db980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001429dcf8d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SNotificationItemImpl::ConstructInternals
          (SNotificationItemImpl *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  FWeakReferencer<1> *pFVar3;
  longlong *plVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement FVar8;
  code *pcVar9;
  void *pvVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  TAttribute<EVisibility> *pTVar26;
  double dVar27;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  FSlateInvalidationRoot *pFVar31;
  SWidget *pSVar32;
  SNotificationItemImpl *pSVar33;
  SButton *this_00;
  FSharedReferencer<1> FVar34;
  float fVar35;
  SVerticalBox *this_01;
  bool bVar36;
  char cVar37;
  byte bVar38;
  FArguments *pFVar39;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  FArguments *pFVar40;
  FName *pFVar41;
  TAttribute<FSlateBrush_const_*> *pTVar42;
  FArguments *pFVar43;
  ISlateStyle *pIVar44;
  FText *pFVar45;
  TAttribute<FText> *pTVar46;
  TAttribute<FMargin> *pTVar47;
  FArguments *pFVar48;
  FSlateColor *pFVar49;
  TAttribute<FSlateColor> *pTVar50;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SImage,1> *pTVar51;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SButton,1> *pTVar52;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar53;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar54;
  FSlotArguments *pFVar55;
  TAttribute<float> *pTVar56;
  FArguments *pFVar57;
  FSlateFontInfo *pFVar58;
  TAttribute<FSlateFontInfo> *pTVar59;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar60;
  TSharedRef<STextBlock,1> *pTVar61;
  FArguments *pFVar62;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar63;
  TSharedRef<SHorizontalBox,1> *pTVar64;
  FMargin *pFVar65;
  FSlotArguments *pFVar66;
  FArguments *pFVar67;
  FTextBlockStyle *pFVar68;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SHyperlink,1> *pTVar69;
  FArguments *pFVar70;
  TAttribute<ECheckBoxState> *pTVar71;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SCheckBox,1> *pTVar72;
  FSlot *pFVar73;
  FSizeParam *pFVar74;
  undefined8 *puVar75;
  TSharedRef<SWidget,1> *pTVar76;
  ulong64 uVar77;
  TSharedRef<SWidget_const_,1> *pTVar78;
  FMemScope FVar79;
  atomic<int> *paVar80;
  FArguments *pFVar81;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *pTVar82;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar83;
  FSlotArguments *pFVar84;
  FArguments *pFVar85;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *pTVar86;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_07;
  TSharedRef<SOverlay,1> *pTVar87;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SBox,1> *pTVar88;
  ulonglong uVar89;
  FMemScope FVar90;
  FScriptContainerElement *pFVar91;
  FSlotArguments *this_09;
  FScriptContainerElement *pFVar92;
  FArguments *pFVar93;
  TReferenceControllerBase<1> *pTVar94;
  FMemScope FVar95;
  FName FVar96;
  bool bVar97;
  undefined1 auStackY_54e8 [32];
  undefined1 local_54b4 [12];
  code *local_54a8;
  undefined4 uStack_54a0;
  float fStack_549c;
  SWidget *local_5498;
  T0RequiredArgs local_5490;
  T0RequiredArgs local_548f;
  T0RequiredArgs local_548e;
  T0RequiredArgs local_548d;
  T0RequiredArgs local_548c;
  T0RequiredArgs local_548b;
  T0RequiredArgs local_548a;
  T0RequiredArgs local_5489;
  T0RequiredArgs local_5488;
  T0RequiredArgs local_5487;
  T0RequiredArgs local_5486;
  T0RequiredArgs local_5485;
  T0RequiredArgs local_5484;
  T0RequiredArgs local_5483;
  T0RequiredArgs local_5482;
  T0RequiredArgs local_5481;
  T0RequiredArgs local_5480 [8];
  FArguments *local_5478;
  FName local_5470;
  undefined8 *local_5468;
  FLLMScope local_5460;
  FLLMScope local_545c;
  FLLMScope local_5458 [2];
  SWidget *local_5450;
  SNotificationItemImpl *local_5448;
  TSharedRef<SWidget,1> local_5438;
  float local_5428 [2];
  FMemScope local_5420;
  FMemScope local_5418;
  FArguments *local_5410;
  SWidget *local_5408;
  float local_5400;
  float local_53fc;
  float local_53f8 [2];
  FArguments *local_53f0;
  FScriptContainerElement *local_53e8;
  SWidget *local_53e0;
  FMemScope local_53d8;
  uint local_53d0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_53c8;
  undefined1 local_53b0 [8];
  ForAnyElementType local_53a8;
  int local_53a0;
  FText local_5398;
  FScriptContainerElement local_5388;
  undefined1 local_5380 [8];
  ForAnyElementType FStack_5378;
  int local_5370;
  TReferenceControllerBase<1> *local_5368;
  TSharedRef<SWidget,1> local_5358;
  FName local_5348;
  float local_5340;
  undefined1 local_533c;
  undefined1 local_5338 [8];
  void *pvStack_5330;
  undefined8 local_5328;
  undefined1 local_5320 [8];
  void *local_5318;
  undefined4 local_5310;
  undefined8 local_5308;
  undefined8 uStack_5300;
  undefined1 local_52f8;
  undefined1 local_52f0 [8];
  ForAnyElementType FStack_52e8;
  ulonglong local_52e0;
  FSlateInvalidationRoot *local_52d8;
  undefined8 uStack_52d0;
  undefined1 local_52c8;
  undefined1 local_52c0 [8];
  ForAnyElementType FStack_52b8;
  ulonglong local_52b0;
  TSharedRef<SHorizontalBox,1> local_52a8;
  SHorizontalBox *local_5298;
  FSharedReferencer<1> FStack_5290;
  FMargin local_5288;
  SHorizontalBox *local_5278;
  TReferenceControllerBase<1> *pTStack_5270;
  undefined8 local_5268;
  FSharedReferencer<1> local_5260;
  uchar local_5258;
  undefined1 local_5257;
  undefined1 local_5250 [24];
  FText local_5238;
  FScriptContainerElement local_5228;
  undefined1 local_5220 [8];
  void *pvStack_5218;
  undefined4 local_5210;
  undefined4 local_5208 [2];
  undefined4 local_5200 [2];
  undefined4 local_51f8 [2];
  undefined4 local_51f0 [2];
  undefined4 local_51e8 [2];
  TReferenceControllerBase<1> *local_51e0;
  FSlot *local_51d8;
  <lambda_1> local_51d0;
  FName local_51c8;
  FMemScope local_51c0;
  FName local_51b8;
  FMemScope local_51b0;
  TSharedRef<SWidget,1> *local_51a8;
  FSlateBrush *local_51a0;
  FName local_5198;
  FName local_5190;
  code *local_5188;
  undefined4 uStack_5180;
  float fStack_517c;
  code *local_5178;
  undefined4 uStack_5170;
  float fStack_516c;
  FName local_5168 [2];
  TSharedRef<SVerticalBox,1> local_5158;
  TSharedRef<SWidget,1> local_5148;
  TAttribute<EVisibility> local_5138;
  FSlateBrush *local_5118;
  undefined4 local_5110 [2];
  undefined4 local_5108 [2];
  undefined1 local_5100 [4];
  undefined1 local_50fc [4];
  undefined4 local_50f8 [2];
  double local_50f0;
  double dStack_50e8;
  undefined1 local_50e0;
  undefined1 local_50d8;
  undefined1 local_50d0 [8];
  void *pvStack_50c8;
  undefined8 local_50c0;
  longlong local_50b8;
  longlong lStack_50b0;
  undefined1 local_50a8;
  undefined1 local_50a0 [8];
  void *pvStack_5098;
  undefined8 local_5090;
  TAttribute<EVisibility> local_5088;
  TSharedRef<SWidget,1> local_5068;
  TSharedRef<SWidget,1> local_5058;
  TSharedRef<SWidget,1> local_5048;
  TSharedRef<SWidget,1> local_5038;
  TSharedRef<SWidget,1> local_5028;
  TSharedRef<SWidget,1> local_5018;
  TSharedRef<SWidget,1> local_5008;
  TSharedRef<SWidget,1> local_4ff8;
  TSharedRef<SWidget,1> local_4fe8;
  FSlateInvalidationRoot *local_4fd8;
  undefined8 uStack_4fd0;
  undefined1 local_4fc8;
  undefined1 local_4fc0 [24];
  TAttribute<FSlateBrush_const_*> local_4fa8;
  FDestructionSentinel local_4f80;
  FDestructionSentinel local_4f68;
  FDestructionSentinel local_4f50;
  FDestructionSentinel local_4f38;
  undefined1 local_4f20 [24];
  FDestructionSentinel local_4f08;
  undefined1 *local_4ef0;
  FDestructionSentinel local_4ee8;
  longlong *local_4ed0;
  FDestructionSentinel local_4ec8;
  longlong *local_4eb0;
  FDestructionSentinel local_4ea8;
  longlong *local_4e90;
  code *local_4e88;
  longlong lStack_4e80;
  code *local_4e78;
  longlong lStack_4e70;
  TSharedRef<SWidget_const_,1> local_4e68;
  code *local_4e58;
  TReferenceControllerBase<1> *pTStack_4e50;
  TSharedRef<SWidget,1> local_4e48;
  TSharedRef<SBox,1> local_4e38;
  TSharedRef<SHorizontalBox,1> local_4e28;
  TSharedRef<SOverlay,1> local_4e18;
  TSharedRef<SImage,1> local_4e08;
  TSharedRef<SImage,1> local_4df8;
  FName local_4de8;
  FName local_4de0;
  FName local_4dd8;
  FName local_4dd0;
  FName local_4dc8;
  FName local_4dc0;
  code *local_4db8;
  longlong lStack_4db0;
  TSharedRef<SBorder,1> local_4da8;
  TSharedRef<SButton,1> local_4d98;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4d88;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4d70;
  TSharedRef<SImage,1> local_4d58;
  FText local_4d48;
  TSharedRef<SHorizontalBox,1> local_4d38;
  TSharedRef<STextBlock,1> local_4d28;
  TSharedRef<STextBlock,1> local_4d18;
  code *local_4d08;
  longlong lStack_4d00;
  code *local_4cf8;
  longlong lStack_4cf0;
  code *local_4ce8;
  longlong lStack_4ce0;
  code *local_4cd8;
  longlong lStack_4cd0;
  TSharedRef<SHyperlink,1> local_4cc8;
  code *local_4cb8;
  longlong lStack_4cb0;
  TSharedRef<SCheckBox,1> local_4ca8;
  TSharedRef<STextBlock,1> local_4c98;
  TSharedRef<SWidget,1> local_4c88;
  TSharedRef<SWidget_const_,1> local_4c78;
  TSharedRef<SWidget_const_,1> local_4c68;
  TAttribute<FSlateBrush_const_*> local_4c58;
  undefined **local_4c30;
  undefined8 *local_4c28;
  SButton *local_4c20;
  FSharedReferencer<1> local_4c18 [3];
  undefined1 local_4c00;
  undefined1 local_4bf8 [32];
  undefined4 local_4bd8;
  undefined1 local_4bd4;
  FSlotArgumentsMixin local_4bd0;
  TPanelChildren<SBoxPanel::FSlot> *local_4b40;
  int local_4b38;
  undefined1 local_4b30 [16];
  undefined1 local_4b20 [32];
  undefined1 local_4b00 [24];
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4ae8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_4ad0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4ab8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4aa0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4a88;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_4a70;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_4a58;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4a40;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4a28;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4a10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_49f8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_49e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_49c8;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> local_49b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4998;
  TAttribute<FSlateBrush_const_*> local_4980;
  TAttribute<FSlateBrush_const_*> local_4958;
  undefined **local_4930;
  undefined8 *local_4928 [2];
  TReferenceControllerBase<1> *local_4918;
  undefined1 local_48f8 [40];
  FSlotArgumentsMixin local_48d0;
  TPanelChildren<SBoxPanel::FSlot> *local_4840;
  int local_4838;
  FMargin local_4830;
  FMargin local_4820;
  FMargin local_4810;
  FSlateColor local_4800;
  TAttribute<FSlateBrush_const_*> local_47e8;
  undefined1 local_47c0 [24];
  undefined1 local_47a8 [24];
  TAttribute<float> local_4790;
  TAttribute<float> local_4770;
  undefined1 local_4750 [32];
  TAttribute<float> local_4730;
  TAttribute<FSlateBrush_const_*> local_4710;
  TAttribute<FSlateBrush_const_*> local_46e8;
  TAttribute<FText> local_46c0;
  TAttribute<FMargin> local_4690;
  TAttribute<FText> local_4660;
  TAttribute<FMargin> local_4630;
  TAttribute<FMargin> local_4600;
  TAttribute<FMargin> local_45d0;
  TAttribute<FText> local_45a0;
  TAttribute<FText> local_4570;
  TAttribute<FText> local_4540;
  undefined1 local_4510 [56];
  TReferenceControllerBase<1> *local_44d8;
  FSlotArguments local_44b0;
  FSlotArguments local_4450;
  TAttribute<FMargin> local_43f0;
  TAttribute<FSlateColor> local_43c0;
  FSlotArguments local_4390;
  FSlotArguments local_42a8;
  FSlotArguments local_41c0;
  FSlotArguments local_40d8;
  TAttribute<FSlateFontInfo> local_3ff0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_3f70;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_3e70;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_3d70;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_3c70;
  FArguments local_3b70;
  FArguments local_3968;
  FArguments local_3760;
  FArguments local_3558;
  FArguments local_3350;
  FArguments local_3148;
  FArguments local_2ea0;
  FArguments local_2bf8;
  FArguments local_2950;
  FArguments local_2630;
  FArguments local_22f0;
  FArguments local_1f10;
  FArguments local_1b30;
  FArguments local_15f0;
  FArguments local_10b0;
  FArguments local_b58;
  FArguments local_600;
  TFunction<EVisibility___cdecl(void)> local_a8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_54e8;
  bVar25 = false;
  bVar24 = false;
  bVar23 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar97 = false;
  local_5478 = param_1;
  local_5448 = this;
  local_51a8 = __return_storage_ptr__;
  TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::operator=
            (&this->CheckBoxStateChanged,&param_1->_CheckBoxStateChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Hyperlink,&param_1->_Hyperlink);
  TAttribute<FText>::operator=(&this->HyperlinkText,&param_1->_HyperlinkText);
  TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
            (&local_4980,&param_1->_Image);
  TAttribute<FSlateBrush_const_*>::operator=
            ((TAttribute<FSlateBrush_const_*> *)&this->_padding_,&local_4980);
  TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&local_4980);
  pFVar39 = SVerticalBox::FArguments::FArguments(&local_3760);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4ab8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x1c4,&local_5490);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&local_5158,pFVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4ab8._Widget.SharedReferenceCount.ReferenceController);
  SVerticalBox::FArguments::~FArguments(&local_3760);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_5148,&SNullWidget::NullWidget);
  if (param_1->_bUseCopyToClipboard != false) {
    pFVar40 = SBorder::FArguments::FArguments(&local_22f0);
    pFVar40->_HAlign = HAlign_Center;
    pFVar40->_VAlign = VAlign_Top;
    pFVar40 = SBorder::FArguments::Padding(pFVar40,0.0);
    pFVar41 = ::FName::FName(&local_4de8,"NoBorder");
    local_5118 = FAppStyle::GetBrush(*pFVar41,(char *)0x0);
    pTVar42 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_4710,&local_5118);
    pFVar40 = SBorder::FArguments::BorderImage(pFVar40,pTVar42);
    pFVar43 = SButton::FArguments::FArguments(&local_1b30);
    ::FName::FName(local_5168,"SimpleButton");
    pIVar44 = FAppStyle::Get();
    pFVar43 = SButton::FArguments::ButtonStyle(pFVar43,pIVar44,local_5168,(char *)0x0);
    pFVar45 = FText::AsLocalizable_Advanced_LocText
                        (&local_4d48,L"SNotificationList",L"CopyToClipboard",L"Copy to Clipboard");
    pTVar46 = TAttribute<FText>::TAttribute<FText>(&local_4540,pFVar45);
    pFVar43 = TSlateBaseNamedArgs<SButton>::ToolTipText
                        ((TSlateBaseNamedArgs<SButton> *)pFVar43,pTVar46);
    uStack_54a0 = 0;
    local_54a8 = OnCopyTextToClipboard;
    lStack_4db0 = (ulonglong)(uint)fStack_549c << 0x20;
    local_4db8 = OnCopyTextToClipboard;
    pFVar43 = SButton::FArguments::OnClicked<SNotificationItemImpl>
                        (pFVar43,this,(pmf_53c12e2c *)&local_4db8);
    local_5400 = 0.0;
    pTVar47 = TAttribute<FMargin>::TAttribute<FMargin><float>(&local_43f0,&local_5400);
    pFVar43 = SButton::FArguments::ContentPadding(pFVar43,pTVar47);
    pFVar48 = SImage::FArguments::FArguments(&local_3148);
    pIVar44 = FAppStyle::Get();
    pcVar9 = *(code **)((longlong)*pIVar44 + 0x50);
    pFVar41 = ::FName::FName(&local_4de0,"Icons.Clipboard");
    local_51a0 = (FSlateBrush *)(*pcVar9)(pIVar44,*pFVar41,0,0);
    pTVar42 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                        (&local_46e8,&local_51a0);
    pFVar48 = SImage::FArguments::Image(pFVar48,pTVar42);
    pFVar49 = FSlateColor::UseForeground(&local_4800);
    pTVar50 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_43c0,pFVar49);
    pFVar48 = SImage::FArguments::ColorAndOpacity(pFVar48,pTVar50);
    this_03 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_49e0,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                         ,0x1d5,&local_548f);
    pTVar51 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_4d58,pFVar48);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_4fe8,pTVar51);
    pFVar43 = SButton::FArguments::operator[](pFVar43,&local_4fe8);
    this_04 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_49f8,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                         ,0x1cf,&local_548e);
    pTVar52 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_04,&local_4d98,pFVar43);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5018,pTVar52);
    pFVar40 = SBorder::FArguments::operator[](pFVar40,&local_5018);
    pTVar53 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_4a10,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                         ,0x1c9,&local_548d);
    pTVar53 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SWidget>(pTVar53,&local_5148)
    ;
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar53,&local_4da8,pFVar40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4da8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a10._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5018.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_49f8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4fe8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_49e0._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_3148);
    FText::~FText(&local_4d48);
    SButton::FArguments::~FArguments(&local_1b30);
    SBorder::FArguments::~FArguments(&local_22f0);
  }
  this_01 = local_5158.Object;
  pFVar54 = SVerticalBox::AddSlot(local_5158.Object,&local_3f70);
  local_5498 = (SWidget *)SHorizontalBox::FArguments::FArguments(&local_3558);
  pFVar55 = SHorizontalBox::Slot(&local_41c0);
  local_5428[0] = 1.0;
  pTVar56 = TAttribute<float>::TAttribute<float>(&local_4790,local_5428);
  local_5450 = (SWidget *)SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar55,pTVar56);
  pFVar57 = STextBlock::FArguments::FArguments(&local_10b0);
  pTVar46 = TAttribute<FText>::TAttribute<FText>(&local_46c0,(TAttribute<FText> *)&this->_padding_);
  pFVar57 = STextBlock::FArguments::Text(pFVar57,pTVar46);
  pIVar44 = FAppStyle::Get();
  pcVar9 = *(code **)((longlong)*pIVar44 + 0x88);
  pFVar41 = ::FName::FName(&local_4dd8,L"NotificationList.FontBold");
  pFVar58 = (FSlateFontInfo *)(*pcVar9)(pIVar44,local_4510,*pFVar41,0);
  pTVar59 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_3ff0,pFVar58);
  pFVar57 = STextBlock::FArguments::Font(pFVar57,pTVar59);
  pFVar93 = local_5478;
  bVar36 = FOptionalSize::IsSet(&local_5478->_WidthOverride);
  local_53f8[0] = __real_42480000;
  if (bVar36) {
    local_53fc = (pFVar93->_WidthOverride).Size - __real_42480000;
  }
  else {
    local_53fc = 0.0;
  }
  pTVar56 = TAttribute<float>::TAttribute<float>(&local_4770,&local_53fc);
  pFVar57 = STextBlock::FArguments::WrapTextAt(pFVar57,pTVar56);
  pTVar60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_4aa0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x1e2,&local_548c);
  pTVar60 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<STextBlock>
                      (pTVar60,(TSharedPtr<STextBlock,1> *)&this->_padding_);
  pTVar61 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar60,&local_4d28,pFVar57);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5028,pTVar61);
  pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5450,&local_5028);
  pFVar62 = SHorizontalBox::FArguments::operator+((FArguments *)local_5498,pFVar55);
  pFVar55 = SHorizontalBox::Slot(&local_42a8);
  pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
  pFVar55 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)&pFVar55->field_0x48,HAlign_Right);
  pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar55->field_0x18,0.0);
  pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar55,&local_5148);
  pFVar62 = SHorizontalBox::FArguments::operator+(pFVar62,pFVar55);
  pTVar63 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4998,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x1de,&local_548b);
  pTVar64 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar63,&local_4d38,pFVar62);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5068,pTVar64);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)&pFVar54->_padding_,&local_5068);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5068.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4998._Widget.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_42a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5028.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4aa0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_44d8);
  STextBlock::FArguments::~FArguments(&local_10b0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_41c0);
  SHorizontalBox::FArguments::~FArguments(&local_3558);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_3f70);
  pFVar54 = SVerticalBox::AddSlot(this_01,&local_3e70);
  dVar27 = __real_4000000000000000;
  pFVar65 = FMargin::FMargin(&local_4830,0.0,__real_4024000000000000,0.0,__real_4000000000000000);
  pTVar47 = TAttribute<FMargin>::TAttribute<FMargin>(&local_4690,pFVar65);
  pFVar66 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar54->_padding_,pTVar47);
  pFVar66 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar66);
  pFVar57 = STextBlock::FArguments::FArguments(&local_b58);
  pTVar46 = TAttribute<FText>::TAttribute<FText>(&local_4660,(TAttribute<FText> *)&this->_padding_);
  pFVar57 = STextBlock::FArguments::Text(pFVar57,pTVar46);
  local_51d0.__this = this;
  TFunction<EVisibility___cdecl(void)>::
  TFunction<EVisibility___cdecl(void)><_SNotificationItemImpl::ConstructInternals_::__l2::<lambda_1>_>
            (&local_a8,&local_51d0);
  pFVar57 = TSlateBaseNamedArgs<STextBlock>::Visibility_Lambda
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar57,&local_a8);
  bVar36 = FOptionalSize::IsSet(&pFVar93->_WidthOverride);
  if (bVar36) {
    local_53f8[0] = (pFVar93->_WidthOverride).Size - local_53f8[0];
  }
  else {
    local_53f8[0] = 0.0;
  }
  pTVar56 = TAttribute<float>::TAttribute<float>(&local_4730,local_53f8);
  pFVar57 = STextBlock::FArguments::WrapTextAt(pFVar57,pTVar56);
  pTVar60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_4a88,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,500,&local_548a);
  pTVar60 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<STextBlock>
                      (pTVar60,(TSharedPtr<STextBlock,1> *)&this->_padding_);
  pTVar61 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar60,&local_4d18,pFVar57);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5008,pTVar61);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar66,&local_5008);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5008.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a88._Widget.SharedReferenceCount.ReferenceController);
  TFunction<EVisibility___cdecl(void)>::~TFunction<EVisibility___cdecl(void)>(&local_a8);
  STextBlock::FArguments::~FArguments(&local_b58);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_3e70);
  pFVar54 = SVerticalBox::AddSlot(this_01,&local_3d70);
  pFVar66 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)&pFVar54->_padding_);
  pFVar65 = FMargin::FMargin(&local_4820,0.0,__real_4024000000000000,0.0,dVar27);
  pTVar47 = TAttribute<FMargin>::TAttribute<FMargin>(&local_4630,pFVar65);
  pFVar66 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar66->field_0x18,pTVar47);
  pFVar66 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                      ((FSlotArgumentsMixin *)&pFVar66->field_0x48,VAlign_Center);
  pFVar66 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)&pFVar66->field_0x48,HAlign_Left);
  pFVar67 = SHyperlink::FArguments::FArguments(&local_2950);
  local_54a8 = GetHyperlinkVisibility;
  uStack_54a0 = 0;
  lStack_4d00 = (ulonglong)(uint)fStack_549c << 0x20;
  local_4d08 = GetHyperlinkVisibility;
  pFVar67 = TSlateBaseNamedArgs<SHyperlink>::Visibility<SNotificationItemImpl>
                      ((TSlateBaseNamedArgs<SHyperlink> *)pFVar67,this,(pmf_fa4416ac *)&local_4d08);
  uStack_54a0 = 0;
  local_54a8 = GetHyperlinkText;
  lStack_4cf0 = (ulonglong)(uint)fStack_549c << 0x20;
  local_4cf8 = GetHyperlinkText;
  pFVar67 = SHyperlink::FArguments::Text<SNotificationItemImpl>
                      (pFVar67,this,(pmf_90a3390d *)&local_4cf8);
  uStack_54a0 = 0;
  local_54a8 = OnHyperlinkClicked;
  lStack_4ce0 = (ulonglong)(uint)fStack_549c << 0x20;
  local_4ce8 = OnHyperlinkClicked;
  pFVar67 = SHyperlink::FArguments::OnNavigate<SNotificationItemImpl>
                      (pFVar67,this,(pmf_4d1d8408 *)&local_4ce8);
  local_54a8 = GetHyperlinkText;
  uStack_54a0 = 0;
  lStack_4cd0 = (ulonglong)(uint)fStack_549c << 0x20;
  local_4cd8 = GetHyperlinkText;
  pFVar67 = TSlateBaseNamedArgs<SHyperlink>::ToolTipText<SNotificationItemImpl>
                      ((TSlateBaseNamedArgs<SHyperlink> *)pFVar67,this,(pmf_90a3390d *)&local_4cd8);
  pFVar41 = ::FName::FName(&local_4dd0,"NotificationList.WidgetText");
  pFVar68 = FAppStyle::GetWidgetStyle<FTextBlockStyle>(*pFVar41,(char *)0x0);
  pFVar67->_TextStyle = pFVar68;
  this_05 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                      (&local_4a70,"SHyperlink",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x201,&local_5489);
  pTVar69 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_4cc8,pFVar67);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHyperlink>(&local_5038,pTVar69);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar66,&local_5038);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5038.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4cc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a70._Widget.SharedReferenceCount.ReferenceController);
  SHyperlink::FArguments::~FArguments(&local_2950);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_3d70);
  pFVar54 = SVerticalBox::AddSlot(this_01,&local_3c70);
  pFVar66 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)&pFVar54->_padding_);
  pFVar65 = FMargin::FMargin(&local_4810,0.0,__real_4024000000000000,0.0,dVar27);
  pTVar47 = TAttribute<FMargin>::TAttribute<FMargin>(&local_4600,pFVar65);
  pFVar66 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar66->field_0x18,pTVar47);
  pFVar66 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                      ((FSlotArgumentsMixin *)&pFVar66->field_0x48,VAlign_Center);
  pFVar66 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                      ((FSlotArgumentsMixin *)&pFVar66->field_0x48,HAlign_Left);
  pFVar70 = SCheckBox::FArguments::FArguments(&local_1f10);
  uStack_54a0 = 0;
  local_54a8 = GetCheckBoxVisibility;
  lStack_4cb0 = (ulonglong)(uint)fStack_549c << 0x20;
  local_4cb8 = GetCheckBoxVisibility;
  pFVar70 = TSlateBaseNamedArgs<SCheckBox>::Visibility<SNotificationItemImpl>
                      ((TSlateBaseNamedArgs<SCheckBox> *)pFVar70,this,(pmf_fa4416ac *)&local_4cb8);
  pFVar93 = local_5478;
  pTVar71 = TAttribute<enum_ECheckBoxState>::TAttribute<enum_ECheckBoxState>
                      (local_4750,&local_5478->_CheckBoxState);
  pFVar70 = SCheckBox::FArguments::IsChecked(pFVar70,pTVar71);
  pFVar70 = SCheckBox::FArguments::OnCheckStateChanged(pFVar70,&this->CheckBoxStateChanged);
  pFVar65 = FMargin::FMargin(&local_5288,__real_40000000,0.0);
  pTVar47 = TAttribute<FMargin>::TAttribute<FMargin>(&local_45d0,pFVar65);
  pFVar70 = SCheckBox::FArguments::Padding(pFVar70,pTVar47);
  pFVar57 = STextBlock::FArguments::FArguments(&local_600);
  pTVar46 = TAttribute<FText>::TAttribute<FText>(&local_45a0,&pFVar93->_CheckBoxText);
  pFVar57 = STextBlock::FArguments::Text(pFVar57,pTVar46);
  pFVar41 = ::FName::FName(&local_4dc8,"NotificationList.WidgetText");
  pFVar68 = FAppStyle::GetWidgetStyle<FTextBlockStyle>(*pFVar41,(char *)0x0);
  pFVar57->_TextStyle = pFVar68;
  pTVar46 = TAttribute<FText>::TAttribute<FText>(&local_4570,&pFVar93->_CheckBoxText);
  pFVar57 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar57,pTVar46);
  pTVar60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_4a40,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x217,&local_5488);
  pTVar61 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar60,&local_4c98,pFVar57);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5438,pTVar61);
  pFVar70 = SCheckBox::FArguments::operator[](pFVar70,&local_5438);
  this_06 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_4a58,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x211,&local_5487);
  pTVar72 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_4ca8,pFVar70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5048,pTVar72);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]((FSlotArguments *)pFVar66,&local_5048);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5048.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4ca8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_5438.SharedReferenceCount.ReferenceController._4_4_,
                      local_5438.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a40._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_600);
  SCheckBox::FArguments::~FArguments(&local_1f10);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_3c70);
  pFVar62 = SHorizontalBox::FArguments::FArguments(&local_3350);
  pTVar63 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_49c8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x221,&local_5486);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar63,&local_52a8,pFVar62);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_49c8._Widget.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FArguments::~FArguments(&local_3350);
  fVar35 = local_5288.Bottom;
  uVar30 = _UNK_150957978;
  uVar29 = ___xmm_00000000408000000000000000000000;
  local_53d0 = (pFVar93->_ButtonDetails).ArrayNum;
  uVar89 = (ulonglong)(int)local_53d0;
  pFVar92 = (pFVar93->_ButtonDetails).AllocatorInstance.Data;
  local_5410 = (FArguments *)(pFVar92 + uVar89 * 0xb0);
  do {
    pFVar85 = local_5410;
    bVar22 = false;
    bVar21 = false;
    bVar20 = false;
    bVar19 = false;
    bVar36 = false;
    local_53e8 = pFVar92;
    if ((pFVar93->_ButtonDetails).ArrayNum != (int)uVar89) {
      local_54b4[0] = 0;
      `TCheckedPointerIterator<FNotificationButtonInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_54b4);
    }
    pFVar73 = ::operator_new(0x58);
    if ((FArguments *)pFVar92 == pFVar85) {
      if (pFVar73 == (FSlot *)0x0) {
        local_5418 = (FMemScope)0x0;
      }
      else {
        *(undefined8 *)pFVar73 = 0;
        *(undefined8 *)&pFVar73->field_0x8 = 0;
        *(undefined8 *)&pFVar73->field_0x10 = 0;
        *(undefined8 *)&pFVar73->field_0x18 = 0;
        *(undefined8 *)&pFVar73->field_0x20 = 0;
        *(undefined8 *)&pFVar73->field_0x28 = 0;
        *(undefined8 *)&pFVar73->field_0x30 = 0;
        *(undefined8 *)&pFVar73->field_0x38 = 0;
        *(undefined8 *)&pFVar73->field_0x40 = 0;
        *(undefined8 *)&pFVar73->field_0x48 = 0;
        *(undefined8 *)&pFVar73->field_0x50 = 0;
        local_5418 = (FMemScope)SVerticalBox::FSlot::FSlot((FSlot *)pFVar73);
      }
      FVar95.Inner.bActive = false;
      FVar95._1_3_ = 0;
      FVar95.PrevTag = 0;
      SVerticalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)local_4928,(FSlot *)&local_5418);
      local_4840 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_5158.Object)->field_0x218;
      local_4930 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
      local_4838 = -1;
      FVar79 = (FMemScope)
               SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_4928);
      uVar29 = _UNK_150978bc8;
      pFVar31 = ___xmm_000000000000000040a0000000000000;
      local_52c8 = 1;
      local_52d8 = ___xmm_000000000000000040a0000000000000;
      uStack_52d0 = _UNK_150978bc8;
      *(undefined1 *)&((FSlateInvalidationWidgetIndex *)((longlong)FVar79 + 0x28))->ArrayIndex = 1;
      local_52b0 = 0;
      local_52c0 = (undefined1  [8])0x0;
      FStack_52b8.Data = (FScriptContainerElement *)0x0;
      (((FWidgetProxyHandle *)((longlong)FVar79 + 0x18))->InvalidationRootHandle).InvalidationRoot =
           pFVar31;
      *(undefined8 *)((longlong)FVar79 + 0x20) = uVar29;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar79 + 0x30),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_52c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_52c0,
                 (FWriteAccessScope *)&local_4f50);
      if (((int)local_52b0 != 0) && (FStack_52b8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_52b8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_52b8,0,0,0x10);
        local_52b0 = local_52b0 & 0xffffffff00000000;
      }
      if (local_4f50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f50.Accessor,&local_4f50);
      }
      if (FStack_52b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_52b8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_52c0);
      FVar90 = FVar95;
      if ((FWidgetProxyHandle *)((longlong)FVar79 + 0x18) != (FWidgetProxyHandle *)0x0) {
        FVar90 = FVar79;
      }
      if ((TOptional<FSlateClippingState> *)local_50f8 !=
          (TOptional<FSlateClippingState> *)((longlong)FVar90 + 0x50)) {
        *(undefined4 *)
         &(((TOptional<FSlateClippingState> *)((longlong)FVar90 + 0x50))->TypedValue).StencilQuads.
          AllocatorInstance.Data = 2;
        *(undefined1 *)((longlong)FVar90 + 0x54) = 1;
      }
      FVar79 = FVar95;
      if (FVar90 != (FMemScope)0xffffffffffffffb8) {
        FVar79 = FVar90;
      }
      pFVar3 = (FWeakReferencer<1> *)((longlong)FVar79 + 0x48);
      if ((FWeakReferencer<1> *)local_5208 != pFVar3) {
        *(undefined4 *)&pFVar3->ReferenceController = 3;
        *(undefined1 *)((longlong)FVar79 + 0x4c) = 1;
      }
      FVar90 = FVar95;
      if (pFVar3 != (FWeakReferencer<1> *)0x0) {
        FVar90 = FVar79;
      }
      if (local_52a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        paVar80 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar80 = &(local_52a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar80 = (atomic<int>)((int)*paVar80 + 1);
        UNLOCK();
      }
      local_5298 = local_52a8.Object;
      FStack_5290.ReferenceController = local_52a8.SharedReferenceCount.ReferenceController;
      if (local_52a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        *paVar80 = (atomic<int>)((int)*paVar80 + 1);
        UNLOCK();
      }
      if ((SHorizontalBox **)((longlong)FVar90 + 8) != &local_5298) {
        *(SHorizontalBox **)((longlong)FVar90 + 8) = local_52a8.Object;
        local_5298 = (SHorizontalBox *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)((longlong)FVar90 + 0x10),&FStack_5290);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_5290.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_52a8.SharedReferenceCount.ReferenceController);
      local_4930 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
      if (local_4928[0] != (undefined8 *)0x0) {
        if (local_4838 == -1) {
          TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_4840,(FSlotArguments *)local_4928);
        }
        else {
          TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                    (local_4840,(FSlotArguments *)local_4928,local_4838);
        }
      }
      TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                (&local_48d0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48f8);
      if ((void *)local_48f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_48f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4918);
      if (local_4928[0] != (undefined8 *)0x0) {
        (**(code **)*local_4928[0])(local_4928[0],1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_52a8.SharedReferenceCount.ReferenceController);
      pFVar81 = SBox::FArguments::FArguments(&local_2630);
      local_5340 = (pFVar93->_WidthOverride).Size;
      local_533c = 1;
      local_5328 = 0;
      local_5338 = (undefined1  [8])0x0;
      pvStack_5330 = (void *)0x0;
      (pFVar81->_WidthOverride).Value.Size = local_5340;
      (pFVar81->_WidthOverride).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar81->_WidthOverride).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5338);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5338);
      if (pvStack_5330 != (void *)0x0) {
        FMemory::Free(pvStack_5330);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_5338);
      local_53e0 = (SWidget *)SHorizontalBox::FArguments::FArguments(&local_3968);
      pFVar73 = ::operator_new(0x58);
      local_5420 = FVar95;
      if (pFVar73 != (FSlot *)0x0) {
        *(undefined8 *)pFVar73 = 0;
        *(undefined8 *)&pFVar73->field_0x8 = 0;
        *(undefined8 *)&pFVar73->field_0x10 = 0;
        *(undefined8 *)&pFVar73->field_0x18 = 0;
        *(undefined8 *)&pFVar73->field_0x20 = 0;
        *(undefined8 *)&pFVar73->field_0x28 = 0;
        *(undefined8 *)&pFVar73->field_0x30 = 0;
        *(undefined8 *)&pFVar73->field_0x38 = 0;
        *(undefined8 *)&pFVar73->field_0x40 = 0;
        *(undefined8 *)&pFVar73->field_0x48 = 0;
        *(undefined8 *)&pFVar73->field_0x50 = 0;
        local_5420 = (FMemScope)SHorizontalBox::FSlot::FSlot(pFVar73);
      }
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_4390,(FSlot *)&local_5420);
      FVar79 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_4390);
      pSVar33 = local_5448;
      local_5438.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_5438.Object = (SWidget *)SNotificationExtendable::GetIconPadding;
      lStack_4e80 = (ulonglong)local_5438.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      local_4e88 = SNotificationExtendable::GetIconPadding;
      pTVar82 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SNotificationItemImpl>
                          ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_53b0
                           ,local_5448,(pmf_8386046f *)&local_4e88);
      local_4fc8 = 1;
      local_4fd8 = (FSlateInvalidationRoot *)0x0;
      uStack_4fd0 = 0;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4fc0,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar82);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_53b0,
                 (FWriteAccessScope *)&local_4f38);
      if ((local_53a0 != 0) && (local_53a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_53a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_53a8,0,0,0x10);
        local_53a0 = 0;
      }
      if (local_4f38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f38.Accessor,&local_4f38);
      }
      if (local_53a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_53a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_53b0);
      (((FWidgetProxyHandle *)((longlong)FVar79 + 0x18))->InvalidationRootHandle).InvalidationRoot =
           local_4fd8;
      *(undefined8 *)((longlong)FVar79 + 0x20) = uStack_4fd0;
      *(undefined1 *)&((FSlateInvalidationWidgetIndex *)((longlong)FVar79 + 0x28))->ArrayIndex =
           local_4fc8;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar79 + 0x30),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4fc0);
      FVar90 = FVar95;
      if ((FWidgetProxyHandle *)((longlong)FVar79 + 0x18) != (FWidgetProxyHandle *)0x0) {
        FVar90 = FVar79;
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4fc0);
      if ((void *)local_4fc0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4fc0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4fc0);
      if ((TOptional<FSlateClippingState> *)local_5200 !=
          (TOptional<FSlateClippingState> *)((longlong)FVar90 + 0x50)) {
        *(undefined4 *)
         &(((TOptional<FSlateClippingState> *)((longlong)FVar90 + 0x50))->TypedValue).StencilQuads.
          AllocatorInstance.Data = 1;
        *(undefined1 *)((longlong)FVar90 + 0x54) = 1;
      }
      FVar79 = FVar95;
      if (FVar90 != (FMemScope)0xffffffffffffffb8) {
        FVar79 = FVar90;
      }
      pFVar3 = (FWeakReferencer<1> *)((longlong)FVar79 + 0x48);
      if ((FWeakReferencer<1> *)local_51f8 != pFVar3) {
        *(undefined4 *)&pFVar3->ReferenceController = 1;
        *(undefined1 *)((longlong)FVar79 + 0x4c) = 1;
      }
      local_53d8 = FVar95;
      if (pFVar3 != (FWeakReferencer<1> *)0x0) {
        local_53d8 = FVar79;
      }
      local_5410 = SOverlay::FArguments::FArguments(&local_3b70);
      FVar79 = (FMemScope)SOverlay::Slot(&local_4450,0);
      if ((TOptional<FSlateClippingState> *)local_51f0 !=
          (TOptional<FSlateClippingState> *)((longlong)FVar79 + 0x50)) {
        *(undefined4 *)
         &(((TOptional<FSlateClippingState> *)((longlong)FVar79 + 0x50))->TypedValue).StencilQuads.
          AllocatorInstance.Data = 2;
        *(undefined1 *)((longlong)FVar79 + 0x54) = 1;
      }
      if (FVar79 == (FMemScope)0xffffffffffffffb8) {
        FVar79 = FVar95;
      }
      pFVar3 = (FWeakReferencer<1> *)((longlong)FVar79 + 0x48);
      if ((FWeakReferencer<1> *)local_51e8 != pFVar3) {
        *(undefined4 *)&pFVar3->ReferenceController = 2;
        *(undefined1 *)((longlong)FVar79 + 0x4c) = 1;
      }
      local_5418 = FVar95;
      if (pFVar3 != (FWeakReferencer<1> *)0x0) {
        local_5418 = FVar79;
      }
      pFVar48 = SImage::FArguments::FArguments(&local_2bf8);
      pIVar44 = FAppStyle::Get();
      pcVar9 = *(code **)((longlong)*pIVar44 + 0x50);
      pFVar41 = ::FName::FName(&local_5190,"NotificationList.Throbber");
      local_4fa8.Value = (FSlateBrush *)(*pcVar9)(pIVar44,*pFVar41);
      local_4fa8.bIsSet = true;
      local_4fa8.Getter._16_8_ = 0;
      local_4fa8.Getter._0_8_ = 0;
      local_4fa8.Getter._8_8_ = 0;
      pFVar48 = SImage::FArguments::Image(pFVar48,&local_4fa8);
      if (local_5478->_bUseThrobber == false) {
        local_5138.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
        bVar22 = true;
        local_5257 = 1;
        local_5138.Getter._16_8_ = 0;
        pTVar26 = &local_5138;
        local_5138.bIsSet = true;
        local_5138.Getter._0_8_ = 0;
        local_5138.Getter._8_8_ = 0;
        local_5258 = (uchar)EVisibility::Collapsed;
      }
      else {
        local_5438.SharedReferenceCount.ReferenceController._0_4_ = 0;
        local_5438.Object = (SWidget *)SNotificationExtendable::GetThrobberVisibility;
        lStack_4e70 = (ulonglong)local_5438.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
        local_4e78 = SNotificationExtendable::GetThrobberVisibility;
        bVar21 = true;
        pTVar83 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateSP<SNotificationItemImpl>
                            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
                             local_4f20,pSVar33,(pmf_fa4416ac *)&local_4e78);
        local_5088.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
        local_5088.bIsSet = true;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5088.Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar83);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f20);
        if ((void *)local_4f20._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_4f20._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_4f20);
        pTVar26 = &local_5088;
        local_5257 = local_5088.bIsSet;
        local_5258 = (uchar)local_5088.Value.Value.Value;
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5250,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar26->Getter);
      *(uchar *)&pFVar48->_padding_ = local_5258;
      *(undefined1 *)((longlong)&pFVar48->_padding_ + 1) = local_5257;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar48->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5250);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5250);
      if ((void *)local_5250._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5250._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_5250);
      *(undefined1 *)((longlong)&pFVar48->_padding_ + 4) = 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar48->_padding_,
                 (FWriteAccessScope *)&local_4ea8);
      local_4e90 = &pFVar48->_padding_;
      puVar75 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4e90);
      FVar96 = local_5190;
      if (puVar75 != (undefined8 *)0x0) {
        uStack_54a0 = 0;
        local_54a8 = SNotificationExtendable::GetThrobberTransform;
        fStack_549c = local_5288.Bottom;
        pTVar78 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&pSVar33->_padding_,&local_4e68);
        FVar96 = (FName)(pTVar78->SharedReferenceCount).ReferenceController;
        local_5420 = (FMemScope)pTVar78->Object;
        if (FVar96 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar96 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar96 + 8) + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)((longlong)FVar96 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar96 + 8) + 1);
          UNLOCK();
        }
        bVar20 = true;
        bVar19 = true;
        bVar36 = true;
        *puVar75 = &
                   ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar77 = FDelegateHandle::GenerateNewID();
        puVar75[2] = uVar77;
        *puVar75 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FMemScope *)(puVar75 + 3) = local_5420;
        *(FName *)(puVar75 + 4) = FVar96;
        if (FVar96 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar96 + 0xc) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar96 + 0xc) + 1);
          UNLOCK();
        }
        puVar75[5] = local_54a8;
        puVar75[6] = CONCAT44(fStack_549c,uStack_54a0);
      }
      if (bVar36) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar96);
      }
      if (bVar19) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar96);
      }
      if (bVar20) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4e68.SharedReferenceCount.ReferenceController);
      }
      if (local_4ea8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4ea8.Accessor,&local_4ea8);
      }
      lVar28 = _UNK_150689678;
      local_50a8 = 1;
      local_5090 = 0;
      local_50b8 = ___xmm_3fe00000000000003fe0000000000000;
      lStack_50b0 = _UNK_150689678;
      local_50a0 = (undefined1  [8])0x0;
      pvStack_5098 = (void *)0x0;
      pFVar48->_padding_ = ___xmm_3fe00000000000003fe0000000000000;
      pFVar48->_padding_ = lVar28;
      *(undefined1 *)&pFVar48->_padding_ = 1;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar48->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50a0);
      if (pvStack_5098 != (void *)0x0) {
        FMemory::Free(pvStack_5098);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_50a0);
      FLLMScope::FLLMScope
                (&local_5460,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_51c8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_51c0,&local_51c8,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_4d70,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,0x24e,&local_5484);
      FMemScope::~FMemScope(&local_51c0);
      FLLMScope::~FLLMScope(&local_5460);
      pTVar51 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_4d70,&local_4df8,pFVar48);
      pTVar94 = (pTVar51->SharedReferenceCount).ReferenceController;
      local_5358.Object = (SWidget *)pTVar51->Object;
      if (pTVar94 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar94->SharedReferenceCount = (atomic<int>)((int)pTVar94->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_5358.SharedReferenceCount.ReferenceController = pTVar94;
      pFVar84 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)local_5418,&local_5358);
      pFVar85 = SOverlay::FArguments::operator+(local_5410,pFVar84);
      pFVar84 = SOverlay::Slot(&local_44b0,0);
      if ((longlong *)local_5108 != &pFVar84->_padding_) {
        *(undefined4 *)&pFVar84->_padding_ = 2;
        *(undefined1 *)((longlong)&pFVar84->_padding_ + 4) = 1;
      }
      if (pFVar84 == (FSlotArguments *)0xffffffffffffffb8) {
        pFVar84 = (FSlotArguments *)0x0;
      }
      plVar4 = &pFVar84->_padding_;
      if ((longlong *)local_5110 != plVar4) {
        *(undefined4 *)plVar4 = 2;
        *(undefined1 *)((longlong)&pFVar84->_padding_ + 4) = 1;
      }
      this_09 = (FSlotArguments *)0x0;
      if (plVar4 != (longlong *)0x0) {
        this_09 = pFVar84;
      }
      pFVar48 = SImage::FArguments::FArguments(&local_2ea0);
      bVar97 = local_5478->_bUseSuccessFailIcons == false;
      if (bVar97) {
        pTVar42 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                            (&local_47e8,(TAttribute<FSlateBrush_const_*> *)&pSVar33->_padding_);
      }
      else {
        local_5358.SharedReferenceCount.ReferenceController =
             local_5358.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
        local_5358.Object = (SWidget *)SNotificationExtendable::GetNotificationIcon;
        local_4e58 = SNotificationExtendable::GetNotificationIcon;
        pTStack_4e50 = local_5358.SharedReferenceCount.ReferenceController;
        pTVar86 = TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateSP<SNotificationItemImpl>(&local_49b0,pSVar33,(pmf_e86e9964 *)&local_4e58);
        TAttribute<FSlateBrush_const_*>::Create(&local_4958,pTVar86);
        TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
        ~TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>(&local_49b0);
        pTVar42 = &local_4958;
      }
      local_4c58.Value = pTVar42->Value;
      local_4c58.bIsSet = pTVar42->bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4c58.Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar42->Getter);
      pFVar48 = SImage::FArguments::Image(pFVar48,&local_4c58);
      dVar27 = _UNK_150978be8;
      local_50c0 = 0;
      local_50e0 = 1;
      local_50d8 = 1;
      local_50f0 = ___xmm_40400000000000004040000000000000;
      dStack_50e8 = _UNK_150978be8;
      local_50d0 = (undefined1  [8])0x0;
      pvStack_50c8 = (void *)0x0;
      if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_50f0 !=
          &pFVar48->_DesiredSizeOverride) {
        (pFVar48->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X =
             ___xmm_40400000000000004040000000000000;
        (pFVar48->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dVar27;
        (pFVar48->_DesiredSizeOverride).Value.bIsSet = true;
      }
      (pFVar48->_DesiredSizeOverride).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar48->_DesiredSizeOverride).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50d0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50d0);
      if (pvStack_50c8 != (void *)0x0) {
        FMemory::Free(pvStack_50c8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_50d0);
      FLLMScope::FLLMScope
                (&local_545c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_51b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_51b0,&local_51b8,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_4d88,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                 ,600,&local_5483);
      FMemScope::~FMemScope(&local_51b0);
      FLLMScope::~FLLMScope(&local_545c);
      pTVar51 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_4d88,&local_4e08,pFVar48);
      pTVar11 = (pTVar51->SharedReferenceCount).ReferenceController;
      local_5058.Object = (SWidget *)pTVar51->Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_5058.SharedReferenceCount.ReferenceController = pTVar11;
      pFVar84 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)this_09,&local_5058);
      pFVar85 = SOverlay::FArguments::operator+(pFVar85,pFVar84);
      this_07 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                          (&local_4ad0,"SOverlay",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                           ,0x249,&local_5482);
      pTVar87 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                          (this_07,&local_4e18,pFVar85);
      pTVar12 = (pTVar87->SharedReferenceCount).ReferenceController;
      local_4ff8.Object = (SWidget *)pTVar87->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_4ff8.SharedReferenceCount.ReferenceController = pTVar12;
      pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)local_53d8,&local_4ff8);
      pFVar62 = SHorizontalBox::FArguments::operator+((FArguments *)local_53e0,pFVar55);
      pFVar55 = SHorizontalBox::Slot(&local_40d8);
      pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar55->field_0x18,__real_41200000,0.0,0.0,0.0);
      local_4e48.Object = (SWidget *)local_5158.Object;
      local_4e48.SharedReferenceCount.ReferenceController =
           local_5158.SharedReferenceCount.ReferenceController;
      if (local_5158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar55,&local_4e48);
      pFVar62 = SHorizontalBox::FArguments::operator+(pFVar62,pFVar55);
      pTVar63 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                          (&local_4ae8,"SHorizontalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                           ,0x242,&local_5481);
      pTVar64 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar63,&local_4e28,pFVar62);
      pTVar13 = (pTVar64->SharedReferenceCount).ReferenceController;
      local_5278 = pTVar64->Object;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar14 = (pFVar81->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar81->_Content).Widget.Object = (SWidget *)local_5278;
      (pFVar81->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar13;
      pTStack_5270 = pTVar13;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      this_08 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                          (&local_4a28,"SBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                           ,0x23f,local_5480);
      pTVar88 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (this_08,&local_4e38,pFVar81);
      pTVar76 = local_51a8;
      local_51a8->Object = (SWidget *)pTVar88->Object;
      pTVar14 = (pTVar88->SharedReferenceCount).ReferenceController;
      (local_51a8->SharedReferenceCount).ReferenceController = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4e38.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a28._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4e28.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4ae8._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5158.SharedReferenceCount.ReferenceController);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_40d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4e18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4ad0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4e08.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d88._Widget.SharedReferenceCount.ReferenceController);
      if (bVar97) {
        TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&local_47e8);
      }
      else {
        TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&local_4958);
      }
      SImage::FArguments::~FArguments(&local_2ea0);
      SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_44b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar94);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4df8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d70._Widget.SharedReferenceCount.ReferenceController);
      if (bVar22) {
        TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_5138);
      }
      if (bVar21) {
        TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_5088);
      }
      SImage::FArguments::~FArguments(&local_2bf8);
      SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_4450);
      TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
      ~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>
                (&local_3b70._Slots);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3b70);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4390);
      TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
      ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3968._Slots)
      ;
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3968);
      SBox::FArguments::~FArguments(&local_2630);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5148.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5158.SharedReferenceCount.ReferenceController);
      return pTVar76;
    }
    if (pFVar73 == (FSlot *)0x0) {
      local_51d8 = (FSlot *)0x0;
    }
    else {
      *(undefined8 *)pFVar73 = 0;
      *(undefined8 *)&pFVar73->field_0x8 = 0;
      *(undefined8 *)&pFVar73->field_0x10 = 0;
      *(undefined8 *)&pFVar73->field_0x18 = 0;
      *(undefined8 *)&pFVar73->field_0x20 = 0;
      *(undefined8 *)&pFVar73->field_0x28 = 0;
      *(undefined8 *)&pFVar73->field_0x30 = 0;
      *(undefined8 *)&pFVar73->field_0x38 = 0;
      *(undefined8 *)&pFVar73->field_0x40 = 0;
      *(undefined8 *)&pFVar73->field_0x48 = 0;
      *(undefined8 *)&pFVar73->field_0x50 = 0;
      local_51d8 = SHorizontalBox::FSlot::FSlot(pFVar73);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_4c28,(FSlot *)&local_51d8);
    local_4b38 = -1;
    local_4c30 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    local_4b40 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_52a8.Object)->field_0x218;
    pFVar74 = (FSizeParam *)FAuto::FAuto((FAuto *)local_4b30);
    TOptional<FSizeParam>::operator=(&local_4bd0._SizeParam,pFVar74);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b00);
    if ((void *)local_4b00._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4b00._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b20);
    if ((void *)local_4b20._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4b20._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b20);
    local_4bd8 = 2;
    local_52e0 = 0;
    local_4bd4 = 1;
    local_5308 = uVar29;
    uStack_5300 = uVar30;
    local_52f8 = 1;
    local_52f0 = (undefined1  [8])0x0;
    FStack_52e8.Data = (FScriptContainerElement *)0x0;
    local_4c00 = 1;
    local_4c18[1].ReferenceController = (TReferenceControllerBase<1> *)uVar29;
    local_4c18[2].ReferenceController = (TReferenceControllerBase<1> *)uVar30;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4bf8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_52f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_52f0,
               (FWriteAccessScope *)&local_4f80);
    if (((int)local_52e0 != 0) && (FStack_52e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_52e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_52e8,0,0,0x10);
      local_52e0 = local_52e0 & 0xffffffff00000000;
    }
    if (local_4f80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f80.Accessor,&local_4f80);
    }
    if (FStack_52e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_52e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_52f0);
    pFVar43 = SButton::FArguments::FArguments(&local_15f0);
    local_5238.TextData.Reference = *(ITextData **)pFVar92;
    local_53f0 = pFVar43;
    if (local_5238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5238.TextData.Reference + 8))
                (local_5238.TextData.Reference,local_5100);
    }
    local_5238.Flags = *(uint *)(pFVar92 + 8);
    local_5228 = pFVar92[0x10];
    local_5220 = (undefined1  [8])0x0;
    pvStack_5218 = (void *)0x0;
    local_5210 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_5220,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar92 + 0x18));
    FText::operator=(&(pFVar43->_Text).Value,&local_5238);
    (pFVar43->_Text).bIsSet = (bool)local_5228;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar43->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5220);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5220);
    if (pvStack_5218 != (void *)0x0) {
      FMemory::Free(pvStack_5218);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5220);
    if (local_5238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5238.TextData.Reference + 0x10))();
    }
    pFVar91 = pFVar92 + 0x30;
    if (pFVar92[0x40] == (FScriptContainerElement)0x0) {
      pFVar91 = pFVar92;
    }
    local_5398.TextData.Reference = *(ITextData **)pFVar91;
    if (local_5398.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5398.TextData.Reference + 8))
                (local_5398.TextData.Reference,local_50fc);
    }
    local_5398.Flags = *(uint *)(pFVar91 + 8);
    local_5388 = pFVar91[0x10];
    local_5380 = (undefined1  [8])0x0;
    FStack_5378.Data = (FScriptContainerElement *)0x0;
    local_5370 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_5380,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar91 + 0x18));
    FText::operator=((FText *)pFVar43,&local_5398);
    *(FScriptContainerElement *)&pFVar43->_padding_ = local_5388;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar43->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5380);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5380,
               (FWriteAccessScope *)&local_4f68);
    if ((local_5370 != 0) && (FStack_5378.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5378.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5378,0,0,0x10);
      local_5370 = 0;
    }
    if (local_4f68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f68.Accessor,&local_4f68);
    }
    if (FStack_5378.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5378.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5380);
    if (local_5398.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5398.TextData.Reference + 0x10))();
    }
    pFVar41 = ::FName::FName(&local_4dc0,"NotificationList.WidgetText");
    FVar96 = *pFVar41;
    pIVar44 = FAppStyle::Get();
    pFVar68 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                        (pIVar44,FVar96,(char *)0x0,(FTextBlockStyle *)0x0);
    pFVar43->_TextStyle = pFVar68;
    local_5320 = (undefined1  [8])0x0;
    local_5318 = (void *)0x0;
    local_5310 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5320,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar92 + 0x60));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar43->_OnClicked,
               (FWriteAccessScope *)&local_4f08);
    local_4ef0 = &(pFVar43->_OnClicked).field_0x8;
    puVar75 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_4ef0);
    pTVar94 = local_5368;
    if (puVar75 != (undefined8 *)0x0) {
      local_5188 = OnButtonClicked;
      uStack_5180 = 0;
      fStack_517c = fVar35;
      pTVar76 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&local_5448->_padding_,&local_4c88);
      pTVar94 = (pTVar76->SharedReferenceCount).ReferenceController;
      local_5498 = pTVar76->Object;
      if (pTVar94 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar94->SharedReferenceCount = (atomic<int>)((int)pTVar94->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar94->SharedReferenceCount = (atomic<int>)((int)pTVar94->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar16 = true;
      bVar15 = true;
      bVar97 = true;
      *puVar75 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar75[1] = 0;
      puVar75[2] = 0;
      *(undefined4 *)(puVar75 + 3) = 0;
      local_5368 = pTVar94;
      local_51e0 = pTVar94;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar75 + 1),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_5320);
      uVar77 = FDelegateHandle::GenerateNewID();
      puVar75[4] = uVar77;
      *puVar75 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSNotificationItemImpl___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar75[5] = local_5498;
      puVar75[6] = pTVar94;
      if (pTVar94 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar94->WeakReferenceCount = (atomic<int>)((int)pTVar94->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar75[7] = local_5188;
      puVar75[8] = CONCAT44(fStack_517c,uStack_5180);
    }
    if (bVar97) {
      bVar97 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar94);
    }
    if (bVar15) {
      bVar15 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_51e0);
    }
    if (bVar16) {
      bVar16 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4c88.SharedReferenceCount.ReferenceController);
    }
    if (local_4f08.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f08.Accessor,&local_4f08);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5320);
    if (local_5318 != (void *)0x0) {
      FMemory::Free(local_5318);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5320);
    FVar5 = pFVar92[0xab];
    FVar6 = pFVar92[0xaa];
    FVar7 = pFVar92[0xa9];
    FVar8 = local_53e8[0xa8];
    local_5498 = (SWidget *)
                 TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                 ::
                 TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                           (local_47c0,
                            (TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                             *)(local_53e8 + 0x78));
    *(undefined1 *)((longlong)&local_53f0->_padding_ + 1) = 1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_53f0->_padding_,
               (FWriteAccessScope *)&local_4ee8);
    local_4ed0 = &local_53f0->_padding_;
    local_5468 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_4ed0);
    if (local_5468 != (undefined8 *)0x0) {
      local_5178 = GetButtonVisibility;
      uStack_5170 = 0;
      fStack_516c = fVar35;
      pTVar78 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&local_5448->_padding_,&local_4c78);
      local_5408 = pTVar78->Object;
      local_5470 = (FName)(pTVar78->SharedReferenceCount).ReferenceController;
      if (local_5470 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)local_5470 + 8) = *(int *)((longlong)local_5470 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_5470 + 8) = *(int *)((longlong)local_5470 + 8) + 1;
        UNLOCK();
      }
      bVar18 = true;
      bVar17 = true;
      *local_5468 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_AUEVisibility__W4ECompletionState_SNotificationItem___ZUFDefaultDelegateUserPolicy____U1_U1_U1_U1___6B_
      ;
      local_5348 = local_5470;
      local_5198 = local_5470;
      TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
      ::
      TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                (local_5468 + 1,
                 (TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                  *)local_5498);
      *(FScriptContainerElement *)(local_5468 + 4) = FVar8;
      *(FScriptContainerElement *)((longlong)local_5468 + 0x21) = FVar7;
      *(FScriptContainerElement *)((longlong)local_5468 + 0x22) = FVar6;
      *(FScriptContainerElement *)((longlong)local_5468 + 0x23) = FVar5;
      uVar77 = FDelegateHandle::GenerateNewID();
      local_5468[5] = uVar77;
      *local_5468 = &
                    ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_AUEVisibility__W4ECompletionState_SNotificationItem___ZUFDefaultDelegateUserPolicy____U2_U2_U2_U2___6B_
      ;
      local_5468[6] = local_5408;
      *(FName *)(local_5468 + 7) = local_5470;
      if (local_5470 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)local_5470 + 0xc) = *(int *)((longlong)local_5470 + 0xc) + 1;
        UNLOCK();
      }
      local_5468[8] = local_5178;
      local_5468[9] = CONCAT44(fStack_516c,uStack_5170);
    }
    if (bVar17) {
      bVar17 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_5348);
    }
    if (bVar18) {
      bVar18 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_5198);
    }
    if (local_4ee8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4ee8.Accessor,&local_4ee8);
    }
    pSVar32 = local_5498;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5498);
    pvVar10 = (void *)pSVar32->_padding_;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pSVar32);
    pFVar92 = local_53e8;
    local_5498 = (SWidget *)
                 TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                 ::
                 TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                           (local_47a8,
                            (TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                             *)(local_53e8 + 0x90));
    pFVar43 = local_53f0;
    *(undefined1 *)((longlong)&local_53f0->_padding_ + 1) = 1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_53f0->_padding_,
               (FWriteAccessScope *)&local_4ec8);
    local_4eb0 = &pFVar43->_padding_;
    puVar75 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_4eb0);
    if (puVar75 != (undefined8 *)0x0) {
      local_54a8 = IsButtonEnabled;
      uStack_54a0 = 0;
      fStack_549c = fVar35;
      pTVar78 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&local_5448->_padding_,&local_4c68);
      local_5470 = (FName)pTVar78->Object;
      local_5450 = (SWidget *)(pTVar78->SharedReferenceCount).ReferenceController;
      if (local_5450 != (SWidget *)0x0) {
        LOCK();
        *(int *)&local_5450->_padding_ = (int)local_5450->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&local_5450->_padding_ = (int)local_5450->_padding_ + 1;
        UNLOCK();
      }
      bVar25 = true;
      bVar24 = true;
      bVar23 = true;
      *puVar75 = &
                 ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NW4ECompletionState_SNotificationItem___ZUFDefaultDelegateUserPolicy______6B_
      ;
      local_5408 = local_5450;
      local_53e0 = local_5450;
      TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>::
      TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                (puVar75 + 1,
                 (TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                  *)local_5498);
      uVar77 = FDelegateHandle::GenerateNewID();
      puVar75[4] = uVar77;
      *puVar75 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationItemImpl___00__A6A_NXZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NW4ECompletionState_SNotificationItem___ZUFDefaultDelegateUserPolicy______6B_
      ;
      *(FName *)(puVar75 + 5) = local_5470;
      puVar75[6] = local_5408;
      if (local_5408 != (SWidget *)0x0) {
        LOCK();
        puVar1 = (undefined1 *)((longlong)&local_5408->_padding_ + 4);
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      puVar75[7] = local_54a8;
      puVar75[8] = CONCAT44(fStack_549c,uStack_54a0);
    }
    if (bVar23) {
      bVar23 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_5450);
    }
    if (bVar24) {
      bVar24 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_53e0);
    }
    if (bVar25) {
      bVar25 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4c68.SharedReferenceCount.ReferenceController);
    }
    if (local_4ec8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4ec8.Accessor,&local_4ec8);
    }
    pSVar32 = local_5498;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5498);
    pvVar10 = (void *)pSVar32->_padding_;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pSVar32);
    FLLMScope::FLLMScope(local_5458,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_5470 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_53d8,&local_5470,true);
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
              (&local_53c8,"SButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x22a,&local_5485);
    FMemScope::~FMemScope(&local_53d8);
    FLLMScope::~FLLMScope(local_5458);
    this_00 = local_53c8._Widget.Object;
    if ((local_53c8._Widget.Object == (SButton *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar9 = (code *)swi(3);
      pTVar76 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar76;
    }
    SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar43);
    SButton::Construct(this_00,pFVar43);
    if ((this_00 == (SButton *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar9 = (code *)swi(3);
      pTVar76 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar76;
    }
    if ((this_00->_padding_ & 0x10) == 0) {
      cVar37 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
      bVar38 = 0;
      if (cVar37 != '\0') goto LAB_1429dd281;
    }
    else {
LAB_1429dd281:
      bVar38 = 0x20;
    }
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar38;
    if ((this_00 == (SButton *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar9 = (code *)swi(3);
      pTVar76 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar76;
    }
    pbVar2 = (byte *)((longlong)&this_00->_padding_ + 1);
    *pbVar2 = *pbVar2 | 4;
    if ((this_00 == (SButton *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar36)) {
      pcVar9 = (code *)swi(3);
      pTVar76 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar76;
    }
    FVar34.ReferenceController = local_53c8._Widget.SharedReferenceCount.ReferenceController;
    local_53c8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_53c8._Widget.Object = (SButton *)0x0;
    if ((this_00 == (SButton *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar36)) {
      pcVar9 = (code *)swi(3);
      pTVar76 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar76;
    }
    local_5260.ReferenceController = FVar34.ReferenceController;
    if (FVar34.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar34.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar34.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar34.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar34.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4c20 = this_00;
    local_5268 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_4c18,&local_5260);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5260.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar34.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar34.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_53c8._Widget.SharedReferenceCount.ReferenceController);
    SButton::FArguments::~FArguments(&local_15f0);
    local_4c30 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if (local_4c28 != (undefined8 *)0x0) {
      if (local_4b38 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_4b40,(FSlotArguments *)&local_4c28);
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_4b40,(FSlotArguments *)&local_4c28,local_4b38);
      }
    }
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_4bd0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4bf8);
    if ((void *)local_4bf8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4bf8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4bf8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c18[0].ReferenceController);
    if (local_4c28 != (undefined8 *)0x0) {
      (**(code **)*local_4c28)(local_4c28,1);
    }
    pFVar92 = pFVar92 + 0xb0;
    uVar89 = (ulonglong)local_53d0;
    pFVar93 = local_5478;
  } while( true );
}

// GetButtonVisibility @ 1429e9140

EVisibility __thiscall
SNotificationItemImpl::GetButtonVisibility
          (SNotificationItemImpl *this,
          TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
          *param_1,EVisibility param_2,EVisibility param_3,EVisibility param_4,EVisibility param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  TEnumAsByte<EVisibility::Private> TVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined7 in_register_00000081;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 in_stack_00000038;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
            CONCAT71(in_register_00000081,param_2.Value.Value);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
  if ((*(int *)&this_00->field_0x10 != 0) && (*(longlong **)&this_00->field_0x8 != (longlong *)0x0))
  {
    cVar4 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      lVar3 = this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
      if (*(int *)&this_00->field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&this_00->field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,param_1,(int)lVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
      pvVar8 = *(void **)&this_00->field_0x8;
      goto LAB_1429e926f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    *(TEnumAsByte<EVisibility::Private> *)param_1 = param_3.Value.Value;
  }
  else if (iVar1 == 1) {
    *(TEnumAsByte<EVisibility::Private> *)param_1 = param_4.Value.Value;
  }
  else if (iVar1 == 2) {
    *(TEnumAsByte<EVisibility::Private> *)param_1 = param_5.Value.Value;
  }
  else if (iVar1 == 3) {
    *(undefined1 *)param_1 = in_stack_00000038;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x287,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      TVar6.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar6.Value;
    }
    *(TEnumAsByte<EVisibility::Private> *)param_1 = EVisibility::Visible.Value.Value;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  pvVar8 = *(void **)&this_00->field_0x8;
LAB_1429e926f:
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (EVisibility)SUB81(param_1,0);
}

// GetCheckBoxVisibility @ 1429e95e0

EVisibility __thiscall SNotificationItemImpl::GetCheckBoxVisibility(SNotificationItemImpl *this)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CheckBoxStateChanged,
             &local_28);
  if ((*(int *)&(this->CheckBoxStateChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CheckBoxStateChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1429e9623;
    }
  }
  bVar2 = false;
LAB_1429e9623:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar4 = EVisibility::Collapsed;
  if (bVar2) {
    EVar4 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetHyperlinkText @ 1429ebb20

FText * __thiscall
SNotificationItemImpl::GetHyperlinkText(SNotificationItemImpl *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = TAttribute<FText>::Get(&this->HyperlinkText);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetHyperlinkVisibility @ 1429ebb80

EVisibility __thiscall SNotificationItemImpl::GetHyperlinkVisibility(SNotificationItemImpl *this)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Hyperlink,&local_28);
  if ((*(int *)&(this->Hyperlink).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Hyperlink).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1429ebbc3;
    }
  }
  bVar2 = false;
LAB_1429ebbc3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar4 = EVisibility::Collapsed;
  if (bVar2) {
    EVar4 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// IsButtonEnabled @ 1429f53e0

bool __thiscall
SNotificationItemImpl::IsButtonEnabled
          (SNotificationItemImpl *this,
          TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
          *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  puVar1 = &param_1->field_0x8;
  if ((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)puVar1 == (longlong *)0x0)) {
LAB_1429f546b:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)puVar1 + 0x38))();
    if (cVar3 == '\0') goto LAB_1429f546b;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    lVar2 = this->_padding_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if (*(int *)&param_1->field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)puVar1;
    }
    cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,(int)lVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (cVar3 == '\0') {
      bVar5 = false;
      goto LAB_1429f547a;
    }
  }
  bVar5 = true;
LAB_1429f547a:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return bVar5;
}

// OnButtonClicked @ 1429f9820

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationItemImpl::OnButtonClicked
          (SNotificationItemImpl *this,FReply *__return_storage_ptr__,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  pvVar2 = *(void **)&param_1->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return __return_storage_ptr__;
}

// OnCopyTextToClipboard @ 1429f9940

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNotificationItemImpl::OnCopyTextToClipboard
          (SNotificationItemImpl *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FText local_38;
  FTextBuilder local_28;
  
  local_28.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Lines.ArrayNum = 0;
  local_28.Lines.ArrayMax = 0;
  local_28.IndentCount = 0;
  if ((char)this->_padding_ != '\0') {
    pFVar1 = TAttribute<FText>::Get((TAttribute<FText> *)&this->_padding_);
    FTextBuilder::AppendLine(&local_28,pFVar1);
  }
  if ((char)this->_padding_ != '\0') {
    pFVar1 = TAttribute<FText>::Get((TAttribute<FText> *)&this->_padding_);
    FTextBuilder::AppendLine(&local_28,pFVar1);
  }
  FTextBuilder::ToText(&local_28,&local_38);
  DestructItems<FText,int>((FText *)local_28.Lines.AllocatorInstance.Data,local_28.Lines.ArrayNum);
  if ((FText *)local_28.Lines.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_28.Lines.AllocatorInstance.Data);
  }
  pFVar2 = FText::ToString(&local_38);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnHyperlinkClicked @ 1429fa290

void __thiscall SNotificationItemImpl::OnHyperlinkClicked(SNotificationItemImpl *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Hyperlink,&local_28);
  if ((*(int *)&(this->Hyperlink).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Hyperlink).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SetHyperlink @ 142a0a6c0

void __thiscall
SNotificationItemImpl::SetHyperlink
          (SNotificationItemImpl *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TAttribute<FText> *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Hyperlink,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_28);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (param_2->bIsSet == false) {
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TAttribute<FText>::operator=(&this->HyperlinkText,param_2);
  return;
}

