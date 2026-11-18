// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6dfec0

UClass * __cdecl UDS_VM_SkillInfo_Panel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillInfo_Panel",
               &Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillInfo_Panel,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillInfo_Panel>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillInfo_Panel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel.InnerSingleton;
}

// UDS_VM_SkillInfo_Panel @ 14b6e5950

UDS_VM_SkillInfo_Panel * __thiscall
UDS_VM_SkillInfo_Panel::UDS_VM_SkillInfo_Panel(UDS_VM_SkillInfo_Panel *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo_Panel__6B_;
  (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->DetailEntryBindField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetailEntryBindField).UserObjectList.ArrayNum = 0;
  (this->DetailEntryBindField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_SkillInfo_Panel @ 14b6e59b0

UDS_VM_SkillInfo_Panel * __thiscall
UDS_VM_SkillInfo_Panel::UDS_VM_SkillInfo_Panel
          (UDS_VM_SkillInfo_Panel *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo_Panel__6B_;
  (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->DetailEntryBindField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetailEntryBindField).UserObjectList.ArrayNum = 0;
  (this->DetailEntryBindField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_SkillInfo_Panel @ 14b6e7110

void __thiscall UDS_VM_SkillInfo_Panel::~UDS_VM_SkillInfo_Panel(UDS_VM_SkillInfo_Panel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo_Panel__6B_;
  pFVar1 = (this->DetailEntryBindField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e96e0

IClassDescriptor * __thiscall
UDS_VM_SkillInfo_Panel::GetFieldNotificationDescriptor(UDS_VM_SkillInfo_Panel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillInfo_Panel::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea0c0

UClass * __cdecl UDS_VM_SkillInfo_Panel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillInfo_Panel",
               &Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillInfo_Panel,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillInfo_Panel>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillInfo_Panel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillInfo_Panel @ 14b6eabe0

void __cdecl UDS_VM_SkillInfo_Panel::StaticRegisterNativesUDS_VM_SkillInfo_Panel(void)

{
  return;
}

// InitViewModel @ 14bf5b6d0

void __thiscall UDS_VM_SkillInfo_Panel::InitViewModel(UDS_VM_SkillInfo_Panel *this)

{
  UDS_VM_SkillData *pUVar1;
  
  if ((this->VM_SkillData).field0_0x0.DebugPtr == (UDS_VM_SkillData *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SkillData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_SkillData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_SkillData).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnSetViewModel @ 14bf6d500

void __thiscall
UDS_VM_SkillInfo_Panel::OnSetViewModel
          (UDS_VM_SkillInfo_Panel *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  UDS_VM_SkillData *this_00;
  void *_Src;
  code *pcVar1;
  FWeakObjectPtr FVar2;
  FDS_VMContext_SkillData *pFVar3;
  FDS_ViewModelContext_CharInfoData *pFVar4;
  FDS_ViewModelContext_SkillDetailInfo *pFVar5;
  bool bVar6;
  uint uVar7;
  UDS_VM_CharInfoData *pUVar8;
  ulong64 uVar9;
  UObject *pUVar10;
  UDS_SkillData *pUVar11;
  UDS_UserObjectListItem *pUVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *pUVar16;
  TReferenceControllerBase<1> *pTVar17;
  int iVar18;
  longlong lVar19;
  FDS_ViewModelContext *pFVar20;
  uint uVar21;
  FDS_ViewModelContext *pFVar22;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_168;
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  longlong local_150;
  UDS_SkillData *local_148;
  UDS_UserObjectListItem *local_140;
  UDS_SkillData *local_138;
  UDS_UserObjectListItem *local_130;
  FName local_128;
  int local_120;
  TSharedPtr<FDS_VMContext_SkillData,1> local_118;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_108;
  TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> local_f8;
  TSharedPtr<FDS_VMContext_SkillData,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_SkillInfoPanel,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  pTVar17 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SkillInfoPanel>(&local_b8,&local_a8);
  if (local_b8.Object == (FDS_ViewModelContext_SkillInfoPanel *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3773475824368353310>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_SkillInfo_Panel.cpp"
                       ,0x1e,"false");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((this->VM_SelectedCharInfoData).field0_0x0.DebugPtr == (UDS_VM_CharInfoData *)0x0) {
      pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UDS_VM_CharInfoData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = pUVar8;
    }
    iVar18 = (local_b8.Object)->SkillID;
    this->ID_SkillTID = iVar18;
    uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_SkillData::GetData((ulong64)&local_res20,uVar9,SUB41(iVar18,0));
    bVar6 = FWeakObjectPtr::IsValid(&local_res20);
    if (!bVar6) {
      pUVar10 = GetTransientPackageAsObject();
      local_148 = NewObject<UDS_SkillData>(pUVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_148 != (UDS_SkillData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_148);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_148);
      pUVar10 = FWeakObjectPtr::Get(&local_res20);
      *(undefined4 *)&pUVar10[4].field_0x8 = 1;
      pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res20);
      UDS_SkillData::InitSkillData(pUVar11,this->ID_SkillTID,1);
    }
    if ((this->VM_SkillData).field0_0x0.DebugPtr != (UDS_VM_SkillData *)0x0) {
      MakeContext<FDS_VMContext_SkillData>(&local_118);
      pFVar3 = local_118.Object;
      FVar2 = local_res20;
      if ((local_118.Object == (FDS_VMContext_SkillData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (pFVar3->SkillData).WeakPtr = FVar2;
      this_00 = (this->VM_SkillData).field0_0x0.DebugPtr;
      local_78.Object = (FDS_ViewModelContext *)local_118.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_118.SharedReferenceCount.ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
    }
    if ((this->VM_SelectedCharInfoData).field0_0x0.DebugPtr != (UDS_VM_CharInfoData *)0x0) {
      MakeContext<FDS_ViewModelContext_CharInfoData>(&local_108);
      uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      pFVar4 = local_108.Object;
      if ((local_108.Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4->CharEntityID = uVar9;
      pUVar8 = (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr;
      local_68.Object = (FDS_ViewModelContext *)local_108.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_108.SharedReferenceCount.ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
    }
    FDS_EntryBindingEventField::Reset(&this->DetailEntryBindField);
    pUVar10 = FWeakObjectPtr::Get(&local_res20);
    uVar21 = 0;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = *(int *)&pUVar10[3].field_0x10;
    lVar19 = (longlong)local_158;
    _Src = *(void **)&pUVar10[3].field_0x8;
    if (local_158 == 0) {
      local_154 = 0;
      iVar18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_158,0,&local_160,local_158,&local_154);
      memcpy(local_160.Data,_Src,lVar19 << 2);
      iVar18 = local_158;
    }
    if (iVar18 == 0) {
      MakeContext<FDS_ViewModelContext_SkillDetailInfo>(&local_f8);
      pFVar5 = local_f8.Object;
      if ((local_f8.Object == (FDS_ViewModelContext_SkillDetailInfo *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0xc3;
      pFVar5->Index = 0;
      MakeContext<FDS_VMContext_SkillData>(&local_e8);
      pFVar3 = local_e8.Object;
      if ((local_e8.Object == (FDS_VMContext_SkillData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0xf;
      (pFVar3->SkillData).WeakPtr = local_res20;
      pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      local_58.Object = (FDS_ViewModelContext *)local_f8.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar12,&local_58);
      local_48.Object = (FDS_ViewModelContext *)local_e8.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_e8.SharedReferenceCount.ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar12,&local_48);
      local_140 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FDS_EntryBindingEventField::Add
                (&this->DetailEntryBindField,(TObjectPtr<UDS_UserObjectListItem>)&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    else if (0 < iVar18) {
      local_150 = 0;
      do {
        lVar19 = local_150;
        pFVar20 = (FDS_ViewModelContext *)0x0;
        uVar7 = 0;
        if ((int)uVar21 < iVar18) {
          uVar7 = ~uVar21 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar18 = *(int *)(local_160.Data + lVar19);
        pFVar13 = ::operator_new(0x28);
        pFVar22 = pFVar20;
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar13->field_0x1c = 0;
          *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0;
          *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
          (pFVar13->ViewModelName).ComparisonIndex = 0;
          (pFVar13->ViewModelName).Number = 0;
          pFVar13->ViewModelTemplateKey = None;
          pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillDetailInfo__6B_;
          pFVar22 = pFVar13;
        }
        pFVar14 = ::operator_new(0x20);
        pFVar13 = pFVar20;
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar14->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar14->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillDetailInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar22;
          pFVar13 = pFVar14;
        }
        if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar15 = FDS_ViewModelContext_SkillDetailInfo::StaticStruct();
        *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar15;
        pUVar16 = UDS_ViewModelContextManager::GetInst();
        if (pUVar16 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar13 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar13->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_d8.Object = pFVar22;
          local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13
          ;
          UDS_ViewModelContextManager::RegisterContext(pUVar16,&local_d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
        }
        pFVar22->ViewModelTemplateKey = SkillDetailInfo;
        *(uint *)&pFVar22[1]._padding_ = uVar21;
        pFVar14 = ::operator_new(0x28);
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar14->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar14->DerivedStaticStruct = 0;
          (pFVar14->ViewModelName).ComparisonIndex = 0;
          (pFVar14->ViewModelName).Number = 0;
          pFVar14->_padding_ = (longlong)&___7FDS_VMContext_SkillData__6B_;
          pFVar14[1]._padding_ = 0;
          pFVar20 = pFVar14;
        }
        pTVar17 = ::operator_new(0x20);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar17->SharedReferenceCount = (atomic<int>)0x1;
          pTVar17[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar17->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_VMContext_SkillData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar17->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar17[1].SharedReferenceCount = pFVar20;
        }
        if ((pFVar20 == (FDS_ViewModelContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar15 = FDS_VMContext_SkillData::StaticStruct();
        *(UScriptStruct **)&pFVar20->DerivedStaticStruct = pUVar15;
        pUVar16 = UDS_ViewModelContextManager::GetInst();
        if (pUVar16 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_c8.Object = pFVar20;
          local_c8.SharedReferenceCount.ReferenceController = pTVar17;
          UDS_ViewModelContextManager::RegisterContext(pUVar16,&local_c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
        }
        pFVar20->ViewModelTemplateKey = Data_Skill;
        uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
        UDS_SkillData::GetData((ulong64)&local_168,uVar9,SUB41(iVar18,0));
        bVar6 = FWeakObjectPtr::IsValid(&local_168);
        if (!bVar6) {
          pUVar10 = GetTransientPackageAsObject();
          local_138 = NewObject<UDS_SkillData>(pUVar10);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_138 != (UDS_SkillData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_138);
          }
          FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_138);
          pUVar10 = FWeakObjectPtr::Get(&local_168);
          *(undefined4 *)&pUVar10[4].field_0x8 = 1;
          pUVar11 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_168);
          UDS_SkillData::InitSkillData(pUVar11,iVar18,1);
        }
        pFVar20[1]._padding_ = (longlong)local_168;
        pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_98.Object = pFVar22;
        local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
        UDS_UserObjectListItem::AddContext(pUVar12,&local_98);
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.Object = pFVar20;
        local_88.SharedReferenceCount.ReferenceController = pTVar17;
        UDS_UserObjectListItem::AddContext(pUVar12,&local_88);
        local_130 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        FDS_EntryBindingEventField::Add
                  (&this->DetailEntryBindField,(TObjectPtr<UDS_UserObjectListItem>)&local_130);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
        local_150 = local_150 + 4;
        uVar21 = uVar21 + 1;
        iVar18 = local_158;
      } while ((int)uVar21 < local_158);
    }
    local_120 = FFieldNotificationClassDescriptor::DetailEntryBindField.BitNumber;
    local_128 = FFieldNotificationClassDescriptor::DetailEntryBindField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

