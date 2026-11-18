// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 18

// AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_> @ 14d8952d0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::
AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_>
          (void *this,FObservableArrayPointer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1
          ,pmf_52911215 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(pmf_52911215 *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_52911215)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_a8);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)((longlong)this + 0x10);
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)((longlong)this + 0x14)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)((longlong)this + 8) + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_> @ 14d895550

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::
AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                 *param_1,pmf_89b69555 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(pmf_89b69555 *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_89b69555)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_a8);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_> @ 14d8957d0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::
AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_>
          (void *this,FSharedObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *param_1,
          pmf_d1e420a7 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(pmf_d1e420a7 *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_d1e420a7)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_a8);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)((longlong)this + 0x10);
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)((longlong)this + 0x14)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)((longlong)this + 8) + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_> @ 14d895a50

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::
AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                 *param_1,pmf_5efb694b param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(pmf_5efb694b *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_5efb694b)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_a8);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<AudioWidgets::FAudioLoudnessMeter> @ 14d895cd0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::AddRaw<AudioWidgets::FAudioLoudnessMeter>
          (TMulticastDelegateRegistration<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this,FAudioLoudnessMeter *param_1,pmf_ec901622 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  local_b8._0_8_ = *in_R9;
  local_b8.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioLoudnessMeter_AudioWidgets____A6AXPEAVULKFSAnalyzer__AEBUFLKFSResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_2;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = local_b8.Accessor;
    if (((param_2 == (pmf_ec901622 *)0x0) || (puVar5[4] == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_48);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_30);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_b8);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_80);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<AudioWidgets::FAudioMeter> @ 14d895f60

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::AddRaw<AudioWidgets::FAudioMeter>
          (TMulticastDelegateRegistration<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this,FAudioMeter *param_1,pmf_098f9725 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  local_b8._0_8_ = *in_R9;
  local_b8.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioMeter_AudioWidgets____A6AXPEAVUMeterAnalyzer__HAEBUFMeterResults___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_2;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = local_b8.Accessor;
    if (((param_2 == (pmf_098f9725 *)0x0) || (puVar5[4] == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_48);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_30);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_b8);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_80);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<AudioWidgets::FAudioSpectrogram> @ 14d8961f0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::AddRaw<AudioWidgets::FAudioSpectrogram>
          (TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,FAudioSpectrogram *param_1,pmf_faa2efb9 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  local_b8._0_8_ = *in_R9;
  local_b8.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_2;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = local_b8.Accessor;
    if (((param_2 == (pmf_faa2efb9 *)0x0) || (puVar5[4] == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_48);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_30);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_b8);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_80);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<AudioWidgets::FAudioSpectrogram> @ 14d896480

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::AddRaw<AudioWidgets::FAudioSpectrogram>
          (TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,FAudioSpectrogram *param_1,pmf_e92cc679 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  local_b8._0_8_ = *in_R9;
  local_b8.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_2;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = local_b8.Accessor;
    if (((param_2 == (pmf_e92cc679 *)0x0) || (puVar5[4] == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_48);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_30);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_b8);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_80);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<AudioWidgets::FAudioSpectrumAnalyzer> @ 14d896710

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::AddRaw<AudioWidgets::FAudioSpectrumAnalyzer>
          (TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,FAudioSpectrumAnalyzer *param_1,pmf_1a03f935 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  local_b8._0_8_ = *in_R9;
  local_b8.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUConstantQAnalyzer__HAEBV__TArray_UFConstantQResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_2;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = local_b8.Accessor;
    if (((param_2 == (pmf_1a03f935 *)0x0) || (puVar5[4] == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_48);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_30);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_b8);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_80);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<AudioWidgets::FAudioSpectrumAnalyzer> @ 14d8969a0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::AddRaw<AudioWidgets::FAudioSpectrumAnalyzer>
          (TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,FAudioSpectrumAnalyzer *param_1,pmf_b61cd775 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  local_b8._0_8_ = *in_R9;
  local_b8.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXPEAVUSynesthesiaSpectrumAnalyzer__HAEBV__TArray_UFSynesthesiaSpectrumResults__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_2;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = local_b8.Accessor;
    if (((param_2 == (pmf_b61cd775 *)0x0) || (puVar5[4] == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_48);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_30);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_b8);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_80);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider> @ 14d896c30

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
          (TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *this,
          FWaveformAudioSamplesDataProvider *param_1,pmf_e3a4ffb0 *param_2)

{
  FWaveformAudioSamplesDataProvider *pFVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1>::AsShared
                       ((TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)
                        &param_2->field_0x8,
                        (TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pFVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)&this->field_0x10;
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider> @ 14d896f30

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
          (TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
          FWaveformAudioSamplesDataProvider *param_1,pmf_294a830d *param_2)

{
  FWaveformAudioSamplesDataProvider *pFVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1>::AsShared
                       ((TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)
                        &param_2->field_0x8,
                        (TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pFVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)&this->field_0x10;
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider> @ 14d897230

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EAudioOscilloscopeTriggerMode),FDefaultDelegateUserPolicy>
::AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
          (void *this,FWaveformAudioSamplesDataProvider *param_1,pmf_823ec71d *param_2)

{
  FWaveformAudioSamplesDataProvider *pFVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1>::AsShared
                       ((TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)
                        &param_2->field_0x8,
                        (TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAudioOscilloscopeTriggerMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets___00__A6AXW4EAudioOscilloscopeTriggerMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pFVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)((longlong)this + 0x10);
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)((longlong)this + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)((longlong)this + 8) + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<SAudioOscilloscopePanelWidget> @ 14d897530

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
::AddSP<SAudioOscilloscopePanelWidget>
          (TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
           *this,SAudioOscilloscopePanelWidget *param_1,pmf_7fbefad8 *param_2)

{
  SWidget *pSVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<SWidget,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_2->field_0x8,
                        (TSharedRef<SWidget,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFFixedSampledSequenceView__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSAudioOscilloscopePanelWidget___00__A6AXUFFixedSampledSequenceView__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pSVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)&this->field_0x10;
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<SAudioVectorscopePanelWidget> @ 14d897830

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
::AddSP<SAudioVectorscopePanelWidget>
          (TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
           *this,SAudioVectorscopePanelWidget *param_1,pmf_8a709b24 *param_2)

{
  SWidget *pSVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<SWidget,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_2->field_0x8,
                        (TSharedRef<SWidget,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFFixedSampledSequenceView__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSAudioVectorscopePanelWidget___00__A6AXUFFixedSampledSequenceView__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pSVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)&this->field_0x10;
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<SFixedSampledSequenceRuler,1> @ 14d897b30

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddSP<SFixedSampledSequenceRuler,1>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TSharedRef<SFixedSampledSequenceRuler,1> *param_1,pmf_57569940 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  SFixedSampledSequenceRuler *pSVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  SFixedSampledSequenceRuler *pSVar9;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pSVar7 = (SFixedSampledSequenceRuler *)0x0;
  local_res10 = 0;
  local_88._0_8_ = *in_R9;
  local_88.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    pSVar9 = pSVar7;
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    pTVar6 = *(TReferenceControllerBase<1> **)&param_2->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSFixedSampledSequenceRuler___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = uVar1;
    puVar4[4] = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_88._0_8_;
    puVar4[6] = local_88.Accessor;
    pSVar9 = (SFixedSampledSequenceRuler *)0x1;
  }
  if (pSVar9 != (SFixedSampledSequenceRuler *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_50);
  param_1->Object = (SFixedSampledSequenceRuler *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_88);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,&local_res10);
      pSVar7 = (SFixedSampledSequenceRuler *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    iVar3 = *(int *)&this->field_0x10;
    param_1->Object = pSVar7;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar8 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar8);
    }
    *pFVar8 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar8 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<SFixedSampledSequenceViewer,1> @ 14d897dd0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddSP<SFixedSampledSequenceViewer,1>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TSharedRef<SFixedSampledSequenceViewer,1> *param_1,pmf_63c4aff8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  SFixedSampledSequenceViewer *pSVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  SFixedSampledSequenceViewer *pSVar9;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pSVar7 = (SFixedSampledSequenceViewer *)0x0;
  local_res10 = 0;
  local_88._0_8_ = *in_R9;
  local_88.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    pSVar9 = pSVar7;
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    pTVar6 = *(TReferenceControllerBase<1> **)&param_2->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSFixedSampledSequenceViewer___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = uVar1;
    puVar4[4] = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_88._0_8_;
    puVar4[6] = local_88.Accessor;
    pSVar9 = (SFixedSampledSequenceViewer *)0x1;
  }
  if (pSVar9 != (SFixedSampledSequenceViewer *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_50);
  param_1->Object = (SFixedSampledSequenceViewer *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_88);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,&local_res10);
      pSVar7 = (SFixedSampledSequenceViewer *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    iVar3 = *(int *)&this->field_0x10;
    param_1->Object = pSVar7;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar8 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar8);
    }
    *pFVar8 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar8 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<SFixedSampledSequenceViewerPanel> @ 14d898070

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_ESampledSequenceDisplayUnit),FDefaultDelegateUserPolicy>
::AddSP<SFixedSampledSequenceViewerPanel>
          (void *this,SFixedSampledSequenceViewerPanel *param_1,pmf_a8b791c2 *param_2)

{
  SWidget *pSVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<SWidget,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_2->field_0x8,
                        (TSharedRef<SWidget,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ESampledSequenceDisplayUnit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSFixedSampledSequenceViewerPanel___00__A6AXW4ESampledSequenceDisplayUnit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pSVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)((longlong)this + 0x10);
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)((longlong)this + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)((longlong)this + 8) + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

