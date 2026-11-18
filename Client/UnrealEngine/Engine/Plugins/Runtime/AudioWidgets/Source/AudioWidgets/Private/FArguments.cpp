// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 64

// OnGenerateTile_Static<TSharedRef<ITableRow,1>_(__cdecl*)(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&)> @ 14d8a23b0

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::
OnGenerateTile_Static<TSharedRef<ITableRow,1>_(__cdecl*)(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&)>
          (FArguments *this,
          _func___cdecl_TSharedRef<ITableRow,1>_TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_TSharedRef<STableViewBase,1>_ptr
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FArguments *pFVar5;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateTile,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnGenerateTile).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    if (param_1 ==
        (_func___cdecl_TSharedRef<ITableRow,1>_TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_TSharedRef<STableViewBase,1>_ptr
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FArguments *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// FArguments @ 14d8ac1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments(void *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSharedReferencer<1> FVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FComboBoxStyle *pFVar7;
  FTableRowStyle *pFVar8;
  FScrollBarStyle *pFVar9;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  *(SWidget **)((longlong)this + 0x1f8) = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x200) =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ComboBox");
  pFVar7 = (FComboBoxStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FComboBoxStyle::TypeName,*pFVar6,0,1);
  if (pFVar7 == (FComboBoxStyle *)0x0) {
    pFVar7 = FComboBoxStyle::GetDefault();
  }
  *(FComboBoxStyle **)((longlong)this + 0x208) = pFVar7;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar8 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTableRowStyle::TypeName,*pFVar6,0,1);
  if (pFVar8 == (FTableRowStyle *)0x0) {
    pFVar8 = FTableRowStyle::GetDefault();
  }
  *(FTableRowStyle **)((longlong)this + 0x218) = pFVar8;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar9 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FScrollBarStyle::TypeName,*pFVar6,0,1);
  if (pFVar9 == (FScrollBarStyle *)0x0) {
    pFVar9 = FScrollBarStyle::GetDefault();
  }
  *(FScrollBarStyle **)((longlong)this + 0x220) = pFVar9;
  local_18 = CONCAT22(local_18._2_2_,4);
  uVar2 = *(undefined8 *)(*(longlong *)((longlong)this + 0x208) + 0x5a0);
  uVar3 = *(undefined8 *)(*(longlong *)((longlong)this + 0x208) + 0x5a8);
  *(undefined1 *)((longlong)this + 0x238) = 1;
  *(undefined8 *)((longlong)this + 0x228) = uVar2;
  *(undefined8 *)((longlong)this + 0x230) = uVar3;
  *(undefined8 *)((longlong)this + 0x250) = 0;
  uVar3 = _UNK_15090c6d8;
  uVar2 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined8 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 600) = uVar2;
  *(undefined8 *)((longlong)this + 0x260) = uVar3;
  *(undefined4 *)((longlong)this + 0x268) = local_18;
  *(undefined1 *)((longlong)this + 0x26c) = 1;
  *(undefined8 *)((longlong)this + 0x280) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined8 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x298) = 0;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined8 *)((longlong)this + 0x2a8) = 0;
  *(undefined8 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined8 *)((longlong)this + 0x2c0) = 0;
  *(undefined8 *)((longlong)this + 0x2c8) = 0;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x2e0) = 0;
  *(undefined4 *)((longlong)this + 0x2e8) = 0;
  *(undefined8 *)((longlong)this + 0x2f0) = 0;
  *(undefined8 *)((longlong)this + 0x2f8) = 0;
  *(undefined8 *)((longlong)this + 0x300) = 0;
  *(undefined8 *)((longlong)this + 0x308) = 0;
  *(undefined1 *)((longlong)this + 0x311) = 0;
  *(undefined1 *)((longlong)this + 0x330) = 0;
  *(undefined1 *)((longlong)this + 0x350) = 0;
  *(undefined4 *)((longlong)this + 0x314) = 0x43e10000;
  *(undefined2 *)((longlong)this + 0x358) = 1;
  *(undefined1 *)((longlong)this + 0x35a) = 1;
  return this;
}

// FArguments @ 14d8ac440

FArguments * __thiscall
SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments(void *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  *(FTableRowStyle **)((longlong)this + 0x1f8) = pFVar5;
  *(SWidget **)((longlong)this + 0x200) = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x208) =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)this + 0x220) = 1;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined8 *)((longlong)this + 0x230) = 0;
  return this;
}

// FArguments @ 14d8ac500

FArguments * __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments(void *this)

{
  undefined4 uVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  *(FTableViewStyle **)((longlong)this + 0x1f8) = pFVar6;
  *(undefined1 *)((longlong)this + 0x208) = 0;
  *(undefined8 *)((longlong)this + 0x220) = 0;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined8 *)((longlong)this + 0x230) = 0;
  *(undefined8 *)((longlong)this + 0x250) = 0;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined8 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 0x268) = 0;
  *(undefined8 *)((longlong)this + 600) = 0;
  *(undefined8 *)((longlong)this + 0x260) = 0;
  *(undefined8 *)((longlong)this + 0x280) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined8 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  *(undefined4 *)((longlong)this + 0x298) = 0;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined8 *)((longlong)this + 0x2a8) = 0;
  *(undefined4 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined8 *)((longlong)this + 0x2c0) = 0;
  *(undefined4 *)((longlong)this + 0x2c8) = 0;
  *(undefined8 *)((longlong)this + 0x2e0) = 0;
  *(undefined8 *)((longlong)this + 0x2e8) = 0;
  *(undefined4 *)((longlong)this + 0x2f0) = 0;
  *(undefined1 *)((longlong)this + 0x2f4) = 0;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x308) = 0;
  *(undefined8 *)((longlong)this + 0x2f8) = 0;
  *(undefined8 *)((longlong)this + 0x300) = 0;
  *(undefined4 *)((longlong)this + 0x310) = 6;
  *(undefined1 *)((longlong)this + 0x314) = 1;
  *(undefined8 *)((longlong)this + 0x328) = 0;
  *(undefined8 *)((longlong)this + 0x318) = 0;
  *(undefined8 *)((longlong)this + 800) = 0;
  *(undefined8 *)((longlong)this + 0x340) = 0;
  *(undefined8 *)((longlong)this + 0x330) = 0;
  *(undefined8 *)((longlong)this + 0x338) = 0;
  *(undefined8 *)((longlong)this + 0x358) = 0;
  *(undefined8 *)((longlong)this + 0x348) = 0;
  *(undefined8 *)((longlong)this + 0x350) = 0;
  *(undefined8 *)((longlong)this + 0x370) = 0;
  *(undefined8 *)((longlong)this + 0x360) = 0;
  *(undefined8 *)((longlong)this + 0x368) = 0;
  *(undefined8 *)((longlong)this + 0x388) = 0;
  *(undefined8 *)((longlong)this + 0x378) = 0;
  *(undefined8 *)((longlong)this + 0x380) = 0;
  *(undefined8 *)((longlong)this + 0x3a0) = 0;
  *(undefined8 *)((longlong)this + 0x390) = 0;
  *(undefined8 *)((longlong)this + 0x398) = 0;
  *(undefined8 *)((longlong)this + 0x3b8) = 0;
  *(undefined8 *)((longlong)this + 0x3a8) = 0;
  *(undefined8 *)((longlong)this + 0x3b0) = 0;
  *(undefined4 *)((longlong)this + 0x3c0) = 3;
  *(undefined1 *)((longlong)this + 0x3c4) = 1;
  *(undefined8 *)((longlong)this + 0x3d8) = 0;
  *(undefined8 *)((longlong)this + 0x3c8) = 0;
  *(undefined8 *)((longlong)this + 0x3d0) = 0;
  *(undefined8 *)((longlong)this + 0x3e0) = 0;
  *(undefined8 *)((longlong)this + 1000) = 0;
  *(undefined8 *)((longlong)this + 0x3f8) = 0;
  *(undefined8 *)((longlong)this + 0x400) = 0;
  *(undefined1 *)((longlong)this + 0x418) = 0;
  *(undefined2 *)((longlong)this + 0x420) = 0x19;
  *(undefined1 *)((longlong)this + 0x3f0) = 1;
  *(undefined4 *)((longlong)this + 0x408) = 1;
  *(undefined1 *)((longlong)this + 0x40d) = 0;
  *(undefined8 *)((longlong)this + 0x438) = 0;
  *(undefined8 *)((longlong)this + 0x428) = 0;
  *(undefined8 *)((longlong)this + 0x430) = 0;
  *(undefined2 *)((longlong)this + 0x440) = 0;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  *(FScrollBarStyle **)((longlong)this + 0x448) = pFVar7;
  *(undefined2 *)((longlong)this + 0x450) = 0;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_14d8ac7ed;
  }
  lVar8 = 0;
LAB_14d8ac7ed:
  uVar1 = *(undefined4 *)((longlong)pTVar2->ShadowedValue + lVar8);
  *(undefined2 *)((longlong)this + 0x470) = 0x101;
  *(undefined4 *)((longlong)this + 0x454) = uVar1;
  *(undefined1 *)((longlong)this + 0x46e) = 0;
  *(undefined8 *)((longlong)this + 0x458) = 0x3f000000;
  *(undefined2 *)((longlong)this + 0x46c) = 0x101;
  *(undefined8 *)((longlong)this + 0x480) = 0;
  *(undefined8 *)((longlong)this + 0x460) = 0;
  *(undefined4 *)((longlong)this + 0x468) = 0;
  *(undefined8 *)((longlong)this + 0x488) = 0;
  *(undefined8 *)((longlong)this + 0x478) = 0;
  *(undefined2 *)((longlong)this + 0x490) = 0x100;
  *(undefined8 *)((longlong)this + 0x4a8) = 0;
  *(undefined8 *)((longlong)this + 0x498) = 0;
  *(undefined8 *)((longlong)this + 0x4a0) = 0;
  *(undefined8 *)((longlong)this + 0x4c0) = 0;
  *(undefined8 *)((longlong)this + 0x4b0) = 0;
  *(undefined8 *)((longlong)this + 0x4b8) = 0;
  *(undefined8 *)((longlong)this + 0x4c8) = 0;
  *(undefined8 *)((longlong)this + 0x4d0) = 0;
  *(undefined4 *)((longlong)this + 0x4d8) = 0;
  *(undefined1 *)((longlong)this + 0xca) = 1;
  return this;
}

// FArguments @ 14d8ac8b0

FArguments * __thiscall
STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments(void *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  *(FTableRowStyle **)((longlong)this + 0x1f8) = pFVar5;
  pIVar3 = FAppStyle::Get();
  *(ISlateStyle **)((longlong)this + 0x200) = pIVar3;
  *(undefined8 *)((longlong)this + 0x208) = 0;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined4 *)((longlong)this + 0x218) = 0;
  *(undefined8 *)((longlong)this + 0x220) = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined4 *)((longlong)this + 0x230) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined4 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 0x250) = 0;
  *(undefined8 *)((longlong)this + 600) = 0;
  *(undefined4 *)((longlong)this + 0x260) = 0;
  *(undefined8 *)((longlong)this + 0x268) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined4 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x280) = 0;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined4 *)((longlong)this + 0x290) = 0;
  *(undefined8 *)((longlong)this + 0x298) = 0;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined4 *)((longlong)this + 0x2a8) = 0;
  *(undefined8 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined1 *)((longlong)this + 0x2c0) = 1;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x2c8) = 0;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined2 *)((longlong)this + 0x2e0) = 1;
  *(undefined1 *)((longlong)this + 0x2e2) = 0;
  *(undefined4 *)((longlong)this + 0x2e4) = 0;
  *(SWidget **)((longlong)this + 0x2e8) = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x2f0) =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14d8aca20

FArguments * __thiscall
STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14d8acb90

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_OnGenerateTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateTile = 0;
  *(undefined8 *)&(this->_OnGenerateTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshTile = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTileReleased = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnTileViewScrolled = 0;
  *(undefined8 *)&(this->_OnTileViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTileViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
        *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 128.0;
  (this->_ItemHeight).bIsSet = true;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
        *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_ItemWidth).Value = 128.0;
  (this->_ItemWidth).bIsSet = true;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x8 = 0;
  (this->_ItemAlignment).Value = EvenlyDistributed;
  (this->_ItemAlignment).bIsSet = true;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  (this->_ScrollbarVisibility).Value.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->_ScrollbarVisibility).bIsSet = true;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  (this->_ScrollbarDisabledVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (!bVar3) goto LAB_14d8ace2c;
  }
  lVar7 = 0;
LAB_14d8ace2c:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar7);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_WrapHorizontalNavigation = true;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14d8aceb0

FArguments * __thiscall SAudioMaterialButton::FArguments::FArguments(FArguments *this)

{
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FAudioMaterialButtonStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->_bIsPressedAttribute).Value = false;
  (this->_bIsPressedAttribute).bIsSet = false;
  *(undefined8 *)&(this->_bIsPressedAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_bIsPressedAttribute).Getter = 0;
  *(undefined8 *)&(this->_bIsPressedAttribute).Getter.field_0x8 = 0;
  pFVar1 = FAudioWidgetsStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"AudioMaterialButton.Style");
  pFVar3 = (FAudioMaterialButtonStyle *)
           (**(code **)(*(longlong *)pFVar1 + 0xa0))
                     (pFVar1,FAudioMaterialButtonStyle::TypeName,*pFVar2,0,1);
  if ((pFVar3 == (FAudioMaterialButtonStyle *)0x0) &&
     (pFVar3 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&::Default);
      atexit(`FAudioMaterialButtonStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->_AudioMaterialButtonStyle = pFVar3;
  *(undefined8 *)&this->_OnBooleanValueChanged = 0;
  *(undefined8 *)&(this->_OnBooleanValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnBooleanValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  return this;
}

// FArguments @ 14d8acfe0

FArguments * __thiscall SAudioMaterialEnvelope::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Owner).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// FArguments @ 14d8ad010

FArguments * __thiscall SAudioMaterialKnob::FArguments::FArguments(FArguments *this)

{
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FAudioMaterialKnobStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->_Value).Value = 0.0;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_TuneSpeed).Value = 0.2;
  (this->_TuneSpeed).bIsSet = true;
  *(undefined8 *)&(this->_TuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_TuneSpeed).Getter = 0;
  *(undefined8 *)&(this->_TuneSpeed).Getter.field_0x8 = 0;
  (this->_FineTuneSpeed).Value = 0.05;
  (this->_FineTuneSpeed).bIsSet = true;
  *(undefined8 *)&(this->_FineTuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FineTuneSpeed).Getter = 0;
  *(undefined8 *)&(this->_FineTuneSpeed).Getter.field_0x8 = 0;
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_Locked).Value = false;
  (this->_Locked).bIsSet = true;
  *(undefined8 *)&(this->_Locked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Locked).Getter = 0;
  *(undefined8 *)&(this->_Locked).Getter.field_0x8 = 0;
  (this->_MouseUsesStep).Value = false;
  (this->_MouseUsesStep).bIsSet = true;
  *(undefined8 *)&(this->_MouseUsesStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MouseUsesStep).Getter = 0;
  *(undefined8 *)&(this->_MouseUsesStep).Getter.field_0x8 = 0;
  (this->_StepSize).Value = 0.01;
  (this->_StepSize).bIsSet = true;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StepSize).Getter = 0;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x8 = 0;
  pFVar1 = FAudioWidgetsStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"AudioMaterialKnob.Style");
  pFVar3 = (FAudioMaterialKnobStyle *)
           (**(code **)(*(longlong *)pFVar1 + 0xa0))
                     (pFVar1,FAudioMaterialKnobStyle::TypeName,*pFVar2,0,1);
  if ((pFVar3 == (FAudioMaterialKnobStyle *)0x0) &&
     (pFVar3 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&::Default);
      atexit(`FAudioMaterialKnobStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->_AudioMaterialKnobStyle = pFVar3;
  *(undefined8 *)&this->_OnFloatValueChanged = 0;
  *(undefined8 *)&(this->_OnFloatValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFloatValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  return this;
}

// FArguments @ 14d8ad230

FArguments * __thiscall SAudioMaterialMeter::FArguments::FArguments(FArguments *this)

{
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FAudioMaterialMeterStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_Orientation = Orient_Vertical;
  (this->_Owner).WeakPtr.ObjectIndex = 0;
  (this->_Owner).WeakPtr.ObjectSerialNumber = 0;
  pFVar1 = FAudioWidgetsStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"AudioMaterialMeter.Style");
  pFVar3 = (FAudioMaterialMeterStyle *)
           (**(code **)(*(longlong *)pFVar1 + 0xa0))
                     (pFVar1,FAudioMaterialMeterStyle::TypeName,*pFVar2,0,1);
  if ((pFVar3 == (FAudioMaterialMeterStyle *)0x0) &&
     (pFVar3 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&::Default);
      atexit(`FAudioMaterialMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->_AudioMaterialMeterStyle = pFVar3;
  (this->_MeterChannelInfo).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_MeterChannelInfo).Value.ArrayNum = 0;
  (this->_MeterChannelInfo).Value.ArrayMax = 0;
  (this->_MeterChannelInfo).bIsSet = false;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter = 0;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14d8ad350

FArguments * __thiscall SAudioMaterialSlider::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_TuneSpeed).Value = 0.2;
  (this->_Owner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->_TuneSpeed).bIsSet = true;
  *(undefined8 *)&(this->_TuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_TuneSpeed).Getter = 0;
  *(undefined8 *)&(this->_TuneSpeed).Getter.field_0x8 = 0;
  (this->_FineTuneSpeed).Value = 0.05;
  (this->_FineTuneSpeed).bIsSet = true;
  *(undefined8 *)&(this->_FineTuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FineTuneSpeed).Getter = 0;
  *(undefined8 *)&(this->_FineTuneSpeed).Getter.field_0x8 = 0;
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_Locked).Value = false;
  (this->_Locked).bIsSet = true;
  *(undefined8 *)&(this->_Locked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Locked).Getter = 0;
  *(undefined8 *)&(this->_Locked).Getter.field_0x8 = 0;
  (this->_MouseUsesStep).Value = false;
  (this->_MouseUsesStep).bIsSet = true;
  *(undefined8 *)&(this->_MouseUsesStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MouseUsesStep).Getter = 0;
  *(undefined8 *)&(this->_MouseUsesStep).Getter.field_0x8 = 0;
  (this->_StepSize).Value = 0.01;
  (this->_StepSize).bIsSet = true;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StepSize).Getter = 0;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x8 = 0;
  (this->_ValueAttribute).Value = 0.0;
  (this->_ValueAttribute).bIsSet = false;
  *(undefined8 *)&(this->_ValueAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ValueAttribute).Getter = 0;
  *(undefined8 *)&(this->_ValueAttribute).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueCommitted = 0;
  *(undefined8 *)&(this->_OnValueCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueCommitted).field_0x10 = 0;
  return this;
}

// FArguments @ 14d8ad490

FArguments * __thiscall SAudioMeter::FArguments::FArguments(FArguments *this)

{
  FLinearColor FVar1;
  FAudioWidgetsStyle *pFVar2;
  FName *pFVar3;
  FAudioMeterStyle *pFVar4;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_IndentHandle).Value = false;
  (this->_IndentHandle).bIsSet = false;
  *(undefined8 *)&(this->_IndentHandle).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IndentHandle).Getter = 0;
  *(undefined8 *)&(this->_IndentHandle).Getter.field_0x8 = 0;
  this->_Orientation = Orient_Horizontal;
  FVar1 = FLinearColor::Black;
  (this->_BackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_BackgroundColor).bIsSet = true;
  *(undefined8 *)&(this->_BackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_BackgroundColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Gray;
  (this->_MeterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterBackgroundColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_MeterBackgroundColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Green;
  (this->_MeterValueColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterValueColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterValueColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterValueColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterValueColor).Getter = 0;
  *(undefined8 *)&(this->_MeterValueColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Blue;
  (this->_MeterPeakColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterPeakColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterPeakColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterPeakColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterPeakColor).Getter = 0;
  *(undefined8 *)&(this->_MeterPeakColor).Getter.field_0x8 = 0;
  (this->_MeterClippingColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterClippingColor).bIsSet = false;
  *(undefined8 *)&(this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_MeterClippingColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterClippingColor).Getter = 0;
  *(undefined8 *)&(this->_MeterClippingColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_MeterScaleColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterScaleColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterScaleColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterScaleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterScaleColor).Getter = 0;
  *(undefined8 *)&(this->_MeterScaleColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Gray;
  (this->_MeterScaleLabelColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterScaleLabelColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Getter = 0;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Getter.field_0x8 = 0;
  pFVar2 = FAudioWidgetsStyle::Get();
  pFVar3 = ::FName::FName(&local_res8,"AudioMeter.Style");
  pFVar4 = (FAudioMeterStyle *)
           (**(code **)(*(longlong *)pFVar2 + 0xa0))(pFVar2,FAudioMeterStyle::TypeName,*pFVar3,0,1);
  if ((pFVar4 == (FAudioMeterStyle *)0x0) &&
     (pFVar4 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMeterStyle::FAudioMeterStyle(&::Default);
      atexit(`FAudioMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->_Style = pFVar4;
  (this->_MeterChannelInfo).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_MeterChannelInfo).Value.ArrayNum = 0;
  (this->_MeterChannelInfo).Value.ArrayMax = 0;
  (this->_MeterChannelInfo).bIsSet = false;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter = 0;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14d8ad730

FArguments * __thiscall SAudioMeterWidget::FArguments::FArguments(FArguments *this)

{
  FLinearColor FVar1;
  FAudioMeterWidgetStyle *pFVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_Orientation = Orient_Horizontal;
  FVar1 = FLinearColor::Black;
  (this->_BackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_BackgroundColor).bIsSet = true;
  *(undefined8 *)&(this->_BackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_BackgroundColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Gray;
  (this->_MeterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterBackgroundColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_MeterBackgroundColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Green;
  (this->_MeterValueColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterValueColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterValueColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterValueColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterValueColor).Getter = 0;
  *(undefined8 *)&(this->_MeterValueColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Blue;
  (this->_MeterPeakColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterPeakColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterPeakColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterPeakColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterPeakColor).Getter = 0;
  *(undefined8 *)&(this->_MeterPeakColor).Getter.field_0x8 = 0;
  (this->_MeterClippingColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterClippingColor).bIsSet = false;
  *(undefined8 *)&(this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_MeterClippingColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterClippingColor).Getter = 0;
  *(undefined8 *)&(this->_MeterClippingColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_MeterScaleColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterScaleColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterScaleColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterScaleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterScaleColor).Getter = 0;
  *(undefined8 *)&(this->_MeterScaleColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Gray;
  (this->_MeterScaleLabelColor).Value.ColorUseRule = UseColor_Specified;
  (this->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_MeterScaleLabelColor).bIsSet = true;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Getter = 0;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Getter.field_0x8 = 0;
  pFVar2 = FAudioMeterWidgetStyle::GetDefault();
  this->_Style = pFVar2;
  (this->_MeterChannelInfo).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_MeterChannelInfo).Value.ArrayNum = 0;
  (this->_MeterChannelInfo).Value.ArrayMax = 0;
  (this->_MeterChannelInfo).bIsSet = false;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter = 0;
  *(undefined8 *)&(this->_MeterChannelInfo).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14d8ad900

FArguments * __thiscall SAudioOscilloscopePanelWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FAudioWidgetsStyle *pFVar3;
  FName *pFVar4;
  FAudioOscilloscopePanelStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_InArgs).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_InArgs).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_HideSequenceGrid).Value = false;
  (this->_HideSequenceGrid).bIsSet = true;
  *(undefined8 *)&(this->_HideSequenceGrid).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HideSequenceGrid).Getter = 0;
  *(undefined8 *)&(this->_HideSequenceGrid).Getter.field_0x8 = 0;
  (this->_HideSequenceRuler).Value = false;
  (this->_HideSequenceRuler).bIsSet = true;
  *(undefined8 *)&(this->_HideSequenceRuler).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HideSequenceRuler).Getter = 0;
  *(undefined8 *)&(this->_HideSequenceRuler).Getter.field_0x8 = 0;
  (this->_HideValueGrid).Value = false;
  (this->_HideValueGrid).bIsSet = true;
  *(undefined8 *)&(this->_HideValueGrid).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HideValueGrid).Getter = 0;
  *(undefined8 *)&(this->_HideValueGrid).Getter.field_0x8 = 0;
  (this->_HideTriggerThresholdLine).Value = true;
  (this->_HideTriggerThresholdLine).bIsSet = true;
  *(undefined8 *)&(this->_HideTriggerThresholdLine).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HideTriggerThresholdLine).Getter = 0;
  *(undefined8 *)&(this->_HideTriggerThresholdLine).Getter.field_0x8 = 0;
  (this->_YAxisLabelsUnit).Value = Linear;
  (this->_YAxisLabelsUnit).bIsSet = true;
  *(undefined8 *)&(this->_YAxisLabelsUnit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_YAxisLabelsUnit).Getter = 0;
  *(undefined8 *)&(this->_YAxisLabelsUnit).Getter.field_0x8 = 0;
  this->_ValueGridMaxDivisionParameter = 2;
  this->_SequenceRulerDisplayUnit = Samples;
  this->_PanelLayoutType = Basic;
  pFVar3 = FAudioWidgetsStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"AudioOscilloscope.PanelStyle");
  pFVar5 = (FAudioOscilloscopePanelStyle *)
           (**(code **)(*(longlong *)pFVar3 + 0xa0))
                     (pFVar3,FAudioOscilloscopePanelStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FAudioOscilloscopePanelStyle *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
                  (&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                    ::__l2::Default);
        atexit(`FAudioOscilloscopePanelStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    this->_PanelStyle =
         &`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
          ::__l2::Default;
    return this;
  }
  this->_PanelStyle = pFVar5;
  return this;
}

// FArguments @ 14d8adac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SAudioRadialSlider::FArguments::FArguments(FArguments *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  ISlateStyle *pIVar5;
  FArguments *pFVar6;
  FName *pFVar7;
  FAudioRadialSliderStyle *pFVar8;
  FName local_res8;
  FName local_res10;
  undefined1 local_1c0 [8];
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [8];
  ForAnyElementType FStack_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_170 [8];
  ForAnyElementType FStack_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined1 local_140 [8];
  ForAnyElementType FStack_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [8];
  ForAnyElementType FStack_108;
  ulonglong local_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType FStack_d8;
  ulonglong local_d0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_SliderValue).Value = 0.0;
  (this->_SliderValue).bIsSet = false;
  *(undefined8 *)&(this->_SliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderValue).Getter = 0;
  *(undefined8 *)&(this->_SliderValue).Getter.field_0x8 = 0;
  (this->_WidgetLayout).Value = Layout_LabelTop;
  (this->_WidgetLayout).bIsSet = false;
  *(undefined8 *)&(this->_WidgetLayout).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WidgetLayout).Getter = 0;
  *(undefined8 *)&(this->_WidgetLayout).Getter.field_0x8 = 0;
  (this->_SliderProgressColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderProgressColor).bIsSet = false;
  *(undefined8 *)&(this->_SliderProgressColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_SliderProgressColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderProgressColor).Getter = 0;
  *(undefined8 *)&(this->_SliderProgressColor).Getter.field_0x8 = 0;
  (this->_SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderBarColor).bIsSet = false;
  *(undefined8 *)&(this->_SliderBarColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x8 = 0;
  (this->_CenterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_CenterBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_CenterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CenterBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_CenterBackgroundColor).Getter.field_0x8 = 0;
  (this->_HandStartEndRatio).Value.field0_0x0._s_0.X = 0.0;
  (this->_HandStartEndRatio).Value.field0_0x0._s_0.Y = 0.0;
  (this->_HandStartEndRatio).bIsSet = false;
  *(undefined8 *)&(this->_HandStartEndRatio).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HandStartEndRatio).Getter = 0;
  *(undefined8 *)&(this->_HandStartEndRatio).Getter.field_0x8 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->_SliderCurve);
  (this->_DesiredSizeOverride).Value.bIsSet = false;
  (this->_DesiredSizeOverride).bIsSet = false;
  *(undefined8 *)&(this->_DesiredSizeOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DesiredSizeOverride).Getter = 0;
  *(undefined8 *)&(this->_DesiredSizeOverride).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  local_1b0 = 0;
  (this->_SliderValue).Value = 0.0;
  local_1c0 = (undefined1  [8])0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  (this->_SliderValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
             (FWriteAccessScope *)&local_c8);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c0);
  local_1a8 = 2;
  local_190 = 0;
  local_1a4 = 1;
  local_1a0 = (undefined1  [8])0x0;
  FStack_198.Data = (FScriptContainerElement *)0x0;
  (this->_WidgetLayout).Value = Layout_LabelBottom;
  (this->_WidgetLayout).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WidgetLayout).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (FWriteAccessScope *)&local_b0);
  if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_198.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
    local_190 = local_190 & 0xffffffff00000000;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (FStack_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a0);
  dVar3 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  local_e8 = 1;
  local_d0 = 0;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  dStack_f0 = _UNK_15061cbc8;
  (this->_HandStartEndRatio).bIsSet = true;
  local_e0 = (undefined1  [8])0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  (this->_HandStartEndRatio).Value.field0_0x0._s_0.X = dVar2;
  (this->_HandStartEndRatio).Value.field0_0x0._s_0.Y = dVar3;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HandStartEndRatio).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_98);
  if (((int)local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  ::FName::FName(&local_res8,"AudioWidgetsStyle");
  pIVar5 = FSlateStyleRegistry::FindSlateStyle(&local_res8);
  if (pIVar5 == (ISlateStyle *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6387326030893285425>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Public\\SAudioRadialSlider.h"
                       ,0x31,"AudioWidgetsStyle");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FArguments *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    pFVar7 = ::FName::FName(&local_res10,"AudioRadialSlider.Style");
    pFVar8 = (FAudioRadialSliderStyle *)
             (**(code **)((longlong)*pIVar5 + 0xa0))
                       (pIVar5,FAudioRadialSliderStyle::TypeName,*pFVar7,0,1);
    if (pFVar8 == (FAudioRadialSliderStyle *)0x0) {
      pFVar8 = FAudioRadialSliderStyle::GetDefault();
    }
    this->_Style = pFVar8;
    local_188 = *(undefined8 *)&(pFVar8->CenterBackgroundColor).SpecifiedColor.field0_0x0;
    uStack_180 = *(undefined8 *)
                  ((longlong)&(pFVar8->CenterBackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_178._0_1_ = (pFVar8->CenterBackgroundColor).ColorUseRule;
    local_178._1_1_ = (pFVar8->CenterBackgroundColor).ColorTableId;
    local_178._2_2_ = *(undefined2 *)&(pFVar8->CenterBackgroundColor).field_0x12;
    *(undefined8 *)&(this->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_188;
    *(undefined8 *)((longlong)&(this->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_180;
    local_174 = 1;
    local_170 = (undefined1  [8])0x0;
    FStack_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    (this->_CenterBackgroundColor).Value.ColorUseRule = (undefined1)local_178;
    (this->_CenterBackgroundColor).Value.ColorTableId = local_178._1_1_;
    *(undefined2 *)&(this->_CenterBackgroundColor).Value.field_0x12 = local_178._2_2_;
    (this->_CenterBackgroundColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CenterBackgroundColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
               (FWriteAccessScope *)&local_80);
    if (((int)local_160 != 0) && (FStack_168.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_168.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_168,0,0,0x10);
      local_160 = local_160 & 0xffffffff00000000;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (FStack_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_170);
    pFVar8 = this->_Style;
    local_158 = *(undefined8 *)&(pFVar8->SliderProgressColor).SpecifiedColor.field0_0x0;
    uStack_150 = *(undefined8 *)
                  ((longlong)&(pFVar8->SliderProgressColor).SpecifiedColor.field0_0x0 + 8);
    local_148._0_1_ = (pFVar8->SliderProgressColor).ColorUseRule;
    local_148._1_1_ = (pFVar8->SliderProgressColor).ColorTableId;
    local_148._2_2_ = *(undefined2 *)&(pFVar8->SliderProgressColor).field_0x12;
    *(undefined8 *)&(this->_SliderProgressColor).Value.SpecifiedColor.field0_0x0 = local_158;
    *(undefined8 *)((longlong)&(this->_SliderProgressColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_150;
    (this->_SliderProgressColor).Value.ColorUseRule = (undefined1)local_148;
    (this->_SliderProgressColor).Value.ColorTableId = local_148._1_1_;
    *(undefined2 *)&(this->_SliderProgressColor).Value.field_0x12 = local_148._2_2_;
    local_130 = 0;
    local_144 = 1;
    local_140 = (undefined1  [8])0x0;
    FStack_138.Data = (FScriptContainerElement *)0x0;
    (this->_SliderProgressColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderProgressColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
               (FWriteAccessScope *)&local_68);
    if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_138.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
      local_130 = local_130 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_140);
    pFVar8 = this->_Style;
    local_128 = *(undefined8 *)&(pFVar8->SliderBarColor).SpecifiedColor.field0_0x0;
    uStack_120 = *(undefined8 *)((longlong)&(pFVar8->SliderBarColor).SpecifiedColor.field0_0x0 + 8);
    local_118._0_1_ = (pFVar8->SliderBarColor).ColorUseRule;
    local_118._1_1_ = (pFVar8->SliderBarColor).ColorTableId;
    local_118._2_2_ = *(undefined2 *)&(pFVar8->SliderBarColor).field_0x12;
    *(undefined8 *)&(this->_SliderBarColor).Value.SpecifiedColor.field0_0x0 = local_128;
    *(undefined8 *)((longlong)&(this->_SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_120;
    (this->_SliderBarColor).Value.ColorUseRule = (undefined1)local_118;
    (this->_SliderBarColor).Value.ColorTableId = local_118._1_1_;
    *(undefined2 *)&(this->_SliderBarColor).Value.field_0x12 = local_118._2_2_;
    local_100 = 0;
    local_114 = 1;
    local_110 = (undefined1  [8])0x0;
    FStack_108.Data = (FScriptContainerElement *)0x0;
    (this->_SliderBarColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBarColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_110);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
               (FWriteAccessScope *)&local_50);
    if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_108.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
      local_100 = local_100 & 0xffffffff00000000;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (FStack_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_108.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_110);
  }
  return this;
}

// FArguments @ 14d8ae1b0

FArguments * __thiscall SAudioSliderBase::FArguments::FArguments(FArguments *this)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FArguments *pFVar4;
  FName *pFVar5;
  FAudioSliderStyle *pFVar6;
  FName local_res8;
  FName local_res10;
  undefined1 local_190 [8];
  ForAnyElementType FStack_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined1 local_160 [8];
  ForAnyElementType FStack_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_130 [8];
  ForAnyElementType FStack_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [8];
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0 [8];
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this_00 = &(this->_SliderValue).Getter;
  *(undefined4 *)&(this->_SliderValue).Getter.field_0x14 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->_SliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderValue).Getter.field_0x8 = 0;
  (this->_AlwaysShowLabel).Value = false;
  (this->_AlwaysShowLabel).bIsSet = false;
  *(undefined8 *)&(this->_AlwaysShowLabel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AlwaysShowLabel).Getter = 0;
  *(undefined8 *)&(this->_AlwaysShowLabel).Getter.field_0x8 = 0;
  (this->_SliderBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_SliderBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_SliderBackgroundColor).Getter.field_0x8 = 0;
  (this->_SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderBarColor).bIsSet = false;
  *(undefined8 *)&(this->_SliderBarColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x8 = 0;
  (this->_SliderThumbColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderThumbColor).bIsSet = false;
  *(undefined8 *)&(this->_SliderThumbColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_SliderThumbColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_SliderThumbColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_SliderThumbColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderThumbColor).Getter = 0;
  *(undefined8 *)&(this->_SliderThumbColor).Getter.field_0x8 = 0;
  (this->_WidgetBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_WidgetBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->_WidgetBackgroundColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_WidgetBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WidgetBackgroundColor).Getter = 0;
  (this->_DesiredSizeOverride).Value.bIsSet = false;
  (this->_DesiredSizeOverride).bIsSet = false;
  *(undefined8 *)&(this->_DesiredSizeOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DesiredSizeOverride).Getter = 0;
  *(undefined8 *)&(this->_DesiredSizeOverride).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueCommitted = 0;
  *(undefined8 *)&(this->_OnValueCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueCommitted).field_0x10 = 0;
  (this->_SliderValue).Value = 0.0;
  (this->_SliderValue).bIsSet = true;
  local_190 = (undefined1  [8])0x0;
  FStack_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
             (FWriteAccessScope *)&local_b8);
  if (((int)local_180 != 0) && (FStack_188.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_188.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_188,0,0,0x10);
    local_180 = local_180 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_190);
  this->_Orientation = Orient_Vertical;
  ::FName::FName(&local_res8,"AudioWidgetsStyle");
  pIVar3 = FSlateStyleRegistry::FindSlateStyle(&local_res8);
  if (pIVar3 == (ISlateStyle *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7552344718911209506>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Public\\SAudioSlider.h"
                       ,0x22,"AudioWidgetsStyle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FArguments *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    pFVar5 = ::FName::FName(&local_res10,"AudioSlider.Style");
    pFVar6 = (FAudioSliderStyle *)
             (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FAudioSliderStyle::TypeName,*pFVar5,0,1)
    ;
    if (pFVar6 == (FAudioSliderStyle *)0x0) {
      pFVar6 = FAudioSliderStyle::GetDefault();
    }
    this->_Style = pFVar6;
    local_178 = *(undefined8 *)&(pFVar6->SliderBackgroundColor).SpecifiedColor.field0_0x0;
    uStack_170 = *(undefined8 *)
                  ((longlong)&(pFVar6->SliderBackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_168._0_1_ = (pFVar6->SliderBackgroundColor).ColorUseRule;
    local_168._1_1_ = (pFVar6->SliderBackgroundColor).ColorTableId;
    local_168._2_2_ = *(undefined2 *)&(pFVar6->SliderBackgroundColor).field_0x12;
    *(undefined8 *)&(this->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_178;
    *(undefined8 *)((longlong)&(this->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_170;
    local_164 = 1;
    local_160 = (undefined1  [8])0x0;
    FStack_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    (this->_SliderBackgroundColor).Value.ColorUseRule = (undefined1)local_168;
    (this->_SliderBackgroundColor).Value.ColorTableId = local_168._1_1_;
    *(undefined2 *)&(this->_SliderBackgroundColor).Value.field_0x12 = local_168._2_2_;
    (this->_SliderBackgroundColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBackgroundColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
               (FWriteAccessScope *)&local_a0);
    if (((int)local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_158.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
      local_150 = local_150 & 0xffffffff00000000;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (FStack_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_158.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_160);
    pFVar6 = this->_Style;
    local_148 = *(undefined8 *)&(pFVar6->SliderBarColor).SpecifiedColor.field0_0x0;
    uStack_140 = *(undefined8 *)((longlong)&(pFVar6->SliderBarColor).SpecifiedColor.field0_0x0 + 8);
    local_138._0_1_ = (pFVar6->SliderBarColor).ColorUseRule;
    local_138._1_1_ = (pFVar6->SliderBarColor).ColorTableId;
    local_138._2_2_ = *(undefined2 *)&(pFVar6->SliderBarColor).field_0x12;
    *(undefined8 *)&(this->_SliderBarColor).Value.SpecifiedColor.field0_0x0 = local_148;
    *(undefined8 *)((longlong)&(this->_SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_140;
    (this->_SliderBarColor).Value.ColorUseRule = (undefined1)local_138;
    (this->_SliderBarColor).Value.ColorTableId = local_138._1_1_;
    *(undefined2 *)&(this->_SliderBarColor).Value.field_0x12 = local_138._2_2_;
    local_120 = 0;
    local_134 = 1;
    local_130 = (undefined1  [8])0x0;
    FStack_128.Data = (FScriptContainerElement *)0x0;
    (this->_SliderBarColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBarColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_88);
    if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_128.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
      local_120 = local_120 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_128.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_130);
    pFVar6 = this->_Style;
    local_118 = *(undefined8 *)&(pFVar6->SliderThumbColor).SpecifiedColor.field0_0x0;
    uStack_110 = *(undefined8 *)
                  ((longlong)&(pFVar6->SliderThumbColor).SpecifiedColor.field0_0x0 + 8);
    local_108._0_1_ = (pFVar6->SliderThumbColor).ColorUseRule;
    local_108._1_1_ = (pFVar6->SliderThumbColor).ColorTableId;
    local_108._2_2_ = *(undefined2 *)&(pFVar6->SliderThumbColor).field_0x12;
    *(undefined8 *)&(this->_SliderThumbColor).Value.SpecifiedColor.field0_0x0 = local_118;
    *(undefined8 *)((longlong)&(this->_SliderThumbColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_110;
    (this->_SliderThumbColor).Value.ColorUseRule = (undefined1)local_108;
    (this->_SliderThumbColor).Value.ColorTableId = local_108._1_1_;
    *(undefined2 *)&(this->_SliderThumbColor).Value.field_0x12 = local_108._2_2_;
    local_f0 = 0;
    local_104 = 1;
    local_100 = (undefined1  [8])0x0;
    FStack_f8.Data = (FScriptContainerElement *)0x0;
    (this->_SliderThumbColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderThumbColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_70);
    if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
      local_f0 = local_f0 & 0xffffffff00000000;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_100);
    pFVar6 = this->_Style;
    local_e8 = *(undefined8 *)&(pFVar6->WidgetBackgroundColor).SpecifiedColor.field0_0x0;
    uStack_e0 = *(undefined8 *)
                 ((longlong)&(pFVar6->WidgetBackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_d8._0_1_ = (pFVar6->WidgetBackgroundColor).ColorUseRule;
    local_d8._1_1_ = (pFVar6->WidgetBackgroundColor).ColorTableId;
    local_d8._2_2_ = *(undefined2 *)&(pFVar6->WidgetBackgroundColor).field_0x12;
    *(undefined8 *)&(this->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_e8;
    *(undefined8 *)((longlong)&(this->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
         uStack_e0;
    (this->_WidgetBackgroundColor).Value.ColorUseRule = (undefined1)local_d8;
    (this->_WidgetBackgroundColor).Value.ColorTableId = local_d8._1_1_;
    *(undefined2 *)&(this->_WidgetBackgroundColor).Value.field_0x12 = local_d8._2_2_;
    local_c0 = 0;
    local_d4 = 1;
    local_d0 = (undefined1  [8])0x0;
    FStack_c8.Data = (FScriptContainerElement *)0x0;
    (this->_WidgetBackgroundColor).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WidgetBackgroundColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
               (FWriteAccessScope *)&local_58);
    if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
      local_c0 = local_c0 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d0);
  }
  return this;
}

// FArguments @ 14d8ae7f0

FArguments * __thiscall SAudioSpectrogram::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ViewMinFrequency).Value = 20.0;
  (this->_ViewMinFrequency).bIsSet = true;
  *(undefined8 *)&(this->_ViewMinFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ViewMinFrequency).Getter = 0;
  *(undefined8 *)&(this->_ViewMinFrequency).Getter.field_0x8 = 0;
  (this->_ViewMaxFrequency).Value = 20000.0;
  (this->_ViewMaxFrequency).bIsSet = true;
  *(undefined8 *)&(this->_ViewMaxFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ViewMaxFrequency).Getter = 0;
  *(undefined8 *)&(this->_ViewMaxFrequency).Getter.field_0x8 = 0;
  (this->_ColorMapMinSoundLevel).Value = -84.0;
  (this->_ColorMapMinSoundLevel).bIsSet = true;
  *(undefined8 *)&(this->_ColorMapMinSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorMapMinSoundLevel).Getter = 0;
  *(undefined8 *)&(this->_ColorMapMinSoundLevel).Getter.field_0x8 = 0;
  (this->_ColorMapMaxSoundLevel).Value = 12.0;
  (this->_ColorMapMaxSoundLevel).bIsSet = true;
  *(undefined8 *)&(this->_ColorMapMaxSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorMapMaxSoundLevel).Getter = 0;
  *(undefined8 *)&(this->_ColorMapMaxSoundLevel).Getter.field_0x8 = 0;
  (this->_ColorMap).Value = BlackToWhite;
  (this->_ColorMap).bIsSet = true;
  *(undefined8 *)&(this->_ColorMap).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorMap).Getter = 0;
  *(undefined8 *)&(this->_ColorMap).Getter.field_0x8 = 0;
  (this->_FrequencyAxisScale).Value = Logarithmic;
  (this->_FrequencyAxisScale).bIsSet = true;
  *(undefined8 *)&(this->_FrequencyAxisScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FrequencyAxisScale).Getter = 0;
  *(undefined8 *)&(this->_FrequencyAxisScale).Getter.field_0x8 = 0;
  (this->_FrequencyAxisPixelBucketMode).Value = Average;
  (this->_FrequencyAxisPixelBucketMode).bIsSet = true;
  *(undefined8 *)&(this->_FrequencyAxisPixelBucketMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FrequencyAxisPixelBucketMode).Getter = 0;
  *(undefined8 *)&(this->_FrequencyAxisPixelBucketMode).Getter.field_0x8 = 0;
  (this->_Orientation).Value = Orient_Horizontal;
  (this->_Orientation).bIsSet = true;
  *(undefined8 *)&(this->_Orientation).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Orientation).Getter = 0;
  *(undefined8 *)&(this->_Orientation).Getter.field_0x8 = 0;
  (this->_AllowContextMenu).Value = true;
  (this->_AllowContextMenu).bIsSet = true;
  *(undefined8 *)&(this->_AllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->_AllowContextMenu).Getter.field_0x8 = 0;
  (this->_FillBackground).Value = false;
  (this->_FillBackground).bIsSet = true;
  *(undefined8 *)&(this->_FillBackground).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FillBackground).Getter = 0;
  *(undefined8 *)&(this->_FillBackground).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnFrequencyAxisScaleMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnFrequencyAxisScaleMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFrequencyAxisScaleMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnColorMapMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnColorMapMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnColorMapMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnOrientationMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnOrientationMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnOrientationMenuEntryClicked).field_0x10 = 0;
  return this;
}

// FArguments @ 14d8ae9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SAudioSpectrumPlot::FArguments::FArguments(FArguments *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FAudioWidgetsStyle *pFVar3;
  FName *pFVar4;
  FAudioSpectrumPlotStyle *pFVar5;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pFVar3 = FAudioWidgetsStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"AudioSpectrumPlot.Style");
  pFVar5 = (FAudioSpectrumPlotStyle *)
           (**(code **)(*(longlong *)pFVar3 + 0xa0))
                     (pFVar3,FAudioSpectrumPlotStyle::TypeName,*pFVar4,0,1);
  if ((pFVar5 == (FAudioSpectrumPlotStyle *)0x0) &&
     (pFVar5 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioSpectrumPlotStyle::FAudioSpectrumPlotStyle(&::Default);
      atexit(`FAudioSpectrumPlotStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->_Style = pFVar5;
  (this->_ViewMinFrequency).Value = 20.0;
  (this->_ViewMinFrequency).bIsSet = true;
  *(undefined8 *)&(this->_ViewMinFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ViewMinFrequency).Getter = 0;
  *(undefined8 *)&(this->_ViewMinFrequency).Getter.field_0x8 = 0;
  (this->_ViewMaxFrequency).Value = 20000.0;
  (this->_ViewMaxFrequency).bIsSet = true;
  *(undefined8 *)&(this->_ViewMaxFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ViewMaxFrequency).Getter = 0;
  *(undefined8 *)&(this->_ViewMaxFrequency).Getter.field_0x8 = 0;
  (this->_ViewMinSoundLevel).Value = -60.0;
  (this->_ViewMinSoundLevel).bIsSet = true;
  *(undefined8 *)&(this->_ViewMinSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ViewMinSoundLevel).Getter = 0;
  *(undefined8 *)&(this->_ViewMinSoundLevel).Getter.field_0x8 = 0;
  (this->_ViewMaxSoundLevel).Value = 12.0;
  (this->_ViewMaxSoundLevel).bIsSet = true;
  *(undefined8 *)&(this->_ViewMaxSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ViewMaxSoundLevel).Getter = 0;
  *(undefined8 *)&(this->_ViewMaxSoundLevel).Getter.field_0x8 = 0;
  (this->_TiltExponent).Value = 0.0;
  (this->_TiltExponent).bIsSet = true;
  *(undefined8 *)&(this->_TiltExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_TiltExponent).Getter = 0;
  *(undefined8 *)&(this->_TiltExponent).Getter.field_0x8 = 0;
  (this->_TiltPivotFrequency).Value = 24000.0;
  (this->_TiltPivotFrequency).bIsSet = true;
  *(undefined8 *)&(this->_TiltPivotFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_TiltPivotFrequency).Getter = 0;
  *(undefined8 *)&(this->_TiltPivotFrequency).Getter.field_0x8 = 0;
  (this->_SelectedFrequency).Value.bIsSet = false;
  (this->_SelectedFrequency).bIsSet = false;
  *(undefined8 *)&(this->_SelectedFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectedFrequency).Getter = 0;
  *(undefined8 *)&(this->_SelectedFrequency).Getter.field_0x8 = 0;
  (this->_DisplayCrosshair).Value = false;
  (this->_DisplayCrosshair).bIsSet = true;
  *(undefined8 *)&(this->_DisplayCrosshair).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplayCrosshair).Getter = 0;
  *(undefined8 *)&(this->_DisplayCrosshair).Getter.field_0x8 = 0;
  (this->_DisplayFrequencyAxisLabels).Value = true;
  uVar2 = _UNK_15090c6d8;
  uVar1 = ___xmm_3f8000003f800000000000003f800000;
  (this->_DisplayFrequencyAxisLabels).bIsSet = true;
  *(undefined8 *)&(this->_DisplayFrequencyAxisLabels).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplayFrequencyAxisLabels).Getter = 0;
  *(undefined8 *)&(this->_DisplayFrequencyAxisLabels).Getter.field_0x8 = 0;
  (this->_DisplaySoundLevelAxisLabels).Value = true;
  (this->_DisplaySoundLevelAxisLabels).bIsSet = true;
  *(undefined8 *)&(this->_DisplaySoundLevelAxisLabels).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplaySoundLevelAxisLabels).Getter = 0;
  *(undefined8 *)&(this->_DisplaySoundLevelAxisLabels).Getter.field_0x8 = 0;
  (this->_DisplayFrequencyGridLines).Value = true;
  (this->_DisplayFrequencyGridLines).bIsSet = true;
  *(undefined8 *)&(this->_DisplayFrequencyGridLines).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplayFrequencyGridLines).Getter = 0;
  *(undefined8 *)&(this->_DisplayFrequencyGridLines).Getter.field_0x8 = 0;
  (this->_DisplaySoundLevelGridLines).Value = true;
  (this->_DisplaySoundLevelGridLines).bIsSet = true;
  *(undefined8 *)&(this->_DisplaySoundLevelGridLines).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplaySoundLevelGridLines).Getter = 0;
  *(undefined8 *)&(this->_DisplaySoundLevelGridLines).Getter.field_0x8 = 0;
  (this->_FrequencyAxisScale).Value = Logarithmic;
  (this->_FrequencyAxisScale).bIsSet = true;
  *(undefined8 *)&(this->_FrequencyAxisScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FrequencyAxisScale).Getter = 0;
  *(undefined8 *)&(this->_FrequencyAxisScale).Getter.field_0x8 = 0;
  (this->_FrequencyAxisPixelBucketMode).Value = Average;
  (this->_FrequencyAxisPixelBucketMode).bIsSet = true;
  *(undefined8 *)&(this->_FrequencyAxisPixelBucketMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FrequencyAxisPixelBucketMode).Getter = 0;
  *(undefined8 *)&(this->_FrequencyAxisPixelBucketMode).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_BackgroundColor).Value.SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->_BackgroundColor).bIsSet = true;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_BackgroundColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_BackgroundColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_BackgroundColor).Value.field_0x12 = local_18._2_2_;
  *(undefined8 *)&(this->_BackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_BackgroundColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_GridColor).Value.SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->_GridColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->_GridColor).bIsSet = true;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_GridColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_GridColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_GridColor).Value.field_0x12 = local_18._2_2_;
  *(undefined8 *)&(this->_GridColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_GridColor).Getter = 0;
  *(undefined8 *)&(this->_GridColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_AxisLabelColor).Value.SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->_AxisLabelColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->_AxisLabelColor).bIsSet = true;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_AxisLabelColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_AxisLabelColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_AxisLabelColor).Value.field_0x12 = local_18._2_2_;
  *(undefined8 *)&(this->_AxisLabelColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AxisLabelColor).Getter = 0;
  *(undefined8 *)&(this->_AxisLabelColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_CrosshairColor).Value.SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->_CrosshairColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->_CrosshairColor).bIsSet = true;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_CrosshairColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_CrosshairColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_CrosshairColor).Value.field_0x12 = local_18._2_2_;
  *(undefined8 *)&(this->_CrosshairColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CrosshairColor).Getter = 0;
  *(undefined8 *)&(this->_CrosshairColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_SpectrumColor).Value.SpecifiedColor.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->_SpectrumColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->_SpectrumColor).bIsSet = true;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_SpectrumColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_SpectrumColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_SpectrumColor).Value.field_0x12 = local_18._2_2_;
  *(undefined8 *)&(this->_SpectrumColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SpectrumColor).Getter = 0;
  *(undefined8 *)&(this->_SpectrumColor).Getter.field_0x8 = 0;
  (this->_AllowContextMenu).Value = true;
  (this->_AllowContextMenu).bIsSet = true;
  *(undefined8 *)&(this->_AllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->_AllowContextMenu).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnTiltSpectrumMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnTiltSpectrumMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTiltSpectrumMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnFrequencyAxisScaleMenuEntryClicked = 0;
  *(undefined8 *)&(this->_OnFrequencyAxisScaleMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFrequencyAxisScaleMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnDisplayFrequencyAxisLabelsButtonToggled = 0;
  *(undefined8 *)&(this->_OnDisplayFrequencyAxisLabelsButtonToggled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDisplayFrequencyAxisLabelsButtonToggled).field_0x10 = 0;
  *(undefined8 *)&this->_OnDisplaySoundLevelAxisLabelsButtonToggled = 0;
  *(undefined8 *)&(this->_OnDisplaySoundLevelAxisLabelsButtonToggled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDisplaySoundLevelAxisLabelsButtonToggled).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetAudioSpectrumData = 0;
  *(undefined8 *)&(this->_OnGetAudioSpectrumData).field_0x8 = 0;
  *(undefined4 *)&(this->_OnGetAudioSpectrumData).field_0x10 = 0;
  return this;
}

// FArguments @ 14d8aee40

FArguments * __thiscall SAudioTextBox::FArguments::FArguments(FArguments *this)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FArguments *pFVar4;
  FName *pFVar5;
  FAudioTextBoxStyle *pFVar6;
  FName local_res8;
  FName local_res10;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  undefined2 local_58;
  undefined1 local_50 [8];
  ForAnyElementType FStack_48;
  ulonglong local_40;
  undefined2 local_38;
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this_00 = &(this->_ShowLabelOnlyOnHover).Getter;
  *(undefined4 *)&(this->_ShowLabelOnlyOnHover).Getter.field_0x14 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->_ShowLabelOnlyOnHover).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShowLabelOnlyOnHover).Getter.field_0x8 = 0;
  (this->_ShowUnitsText).Value = false;
  (this->_ShowUnitsText).bIsSet = false;
  *(undefined8 *)&(this->_ShowUnitsText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShowUnitsText).Getter = 0;
  *(undefined8 *)&(this->_ShowUnitsText).Getter.field_0x8 = 0;
  (this->_LabelBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_LabelBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->_LabelBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_LabelBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_LabelBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_LabelBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LabelBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_LabelBackgroundColor).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnValueTextCommitted = 0;
  *(undefined8 *)&(this->_OnValueTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueTextCommitted).field_0x10 = 0;
  (this->_ShowLabelOnlyOnHover).Value = false;
  (this->_ShowLabelOnlyOnHover).bIsSet = true;
  local_58 = 0x100;
  local_50 = (undefined1  [8])0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)&local_88);
  if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = local_40 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  local_38 = 0x101;
  local_20 = 0;
  (this->_ShowUnitsText).Value = true;
  (this->_ShowUnitsText).bIsSet = true;
  local_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShowUnitsText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_70);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  ::FName::FName(&local_res8,"AudioWidgetsStyle");
  pIVar3 = FSlateStyleRegistry::FindSlateStyle(&local_res8);
  if (pIVar3 == (ISlateStyle *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2804457157154570298>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Public\\SAudioTextBox.h"
                       ,0x3a,"AudioWidgetsStyle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FArguments *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    pFVar5 = ::FName::FName(&local_res10,"AudioTextBox.Style");
    pFVar6 = (FAudioTextBoxStyle *)
             (**(code **)((longlong)*pIVar3 + 0xa0))
                       (pIVar3,FAudioTextBoxStyle::TypeName,*pFVar5,0,1);
    if (pFVar6 == (FAudioTextBoxStyle *)0x0) {
      pFVar6 = FAudioTextBoxStyle::GetDefault();
    }
    this->_Style = pFVar6;
  }
  return this;
}

// FArguments @ 14d8af0c0

FArguments * __thiscall SAudioVectorscopePanelWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FAudioWidgetsStyle *pFVar3;
  FName *pFVar4;
  FAudioVectorscopePanelStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_InArgs).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_InArgs).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_HideGrid).Value = false;
  (this->_HideGrid).bIsSet = true;
  *(undefined8 *)&(this->_HideGrid).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HideGrid).Getter = 0;
  *(undefined8 *)&(this->_HideGrid).Getter.field_0x8 = 0;
  this->_ValueGridMaxDivisionParameter = 2;
  this->_PanelLayoutType = Basic;
  pFVar3 = FAudioWidgetsStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"AudioVectorscope.PanelStyle");
  pFVar5 = (FAudioVectorscopePanelStyle *)
           (**(code **)(*(longlong *)pFVar3 + 0xa0))
                     (pFVar3,FAudioVectorscopePanelStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FAudioVectorscopePanelStyle *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
                  (&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                    ::__l2::Default);
        atexit(`FAudioVectorscopePanelStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    this->_PanelStyle =
         &`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
          ::__l2::Default;
    return this;
  }
  this->_PanelStyle = pFVar5;
  return this;
}

// FArguments @ 14d8af200

FArguments * __thiscall SFixedSampledSequenceRuler::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_DisplayUnit = Seconds;
  (this->_DisplayPlayhead).Value = false;
  (this->_DisplayPlayhead).bIsSet = false;
  *(undefined8 *)&(this->_DisplayPlayhead).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplayPlayhead).Getter = 0;
  *(undefined8 *)&(this->_DisplayPlayhead).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14d8af250

FArguments * __thiscall SFixedSampledSequenceVectorViewer::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  (this->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  (this->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (this->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (this->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (this->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (this->_SequenceDrawingParams).Orientation = Horizontal;
  this->_ScaleFactor = 1.0;
  return this;
}

// FArguments @ 14d8af2c0

FArguments * __thiscall SFixedSampledSequenceViewer::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  (this->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  (this->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (this->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (this->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (this->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (this->_SequenceDrawingParams).Orientation = Horizontal;
  this->_HideBackground = false;
  this->_HideGrid = false;
  return this;
}

// FArguments @ 14d8af330

FArguments * __thiscall SPlayheadOverlay::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14d8af350

FArguments * __thiscall SSampledSequenceValueGridOverlay::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_NumDimensions = 1;
  this->_DivideMode = EvenSplit;
  (this->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  this->_HideLabels = false;
  this->_HideGrid = false;
  this->_MaxDivisionParameter = 2;
  (this->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  (this->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (this->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (this->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (this->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (this->_SequenceDrawingParams).Orientation = Horizontal;
  *(undefined8 *)&this->_ValueGridLabelGenerator = 0;
  *(undefined8 *)&(this->_ValueGridLabelGenerator).field_0x28 = 0;
  return this;
}

// FArguments @ 14d8af3f0

FArguments * __thiscall STriggerThresholdLineWidget::FArguments::FArguments(FArguments *this)

{
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FTriggerThresholdLineStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  this->_TriggerThreshold = 0.0;
  (this->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  (this->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (this->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (this->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (this->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (this->_SequenceDrawingParams).Orientation = Horizontal;
  pFVar1 = FAudioWidgetsStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"TriggerThresholdLine.Style");
  pFVar3 = (FTriggerThresholdLineStyle *)
           (**(code **)(*(longlong *)pFVar1 + 0xa0))
                     (pFVar1,FTriggerThresholdLineStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTriggerThresholdLineStyle *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        FSlateWidgetStyle::FSlateWidgetStyle
                  ((FSlateWidgetStyle *)
                   &`public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
                    ::__l2::Default);
        `public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
        ::__l2::Default._padding_ = (longlong)&___7FTriggerThresholdLineStyle__6B_;
        `public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
        ::__l2::Default.LineColor = FLinearColor::White;
        atexit(`FTriggerThresholdLineStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&`public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    this->_Style = &`public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
                    ::__l2::Default;
    return this;
  }
  this->_Style = pFVar3;
  return this;
}

// ~FArguments @ 14d8bc030

void __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::~FArguments(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4c8));
  if (*(void **)((longlong)this + 0x4d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4d0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x4c8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4b0));
  if (*(void **)((longlong)this + 0x4b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4b8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x4b0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x498));
  if (*(void **)((longlong)this + 0x4a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4a0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x498));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x478));
  if (*(void **)((longlong)this + 0x480) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x480));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x478));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x428));
  if (*(void **)((longlong)this + 0x430) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x430));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x428));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x400));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 1000));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x3c8));
  if (*(void **)((longlong)this + 0x3d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x3d0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x3c8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x3a8));
  if (*(void **)((longlong)this + 0x3b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x3b0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x3a8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x390));
  if (*(void **)((longlong)this + 0x398) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x398));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x390));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x378));
  if (*(void **)((longlong)this + 0x380) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x380));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x378));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x360));
  if (*(void **)((longlong)this + 0x368) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x368));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x360));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x348));
  if (*(void **)((longlong)this + 0x350) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x350));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x348));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x330));
  if (*(void **)((longlong)this + 0x338) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x338));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x330));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x318));
  if (*(void **)((longlong)this + 800) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 800));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x318));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2f8));
  if (*(void **)((longlong)this + 0x300) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x300));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2f8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2e8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2b8));
  if (*(void **)((longlong)this + 0x2c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2c0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2b8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2a0));
  if (*(void **)((longlong)this + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2a0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x288));
  if (*(void **)((longlong)this + 0x290) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x290));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x288));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x270));
  if (*(void **)((longlong)this + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x278));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x270));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 600));
  if (*(void **)((longlong)this + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x260));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 600));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x240));
  if (*(void **)((longlong)this + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x248));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x240));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x228));
  if (*(void **)((longlong)this + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x228));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x210));
  if (*(void **)((longlong)this + 0x218) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x218));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x210));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(this);
  return;
}

// ~FArguments @ 14d8bc400

void __thiscall
STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::~FArguments(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2f0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2c8));
  if (*(void **)((longlong)this + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2d0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2c8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x298));
  if (*(void **)((longlong)this + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x298));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x280));
  if (*(void **)((longlong)this + 0x288) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x288));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x280));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x268));
  if (*(void **)((longlong)this + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x270));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x268));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x250));
  if (*(void **)((longlong)this + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 600));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x250));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x238));
  if (*(void **)((longlong)this + 0x240) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x240));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x238));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x220));
  if (*(void **)((longlong)this + 0x228) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x228));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x220));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x208));
  if (*(void **)((longlong)this + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x210));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x208));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(this);
  return;
}

// ~FArguments @ 14d8bc580

void __thiscall
STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bc700

void __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemAlignment).Getter);
  pvVar1 = *(void **)&(this->_ItemAlignment).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemAlignment).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemWidth).Getter);
  pvVar1 = *(void **)&(this->_ItemWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTileViewScrolled);
  pvVar1 = *(void **)&(this->_OnTileViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTileViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTileReleased);
  pvVar1 = *(void **)&(this->_OnTileReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTileReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshTile);
  pvVar1 = *(void **)&(this->_OnRefreshTile).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshTile);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateTile);
  pvVar1 = *(void **)&(this->_OnGenerateTile).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateTile);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bca80

void __thiscall SAudioMaterialKnob::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->_OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->_OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFloatValueChanged);
  pvVar1 = *(void **)&(this->_OnFloatValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFloatValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StepSize).Getter);
  pvVar1 = *(void **)&(this->_StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MouseUsesStep).Getter);
  pvVar1 = *(void **)&(this->_MouseUsesStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MouseUsesStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Locked).Getter);
  pvVar1 = *(void **)&(this->_Locked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Locked).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_FineTuneSpeed).Getter);
  pvVar1 = *(void **)&(this->_FineTuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FineTuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TuneSpeed).Getter);
  pvVar1 = *(void **)&(this->_TuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bcc40

void __thiscall SAudioMaterialSlider::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ValueAttribute).Getter);
  pvVar1 = *(void **)&(this->_ValueAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StepSize).Getter);
  pvVar1 = *(void **)&(this->_StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MouseUsesStep).Getter);
  pvVar1 = *(void **)&(this->_MouseUsesStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MouseUsesStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Locked).Getter);
  pvVar1 = *(void **)&(this->_Locked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Locked).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_FineTuneSpeed).Getter);
  pvVar1 = *(void **)&(this->_FineTuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FineTuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TuneSpeed).Getter);
  pvVar1 = *(void **)&(this->_TuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TuneSpeed).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bcde0

void __thiscall SAudioMeter::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterChannelInfo).Getter);
  pvVar1 = *(void **)&(this->_MeterChannelInfo).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterChannelInfo).Getter);
  pFVar2 = (this->_MeterChannelInfo).Value.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterScaleLabelColor).Getter);
  pvVar1 = *(void **)&(this->_MeterScaleLabelColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterScaleLabelColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterScaleColor).Getter);
  pvVar1 = *(void **)&(this->_MeterScaleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterScaleColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterClippingColor).Getter);
  pvVar1 = *(void **)&(this->_MeterClippingColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterClippingColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterPeakColor).Getter);
  pvVar1 = *(void **)&(this->_MeterPeakColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterPeakColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterValueColor).Getter);
  pvVar1 = *(void **)&(this->_MeterValueColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterValueColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_MeterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_BackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_BackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IndentHandle).Getter);
  pvVar1 = *(void **)&(this->_IndentHandle).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IndentHandle).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bcf90

void __thiscall SAudioMeterWidget::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterChannelInfo).Getter);
  pvVar1 = *(void **)&(this->_MeterChannelInfo).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterChannelInfo).Getter);
  pFVar2 = (this->_MeterChannelInfo).Value.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterScaleLabelColor).Getter);
  pvVar1 = *(void **)&(this->_MeterScaleLabelColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterScaleLabelColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterScaleColor).Getter);
  pvVar1 = *(void **)&(this->_MeterScaleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterScaleColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterClippingColor).Getter);
  pvVar1 = *(void **)&(this->_MeterClippingColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterClippingColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterPeakColor).Getter);
  pvVar1 = *(void **)&(this->_MeterPeakColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterPeakColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterValueColor).Getter);
  pvVar1 = *(void **)&(this->_MeterValueColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterValueColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_MeterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MeterBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_BackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_BackgroundColor).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bd110

void __thiscall SAudioOscilloscopePanelWidget::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_YAxisLabelsUnit).Getter);
  pvVar1 = *(void **)&(this->_YAxisLabelsUnit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_YAxisLabelsUnit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HideTriggerThresholdLine).Getter)
  ;
  pvVar1 = *(void **)&(this->_HideTriggerThresholdLine).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HideTriggerThresholdLine).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HideValueGrid).Getter);
  pvVar1 = *(void **)&(this->_HideValueGrid).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HideValueGrid).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HideSequenceRuler).Getter);
  pvVar1 = *(void **)&(this->_HideSequenceRuler).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HideSequenceRuler).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HideSequenceGrid).Getter);
  pvVar1 = *(void **)&(this->_HideSequenceGrid).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HideSequenceGrid).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_InArgs).Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bd210

void __thiscall SAudioRadialSlider::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->_OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->_OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_DesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->_DesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DesiredSizeOverride).Getter);
  pFVar2 = (this->_SliderCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->_SliderCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar1 = (void *)(this->_SliderCurve).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->_SliderCurve).EditorCurveData._padding_ = 0;
  pvVar1 = (void *)(this->_SliderCurve).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->_SliderCurve).EditorCurveData._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HandStartEndRatio).Getter);
  pvVar1 = *(void **)&(this->_HandStartEndRatio).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HandStartEndRatio).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CenterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_CenterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CenterBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBarColor).Getter);
  pvVar1 = *(void **)&(this->_SliderBarColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderProgressColor).Getter);
  pvVar1 = *(void **)&(this->_SliderProgressColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderProgressColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WidgetLayout).Getter);
  pvVar1 = *(void **)&(this->_WidgetLayout).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WidgetLayout).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderValue).Getter);
  pvVar1 = *(void **)&(this->_SliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderValue).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bd430

void __thiscall SAudioSliderBase::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_DesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->_DesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DesiredSizeOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WidgetBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_WidgetBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WidgetBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderThumbColor).Getter);
  pvVar1 = *(void **)&(this->_SliderThumbColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderThumbColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBarColor).Getter);
  pvVar1 = *(void **)&(this->_SliderBarColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_SliderBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysShowLabel).Getter);
  pvVar1 = *(void **)&(this->_AlwaysShowLabel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysShowLabel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderValue).Getter);
  pvVar1 = *(void **)&(this->_SliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderValue).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bd5d0

void __thiscall SAudioSpectrogram::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnOrientationMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnOrientationMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnOrientationMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnColorMapMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnColorMapMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnColorMapMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->_OnFrequencyAxisScaleMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnFrequencyAxisScaleMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFrequencyAxisScaleMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_FillBackground).Getter);
  pvVar1 = *(void **)&(this->_FillBackground).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FillBackground).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AllowContextMenu).Getter);
  pvVar1 = *(void **)&(this->_AllowContextMenu).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AllowContextMenu).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Orientation).Getter);
  pvVar1 = *(void **)&(this->_Orientation).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Orientation).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_FrequencyAxisPixelBucketMode).Getter);
  pvVar1 = *(void **)&(this->_FrequencyAxisPixelBucketMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FrequencyAxisPixelBucketMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_FrequencyAxisScale).Getter);
  pvVar1 = *(void **)&(this->_FrequencyAxisScale).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FrequencyAxisScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorMap).Getter);
  pvVar1 = *(void **)&(this->_ColorMap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ColorMap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorMapMaxSoundLevel).Getter);
  pvVar1 = *(void **)&(this->_ColorMapMaxSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ColorMapMaxSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorMapMinSoundLevel).Getter);
  pvVar1 = *(void **)&(this->_ColorMapMinSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ColorMapMinSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ViewMaxFrequency).Getter);
  pvVar1 = *(void **)&(this->_ViewMaxFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ViewMaxFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ViewMinFrequency).Getter);
  pvVar1 = *(void **)&(this->_ViewMinFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ViewMinFrequency).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bd860

void __thiscall SAudioSpectrumPlot::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetAudioSpectrumData);
  pvVar1 = *(void **)&(this->_OnGetAudioSpectrumData).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetAudioSpectrumData);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->_OnDisplaySoundLevelAxisLabelsButtonToggled);
  pvVar1 = *(void **)&(this->_OnDisplaySoundLevelAxisLabelsButtonToggled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDisplaySoundLevelAxisLabelsButtonToggled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->_OnDisplayFrequencyAxisLabelsButtonToggled);
  pvVar1 = *(void **)&(this->_OnDisplayFrequencyAxisLabelsButtonToggled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDisplayFrequencyAxisLabelsButtonToggled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->_OnFrequencyAxisScaleMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnFrequencyAxisScaleMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFrequencyAxisScaleMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFrequencyAxisPixelBucketModeMenuEntryClicked)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTiltSpectrumMenuEntryClicked);
  pvVar1 = *(void **)&(this->_OnTiltSpectrumMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTiltSpectrumMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AllowContextMenu).Getter);
  pvVar1 = *(void **)&(this->_AllowContextMenu).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AllowContextMenu).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SpectrumColor).Getter);
  pvVar1 = *(void **)&(this->_SpectrumColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SpectrumColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CrosshairColor).Getter);
  pvVar1 = *(void **)&(this->_CrosshairColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CrosshairColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AxisLabelColor).Getter);
  pvVar1 = *(void **)&(this->_AxisLabelColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AxisLabelColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_GridColor).Getter);
  pvVar1 = *(void **)&(this->_GridColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_GridColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_BackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_BackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_FrequencyAxisPixelBucketMode).Getter);
  pvVar1 = *(void **)&(this->_FrequencyAxisPixelBucketMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FrequencyAxisPixelBucketMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_FrequencyAxisScale).Getter);
  pvVar1 = *(void **)&(this->_FrequencyAxisScale).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_FrequencyAxisScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_DisplaySoundLevelGridLines).Getter);
  pvVar1 = *(void **)&(this->_DisplaySoundLevelGridLines).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DisplaySoundLevelGridLines).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_DisplayFrequencyGridLines).Getter
            );
  pvVar1 = *(void **)&(this->_DisplayFrequencyGridLines).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DisplayFrequencyGridLines).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_DisplaySoundLevelAxisLabels).Getter);
  pvVar1 = *(void **)&(this->_DisplaySoundLevelAxisLabels).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DisplaySoundLevelAxisLabels).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_DisplayFrequencyAxisLabels).Getter);
  pvVar1 = *(void **)&(this->_DisplayFrequencyAxisLabels).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DisplayFrequencyAxisLabels).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_DisplayCrosshair).Getter);
  pvVar1 = *(void **)&(this->_DisplayCrosshair).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DisplayCrosshair).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectedFrequency).Getter);
  pvVar1 = *(void **)&(this->_SelectedFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectedFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TiltPivotFrequency).Getter);
  pvVar1 = *(void **)&(this->_TiltPivotFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TiltPivotFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TiltExponent).Getter);
  pvVar1 = *(void **)&(this->_TiltExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TiltExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ViewMaxSoundLevel).Getter);
  pvVar1 = *(void **)&(this->_ViewMaxSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ViewMaxSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ViewMinSoundLevel).Getter);
  pvVar1 = *(void **)&(this->_ViewMinSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ViewMinSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ViewMaxFrequency).Getter);
  pvVar1 = *(void **)&(this->_ViewMaxFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ViewMaxFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ViewMinFrequency).Getter);
  pvVar1 = *(void **)&(this->_ViewMinFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ViewMinFrequency).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d8bdce0

void __thiscall SAudioTextBox::FArguments::~FArguments(FArguments *this)

{
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->_OnValueTextCommitted);
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_LabelBackgroundColor);
  TAttribute<bool>::~TAttribute<bool>(&this->_ShowUnitsText);
  TAttribute<bool>::~TAttribute<bool>(&this->_ShowLabelOnlyOnHover);
  TSlateBaseNamedArgs<SAudioTextBox>::~TSlateBaseNamedArgs<SAudioTextBox>
            ((TSlateBaseNamedArgs<SAudioTextBox> *)this);
  return;
}

// AudioMaterialKnobStyle @ 14d8db3d0

FArguments * __thiscall
SAudioMaterialKnob::FArguments::AudioMaterialKnobStyle
          (FArguments *this,FAudioMaterialKnobStyle *param_1)

{
  this->_AudioMaterialKnobStyle = param_1;
  return this;
}

// AutoWrapText @ 14d8db3f0

FArguments * __thiscall
STextBlock::FArguments::AutoWrapText(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_AutoWrapText).Value = param_1->Value;
  (this->_AutoWrapText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// BackgroundColor @ 14d8db460

FArguments * __thiscall
SAudioMeterWidget::FArguments::BackgroundColor(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_BackgroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_BackgroundColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_BackgroundColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_BackgroundColor).Value.field_0x12 = uVar4;
  (this->_BackgroundColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ColorAndOpacity @ 14d8e5440

FArguments * __thiscall
SSeparator::FArguments::ColorAndOpacity(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_ColorAndOpacity).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_ColorAndOpacity).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_ColorAndOpacity).Value.field_0x12 = uVar4;
  (this->_ColorAndOpacity).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ItemAlignment @ 14d93f5c0

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::ItemAlignment(FArguments *this,TAttribute<EListItemAlignment> *param_1)

{
  TDelegate<EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ItemAlignment).Value = param_1->Value;
  (this->_ItemAlignment).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemAlignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ItemHeight @ 14d93f630

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::ItemHeight(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ItemHeight).Value = param_1->Value;
  (this->_ItemHeight).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ItemWidth @ 14d93f6a0

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::ItemWidth(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ItemWidth).Value = param_1->Value;
  (this->_ItemWidth).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ListItemsSource @ 14d93f9e0

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::ListItemsSource(FArguments *this,
                 TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar1;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *local_28;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->_ListItemsSource_SharedObservableArray;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
        *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *)&local_18) {
    pTVar1->Object =
         (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  local_20.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_28 = param_1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                 *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// MakeListItemsSource @ 14d9407a0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>_>_>
 __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::MakeListItemsSource
          (void *this,TSharedRef<STableViewBase,1> *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pTVar3;
  STableViewBase *pSVar4;
  void *pvVar5;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (*(longlong *)((longlong)this + 0x2d0) == 0) {
    if (*(longlong *)((longlong)this + 0x2d8) == 0) {
      pSVar4 = *(STableViewBase **)((longlong)this + 0x2e0);
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x2e8);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        pvVar5 = ::operator_new(0x30);
        if (pvVar5 == (void *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
                   FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>
                             (pvVar5,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>_>_>
              )(IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)param_1;
    }
    pvVar5 = ::operator_new(0x28);
    if (pvVar5 != (void *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = *(TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> **)
                ((longlong)this + 0x2d8);
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
               FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>
                         (pvVar5,&local_28,pTVar3);
      goto LAB_14d94080b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      uVar1 = *(undefined8 *)((longlong)this + 0x2d0);
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE__6B_
      ;
      *(undefined8 *)&pSVar4->field_0x8 = uVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>_>_>
              )(IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_14d94080b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>_>_>
          )(IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)param_1;
}

// MakeListItemsSource @ 14d940950

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>_>
 __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::MakeListItemsSource(FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *this_00;
  FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *)0x0) {
      pSVar4 = (STableViewBase *)(this->_ListItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 ==
            (FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
             *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                   ::
                   FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>_>
              )(IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 !=
        (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_ListItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
               ::
               FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_14d9409bb;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
        **)&pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>_>
              )(IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_14d9409bb:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>_>
          )(IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            *)param_1;
}

// MeterBackgroundColor @ 14d948ca0

FArguments * __thiscall
SAudioMeterWidget::FArguments::MeterBackgroundColor
          (FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_MeterBackgroundColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_MeterBackgroundColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_MeterBackgroundColor).Value.field_0x12 = uVar4;
  (this->_MeterBackgroundColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MeterClippingColor @ 14d948d10

FArguments * __thiscall
SAudioMeterWidget::FArguments::MeterClippingColor(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_MeterClippingColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_MeterClippingColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_MeterClippingColor).Value.field_0x12 = uVar4;
  (this->_MeterClippingColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterClippingColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MeterPeakColor @ 14d948d80

FArguments * __thiscall
SAudioMeterWidget::FArguments::MeterPeakColor(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_MeterPeakColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_MeterPeakColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_MeterPeakColor).Value.field_0x12 = uVar4;
  (this->_MeterPeakColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterPeakColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MeterScaleColor @ 14d948df0

FArguments * __thiscall
SAudioMeterWidget::FArguments::MeterScaleColor(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_MeterScaleColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_MeterScaleColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_MeterScaleColor).Value.field_0x12 = uVar4;
  (this->_MeterScaleColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterScaleColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MeterScaleLabelColor @ 14d948e60

FArguments * __thiscall
SAudioMeterWidget::FArguments::MeterScaleLabelColor
          (FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_MeterScaleLabelColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_MeterScaleLabelColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_MeterScaleLabelColor).Value.field_0x12 = uVar4;
  (this->_MeterScaleLabelColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterScaleLabelColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MeterValueColor @ 14d948ed0

FArguments * __thiscall
SAudioMeterWidget::FArguments::MeterValueColor(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_MeterValueColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_MeterValueColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_MeterValueColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_MeterValueColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_MeterValueColor).Value.field_0x12 = uVar4;
  (this->_MeterValueColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MeterValueColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// OnMouseCaptureBegin @ 14d950db0

FArguments * __thiscall
SAudioMaterialKnob::FArguments::OnMouseCaptureBegin
          (FArguments *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->_OnMouseCaptureBegin,param_1);
  return this;
}

// OnMouseCaptureEnd @ 14d950de0

FArguments * __thiscall
SAudioMaterialKnob::FArguments::OnMouseCaptureEnd
          (FArguments *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->_OnMouseCaptureEnd,param_1);
  return this;
}

// Owner @ 14d958e00

FArguments * __thiscall
SAudioMaterialKnob::FArguments::Owner
          (FArguments *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  (this->_Owner).WeakPtr = param_1.WeakPtr;
  return this;
}

// Padding @ 14d958e20

FArguments * __thiscall SBorder::FArguments::Padding(FArguments *this,float param_1,float param_2)

{
  FDestructionSentinel local_58;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  local_30 = 1;
  local_18 = 0;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_2;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_2;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_40 = param_1;
  fStack_3c = param_2;
  fStack_38 = param_1;
  fStack_34 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// SelectionMode @ 14d967d10

FArguments * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FArguments
::SelectionMode(FArguments *this,TAttribute<ESelectionMode::Type> *param_1)

{
  TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SelectionMode).Value = param_1->Value;
  (this->_SelectionMode).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Style @ 14d9724b0

FArguments * __thiscall
SAudioTextBox::FArguments::Style(FArguments *this,FAudioTextBoxStyle *param_1)

{
  this->_Style = param_1;
  return this;
}

// Value @ 14d97ca20

FArguments * __thiscall
SAudioMaterialKnob::FArguments::Value(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Value).Value = param_1->Value;
  (this->_Value).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

