// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// StaticClass @ 14b50a5d0

UClass * __cdecl UDS_M_Common_AccelBase_Popup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Common_AccelBase_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Common_AccelBase_Popup",
               &Z_Registration_Info_UClass_UDS_M_Common_AccelBase_Popup.InnerSingleton,
               StaticRegisterNativesUDS_M_Common_AccelBase_Popup,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_Common_AccelBase_Popup>,
               InternalVTableHelperCtorCaller<UDS_M_Common_AccelBase_Popup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Common_AccelBase_Popup.InnerSingleton;
}

// UDS_M_Common_AccelBase_Popup @ 14b5108c0

UDS_M_Common_AccelBase_Popup * __thiscall
UDS_M_Common_AccelBase_Popup::UDS_M_Common_AccelBase_Popup
          (UDS_M_Common_AccelBase_Popup *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Common_AccelBase_Popup__6B_;
  *(undefined8 *)&this->Delegate_AccelComplete = 0;
  *(undefined8 *)&(this->Delegate_AccelComplete).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate_AccelComplete).field_0x10 = 0;
  (this->ItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->QuantityControlModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->QuantityControlModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->WaitCompleteData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WaitCompleteData).WeakPtr,(FObjectPtr)&local_res8);
  (this->QuantityDataContainer).field0_0x0.DebugPtr = (UDS_QuantityDataContainer *)0x0;
  return this;
}

// UDS_M_Common_AccelBase_Popup @ 14b510980

UDS_M_Common_AccelBase_Popup * __thiscall
UDS_M_Common_AccelBase_Popup::UDS_M_Common_AccelBase_Popup
          (UDS_M_Common_AccelBase_Popup *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Common_AccelBase_Popup__6B_;
  *(undefined8 *)&this->Delegate_AccelComplete = 0;
  *(undefined8 *)&(this->Delegate_AccelComplete).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate_AccelComplete).field_0x10 = 0;
  (this->ItemSlotModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemSlotModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->QuantityControlModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->QuantityControlModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->WaitCompleteData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WaitCompleteData).WeakPtr,(FObjectPtr)&local_res8);
  (this->QuantityDataContainer).field0_0x0.DebugPtr = (UDS_QuantityDataContainer *)0x0;
  return this;
}

// ~UDS_M_Common_AccelBase_Popup @ 14b512c30

void __thiscall
UDS_M_Common_AccelBase_Popup::~UDS_M_Common_AccelBase_Popup(UDS_M_Common_AccelBase_Popup *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_Common_AccelBase_Popup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate_AccelComplete);
  pvVar1 = *(void **)&(this->Delegate_AccelComplete).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate_AccelComplete);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515540

UClass * __cdecl UDS_M_Common_AccelBase_Popup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Common_AccelBase_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Common_AccelBase_Popup",
               &Z_Registration_Info_UClass_UDS_M_Common_AccelBase_Popup.InnerSingleton,
               StaticRegisterNativesUDS_M_Common_AccelBase_Popup,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_Common_AccelBase_Popup>,
               InternalVTableHelperCtorCaller<UDS_M_Common_AccelBase_Popup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Common_AccelBase_Popup.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Common_AccelBase_Popup @ 14b516c00

void __cdecl UDS_M_Common_AccelBase_Popup::StaticRegisterNativesUDS_M_Common_AccelBase_Popup(void)

{
  return;
}

// BindViewModel @ 14bce9510

void __thiscall
UDS_M_Common_AccelBase_Popup::BindViewModel
          (UDS_M_Common_AccelBase_Popup *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  ulong64 uVar10;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar11;
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *this_00;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  UDS_ModelBase::BindViewModel((UDS_ModelBase *)this,param_1);
  this_00 = &this->WaitCompleteData;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619279>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0x71,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (pUVar6[2].field_0x8 == '\x04') {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    uVar2 = *(undefined8 *)&pUVar6[2].field_0x20;
    uVar10 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_SkillData::GetData((ulong64)&local_res8,uVar10,SUB81(uVar2,0));
    bVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar4) {
      return;
    }
    pFVar7 = ::operator_new(0x40);
    pFVar13 = (FDS_ViewModelContext *)0x0;
    pFVar12 = pFVar13;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined4 *)&pFVar7[1].field_0x1c = 0;
      *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_Display_SkillSlot__6B_;
      pFVar7[1]._padding_ = 0;
      *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
      pFVar7[1].ViewModelName.ComparisonIndex = 0;
      pFVar7[1].ViewModelName.Number = 0;
      pFVar7[1].ViewModelTemplateKey = None;
      pFVar12 = pFVar7;
    }
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Display_SkillSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar12;
      pFVar13 = pFVar7;
    }
    if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_Display_SkillSlot::StaticStruct();
    *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar8;
    pUVar9 = UDS_ViewModelContextManager::GetInst();
    if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar12;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar12->ViewModelTemplateKey = Display_SkillSlot;
    pFVar12[1]._padding_ = (longlong)local_res8;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    pTVar11 = &local_28;
    local_28.Object = pFVar12;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
  }
  else {
    if (pUVar6[2].field_0x8 != '\x05') {
      return;
    }
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar1 = *(int *)&pUVar6[2].field_0x18;
    iVar5 = UDS_PlayerData::GetMainPlayerCurrentCharID();
    if (iVar1 != iVar5) {
      return;
    }
    pFVar7 = ::operator_new(0x30);
    pFVar13 = (FDS_ViewModelContext *)0x0;
    pFVar12 = pFVar13;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1].field_0x1 = 0;
      ((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1].field_0x3 = 0;
      *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_CharEvolveLevel__6B_;
      pFVar7[1]._padding_ = 0;
      *(atomic<int> *)&pFVar7[1].DerivedStaticStruct = (atomic<int>)0x0;
      *(undefined1 *)((atomic<int> *)&pFVar7[1].DerivedStaticStruct + 1) = 0;
      pFVar12 = pFVar7;
    }
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharEvolveLevel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar12;
      pFVar13 = pFVar7;
    }
    if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_CharEvolveLevel::StaticStruct();
    *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar8;
    pUVar9 = UDS_ViewModelContextManager::GetInst();
    if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_58.Object = pFVar12;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar12->ViewModelTemplateKey = CharEvolveLevel;
    uVar10 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    pFVar12[1]._padding_ = uVar10;
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    *(atomic<int> *)&pFVar12[1].DerivedStaticStruct = *(atomic<int> *)&pUVar6[2].field_0x20;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    pTVar11 = &local_38;
    local_38.Object = pFVar12;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
  }
  DS_ViewModelTemplateUtil::BindViewModel(param_1,pTVar11,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  return;
}

// CheckCompleteState @ 14bcead70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_Common_AccelBase_Popup::CheckCompleteState(UDS_M_Common_AccelBase_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WaitCompleteData *this_00;
  UDS_WindowManager *this_01;
  float local_res8 [2];
  uint local_res10 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    bVar2 = UDS_WaitCompleteData::IsComplete(this_00);
    if (bVar2) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x13ee,Alert_None_01,&local_28);
      this_01 = UDS_WindowManager::GetInst();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_WindowManager *)0x0) {
          return;
        }
      }
      else {
        if (this_01 == (UDS_WindowManager *)0x0) {
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      local_res8[0] = 0.0;
      local_res10[0] = 0;
      UDS_WindowManager::CloseWindow(this_01,PopupAccelBase,local_res10,local_res8);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619089>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0x12f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetAcceleratedTotalMinutes @ 14bcf53b0

int __thiscall
UDS_M_Common_AccelBase_Popup::GetAcceleratedTotalMinutes(UDS_M_Common_AccelBase_Popup *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = IsUseGold(this);
  if (bVar1) {
    iVar2 = DS_CommonDataHelper::AccelCalcMinute();
    iVar2 = iVar2 * 0x3c;
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = GetRemainingSeconds(this);
      iVar3 = (iVar3 + -1 + iVar2) / iVar2;
    }
    iVar2 = DS_CommonDataHelper::AccelCalcMinute();
    return iVar2 * iVar3;
  }
  iVar2 = GetAcceleratingTotalMinutesBySelectedAccelTickets(this);
  return iVar2;
}

// GetAcceleratedTotalMinutesByUseGold @ 14bcf5420

int __thiscall
UDS_M_Common_AccelBase_Popup::GetAcceleratedTotalMinutesByUseGold
          (UDS_M_Common_AccelBase_Popup *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DS_CommonDataHelper::AccelCalcMinute();
  iVar1 = iVar1 * 0x3c;
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = GetRemainingSeconds(this);
    iVar2 = (iVar2 + -1 + iVar1) / iVar1;
  }
  iVar1 = DS_CommonDataHelper::AccelCalcMinute();
  return iVar1 * iVar2;
}

// GetAcceleratingTotalMinutesBySelectedAccelTickets @ 14bcf5470

/* WARNING: Type propagation algorithm not settling */

int __thiscall
UDS_M_Common_AccelBase_Popup::GetAcceleratingTotalMinutesBySelectedAccelTickets
          (UDS_M_Common_AccelBase_Popup *this)

{
  ulonglong uVar1;
  UDS_QuantityDataContainer *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  atomic<unsigned_char> *paVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FWeakObjectPtr local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pUVar2 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_QuantityDataContainer *)0x0) {
    iVar8 = 0x1d3;
    paVar10 = &bGEnsureHasExecuted<_6736782591778618925>;
  }
  else {
    iVar19 = 0;
    iVar14 = 0;
    iVar8 = *(int *)&(pUVar2->QuantityDataMap).field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pUVar2->QuantityDataMap).field_0x10;
    uVar6 = 1;
    iVar16 = 0;
    iVar7 = 0;
    if (iVar8 != 0) {
      puVar17 = *(uint **)&(pUVar2->QuantityDataMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)TStack_70.Array;
      }
      uVar13 = *puVar17;
      iVar16 = 0;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar7 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bcf553e;
        uVar13 = puVar17[lVar11 + 1];
      }
      uVar6 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iVar7 = iVar16 + -1 + local_res10;
      if (iVar8 < iVar7) {
        iVar7 = iVar8;
      }
    }
LAB_14bcf553e:
    uVar13 = *(uint *)&(pUVar2->QuantityDataMap).field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    puVar18 = &(pUVar2->QuantityDataMap).field_0x10;
    TStack_70.CurrentBitIndex = iVar7;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uVar6,iVar14);
    iVar14 = (int)uVar13 >> 5;
    TStack_70._28_4_ = iVar7;
    TStack_70.BaseBitIndex = iVar16;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(pUVar2->QuantityDataMap).field_0x8 -
                         *(int *)&(pUVar2->QuantityDataMap).field_0x34);
    if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    uVar6 = *(uint *)&(pUVar2->QuantityDataMap).field_0x28;
    if (uVar13 != uVar6) {
      puVar15 = *(undefined1 **)&(pUVar2->QuantityDataMap).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar18;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14bcf5650;
        uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      uVar13 = local_res18 + -1 + uVar12;
      if ((int)uVar6 < (int)uVar13) {
        uVar13 = uVar6;
      }
    }
LAB_14bcf5650:
    while( true ) {
      if (*(int *)&(pUVar2->QuantityDataMap).field_0x8 -
          *(int *)&(pUVar2->QuantityDataMap).field_0x34 != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar13) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) {
        return iVar19;
      }
      pUVar3 = *(UObject **)
                (*(longlong *)&pUVar2->QuantityDataMap + 8 +
                (longlong)TStack_70.CurrentBitIndex * 0x18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_res20);
      bVar5 = FWeakObjectPtr::IsValid(&local_res20);
      if (!bVar5) break;
      pUVar9 = FWeakObjectPtr::Get(&local_res20);
      iVar8 = *(int *)&pUVar9[0x16].field_0xc;
      iVar14 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3);
      iVar19 = iVar19 + iVar14 * iVar8;
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    iVar8 = 0x1d9;
    paVar10 = &bGEnsureHasExecuted<_6736782591778618919>;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,iVar8,"false");
  if (!bVar5) {
    return 0;
  }
  pcVar4 = (code *)swi(3);
  iVar8 = (*pcVar4)();
  return iVar8;
}

// GetAccelerationCostTextStyleID @ 14bcf5750

int __thiscall
UDS_M_Common_AccelBase_Popup::GetAccelerationCostTextStyleID(UDS_M_Common_AccelBase_Popup *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long64 lVar5;
  
  bVar1 = IsUseGold(this);
  if (bVar1) {
    lVar5 = DS_MoneyDataUtil::GetMoneyQuantity(Gold);
    iVar2 = DS_CommonDataHelper::AccelCalcMinutePerGold();
    iVar3 = DS_CommonDataHelper::AccelCalcMinute();
    iVar3 = iVar3 * 0x3c;
    if (iVar3 < 1) {
      iVar2 = 0;
    }
    else {
      iVar4 = GetRemainingSeconds(this);
      iVar2 = ((iVar4 + -1 + iVar3) / iVar3) * iVar2;
    }
    iVar3 = 0x1485;
    if (iVar2 <= lVar5) {
      iVar3 = 0x1451;
    }
    return iVar3;
  }
  return 0x1452;
}

// GetAccelerationGoldCost @ 14bcf57e0

int __thiscall
UDS_M_Common_AccelBase_Popup::GetAccelerationGoldCost(UDS_M_Common_AccelBase_Popup *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DS_CommonDataHelper::AccelCalcMinutePerGold();
  iVar2 = DS_CommonDataHelper::AccelCalcMinute();
  iVar2 = iVar2 * 0x3c;
  if (0 < iVar2) {
    iVar3 = GetRemainingSeconds(this);
    return ((iVar3 + -1 + iVar2) / iVar2) * iVar1;
  }
  return 0;
}

// GetGoldPerUnitMinutes @ 14bcf7ca0

int __thiscall
UDS_M_Common_AccelBase_Popup::GetGoldPerUnitMinutes(UDS_M_Common_AccelBase_Popup *this)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c24,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GetName @ 14bcf9460

FDS_Text * __thiscall
UDS_M_Common_AccelBase_Popup::GetName
          (UDS_M_Common_AccelBase_Popup *this,FDS_Text *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FDS_Text *pFVar8;
  UObject *pUVar9;
  FDS_SkillTableRow *pFVar10;
  undefined1 local_108 [48];
  void *local_d8;
  FDS_TextFormatArg *local_c8;
  int local_c0;
  undefined8 local_a8;
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  undefined1 local_68 [48];
  void *local_38;
  FDS_TextFormatArg *local_28;
  int local_20;
  
  pFVar1 = &__return_storage_ptr__->UniqueString;
  __return_storage_ptr__->StringTableType = None;
  pTVar2 = &__return_storage_ptr__->FormatArgs;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  bVar7 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619071>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0x141,"false");
    if (!bVar7) {
      return __return_storage_ptr__;
    }
    pcVar6 = (code *)swi(3);
    pFVar8 = (FDS_Text *)(*pcVar6)();
    return pFVar8;
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
  cVar3 = pUVar9[2].field_0x8;
  if (cVar3 == '\x01') {
    bVar7 = FWeakObjectPtr::IsValid(&(this->ItemSlotModel).WeakPtr);
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6736782591778619065>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                         ,0x147,"false");
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      pcVar6 = (code *)swi(3);
      pFVar8 = (FDS_Text *)(*pcVar6)();
      return pFVar8;
    }
    pUVar9 = FWeakObjectPtr::Get(&(this->ItemSlotModel).WeakPtr);
    pFVar8 = (FDS_Text *)(**(code **)(*(longlong *)pUVar9 + 0x4d0))(pUVar9,local_68);
    FDS_Text::operator=(__return_storage_ptr__,pFVar8);
    DestructItems<FDS_TextFormatArg,int>(local_28,local_20);
    if (local_28 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else {
    if (cVar3 == '\x04') {
      pUVar9 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
      local_a8 = 0;
      pFVar10 = FDS_SkillTableRow::GetRef(*(long64 *)&pUVar9[2].field_0x20,true);
      lVar4 = (pFVar10->ID_Name).ID;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      __return_storage_ptr__->StringTableType = StringBase;
      __return_storage_ptr__->StringTableID = lVar4;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      if (pFVar1 != (FString *)local_88) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
        (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      }
      if (pTVar2 != (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)local_78) {
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
                   (__return_storage_ptr__->FormatArgs).ArrayNum);
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
        (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
      }
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      return __return_storage_ptr__;
    }
    if (cVar3 != '\b') {
      return __return_storage_ptr__;
    }
    bVar7 = FWeakObjectPtr::IsValid(&(this->ItemSlotModel).WeakPtr);
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6736782591778619046>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                         ,0x15a,"false");
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      pcVar6 = (code *)swi(3);
      pFVar8 = (FDS_Text *)(*pcVar6)();
      return pFVar8;
    }
    pUVar9 = FWeakObjectPtr::Get(&(this->ItemSlotModel).WeakPtr);
    pFVar8 = (FDS_Text *)(**(code **)(*(longlong *)pUVar9 + 0x4d0))(pUVar9,local_108);
    FDS_Text::operator=(__return_storage_ptr__,pFVar8);
    DestructItems<FDS_TextFormatArg,int>(local_c8,local_c0);
    local_38 = local_d8;
    if (local_c8 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_c8);
      local_38 = local_d8;
    }
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// GetRemainingSeconds @ 14bcfa610

int __thiscall UDS_M_Common_AccelBase_Popup::GetRemainingSeconds(UDS_M_Common_AccelBase_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_WaitCompleteData *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    iVar3 = UDS_WaitCompleteData::GetRemainingSeconds(this_00);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6736782591778618942>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,0x1c2,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetRemainingSecondsExcludingAcceleration @ 14bcfa680

int __thiscall
UDS_M_Common_AccelBase_Popup::GetRemainingSecondsExcludingAcceleration
          (UDS_M_Common_AccelBase_Popup *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetAcceleratedTotalMinutes(this);
  iVar2 = GetRemainingSeconds(this);
  iVar2 = iVar2 + iVar1 * -0x3c;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetRemainingTime @ 14bcfa6c0

FString * __thiscall
UDS_M_Common_AccelBase_Popup::GetRemainingTime
          (UDS_M_Common_AccelBase_Popup *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UDS_WaitCompleteData *this_00;
  FTimespan FVar5;
  longlong lVar6;
  FTimespan local_res8;
  FString local_38;
  FDS_StringUiID local_28;
  FString local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    FVar5 = UDS_WaitCompleteData::GetRemainingTimespan(this_00);
    lVar6 = *(longlong *)FVar5.Ticks;
    iVar3 = GetAcceleratedTotalMinutes(this);
    lVar6 = lVar6 + (longlong)iVar3 * -600000000;
    if (lVar6 < 1) {
      local_28.ID = 0x1396;
      local_28._padding_ = (longlong)&___7FDS_StringUiID__6B_;
      pFVar4 = FDS_StringUiID::Str(&local_28);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      lVar6 = (longlong)local_38.Data.ArrayNum;
      _Src = (pFVar4->Data).AllocatorInstance.Data;
      if (local_38.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
      }
      ::FString::FString(__return_storage_ptr__,&local_38);
      local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    else {
      local_res8.Ticks = lVar6;
      pFVar4 = UDS_TimeUtilManager::ConvertStringFromTimespan
                         (&local_18,&local_res8,DayHourSec,false);
      ::FString::FString(__return_storage_ptr__,pFVar4);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619035>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0x165,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::FString(__return_storage_ptr__,L"");
  }
  return __return_storage_ptr__;
}

// GetSelectedAccelTicketNeededCount @ 14bcfb7b0

int __thiscall
UDS_M_Common_AccelBase_Popup::GetSelectedAccelTicketNeededCount
          (UDS_M_Common_AccelBase_Popup *this,long64 param_1)

{
  UDS_QuantityDataContainer *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  int *piVar7;
  int *piVar8;
  atomic<unsigned_char> *paVar9;
  EDS_InventoryType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38 [2];
  
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    iVar3 = *(int *)&pUVar6[0x16].field_0xc * 0x3c;
    if (iVar3 < 1) {
      return 0;
    }
    iVar4 = GetAcceleratedTotalMinutes(this);
    iVar5 = GetRemainingSeconds(this);
    iVar5 = iVar5 + iVar4 * -0x3c;
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    iVar3 = (iVar4 + -1 + iVar3) / iVar3;
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    local_res18[0] = PlayerNormal;
    piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar6[10].field_0x18,1,local_res18);
    piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar6[8].field_0x18,(uint)local_res18[0],local_res18);
    this_00 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
    iVar4 = *piVar7 + *piVar8;
    if (iVar3 < *piVar7 + *piVar8) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    if (this_00 == (UDS_QuantityDataContainer *)0x0) {
      iVar3 = 0x1ee;
      paVar9 = &bGEnsureHasExecuted<_6736782591778618898>;
    }
    else {
      UDS_QuantityDataContainer::GetQuantityData
                (this_00,(long64)local_38,(EDS_InventoryType)param_1);
      bVar2 = FWeakObjectPtr::IsValid(local_38);
      if (bVar2) {
        pUVar6 = FWeakObjectPtr::Get(local_38);
        iVar4 = (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6);
        return iVar4 + iVar3;
      }
      iVar3 = 0x1f1;
      paVar9 = &bGEnsureHasExecuted<_6736782591778618895>;
    }
  }
  else {
    iVar3 = 0x1e3;
    paVar9 = &bGEnsureHasExecuted<_6736782591778618909>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,iVar3,"false");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// GetUnitMinutes @ 14bcfecc0

int __thiscall UDS_M_Common_AccelBase_Popup::GetUnitMinutes(UDS_M_Common_AccelBase_Popup *this)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0x1c23,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b911dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b911dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GetWaitCompleteAccelRatio @ 14bcffee0

float __thiscall
UDS_M_Common_AccelBase_Popup::GetWaitCompleteAccelRatio(UDS_M_Common_AccelBase_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_WaitCompleteData *this_00;
  float fVar4;
  double dVar5;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    iVar3 = GetAcceleratedTotalMinutes(this);
    dVar5 = UDS_WaitCompleteData::GetOriginalTimeMillisec(this_00);
    dVar5 = (__real_3f1a36e2eb1c432d / dVar5) * (double)((longlong)iVar3 * 600000000);
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    return (float)dVar5;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6736782591778619021>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,0x173,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  return 0.0;
}

// GetWaitCompleteOverAccelRatio @ 14bd00040

float __thiscall
UDS_M_Common_AccelBase_Popup::GetWaitCompleteOverAccelRatio(UDS_M_Common_AccelBase_Popup *this)

{
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UDS_WaitCompleteData *pUVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  this_00 = &this->WaitCompleteData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar5 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar3 = GetAcceleratedTotalMinutes(this);
    iVar4 = UDS_WaitCompleteData::GetProgressedSeconds(pUVar5);
    pUVar5 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    dVar7 = UDS_WaitCompleteData::GetOriginalTimeMillisec(pUVar5);
    dVar7 = (double)(((longlong)iVar4 + (longlong)iVar3 * 0x3c) * 10000000) -
            dVar7 * __real_40c3880000000000;
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    pUVar5 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    dVar8 = UDS_WaitCompleteData::GetOriginalTimeMillisec(pUVar5);
    dVar7 = (__real_3f1a36e2eb1c432d / dVar8) * dVar7;
    if (__real_3ff0000000000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000;
    }
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    return (float)dVar7;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6736782591778619014>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,0x17a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar6 = (float)(*pcVar1)();
    return fVar6;
  }
  return 0.0;
}

// GetWaitCompleteRatio @ 14bd00160

float __thiscall
UDS_M_Common_AccelBase_Popup::GetWaitCompleteRatio(UDS_M_Common_AccelBase_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WaitCompleteData *this_00;
  float fVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    fVar3 = UDS_WaitCompleteData::GetProgressRatio(this_00);
    return fVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6736782591778619028>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,0x16c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return 0.0;
}

// GetWaitCompleteType @ 14bd001d0

EDS_WaitCompleteType __thiscall
UDS_M_Common_AccelBase_Popup::GetWaitCompleteType(UDS_M_Common_AccelBase_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_WaitCompleteType EVar3;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    return pUVar4[2].field_0x8;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6736782591778619078>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                     ,0x13a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return None;
}

// InitModel @ 14bd01be0

void __thiscall
UDS_M_Common_AccelBase_Popup::InitModel(UDS_M_Common_AccelBase_Popup *this,long64 param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%lld");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_CommonAccelBasePopupData)local_res8)
  ;
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IsEnoughGold @ 14bd05bc0

bool __thiscall UDS_M_Common_AccelBase_Popup::IsEnoughGold(UDS_M_Common_AccelBase_Popup *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long64 lVar4;
  
  lVar4 = DS_MoneyDataUtil::GetMoneyQuantity(Gold);
  iVar1 = DS_CommonDataHelper::AccelCalcMinutePerGold();
  iVar2 = DS_CommonDataHelper::AccelCalcMinute();
  iVar2 = iVar2 * 0x3c;
  if (iVar2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar3 = GetRemainingSeconds(this);
    iVar1 = ((iVar3 + -1 + iVar2) / iVar2) * iVar1;
  }
  return iVar1 <= lVar4;
}

// IsUseGold @ 14bd067b0

bool __thiscall UDS_M_Common_AccelBase_Popup::IsUseGold(UDS_M_Common_AccelBase_Popup *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_CommonAccelBasePopupData)local_res8)
  ;
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// OnAccelWaitRequestComplete @ 14bd09e80

void __thiscall
UDS_M_Common_AccelBase_Popup::OnAccelWaitRequestComplete(UDS_M_Common_AccelBase_Popup *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegate_AccelComplete
             ,&local_28);
  if ((*(int *)&(this->Delegate_AccelComplete).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Delegate_AccelComplete).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnChangedQuantity @ 14bd0a3c0

void __thiscall UDS_M_Common_AccelBase_Popup::OnChangedQuantity(UDS_M_Common_AccelBase_Popup *this)

{
  UDS_QuantityDataContainer *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_ItemData *this_01;
  UDS_M_CommonQuantityControl *this_02;
  UDS_M_ItemList *this_03;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar5;
  EDS_InventoryType EVar6;
  float fVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_78;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  local_68;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->QuantityControlModel).WeakPtr);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,&local_78,SelectedItemUID);
      if (local_78.ArrayNum < 1) {
        EVar6 = None;
      }
      else {
        EVar6 = (EDS_InventoryType)*(undefined8 *)local_78.AllocatorInstance.Data;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_res8);
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar2) {
        this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
        iVar3 = UDS_ItemData::GetStackCount_Total(this_01,PlayerNormal);
        this_02 = (UDS_M_CommonQuantityControl *)
                  FWeakObjectPtr::Get(&(this->QuantityControlModel).WeakPtr);
        fVar7 = UDS_M_CommonQuantityControl::GetQuantity(this_02);
        this_00 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
        if ((float)iVar3 <= fVar7) {
          fVar7 = (float)iVar3;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if (this_00 == (UDS_QuantityDataContainer *)0x0) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6736782591778619124>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                             ,0x10c,"false");
          if (bVar2) goto code_r0x00014bd0a5c1;
        }
        else {
          UDS_QuantityDataContainer::GetQuantityData(this_00,(long64)&local_res10,EVar6);
          bVar2 = FWeakObjectPtr::IsValid(&local_res10);
          if (bVar2) {
            pUVar4 = FWeakObjectPtr::Get(&local_res10);
            (**(code **)(*(longlong *)pUVar4 + 0x2e0))(pUVar4,(int)fVar7);
            this_03 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
            pTVar5 = TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                     ::
                     TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                               (&local_68,
                                &((this->QuantityDataContainer).field0_0x0.DebugPtr)->
                                 QuantityDataMap);
            UDS_M_ItemList::SetQuantityList(this_03,pTVar5);
            *(undefined1 *)&this->_padding_ = 1;
          }
          else {
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6736782591778619121>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                               ,0x10f,"false");
            if (bVar2) goto code_r0x00014bd0a5c1;
          }
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6736782591778619128>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                           ,0x108,"false");
        if (bVar2) goto code_r0x00014bd0a5c1;
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6736782591778619133>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                         ,0x103,"false");
      if (bVar2) goto code_r0x00014bd0a5c1;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619134>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0x102,"false");
    if (bVar2) {
code_r0x00014bd0a5c1:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCheckedUseGold @ 14bd0a780

void __thiscall
UDS_M_Common_AccelBase_Popup::OnCheckedUseGold(UDS_M_Common_AccelBase_Popup *this,bool param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  FString local_28;
  
  pwVar7 = L"true";
  if (!param_1) {
    pwVar7 = L"false";
  }
  ::FString::FString(&local_28,pwVar7);
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_CommonAccelBasePopupData)&local_res8
                    );
  uVar1 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if (pFVar6 != &local_28) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar6->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)&this->_padding_ = 1;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  pcVar3 = *(code **)(this->_padding_ + 0x2e0);
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar3)(this,local_res8,0);
  return;
}

// OnClickedAccelItemSlot @ 14bd0a920

void __thiscall
UDS_M_Common_AccelBase_Popup::OnClickedAccelItemSlot
          (UDS_M_Common_AccelBase_Popup *this,
          TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    pFVar4 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar3 + 0x3a0))(pUVar3,local_res18);
    SetSelectedAccelTicketItem(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619140>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0xfc,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedAccelerationButton @ 14bd0a9b0

void __thiscall
UDS_M_Common_AccelBase_Popup::OnClickedAccelerationButton(UDS_M_Common_AccelBase_Popup *this)

{
  FInstancedStruct *this_00;
  undefined8 uVar1;
  UDS_QuantityDataContainer *pUVar2;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  FWeakObjectPtr FVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  EDS_WaitCompleteType EVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FName FVar12;
  FString *pFVar13;
  UObject *pUVar14;
  UDS_M_CommonPopup *this_01;
  FObjectPtr_u_0 *pFVar15;
  FDS_Int32StringFormatArg *pFVar16;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar17;
  long64 lVar18;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar19;
  wchar_t *pwVar20;
  FWeakObjectPtr local_res8;
  UDS_QuantityDataContainer *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_138;
  undefined8 local_130;
  FDS_Text local_128;
  FDS_Text local_d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_88;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_70;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_58;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_40;
  
  FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                     ((FDS_DataContainer *)&this->_padding_,
                      (EDS_CommonAccelBasePopupData)local_res18);
  uVar1 = *(undefined8 *)FVar12;
  uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar9 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar12);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  bVar7 = FToBoolHelper::FromCStringWide(pwVar20);
  if (bVar7) {
    pUVar14 = GetTransientPackageAsObject();
    this_01 = NewObject<UDS_M_CommonPopup>(pUVar14);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 != (UDS_M_CommonPopup *)0x0) goto LAB_14bd0aa49;
    }
    else if (this_01 != (UDS_M_CommonPopup *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14bd0aa49:
      local_d8.StringTableType = StringUi;
      local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_d8.StringEnumTableNameID.Number = 0;
      local_d8.TimeExpressionType = None;
      local_d8.IsExpression = false;
      local_d8.DateTime.Ticks = 0;
      local_d8.TimeSpan.Ticks = 0;
      local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.UniqueString.Data.ArrayNum = 0;
      local_d8.UniqueString.Data.ArrayMax = 0;
      local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.FormatArgs.ArrayNum = 0;
      local_d8.FormatArgs.ArrayMax = 0;
      local_d8.StringTableID = 2;
      UDS_M_CommonPopup::SetTitle(this_01,&local_d8);
      iVar10 = GetAccelerationGoldCost(this);
      local_128.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_128.StringEnumTableNameID.Number = 0;
      local_128.TimeExpressionType = None;
      local_128.IsExpression = false;
      local_128.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.DateTime.Ticks = 0;
      local_128.TimeSpan.Ticks = 0;
      local_128.UniqueString.Data.ArrayNum = 0;
      local_128.UniqueString.Data.ArrayMax = 0;
      local_128.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.FormatArgs.ArrayNum = 0;
      local_128.FormatArgs.ArrayMax = 0;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&local_138,(int *)((longlong)&local_130 + 4));
      local_130 = CONCAT44(local_130._4_4_,iVar11 + 1);
      this_00 = (FInstancedStruct *)(local_138.Data + (longlong)iVar11 * 0x28);
      FInstancedStruct::FInstancedStruct(this_00);
      pFVar15 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar4 = pFVar15[1];
      this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar15;
      this_00[1].StructMemory = (uchar *)FVar4;
      this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar15[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
      pFVar16 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
      if (pFVar16 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar16->Value = iVar10;
      }
      local_128.StringTableType = StringUi;
      local_128.StringTableID = 0x2384;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_128.FormatArgs.AllocatorInstance.Data,
                 local_128.FormatArgs.ArrayNum);
      FVar6.Data = local_138.Data;
      iVar10 = (int)local_130;
      local_128.FormatArgs.ArrayNum = (int)local_130;
      if (((int)local_130 != 0) || (iVar11 = 0, local_128.FormatArgs.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(int)local_130,local_128.FormatArgs.ArrayMax,
                   &local_128.FormatArgs.AllocatorInstance,(int)local_130,
                   &local_128.FormatArgs.ArrayMax);
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_128.FormatArgs.AllocatorInstance.Data,(FDS_TextFormatArg *)FVar6.Data,
                   iVar10);
        iVar11 = (int)local_130;
      }
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_138.Data,iVar11);
      if ((FDS_TextFormatArg *)local_138.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_138.Data);
      }
      UDS_M_CommonPopup::SetMainContent(this_01,&local_128);
      UDS_M_CommonPopup::SetButton(this_01,ButtonCancel,StringUi,0x66,false);
      pTVar17 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                ::CreateUObject<UDS_M_Common_AccelBase_Popup>
                          (&local_70,this,(pmf_2b8d22bd)0x14bd0b270);
      UDS_M_CommonPopup::SetDelegate(this_01,ButtonCancel,pTVar17);
      UDS_M_CommonPopup::SetButton(this_01,ButtonConfirm,StringUi,0x65,false);
      pTVar17 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                ::CreateUObject<UDS_M_Common_AccelBase_Popup>
                          (&local_58,this,(pmf_2b8d22bd)0x14bd0b2e0);
      UDS_M_CommonPopup::SetDelegate(this_01,ButtonConfirm,pTVar17);
      UDS_M_CommonPopup::OpenCommonPopup(this_01);
      return;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619186>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0xce,"false");
    if (!bVar7) {
      return;
    }
code_r0x00014bd0acbe:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
  if (pUVar2 == (UDS_QuantityDataContainer *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619173>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0xdb,"false");
    if (bVar7) goto code_r0x00014bd0acbe;
  }
  else {
    bVar7 = UDS_QuantityDataContainer::IsEmpty(pUVar2);
    if (bVar7) {
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_88._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x188a1,Alert_System_01,&local_88);
      return;
    }
    lVar18 = FDS_DataContainer::GetData<__int64,enum_EDS_CommonAccelBasePopupData>
                       ((FDS_DataContainer *)&this->_padding_,WaitCompleteDataUID);
    pTVar19 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateUObject<UDS_M_Common_AccelBase_Popup>(&local_40,this,(pmf_67508763)0x14bd09e80);
    pUVar2 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UDS_QuantityDataContainer *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_QuantityDataContainer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_QuantityDataContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    FVar5 = local_res8;
    EVar8 = GetWaitCompleteType(this);
    FDS_AccelWaitRequestService::RequestAccelWaitRequest
              (lVar18,EVar8,(TWeakObjectPtr<UDS_QuantityDataContainer,FWeakObjectPtr>)FVar5,false,
               pTVar19);
  }
  return;
}

// OnClickedCancelButton @ 14bd0ae90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_Common_AccelBase_Popup::OnClickedCancelButton(UDS_M_Common_AccelBase_Popup *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupAccelBase,local_res18,local_res10);
  return;
}

// OnClickedImmediatelyPopupCancel @ 14bd0b270

void __thiscall
UDS_M_Common_AccelBase_Popup::OnClickedImmediatelyPopupCancel
          (UDS_M_Common_AccelBase_Popup *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619160>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0xe8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedImmediatelyPopupConfirm @ 14bd0b2e0

void __thiscall
UDS_M_Common_AccelBase_Popup::OnClickedImmediatelyPopupConfirm
          (UDS_M_Common_AccelBase_Popup *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  UDS_QuantityDataContainer *pUVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  EDS_WaitCompleteType EVar6;
  uint uVar7;
  UDS_M_CommonPopup *this_00;
  FName FVar8;
  FString *pFVar9;
  longlong lVar10;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar11;
  wchar_t *_Str;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_QuantityDataContainer *local_res20;
  undefined1 local_38 [8];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  
  local_res10 = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar5) {
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                      ((FDS_DataContainer *)&this->_padding_,(EDS_CommonAccelBasePopupData)local_38)
    ;
    uVar1 = *(undefined8 *)FVar8;
    uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&this->_padding_,uVar7 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    lVar10 = _wtoi64(_Str);
    pTVar11 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateUObject<UDS_M_Common_AccelBase_Popup>(&local_30,this,(pmf_67508763)0x14bd09e80);
    pUVar2 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UDS_QuantityDataContainer *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UDS_QuantityDataContainer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_QuantityDataContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    FVar4 = local_res18;
    EVar6 = GetWaitCompleteType(this);
    FDS_AccelWaitRequestService::RequestAccelWaitRequest
              (lVar10,EVar6,(TWeakObjectPtr<UDS_QuantityDataContainer,FWeakObjectPtr>)FVar4,true,
               pTVar11);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6736782591778619154>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                       ,0xee,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnUpdateModel @ 14bd11900

void __thiscall
UDS_M_Common_AccelBase_Popup::OnUpdateModel
          (UDS_M_Common_AccelBase_Popup *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDS_ItemSlotStateType EVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr *pFVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  UObject *local_50;
  UObject *local_48;
  UObject *local_40;
  undefined1 local_38 [24];
  
  local_res10 = param_1.WeakPtr;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  pUVar8 = (UObject *)0x0;
  if (pUVar5 == (UObject *)0x0) {
LAB_14bd11949:
    pUVar5 = pUVar8;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bd11949;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_50 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_50);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 1));
    if (pUVar5 == (UObject *)0x0) {
LAB_14bd119df:
      pUVar5 = pUVar8;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14bd119df;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_48 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res18);
      EVar4 = UDS_M_ItemImplBase::GetItemSlotType(this_00);
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      if ((*(int *)&pUVar5[5].field_0x8 == 6) && (EVar4 == AccelMaterial)) {
        local_58 = local_res18;
        bVar3 = FWeakObjectPtr::IsValid(&local_58);
        if (bVar3) {
          pUVar5 = FWeakObjectPtr::Get(&local_58);
          pFVar7 = (FWeakObjectPtr *)(**(code **)(*(longlong *)pUVar5 + 0x3a0))(pUVar5,local_38);
          SetSelectedAccelTicketItem(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar7);
        }
        else {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6736782591778619140>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                             ,0xfc,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_ModelEventCommonQuantityControl_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bd11b06;
  }
  pUVar5 = pUVar8;
LAB_14bd11b06:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_40 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    OnChangedQuantity(this);
  }
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  return;
}

// PreInitBindViewModel @ 14bd14f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_Common_AccelBase_Popup::PreInitBindViewModel(UDS_M_Common_AccelBase_Popup *this)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_DataSetBase *this_00;
  FName FVar6;
  FString *pFVar7;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UClass *pUVar8;
  UObject *pUVar9;
  TObjectPtr<UDS_M_ItemImplBase> TVar10;
  FDS_ItemCraftListTableRow *pFVar11;
  UDS_M_ItemList *pUVar12;
  FDS_DataContainer *pFVar13;
  UDS_ModelBase *pUVar14;
  UDS_QuantityDataContainer *pUVar15;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar16;
  wchar_t *_Str;
  FObjectPtr_u_0 FVar17;
  undefined8 uVar18;
  undefined7 uVar19;
  EDS_FilterType EVar20;
  longlong *plVar21;
  undefined1 auStackY_278 [32];
  FWeakObjectPtr local_248;
  UObject *local_240;
  UDS_ModelBase *local_238;
  UDS_ModelBase *local_230;
  UDS_M_ItemList *local_228;
  UDS_ModelBase *local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  FDS_DataContainer local_1e8;
  undefined1 local_148 [128];
  undefined1 local_c8 [64];
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_248);
  bVar4 = FWeakObjectPtr::IsValid(&local_248);
  if (!bVar4) {
    return;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_248);
  FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_CommonAccelBasePopupData)local_218);
  uVar18 = *(undefined8 *)FVar6;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar18);
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,(int)((ulonglong)uVar18 >> 0x20) + uVar5,(FName *)FVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  _wtoi64(_Str);
  this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_210);
  local_240 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (local_240 == (UObject *)0x0) {
LAB_14bd15096:
    local_240 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&local_240->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_240->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) goto LAB_14bd15096;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_240 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_240);
  }
  FVar17.Handle = (UObject *)&local_240;
  FWeakObjectPtr::operator=(&(this->WaitCompleteData).WeakPtr,(FObjectPtr)FVar17);
  bVar4 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (!bVar4) {
    return;
  }
  EVar20 = None;
  pUVar9 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
  cVar1 = pUVar9[2].field_0x8;
  if (cVar1 == '\x01') {
    pUVar9 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    uVar19 = FVar17._1_7_;
    pFVar11 = FDS_ItemCraftListTableRow::Get(*(long64 *)&pUVar9[2].field_0x18,true);
    if (pFVar11 == (FDS_ItemCraftListTableRow *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6736782591778619337>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                         ,0x37,"false");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar10 = DS_ItemDataUtil::CreateItemModel
                       ((EDS_ItemSlotStateType)local_1f8,(int)CONCAT71(uVar19,0xf));
    pUVar14 = *(UDS_ModelBase **)TVar10.field0_0x0;
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar14);
    local_230 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UDS_ModelBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    FWeakObjectPtr::operator=(&(this->ItemSlotModel).WeakPtr,(FObjectPtr)&local_230);
    EVar20 = AccelCraftTab;
  }
  else if (cVar1 == '\x03') {
LAB_14bd15181:
    EVar20 = AccelChrAscendTab;
  }
  else if (cVar1 == '\x04') {
    EVar20 = AccelSkillTab;
  }
  else {
    if (cVar1 == '\x05') goto LAB_14bd15181;
    if (cVar1 == '\b') {
      pUVar9 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
      uVar18 = *(undefined8 *)&pUVar9[2].field_0x18;
      DS_ItemDataUtil::GetItemDataByUID((long64)local_208);
      TVar16.WeakPtr._1_7_ = (undefined7)((ulonglong)uVar18 >> 8);
      TVar16.WeakPtr.ObjectIndex._0_1_ = 0xf;
      TVar10 = DS_ItemDataUtil::CreateItemModel(None,TVar16);
      pUVar14 = *(UDS_ModelBase **)TVar10.field0_0x0;
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar14);
      local_238 = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      FWeakObjectPtr::operator=(&(this->ItemSlotModel).WeakPtr,(FObjectPtr)&local_238);
      EVar20 = AccelItemRestore;
    }
  }
  local_228 = UDS_ModelBase::AddChildModel1<UDS_M_ItemList>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UDS_M_ItemList *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_228);
  }
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_228);
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_c8._32_8_ = 0;
  local_c8._40_4_ = 0;
  local_c8._44_4_ = 0x80;
  local_c8._48_4_ = 0xffffffff;
  local_c8._52_4_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_78._32_8_ = 0;
  local_78._40_4_ = 0;
  local_78._44_4_ = 0x80;
  local_78._48_4_ = 0xffffffff;
  local_78._52_4_ = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_c8,SortType,Grade);
  FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_c8,FilterType,EVar20);
  FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
            ((FDS_DataContainer *)local_c8,SlotType,AccelMaterial);
  pUVar12 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  pFVar13 = FDS_DataContainer::FDS_DataContainer(&local_1e8,(FDS_DataContainer *)local_c8);
  UDS_M_ItemList::InitModel(pUVar12,pFVar13);
  pUVar12 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  UDS_M_ItemList::UpdateSelectedUID(pUVar12);
  pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  (**(code **)(*(longlong *)pUVar9 + 0x350))(pUVar9,0);
  pUVar14 = (UDS_ModelBase *)NewObject<UDS_M_CommonQuantityControl>((UObject *)this);
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar14);
  local_220 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  FWeakObjectPtr::operator=(&(this->QuantityControlModel).WeakPtr,(FObjectPtr)&local_220);
  pUVar9 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_QuantityDataContainer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_148,pUVar8);
  local_148._8_8_ = pUVar9;
  pUVar15 = (UDS_QuantityDataContainer *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
  if (local_148._64_8_ != 0) {
    plVar21 = (longlong *)(local_148 + 0x50);
    if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
      plVar21 = (longlong *)local_148._104_8_;
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar15 == (UDS_QuantityDataContainer *)0x0)) {
    (this->QuantityDataContainer).field0_0x0.DebugPtr = pUVar15;
    if (pUVar15 == (UDS_QuantityDataContainer *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6736782591778619288>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                         ,0x68,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14bd1546d;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
    (this->QuantityDataContainer).field0_0x0.DebugPtr = pUVar15;
  }
  pUVar12 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  UDS_M_ItemList::GetSelectedItemUID(pUVar12);
  TVar16 = DS_ItemDataUtil::GetItemDataByUID((long64)local_1f0);
                    /* WARNING: Load size is inaccurate */
  SetSelectedAccelTicketItem(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*TVar16.WeakPtr);
LAB_14bd1546d:
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return;
}

// SetSelectedAccelTicketItem @ 14bd20ed0

void __thiscall
UDS_M_Common_AccelBase_Popup::SetSelectedAccelTicketItem
          (UDS_M_Common_AccelBase_Popup *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  undefined1 *this_00;
  long64 lVar1;
  UDS_QuantityDataContainer *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  UDS_M_CommonQuantityControl *this_02;
  FText *pFVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FText local_38 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    bVar3 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
    if (bVar3) {
      bVar3 = FWeakObjectPtr::IsValid(&(this->QuantityControlModel).WeakPtr);
      if (bVar3) {
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        lVar1 = *(long64 *)&pUVar6[8].field_0x8;
        pUVar6 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        this_00 = &pUVar6[1].field_0x18;
        FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
                  ((FDS_DataContainer *)this_00,SelectedItemUID);
        FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
                  ((FDS_DataContainer *)this_00,SelectedItemUID,lVar1);
        FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                  ((FDS_DataContainer *)this_00,Update,true);
        this_01 = (this->QuantityDataContainer).field0_0x0.DebugPtr;
        if (this_01 == (UDS_QuantityDataContainer *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6736782591778619101>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                             ,0x123,"false");
          if (bVar3) goto code_r0x00014bd21064;
        }
        else {
          UDS_QuantityDataContainer::GetQuantityData
                    (this_01,(long64)local_res18,(EDS_InventoryType)lVar1);
          bVar3 = FWeakObjectPtr::IsValid(local_res18);
          if (bVar3) {
            this_02 = (UDS_M_CommonQuantityControl *)
                      FWeakObjectPtr::Get(&(this->QuantityControlModel).WeakPtr);
            pFVar7 = FText::GetEmpty();
            pFVar7 = FText::FText(local_38,pFVar7);
            iVar4 = GetSelectedAccelTicketNeededCount(this,lVar1);
            pUVar6 = FWeakObjectPtr::Get(local_res18);
            iVar5 = (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6);
            UDS_M_CommonQuantityControl::Set
                      (this_02,(float)iVar5,0.0,(float)iVar4,__real_3f800000,pFVar7);
            *(undefined1 *)&this->_padding_ = 1;
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6736782591778619098>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                               ,0x126,"false");
            if (bVar3) goto code_r0x00014bd21064;
          }
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6736782591778619107>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                           ,0x11d,"false");
        if (bVar3) goto code_r0x00014bd21064;
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6736782591778619108>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Common_AccelBase_Popup.cpp"
                         ,0x11c,"false");
      if (bVar3) {
code_r0x00014bd21064:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

