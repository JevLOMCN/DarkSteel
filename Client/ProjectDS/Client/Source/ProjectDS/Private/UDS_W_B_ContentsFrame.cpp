// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b7693f0

UClass * __cdecl UDS_W_B_ContentsFrame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_B_ContentsFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_B_ContentsFrame",
               &Z_Registration_Info_UClass_UDS_W_B_ContentsFrame.InnerSingleton,
               StaticRegisterNativesUDS_W_B_ContentsFrame,0x900,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_B_ContentsFrame>,
               InternalVTableHelperCtorCaller<UDS_W_B_ContentsFrame>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_B_ContentsFrame.InnerSingleton;
}

// UDS_W_B_ContentsFrame @ 14b76d370

UDS_W_B_ContentsFrame * __thiscall
UDS_W_B_ContentsFrame::UDS_W_B_ContentsFrame(UDS_W_B_ContentsFrame *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->DefaultAnchorData).Offsets.Left = 0.0;
  (this->DefaultAnchorData).Offsets.Top = 0.0;
  (this->DefaultAnchorData).Offsets.Right = 0.0;
  (this->DefaultAnchorData).Offsets.Bottom = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined8 *)&this->OnContentFrameDestructEvent = 0;
  *(undefined8 *)&(this->OnContentFrameDestructEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnContentFrameDestructEvent).field_0x10 = 0;
  (this->FocusedWidget).Object = (SWidget *)0x0;
  (this->FocusedWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ChangedFocus = false;
  return this;
}

// UDS_W_B_ContentsFrame @ 14b76d420

UDS_W_B_ContentsFrame * __thiscall
UDS_W_B_ContentsFrame::UDS_W_B_ContentsFrame
          (UDS_W_B_ContentsFrame *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->DefaultAnchorData).Offsets.Left = 0.0;
  (this->DefaultAnchorData).Offsets.Top = 0.0;
  (this->DefaultAnchorData).Offsets.Right = 0.0;
  (this->DefaultAnchorData).Offsets.Bottom = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined8 *)&this->OnContentFrameDestructEvent = 0;
  *(undefined8 *)&(this->OnContentFrameDestructEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnContentFrameDestructEvent).field_0x10 = 0;
  (this->FocusedWidget).Object = (SWidget *)0x0;
  (this->FocusedWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ChangedFocus = false;
  return this;
}

// ~UDS_W_B_ContentsFrame @ 14b770980

void __thiscall UDS_W_B_ContentsFrame::~UDS_W_B_ContentsFrame(UDS_W_B_ContentsFrame *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pTVar3 = (this->FocusedWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContentFrameDestructEvent);
  pvVar4 = *(void **)&(this->OnContentFrameDestructEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentFrameDestructEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b7752e0

UClass * __cdecl UDS_W_B_ContentsFrame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_B_ContentsFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_B_ContentsFrame",
               &Z_Registration_Info_UClass_UDS_W_B_ContentsFrame.InnerSingleton,
               StaticRegisterNativesUDS_W_B_ContentsFrame,0x900,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_B_ContentsFrame>,
               InternalVTableHelperCtorCaller<UDS_W_B_ContentsFrame>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_B_ContentsFrame.InnerSingleton;
}

// StaticRegisterNativesUDS_W_B_ContentsFrame @ 14b777b60

void __cdecl UDS_W_B_ContentsFrame::StaticRegisterNativesUDS_W_B_ContentsFrame(void)

{
  return;
}

// NativeConstruct @ 14bcaab80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_B_ContentsFrame::NativeConstruct(UDS_W_B_ContentsFrame *this)

{
  FName *pFVar1;
  FSlateApplication *pFVar2;
  FName local_res8 [4];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar1 = ::FName::FName(local_res8,"DS_CanvasPanel_Contents");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>
            ((UDS_UserWidget *)this,&this->ContentsCanvasPanel,*pFVar1);
  (this->DefaultAnchorData).Offsets.Left = 0.0;
  (this->DefaultAnchorData).Offsets.Top = 0.0;
  (this->DefaultAnchorData).Offsets.Right = 0.0;
  (this->DefaultAnchorData).Offsets.Bottom = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.X = 1.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.Y = 1.0;
  (this->DefaultAnchorData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  pFVar2 = FSlateApplication::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->FocusChangingDelegate,
             this);
  pFVar2 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_W_B_ContentsFrame>
            ((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar2->FocusChangingDelegate,(UDS_W_B_ContentsFrame *)local_res8,
             (pmf_73c59b3d *)this);
  return;
}

// NativeDestruct @ 14bcac330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_B_ContentsFrame::NativeDestruct(UDS_W_B_ContentsFrame *this)

{
  longlong *plVar1;
  FSlateApplication *pFVar2;
  FReadAccessScope local_28;
  
  RemoveChildWidget(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnContentFrameDestructEvent,&local_28);
  if ((*(int *)&(this->OnContentFrameDestructEvent).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnContentFrameDestructEvent).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar2 = FSlateApplication::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->FocusChangingDelegate,
             this);
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativePaint @ 14bcadff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __thiscall
UDS_W_B_ContentsFrame::NativePaint
          (UDS_W_B_ContentsFrame *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = UUserWidget::NativePaint
                    ((UUserWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}

// OnFocusChangingDelegate @ 14bcb53a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_B_ContentsFrame::OnFocusChangingDelegate
          (UDS_W_B_ContentsFrame *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  return;
}

// RemoveChildWidget @ 14bcc3ea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_B_ContentsFrame::RemoveChildWidget(UDS_W_B_ContentsFrame *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  UDS_UserWidget *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  UDS_WindowManager *this_00;
  UMVVMView *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FObjectPtr_u_0 *this_01;
  FWeakObjectPtr local_res8;
  
  pUVar3 = this->ChildWidget;
  if (pUVar3 != (UDS_UserWidget *)0x0) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res8);
      bVar6 = FWeakObjectPtr::IsValid(&local_res8);
      if ((bVar6) &&
         (pUVar7 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)pUVar3),
         pUVar7 != (UMVVMView *)0x0)) {
        this_01 = (FObjectPtr_u_0 *)(pUVar7->Sources).AllocatorInstance.Data;
        iVar2 = (pUVar7->Sources).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = this_01 + (longlong)iVar2 * 3;
        for (; this_01 != pFVar1; this_01 = this_01 + 3) {
          if (this_01->Handle != (UObject *)0x0) {
            pUVar8 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar8);
            if ((bVar6) && (pUVar4 = this_01->Handle, pUVar4 != (UObject *)0x0)) {
              pUVar9 = FWeakObjectPtr::Get(&local_res8);
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9[5].field_0x18
                         ,pUVar4);
            }
          }
        }
      }
    }
    (**(code **)(this->ChildWidget->_padding_ + 0x2d0))();
    (**(code **)(this->ChildWidget->_padding_ + 0x4e8))();
    this->ChildWidget = (UDS_UserWidget *)0x0;
  }
  return;
}

// SetChildWindowWidget @ 14bcc5570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_B_ContentsFrame::SetChildWindowWidget
          (UDS_W_B_ContentsFrame *this,UDS_UserWidget *param_1,EDS_WindowWidget param_2)

{
  int iVar1;
  UCanvasPanelSlot *this_00;
  UClass *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
    RemoveChildWidget(this);
    this->ChildWidget = param_1;
    this->ChildWindowWidget = param_2;
    this_00 = (UCanvasPanelSlot *)
              UPanelWidget::AddChild((UPanelWidget *)this->ContentsCanvasPanel,(UWidget *)param_1);
    if (this_00 != (UCanvasPanelSlot *)0x0) {
      pUVar2 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        UCanvasPanelSlot::SetLayout(this_00,&this->DefaultAnchorData);
        (**(code **)(param_1->_padding_ + 0x4e0))(param_1);
        return;
      }
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_B_ContentsFrame::SetChildWindowWidget",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x66,L"canvasPanelSlot is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// SetDestructEvent @ 14bcc5f80

void __thiscall
UDS_W_B_ContentsFrame::SetDestructEvent
          (UDS_W_B_ContentsFrame *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnContentFrameDestructEvent,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

