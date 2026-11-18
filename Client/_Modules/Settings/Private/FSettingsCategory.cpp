// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 12

// FSettingsCategory @ 142695bc0

FSettingsCategory * __thiscall
FSettingsCategory::FSettingsCategory(FSettingsCategory *this,FName *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSettingsCategory__6B_;
  FText::FText(&this->Description);
  FText::FText(&this->DisplayName);
  *(undefined8 *)&this->Sections = 0;
  *(undefined8 *)&(this->Sections).field_0x8 = 0;
  *(undefined8 *)&(this->Sections).field_0x20 = 0;
  *(undefined4 *)&(this->Sections).field_0x28 = 0;
  *(undefined4 *)&(this->Sections).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sections).field_0x34 = 0;
  *(undefined4 *)&(this->Sections).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Sections).field_0x40 = 0;
  *(undefined4 *)&(this->Sections).field_0x48 = 0;
  this->Name = *param_1;
  (this->SectionVisibilityPermissionList)._padding_ = 0;
  (this->SectionVisibilityPermissionList)._padding_ = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).DenyList = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x8 = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x20 = 0;
  (this->SectionVisibilityPermissionList)._padding_ = (longlong)&___7FNamePermissionList__6B_;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x28 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x34 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x40 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).DenyList.field_0x48 = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).AllowList = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x8 = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x20 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x28 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x2c = 0x80;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x34 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x40 = 0;
  *(undefined4 *)&(this->SectionVisibilityPermissionList).AllowList.field_0x48 = 0;
  (this->SectionVisibilityPermissionList).DenyListAll.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SectionVisibilityPermissionList).DenyListAll.ArrayNum = 0;
  (this->SectionVisibilityPermissionList).DenyListAll.ArrayMax = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).OnFilterChangedDelegate = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).OnFilterChangedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).OnFilterChangedDelegate.field_0x10 = 0;
  (this->SectionVisibilityPermissionList).bSuppressOnFilterChanged = false;
  *(undefined8 *)&(this->SectionVisibilityPermissionList).OnFilterChangedDelegate.field_0x18 = 2;
  return this;
}

// AddSection @ 142696b00

TSharedRef<ISettingsSection,1> * __thiscall
FSettingsCategory::AddSection
          (FSettingsCategory *this,TSharedRef<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,FText *param_2,FText *param_3,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_4)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FSettingsCategory *pFVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TSharedPtr<FSettingsSection,1> *this_00;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_01;
  TSharedRef<ISettingsSection,1> *pTVar11;
  longlong *plVar12;
  FSettingsSection *pFVar13;
  TSharedRef<FSettingsCategory,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uStackX_c;
  TRawPtrProxy<FSettingsSection> local_res18;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  TSharedRef<FSettingsCategory,1> local_50;
  
  bVar9 = false;
  FVar3 = *param_1;
  uVar10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
                        *)&this->Sections,uVar10 + FVar3.Number,param_1);
  pFVar13 = this_00->Object;
  if (pFVar13 != (FSettingsSection *)0x0) {
    this_01 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)
              (**(code **)(pFVar13->_padding_ + 0x60))(pFVar13,local_68);
    bVar8 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>(this_01,param_4);
    if (bVar8) {
      if (this_00->Object == (FSettingsSection *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TSharedRef<ISettingsSection,1> *)(*pcVar6)();
          return pTVar11;
        }
      }
      plVar12 = (longlong *)
                (**(code **)(this_00->Object->_padding_ + 0x40))(this_00->Object,local_60);
      if (((*plVar12 == 0) || (plVar12[1] == 0)) || (*(int *)(plVar12[1] + 8) < 1)) {
        bVar8 = false;
        bVar9 = true;
        goto LAB_142696be2;
      }
      bVar9 = true;
    }
  }
  bVar8 = true;
LAB_142696be2:
  if (bVar9) {
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  bVar7 = false;
  bVar9 = false;
  if (bVar8) {
    pFVar13 = ::operator_new(0x130);
    if (pFVar13 == (FSettingsSection *)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
      pFVar13 = (FSettingsSection *)0x0;
    }
    else {
      pTVar14 = TSharedFromThis<FSettingsCategory,1>::AsShared
                          ((TSharedFromThis<FSettingsCategory,1> *)&this->_padding_,&local_50);
      bVar7 = true;
      bVar9 = true;
      pTVar15 = (pTVar14->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar14->Object;
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        pFVar13->_padding_ = (longlong)&___7FSettingsSection__6B_;
        (pFVar13->Category).Object = (ISettingsCategory *)pFVar4;
        (pFVar13->Category).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        pFVar13->_padding_ = (longlong)&___7FSettingsSection__6B_;
        (pFVar13->Category).Object = (ISettingsCategory *)pFVar4;
        (pFVar13->Category).WeakReferenceCount.ReferenceController = pTVar15;
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      (pFVar13->CustomWidget).Object = (SWidget *)0x0;
      (pFVar13->CustomWidget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar13->Description).TextData.Reference = (ITextData *)0x0;
      pIVar5 = (param_3->TextData).Reference;
      (pFVar13->Description).TextData.Reference = pIVar5;
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 8))();
      }
      (pFVar13->Description).Flags = param_3->Flags;
      (pFVar13->DisplayName).TextData.Reference = (ITextData *)0x0;
      pIVar5 = (param_2->TextData).Reference;
      (pFVar13->DisplayName).TextData.Reference = pIVar5;
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 8))();
      }
      (pFVar13->DisplayName).Flags = param_2->Flags;
      pFVar13->Name = *param_1;
      (pFVar13->SettingsObject).WeakPtr = param_4->WeakPtr;
      *(undefined8 *)&pFVar13->CanEditDelegate = 0;
      *(undefined8 *)&(pFVar13->CanEditDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->CanEditDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->ExportDelegate = 0;
      *(undefined8 *)&(pFVar13->ExportDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->ExportDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->ImportDelegate = 0;
      *(undefined8 *)&(pFVar13->ImportDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->ImportDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->ModifiedDelegate = 0;
      *(undefined8 *)&(pFVar13->ModifiedDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->ModifiedDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->ResetDefaultsDelegate = 0;
      *(undefined8 *)&(pFVar13->ResetDefaultsDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->ResetDefaultsDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->SaveDefaultsDelegate = 0;
      *(undefined8 *)&(pFVar13->SaveDefaultsDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->SaveDefaultsDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->SaveDelegate = 0;
      *(undefined8 *)&(pFVar13->SaveDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->SaveDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->StatusDelegate = 0;
      *(undefined8 *)&(pFVar13->StatusDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->StatusDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar13->SelectDelegate = 0;
      *(undefined8 *)&(pFVar13->SelectDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar13->SelectDelegate).field_0x10 = 0;
    }
    local_res18.Object = pFVar13;
    TSharedPtr<FSettingsSection,1>::operator=<FSettingsSection>(this_00,&local_res18);
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
    }
  }
  if (this_00->Object == (FSettingsSection *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<ISettingsSection,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  pTVar15 = (this_00->SharedReferenceCount).ReferenceController;
  pFVar13 = this_00->Object;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar13 == (FSettingsSection *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<ISettingsSection,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (ISettingsSection *)pFVar13;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// AddSection @ 142696ea0

TSharedRef<ISettingsSection,1> * __thiscall
FSettingsCategory::AddSection
          (FSettingsCategory *this,TSharedRef<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,FText *param_2,FText *param_3,TSharedRef<SWidget,1> *param_4)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  SWidget *pSVar5;
  FSettingsCategory *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  ITextData *pIVar8;
  code *pcVar9;
  bool bVar10;
  atomic<int> aVar11;
  undefined4 uVar12;
  FText *pFVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  atomic<int> aVar17;
  TSharedPtr<FSettingsSection,1> *this_00;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_01;
  TSharedRef<ISettingsSection,1> *pTVar18;
  longlong *plVar19;
  FSettingsSection *pFVar20;
  TSharedRef<FSettingsCategory,1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  TReferenceControllerBase<1> *local_res18;
  FText *local_res20;
  TRawPtrProxy<FSettingsSection> local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  TSharedRef<FSettingsCategory,1> local_58;
  
  bVar10 = false;
  bVar15 = false;
  local_res8[0] = 0;
  FVar3 = *param_1;
  local_res18 = (TReferenceControllerBase<1> *)param_1;
  local_res20 = param_2;
  uVar16 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
                        *)&this->Sections,uVar16 + FVar3.Number,param_1);
  pTVar22 = local_res18;
  if (this_00->Object != (FSettingsSection *)0x0) {
    this_01 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)
              (**(code **)(this_00->Object->_padding_ + 0x60))();
    bVar14 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
    pTVar22 = local_res18;
    if (bVar14) {
      if ((this_00->Object == (FSettingsSection *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedRef<ISettingsSection,1> *)(*pcVar9)();
        return pTVar18;
      }
      plVar19 = (longlong *)
                (**(code **)(this_00->Object->_padding_ + 0x40))(this_00->Object,local_68);
      pTVar22 = (TReferenceControllerBase<1> *)plVar19[1];
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        aVar11 = pTVar22->SharedReferenceCount;
        do {
          if (aVar11 == (atomic<int>)0x0) {
            pTVar22 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar17 = pTVar22->SharedReferenceCount;
          bVar15 = aVar11 == aVar17;
          if (bVar15) {
            pTVar22->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            aVar17 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar17;
        } while (!bVar15);
        plVar4 = (longlong *)plVar19[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
        plVar19[1] = 0;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          pSVar5 = (SWidget *)*plVar19;
          *plVar19 = 0;
          if ((pSVar5 != (SWidget *)0x0) && (pSVar5 == param_4->Object)) {
            bVar14 = false;
            bVar10 = true;
            bVar15 = true;
            goto LAB_142696fdf;
          }
        }
      }
      bVar10 = true;
      bVar15 = true;
    }
  }
  bVar14 = true;
LAB_142696fdf:
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if ((bVar10) && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_60 + 8))(local_60,1);
    }
  }
  bVar10 = false;
  bVar15 = false;
  if (bVar14) {
    pFVar20 = ::operator_new(0x130);
    if (pFVar20 == (FSettingsSection *)0x0) {
      pFVar20 = (FSettingsSection *)0x0;
      pTVar22 = local_res18;
    }
    else {
      pTVar21 = TSharedFromThis<FSettingsCategory,1>::AsShared
                          ((TSharedFromThis<FSettingsCategory,1> *)&this->_padding_,&local_58);
      bVar10 = true;
      bVar15 = true;
      pTVar22 = (pTVar21->SharedReferenceCount).ReferenceController;
      pFVar6 = pTVar21->Object;
      if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
        pFVar20->_padding_ = (longlong)&___7FSettingsSection__6B_;
        (pFVar20->Category).Object = (ISettingsCategory *)pFVar6;
        (pFVar20->Category).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
        pFVar20->_padding_ = (longlong)&___7FSettingsSection__6B_;
        (pFVar20->Category).Object = (ISettingsCategory *)pFVar6;
        (pFVar20->Category).WeakReferenceCount.ReferenceController = pTVar22;
        LOCK();
        pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
        UNLOCK();
      }
      (pFVar20->CustomWidget).Object = param_4->Object;
      pTVar7 = (param_4->SharedReferenceCount).ReferenceController;
      (pFVar20->CustomWidget).WeakReferenceCount.ReferenceController = pTVar7;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      (pFVar20->Description).TextData.Reference = (ITextData *)0x0;
      pIVar8 = (param_3->TextData).Reference;
      (pFVar20->Description).TextData.Reference = pIVar8;
      if (pIVar8 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res8);
      }
      pFVar13 = local_res20;
      (pFVar20->Description).Flags = param_3->Flags;
      (pFVar20->DisplayName).TextData.Reference = (ITextData *)0x0;
      pIVar8 = (local_res20->TextData).Reference;
      (pFVar20->DisplayName).TextData.Reference = pIVar8;
      if (pIVar8 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res10);
      }
      (pFVar20->DisplayName).Flags = pFVar13->Flags;
      uVar12 = *(undefined4 *)((longlong)&local_res18->_padding_ + 4);
      (pFVar20->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&local_res18->_padding_;
      (pFVar20->Name).Number = uVar12;
      (pFVar20->SettingsObject).WeakPtr = (FWeakObjectPtr)0x0;
      *(undefined8 *)&pFVar20->CanEditDelegate = 0;
      *(undefined8 *)&(pFVar20->CanEditDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->CanEditDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->ExportDelegate = 0;
      *(undefined8 *)&(pFVar20->ExportDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->ExportDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->ImportDelegate = 0;
      *(undefined8 *)&(pFVar20->ImportDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->ImportDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->ModifiedDelegate = 0;
      *(undefined8 *)&(pFVar20->ModifiedDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->ModifiedDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->ResetDefaultsDelegate = 0;
      *(undefined8 *)&(pFVar20->ResetDefaultsDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->ResetDefaultsDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->SaveDefaultsDelegate = 0;
      *(undefined8 *)&(pFVar20->SaveDefaultsDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->SaveDefaultsDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->SaveDelegate = 0;
      *(undefined8 *)&(pFVar20->SaveDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->SaveDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->StatusDelegate = 0;
      *(undefined8 *)&(pFVar20->StatusDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->StatusDelegate).field_0x10 = 0;
      *(undefined8 *)&pFVar20->SelectDelegate = 0;
      *(undefined8 *)&(pFVar20->SelectDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar20->SelectDelegate).field_0x10 = 0;
    }
    local_78[0].Object = pFVar20;
    TSharedPtr<FSettingsSection,1>::operator=<FSettingsSection>(this_00,local_78);
    if (bVar15) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
  }
  if ((this_00->Object == (FSettingsSection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar18 = (TSharedRef<ISettingsSection,1> *)(*pcVar9)();
    return pTVar18;
  }
  pTVar22 = (this_00->SharedReferenceCount).ReferenceController;
  pFVar20 = this_00->Object;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar20 == (FSettingsSection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar18 = (TSharedRef<ISettingsSection,1> *)(*pcVar9)();
    return pTVar18;
  }
  __return_storage_ptr__->Object = (ISettingsSection *)pFVar20;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar22;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return __return_storage_ptr__;
}

// Describe @ 142697d20

void __thiscall FSettingsCategory::Describe(FSettingsCategory *this,FText *param_1,FText *param_2)

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
  return;
}

// GetDescription @ 142698940

FText * __thiscall FSettingsCategory::GetDescription(FSettingsCategory *this)

{
  return &this->Description;
}

// GetDisplayName @ 142698970

FText * __thiscall FSettingsCategory::GetDisplayName(FSettingsCategory *this)

{
  return &this->DisplayName;
}

// GetName @ 1426989b0

FName * __thiscall FSettingsCategory::GetName(FSettingsCategory *this)

{
  return &this->Name;
}

// GetSection @ 1426989e0

TSharedPtr<ISettingsSection,1> * __thiscall
FSettingsCategory::GetSection
          (FSettingsCategory *this,TSharedPtr<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,bool param_2)

{
  bool bVar1;
  TTuple<FName,TSharedPtr<FSettingsSection,1>_> *pTVar2;
  FName *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  ISettingsSection *pIVar6;
  
  pTVar2 = TSet<TTuple<FName,TSharedPtr<FSettingsSection,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsSection,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>,FDefaultSetAllocator>
                   *)&this->Sections,*param_1);
  if (pTVar2 == (TTuple<FName,TSharedPtr<FSettingsSection,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pIVar6 = (ISettingsSection *)0x0;
LAB_142698a2c:
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x10;
    pIVar6 = *(ISettingsSection **)&pTVar2->field_0x8;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      goto LAB_142698a2c;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (param_2) {
LAB_142698a7c:
    __return_storage_ptr__->Object = pIVar6;
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  }
  else {
    if (pIVar6 != (ISettingsSection *)0x0) {
      pFVar3 = (FName *)(**(code **)((longlong)*pIVar6 + 0x58))(pIVar6);
      bVar1 = FNamePermissionList::PassesFilter(&this->SectionVisibilityPermissionList,*pFVar3);
      if (bVar1) goto LAB_142698a7c;
    }
    __return_storage_ptr__->Object = (ISettingsSection *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar4 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetSectionVisibilityPermissionList @ 142698ab0

FNamePermissionList * __thiscall
FSettingsCategory::GetSectionVisibilityPermissionList(FSettingsCategory *this)

{
  return &this->SectionVisibilityPermissionList;
}

// GetSections @ 142698ac0

int __thiscall
FSettingsCategory::GetSections
          (FSettingsCategory *this,
          TArray<TSharedPtr<ISettingsSection,1>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 local_a8;
  longlong local_a0;
  TMap<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar9 = *(int *)&(this->Sections).field_0x8 - *(int *)&(this->Sections).field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<TSharedPtr<ISettingsSection,1>,int>
            ((TSharedPtr<ISettingsSection,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98 = &this->Sections;
  iStack_90 = 0;
  local_88 = &(this->Sections).field_0x10;
  local_78 = 0;
  uStack_8c = 1;
  iVar5 = *(int *)&(this->Sections).field_0x28;
  iStack_7c = 0;
  if (iVar5 != 0) {
    puVar10 = *(uint **)&(this->Sections).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_88;
    }
    uVar9 = *puVar10;
    iStack_90 = 0;
    local_78 = 0;
    while (uVar9 == 0) {
      lVar7 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_142698bae;
      uVar9 = puVar10[lVar7 + 1];
    }
    uStack_8c = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar7;
    if (iVar5 < iStack_7c) {
      iStack_7c = iVar5;
    }
  }
LAB_142698bae:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  iStack_74 = iStack_7c;
  local_68 = local_98;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar5) {
    do {
      if (param_2) {
LAB_142698c61:
        local_a8 = *(undefined8 *)
                    ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)local_68);
        local_a0 = *(longlong *)
                    ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)local_68);
        if (local_a0 != 0) {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar5 + 1;
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar8 = local_a8;
        *(longlong *)(pFVar8 + 8) = local_a0;
        local_a0 = 0;
        local_a8 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        lVar7 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)local_68;
        if ((*(longlong *)(lVar7 + 8) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        pFVar6 = (FName *)(**(code **)(**(longlong **)(lVar7 + 8) + 0x58))();
        bVar4 = FNamePermissionList::PassesFilter(&this->SectionVisibilityPermissionList,*pFVar6);
        if (bVar4) goto LAB_142698c61;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return param_1->ArrayNum;
}

// ReinstancingComplete @ 1426998c0

void __thiscall FSettingsCategory::ReinstancingComplete(FSettingsCategory *this,IReload *param_1)

{
  undefined1 *puVar1;
  TMap<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
  *pTVar7;
  bool bVar8;
  UObject *pUVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  UObject *local_a8;
  TMap<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FName,TSharedPtr<FSettingsSection,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(this->Sections).field_0x28;
  puVar1 = &(this->Sections).field_0x10;
  iStack_98 = 0;
  pTVar2 = &this->Sections;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->Sections).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14269996d;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = (int)lVar10 + -1 + local_80;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_14269996d:
  iStack_78 = *(int *)&(this->Sections).field_0x8 - *(int *)&(this->Sections).field_0x34;
  uVar13 = *(uint *)&(this->Sections).field_0x28;
  uStack_88 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->Sections).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->Sections).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142699a70;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_142699a70:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsSection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar7;
    if ((*(longlong *)(lVar10 + 8) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar10 = *(longlong *)(lVar10 + 8);
    pcVar6 = *(code **)((longlong)*param_1 + 0x58);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar10 + 0x50),true);
    local_a8 = (UObject *)(*pcVar6)(param_1,pUVar9);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar10 + 0x50),(FObjectPtr)&local_a8);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// RemoveSection @ 14269a0c0

void __thiscall FSettingsCategory::RemoveSection(FSettingsCategory *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = *param_1;
  if (*(int *)&(this->Sections).field_0x8 != *(int *)&(this->Sections).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,TSharedPtr<FSettingsSection,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FSettingsSection,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsSection,1>,0>,FDefaultSetAllocator>
                         *)&this->Sections,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

