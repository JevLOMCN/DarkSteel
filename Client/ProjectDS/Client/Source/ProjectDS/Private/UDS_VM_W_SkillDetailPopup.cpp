// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b754e10

UClass * __cdecl UDS_VM_W_SkillDetailPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_SkillDetailPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_SkillDetailPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_SkillDetailPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_SkillDetailPopup,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_SkillDetailPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_SkillDetailPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_SkillDetailPopup.InnerSingleton;
}

// UDS_VM_W_SkillDetailPopup @ 14b7598d0

UDS_VM_W_SkillDetailPopup * __thiscall
UDS_VM_W_SkillDetailPopup::UDS_VM_W_SkillDetailPopup
          (UDS_VM_W_SkillDetailPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SkillDetailPopup__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->DetailEntryBindField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetailEntryBindField).UserObjectList.ArrayNum = 0;
  (this->DetailEntryBindField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_W_SkillDetailPopup @ 14b759930

UDS_VM_W_SkillDetailPopup * __thiscall
UDS_VM_W_SkillDetailPopup::UDS_VM_W_SkillDetailPopup
          (UDS_VM_W_SkillDetailPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SkillDetailPopup__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->DetailEntryBindField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetailEntryBindField).UserObjectList.ArrayNum = 0;
  (this->DetailEntryBindField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_SkillDetailPopup @ 14b75b890

void __thiscall
UDS_VM_W_SkillDetailPopup::~UDS_VM_W_SkillDetailPopup(UDS_VM_W_SkillDetailPopup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_SkillDetailPopup__6B_;
  pFVar1 = (this->DetailEntryBindField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75dc80

IClassDescriptor * __thiscall
UDS_VM_W_SkillDetailPopup::GetFieldNotificationDescriptor(UDS_VM_W_SkillDetailPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_SkillDetailPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e4f0

UClass * __cdecl UDS_VM_W_SkillDetailPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_SkillDetailPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_SkillDetailPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_SkillDetailPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_SkillDetailPopup,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_SkillDetailPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_SkillDetailPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_SkillDetailPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_SkillDetailPopup @ 14b75ef80

void __cdecl UDS_VM_W_SkillDetailPopup::StaticRegisterNativesUDS_VM_W_SkillDetailPopup(void)

{
  return;
}

// ClosePopup @ 14bf44500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_SkillDetailPopup::ClosePopup(void)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this;
  float local_res8 [2];
  uint local_res10 [6];
  
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6659302704608706629>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_SkillDetailPopup.cpp"
                       ,0x45,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_res8[0] = 0.0;
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this,SkillDetailInfo,local_res10,local_res8);
  }
  return;
}

// OnSetViewModel @ 14bf6fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_SkillDetailPopup::OnSetViewModel
          (UDS_VM_W_SkillDetailPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_VM_SkillData *pUVar4;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_SkillDetailPopup,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SkillDetailPopup>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_SkillDetailPopup *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6659302704608706641>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_SkillDetailPopup.cpp"
                       ,0x51,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_SkillDetailPopup::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x52,
                 L"UDS_VM_SkillData::SetViewModel() skillDataContext is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = UDS_VM_SkillData::Create
                       ((UObject *)this,
                        (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)
                        ((local_158.Object)->SkillData).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_SkillData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_SkillData).field0_0x0.DebugPtr = pUVar4;
    local_160 = FFieldNotificationClassDescriptor::VM_SkillData.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::VM_SkillData.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    UpdateSubSkills(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWidgetCreated @ 14bf72bb0

void __cdecl
UDS_VM_W_SkillDetailPopup::OnWidgetCreated
          (UDS_UserWidget *param_1,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_2,
          TVector2<double> *param_3,TVector2<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FMargin *pFVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TVector2<double>_u_0 local_68;
  FMargin local_58;
  TVector2<double>_u_0 local_48;
  TVector2<double> local_38;
  FMargin local_28;
  
  local_68._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  pFVar3 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,&local_28);
  local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  pFVar7 = (FDS_ViewModelContext *)0x0;
  local_58.Left = pFVar3->Left;
  local_58.Top = pFVar3->Top;
  local_58.Right = pFVar3->Right;
  local_58.Bottom = pFVar3->Bottom;
  DS_Util::TransformTooltipPosition
            (&local_38,(TVector2<double> *)&local_48._s_0,&local_58,
             (TVector2<double> *)&local_68._s_0,None);
  UDS_UserWidget::OnSetWindowPosition(param_1,&local_38);
  pFVar4 = ::operator_new(0x28);
  pFVar6 = pFVar7;
  if (pFVar4 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
    (pFVar4->ViewModelName).ComparisonIndex = 0;
    (pFVar4->ViewModelName).Number = 0;
    pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillDetailPopup__6B_;
    pFVar4[1]._padding_ = 0;
    pFVar6 = pFVar4;
  }
  pFVar4 = ::operator_new(0x20);
  if (pFVar4 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillDetailPopup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
    pFVar7 = pFVar4;
  }
  if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar5 = FDS_ViewModelContext_SkillDetailPopup::StaticStruct();
  *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_88.Object = pFVar6;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    UDS_ViewModelContextManager::RegisterContext(this,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  pFVar6->ViewModelTemplateKey = W_SkillDetailPopup;
  pFVar6[1]._padding_ = (longlong)param_2.WeakPtr;
  if (pFVar7 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar7->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_78.Object = pFVar6;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_78,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return;
}

// OpenPopup @ 14bf736d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_SkillDetailPopup::OpenPopup
          (UObject *param_1,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  UDS_WindowManager *this;
  UClass *pUVar4;
  UObject *pUVar5;
  FGeometry *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float local_108;
  float fStack_104;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  UObject *local_e8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  TVector2<double> local_98;
  FDeprecateSlateVector2D local_88;
  undefined8 uStack_80;
  
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6659302704608706583>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_SkillDetailPopup.cpp"
                       ,0x17,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bf739b2;
  }
  if (param_1 == (UObject *)0x0) {
LAB_14bf73986:
    iVar10 = 0x1e;
    paVar9 = &bGEnsureHasExecuted<6659302704608706590>;
  }
  else {
    pUVar4 = Z_Construct_UClass_UWidget_NoRegister();
    iVar10 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bf73986;
    pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (pUVar5 != (UObject *)0x0) {
      pFVar6 = UWidget::GetCachedGeometry((UWidget *)param_1);
      local_88 = pFVar6->Size;
      uStack_80 = *(undefined8 *)&pFVar6->Scale;
      fStack_104 = local_88._4_4_;
      local_108 = local_88._0_4_;
      fVar12 = fStack_104 * __real_3f000000;
      fVar11 = local_108 * __real_3f000000;
      dVar13 = (double)(fStack_104 * __real_3f000000 *
                        (pFVar6->AccumulatedRenderTransform).M.M[1][1] +
                        local_108 * __real_3f000000 * (pFVar6->AccumulatedRenderTransform).M.M[0][1]
                       + (float)*(undefined8 *)
                                 ((longlong)&(pFVar6->AccumulatedRenderTransform).Trans.field0_0x0 +
                                 4));
      local_b8._8_4_ = SUB84(dVar13,0);
      local_b8._s_0.X =
           (double)(fStack_104 * __real_3f000000 * (pFVar6->AccumulatedRenderTransform).M.M[1][0] +
                    local_108 * __real_3f000000 * (pFVar6->AccumulatedRenderTransform).M.M[0][0] +
                   (pFVar6->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
      local_b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&local_b8._s_0,&local_98,
                 (TVector2<double> *)&local_a8._s_0);
      local_100 = (undefined1  [8])0x0;
      local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
                 (FWriteAccessScope *)&local_e0);
      local_c8 = &local_f8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x48,&local_f8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__U456___6B_
        ;
        *(FWeakObjectPtr *)(puVar7 + 1) = param_2.WeakPtr;
        puVar7[2] = local_a8._s_0.X;
        puVar7[3] = local_a8._s_0.Y;
        auVar2._8_4_ = SUB84((double)fVar12,0);
        auVar2._0_8_ = (double)fVar11;
        auVar2._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
        *(undefined1 (*) [16])(puVar7 + 4) = auVar2;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[6] = uVar8;
        *puVar7 = &
                  ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__2_ZU3_U456_U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar7[7] = 0;
        local_e8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 7),(FObjectPtr)&local_e8);
        puVar7[8] = OnWidgetCreated;
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      UDS_WindowManager::OpenWindow
                (this,SkillDetailInfo,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_100);
      return;
    }
    iVar10 = 0x25;
    paVar9 = &bGEnsureHasExecuted<6659302704608706597>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_SkillDetailPopup.cpp"
                     ,iVar10,"false");
  if (!bVar3) {
    return;
  }
code_r0x00014bf739b2:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// UpdateSubSkills @ 14bf8ada0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_VM_W_SkillDetailPopup::UpdateSubSkills(UDS_VM_W_SkillDetailPopup *this)

{
  FDS_EntryBindingEventField *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  FDS_ViewModelContext_SkillDetailInfo *pFVar2;
  FDS_VMContext_SkillData *pFVar3;
  bool bVar4;
  uint uVar5;
  UDS_UserObjectListItem *pUVar6;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  ulong64 uVar12;
  UObject *pUVar13;
  UDS_SkillData *pUVar14;
  int iVar15;
  longlong lVar16;
  FDS_ViewModelContext *pFVar17;
  uint uVar18;
  FDS_ViewModelContext *pFVar19;
  FWeakObjectPtr local_res10;
  longlong local_res18;
  UDS_SkillData *local_res20;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  UDS_UserObjectListItem *local_f8;
  UDS_SkillData *local_f0;
  UDS_UserObjectListItem *local_e8;
  FDS_EntryBindingEventField *local_e0;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> local_c8;
  TSharedPtr<FDS_VMContext_SkillData,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  pUVar14 = (((this->VM_SkillData).field0_0x0.DebugPtr)->SkillData).field0_0x0.DebugPtr;
  if (pUVar14 != (UDS_SkillData *)0x0) {
    this_00 = &this->DetailEntryBindField;
    local_e0 = this_00;
    FDS_EntryBindingEventField::Reset(this_00);
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = (pUVar14->SubSkillIDList).ArrayNum;
    lVar16 = (longlong)local_100;
    _Src = (pUVar14->SubSkillIDList).AllocatorInstance.Data;
    if (local_100 == 0) {
      local_fc = 0;
      iVar15 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_100,0,&local_108,local_100,&local_fc);
      memcpy(local_108.Data,_Src,lVar16 << 2);
      iVar15 = local_100;
    }
    uVar18 = 0;
    if (iVar15 == 0) {
      MakeContext<FDS_ViewModelContext_SkillDetailInfo>(&local_c8);
      pFVar2 = local_c8.Object;
      if ((local_c8.Object == (FDS_ViewModelContext_SkillDetailInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0xc3;
      pFVar2->Index = 0;
      MakeContext<FDS_VMContext_SkillData>(&local_b8);
      pFVar3 = local_b8.Object;
      if ((local_b8.Object == (FDS_VMContext_SkillData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0xf;
      local_res20 = pUVar14;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      FWeakObjectPtr::operator=(&(pFVar3->SkillData).WeakPtr,(FObjectPtr)&local_res20);
      pUVar6 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_68.Object = (FDS_ViewModelContext *)local_c8.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar6,&local_68);
      local_58.Object = (FDS_ViewModelContext *)local_b8.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar6,&local_58);
      local_f8 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    else if (0 < iVar15) {
      local_res18 = 0;
      do {
        lVar16 = local_res18;
        pFVar17 = (FDS_ViewModelContext *)0x0;
        uVar5 = 0;
        if ((int)uVar18 < iVar15) {
          uVar5 = ~uVar18 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar15 = *(int *)(local_108.Data + lVar16);
        pFVar7 = ::operator_new(0x28);
        pFVar19 = pFVar17;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar7->field_0x1c = 0;
          *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
          *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
          (pFVar7->ViewModelName).ComparisonIndex = 0;
          (pFVar7->ViewModelName).Number = 0;
          pFVar7->ViewModelTemplateKey = None;
          pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillDetailInfo__6B_;
          pFVar19 = pFVar7;
        }
        pFVar8 = ::operator_new(0x20);
        pFVar7 = pFVar17;
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar8->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillDetailInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar19;
          pFVar7 = pFVar8;
        }
        if ((pFVar19 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar9 = FDS_ViewModelContext_SkillDetailInfo::StaticStruct();
        *(UScriptStruct **)&pFVar19->DerivedStaticStruct = pUVar9;
        pUVar10 = UDS_ViewModelContextManager::GetInst();
        if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar7->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_a8.Object = pFVar19;
          local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
        }
        pFVar19->ViewModelTemplateKey = SkillDetailInfo;
        *(uint *)&pFVar19[1]._padding_ = uVar18;
        pFVar8 = ::operator_new(0x28);
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
          (pFVar8->ViewModelName).ComparisonIndex = 0;
          (pFVar8->ViewModelName).Number = 0;
          pFVar8->_padding_ = (longlong)&___7FDS_VMContext_SkillData__6B_;
          pFVar8[1]._padding_ = 0;
          pFVar17 = pFVar8;
        }
        pTVar11 = ::operator_new(0x20);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          pTVar11 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          pTVar11->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_VMContext_SkillData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = pFVar17;
        }
        if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar9 = FDS_VMContext_SkillData::StaticStruct();
        *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar9;
        pUVar10 = UDS_ViewModelContextManager::GetInst();
        if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_98.Object = pFVar17;
          local_98.SharedReferenceCount.ReferenceController = pTVar11;
          UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
        }
        pFVar17->ViewModelTemplateKey = Data_Skill;
        uVar12 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
        UDS_SkillData::GetData((ulong64)&local_res10,uVar12,SUB41(iVar15,0));
        bVar4 = FWeakObjectPtr::IsValid(&local_res10);
        if (!bVar4) {
          pUVar13 = GetTransientPackageAsObject();
          local_f0 = NewObject<UDS_SkillData>(pUVar13);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_f0 != (UDS_SkillData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_f0);
          }
          FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_f0);
          pUVar13 = FWeakObjectPtr::Get(&local_res10);
          *(undefined4 *)&pUVar13[4].field_0x8 = 1;
          pUVar14 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
          UDS_SkillData::InitSkillData(pUVar14,iVar15,1);
        }
        pFVar17[1]._padding_ = (longlong)local_res10;
        pUVar6 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_88.Object = pFVar19;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_UserObjectListItem::AddContext(pUVar6,&local_88);
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78.Object = pFVar17;
        local_78.SharedReferenceCount.ReferenceController = pTVar11;
        UDS_UserObjectListItem::AddContext(pUVar6,&local_78);
        local_e8 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        FDS_EntryBindingEventField::Add(local_e0,(TObjectPtr<UDS_UserObjectListItem>)&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar7);
        local_res18 = local_res18 + 4;
        uVar18 = uVar18 + 1;
        iVar15 = local_100;
      } while ((int)uVar18 < local_100);
    }
    local_d0 = FFieldNotificationClassDescriptor::DetailEntryBindField.BitNumber;
    local_d8 = FFieldNotificationClassDescriptor::DetailEntryBindField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
  }
  return;
}

