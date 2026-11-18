// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// SetEventMouseEnterIndexBase_WrapperImpl @ 14b6fbe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WorldMapIndexBase::SetEventMouseEnterIndexBase_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar3;
  UDS_WorldMapManager *pUVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  undefined1 auStackY_1f8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FName FStack_1c8;
  int iStack_1c0;
  undefined1 auStack_1b8 [8];
  FDelegateAllocation FStack_1b0;
  code *pcStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool bStack_188;
  FWeakObjectPtr FStack_178;
  FDestructionSentinel FStack_170;
  FDelegateAllocation *pFStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (*(int *)((longlong)param_1 + 0x3b8) == 0) {
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x300) == 0) {
    return;
  }
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
    pwVar10 = L"windowManager is nullptr";
    uVar9 = 0xfd;
  }
  else {
    pUVar4 = UDS_WorldMapManager::GetInst();
    if (pUVar4 == (UDS_WorldMapManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      TStack_148._padding_ = (longlong)pUVar4;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
      pwVar10 = L"worldMapManager is nullptr";
      uVar9 = 0x104;
    }
    else {
      UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&FStack_178);
      bVar1 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&FStack_178,(void *)0x0);
      if (bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        TStack_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
        pwVar10 = L"windowInfo is nullptr";
        uVar9 = 0x10b;
      }
      else {
        if (*(longlong *)((longlong)param_1 + 0x310) != 0) {
          FStack_1c8 = *(FName *)&(pUVar4->IconSelectedObject).WeakPtr;
          bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&FStack_1c8,(void *)0x0);
          if (!bVar1) {
            return;
          }
          FStack_1c8 = (FName)param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          FWeakObjectPtr::operator=(&(pUVar4->IconSelectedObject).WeakPtr,(FObjectPtr)&FStack_1c8);
          pUVar5 = FWeakObjectPtr::Get(&FStack_178);
          cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
          if (cVar2 == '\0') {
            uStack_190 = 0;
            pcStack_198 = OnOpenIconDetailPopupCallBack;
            auStack_1b8 = (undefined1  [8])0x0;
            FStack_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            FStack_1b0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1b8,
                       (FWriteAccessScope *)&FStack_170);
            pFStack_158 = &FStack_1b0;
            puVar6 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1b0);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = &
                        ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV1___6B_
              ;
              puVar6[1] = *(undefined8 *)param_2;
              uVar7 = FDelegateHandle::GenerateNewID();
              puVar6[2] = uVar7;
              *puVar6 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapIndexBase____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV2___6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(param_1);
              }
              puVar6[3] = 0;
              FStack_1c8 = (FName)param_1;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(param_1);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&FStack_1c8);
              puVar6[4] = pcStack_198;
              puVar6[5] = CONCAT44(uStack_18c,uStack_190);
            }
            if (FStack_170.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_170.Accessor,&FStack_170);
            }
            pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                     TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)&pcStack_198,
                                (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)auStack_1b8);
            UDS_WindowManager::OpenWindow(this,MapTooltip,pTVar8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1b8,
                       (FWriteAccessScope *)&pcStack_198);
            if ((FStack_1b0.DelegateSize != 0) &&
               (FStack_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)FStack_1b0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&FStack_1b0,0,0,0x10);
              FStack_1b0.DelegateSize = 0;
            }
            if (bStack_188 == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                         (FDestructionSentinel *)&pcStack_198);
            }
            if (FStack_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)FStack_1b0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)auStack_1b8);
          }
          UCanvasPanelSlot::SetZOrder(*(UCanvasPanelSlot **)((longlong)param_1 + 0x310),0);
          iStack_1c0 = FFieldNotificationClassDescriptor::UIScale.BitNumber;
          FStack_1c8 = FFieldNotificationClassDescriptor::UIScale.FieldName;
          if ((__real_3ff8000000000000 == *(double *)((longlong)param_1 + 0x2e8)) &&
             (__real_3ff8000000000000 == *(double *)((longlong)param_1 + 0x2f0))) {
            return;
          }
          *(undefined8 *)((longlong)param_1 + 0x2e8) = 0x3ff8000000000000;
          *(undefined8 *)((longlong)param_1 + 0x2f0) = 0x3ff8000000000000;
          (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                    ((longlong)param_1 + 0x28,&FStack_1c8);
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        TStack_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
        pwVar10 = L"CanvasPanel nullptr";
        uVar9 = 0x111;
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_148.Ptr,uVar9,pwVar10);
  if ((UDS_WorldMapManager *)TStack_148._padding_ != (UDS_WorldMapManager *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  return;
}

// SetEventMouseLeaveIndexBase_WrapperImpl @ 14b6fbe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WorldMapIndexBase::SetEventMouseLeaveIndexBase_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  uint uVar2;
  wchar_t *pwVar3;
  float fStack_158;
  uint auStack_154 [3];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)((longlong)param_1 + 0x3b8) == 0) {
    return;
  }
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 == (UDS_WorldMapManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseLeave",0x33,Yes);
      pwVar3 = L"worldMapManager is nullptr";
      uVar2 = 0x13a;
    }
    else {
      if (*(UCanvasPanelSlot **)((longlong)param_1 + 0x310) != (UCanvasPanelSlot *)0x0) {
        UCanvasPanelSlot::SetZOrder
                  (*(UCanvasPanelSlot **)((longlong)param_1 + 0x310),
                   *(int *)((longlong)param_1 + 0x3a0));
        fStack_158 = 0.0;
        auStack_154[0] = 0;
        UDS_WindowManager::CloseWindow(this,MapTooltip,auStack_154,&fStack_158);
        UDS_WorldMapManager::RemoveSelectedObj(this_00);
        iStack_140 = FFieldNotificationClassDescriptor::UIScale.BitNumber;
        FStack_148 = FFieldNotificationClassDescriptor::UIScale.FieldName;
        if ((__real_3ff0000000000000 == *(double *)((longlong)param_1 + 0x2e8)) &&
           (__real_3ff0000000000000 == *(double *)((longlong)param_1 + 0x2f0))) {
          return;
        }
        *(undefined8 *)((longlong)param_1 + 0x2e8) = 0x3ff0000000000000;
        *(undefined8 *)((longlong)param_1 + 0x2f0) = 0x3ff0000000000000;
        (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                  ((longlong)param_1 + 0x28,&FStack_148);
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseLeave",0x33,Yes);
      pwVar3 = L"CanvasPanel nullptr";
      uVar2 = 0x140;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,uVar2,pwVar3);
    if ((UDS_WorldMapManager *)TStack_138._padding_ != (UDS_WorldMapManager *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
    return;
  }
  return;
}

// SetDefaultButtonEvent_WrapperImpl @ 14b6fbea0

void __cdecl
UDS_VM_WorldMapIndexBase::SetDefaultButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<UE::Math::TVector2<double>_const_&> *this;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_WorldMapEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel FStack_38;
  
  if ((*(char *)((longlong)param_1 + 0x3c9) == '\x01') &&
     (pUVar9 = UDS_WorldMapEvent::GetEvent(), pUVar9 != (UDS_WorldMapEvent *)0x0)) {
    this = &pUVar9->IconClickMapFocusDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_38);
      puVar1 = &(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
      }
      if (FStack_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
      }
    }
  }
  return;
}

// StaticClass @ 14b6fbeb0

UClass * __cdecl UDS_VM_WorldMapIndexBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapIndexBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapIndexBase",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapIndexBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapIndexBase,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMapIndexBase>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapIndexBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapIndexBase.InnerSingleton;
}

// UDS_VM_WorldMapIndexBase @ 14b701ae0

UDS_VM_WorldMapIndexBase * __thiscall
UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase
          (UDS_VM_WorldMapIndexBase *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MapIndexZoomStep).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapIndexBase__6B_;
  (this->MapIndexZoomStep).ArrayNum = 0;
  (this->MapIndexZoomStep).ArrayMax = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnterIndexBase);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeaveIndexBase);
  (this->DefaultButtonEvent)._padding_ = '\0';
  (this->DefaultButtonEvent).bIsCustomSelected = false;
  (this->DefaultButtonEvent).bIsLacked = false;
  (this->DefaultButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DefaultButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->DefaultButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DefaultButtonEvent).Delegate.field_0x10 = 0;
  this->UiVisisbility = Collapsed;
  this->SwitchIndex = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsShowHeightVisible = false;
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  (this->UIScale).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->WorldMapIconToolTipContext).Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
  (this->WorldMapIconToolTipContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SpawnGlobalPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferenceGlobalPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FirstPanelTranslation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CurPanelTranslation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CurScale = 0.0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 1024.0;
  (this->MapOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->HeightUICheck_TimerHandler).Handle = 0;
  this->ParentPanelScale = 1.0;
  this->HeightValue = 0.0;
  this->OffsetDistance = 0.0;
  this->ZOrder = 0;
  this->MapIndexGroupID = 0;
  this->MapIndexBaseID = 0;
  this->RangeOverListKey = 0;
  this->MapType = 0;
  this->CurSelectedIndexFilter = 0;
  this->AlwaysVisibleValue = 9999;
  this->IsFilterActivate = true;
  this->IsShownEvenOutOfRange = false;
  this->IsRangeOverSpawn = false;
  this->IsZoomStepActivate = false;
  this->IsShowHeight = false;
  this->IsPanToLocationEnabled = false;
  return this;
}

// UDS_VM_WorldMapIndexBase @ 14b701c70

UDS_VM_WorldMapIndexBase * __thiscall
UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase
          (UDS_VM_WorldMapIndexBase *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MapIndexZoomStep).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapIndexBase__6B_;
  (this->MapIndexZoomStep).ArrayNum = 0;
  (this->MapIndexZoomStep).ArrayMax = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnterIndexBase);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeaveIndexBase);
  (this->DefaultButtonEvent)._padding_ = '\0';
  (this->DefaultButtonEvent).bIsCustomSelected = false;
  (this->DefaultButtonEvent).bIsLacked = false;
  (this->DefaultButtonEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DefaultButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->DefaultButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DefaultButtonEvent).Delegate.field_0x10 = 0;
  this->UiVisisbility = Collapsed;
  this->SwitchIndex = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsShowHeightVisible = false;
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  (this->UIScale).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->WorldMapIconToolTipContext).Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
  (this->WorldMapIconToolTipContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SpawnGlobalPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferenceGlobalPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FirstPanelTranslation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CurPanelTranslation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CurScale = 0.0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 1024.0;
  (this->MapOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->HeightUICheck_TimerHandler).Handle = 0;
  this->ParentPanelScale = 1.0;
  this->HeightValue = 0.0;
  this->OffsetDistance = 0.0;
  this->ZOrder = 0;
  this->MapIndexGroupID = 0;
  this->MapIndexBaseID = 0;
  this->RangeOverListKey = 0;
  this->MapType = 0;
  this->CurSelectedIndexFilter = 0;
  this->AlwaysVisibleValue = 9999;
  this->IsFilterActivate = true;
  this->IsShownEvenOutOfRange = false;
  this->IsRangeOverSpawn = false;
  this->IsZoomStepActivate = false;
  this->IsShowHeight = false;
  this->IsPanToLocationEnabled = false;
  return this;
}

// ~UDS_VM_WorldMapIndexBase @ 14b7034e0

void __thiscall UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase(UDS_VM_WorldMapIndexBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapIndexBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WorldMapIconToolTipContext).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultButtonEvent).Delegate);
  pvVar1 = *(void **)&(this->DefaultButtonEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DefaultButtonEvent).Delegate);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeaveIndexBase).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeaveIndexBase).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnterIndexBase).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnterIndexBase).PointerEvent);
  pFVar2 = (this->MapIndexZoomStep).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7061c0

IClassDescriptor * __thiscall
UDS_VM_WorldMapIndexBase::GetFieldNotificationDescriptor(UDS_VM_WorldMapIndexBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMapIndexBase::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b707010

UClass * __cdecl UDS_VM_WorldMapIndexBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapIndexBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapIndexBase",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapIndexBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapIndexBase,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMapIndexBase>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapIndexBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapIndexBase.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMapIndexBase @ 14b707740

void __cdecl UDS_VM_WorldMapIndexBase::StaticRegisterNativesUDS_VM_WorldMapIndexBase(void)

{
  return;
}

// BindModel @ 14c0044f0

void __thiscall UDS_VM_WorldMapIndexBase::BindModel(UDS_VM_WorldMapIndexBase *this)

{
  int iVar1;
  UDS_WorldMapEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  longlong local_res10 [2];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMapIndexBase>(&pUVar2->ChangedPanelTranslationDelegate,this);
    FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::
    Remove<UDS_VM_WorldMapIndexBase>(&pUVar2->ZoomStepChangeDelegate,this);
    FDS_FilteredEventDelegate<int_const_,int>::Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar2->CurIndexFilterDelegate,this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       (&(pUVar2->ZoomStepChangeDelegate).Subscriptions,this->MapType,&this->MapType
                       );
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMapIndexBase>
              (pTVar3,(UDS_VM_WorldMapIndexBase *)local_res10,(pmf_2be85d3a *)this);
    iVar1 = this->MapType;
    local_res10[0] = (longlong)iVar1;
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<__int64_const_&>
                       ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->ChangedPanelTranslationDelegate).Subscriptions,
                        (iVar1 >> 0x1f) * 0x17 + iVar1,local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMapIndexBase>
              ((TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar3,(UDS_VM_WorldMapIndexBase *)(local_res10 + 1),(pmf_133194e0 *)this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->CurIndexFilterDelegate).Subscriptions,this->MapType,
                        &this->MapType);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapIndexBase>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               pTVar3,(UDS_VM_WorldMapIndexBase *)local_res10,(pmf_d3e6ac12 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexIconVisibilityDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapIndexBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexIconVisibilityDelegate,(UDS_VM_WorldMapIndexBase *)local_res10,
               (pmf_11e4fb90 *)this);
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_WorldMapIndexBase>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_WorldMapIndexBase *)local_res10,(pmf_e6ca37e6 *)this);
  return;
}

// BroadCastRangeOverIconPosition @ 14c004e90

void __thiscall
UDS_VM_WorldMapIndexBase::BroadCastRangeOverIconPosition
          (UDS_VM_WorldMapIndexBase *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UDS_WorldMapEvent *pUVar5;
  TVector2<double> *pTVar6;
  double dVar7;
  TVector2<double>_u_0 local_58 [5];
  
  if ((this->IsRangeOverSpawn != false) &&
     (pUVar5 = UDS_WorldMapEvent::GetEvent(), pUVar5 != (UDS_WorldMapEvent *)0x0)) {
    pTVar6 = FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                       (&pUVar5->WorldMapPanelSizeQueryDelegate,
                        (TVector2<double> *)&local_58[0]._s_0);
    dVar7 = (param_2->field0_0x0)._s_0.X;
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (double)(float)((pTVar6->field0_0x0)._s_0.X * __real_3fe0000000000000);
    dVar3 = (double)(float)((pTVar6->field0_0x0)._s_0.Y * __real_3fe0000000000000);
    local_58[0]._0_8_ =
         (undefined8)((float)((dVar7 - dVar4) - __real_4059000000000000) + __real_43480000);
    if (((double)local_58[0]._0_8_ < dVar1) &&
       (local_58[0]._0_8_ =
             (undefined8)((float)(dVar7 + dVar4 + __real_4059000000000000) - __real_43480000),
       dVar1 < (double)local_58[0]._0_8_)) {
      local_58[0]._0_8_ = dVar1;
    }
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    local_58[0]._8_8_ =
         (undefined8)((float)((dVar2 - dVar3) - __real_4059000000000000) + __real_43480000);
    if (((double)local_58[0]._8_8_ < dVar7) &&
       (local_58[0]._8_8_ =
             (undefined8)((float)(dVar2 + dVar3 + __real_4059000000000000) - __real_43480000),
       dVar7 < (double)local_58[0]._8_8_)) {
      local_58[0]._8_8_ = dVar7;
    }
    dVar7 = FGenericPlatformMath::Atan2
                      ((double)local_58[0]._0_8_ - (param_1->field0_0x0)._s_0.X,
                       (double)local_58[0]._8_8_ - (param_1->field0_0x0)._s_0.Y);
    FDS_FilteredEventDelegate<__int64_const_,float_const_,UE::Math::TVector2<double>_const_>::
    Broadcast(&pUVar5->UpdateRangeOverIconPositionDelegate,&this->RangeOverListKey,
              (float)dVar7 * __real_c2652ee0,(TVector2<double> *)&local_58[0]._s_0);
  }
  return;
}

// CalCulateDistanceVectors @ 14c005d80

void __thiscall
UDS_VM_WorldMapIndexBase::CalCulateDistanceVectors
          (UDS_VM_WorldMapIndexBase *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = this->TextureSize;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (double)(param_1 / this->ParentPanelScale);
  dVar6 = __real_3ff0000000000000 / (double)this->OrthoWidth;
  dVar3 = (this->SpawnGlobalPosition).field0_0x0._s_0.Y;
  dVar4 = (this->MapStartPos).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X =
       ((param_2->field0_0x0)._s_0.X -
       ((this->SpawnGlobalPosition).field0_0x0._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) *
       dVar6 * (double)fVar1) * dVar5;
  (param_3->field0_0x0)._s_0.Y = (dVar2 - (dVar3 - dVar4) * dVar6 * (double)fVar1) * dVar5;
  dVar2 = (this->FirstPanelTranslation).field0_0x0._s_0.Y;
  dVar3 = (this->CurPanelTranslation).field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X =
       (this->FirstPanelTranslation).field0_0x0._s_0.X -
       (this->CurPanelTranslation).field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar2 - dVar3;
  return;
}

// CheckRangeOverIcon @ 14c0065c0

void __thiscall
UDS_VM_WorldMapIndexBase::CheckRangeOverIcon
          (UDS_VM_WorldMapIndexBase *this,TVector2<double> *param_1)

{
  undefined8 uVar1;
  UDS_WorldMapEvent *pUVar2;
  UDS_WorldMapManager *this_00;
  TVector2<double> *pTVar3;
  long64 lVar4;
  uint uVar5;
  uint uVar6;
  TVector2<double> local_28 [2];
  
  if ((((this->IsShownEvenOutOfRange != false) && (this->MapType != 0)) &&
      (pUVar2 = UDS_WorldMapEvent::GetEvent(), pUVar2 != (UDS_WorldMapEvent *)0x0)) &&
     (this_00 = UDS_WorldMapManager::GetInst(), this_00 != (UDS_WorldMapManager *)0x0)) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar6 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    pTVar3 = FDS_QueryDelegate<UE::Math::TVector2<double>_>::Query
                       (&pUVar2->WorldMapPanelSizeQueryDelegate,local_28);
    if (((double)((float)((pTVar3->field0_0x0)._s_0.X * __real_3fe0000000000000) + __real_42c80000)
         < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&param_1->field0_0x0 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       ((double)((float)((pTVar3->field0_0x0)._s_0.Y * __real_3fe0000000000000) + __real_42c80000) <
        (double)CONCAT44(uVar6,uVar5))) {
      lVar4 = UDS_WorldMapManager::AddRangeOverIconArray
                        (this_00,this->RangeOverListKey,this->MapIndexBaseID);
      if (lVar4 != 0) {
        this->RangeOverListKey = lVar4;
        this->IsRangeOverSpawn = true;
      }
    }
    else if (this->RangeOverListKey != 0) {
      UDS_WorldMapManager::RemoveRangeOverIconArray(this_00,this->RangeOverListKey);
      this->IsRangeOverSpawn = false;
    }
  }
  return;
}

// GetAngle @ 14c01a420

float __thiscall
UDS_VM_WorldMapIndexBase::GetAngle
          (UDS_VM_WorldMapIndexBase *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Atan2
                    ((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X,
                     (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y);
  return (float)dVar1 * __real_c2652ee0;
}

// InitViewModel @ 14c020430

void __thiscall UDS_VM_WorldMapIndexBase::InitViewModel(UDS_VM_WorldMapIndexBase *this)

{
  return;
}

// OnChangedPanelTranslation @ 14c025a20

void __thiscall
UDS_VM_WorldMapIndexBase::OnChangedPanelTranslation
          (UDS_VM_WorldMapIndexBase *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->FirstPanelTranslation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->FirstPanelTranslation).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->CurPanelTranslation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->CurPanelTranslation).field0_0x0._s_0.Y = dVar1;
  return;
}

// OnCloseInit @ 14c028940

void __thiscall UDS_VM_WorldMapIndexBase::OnCloseInit(UDS_VM_WorldMapIndexBase *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnCurSelectedIndexFilter @ 14c028e40

void __thiscall
UDS_VM_WorldMapIndexBase::OnCurSelectedIndexFilter(UDS_VM_WorldMapIndexBase *this,int param_1)

{
  this->CurSelectedIndexFilter = param_1;
  UpdateUIVisibility(this,param_1);
  return;
}

// OnDefaultButtonEvent @ 14c028ed0

void __thiscall
UDS_VM_WorldMapIndexBase::OnDefaultButtonEvent
          (UDS_VM_WorldMapIndexBase *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<UE::Math::TVector2<double>_const_&> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_WorldMapEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  if ((this->IsPanToLocationEnabled == true) &&
     (pUVar9 = UDS_WorldMapEvent::GetEvent(), pUVar9 != (UDS_WorldMapEvent *)0x0)) {
    this_00 = &pUVar9->IconClickMapFocusDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->IconClickMapFocusDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// OnIconBaseEventMouseEnter @ 14c02a960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter
          (UDS_VM_WorldMapIndexBase *this,FDS_WidgetPointerEventField *param_1)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_WorldMapManager *pUVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  undefined1 auStackY_1f8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FName local_1c8;
  int local_1c0;
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  FWeakObjectPtr local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (this->MapType == 0) {
    return;
  }
  if ((this->WorldMapIconToolTipContext).Object == (FDS_ViewModelConext_WorldMapIconToolTip *)0x0) {
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
    pwVar10 = L"windowManager is nullptr";
    uVar9 = 0xfd;
  }
  else {
    pUVar4 = UDS_WorldMapManager::GetInst();
    if (pUVar4 == (UDS_WorldMapManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pUVar4;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
      pwVar10 = L"worldMapManager is nullptr";
      uVar9 = 0x104;
    }
    else {
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_178);
      bVar1 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_178,(void *)0x0);
      if (bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
        pwVar10 = L"windowInfo is nullptr";
        uVar9 = 0x10b;
      }
      else {
        if (this->CanvasPanel != (UCanvasPanelSlot *)0x0) {
          local_1c8 = *(FName *)&(pUVar4->IconSelectedObject).WeakPtr;
          bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_1c8,(void *)0x0);
          if (!bVar1) {
            return;
          }
          local_1c8 = (FName)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&(pUVar4->IconSelectedObject).WeakPtr,(FObjectPtr)&local_1c8);
          pUVar5 = FWeakObjectPtr::Get(&local_178);
          cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
          if (cVar2 == '\0') {
            uStack_190 = 0;
            local_198 = OnOpenIconDetailPopupCallBack;
            local_1b8 = (undefined1  [8])0x0;
            local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_1b0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                       (FWriteAccessScope *)&local_170);
            local_158 = &local_1b0;
            puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = &
                        ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV1___6B_
              ;
              puVar6[1] = param_1->TargetWidget;
              uVar7 = FDelegateHandle::GenerateNewID();
              puVar6[2] = uVar7;
              *puVar6 = &
                        ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapIndexBase____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV2___6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar6[3] = 0;
              local_1c8 = (FName)this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1c8);
              puVar6[4] = local_198;
              puVar6[5] = CONCAT44(uStack_18c,uStack_190);
            }
            if (local_170.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
            }
            pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                     TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)&local_198,
                                (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)local_1b8);
            UDS_WindowManager::OpenWindow(this_00,MapTooltip,pTVar8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                       (FWriteAccessScope *)&local_198);
            if ((local_1b0.DelegateSize != 0) &&
               (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_1b0,0,0,0x10);
              local_1b0.DelegateSize = 0;
            }
            if (local_188 == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                         (FDestructionSentinel *)&local_198);
            }
            if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_1b0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_1b8);
          }
          UCanvasPanelSlot::SetZOrder(this->CanvasPanel,0);
          local_1c0 = FFieldNotificationClassDescriptor::UIScale.BitNumber;
          local_1c8 = FFieldNotificationClassDescriptor::UIScale.FieldName;
          if ((__real_3ff8000000000000 == (this->UIScale).field0_0x0._s_0.X) &&
             (__real_3ff8000000000000 == (this->UIScale).field0_0x0._s_0.Y)) {
            return;
          }
          (this->UIScale).field0_0x0._s_0.X = 1.5;
          (this->UIScale).field0_0x0._s_0.Y = 1.5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseEnter",0x33,Yes);
        pwVar10 = L"CanvasPanel nullptr";
        uVar9 = 0x111;
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar9,pwVar10);
  if ((UDS_WorldMapManager *)local_148._padding_ != (UDS_WorldMapManager *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnIconBaseEventMouseLeave @ 14c02adf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseLeave
          (UDS_VM_WorldMapIndexBase *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_WorldMapManager *this_01;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  uint uVar2;
  wchar_t *pwVar3;
  float local_158;
  uint local_154 [3];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->MapType == 0) {
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    this_01 = UDS_WorldMapManager::GetInst();
    if (this_01 == (UDS_WorldMapManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_01;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseLeave",0x33,Yes);
      pwVar3 = L"worldMapManager is nullptr";
      uVar2 = 0x13a;
    }
    else {
      if (this->CanvasPanel != (UCanvasPanelSlot *)0x0) {
        UCanvasPanelSlot::SetZOrder(this->CanvasPanel,this->ZOrder);
        local_158 = 0.0;
        local_154[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,MapTooltip,local_154,&local_158);
        UDS_WorldMapManager::RemoveSelectedObj(this_01);
        local_140 = FFieldNotificationClassDescriptor::UIScale.BitNumber;
        local_148 = FFieldNotificationClassDescriptor::UIScale.FieldName;
        if ((__real_3ff0000000000000 == (this->UIScale).field0_0x0._s_0.X) &&
           (__real_3ff0000000000000 == (this->UIScale).field0_0x0._s_0.Y)) {
          return;
        }
        (this->UIScale).field0_0x0._s_0.X = 1.0;
        (this->UIScale).field0_0x0._s_0.Y = 1.0;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapIndexBase::OnIconBaseEventMouseLeave",0x33,Yes);
      pwVar3 = L"CanvasPanel nullptr";
      uVar2 = 0x140;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
    if ((UDS_WorldMapManager *)local_138._padding_ != (UDS_WorldMapManager *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    return;
  }
  return;
}

// OnMainCharChanged @ 14c02c940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapIndexBase::OnMainCharChanged
          (UDS_VM_WorldMapIndexBase *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr local_res20;
  undefined1 local_18 [16];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_18);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
  }
  return;
}

// OnOpenIconDetailPopupCallBack @ 14c02d510

void __thiscall
UDS_VM_WorldMapIndexBase::OnOpenIconDetailPopupCallBack
          (UDS_VM_WorldMapIndexBase *this,UDS_UserWidget *param_1,UDS_UserWidget *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FWeakObjectPtr local_res10 [2];
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if ((param_1 != (UDS_UserWidget *)0x0) && (param_2 != (UDS_UserWidget *)0x0)) {
    local_78.Object = (FDS_ViewModelContext *)OnOpenIconDetailPopupResize;
    local_78.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar1 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUDS_UserWidget__PEAV2___6B_
      ;
      puVar1[1] = param_1;
      puVar1[2] = param_2;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[3] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapIndexBase____A6AXXZUFDefaultDelegateUserPolicy__PEAVUDS_UserWidget__PEAV3___6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMapIndexBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[4] = 0;
      local_res10[0] = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMapIndexBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 4),(FObjectPtr)local_res10);
      puVar1[5] = local_78.Object;
      puVar1[6] = local_78.SharedReferenceCount.ReferenceController;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_UserWidget::SetDelegateResize
              (param_1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
    local_78.Object = (FDS_ViewModelContext *)(this->WorldMapIconToolTipContext).Object;
    if ((FDS_ViewModelConext_WorldMapIconToolTip *)local_78.Object !=
        (FDS_ViewModelConext_WorldMapIconToolTip *)0x0) {
      local_78.SharedReferenceCount.ReferenceController =
           (this->WorldMapIconToolTipContext).SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10[0].ObjectIndex = 0;
      local_res10[0].ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10[0],&local_78,false);
    }
  }
  return;
}

// OnOpenIconDetailPopupResize @ 14c02d6b0

void __thiscall
UDS_VM_WorldMapIndexBase::OnOpenIconDetailPopupResize
          (UDS_VM_WorldMapIndexBase *this,UDS_UserWidget *param_1,UDS_UserWidget *param_2)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_28 [2];
  TVector2<double>_u_0 local_18;
  
  if ((param_1 != (UDS_UserWidget *)0x0) && (param_2 != (UDS_UserWidget *)0x0)) {
    local_18 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_28[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_28);
    FVar1 = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_28[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
    DS_Util::TransformTooltipPosition
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,
               (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FVar1,
               (TVector2<double> *)&local_18._s_0,None);
  }
  return;
}

// OnSetViewModel @ 14c037760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapIndexBase::OnSetViewModel
          (UDS_VM_WorldMapIndexBase *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  FName FVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UObject *pUVar7;
  FWeakObjectPtr *pFVar8;
  UDS_WorldMapEvent *pUVar9;
  FDS_MapIndexBaseTableRow *pFVar10;
  UDS_LogManager *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  TSharedPtr<FDS_ViewModelContext_IconInfo,1> local_1d0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  undefined1 local_188 [8];
  FReadAccessScope local_180;
  FReadAccessScope local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_IconInfo>(&local_1d0,&local_198);
  if (local_1d0.Object == (FDS_ViewModelContext_IconInfo *)0x0) goto LAB_14c037ab1;
  ADS_MainCharacter::GetMainPlayer();
  bVar4 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
  if (!bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&local_1d8);
    pFVar8 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar7[0x29].field_0x10 + 0x78))
                       (&pUVar7[0x29].field_0x10,local_188);
    (this->OwnerMovementCore).WeakPtr = *pFVar8;
  }
  iVar6 = (local_1d0.Object)->MapType;
  this->MapType = iVar6;
  this->MapIndexGroupID = (local_1d0.Object)->MapIndexGroupID;
  this->MapIndexBaseID = (local_1d0.Object)->MapIndexBaseID;
  this->IsShowHeight = (local_1d0.Object)->IsShowHeight;
  dVar2 = ((local_1d0.Object)->SpawnGlobalPosition).field0_0x0._s_0.Y;
  (this->SpawnGlobalPosition).field0_0x0._s_0.X =
       ((local_1d0.Object)->SpawnGlobalPosition).field0_0x0._s_0.X;
  (this->SpawnGlobalPosition).field0_0x0._s_0.Y = dVar2;
  this->HeightValue = (local_1d0.Object)->HeightValue;
  this->CurScale = (local_1d0.Object)->Scale;
  this->OrthoWidth = (local_1d0.Object)->OrthoWidth;
  this->IsRangeOverSpawn = false;
  this->ZOrder = (local_1d0.Object)->ZOrder;
  if (iVar6 == 1) {
    pUVar9 = UDS_WorldMapEvent::GetEvent();
    if (pUVar9 != (UDS_WorldMapEvent *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar9->CurIndexFilterQueryDelegate,&local_180);
      if ((*(int *)&(pUVar9->CurIndexFilterQueryDelegate).Delegate.field_0x10 != 0) &&
         (plVar12 = *(longlong **)&(pUVar9->CurIndexFilterQueryDelegate).Delegate.field_0x8,
         plVar12 != (longlong *)0x0)) {
        cVar5 = (**(code **)(*plVar12 + 0x38))();
        if (cVar5 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_180);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pUVar9->CurIndexFilterQueryDelegate,&local_168);
          if (*(int *)&(pUVar9->CurIndexFilterQueryDelegate).Delegate.field_0x10 == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)&(pUVar9->CurIndexFilterQueryDelegate).Delegate.field_0x8;
          }
          iVar6 = (**(code **)(*plVar12 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_168);
          this->CurSelectedIndexFilter = iVar6;
          goto LAB_14c037916;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_180);
      this->CurSelectedIndexFilter = 0;
      iVar6 = 0;
      goto LAB_14c037916;
    }
  }
  else {
    this->CurSelectedIndexFilter = 1;
    iVar6 = 1;
LAB_14c037916:
    UpdateUIVisibility(this,iVar6);
  }
  pFVar10 = FDS_MapIndexBaseTableRow::Get((longlong)this->MapIndexBaseID,true);
  if (pFVar10 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMapIndexBase::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_148.Ptr,0x6f,L"mapIndexBaseTableRow nullptr")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this->IsPanToLocationEnabled = pFVar10->isPanToLocationEnabled;
    this->IsShownEvenOutOfRange = pFVar10->isShownEvenOutOfRange;
    iVar6 = DS_CommonDataHelper::MapIndexHeightDisplayRange();
    this->OffsetDistance = (float)iVar6;
    UpdateHeightUIByCharacterHeight(this);
    SetTimerFunc(this);
    if (this->MapType != 0) {
      SetIsZoomStepActivate(this,LEVEL3);
      UpdateUIVisibility(this,this->CurSelectedIndexFilter);
    }
    FVar3 = FFieldNotificationClassDescriptor::IsShowHeightVisible.FieldName;
    if (this->IsShowHeightVisible != this->IsShowHeight) {
      local_1b0 = FFieldNotificationClassDescriptor::IsShowHeightVisible.BitNumber;
      this->IsShowHeightVisible = this->IsShowHeight;
      local_1b8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    }
    iVar6 = FFieldNotificationClassDescriptor::UIScale.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::UIScale.FieldName;
    if ((__real_3ff0000000000000 != (this->UIScale).field0_0x0._s_0.X) ||
       (__real_3ff0000000000000 != (this->UIScale).field0_0x0._s_0.Y)) {
      (this->UIScale).field0_0x0._s_0.X = 1.0;
      (this->UIScale).field0_0x0._s_0.Y = 1.0;
      local_1a0 = iVar6;
      local_1a8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    }
  }
LAB_14c037ab1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSetVisiblitlyToMapZoomStep @ 14c039870

void __thiscall
UDS_VM_WorldMapIndexBase::OnSetVisiblitlyToMapZoomStep
          (UDS_VM_WorldMapIndexBase *this,EDS_WorldMapZoomStep param_1)

{
  if (this->MapType != 0) {
    SetIsZoomStepActivate(this,param_1);
    UpdateUIVisibility(this,this->CurSelectedIndexFilter);
    return;
  }
  return;
}

// OnUpdateVisibility @ 14c03b810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapIndexBase::OnUpdateVisibility(UDS_VM_WorldMapIndexBase *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WorldMapLocalSave *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_WorldMapLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    this_00 = (UDS_WorldMapLocalSave *)FWeakObjectPtr::Get(local_148);
    bVar1 = UDS_WorldMapLocalSave::GetMapIndexGroupChecked(this_00,this->MapIndexGroupID);
    this->IsFilterActivate = bVar1;
    UpdateUIVisibility(this,this->CurSelectedIndexFilter);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapIndexBase::OnUpdateVisibility",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x85,L"localSave IsValid = false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// SetIsZoomStepActivate @ 14c0419d0

void __thiscall
UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate
          (UDS_VM_WorldMapIndexBase *this,EDS_WorldMapZoomStep param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this->IsZoomStepActivate = false;
  pFVar3 = (this->MapIndexZoomStep).AllocatorInstance.Data;
  iVar2 = (this->MapIndexZoomStep).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->MapIndexZoomStep).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(EDS_WorldMapZoomStep *)pFVar3 == param_1) {
      this->IsZoomStepActivate = true;
      return;
    }
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// SetTimerFunc @ 14c043bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapIndexBase::SetTimerFunc(UDS_VM_WorldMapIndexBase *this)

{
  FTimerHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  FDelegateAllocation local_90;
  UDS_VM_WorldMapIndexBase *local_80;
  undefined1 local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  int local_60;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (this->IsShowHeight != true) {
    return;
  }
  pFVar1 = &this->HeightUICheck_TimerHandler;
  if (pFVar1->Handle != 0) {
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(pFVar4,pFVar1);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar4,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  iStack_a0 = 0;
  local_a8.Data = (FScriptContainerElement *)UpdateHeightUIByCharacterHeight;
  uStack_9c = local_70._4_4_;
  local_78 = 0;
  local_70 = &local_90;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_90);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapIndexBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_80 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_80);
    puVar6[4] = local_a8.Data;
    puVar6[5] = CONCAT44(uStack_9c,iStack_a0);
  }
  pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
  local_68 = (FScriptContainerElement *)0x0;
  iStack_a0 = 0;
  local_60 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  FVar8.Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_90.DelegateAllocator + 0x48))
              (local_90.DelegateAllocator,&local_a8);
    FVar8.Data = local_a8.Data;
    iVar10 = iStack_a0;
  }
  iStack_a0 = 0;
  local_97 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_96 = 0;
  if (local_60 == 0) {
LAB_14c043d77:
    if (local_68 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_14c043d77;
  }
  local_95 = 0;
  local_68 = FVar8.Data;
  local_60 = iVar10;
  if (iStack_a0 == 0) {
LAB_14c043dc9:
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  else if (local_a8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,0x10);
    iStack_a0 = 0;
    goto LAB_14c043dc9;
  }
  local_38 = 1;
  FTimerManager::InternalSetTimer
            (pFVar4,pFVar1,(FTimerUnifiedDelegate *)&local_68,__real_3f800000,true,__real_bf800000);
  uVar9 = (ulonglong)local_38;
  if ((3 < local_38) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_60 != 0) {
      if (local_68 == (FScriptContainerElement *)0x0) goto LAB_14c043e9b;
      (*(code *)**(undefined8 **)local_68)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_68 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_68);
  }
LAB_14c043e9b:
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  return;
}

// SetUiVisisbility @ 14c045320

void __thiscall
UDS_VM_WorldMapIndexBase::SetUiVisisbility(UDS_VM_WorldMapIndexBase *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::UiVisisbility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UiVisisbility.FieldName;
  if (this->UiVisisbility != param_1) {
    this->UiVisisbility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c0492a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapIndexBase::UnbindModel(UDS_VM_WorldMapIndexBase *this)

{
  UDS_WorldMapEvent *pUVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMapIndexBase>(&pUVar1->ChangedPanelTranslationDelegate,this);
    FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::
    Remove<UDS_VM_WorldMapIndexBase>(&pUVar1->ZoomStepChangeDelegate,this);
    FDS_FilteredEventDelegate<int_const_,int>::Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar1->CurIndexFilterDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->MapIndexIconVisibilityDelegate,this);
  }
  if ((this->HeightUICheck_TimerHandler).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->HeightUICheck_TimerHandler);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->HeightUICheck_TimerHandler).Handle);
    }
    (this->HeightUICheck_TimerHandler).Handle = 0;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// UpdateHeightUIByCharacterHeight @ 14c04a7c0

void __thiscall
UDS_VM_WorldMapIndexBase::UpdateHeightUIByCharacterHeight(UDS_VM_WorldMapIndexBase *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar4;
  float fVar5;
  float fVar6;
  TVector<double>_u_0 local_28;
  
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (!bVar3) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar4 = UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_28._s_0);
    local_28._8_4_ = FFieldNotificationClassDescriptor::IsShowHeightVisible.BitNumber;
    local_28._s_0.X = (double)FFieldNotificationClassDescriptor::IsShowHeightVisible.FieldName;
    if (this->IsShowHeight == true) {
      fVar6 = (float)(pTVar4->field0_0x0)._s_0.Z - this->HeightValue;
      fVar5 = (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      bVar3 = fVar5 != this->OffsetDistance;
      bVar1 = this->OffsetDistance <= fVar5;
      bVar2 = bVar1 && bVar3;
      if (bVar1 && bVar3) {
        this->SwitchIndex = (uint)(0.0 < fVar6);
        local_28._8_4_ = FFieldNotificationClassDescriptor::SwitchIndex.BitNumber;
        local_28._s_0.X = (double)FFieldNotificationClassDescriptor::SwitchIndex.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      local_28._8_4_ = FFieldNotificationClassDescriptor::IsShowHeightVisible.BitNumber;
      local_28._s_0.X = (double)FFieldNotificationClassDescriptor::IsShowHeightVisible.FieldName;
      if (this->IsShowHeightVisible != bVar2) {
        this->IsShowHeightVisible = bVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
    }
    else if (this->IsShowHeightVisible != false) {
      this->IsShowHeightVisible = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      return;
    }
  }
  return;
}

// UpdateUIVisibility @ 14c04f2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapIndexBase::UpdateUIVisibility(UDS_VM_WorldMapIndexBase *this,int param_1)

{
  FDS_MapIndexGroupTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = FDS_MapIndexGroupTableRow::Get((longlong)this->MapIndexGroupID,true);
  local_140 = FFieldNotificationClassDescriptor::UiVisisbility.BitNumber;
  local_148 = FFieldNotificationClassDescriptor::UiVisisbility.FieldName;
  if (pFVar1 == (FDS_MapIndexGroupTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldMapIndexBase::UpdateUIVisibility",0x2c,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x17a,L"mapIndexGroupTableRow is nullptr");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  if (this->IsFilterActivate == true) {
    if (((param_1 == 1) || ((uint)pFVar1->MapIndexCategoryType == param_1)) &&
       (this->IsZoomStepActivate == true)) {
      if (this->UiVisisbility == SelfHitTestInvisible) {
        return;
      }
      this->UiVisisbility = SelfHitTestInvisible;
      goto LAB_14c04f410;
    }
  }
  else if ((pFVar1->IsFilterable == false) && (this->IsZoomStepActivate == true)) {
    if (this->UiVisisbility == SelfHitTestInvisible) {
      return;
    }
    this->UiVisisbility = SelfHitTestInvisible;
    goto LAB_14c04f410;
  }
  if (this->UiVisisbility == Collapsed) {
    return;
  }
  this->UiVisisbility = Collapsed;
LAB_14c04f410:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  return;
}

