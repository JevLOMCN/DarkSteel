// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 165

// CreateCopy @ 14d8fa660

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fa6f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14d8fa740

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fa7f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_89b69555 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fa880

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_89b69555 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d8fa8d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_89b69555 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fa980

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8faa10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14d8faa60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fab10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5efb694b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8faba0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5efb694b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d8fabf0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5efb694b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8faca0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioLoudnessMeter_AudioWidgets____A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fad30

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioLoudnessMeter_AudioWidgets____A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fad80

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioLoudnessMeter_AudioWidgets____A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fae30

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMeter_AudioWidgets____A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8faec0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMeter_AudioWidgets____A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8faf10

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMeter_AudioWidgets____A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fafc0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb050

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fb0a0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fb150

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb1e0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fb230

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fb2e0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb370

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fb3c0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fb470

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb500

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fb550

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fb600

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb690

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fb6e0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fb790

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb820

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fb870

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fb920

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fb9b0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fba00

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fbab0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fbb40

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fbb90

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8fbc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8fbcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d8fbd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d91cf00

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::Execute(void *this,
         TObservableArrayChangedArgs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1)

{
  FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)
                ((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (**(code **)((longlong)this + 0x20))(pFVar1,&local_28);
  return;
}

// Execute @ 14d91cf60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *param_1)

{
  FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pFVar1;
  FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return;
}

// Execute @ 14d91cfc0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::Execute(void *this,
         TObservableArrayChangedArgs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1)

{
  FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)
                ((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (**(code **)((longlong)this + 0x20))(pFVar1,&local_28);
  return;
}

// Execute @ 14d91d020

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *param_1)

{
  FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pFVar1;
  FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return;
}

// Execute @ 14d91d080

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
          *this,ULKFSAnalyzer *param_1,FLKFSResults *param_2)

{
  FAudioLoudnessMeter *pFVar1;
  FAudioLoudnessMeter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioLoudnessMeter,AudioWidgets::FAudioLoudnessMeter_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14d91d0e0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
          *this,UMeterAnalyzer *param_1,int param_2,FMeterResults *param_3)

{
  FAudioMeter *pFVar1;
  FAudioMeter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioMeter,AudioWidgets::FAudioMeter_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14d91d150

EActiveTimerReturnType __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  EActiveTimerReturnType EVar3;
  FAudioSpectrogram *pFVar4;
  FAudioSpectrogram *local_res8 [4];
  
  local_res8[0] = *(FAudioSpectrogram **)((longlong)this + 0x18);
  pcVar1 = *(code **)((longlong)this + 0x20);
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (local_res8);
  EVar3 = (*pcVar1)((longlong)&pFVar4->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  return EVar3;
}

// Execute @ 14d91d1d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
          *this,FMenuBuilder *param_1)

{
  FAudioSpectrogram *pFVar1;
  FAudioSpectrogram *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14d91d220

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,UConstantQAnalyzer *param_1,int param_2,
         TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrogram *pFVar1;
  FAudioSpectrogram *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14d91d290

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,USynesthesiaSpectrumAnalyzer *param_1,int param_2,
         TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrogram *pFVar1;
  FAudioSpectrogram *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14d91d300

FAudioPowerSpectrumData * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FAudioPowerSpectrumData *__return_storage_ptr__)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined8 uVar3;
  FAudioSpectrumAnalyzer *pFVar4;
  undefined8 *puVar5;
  FAudioSpectrumAnalyzer *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = this->UserObject;
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  puVar5 = (undefined8 *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pFVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                      local_28);
  uVar1 = puVar5[1];
  pfVar2 = (float *)puVar5[2];
  uVar3 = puVar5[3];
  (__return_storage_ptr__->CenterFrequencies).DataPtr = (float *)*puVar5;
  *(undefined8 *)&(__return_storage_ptr__->CenterFrequencies).ArrayNum = uVar1;
  (__return_storage_ptr__->SquaredMagnitudes).DataPtr = pfVar2;
  *(undefined8 *)&(__return_storage_ptr__->SquaredMagnitudes).ArrayNum = uVar3;
  return __return_storage_ptr__;
}

// Execute @ 14d91d360

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
          *this,FMenuBuilder *param_1)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14d91d3b0

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,UConstantQAnalyzer *param_1,int param_2,
         TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14d91d420

void __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,USynesthesiaSpectrumAnalyzer *param_1,int param_2,
         TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14d91d490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  FWaveformAudioSamplesDataProvider *pFVar4;
  FWaveformAudioSamplesDataProvider *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FWaveformAudioSamplesDataProvider,AudioWidgets::FWaveformAudioSamplesDataProvider_*_&>
                     (local_res8);
  uVar3 = (*pcVar1)((longlong)&pFVar4->_padding_ + (longlong)(int)uVar2,param_1);
  return (bool)uVar3;
}

// ExecuteIfSafe @ 14d9204f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,
               TObservableArrayChangedArgs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1)

{
  FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)
                ((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (**(code **)((longlong)this + 0x20))(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d920550

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                      *param_1)

{
  FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pFVar1;
  FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d9205b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,
               TObservableArrayChangedArgs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1)

{
  FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)
                ((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (**(code **)((longlong)this + 0x20))(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d920610

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                      *param_1)

{
  FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pFVar1;
  FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d920670

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
                *this,ULKFSAnalyzer *param_1,FLKFSResults *param_2)

{
  FAudioLoudnessMeter *pFVar1;
  FAudioLoudnessMeter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioLoudnessMeter,AudioWidgets::FAudioLoudnessMeter_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return true;
}

// ExecuteIfSafe @ 14d9206d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
                *this,UMeterAnalyzer *param_1,int param_2,FMeterResults *param_3)

{
  FAudioMeter *pFVar1;
  FAudioMeter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioMeter,AudioWidgets::FAudioMeter_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14d920740

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  FAudioSpectrogram *pFVar3;
  FAudioSpectrogram *local_res8 [4];
  
  local_res8[0] = *(FAudioSpectrogram **)((longlong)this + 0x18);
  pcVar1 = *(code **)((longlong)this + 0x20);
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (local_res8);
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  return true;
}

// ExecuteIfSafe @ 14d9207c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this,FMenuBuilder *param_1)

{
  FAudioSpectrogram *pFVar1;
  FAudioSpectrogram *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 14d920810

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,UConstantQAnalyzer *param_1,int param_2,
               TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrogram *pFVar1;
  FAudioSpectrogram *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14d920880

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,USynesthesiaSpectrumAnalyzer *param_1,int param_2,
               TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrogram *pFVar1;
  FAudioSpectrogram *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrogram,AudioWidgets::FAudioSpectrogram_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14d9208f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8 [4];
  undefined1 local_28 [32];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,local_28)
  ;
  return true;
}

// ExecuteIfSafe @ 14d920940

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this,FMenuBuilder *param_1)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 14d920990

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,UConstantQAnalyzer *param_1,int param_2,
               TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14d920a00

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,USynesthesiaSpectrumAnalyzer *param_1,int param_2,
               TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FAudioSpectrumAnalyzer *pFVar1;
  FAudioSpectrumAnalyzer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FAudioSpectrumAnalyzer,AudioWidgets::FAudioSpectrumAnalyzer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14d920a70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  FWaveformAudioSamplesDataProvider *pFVar3;
  FWaveformAudioSamplesDataProvider *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<AudioWidgets::FWaveformAudioSamplesDataProvider,AudioWidgets::FWaveformAudioSamplesDataProvider_*_&>
                     (local_res8);
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)(int)uVar2,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc70

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14d92bc80

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bc90

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14d92bca0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bcb0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bcc0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bcd0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14d92bce0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bcf0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bd00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bd10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bd20

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bd30

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bd40

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d92bd50

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14d930860

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14d930870

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d930880

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14d930890

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d9308a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d9308b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d9308c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14d9308d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d9308e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d9308f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d930900

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d930910

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d930920

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d930930

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d930940

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14d937b20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b30

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937b90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937ba0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937bb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937bc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937bd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937be0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937bf0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d937c00

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d939330

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14d939340

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d939350

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14d939360

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d939370

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d939380

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d939390

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14d9393a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d9393b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d9393c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d9393d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d9393e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d9393f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d939400

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d939410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14d93e500

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e510

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e520

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e530

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e540

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e550

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e560

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e570

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e580

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e590

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e5a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e5b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e5c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e5d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d93e5e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d9772e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9772f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977300

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977310

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977320

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977330

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977340

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977350

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977360

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977370

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977380

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d977390

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9773a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9773b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d9773c0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

