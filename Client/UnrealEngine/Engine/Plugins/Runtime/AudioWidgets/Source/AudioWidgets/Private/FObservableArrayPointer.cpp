// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 10

// FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_> @ 14d8a5cb0

FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>
          (void *this,TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  *(TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)((longlong)this + 8) = param_2
  ;
  *(undefined ***)this =
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE__6B_
  ;
  *(STableViewBase **)((longlong)this + 0x10) = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x20) = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_>
                    (&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)
                     &stack0x00000008,(pmf_52911215)this);
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> @ 14d8a5d30

FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
* __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE__6B_
  ;
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                      *)&stack0x00000008,(pmf_89b69555)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_> @ 14d8ba850

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
~FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  *(undefined ***)this =
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (((*(longlong *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 0x18) == 0))
     || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(ulong64 *)((longlong)this + 0x20) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8ba8db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> @ 14d8ba8f0

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::
~FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8ba97b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetItems @ 14d92f740

TArrayView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
GetItems(void *this,
        TArrayView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_,int> *pTVar5;
  
  puVar2 = *(undefined8 **)((longlong)this + 8);
  __return_storage_ptr__->DataPtr = (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)*puVar2;
  iVar1 = *(int *)(puVar2 + 1);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 14d92f7a0

TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
* __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::GetItems(FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
                 *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
  *pTVar5;
  
  pTVar2 = this->ItemsSource;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
       (pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 14d938a80

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
HandleArrayChanged(void *this,
                  TObservableArrayChangedArgs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1
                  )

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d938ab0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14d938ab0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// HandleArrayChanged @ 14d938af0

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::HandleArrayChanged
          (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                 *param_1)

{
  STableViewBase *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d938b20;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ListViewOwner).Object;
    if (pSVar1 != (STableViewBase *)0x0) {
      (**(code **)(*(longlong *)pSVar1 + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_14d938b20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 14d93f320

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
IsSame(void *this,void *param_1)

{
  return param_1 == (void *)((longlong)this + 8);
}

// IsSame @ 14d93f340

bool __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::IsSame(FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

