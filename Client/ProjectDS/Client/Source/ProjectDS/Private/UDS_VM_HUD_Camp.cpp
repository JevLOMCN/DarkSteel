// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b667740

UClass * __cdecl UDS_VM_HUD_Camp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Camp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Camp",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Camp.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Camp,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_HUD_Camp>,InternalVTableHelperCtorCaller<UDS_VM_HUD_Camp>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Camp.InnerSingleton;
}

// UDS_VM_HUD_Camp @ 14b66d560

UDS_VM_HUD_Camp * __thiscall
UDS_VM_HUD_Camp::UDS_VM_HUD_Camp(UDS_VM_HUD_Camp *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Camp__6B_;
  FText::FText(&this->RemainTime);
  (this->EntryBindingEventField_CampMenuList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_CampMenuList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_CampMenuList).UserObjectList.ArrayMax = 0;
  (this->VM_CampProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_CommonProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  this->CampEntityID = 0;
  this->InteractionID = 0;
  return this;
}

// UDS_VM_HUD_Camp @ 14b66d5e0

UDS_VM_HUD_Camp * __thiscall
UDS_VM_HUD_Camp::UDS_VM_HUD_Camp(UDS_VM_HUD_Camp *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Camp__6B_;
  FText::FText(&this->RemainTime);
  (this->EntryBindingEventField_CampMenuList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_CampMenuList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_CampMenuList).UserObjectList.ArrayMax = 0;
  (this->VM_CampProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_CommonProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  this->CampEntityID = 0;
  this->InteractionID = 0;
  return this;
}

// ~UDS_VM_HUD_Camp @ 14b66f050

void __thiscall UDS_VM_HUD_Camp::~UDS_VM_HUD_Camp(UDS_VM_HUD_Camp *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Camp__6B_;
  pFVar1 = (this->EntryBindingEventField_CampMenuList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RemainTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671880

IClassDescriptor * __thiscall UDS_VM_HUD_Camp::GetFieldNotificationDescriptor(UDS_VM_HUD_Camp *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_Camp::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6722e0

UClass * __cdecl UDS_VM_HUD_Camp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Camp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Camp",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Camp.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Camp,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_HUD_Camp>,InternalVTableHelperCtorCaller<UDS_VM_HUD_Camp>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Camp.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_Camp @ 14b672b80

void __cdecl UDS_VM_HUD_Camp::StaticRegisterNativesUDS_VM_HUD_Camp(void)

{
  return;
}

// BindModel @ 14be763f0

void __thiscall UDS_VM_HUD_Camp::BindModel(UDS_VM_HUD_Camp *this)

{
  UDS_CampEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CampEvent::GetEvent();
  if (pUVar1 != (UDS_CampEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickCampMenuDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_Camp>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickCampMenuDelegate,(UDS_VM_HUD_Camp *)&stack0x00000010,
               (pmf_e287c1f6 *)this);
  }
  return;
}

// OnCampTimeEnd @ 14be90450

void __thiscall UDS_VM_HUD_Camp::OnCampTimeEnd(UDS_VM_HUD_Camp *this)

{
  return;
}

// OnClickCampMenu @ 14be93a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Camp::OnClickCampMenu(UDS_VM_HUD_Camp *this,int param_1)

{
  FName FVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_WindowManager *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FMRSWRecursiveAccessDetector FVar11;
  UDS_ContentManager *this_01;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 auStackY_278 [32];
  uint uVar14;
  wchar_t *pwVar15;
  EDS_AbilityDeactivateType local_238 [8];
  FWeakObjectPtr local_230;
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  FDelegateAllocation local_218;
  FDestructionSentinel local_208;
  FDestructionSentinel local_1e8;
  FDelegateAllocation *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (param_1 == 0) {
    local_228 = (undefined1  [8])UDS_ContentManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (undefined1  [8])0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_228);
    }
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (undefined1  [8])0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_228);
    }
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)local_228);
    bVar3 = TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr> *)&local_230,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_Camp::OnClickCampMenu",0x20,Yes);
      pwVar15 = L"contentManager is nullptr.";
      uVar14 = 0x81;
    }
    else {
      pUVar9 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar9,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar10 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1c8,pUVar10);
      local_1c8._8_8_ = pUVar9;
      pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
      if (local_1c8._64_8_ != 0) {
        plVar12 = (longlong *)(local_1c8 + 0x50);
        if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_1c8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar9 != (UObject *)0x0) goto LAB_14be93ed4;
      }
      else if (pUVar9 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar9);
LAB_14be93ed4:
        FVar11.State = (atomic<unsigned___int64>)::FName::FName((FName *)&local_208,L"CampEntityID")
        ;
        FVar1 = *(FName *)FVar11.State;
        uVar14 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        if (*(int *)&pUVar9[9].field_0x8 != *(int *)&pUVar9[10].field_0xc) {
          puVar13 = *(undefined1 **)&pUVar9[10].field_0x18;
          if (*(undefined1 **)&pUVar9[10].field_0x18 == (undefined1 *)0x0) {
            puVar13 = &pUVar9[10].field_0x10;
          }
          iVar4 = *(int *)(puVar13 +
                          (ulonglong)(*(int *)&pUVar9[10].field_0x20 - 1U & FVar1.Number + uVar14) *
                          4);
          if (iVar4 != -1) {
            lVar2 = *(longlong *)
                     &((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                        *)(pUVar9 + 9))->Elements;
            do {
              if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == FVar1) goto LAB_14be93f6b;
              iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
            } while (iVar4 != -1);
          }
        }
        local_218.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)&this->CampEntityID;
        local_220 = (undefined1  [8])FVar11.State;
        TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,unsigned___int64_const_&>_>
                  ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
                    *)(pUVar9 + 9),
                   (TPairInitializer<FName_const_&,unsigned___int64_const_&> *)local_228,
                   (bool *)local_220);
LAB_14be93f6b:
        this_01 = (UDS_ContentManager *)FWeakObjectPtr::Get(&local_230);
        local_208._0_8_ = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        local_228._0_4_ = 0x2b19;
        UDS_ContentManager::OpenContent
                  (this_01,(EDS_ContentsTabFrameType *)local_228,
                   (TObjectPtr<UDS_ContentArguments>)&local_208);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_Camp::OnClickCampMenu",0x20,Yes);
      pwVar15 = L"contentArgs is nullptr.";
      uVar14 = 0x88;
    }
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        local_238[0] = Success;
        local_230 = (FWeakObjectPtr)FDS_EntityBase::GetMainPlayerEntityID(true);
        UDS_InteractionAbility_NPCCamp::Deactivate((ulong64 *)&local_230,local_238);
        FDS_PlayerSkillService::SendRemoveCampRequest(&this->CampEntityID);
        return;
      }
      if (param_1 != 3) {
        return;
      }
      local_238[0] = Success;
      local_230 = (FWeakObjectPtr)FDS_EntityBase::GetMainPlayerEntityID(true);
      UDS_InteractionAbility_NPCCamp::Deactivate((ulong64 *)&local_230,local_238);
      return;
    }
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_230);
    bVar3 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_230,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_Camp::OnClickCampMenu",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x97,L"npcDataSet is nullptr. (%llu)")
      ;
      goto LAB_14be93e49;
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_208._0_8_ = OnOpenWindow_ItemCraft;
      local_208.Accessor._4_4_ = local_218.DelegateAllocator._4_4_;
      local_218.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_208.Accessor._0_4_ = 0;
      local_220 = (undefined1  [8])0x0;
      local_218.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                 (FWriteAccessScope *)&local_1e8);
      local_1d0 = &local_218;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_218);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_NPCDataSet__UFWeakObjectPtr______6B_
        ;
        *(FWeakObjectPtr *)(puVar6 + 1) = local_230;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_Camp____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_NPCDataSet__UFWeakObjectPtr______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_228 = (undefined1  [8])this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)local_228);
        puVar6[4] = local_208._0_8_;
        puVar6[5] = CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_);
      }
      if (local_1e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
      }
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_208,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_220);
      UDS_WindowManager::OpenWindow(this_00,ItemCraft,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                 (FWriteAccessScope *)&local_208);
      if ((local_218.DelegateSize != 0) &&
         (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_218.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_218,0,0,0x10);
        local_218.DelegateSize = 0;
      }
      if (local_208.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)
                   CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_),&local_208);
      }
      if (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_218.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_220);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_Camp::OnClickCampMenu",0x20,Yes);
    pwVar15 = L"windowMng is nullptr.";
    uVar14 = 0x9e;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar14,pwVar15);
LAB_14be93e49:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnOpenWindow_ItemCraft @ 14be9af40

void __thiscall
UDS_VM_HUD_Camp::OnOpenWindow_ItemCraft
          (UDS_VM_HUD_Camp *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  UDS_NPCDataSet *this_01;
  UDS_DataSetBase *pUVar7;
  ulong64 uVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  if ((param_1 != (UDS_UserWidget *)0x0) &&
     (local_res18 = param_2.WeakPtr,
     bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0),
     !bVar2)) {
    pFVar5 = ::operator_new(0x38);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->field_0x1c = 0;
      *(undefined8 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      *(undefined8 *)((atomic<int> *)&pFVar5[1].DerivedStaticStruct + 1) = 0;
      pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->ViewModelTemplateKey = None;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemCraft__6B_;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCraft__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_ItemCraft::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar9;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = ItemCraft;
    this_01 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res18);
    iVar3 = UDS_NPCDataSet::GetInteractionFunctionValue(this_01,this->InteractionID,ItemCraft);
    *(int *)&pFVar9[1]._padding_ = iVar3;
    pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar8 = UDS_DataSetBase::GetEntityID(pUVar7);
    *(ulong64 *)&pFVar9[1].DerivedStaticStruct = uVar8;
    pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
    uVar4 = UDS_DataSetBase::GetEntityTableID(pUVar7);
    pFVar9[1].ViewModelName.ComparisonIndex.Value = uVar4;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar9;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  return;
}

// OnSetViewModel @ 14bea2170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Camp::OnSetViewModel(UDS_VM_HUD_Camp *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NPCCampData *this_00;
  TArray<EDS_CampMenu,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStackY_1e8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_1b8 [2];
  initializer_list<EDS_CampMenu> local_1a8;
  TSharedPtr<FDS_ViewModelContext_HUD_Camp,1> local_198;
  ulong64 local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_180;
  undefined1 local_170 [16];
  EDS_CampMenu local_160 [6];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_180.Object = param_1->Object;
  local_180.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_HUD_Camp>(&local_198,&local_180);
  if (local_198.Object == (FDS_ViewModelContext_HUD_Camp *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bea237d;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_Camp::OnSetViewModel",0x1f,Yes);
    pwVar6 = L"context is nullptr.";
    uVar5 = 0x21;
  }
  else {
    this->CampEntityID = (local_198.Object)->CampEntityID;
    this->InteractionID = (local_198.Object)->InteractionID;
    UDS_NPCCampData::GetData((ulong64)local_1b8);
    bVar2 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)local_1b8,(void *)0x0);
    if (!bVar2) {
      SetVM_Progress(this);
      this_00 = (UDS_NPCCampData *)FWeakObjectPtr::Get(local_1b8);
      local_188 = FDS_EntityBase::GetMainPlayerEntityID(true);
      bVar2 = UDS_NPCCampData::IsMyCamp(this_00,&local_188);
      local_160[0] = Cook;
      if (bVar2) {
        local_160[1] = 2;
        local_1a8._Last = local_160 + 3;
        local_160[2] = 3;
      }
      else {
        local_160[1] = 3;
        local_1a8._Last = local_160 + 2;
      }
      local_1a8._First = local_160;
      pTVar4 = TArray<enum_EDS_CampMenu,TSizedDefaultAllocator<32>_>::
               TArray<enum_EDS_CampMenu,TSizedDefaultAllocator<32>_>(local_170,&local_1a8);
      UpdateCampMenuList(this,pTVar4);
      goto LAB_14bea237d;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bea237d;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_Camp::OnSetViewModel",0x1f,Yes);
    pwVar6 = L"npcCampData is nullptr.";
    uVar5 = 0x2b;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar5,pwVar6);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14bea237d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_Progress @ 14beb9670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Camp::SetVM_Progress(UDS_VM_HUD_Camp *this)

{
  double dVar1;
  code *pcVar2;
  FDS_ViewModelContext_ModelBase *pFVar3;
  bool bVar4;
  UDS_M_CommonProgress *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_VM_CommonProgress *pUVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  double dVar11;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  UDS_VM_HUD_Camp *local_1a8 [2];
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FDestructionSentinel local_178;
  undefined1 *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->M_CommonProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
    pUVar5 = NewObject<UDS_M_CommonProgress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_M_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->M_CommonProgress).field0_0x0.DebugPtr = pUVar5;
    local_1b8 = (FWeakObjectPtr)OnCampTimeEnd;
    uStack_1ac = local_188.SharedReferenceCount.ReferenceController._4_4_;
    uStack_1b0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar5->Delegate_TimerFinish,(FWriteAccessScope *)&local_178);
    local_160 = &(pUVar5->Delegate_TimerFinish).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_160);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_Camp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_1a8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)local_1a8);
      *(FWeakObjectPtr *)(puVar6 + 4) = local_1b8;
      puVar6[5] = CONCAT44(uStack_1ac,uStack_1b0);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
  }
  if ((this->VM_CampProgress).field0_0x0.DebugPtr == (UDS_VM_CommonProgress *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonProgress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_CampProgress).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UDS_VM_CommonProgress *)0x0) {
      return;
    }
  }
  if ((this->M_CommonProgress).field0_0x0.DebugPtr != (UDS_M_CommonProgress *)0x0) {
    UDS_NPCCampData::GetData((ulong64)&local_1b8);
    bVar4 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_1b8,(void *)0x0);
    if (bVar4) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_HUD_Camp::SetVM_Progress",0x1f,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_158.Ptr,0x62,L"npcCampData is nullptr. (%llu)");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      pUVar10 = FWeakObjectPtr::Get(&local_1b8);
      dVar1 = *(double *)&pUVar10[4].field_0x10;
      UDS_ModelBase::SetViewModelTemplateKey
                ((UDS_ModelBase *)(this->M_CommonProgress).field0_0x0.DebugPtr,W_CommonProgress);
      MakeContext<FDS_ViewModelContext_ModelBase>(&local_198);
      pFVar3 = local_198.Object;
      if ((local_198.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (this->M_CommonProgress).field0_0x0.DebugPtr,
         pUVar5 != (UDS_M_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_188.Object = (FDS_ViewModelContext *)local_198.Object;
      local_188.SharedReferenceCount.ReferenceController =
           local_198.SharedReferenceCount.ReferenceController;
      (pFVar3->Model).field0_0x0 =
           (TObjectPtr<UDS_ModelBase>_u_0)(this->M_CommonProgress).field0_0x0;
      pUVar8 = (this->VM_CampProgress).field0_0x0.DebugPtr;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_188);
      pUVar5 = (this->M_CommonProgress).field0_0x0.DebugPtr;
      dVar11 = UDS_TimeUtilManager::GetCurrentServerTime();
      UDS_M_CommonProgress::Init(pUVar5,dVar11,dVar1,true,DayHourSec);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// UnbindModel @ 14bebc2f0

void __thiscall UDS_VM_HUD_Camp::UnbindModel(UDS_VM_HUD_Camp *this)

{
  UDS_CampEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CampEvent::GetEvent();
  if (pUVar1 != (UDS_CampEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickCampMenuDelegate,this);
    return;
  }
  return;
}

// UpdateCampMenuList @ 14bebd150

void __thiscall
UDS_VM_HUD_Camp::UpdateCampMenuList
          (UDS_VM_HUD_Camp *this,TArray<EDS_CampMenu,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FScriptContainerElement *local_res18;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_CampMenuList);
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_res18 = pFVar10 + (longlong)iVar1 * 4;
  while( true ) {
    pFVar4 = local_res18;
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EDS_CampMenu,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar4) break;
    uVar2 = *(undefined4 *)pFVar10;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebd35d;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bebd35d;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->ViewModelTemplateKey = None;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CampMenuButton__6B_;
      pFVar9 = pFVar6;
    }
    pTVar7 = ::operator_new(0x20);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CampMenuButton__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_CampMenuButton::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = HUD_CampMenuBtn;
    *(undefined4 *)&pFVar9[1]._padding_ = uVar2;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar9;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_CampMenuList,
               (TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    pFVar10 = pFVar10 + 4;
  }
  local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField_CampMenuList.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField_CampMenuList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
LAB_14bebd35d:
  pFVar10 = (param_1->AllocatorInstance).Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

