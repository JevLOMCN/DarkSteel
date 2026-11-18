// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 913

// CreateCopy @ 14d8f2ca0

void __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f2d50

void __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x00014d8f2db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 14d8f2dd0

void __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f2e90

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`9'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f2f10

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`9'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f2f60

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`9'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3000

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3080

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f30d0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3170

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f31f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3240

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f32e0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0xb0,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_1>_const_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3350

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0xb0,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_1>_const_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14d8f3390

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  this_00 = UE::Core::Private::DelegateAllocate(0xb0,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_1>_const_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3420

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioColorGradient__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f34a0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioColorGradient__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f34f0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioColorGradient__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3590

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3610

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3660

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3700

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3780

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f37d0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3870

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerBallistics__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f38f0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerBallistics__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3940

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerBallistics__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f39e0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3a60

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3ab0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3b50

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3bd0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3c20

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3cc0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3d40

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_6>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3d90

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_6>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3e30

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f3eb0

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f3f00

void __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f3fa0

void __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4020

void __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4070

void __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4110

void __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4190

void __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f41e0

void __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4280

void __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4300

void __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4350

void __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f43f0

void __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4470

void __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f44c0

void __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4560

void __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EOrientation__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f45e0

void __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EOrientation__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_7>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4630

void __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EOrientation__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_7>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f46d0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4750

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f47a0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4840

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f48c0

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4910

void __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f49b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4a30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4a80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4ba0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4bf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4c90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4d10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4d60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4e00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4e80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f4ed0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f4f70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f4ff0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5040

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f50e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5160

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f51b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5250

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f52d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5320

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f53c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5440

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5490

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f55b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f56a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5810

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5890

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f58e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5a50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5bc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5c60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5d30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5dd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5e50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f5ea0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f5f40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f5fc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6010

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f60b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6150

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 14d8f61b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioColorGradient___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f62e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioColorGradient___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioColorGradient___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f63d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f64a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_11>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f65c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f66b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerBallistics___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerBallistics___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerBallistics___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_10>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f68a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_11>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f68f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_11>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_15>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6b80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_15>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6bd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_15>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6c70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_16>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6cf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_16>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_16>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotTilt___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotTilt___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f6eb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotTilt___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_14>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f6f50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f6fd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_10>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7020

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_10>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f70c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_13>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7190

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_13>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7230

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f72b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_12>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_12>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f73a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7470

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EOrientation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7590

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EOrientation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_14>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f75e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EOrientation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_14>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_17>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7700

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_17>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_17>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f77f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_18>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_18>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f78c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_18>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14d8f7a70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7b30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7bb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7d20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7d70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7e10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f7e90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f7ee0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f7f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f8050

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f80f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f81c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f82e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f8330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f83d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f84a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f85c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f8610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f86b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f8780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f88a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f88f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f8a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8b80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f8bd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_5>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8c70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_8>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8cf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_8>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8f8d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_8>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_9>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_9>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8f8eb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_9>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f8f50

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f8fd0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f9020

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f90c0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9140

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f9190

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9230

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f92d0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 14d8f9340

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar3 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9400

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f94a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 14d8f9510

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar3 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f95d0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9650

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f96a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9740

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f97e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14d8f9850

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::`12'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9910

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_3>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9990

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_3>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f99e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_3>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9a80

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9b00

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f9b50

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9bf0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_4>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9c90

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_4>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 14d8f9d00

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_4>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined1 *)((longlong)puVar3 + 0x19) = *(undefined1 *)((longlong)this + 0x19);
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 4),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9dc0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9e40

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8f9e90

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8f9f30

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8f9fb0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8fa000

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fa0a0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_6>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fa120

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_6>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fa170

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_6>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fa210

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_7>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fa290

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_7>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fa2e0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_7>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fa380

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fa400

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_8>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8fa450

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_8>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fa4f0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fa570

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_9>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d8fa5c0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_9>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d91bfd0

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
          *this,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// Execute @ 14d91c030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  `AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 14d91c060

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  TSharedPtr<FString,1> local_28;
  TSharedRef<STextBlock,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28);
  __return_storage_ptr__->Object = (SWidget *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d91c0e0

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
         TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1)

{
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_28;
  TSharedRef<STextBlock,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (EAudioOscilloscopeTriggerMode *)0x0;
  `SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28);
  __return_storage_ptr__->Object = (SWidget *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d91c160

TSharedRef<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::Execute(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14d91c190

EAudioColorGradient __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EAudioColorGradient *)((longlong)pvVar1 + 5);
}

// Execute @ 14d91c1f0

EAudioSpectrogramFrequencyAxisPixelBucketMode __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EAudioSpectrogramFrequencyAxisPixelBucketMode *)((longlong)pvVar1 + 3);
}

// Execute @ 14d91c250

EAudioSpectrogramFrequencyAxisScale __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EAudioSpectrogramFrequencyAxisScale *)((longlong)pvVar1 + 4);
}

// Execute @ 14d91c2b0

EAudioSpectrumAnalyzerBallistics __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::Execute(void *this)

{
  UClass *this_00;
  EAudioSpectrumAnalyzerBallistics *pEVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pEVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *pEVar1;
}

// Execute @ 14d91c310

EAudioSpectrumAnalyzerType __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::Execute(void *this)

{
  UClass *this_00;
  EAudioSpectrumAnalyzerType *pEVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pEVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *pEVar1;
}

// Execute @ 14d91c370

EAudioSpectrumAnalyzerType __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EAudioSpectrumAnalyzerType *)((longlong)pvVar1 + 1);
}

// Execute @ 14d91c3d0

EAudioSpectrumPlotFrequencyAxisPixelBucketMode __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)((longlong)pvVar1 + 5);
}

// Execute @ 14d91c430

EAudioSpectrumPlotFrequencyAxisScale __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EAudioSpectrumPlotFrequencyAxisScale *)((longlong)pvVar1 + 6);
}

// Execute @ 14d91c490

EConstantQFFTSizeEnum __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EConstantQFFTSizeEnum *)((longlong)pvVar1 + 2);
}

// Execute @ 14d91c4f0

EConstantQFFTSizeEnum __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EConstantQFFTSizeEnum *)((longlong)pvVar1 + 3);
}

// Execute @ 14d91c550

EFFTSize __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EFFTSize *)((longlong)pvVar1 + 1);
}

// Execute @ 14d91c5b0

EFFTSize __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return *(EFFTSize *)((longlong)pvVar1 + 2);
}

// Execute @ 14d91c610

EOrientation __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return (EOrientation)*(byte *)((longlong)pvVar1 + 6);
}

// Execute @ 14d91c670

float __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::Execute(void *this)

{
  float fVar1;
  
  fVar1 = `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>::operator()
                    ((void *)((longlong)this + 0x18));
  return fVar1;
}

// Execute @ 14d91c680

float __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  float fVar2;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  fVar2 = SAudioSpectrumPlot::GetTiltExponentValue
                    (*(EAudioSpectrumPlotTilt *)((longlong)pvVar1 + 4));
  return fVar2;
}

// Execute @ 14d91c6e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FText *param_1,Type param_2)

{
  `SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14d91c6f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FText *param_1,Type param_2)

{
  `SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14d91c700

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::Execute(void *this,FText *param_1,Type param_2)

{
  `SAudioRadialSlider::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14d91c710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::Execute(void *this,FText *param_1,Type param_2)

{
  `SAudioSliderBase::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 14d91c720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  `SAudioSliderBase::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c730

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  `SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  `SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  `SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  `SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::Execute(void *this,float param_1)

{
  `SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::Execute(void *this,float param_1)

{
  `SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::Execute(void *this,float param_1)

{
  `SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c7a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::Execute(void *this,float param_1)

{
  `SAudioRadialSlider::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c7b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::Execute(void *this,float param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  FReadAccessScope local_38 [2];
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  pfVar4 = TAttribute<float>::Get((TAttribute<float> *)(lVar2 + 0x2e0));
  fVar1 = *pfVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2c0),local_38);
  if ((*(int *)(lVar2 + 0x2d0) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x2c8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,fVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// Execute @ 14d91c820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::Execute(void *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d91c870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::Execute(void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,Type param_2)

{
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (EAudioOscilloscopeTriggerMode *)0x0;
  `SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d91c8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::Execute(void *this,TSharedRef<SDockTab,1> *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  `AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d91c910

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::Execute(void *this,EAudioColorGradient param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c920

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::Execute(void *this,EAudioSpectrogramFrequencyAxisPixelBucketMode param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::Execute(void *this,EAudioSpectrogramFrequencyAxisScale param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::Execute(void *this,EAudioSpectrumAnalyzerBallistics param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c950

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::Execute(void *this,EAudioSpectrumAnalyzerType param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::Execute(void *this,EAudioSpectrumAnalyzerType param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::Execute(void *this,EAudioSpectrumPlotFrequencyAxisPixelBucketMode param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::Execute(void *this,EAudioSpectrumPlotFrequencyAxisScale param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c990

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::Execute(void *this,EAudioSpectrumPlotTilt param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c9a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::Execute(void *this,EConstantQFFTSizeEnum param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c9b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::Execute(void *this,EConstantQFFTSizeEnum param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c9c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::Execute(void *this,EFFTSize param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c9d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::Execute(void *this,EFFTSize param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c9e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::Execute(void *this,EOrientation param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d91c9f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::Execute(void *this)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d91ca00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::Execute(void *this)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d91ca10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::Execute(void *this)

{
  `AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d91ca20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::Execute(void *this)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  FReadAccessScope local_38 [2];
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  pfVar4 = TAttribute<float>::Get((TAttribute<float> *)(lVar2 + 0x2e0));
  fVar1 = *pfVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2c0),local_38);
  if ((*(int *)(lVar2 + 0x2d0) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x2c8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,fVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// Execute @ 14d91ca90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 1;
  }
  return;
}

// Execute @ 14d91cab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 1;
  }
  return;
}

// Execute @ 14d91cad0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 1;
  }
  return;
}

// Execute @ 14d91caf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 1;
  }
  return;
}

// Execute @ 14d91cb10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 1;
  }
  return;
}

// Execute @ 14d91cb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 0;
    return;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_oscil_152c1e6a0,
               (FLogCategoryBase *)&LogAudioWidgets);
    return;
  }
  return;
}

// Execute @ 14d91cb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 0;
    return;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_vecto_152c1f088,
               (FLogCategoryBase *)&LogAudioWidgets);
    return;
  }
  return;
}

// Execute @ 14d91cbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 0;
    return;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_vecto_152c1f108,
               (FLogCategoryBase *)&LogAudioWidgets);
    return;
  }
  return;
}

// Execute @ 14d91cbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 0;
    return;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_oscil_152c1e678,
               (FLogCategoryBase *)&LogAudioWidgets);
    return;
  }
  return;
}

// Execute @ 14d91cc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::Execute(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 0;
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 0x18) + 0x2f0),
               *(float *)(*(longlong *)((longlong)this + 0x18) + 0x464));
    return;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_oscil_152c1e5f8,
               (FLogCategoryBase *)&LogAudioWidgets);
    return;
  }
  return;
}

// Execute @ 14d91cc80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::Execute(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d91cc90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::Execute(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d91cca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::Execute(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 14d91ccb0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x18);
}

// Execute @ 14d91ccc0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return *(int *)(*(longlong *)((longlong)this + 0x18) + 0x530) != 1;
}

// Execute @ 14d91cce0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::Execute(void *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)((longlong)this + 0x18));
  return *pbVar1;
}

// Execute @ 14d91cd00

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::Execute(void *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)((longlong)this + 0x18));
  return *pbVar1;
}

// Execute @ 14d91cd20

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::Execute(void *this)

{
  return *(int *)(*(longlong *)((longlong)this + 0x18) + 0x530) == 1;
}

// Execute @ 14d91cd40

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::Execute(void *this)

{
  bool bVar1;
  
  bVar1 = `AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>::
          operator()((void *)((longlong)this + 0x18));
  return bVar1;
}

// Execute @ 14d91cd50

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::Execute(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x18);
}

// Execute @ 14d91cd60

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::Execute(void *this)

{
  return *(int *)(*(longlong *)((longlong)this + 0x18) + 0x530) != 0;
}

// Execute @ 14d91cd80

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::Execute(void *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)((longlong)this + 0x18));
  return *pbVar1;
}

// Execute @ 14d91cda0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::Execute(void *this)

{
  return *(int *)(*(longlong *)((longlong)this + 0x18) + 0x530) == 0;
}

// Execute @ 14d91cdc0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::Execute(void *this)

{
  UClass *this_00;
  undefined1 *puVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  puVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return (bool)*puVar1;
}

// Execute @ 14d91ce20

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::Execute(void *this)

{
  bool bVar1;
  
  bVar1 = `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>::
          operator()((void *)((longlong)this + 0x18));
  return bVar1;
}

// Execute @ 14d91ce30

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::Execute(void *this)

{
  bool bVar1;
  
  bVar1 = `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>::
          operator()((void *)((longlong)this + 0x18));
  return bVar1;
}

// Execute @ 14d91ce40

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return (bool)*(undefined1 *)((longlong)pvVar1 + 7);
}

// Execute @ 14d91cea0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::Execute(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return (bool)*(undefined1 *)((longlong)pvVar1 + 8);
}

// ExecuteIfSafe @ 14d91f3a0

bool __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *local_18 [2];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(local_18,uVar3);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// ExecuteIfSafe @ 14d91f400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  `AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91f430

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedPtr<FString,1> *param_1)

{
  TSharedPtr<FString,1> local_28;
  TSharedRef<STextBlock,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91f490

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1)

{
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_28;
  TSharedRef<STextBlock,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (EAudioOscilloscopeTriggerMode *)0x0;
  `SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91f4f0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<SWidget,1> local_18;
  
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91f520

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f580

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f5e0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f640

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f6a0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f700

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f760

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f7c0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f820

bool __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f880

bool __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f8e0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f940

bool __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91f9a0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d91fa00

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d91fa20

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  void *pvVar1;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 0x18),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  SAudioSpectrumPlot::GetTiltExponentValue(*(EAudioSpectrumPlotTilt *)((longlong)pvVar1 + 4));
  return true;
}

// ExecuteIfSafe @ 14d91fa80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FText *param_1,Type param_2)

{
  `SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14d91faa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FText *param_1,Type param_2)

{
  `SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14d91fac0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FText *param_1,Type param_2)

{
  `SAudioRadialSlider::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14d91fae0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,FText *param_1,Type param_2)

{
  `SAudioSliderBase::Construct'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14d91fb00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioSliderBase::Construct'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fb20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fb40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fb60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fb80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fba0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fbc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fbe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fc00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,float param_1)

{
  `SAudioRadialSlider::Construct'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fc20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,float param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  FReadAccessScope local_38 [2];
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  pfVar4 = TAttribute<float>::Get((TAttribute<float> *)(lVar2 + 0x2e0));
  fVar1 = *pfVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2c0),local_38);
  if ((*(int *)(lVar2 + 0x2d0) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x2c8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,fVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return true;
}

// ExecuteIfSafe @ 14d91fc90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  `SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91fce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,Type param_2)

{
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (EAudioOscilloscopeTriggerMode *)0x0;
  `SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91fd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,TSharedRef<SDockTab,1> *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  `AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d91fd80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::ExecuteIfSafe(void *this,EAudioColorGradient param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fda0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::ExecuteIfSafe(void *this,EAudioSpectrogramFrequencyAxisPixelBucketMode param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fdc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::ExecuteIfSafe(void *this,EAudioSpectrogramFrequencyAxisScale param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fde0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::ExecuteIfSafe(void *this,EAudioSpectrumAnalyzerBallistics param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fe00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::ExecuteIfSafe(void *this,EAudioSpectrumAnalyzerType param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fe20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::ExecuteIfSafe(void *this,EAudioSpectrumAnalyzerType param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fe40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::ExecuteIfSafe(void *this,EAudioSpectrumPlotFrequencyAxisPixelBucketMode param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fe60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::ExecuteIfSafe(void *this,EAudioSpectrumPlotFrequencyAxisScale param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fe80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::ExecuteIfSafe(void *this,EAudioSpectrumPlotTilt param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fea0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::ExecuteIfSafe(void *this,EConstantQFFTSizeEnum param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fec0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::ExecuteIfSafe(void *this,EConstantQFFTSizeEnum param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91fee0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::ExecuteIfSafe(void *this,EFFTSize param_1)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91ff00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::ExecuteIfSafe(void *this,EFFTSize param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91ff20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::ExecuteIfSafe(void *this,EOrientation param_1)

{
  `AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d91ff40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d91ff60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d91ff80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d91ffa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  FReadAccessScope local_38 [2];
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  pfVar4 = TAttribute<float>::Get((TAttribute<float> *)(lVar2 + 0x2e0));
  fVar1 = *pfVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2c0),local_38);
  if ((*(int *)(lVar2 + 0x2d0) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x2c8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,fVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return true;
}

// ExecuteIfSafe @ 14d920010

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 1;
  }
  return true;
}

// ExecuteIfSafe @ 14d920030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 1;
  }
  return true;
}

// ExecuteIfSafe @ 14d920050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 1;
  }
  return true;
}

// ExecuteIfSafe @ 14d920070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 1;
  }
  return true;
}

// ExecuteIfSafe @ 14d920090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) == '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 1;
  }
  return true;
}

// ExecuteIfSafe @ 14d9200b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 0;
    return true;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_oscil_152c1e6a0,
               (FLogCategoryBase *)&LogAudioWidgets);
  }
  return true;
}

// ExecuteIfSafe @ 14d920100

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 0;
    return true;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_vecto_152c1f088,
               (FLogCategoryBase *)&LogAudioWidgets);
  }
  return true;
}

// ExecuteIfSafe @ 14d920150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x350) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x350) = 0;
    return true;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_vecto_152c1f108,
               (FLogCategoryBase *)&LogAudioWidgets);
  }
  return true;
}

// ExecuteIfSafe @ 14d9201a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 0;
    return true;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_oscil_152c1e678,
               (FLogCategoryBase *)&LogAudioWidgets);
  }
  return true;
}

// ExecuteIfSafe @ 14d9201f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x460) != '\0') {
    *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x460) = 0;
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 0x18) + 0x2f0),
               *(float *)(*(longlong *)((longlong)this + 0x18) + 0x464));
    return true;
  }
  if (2 < (byte)LogAudioWidgets._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Unmatched_oscil_152c1e5f8,
               (FLogCategoryBase *)&LogAudioWidgets);
  }
  return true;
}

// ExecuteIfSafe @ 14d920250

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d9202b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14d9202c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14d9202d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<bool>::Get((TAttribute<bool> *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d9202f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<bool>::Get((TAttribute<bool> *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920310

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14d920320

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920340

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14d920350

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14d920360

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<bool>::Get((TAttribute<bool> *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920380

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14d920390

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d9203f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920410

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  `AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 14d920430

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// ExecuteIfSafe @ 14d920490

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::ExecuteIfSafe(void *this)

{
  UClass *this_00;
  
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 0x18));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FProperty::ContainerUObjectPtrToValuePtrInternal
            (*(FProperty **)((longlong)this + 0x18),
             (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d92b740

ulong64 __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b750

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b760

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b770

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b780

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b790

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b7a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b7b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b7c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b7d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b7e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b7f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b800

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b810

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b820

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b830

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b840

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b850

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b860

ulong64 __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b870

ulong64 __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b880

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b890

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b8a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b8b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b8c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b8d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b8e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b8f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b900

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b910

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b920

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b930

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b940

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b950

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b960

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b970

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b980

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b990

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b9a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b9b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b9c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b9d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b9e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92b9f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92ba90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92baa0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bab0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bac0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bad0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bae0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92baf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb80

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bb90

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bba0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bbb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bbc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bbd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bbe0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bbf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc00

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc10

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc20

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc30

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc40

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc50

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc60

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d930330

void * __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930340

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930350

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930360

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930370

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930380

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930390

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9303a0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9303b0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9303c0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9303d0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9303e0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9303f0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930400

void * __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930410

void * __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930420

void * __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930430

void * __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930440

void * __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930450

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930460

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930470

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930480

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930490

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9304a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9304b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9304c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9304d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9304e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9304f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930500

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930530

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9305a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9305b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9305c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9305d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9305e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9305f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930600

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930610

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930620

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930630

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930640

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930650

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930660

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930670

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930690

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9306a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9306b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9306c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9306d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9306e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9306f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930720

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930730

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930740

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930750

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930760

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930770

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930780

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930790

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9307a0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9307b0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9307c0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9307d0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9307e0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d9307f0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930800

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930810

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930820

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930830

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930840

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d930850

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d9375f0

UObject * __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937600

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937610

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937620

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937630

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937640

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937650

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937660

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937670

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937680

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937690

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9376a0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9376b0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9376c0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9376d0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9376e0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9376f0

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937700

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937710

UObject * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937720

UObject * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937730

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937740

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937750

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937760

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937770

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937780

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937790

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9377a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9377b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9377c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9377d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9377e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9377f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937800

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937810

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937820

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937830

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937840

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937850

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937860

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937870

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937880

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937890

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9378a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9378b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9378c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9378d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9378e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9378f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937900

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937910

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937920

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937930

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937940

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937950

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937960

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937970

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937980

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937990

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9379a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9379b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9379c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9379d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9379e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d9379f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a30

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a40

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a50

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a60

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a70

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a80

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937a90

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937aa0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937ab0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937ac0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937ad0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937ae0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937af0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b00

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b10

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d938e00

bool __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e10

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e20

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e30

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e40

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e50

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e60

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e70

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e80

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938e90

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938ea0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938eb0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938ec0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938ed0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938ee0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938ef0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f00

bool __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f10

bool __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f20

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f30

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938f90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938fa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938fb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938fc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938fd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938fe0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d938ff0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939000

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939010

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939020

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939060

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9390a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9390b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9390c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9390d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9390e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9390f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939100

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939110

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939120

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939130

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939140

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939150

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939160

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939170

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9391a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9391b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9391c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9391d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9391e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9391f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939200

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939220

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939230

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939240

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939250

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939260

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939270

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939280

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939290

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9392a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9392b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9392c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9392d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9392e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d9392f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939300

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939310

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d939320

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d93dfd0

bool __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93dfe0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93dff0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e000

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e010

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e020

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e030

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e040

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e050

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e060

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e070

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e080

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e090

bool __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e0a0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e0b0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e0c0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e0d0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e0e0

bool __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e0f0

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e100

bool __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e110

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e120

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e130

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e140

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e150

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e160

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e170

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e1a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e1b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e1c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e1d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e1e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e1f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e200

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e220

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e230

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e240

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e250

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e260

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e280

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e2a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e2b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e2c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e2d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e2e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e2f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e300

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e310

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e320

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e330

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e340

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e350

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e360

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e390

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e3a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e3b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e3c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e3d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e3e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e3f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e410

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e420

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e430

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e440

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e450

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e460

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e470

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e480

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e490

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e4a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e4b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e4c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e4d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e4e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e4f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d976db0

FName __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976dc0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976dd0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976de0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976df0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e00

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e10

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e20

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e30

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e40

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e50

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e60

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e70

FName __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e80

FName __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976e90

FName __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976ea0

FName __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976eb0

FName __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976ec0

FName __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976ed0

FName __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976ee0

FName __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976ef0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976f90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976fa0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976fb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976fc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976fd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976fe0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d976ff0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977000

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977010

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977020

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977030

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977040

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977050

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977060

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977070

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977080

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977090

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9770a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9770b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9770c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9770d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9770e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9770f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977100

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977110

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977120

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977130

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977140

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977150

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977160

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977170

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977180

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977190

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9771a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9771b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9771c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9771d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9771e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9771f0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977200

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977210

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977220

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977230

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977240

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977250

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977260

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977270

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977280

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977290

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9772a0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9772b0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9772c0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9772d0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

