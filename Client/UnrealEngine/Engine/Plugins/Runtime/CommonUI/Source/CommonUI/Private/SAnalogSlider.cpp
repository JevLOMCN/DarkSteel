// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// Construct @ 14a7c5600

void __thiscall SAnalogSlider::Construct(SAnalogSlider *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  FArguments *pFVar2;
  EWidgetUpdateFlags EVar3;
  FArguments local_388;
  
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar3 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar3;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar3);
  pFVar2 = SSlider::FArguments::FArguments(&local_388);
  pFVar2->_Style = param_1->_Style;
  pFVar2->_IsFocusable = param_1->_IsFocusable;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnControllerCaptureBegin,&param_1->_OnControllerCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnControllerCaptureEnd,&param_1->_OnControllerCaptureEnd);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnValueChanged,&param_1->_OnValueChanged);
  SSlider::Construct((SSlider *)this,pFVar2);
  SSlider::FArguments::~FArguments(&local_388);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnAnalogCapture,&param_1->_OnAnalogCapture);
  return;
}

// OnAnalogValueChanged @ 14a7fbe60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAnalogSlider::OnAnalogValueChanged
          (SAnalogSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  float fVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FName FVar6;
  double dVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  FReply *pFVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 extraout_var [12];
  double dVar15;
  float fVar16;
  float fVar17;
  LARGE_INTEGER local_res8;
  FReadAccessScope local_158;
  FReply local_140;
  
  FReply::FReply(__return_storage_ptr__,false);
  pTVar3 = (TReferenceControllerBase<1> *)param_2->_padding_;
  FVar4 = (FName)param_2->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar14 = param_2->AnalogValue;
  pfVar10 = TAttribute<float>::Get((TAttribute<float> *)&this->_padding_);
  fVar1 = *pfVar10;
  fVar12 = SSlider::GetValue((SSlider *)this);
  iVar9 = (int)this->_padding_;
  FVar6 = EKeys::Gamepad_LeftX.KeyName;
  if (((iVar9 == 0) || (FVar6 = EKeys::Gamepad_LeftY.KeyName, iVar9 == 1)) && (FVar4 == FVar6)) {
    FReply::FReply(&local_140,true);
    pFVar11 = &local_140;
  }
  else {
    pFVar11 = SWidget::OnAnalogValueChanged((SWidget *)this,&local_140,param_1,param_2);
  }
  FReply::operator=(__return_storage_ptr__,pFVar11);
  FReply::~FReply(&local_140);
  fVar8 = __real_3f000000;
  if ((this->bIsUsingGamepad != false) &&
     (fVar13 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff),
     __real_3f000000 < fVar13)) {
    fVar13 = ((fVar13 - __real_3f000000) + fVar13) - __real_3f000000;
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar17 = fVar13 * fVar13;
    fVar16 = fVar13 * fVar17;
    QueryPerformanceCounter(&local_res8);
    dVar7 = __real_4170000000000000;
    dVar15 = (double)(((fVar16 - (fVar17 + fVar17)) + fVar13 +
                      (fVar17 * __real_40400000 - (fVar16 + fVar16))) *
                      (fVar1 * __real_40400000 - __real_3f800000) + __real_3f800000);
    if (dVar15 < ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) - this->LastAnalogStepTime) {
      iVar9 = 1;
      if ((dVar15 < (double)FApp::DeltaTime) &&
         (iVar9 = (int)((double)FApp::DeltaTime / dVar15), iVar9 < 1)) {
        iVar9 = 1;
      }
      iVar2 = (int)this->_padding_;
      FVar6 = EKeys::Gamepad_LeftX.KeyName;
      if (((iVar2 == 0) || (FVar6 = EKeys::Gamepad_LeftY.KeyName, iVar2 == 1)) && (FVar4 == FVar6))
      {
        if (__real_bf000000 <= fVar14) {
          if (fVar14 <= fVar8) goto LAB_14a7fc196;
          fVar12 = fVar12 + (float)iVar9 * fVar1;
        }
        else {
          fVar12 = fVar12 - (float)iVar9 * fVar1;
        }
        fVar14 = *(float *)((longlong)&this->_padding_ + 4);
        if (fVar12 <= fVar14) {
          fVar14 = fVar12;
        }
        if (fVar14 <= *(float *)&this->_padding_) {
          fVar14 = *(float *)&this->_padding_;
        }
        (**(code **)(this->_padding_ + 0x248))(this,fVar14);
        fVar14 = SSlider::GetValue((SSlider *)this);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAnalogCapture,
                   &local_158);
        if ((*(int *)&(this->OnAnalogCapture).field_0x10 != 0) &&
           (plVar5 = *(longlong **)&(this->OnAnalogCapture).field_0x8, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x68))(plVar5,CONCAT44(extraout_var._0_4_,fVar14));
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_158);
        QueryPerformanceCounter(&local_res8);
        this->LastAnalogStepTime =
             (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
      }
    }
  }
LAB_14a7fc196:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14a7fd400

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAnalogSlider::OnMouseButtonDown
          (SAnalogSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  if (this->bIsUsingGamepad != false) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  SSlider::OnMouseButtonDown((SSlider *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14a7fd500

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAnalogSlider::OnMouseButtonUp
          (SAnalogSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  if (this->bIsUsingGamepad == false) {
    SSlider::OnMouseButtonUp((SSlider *)this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnNavigation @ 14a7fd960

FNavigationReply * __thiscall
SAnalogSlider::OnNavigation
          (SAnalogSlider *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  float fVar1;
  code *pcVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FReadAccessScope local_58 [3];
  
  if ((int)this->_padding_ == 0) {
    if (param_2->NavigationType == Left) {
      fVar7 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      pcVar2 = *(code **)(this->_padding_ + 0x248);
      fVar5 = SSlider::GetValue((SSlider *)this);
      fVar6 = SSlider::GetStepSize((SSlider *)this);
      fVar8 = fVar5 - fVar6;
      if (fVar7 <= fVar5 - fVar6) {
        fVar8 = fVar7;
      }
      if (fVar8 <= fVar1) {
        fVar8 = fVar1;
      }
      (*pcVar2)(this,fVar8);
      fVar7 = SSlider::GetValue((SSlider *)this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAnalogCapture,
                 local_58);
      if ((*(int *)&(this->OnAnalogCapture).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnAnalogCapture).field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,fVar7);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_58);
    }
    else {
      if (param_2->NavigationType != Right) goto LAB_14a7fdac8;
      fVar7 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      pcVar2 = *(code **)(this->_padding_ + 0x248);
      fVar5 = SSlider::GetValue((SSlider *)this);
      fVar6 = SSlider::GetStepSize((SSlider *)this);
      fVar8 = fVar5 + fVar6;
      if (fVar7 <= fVar5 + fVar6) {
        fVar8 = fVar7;
      }
      if (fVar8 <= fVar1) {
        fVar8 = fVar1;
      }
      (*pcVar2)(this,fVar8);
      fVar7 = SSlider::GetValue((SSlider *)this);
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnAnalogCapture,fVar7);
    }
    (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
    (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
    (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
    *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
    __return_storage_ptr__->BoundaryRule = Explicit;
    pTVar4 = (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
    (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
LAB_14a7fdac8:
    SSlider::OnNavigation((SSlider *)this,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// SetUsingGamepad @ 14a81ce40

void __thiscall SAnalogSlider::SetUsingGamepad(SAnalogSlider *this,bool param_1)

{
  this->bIsUsingGamepad = param_1;
  return;
}

