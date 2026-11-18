// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b440de0

UClass * __cdecl UDS_CharacterUIEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterUIEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterUIEvent",
               &Z_Registration_Info_UClass_UDS_CharacterUIEvent.InnerSingleton,
               StaticRegisterNativesUDS_CharacterUIEvent,0x318,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharacterUIEvent>,
               InternalVTableHelperCtorCaller<UDS_CharacterUIEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterUIEvent.InnerSingleton;
}

// UDS_CharacterUIEvent @ 14b443ad0

UDS_CharacterUIEvent * __thiscall
UDS_CharacterUIEvent::UDS_CharacterUIEvent(UDS_CharacterUIEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharacterUIEvent__6B_;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate = 0;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate = 0;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate = 0;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate = 0;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate = 0;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate = 0;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate = 0;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClearedDeck).Delegate = 0;
  *(undefined8 *)&(this->OnClearedDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClearedDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClearedDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate = 0;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate = 0;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate = 0;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate = 0;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->QueryCharLevelupGuageData).Delegate = 0;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions = 0;
  (this->OnCustomizeComponentSlotClicked)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate_PEAVUObject__PEAV1___6B_;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->QueryCharLevelupGuageData).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->QueryCharLevelupGuageData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnCustomizeComponentSlotClicked);
  }
  return this;
}

// UDS_CharacterUIEvent @ 14b443dd0

UDS_CharacterUIEvent * __thiscall
UDS_CharacterUIEvent::UDS_CharacterUIEvent(UDS_CharacterUIEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharacterUIEvent__6B_;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate = 0;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate = 0;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeDetailPanel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateTargetExp).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDeckSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedDeckID).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate = 0;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedCurrentDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate = 0;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSignupedDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate = 0;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeMainCharacter).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate = 0;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedMainCharacter).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate = 0;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDeckIconName).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClearedDeck).Delegate = 0;
  *(undefined8 *)&(this->OnClearedDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClearedDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClearedDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate = 0;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectDeckIcon).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate = 0;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate = 0;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectCharEvolve).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate = 0;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate = 0;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->QueryCharLevelupGuageData).Delegate = 0;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions = 0;
  (this->OnCustomizeComponentSlotClicked)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate_PEAVUObject__PEAV1___6B_;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->QueryCharLevelupGuageData).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->QueryCharLevelupGuageData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnCustomizeComponentSlotClicked);
  }
  return this;
}

// ~UDS_CharacterUIEvent @ 14b444330

void __thiscall UDS_CharacterUIEvent::~UDS_CharacterUIEvent(UDS_CharacterUIEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_CharacterUIEvent__6B_;
  (this->OnCustomizeComponentSlotClicked)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate_PEAVUObject__PEAV1___6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnCustomizeComponentSlotClicked);
  }
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnCustomizeComponentSlotClicked).Subscriptions);
  *(undefined4 *)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnCustomizeComponentSlotClicked).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnCustomizeComponentSlotClicked).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCustomizeComponentInfoChanged).Delegate.field_0x8,
             *(int *)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnCustomizeComponentInfoChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCustomizeComponentInfoChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->QueryCharLevelupGuageData);
  pvVar1 = *(void **)&(this->QueryCharLevelupGuageData).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->QueryCharLevelupGuageData);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateCharEvolveLevel).Delegate.field_0x8,
             *(int *)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateCharEvolveLevel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateCharEvolveLevel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x8,
             *(int *)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnCharEvolveCompleteSlotEffect).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharEvolveCompleteSlotEffect);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSuccessCharEvolveComplete).Delegate.field_0x8,
             *(int *)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSuccessCharEvolveComplete).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccessCharEvolveComplete);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateCharEvolveInfo).Delegate.field_0x8,
             *(int *)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateCharEvolveInfo).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateCharEvolveInfo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectCharEvolve).Delegate.field_0x8,
             *(int *)&(this->OnSelectCharEvolve).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectCharEvolve).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectCharEvolve);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickCharEvolveLevelSlot).Delegate.field_0x8,
             *(int *)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickCharEvolveLevelSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickCharEvolveLevelSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectDeckIcon).Delegate.field_0x8,
             *(int *)&(this->OnSelectDeckIcon).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectDeckIcon).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectDeckIcon);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClearedDeck).Delegate.field_0x8,
             *(int *)&(this->OnClearedDeck).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClearedDeck).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClearedDeck);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDeckIconName).Delegate.field_0x8,
             *(int *)&(this->OnChangedDeckIconName).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedDeckIconName).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDeckIconName);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedMainCharacter).Delegate.field_0x8,
             *(int *)&(this->OnChangedMainCharacter).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedMainCharacter).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedMainCharacter);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeMainCharacter).Delegate.field_0x8,
             *(int *)&(this->OnChangeMainCharacter).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeMainCharacter).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeMainCharacter);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSignupedDeck).Delegate.field_0x8,
             *(int *)&(this->OnSignupedDeck).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSignupedDeck).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSignupedDeck);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedCurrentDeck).Delegate.field_0x8,
             *(int *)&(this->OnChangedCurrentDeck).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedCurrentDeck).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedCurrentDeck);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedDeckID).Delegate.field_0x8,
             *(int *)&(this->OnSelectedDeckID).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedDeckID).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedDeckID);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedDeckSlot).Delegate.field_0x8,
             *(int *)&(this->OnSelectedDeckSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedDeckSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedDeckSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectCharLevelUpItem).Delegate.field_0x8,
             *(int *)&(this->OnSelectCharLevelUpItem).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectCharLevelUpItem).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectCharLevelUpItem);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateTargetExp).Delegate.field_0x8,
             *(int *)&(this->OnUpdateTargetExp).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateTargetExp).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateTargetExp);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeDetailPanel).Delegate.field_0x8,
             *(int *)&(this->OnChangeDetailPanel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeDetailPanel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeDetailPanel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickEmptyEquipSlot).Delegate.field_0x8,
             *(int *)&(this->OnClickEmptyEquipSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickEmptyEquipSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickEmptyEquipSlot);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b445130

UClass * __cdecl UDS_CharacterUIEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterUIEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterUIEvent",
               &Z_Registration_Info_UClass_UDS_CharacterUIEvent.InnerSingleton,
               StaticRegisterNativesUDS_CharacterUIEvent,0x318,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharacterUIEvent>,
               InternalVTableHelperCtorCaller<UDS_CharacterUIEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterUIEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_CharacterUIEvent @ 14b445680

void __cdecl UDS_CharacterUIEvent::StaticRegisterNativesUDS_CharacterUIEvent(void)

{
  return;
}

// GetEvent @ 14bc9f960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CharacterUIEvent * __cdecl UDS_CharacterUIEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_CharacterUIEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_CharacterUIEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_CharacterUIEvent *)0x0;
}

