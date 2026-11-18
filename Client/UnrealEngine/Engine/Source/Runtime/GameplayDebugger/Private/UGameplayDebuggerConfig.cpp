// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 13

// StaticClass @ 146d39670

UClass * __cdecl UGameplayDebuggerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerConfig",
               &Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerConfig,600,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerConfig>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton;
}

// UGameplayDebuggerConfig @ 146d40160

UGameplayDebuggerConfig * __thiscall
UGameplayDebuggerConfig::UGameplayDebuggerConfig
          (UGameplayDebuggerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayDebuggerConfig__6B_;
  (this->ActivationKey).KeyName.ComparisonIndex = 0;
  (this->ActivationKey).KeyName.Number = 0;
  (this->ActivationKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategoryRowNextKey).KeyName.ComparisonIndex = 0;
  (this->CategoryRowNextKey).KeyName.Number = 0;
  (this->CategoryRowNextKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategoryRowPrevKey).KeyName.ComparisonIndex = 0;
  (this->CategoryRowPrevKey).KeyName.Number = 0;
  (this->CategoryRowPrevKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot0).KeyName.ComparisonIndex = 0;
  (this->CategorySlot0).KeyName.Number = 0;
  (this->CategorySlot0).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot1).KeyName.ComparisonIndex = 0;
  (this->CategorySlot1).KeyName.Number = 0;
  (this->CategorySlot1).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot2).KeyName.ComparisonIndex = 0;
  (this->CategorySlot2).KeyName.Number = 0;
  (this->CategorySlot2).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot3).KeyName.ComparisonIndex = 0;
  (this->CategorySlot3).KeyName.Number = 0;
  (this->CategorySlot3).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot4).KeyName.ComparisonIndex = 0;
  (this->CategorySlot4).KeyName.Number = 0;
  (this->CategorySlot4).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot5).KeyName.ComparisonIndex = 0;
  (this->CategorySlot5).KeyName.Number = 0;
  (this->CategorySlot5).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot6).KeyName.ComparisonIndex = 0;
  (this->CategorySlot6).KeyName.Number = 0;
  (this->CategorySlot6).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot7).KeyName.ComparisonIndex = 0;
  (this->CategorySlot7).KeyName.Number = 0;
  (this->CategorySlot7).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot8).KeyName.ComparisonIndex = 0;
  (this->CategorySlot8).KeyName.Number = 0;
  (this->CategorySlot8).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot9).KeyName.ComparisonIndex = 0;
  (this->CategorySlot9).KeyName.Number = 0;
  (this->CategorySlot9).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  (this->Categories).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->KnownCategoryNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownCategoryNames).ArrayNum = 0;
  (this->KnownCategoryNames).ArrayMax = 0;
  (this->KnownExtensionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownExtensionNames).ArrayNum = 0;
  (this->KnownExtensionNames).ArrayMax = 0;
  *(undefined8 *)&this->KnownCategoryInputNames = 0;
  *(undefined8 *)&(this->KnownCategoryInputNames).field_0x8 = 0;
  *(undefined8 *)&(this->KnownCategoryInputNames).field_0x20 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x28 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x34 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KnownCategoryInputNames).field_0x40 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x48 = 0;
  *(undefined8 *)&this->KnownExtensionInputNames = 0;
  *(undefined8 *)&(this->KnownExtensionInputNames).field_0x8 = 0;
  *(undefined8 *)&(this->KnownExtensionInputNames).field_0x20 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x28 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x34 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KnownExtensionInputNames).field_0x40 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x48 = 0;
  return this;
}

// UGameplayDebuggerConfig @ 146d40340

UGameplayDebuggerConfig * __thiscall
UGameplayDebuggerConfig::UGameplayDebuggerConfig
          (UGameplayDebuggerConfig *this,FObjectInitializer *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  FSharedReferencer<1> FVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayDebuggerConfig__6B_;
  (this->ActivationKey).KeyName.ComparisonIndex = 0;
  (this->ActivationKey).KeyName.Number = 0;
  (this->ActivationKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategoryRowNextKey).KeyName.ComparisonIndex = 0;
  (this->CategoryRowNextKey).KeyName.Number = 0;
  (this->CategoryRowNextKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategoryRowPrevKey).KeyName.ComparisonIndex = 0;
  (this->CategoryRowPrevKey).KeyName.Number = 0;
  (this->CategoryRowPrevKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot0).KeyName.ComparisonIndex = 0;
  (this->CategorySlot0).KeyName.Number = 0;
  (this->CategorySlot0).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot1).KeyName.ComparisonIndex = 0;
  (this->CategorySlot1).KeyName.Number = 0;
  (this->CategorySlot1).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot2).KeyName.ComparisonIndex = 0;
  (this->CategorySlot2).KeyName.Number = 0;
  (this->CategorySlot2).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot3).KeyName.ComparisonIndex = 0;
  (this->CategorySlot3).KeyName.Number = 0;
  (this->CategorySlot3).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot4).KeyName.ComparisonIndex = 0;
  (this->CategorySlot4).KeyName.Number = 0;
  (this->CategorySlot4).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot5).KeyName.ComparisonIndex = 0;
  (this->CategorySlot5).KeyName.Number = 0;
  (this->CategorySlot5).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot6).KeyName.ComparisonIndex = 0;
  (this->CategorySlot6).KeyName.Number = 0;
  (this->CategorySlot6).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot7).KeyName.ComparisonIndex = 0;
  (this->CategorySlot7).KeyName.Number = 0;
  (this->CategorySlot7).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot8).KeyName.ComparisonIndex = 0;
  (this->CategorySlot8).KeyName.Number = 0;
  (this->CategorySlot8).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CategorySlot9).KeyName.ComparisonIndex = 0;
  (this->CategorySlot9).KeyName.Number = 0;
  (this->CategorySlot9).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  (this->Categories).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->KnownCategoryNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownCategoryNames).ArrayNum = 0;
  (this->KnownCategoryNames).ArrayMax = 0;
  (this->KnownExtensionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownExtensionNames).ArrayNum = 0;
  (this->KnownExtensionNames).ArrayMax = 0;
  *(undefined8 *)&this->KnownCategoryInputNames = 0;
  *(undefined8 *)&(this->KnownCategoryInputNames).field_0x8 = 0;
  *(undefined8 *)&(this->KnownCategoryInputNames).field_0x20 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x28 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x34 = 0;
  *(undefined8 *)&(this->KnownCategoryInputNames).field_0x40 = 0;
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x48 = 0;
  *(undefined8 *)&this->KnownExtensionInputNames = 0;
  *(undefined8 *)&(this->KnownExtensionInputNames).field_0x8 = 0;
  *(undefined8 *)&(this->KnownExtensionInputNames).field_0x20 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x28 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x34 = 0;
  *(undefined8 *)&(this->KnownExtensionInputNames).field_0x40 = 0;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x48 = 0;
  (this->ActivationKey).KeyName = EKeys::Apostrophe.KeyName;
  FVar3 = EKeys::Apostrophe.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::Apostrophe.KeyDetails.Object;
  if (EKeys::Apostrophe.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Apostrophe.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Apostrophe.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->ActivationKey).KeyDetails.Object = pFVar2;
  (this->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategoryRowNextKey).KeyName = EKeys::Add.KeyName;
  FVar3 = EKeys::Add.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::Add.KeyDetails.Object;
  if (EKeys::Add.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Add.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Add.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategoryRowNextKey).KeyDetails.Object = pFVar2;
  (this->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategoryRowPrevKey).KeyName = EKeys::Subtract.KeyName;
  FVar3 = EKeys::Subtract.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::Subtract.KeyDetails.Object;
  if (EKeys::Subtract.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Subtract.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Subtract.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategoryRowPrevKey).KeyDetails.Object = pFVar2;
  (this->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot0).KeyName = EKeys::NumPadZero.KeyName;
  FVar3 = EKeys::NumPadZero.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadZero.KeyDetails.Object;
  if (EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot0).KeyDetails.Object = pFVar2;
  (this->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot1).KeyName = EKeys::NumPadOne.KeyName;
  FVar3 = EKeys::NumPadOne.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadOne.KeyDetails.Object;
  if (EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot1).KeyDetails.Object = pFVar2;
  (this->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot2).KeyName = EKeys::NumPadTwo.KeyName;
  FVar3 = EKeys::NumPadTwo.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadTwo.KeyDetails.Object;
  if (EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot2).KeyDetails.Object = pFVar2;
  (this->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot3).KeyName = EKeys::NumPadThree.KeyName;
  FVar3 = EKeys::NumPadThree.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadThree.KeyDetails.Object;
  if (EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot3).KeyDetails.Object = pFVar2;
  (this->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot4).KeyName = EKeys::NumPadFour.KeyName;
  FVar3 = EKeys::NumPadFour.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadFour.KeyDetails.Object;
  if (EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot4).KeyDetails.Object = pFVar2;
  (this->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot5).KeyName = EKeys::NumPadFive.KeyName;
  FVar3 = EKeys::NumPadFive.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadFive.KeyDetails.Object;
  if (EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot5).KeyDetails.Object = pFVar2;
  (this->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot6).KeyName = EKeys::NumPadSix.KeyName;
  FVar3 = EKeys::NumPadSix.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadSix.KeyDetails.Object;
  if (EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot6).KeyDetails.Object = pFVar2;
  (this->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot7).KeyName = EKeys::NumPadSeven.KeyName;
  FVar3 = EKeys::NumPadSeven.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadSeven.KeyDetails.Object;
  if (EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot7).KeyDetails.Object = pFVar2;
  (this->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot8).KeyName = EKeys::NumPadEight.KeyName;
  FVar3 = EKeys::NumPadEight.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadEight.KeyDetails.Object;
  if (EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot8).KeyDetails.Object = pFVar2;
  (this->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (this->CategorySlot9).KeyName = EKeys::NumPadNine.KeyName;
  FVar3 = EKeys::NumPadNine.KeyDetails.SharedReferenceCount;
  pFVar2 = EKeys::NumPadNine.KeyDetails.Object;
  if (EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->CategorySlot9).KeyDetails.Object = pFVar2;
  (this->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->DebugCanvasPaddingLeft = 10.0;
  this->DebugCanvasPaddingRight = 10.0;
  this->DebugCanvasPaddingTop = 10.0;
  this->DebugCanvasPaddingBottom = 10.0;
  return this;
}

// ~UGameplayDebuggerConfig @ 146d414b0

void __thiscall UGameplayDebuggerConfig::~UGameplayDebuggerConfig(UGameplayDebuggerConfig *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGameplayDebuggerConfig__6B_;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KnownExtensionInputNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KnownExtensionInputNames);
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KnownCategoryInputNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KnownCategoryInputNames);
  pFVar2 = (this->KnownExtensionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KnownCategoryNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGameplayDebuggerExtensionConfig,int>
            ((FGameplayDebuggerExtensionConfig *)(this->Extensions).AllocatorInstance.Data,
             (this->Extensions).ArrayNum);
  pFVar2 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGameplayDebuggerCategoryConfig,int>
            ((FGameplayDebuggerCategoryConfig *)(this->Categories).AllocatorInstance.Data,
             (this->Categories).ArrayNum);
  pFVar2 = (this->Categories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146d4d880

UClass * __cdecl UGameplayDebuggerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerConfig",
               &Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerConfig,600,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerConfig>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton;
}

// RemoveUnknownConfigs @ 146d59eb0

void __thiscall UGameplayDebuggerConfig::RemoveUnknownConfigs(UGameplayDebuggerConfig *this)

{
  longlong lVar1;
  int *piVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  FName *pFVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  TBaseKeyIterator<0> local_78;
  TBaseKeyIterator<0> local_60;
  
  uVar15 = (this->Categories).ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 * 0x30;
    do {
      uVar12 = ~uVar15 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar15 < (this->Categories).ArrayNum) {
        uVar14 = uVar12;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (this->Categories).AllocatorInstance.Data + lVar16;
      if (*(int *)(pFVar17 + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)pFVar17;
      }
      pFVar10 = (FName *)(this->KnownCategoryNames).AllocatorInstance.Data;
      pFVar7 = pFVar10 + (this->KnownCategoryNames).ArrayNum;
      for (; pFVar10 != pFVar7; pFVar10 = pFVar10 + 1) {
        bVar6 = ::FName::Equals(*pFVar10,pwVar9);
        if (bVar6) {
          uVar14 = *(int *)(pFVar17 + 0x28) - 1;
          if (-1 < (int)uVar14) {
            lVar13 = (longlong)(int)uVar14 * 0x30;
            do {
              uVar12 = 0;
              if ((int)uVar14 < *(int *)(pFVar17 + 0x28)) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(int *)(*(longlong *)(pFVar17 + 0x20) + 8 + lVar13) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)(*(longlong *)(pFVar17 + 0x20) + lVar13);
              }
              pFVar7 = ::FName::FName(&local_res18,pwVar9);
              FVar3 = *pFVar7;
              if (*(int *)(pFVar17 + 8) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)pFVar17;
              }
              pFVar7 = ::FName::FName(&local_res20,pwVar9);
              TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                        (&local_78,
                         (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
                          *)&this->KnownCategoryInputNames,*pFVar7);
              if (local_78.Index != -1) {
                lVar4 = *(longlong *)&(local_78.Set)->Elements;
                do {
                  lVar1 = (longlong)local_78.Index * 3 + 1;
                  if (*(FName *)(lVar4 + lVar1 * 8) == FVar3) {
                    if (lVar4 + lVar1 * 8 != 0) goto LAB_146d5a201;
                    break;
                  }
                  local_78.Index = local_78.NextIndex;
                  if (local_78.NextIndex == -1) break;
                  do {
                    local_78.NextIndex = *(int *)(lVar4 + 0x10 + (longlong)local_78.Index * 0x18);
                    if (*(FName *)(lVar4 + (longlong)local_78.Index * 0x18) == local_78.Key) break;
                    local_78.Index = local_78.NextIndex;
                  } while (local_78.NextIndex != -1);
                } while (local_78.Index != -1);
              }
              uVar12 = 0;
              if ((int)uVar14 < *(int *)(pFVar17 + 0x28)) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar11 = (undefined8 *)(*(longlong *)(pFVar17 + 0x20) + lVar13);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)puVar11[4]);
              if ((void *)*puVar11 != (void *)0x0) {
                FMemory::Free((void *)*puVar11);
              }
              if (~uVar14 + *(int *)(pFVar17 + 0x28) != 0) {
                memmove(puVar11,puVar11 + 6,
                        (longlong)(int)(~uVar14 + *(int *)(pFVar17 + 0x28)) * 0x30);
              }
              *(int *)(pFVar17 + 0x28) = *(int *)(pFVar17 + 0x28) + -1;
LAB_146d5a201:
              lVar13 = lVar13 + -0x30;
              uVar14 = uVar14 - 1;
            } while (-1 < (int)uVar14);
          }
          goto LAB_146d5a219;
        }
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Categories).ArrayNum) {
        uVar14 = uVar12;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (this->Categories).AllocatorInstance.Data + lVar16;
      DestructItems<FGameplayDebuggerInputConfig,int>
                (*(FGameplayDebuggerInputConfig **)(pFVar17 + 0x20),*(int *)(pFVar17 + 0x28));
      if (*(void **)(pFVar17 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar17 + 0x20));
      }
      if (*(void **)pFVar17 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar17);
      }
      iVar8 = (this->Categories).ArrayNum + ~uVar15;
      if (iVar8 != 0) {
        memmove(pFVar17,pFVar17 + 0x30,(longlong)iVar8 * 0x30);
      }
      piVar2 = &(this->Categories).ArrayNum;
      *piVar2 = *piVar2 + -1;
LAB_146d5a219:
      lVar16 = lVar16 + -0x30;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  uVar15 = (this->Extensions).ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 * 0x28;
    do {
      uVar14 = 0;
      if ((int)uVar15 < (this->Extensions).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (this->Extensions).AllocatorInstance.Data + lVar16;
      if (*(int *)(pFVar17 + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)pFVar17;
      }
      pFVar10 = (FName *)(this->KnownExtensionNames).AllocatorInstance.Data;
      pFVar7 = pFVar10 + (this->KnownExtensionNames).ArrayNum;
      for (; pFVar10 != pFVar7; pFVar10 = pFVar10 + 1) {
        bVar6 = ::FName::Equals(*pFVar10,pwVar9);
        if (bVar6) {
          uVar14 = *(int *)(pFVar17 + 0x20) - 1;
          if (-1 < (int)uVar14) {
            lVar13 = (longlong)(int)uVar14 * 0x30;
            do {
              uVar12 = 0;
              if ((int)uVar14 < *(int *)(pFVar17 + 0x20)) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(int *)(*(longlong *)(pFVar17 + 0x18) + 8 + lVar13) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)(*(longlong *)(pFVar17 + 0x18) + lVar13);
              }
              pFVar7 = ::FName::FName(&local_88,pwVar9);
              FVar3 = *pFVar7;
              if (*(int *)(pFVar17 + 8) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)pFVar17;
              }
              pFVar7 = ::FName::FName(&local_80,pwVar9);
              TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                        (&local_60,
                         (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
                          *)&this->KnownExtensionInputNames,*pFVar7);
              if (local_60.Index != -1) {
                lVar4 = *(longlong *)&(local_60.Set)->Elements;
                do {
                  lVar1 = (longlong)local_60.Index * 3 + 1;
                  if (*(FName *)(lVar4 + lVar1 * 8) == FVar3) {
                    if (lVar4 + lVar1 * 8 != 0) goto LAB_146d5a571;
                    break;
                  }
                  local_60.Index = local_60.NextIndex;
                  if (local_60.NextIndex == -1) break;
                  do {
                    local_60.NextIndex = *(int *)(lVar4 + 0x10 + (longlong)local_60.Index * 0x18);
                    if (*(FName *)(lVar4 + (longlong)local_60.Index * 0x18) == local_60.Key) break;
                    local_60.Index = local_60.NextIndex;
                  } while (local_60.NextIndex != -1);
                } while (local_60.Index != -1);
              }
              uVar12 = 0;
              if ((int)uVar14 < *(int *)(pFVar17 + 0x20)) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar11 = (undefined8 *)(*(longlong *)(pFVar17 + 0x18) + lVar13);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)puVar11[4]);
              if ((void *)*puVar11 != (void *)0x0) {
                FMemory::Free((void *)*puVar11);
              }
              if (~uVar14 + *(int *)(pFVar17 + 0x20) != 0) {
                memmove(puVar11,puVar11 + 6,
                        (longlong)(int)(~uVar14 + *(int *)(pFVar17 + 0x20)) * 0x30);
              }
              *(int *)(pFVar17 + 0x20) = *(int *)(pFVar17 + 0x20) + -1;
LAB_146d5a571:
              lVar13 = lVar13 + -0x30;
              uVar14 = uVar14 - 1;
            } while (-1 < (int)uVar14);
          }
          goto LAB_146d5a591;
        }
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Extensions).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (this->Extensions).AllocatorInstance.Data + lVar16;
      DestructItems<FGameplayDebuggerInputConfig,int>
                (*(FGameplayDebuggerInputConfig **)(pFVar17 + 0x18),*(int *)(pFVar17 + 0x20));
      if (*(void **)(pFVar17 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar17 + 0x18));
      }
      if (*(void **)pFVar17 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar17);
      }
      iVar8 = ~uVar15 + (this->Extensions).ArrayNum;
      if (iVar8 != 0) {
        memmove(pFVar17,pFVar17 + 0x28,(longlong)iVar8 * 0x28);
      }
      piVar2 = &(this->Extensions).ArrayNum;
      *piVar2 = *piVar2 + -1;
LAB_146d5a591:
      lVar16 = lVar16 + -0x28;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return;
}

// Serialize @ 146d5b2f0

void __thiscall UGameplayDebuggerConfig::Serialize(UGameplayDebuggerConfig *this,FArchive *param_1)

{
  if ((param_1->field_0x28 & 4) != 0) {
    RemoveUnknownConfigs(this);
  }
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 146d5b330

void __thiscall
UGameplayDebuggerConfig::Serialize(UGameplayDebuggerConfig *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((pFVar1->field_0x28 & 4) != 0) {
    RemoveUnknownConfigs(this);
  }
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUGameplayDebuggerConfig @ 146d5c5c0

void __cdecl UGameplayDebuggerConfig::StaticRegisterNativesUGameplayDebuggerConfig(void)

{
  return;
}

// UpdateCategoryConfig @ 146d5dbf0

void __thiscall
UGameplayDebuggerConfig::UpdateCategoryConfig
          (UGameplayDebuggerConfig *this,FName param_1,int *param_2,uchar *param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<FGameplayDebuggerCategoryConfig,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  code *pcVar4;
  FScriptContainerElement FVar5;
  ForAnyElementType _Src;
  FGameplayDebuggerInputConfig *pFVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  FName local_res10;
  int *local_res18;
  byte *local_res20;
  FString local_88;
  FString local_78;
  undefined4 local_68;
  undefined2 local_64;
  FScriptContainerElement local_62;
  uint local_60;
  FGameplayDebuggerInputConfig *local_58;
  undefined8 local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->KnownCategoryNames,&local_res10);
  uVar14 = 0;
  if (0 < (this->Categories).ArrayNum) {
    uVar16 = uVar14;
    do {
      uVar11 = (uint)uVar14;
      uVar10 = 0;
      if ((int)uVar11 < (this->Categories).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (this->Categories).AllocatorInstance.Data;
      if (*(int *)(pFVar17 + uVar16 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)(pFVar17 + uVar16);
      }
      bVar8 = ::FName::Equals(local_res10,pwVar13);
      if (bVar8) {
        if (uVar11 != 0xffffffff) goto LAB_146d5defb;
        break;
      }
      uVar14 = (ulonglong)(uVar11 + 1);
      uVar16 = uVar16 + 0x30;
    } while ((int)(uVar11 + 1) < (this->Categories).ArrayNum);
  }
  local_60 = local_60 & 0xfffffffe;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_68 = 0;
  local_64 = 0x202;
  local_62 = (FScriptContainerElement)0x2;
  local_58 = (FGameplayDebuggerInputConfig *)0x0;
  local_50 = 0;
  pFVar12 = ::FName::ToString(&local_res10,&local_88);
  if (&local_78 != pFVar12) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar2 = &this->Categories;
  pFVar17 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar17 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar17 + (longlong)(this->Categories).ArrayMax * 0x30
      )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = (this->Categories).ArrayNum;
  if (uVar11 == (this->Categories).ArrayMax) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar2->AllocatorInstance,&(this->Categories).ArrayMax);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  (this->Categories).ArrayNum = uVar11 + 1;
  pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x30;
  *(undefined8 *)pFVar17 = 0;
  lVar15 = (longlong)local_78.Data.ArrayNum;
  *(int *)(pFVar17 + 8) = local_78.Data.ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    *(int *)(pFVar17 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,local_78.Data.ArrayNum,
               (int *)(pFVar17 + 0xc));
    memcpy(*(void **)pFVar17,_Src.Data,lVar15 * 2);
  }
  pFVar6 = local_58;
  pFVar1 = pFVar17 + 0x20;
  *(undefined4 *)(pFVar17 + 0x10) = local_68;
  pFVar17[0x14] = local_64._0_1_;
  pFVar17[0x15] = local_64._1_1_;
  pFVar17[0x16] = local_62;
  *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
  *(uint *)(pFVar17 + 0x18) = *(uint *)(pFVar17 + 0x18) & 0xfffffffe | local_60 & 1;
  iVar7 = (int)local_50;
  *(int *)(pFVar17 + 0x28) = (int)local_50;
  if ((int)local_50 == 0) {
    *(int *)(pFVar17 + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(int)local_50,0,(ForAnyElementType *)pFVar1,(int)local_50,
               (int *)(pFVar17 + 0x2c));
                    /* WARNING: Load size is inaccurate */
    ConstructItems<FGameplayDebuggerInputConfig,FGameplayDebuggerInputConfig,int>
              (*pFVar1,pFVar6,iVar7);
  }
  DestructItems<FGameplayDebuggerInputConfig,int>(local_58,(int)local_50);
  if (local_58 != (FGameplayDebuggerInputConfig *)0x0) {
    FMemory::Free(local_58);
  }
  param_2 = local_res18;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    param_2 = local_res18;
  }
LAB_146d5defb:
  bVar3 = *local_res20;
  if ((-1 < (int)uVar11) && ((int)uVar11 < (this->Categories).ArrayNum)) {
    uVar10 = 0;
    if ((int)uVar11 < (this->Categories).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar17 = (this->Categories).AllocatorInstance.Data;
    if (((byte)pFVar17[(longlong)(int)uVar11 * 0x30 + 0x18] & 1) == 0) {
      *(int *)(pFVar17 + (longlong)(int)uVar11 * 0x30 + 0x10) = *param_2;
    }
    else {
      *param_2 = *(int *)(pFVar17 + (longlong)(int)uVar11 * 0x30 + 0x10);
    }
    bVar8 = bVar3 < 2;
    if (pFVar17[(longlong)(int)uVar11 * 0x30 + 0x14] != (FScriptContainerElement)0x2) {
      bVar8 = pFVar17[(longlong)(int)uVar11 * 0x30 + 0x14] == (FScriptContainerElement)0x0;
    }
    FVar5 = (FScriptContainerElement)(bVar3 & 0xfd);
    if (pFVar17[(longlong)(int)uVar11 * 0x30 + 0x15] != (FScriptContainerElement)0x2) {
      FVar5 = pFVar17[(longlong)(int)uVar11 * 0x30 + 0x15];
    }
    bVar9 = FVar5 != (FScriptContainerElement)0x0;
    if (pFVar17[(longlong)(int)uVar11 * 0x30 + 0x16] == (FScriptContainerElement)0x2) {
      bVar18 = bVar3 == 4;
    }
    else {
      bVar18 = pFVar17[(longlong)(int)uVar11 * 0x30 + 0x16] == (FScriptContainerElement)0x0;
    }
    if (bVar18) {
      bVar9 = 4;
    }
    else if (!bVar8) {
      bVar9 = bVar9 + 2;
    }
    *local_res20 = bVar9;
  }
  return;
}

// UpdateCategoryInputConfig @ 146d5e000

void __thiscall
UGameplayDebuggerConfig::UpdateCategoryInputConfig
          (UGameplayDebuggerConfig *this,FName param_1,FName param_2,FName *param_3,
          FGameplayDebuggerInputModifier *param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FName FVar12;
  FString *pFVar13;
  FGameplayDebuggerInputModifier FVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  ForAnyElementType *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  TPairInitializer<FName_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName **local_90;
  FName *local_88;
  FString local_80;
  FString local_70;
  FName local_60;
  FScriptContainerElement *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  uint local_48;
  
  uVar20 = 0;
  uVar16 = uVar20;
  uVar18 = uVar20;
  local_res8.Value = (FName *)param_1;
  local_res18 = param_2;
  if ((this->Categories).ArrayNum < 1) {
    return;
  }
  while( true ) {
    uVar10 = (uint)uVar16;
    uVar8 = 0;
    if ((int)uVar10 < (this->Categories).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Categories).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + uVar18 + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)(pFVar4 + uVar18);
    }
    bVar7 = ::FName::Equals((FName)local_res8.Value,pwVar15);
    if (bVar7) break;
    uVar16 = (ulonglong)(uVar10 + 1);
    uVar18 = uVar18 + 0x30;
    if ((this->Categories).ArrayNum <= (int)(uVar10 + 1)) {
      return;
    }
  }
  if ((int)uVar10 < 0) {
    return;
  }
  if ((this->Categories).ArrayNum <= (int)uVar10) {
    return;
  }
  uVar11 = 0;
  uVar8 = uVar11;
  if ((int)uVar10 < (this->Categories).ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_90 = &local_res8.Value;
  pFVar4 = (this->Categories).AllocatorInstance.Data;
  local_88 = &local_res18;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)&this->KnownCategoryInputNames,&local_res8,(bool *)&local_90);
  uVar16 = uVar20;
  if (0 < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x28)) {
    do {
      uVar19 = (uint)uVar20;
      uVar8 = uVar11;
      if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x28)) {
        uVar8 = ~uVar19 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(uVar16 + 8 + *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20)) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)
                   (uVar16 + *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20));
      }
      bVar7 = ::FName::Equals(local_res18,pwVar15);
      if (bVar7) {
        if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x28)) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar21 = (longlong)(int)uVar19 * 0x30 +
                 *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20);
        FVar12 = FKey::GetFName((FKey *)(lVar21 + 0x10));
        *param_3 = *(FName *)FVar12;
        FVar14 = (FGameplayDebuggerInputModifier)
                 ((param_4->bShift ^ *(uint *)(lVar21 + 0x28)) & 1 ^ (uint)*param_4);
        *param_4 = FVar14;
        FVar14 = (FGameplayDebuggerInputModifier)
                 (((uint)FVar14 ^ *(uint *)(lVar21 + 0x28)) & 2 ^ (uint)FVar14);
        *param_4 = FVar14;
        FVar14 = (FGameplayDebuggerInputModifier)
                 (((uint)FVar14 ^ *(uint *)(lVar21 + 0x28)) & 4 ^ (uint)FVar14);
        *param_4 = FVar14;
        *param_4 = (FGameplayDebuggerInputModifier)
                   (((uint)FVar14 ^ *(uint *)(lVar21 + 0x28)) & 8 ^ (uint)FVar14);
        if (uVar19 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar16 = uVar16 + 0x30;
    } while ((int)(uVar19 + 1) < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x28));
  }
  local_48 = local_48 & 0xfffffff0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_58 = (FScriptContainerElement *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  pFVar13 = ::FName::ToString(&local_res18,&local_80);
  if (&local_70 != pFVar13) {
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    local_70.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_70.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  pTVar6 = pTStack_50;
  local_60 = *param_3;
  local_58 = (FScriptContainerElement *)0x0;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    pTStack_50 = (TReferenceControllerBase<1> *)0x0;
    LOCK();
    paVar1 = &pTVar6->SharedReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)pTVar6->_padding_)();
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_48 = (uint)*param_4 & 0xf | local_48 & 0xfffffff0;
  if (((*(FString **)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20) <= &local_70) &&
      (&local_70 <
       *(FString **)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20) +
       (longlong)*(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x2c) * 3)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x28);
  if (iVar9 == *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x2c)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20),
                       (int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x2c));
  }
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  lVar21 = *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x20);
  *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x30 + 0x28) = iVar9 + 1;
  pFVar17 = (ForAnyElementType *)(lVar21 + (longlong)iVar9 * 0x30);
  pFVar17->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar17[1].Data + 4);
  lVar21 = (longlong)local_70.Data.ArrayNum;
  *(int *)&pFVar17[1].Data = local_70.Data.ArrayNum;
  if (local_70.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70.Data.ArrayNum,0,pFVar17,local_70.Data.ArrayNum,piVar2);
    memcpy(pFVar17->Data,_Src.Data,lVar21 * 2);
  }
  *(FName *)(pFVar17 + 2) = local_60;
  pFVar17[3].Data = local_58;
  pFVar17[4].Data = (FScriptContainerElement *)pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = *(uint *)&pFVar17[5].Data;
  uVar10 = local_48 & 1;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffffe | uVar10;
  uVar11 = local_48 & 2;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffffc | uVar10 | uVar11;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffff8 | uVar10 | uVar11 | local_48 & 4;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffff0 | uVar10 | uVar11 | local_48 & 4 | local_48 & 8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateExtensionConfig @ 146d5e5b0

void __thiscall
UGameplayDebuggerConfig::UpdateExtensionConfig
          (UGameplayDebuggerConfig *this,FName param_1,uchar *param_2)

{
  TArray<FGameplayDebuggerExtensionConfig,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  FGameplayDebuggerInputConfig *pFVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FName local_res10;
  uchar *local_res18;
  FString local_78;
  FString local_68;
  FScriptContainerElement local_58;
  FGameplayDebuggerInputConfig *local_50;
  undefined8 local_48;
  
  local_res10 = param_1;
  local_res18 = param_2;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->KnownExtensionNames,&local_res10);
  uVar12 = 0;
  if (0 < (this->Extensions).ArrayNum) {
    uVar13 = uVar12;
    do {
      uVar9 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar9 < (this->Extensions).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Extensions).AllocatorInstance.Data;
      if (*(int *)(pFVar3 + uVar13 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar3 + uVar13);
      }
      bVar7 = ::FName::Equals(local_res10,pwVar11);
      if (bVar7) {
        if (uVar9 != 0xffffffff) goto LAB_146d5e880;
        break;
      }
      uVar12 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 0x28;
    } while ((int)(uVar9 + 1) < (this->Extensions).ArrayNum);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_58 = (FScriptContainerElement)0x2;
  local_50 = (FGameplayDebuggerInputConfig *)0x0;
  local_48 = 0;
  pFVar10 = ::FName::ToString(&local_res10,&local_78);
  if (&local_68 != pFVar10) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar1 = &this->Extensions;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)(this->Extensions).ArrayMax * 0x28)
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = (this->Extensions).ArrayNum;
  if (uVar9 == (this->Extensions).ArrayMax) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,&(this->Extensions).ArrayMax);
  }
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  (this->Extensions).ArrayNum = uVar9 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 * 0x28) = 0;
  lVar15 = (longlong)local_68.Data.ArrayNum;
  pFVar3 = pFVar3 + (longlong)(int)uVar9 * 0x28;
  *(int *)(pFVar3 + 8) = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar3 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,local_68.Data.ArrayNum,
               (int *)(pFVar3 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar3,_Src.Data,lVar15 * 2);
  }
  pFVar5 = local_50;
  pFVar3[0x10] = local_58;
  pFVar14 = pFVar3 + 0x18;
  *(undefined8 *)pFVar14 = 0;
  iVar6 = (int)local_48;
  *(int *)(pFVar3 + 0x20) = (int)local_48;
  if ((int)local_48 == 0) {
    *(int *)(pFVar3 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(int)local_48,0,(ForAnyElementType *)pFVar14,(int)local_48,
               (int *)(pFVar3 + 0x24));
    ConstructItems<FGameplayDebuggerInputConfig,FGameplayDebuggerInputConfig,int>
              (*(void **)pFVar14,pFVar5,iVar6);
  }
  DestructItems<FGameplayDebuggerInputConfig,int>(local_50,(int)local_48);
  if (local_50 != (FGameplayDebuggerInputConfig *)0x0) {
    FMemory::Free(local_50);
  }
  param_2 = local_res18;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    param_2 = local_res18;
  }
LAB_146d5e880:
  if ((-1 < (int)uVar9) && ((int)uVar9 < (this->Extensions).ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar9 < (this->Extensions).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (this->Extensions).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x28 + 0x10];
    if (FVar2 == (FScriptContainerElement)0x2) {
      bVar7 = *param_2 != '\0';
    }
    else {
      bVar7 = FVar2 == (FScriptContainerElement)0x0;
    }
    *param_2 = bVar7;
  }
  return;
}

// UpdateExtensionInputConfig @ 146d5e930

void __thiscall
UGameplayDebuggerConfig::UpdateExtensionInputConfig
          (UGameplayDebuggerConfig *this,FName param_1,FName param_2,FName *param_3,
          FGameplayDebuggerInputModifier *param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FName FVar12;
  FString *pFVar13;
  FGameplayDebuggerInputModifier FVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  ForAnyElementType *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  TPairInitializer<FName_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName **local_90;
  FName *local_88;
  FString local_80;
  FString local_70;
  FName local_60;
  FScriptContainerElement *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  uint local_48;
  
  uVar20 = 0;
  uVar16 = uVar20;
  uVar18 = uVar20;
  local_res8.Value = (FName *)param_1;
  local_res18 = param_2;
  if ((this->Extensions).ArrayNum < 1) {
    return;
  }
  while( true ) {
    uVar10 = (uint)uVar16;
    uVar8 = 0;
    if ((int)uVar10 < (this->Extensions).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Extensions).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + uVar18 + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)(pFVar4 + uVar18);
    }
    bVar7 = ::FName::Equals((FName)local_res8.Value,pwVar15);
    if (bVar7) break;
    uVar16 = (ulonglong)(uVar10 + 1);
    uVar18 = uVar18 + 0x28;
    if ((this->Extensions).ArrayNum <= (int)(uVar10 + 1)) {
      return;
    }
  }
  if ((int)uVar10 < 0) {
    return;
  }
  if ((this->Extensions).ArrayNum <= (int)uVar10) {
    return;
  }
  uVar11 = 0;
  uVar8 = uVar11;
  if ((int)uVar10 < (this->Extensions).ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Extensions).AllocatorInstance.Data;
  local_90 = &local_res8.Value;
  local_88 = &local_res18;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)&this->KnownExtensionInputNames,&local_res8,(bool *)&local_90);
  uVar16 = uVar20;
  if (0 < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x20)) {
    do {
      uVar19 = (uint)uVar20;
      uVar8 = uVar11;
      if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x20)) {
        uVar8 = ~uVar19 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(uVar16 + 8 + *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18)) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)
                   (uVar16 + *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18));
      }
      bVar7 = ::FName::Equals(local_res18,pwVar15);
      if (bVar7) {
        if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x20)) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar21 = (longlong)(int)uVar19 * 0x30 +
                 *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18);
        FVar12 = FKey::GetFName((FKey *)(lVar21 + 0x10));
        *param_3 = *(FName *)FVar12;
        FVar14 = (FGameplayDebuggerInputModifier)
                 ((param_4->bShift ^ *(uint *)(lVar21 + 0x28)) & 1 ^ (uint)*param_4);
        *param_4 = FVar14;
        FVar14 = (FGameplayDebuggerInputModifier)
                 (((uint)FVar14 ^ *(uint *)(lVar21 + 0x28)) & 2 ^ (uint)FVar14);
        *param_4 = FVar14;
        FVar14 = (FGameplayDebuggerInputModifier)
                 (((uint)FVar14 ^ *(uint *)(lVar21 + 0x28)) & 4 ^ (uint)FVar14);
        *param_4 = FVar14;
        *param_4 = (FGameplayDebuggerInputModifier)
                   (((uint)FVar14 ^ *(uint *)(lVar21 + 0x28)) & 8 ^ (uint)FVar14);
        if (uVar19 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar16 = uVar16 + 0x30;
    } while ((int)(uVar19 + 1) < *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x20));
  }
  local_48 = local_48 & 0xfffffff0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_58 = (FScriptContainerElement *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  pFVar13 = ::FName::ToString(&local_res18,&local_80);
  if (&local_70 != pFVar13) {
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    local_70.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_70.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  pTVar6 = pTStack_50;
  local_60 = *param_3;
  local_58 = (FScriptContainerElement *)0x0;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    pTStack_50 = (TReferenceControllerBase<1> *)0x0;
    LOCK();
    paVar1 = &pTVar6->SharedReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)pTVar6->_padding_)();
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_48 = (uint)*param_4 & 0xf | local_48 & 0xfffffff0;
  if (((*(FString **)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18) <= &local_70) &&
      (&local_70 <
       *(FString **)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18) +
       (longlong)*(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x24) * 3)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x20);
  if (iVar9 == *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x24)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18),
                       (int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x24));
  }
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  lVar21 = *(longlong *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x18);
  *(int *)(pFVar4 + (longlong)(int)uVar10 * 0x28 + 0x20) = iVar9 + 1;
  pFVar17 = (ForAnyElementType *)(lVar21 + (longlong)iVar9 * 0x30);
  pFVar17->Data = (FScriptContainerElement *)0x0;
  piVar2 = (int *)((longlong)&pFVar17[1].Data + 4);
  lVar21 = (longlong)local_70.Data.ArrayNum;
  *(int *)&pFVar17[1].Data = local_70.Data.ArrayNum;
  if (local_70.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70.Data.ArrayNum,0,pFVar17,local_70.Data.ArrayNum,piVar2);
    memcpy(pFVar17->Data,_Src.Data,lVar21 * 2);
  }
  *(FName *)(pFVar17 + 2) = local_60;
  pFVar17[3].Data = local_58;
  pFVar17[4].Data = (FScriptContainerElement *)pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = *(uint *)&pFVar17[5].Data;
  uVar10 = local_48 & 1;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffffe | uVar10;
  uVar11 = local_48 & 2;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffffc | uVar10 | uVar11;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffff8 | uVar10 | uVar11 | local_48 & 4;
  *(uint *)&pFVar17[5].Data = uVar8 & 0xfffffff0 | uVar10 | uVar11 | local_48 & 4 | local_48 & 8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

