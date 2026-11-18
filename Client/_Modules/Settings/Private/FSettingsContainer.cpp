// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 17

// FSettingsContainer @ 142695d20

FSettingsContainer * __thiscall
FSettingsContainer::FSettingsContainer(FSettingsContainer *this,FName *param_1)

{
  this->_padding_ = (longlong)&___7FSettingsContainer__6B_;
  *(undefined8 *)&this->Categories = 0;
  *(undefined8 *)&(this->Categories).field_0x8 = 0;
  *(undefined8 *)&(this->Categories).field_0x20 = 0;
  *(undefined4 *)&(this->Categories).field_0x28 = 0;
  *(undefined4 *)&(this->Categories).field_0x2c = 0x80;
  *(undefined4 *)&(this->Categories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Categories).field_0x34 = 0;
  *(undefined8 *)&(this->Categories).field_0x40 = 0;
  *(undefined4 *)&(this->Categories).field_0x48 = 0;
  FText::FText(&this->Description);
  FText::FText(&this->DisplayName);
  (this->IconName).ComparisonIndex = 0;
  (this->IconName).Number = 0;
  this->Name = *param_1;
  *(undefined8 *)&this->CategorySortPriorities = 0;
  *(undefined8 *)&(this->CategorySortPriorities).field_0x8 = 0;
  *(undefined8 *)&(this->CategorySortPriorities).field_0x20 = 0;
  *(undefined4 *)&(this->CategorySortPriorities).field_0x28 = 0;
  *(undefined4 *)&(this->CategorySortPriorities).field_0x2c = 0x80;
  *(undefined4 *)&(this->CategorySortPriorities).field_0x34 = 0;
  *(undefined4 *)&(this->CategorySortPriorities).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CategorySortPriorities).field_0x40 = 0;
  *(undefined4 *)&(this->CategorySortPriorities).field_0x48 = 0;
  *(undefined8 *)&this->CategoryModifiedDelegate = 0;
  *(undefined8 *)&(this->CategoryModifiedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CategoryModifiedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SectionRemovedDelegate = 0;
  *(undefined8 *)&(this->SectionRemovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SectionRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CategoryModifiedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SectionRemovedDelegate).field_0x18 = 2;
  return this;
}

// AddSection @ 142697280

TSharedPtr<ISettingsSection,1> * __thiscall
FSettingsContainer::AddSection
          (FSettingsContainer *this,TSharedPtr<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,FName *param_2,FText *param_3,FText *param_4,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_5)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *pTVar3;
  FText *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  TSharedPtr<ISettingsSection,1> *pTVar7;
  FSettingsCategory *this_00;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<ISettingsSection,1> local_58;
  FText local_48;
  FString local_38;
  FString local_28;
  
  pTVar3 = TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
                   *)&this->Categories,*param_1);
  if (pTVar3 == (TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *)0x0) {
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = *(FSettingsCategory **)&pTVar3->field_0x8;
    local_70.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FSettingsCategory *)0x0) goto LAB_1426973d7;
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  pFVar4 = FText::GetEmpty();
  pFVar5 = ::FName::ToString(param_1,&local_28);
  pFVar5 = ::FName::NameToDisplayString(&local_38,pFVar5,false);
  pFVar6 = FText::FromString(&local_48,pFVar5);
  (*pcVar1)(this,param_1,pFVar6,pFVar4);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pTVar3 = TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
                   *)&this->Categories,*param_1);
  if (pTVar3 == (TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *)0x0) {
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FSettingsCategory *)0x0;
  }
  else {
    this_00 = *(FSettingsCategory **)&pTVar3->field_0x8;
    local_60.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  local_68 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
LAB_1426973d7:
  if ((this_00 == (FSettingsCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TSharedPtr<ISettingsSection,1> *)(*pcVar1)();
    return pTVar7;
  }
  FSettingsCategory::AddSection(this_00,&local_58,param_2,param_3,param_4,param_5);
  TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->CategoryModifiedDelegate,param_1);
  __return_storage_ptr__->Object = local_58.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_58.SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  return __return_storage_ptr__;
}

// AddSection @ 1426974b0

TSharedPtr<ISettingsSection,1> * __thiscall
FSettingsContainer::AddSection
          (FSettingsContainer *this,TSharedPtr<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,FName *param_2,FText *param_3,FText *param_4,TSharedRef<SWidget,1> *param_5
          )

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *pTVar3;
  FText *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  TSharedPtr<ISettingsSection,1> *pTVar7;
  FSettingsCategory *this_00;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<ISettingsSection,1> local_58;
  FText local_48;
  FString local_38;
  FString local_28;
  
  pTVar3 = TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
                   *)&this->Categories,*param_1);
  if (pTVar3 == (TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *)0x0) {
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = *(FSettingsCategory **)&pTVar3->field_0x8;
    local_70.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FSettingsCategory *)0x0) goto LAB_142697607;
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  pFVar4 = FText::GetEmpty();
  pFVar5 = ::FName::ToString(param_1,&local_28);
  pFVar5 = ::FName::NameToDisplayString(&local_38,pFVar5,false);
  pFVar6 = FText::FromString(&local_48,pFVar5);
  (*pcVar1)(this,param_1,pFVar6,pFVar4);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pTVar3 = TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
                   *)&this->Categories,*param_1);
  if (pTVar3 == (TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *)0x0) {
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FSettingsCategory *)0x0;
  }
  else {
    this_00 = *(FSettingsCategory **)&pTVar3->field_0x8;
    local_60.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  local_68 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
LAB_142697607:
  if ((this_00 == (FSettingsCategory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TSharedPtr<ISettingsSection,1> *)(*pcVar1)();
    return pTVar7;
  }
  FSettingsCategory::AddSection(this_00,&local_58,param_2,param_3,param_4,param_5);
  TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->CategoryModifiedDelegate,param_1);
  __return_storage_ptr__->Object = local_58.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_58.SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  return __return_storage_ptr__;
}

// Describe @ 142697dd0

void __thiscall
FSettingsContainer::Describe(FSettingsContainer *this,FText *param_1,FText *param_2,FName *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Description).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Description).Flags = param_2->Flags;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = param_1->Flags;
  this->IconName = *param_3;
  return;
}

// DescribeCategory @ 142697e80

void __thiscall
FSettingsContainer::DescribeCategory
          (FSettingsContainer *this,FName *param_1,FText *param_2,FText *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FSettingsCategory,1> *this_00;
  FSettingsCategory *pFVar5;
  TRawPtrProxy<FSettingsCategory> local_res8;
  
  FVar1 = *param_1;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>
                        *)&this->Categories,uVar4 + FVar1.Number,param_1);
  if (this_00->Object == (FSettingsCategory *)0x0) {
    pFVar5 = ::operator_new(0x180);
    if (pFVar5 == (FSettingsCategory *)0x0) {
      pFVar5 = (FSettingsCategory *)0x0;
    }
    else {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FSettingsCategory__6B_;
      FText::FText(&pFVar5->Description);
      FText::FText(&pFVar5->DisplayName);
      *(undefined8 *)&pFVar5->Sections = 0;
      *(undefined8 *)&(pFVar5->Sections).field_0x8 = 0;
      *(undefined8 *)&(pFVar5->Sections).field_0x20 = 0;
      *(undefined4 *)&(pFVar5->Sections).field_0x28 = 0;
      *(undefined4 *)&(pFVar5->Sections).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->Sections).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->Sections).field_0x34 = 0;
      *(undefined8 *)&(pFVar5->Sections).field_0x40 = 0;
      *(undefined4 *)&(pFVar5->Sections).field_0x48 = 0;
      pFVar5->Name = *param_1;
      (pFVar5->SectionVisibilityPermissionList)._padding_ = 0;
      (pFVar5->SectionVisibilityPermissionList)._padding_ = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).DenyList = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x8 = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x20 = 0;
      (pFVar5->SectionVisibilityPermissionList)._padding_ = (longlong)&___7FNamePermissionList__6B_;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x28 = 0;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x34 = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x40 = 0;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).DenyList.field_0x48 = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).AllowList = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x8 = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x20 = 0;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x28 = 0;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x34 = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x40 = 0;
      *(undefined4 *)&(pFVar5->SectionVisibilityPermissionList).AllowList.field_0x48 = 0;
      (pFVar5->SectionVisibilityPermissionList).DenyListAll.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar5->SectionVisibilityPermissionList).DenyListAll.ArrayNum = 0;
      (pFVar5->SectionVisibilityPermissionList).DenyListAll.ArrayMax = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).OnFilterChangedDelegate = 0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).OnFilterChangedDelegate.field_0x8 =
           0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).OnFilterChangedDelegate.field_0x10 =
           0;
      *(undefined8 *)&(pFVar5->SectionVisibilityPermissionList).OnFilterChangedDelegate.field_0x18 =
           2;
      (pFVar5->SectionVisibilityPermissionList).bSuppressOnFilterChanged = false;
      if (((pFVar5->_padding_ != 0) && (pFVar5->_padding_ != 0)) &&
         (0 < *(int *)(pFVar5->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    local_res8.Object = pFVar5;
    TSharedPtr<FSettingsCategory,1>::operator=<FSettingsCategory>(this_00,&local_res8);
    if (this_00->Object == (FSettingsCategory *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FSettingsCategory::Describe(this_00->Object,param_2,param_3);
  TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->CategoryModifiedDelegate,param_1);
  return;
}

// GetCategories @ 1426987d0

int __thiscall
FSettingsContainer::GetCategories
          (FSettingsContainer *this,
          TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FIdentityFunctor FVar1;
  uint uVar2;
  FSettingsContainer *local_res8;
  
  uVar2 = *(int *)&(this->Categories).field_0x8 - *(int *)&(this->Categories).field_0x34;
  if (-1 < (int)uVar2) {
    DestructItems<TSharedPtr<ISettingsCategory,1>,int>
              ((TSharedPtr<ISettingsCategory,1> *)(param_1->AllocatorInstance).Data,
               param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    Algo::
    Transform<TMap<FName,TSharedPtr<FSettingsCategory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>_>,TArray<TSharedPtr<ISettingsCategory,1>,TSizedDefaultAllocator<32>_>_&,_FSettingsContainer::GetCategories_::__l2::<lambda_1>_>
              (&this->Categories,param_1,local_res8._0_1_);
    local_res8._0_1_ = SUB81(this,0);
    FVar1 = (FIdentityFunctor)local_res8._0_1_;
    local_res8 = this;
    AlgoImpl::
    StableSortInternal<TSharedPtr<ISettingsCategory,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ISettingsCategory,1>,_FSettingsContainer::GetCategories_::__l2::<lambda_2>_>_>
              ((TSharedPtr<ISettingsCategory,1> *)(param_1->AllocatorInstance).Data,
               param_1->ArrayNum,FVar1,(<lambda_2> *)&local_res8);
    return param_1->ArrayNum;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetCategory @ 142698880

TSharedPtr<ISettingsCategory,1> * __thiscall
FSettingsContainer::GetCategory
          (FSettingsContainer *this,TSharedPtr<ISettingsCategory,1> *__return_storage_ptr__,
          FName *param_1)

{
  TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISettingsCategory *pIVar3;
  
  pTVar1 = TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
                   *)&this->Categories,*param_1);
  if (pTVar1 == (TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *)0x0) {
    pTVar2 = (TReferenceControllerBase<1> *)0x0;
    pIVar3 = (ISettingsCategory *)0x0;
  }
  else {
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar1->field_0x10;
    pIVar3 = *(ISettingsCategory **)&pTVar1->field_0x8;
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

// GetDescription @ 142698950

FText * __thiscall FSettingsContainer::GetDescription(FSettingsContainer *this)

{
  return &this->Description;
}

// GetDisplayName @ 142698980

FText * __thiscall FSettingsContainer::GetDisplayName(FSettingsContainer *this)

{
  return &this->DisplayName;
}

// GetIconName @ 1426989a0

FName * __thiscall FSettingsContainer::GetIconName(FSettingsContainer *this)

{
  return &this->IconName;
}

// GetName @ 1426989c0

FName * __thiscall FSettingsContainer::GetName(FSettingsContainer *this)

{
  return &this->Name;
}

// OnCategoryModified @ 142699190

TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> * __thiscall
FSettingsContainer::OnCategoryModified(FSettingsContainer *this)

{
  return &this->CategoryModifiedDelegate;
}

// OnSectionRemoved @ 142699200

TMulticastDelegate<void___cdecl(TSharedRef<ISettingsSection,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall FSettingsContainer::OnSectionRemoved(FSettingsContainer *this)

{
  return &this->SectionRemovedDelegate;
}

// ReinstancingComplete @ 142699b60

void __thiscall FSettingsContainer::ReinstancingComplete(FSettingsContainer *this,IReload *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Categories).field_0x28;
  puVar1 = &(this->Categories).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Categories).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142699bfe;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142699bfe:
  uVar10 = *(uint *)&(this->Categories).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Categories).field_0x8 -
                       *(int *)&(this->Categories).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Categories).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Categories).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142699d00;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142699d00:
  while( true ) {
    if (*(int *)&(this->Categories).field_0x8 - *(int *)&(this->Categories).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->Categories + (longlong)TStack_60.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar8 + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FSettingsCategory::ReinstancingComplete(*(FSettingsCategory **)(lVar8 + 8),param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemoveSection @ 14269a110

void __thiscall
FSettingsContainer::RemoveSection(FSettingsContainer *this,FName *param_1,FName *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *pTVar11;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  FName local_res8;
  longlong local_68;
  TReferenceControllerBase<1> *pTStack_60;
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FDestructionSentinel local_48;
  
  pTVar11 = TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsCategory,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsCategory,1>,0>,FDefaultSetAllocator>
                    *)&this->Categories,*param_1);
  if (pTVar11 == (TTuple<FName,TSharedPtr<FSettingsCategory,1>_> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar13 = *(TReferenceControllerBase<1> **)&pTVar11->field_0x10;
    plVar2 = *(longlong **)&pTVar11->field_0x8;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_68,param_2,1);
      if (local_68 != 0) {
        FVar3 = *param_2;
        local_res8 = FVar3;
        if ((int)plVar2[8] != *(int *)((longlong)plVar2 + 0x6c)) {
          uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
          TSet<TTuple<FName,TSharedPtr<FSettingsSection,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FSettingsSection,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>,FDefaultSetAllocator>
                               *)(plVar2 + 7),FVar3.Number + uVar9,&local_res8);
        }
        if ((local_68 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_58 = local_68;
        pTStack_50 = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_68 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->SectionRemovedDelegate,(FWriteAccessScope *)&local_48);
        puVar1 = &(this->SectionRemovedDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar9 = *(int *)&(this->SectionRemovedDelegate).field_0x10 - 1;
        if (-1 < (int)uVar9) {
          lVar12 = (longlong)(int)uVar9 << 4;
          bVar6 = false;
          do {
            uVar10 = 0;
            if ((int)uVar9 < *(int *)&(this->SectionRemovedDelegate).field_0x10) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar4 = *(longlong *)&(this->SectionRemovedDelegate).field_0x8;
            if (((*(int *)(lVar12 + 8 + lVar4) == 0) ||
                (plVar2 = *(longlong **)(lVar12 + lVar4), plVar2 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar2 + 0x68))(), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar12 = lVar12 + -0x10;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
        puVar1 = &(this->SectionRemovedDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->SectionRemovedDelegate,false);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_50);
        TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->CategoryModifiedDelegate,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

// ResetCategorySortPriority @ 14269a370

void __thiscall
FSettingsContainer::ResetCategorySortPriority(FSettingsContainer *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->CategorySortPriorities).field_0x8 !=
      *(int *)&(this->CategorySortPriorities).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                       *)&this->CategorySortPriorities,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// SetCategorySortPriority @ 14269ada0

void __thiscall
FSettingsContainer::SetCategorySortPriority(FSettingsContainer *this,FName param_1,float param_2)

{
  TPairInitializer<FName_const_&,float_const_&> local_res8;
  float local_res18 [4];
  float **local_18;
  float *local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value = (float *)param_1;
  local_res18[0] = param_2;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,float_const_&>_>
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->CategorySortPriorities,&local_res8,(bool *)&local_18);
  return;
}

