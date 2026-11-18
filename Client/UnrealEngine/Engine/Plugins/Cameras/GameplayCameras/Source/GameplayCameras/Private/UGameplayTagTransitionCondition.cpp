// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d649ed0

UClass * __cdecl UGameplayTagTransitionCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayTagTransitionCondition",
               &Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton,
               StaticRegisterNativesUGameplayTagTransitionCondition,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameplayTagTransitionCondition>,
               InternalVTableHelperCtorCaller<UGameplayTagTransitionCondition>,local_res8,
               UCameraRigTransitionCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton;
}

// UGameplayTagTransitionCondition @ 14d6573f0

UGameplayTagTransitionCondition * __thiscall
UGameplayTagTransitionCondition::UGameplayTagTransitionCondition
          (UGameplayTagTransitionCondition *this,FVTableHelper *param_1)

{
  UCameraRigTransitionCondition::UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FGameplayTagQuery::FGameplayTagQuery(&this->PreviousGameplayTagQuery);
  FGameplayTagQuery::FGameplayTagQuery(&this->NextGameplayTagQuery);
  return this;
}

// UGameplayTagTransitionCondition @ 14d657440

UGameplayTagTransitionCondition * __thiscall
UGameplayTagTransitionCondition::UGameplayTagTransitionCondition
          (UGameplayTagTransitionCondition *this,FObjectInitializer *param_1)

{
  UCameraRigTransitionCondition::UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  FGameplayTagQuery::FGameplayTagQuery(&this->PreviousGameplayTagQuery);
  FGameplayTagQuery::FGameplayTagQuery(&this->NextGameplayTagQuery);
  return this;
}

// ~UGameplayTagTransitionCondition @ 14d658460

void __thiscall
UGameplayTagTransitionCondition::~UGameplayTagTransitionCondition
          (UGameplayTagTransitionCondition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->NextGameplayTagQuery).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextGameplayTagQuery).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextGameplayTagQuery).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextGameplayTagQuery).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraRigTransitionCondition::~UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this);
  return;
}

// GetPrivateStaticClass @ 14d660c90

UClass * __cdecl UGameplayTagTransitionCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayTagTransitionCondition",
               &Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton,
               StaticRegisterNativesUGameplayTagTransitionCondition,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameplayTagTransitionCondition>,
               InternalVTableHelperCtorCaller<UGameplayTagTransitionCondition>,local_res8,
               UCameraRigTransitionCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton;
}

// OnTransitionMatches @ 14d66eed0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UGameplayTagTransitionCondition::OnTransitionMatches
          (UGameplayTagTransitionCondition *this,FCameraRigTransitionConditionMatchParams *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  FGameplayTagContainer local_28;
  
  bVar2 = true;
  bVar1 = FGameplayTagQuery::IsEmpty(&this->PreviousGameplayTagQuery);
  if (!bVar1) {
    bVar2 = false;
    if (param_1->FromCameraRig != (UCameraRigAsset *)0x0) {
      plVar4 = &param_1->FromCameraRig->_padding_;
      local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.GameplayTags.ArrayNum = 0;
      local_28.GameplayTags.ArrayMax = 0;
      local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ParentTags.ArrayNum = 0;
      local_28.ParentTags.ArrayMax = 0;
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_28);
      bVar2 = FGameplayTagContainer::MatchesQuery(&local_28,&this->PreviousGameplayTagQuery);
      if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
      }
      if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
      }
    }
  }
  bVar3 = true;
  bVar1 = FGameplayTagQuery::IsEmpty(&this->NextGameplayTagQuery);
  if (!bVar1) {
    bVar3 = false;
    if (param_1->ToCameraRig != (UCameraRigAsset *)0x0) {
      plVar4 = &param_1->ToCameraRig->_padding_;
      local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.GameplayTags.ArrayNum = 0;
      local_28.GameplayTags.ArrayMax = 0;
      local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ParentTags.ArrayNum = 0;
      local_28.ParentTags.ArrayMax = 0;
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_28);
      bVar3 = FGameplayTagContainer::MatchesQuery(&local_28,&this->NextGameplayTagQuery);
      if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
      }
      if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
      }
    }
  }
  if ((bVar2 == false) || (bVar3 == false)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

// StaticRegisterNativesUGameplayTagTransitionCondition @ 14d6733d0

void __cdecl
UGameplayTagTransitionCondition::StaticRegisterNativesUGameplayTagTransitionCondition(void)

{
  return;
}

