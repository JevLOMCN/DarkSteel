// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 46

// GetAddress @ 14d892f60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(double),0,0>::GetAddress
          (TFunction_OwnedObject<FText_(__cdecl*)(double),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 14d892f70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(double),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FText_(__cdecl*)(double),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_AVFText__N_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_FText_double **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d892f90

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(double),0,0>::Destroy
          (TFunction_OwnedObject<FText_(__cdecl*)(double),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d892f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<FText_(__cdecl*)(double),0,0> @ 14d8bb6c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(double),0,0>::
~TFunction_OwnedObject<FText_(__cdecl*)(double),0,0>
          (TFunction_OwnedObject<FText_(__cdecl*)(double),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_AVFText__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14d8e5130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14d8e5170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::
  TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
            ((TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)(puVar1 + 1),
             (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)this + 8));
  return (TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 14d8e51d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5200

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((longlong)this + 8);
  *(undefined1 *)((longlong)puVar1 + 9) = *(undefined1 *)((longlong)this + 9);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 2),
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14d8e52f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e5380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e53a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d8e53d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_5>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)((longlong)this + 0x10);
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 3),
             (TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x18));
  return puVar1 + 1;
}

// Destroy @ 14d911b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d911b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911b50

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d911bb0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d911c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d911c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14d92ab70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ab80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ab90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92aba0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92abb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92abc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92abd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92abe0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92abf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ac00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ac10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ac20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ac30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d92ac40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

