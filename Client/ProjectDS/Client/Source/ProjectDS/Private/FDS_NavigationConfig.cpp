// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// FDS_NavigationConfig @ 14bc831d0

FDS_NavigationConfig * __thiscall
FDS_NavigationConfig::FDS_NavigationConfig(FDS_NavigationConfig *this)

{
  undefined1 local_res8 [8];
  TPairInitializer<FKey_&&,EUINavigationAction_&&> local_res10;
  FName *local_38;
  undefined1 *local_30;
  FName local_28;
  FKeyDetails *local_20;
  TReferenceControllerBase<1> *local_18;
  
  FNavigationConfig::FNavigationConfig((FNavigationConfig *)this);
  this->bEnableNavigationKey = false;
  this->_padding_ = (longlong)&___7FDS_NavigationConfig__6B_;
  local_28 = EKeys::Gamepad_FaceButton_Bottom.KeyName;
  local_20 = EKeys::Gamepad_FaceButton_Bottom.KeyDetails.Object;
  local_res8[0] = 0;
  local_18 = EKeys::Gamepad_FaceButton_Bottom.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Gamepad_FaceButton_Bottom.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Gamepad_FaceButton_Bottom.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Gamepad_FaceButton_Bottom.KeyDetails.SharedReferenceCount.ReferenceController
               )->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = &local_28;
  local_30 = local_res8;
  TSet<TTuple<FKey,enum_EUINavigationAction>,TDefaultMapHashableKeyFuncs<FKey,enum_EUINavigationAction,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_&&,enum_EUINavigationAction_&&>_>
            (&this->_padding_,&local_res10,(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return this;
}

// DisableNavigationKey @ 14bc969c0

void __thiscall FDS_NavigationConfig::DisableNavigationKey(FDS_NavigationConfig *this)

{
  this->bEnableNavigationKey = false;
  return;
}

// EnableNavigationKey @ 14bc96a70

void __thiscall FDS_NavigationConfig::EnableNavigationKey(FDS_NavigationConfig *this)

{
  this->bEnableNavigationKey = true;
  return;
}

// GetNavigationActionFromKey @ 14bca0b50

EUINavigationAction __thiscall
FDS_NavigationConfig::GetNavigationActionFromKey(FDS_NavigationConfig *this,FKeyEvent *param_1)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  EUINavigationAction EVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uStackX_14;
  
  FVar1 = (param_1->Key).KeyName;
  bVar2 = false;
  pTVar6 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar1 == EKeys::SpaceBar.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (bVar7) {
    return Invalid;
  }
  if (this->bEnableNavigationKey == false) {
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
LAB_14bca0be7:
    bVar7 = false;
    pTVar5 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    pTVar6 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_1->Key).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = true;
    if (FVar1 == EKeys::Gamepad_DPad_Up.KeyName) goto LAB_14bca0be7;
    pTVar5 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_1->Key).KeyName;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = true;
    bVar7 = true;
    if (FVar1 != EKeys::Gamepad_DPad_Down.KeyName) {
      bVar3 = false;
      goto LAB_14bca0bef;
    }
  }
  bVar3 = true;
LAB_14bca0bef:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    return Invalid;
  }
  EVar4 = FNavigationConfig::GetNavigationActionFromKey((FNavigationConfig *)this,param_1);
  return EVar4;
}

// GetNavigationDirectionFromAnalog @ 14bca0c50

EUINavigation __thiscall
FDS_NavigationConfig::GetNavigationDirectionFromAnalog
          (FDS_NavigationConfig *this,FAnalogInputEvent *param_1)

{
  EUINavigation EVar1;
  
  if (this->bEnableNavigationKey == false) {
    return Invalid;
  }
  EVar1 = FNavigationConfig::GetNavigationDirectionFromAnalog((FNavigationConfig *)this,param_1);
  return EVar1;
}

// GetNavigationDirectionFromKey @ 14bca0c70

EUINavigation __thiscall
FDS_NavigationConfig::GetNavigationDirectionFromKey(FDS_NavigationConfig *this,FKeyEvent *param_1)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EUINavigation EVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uStackX_c;
  
  bVar3 = false;
  if (this->bEnableNavigationKey == false) {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_14bca0ce3:
    bVar2 = false;
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_1->Key).KeyName;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    if (FVar1 == EKeys::Gamepad_DPad_Up.KeyName) goto LAB_14bca0ce3;
    pTVar6 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_1->Key).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar2 = true;
    if (FVar1 != EKeys::Gamepad_DPad_Down.KeyName) {
      bVar4 = false;
      goto LAB_14bca0ceb;
    }
  }
  bVar4 = true;
LAB_14bca0ceb:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (bVar4) {
    return Invalid;
  }
  EVar5 = FNavigationConfig::GetNavigationDirectionFromKey((FNavigationConfig *)this,param_1);
  return EVar5;
}

