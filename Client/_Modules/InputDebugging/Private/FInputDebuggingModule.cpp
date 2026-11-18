// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDebugging
// Functions: 3

// StartupModule @ 14f034440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FInputDebuggingModule::StartupModule(FInputDebuggingModule *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FDelegateHandle FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FTouchInputVisualizer *pFVar13;
  FInputDeviceDebugTools *pFVar14;
  wchar_t local_res18 [4];
  <lambda_1> local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  FTouchInputVisualizer *local_d0;
  FSharedReferencer<1> local_c8;
  FInputDeviceDebugTools *local_c0;
  FSharedReferencer<1> local_b8 [2];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  <lambda_2> local_60;
  undefined1 local_58 [24];
  
  pIVar7 = IModularFeatures::Get();
  uVar4 = _tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDebuggingInterface");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))
                    (pIVar7,`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IInputDebuggingInterface::IsAvailable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\InputDebugging\\Source\\InputDebugging\\Private\\InputDebuggingModule.cpp"
                       ,0x11,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar7 = IModularFeatures::Get();
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = (TReferenceControllerBase<1> *)&this->DrawOnCanvasDelegateHandle;
  if (this == (FInputDebuggingModule *)0x0) {
    pTVar11 = pTVar12;
  }
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar4 * 8) + 0x9d4c) <
      `public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDebuggingInterface");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar3)(pIVar7,`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                   ::__l2::FeatureName,pTVar11);
  uStack_a0 = 0;
  local_a8 = OnDebugDraw;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)&local_80);
  local_68 = &local_e0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputDebuggingModule____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = this;
    puVar8[4] = local_a8;
    puVar8[5] = CONCAT44(uStack_9c,uStack_a0);
    if ((this == (FInputDebuggingModule *)0x0) || (puVar8[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FVar10 = UDebugDrawService::Register
                     (local_res18,
                      (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                       *)L"InputDebugVisualizer");
                    /* WARNING: Load size is inaccurate */
  (this->DrawOnCanvasDelegateHandle).ID = *FVar10.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)&local_98);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  pTVar11 = ::operator_new(0x78);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar13 = (FTouchInputVisualizer *)&DAT_00000010;
    pTVar11 = pTVar12;
LAB_14f0347b6:
    if (((pFVar13->_padding_ == 0) || (pFVar13->_padding_ == 0)) ||
       (*(int *)(pFVar13->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar13->_padding_ = (longlong)pFVar13;
      if (pTVar11 != (TReferenceControllerBase<1> *)pFVar13->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar2 = (longlong *)pFVar13->_padding_;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        pFVar13->_padding_ = (longlong)pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTouchInputVisualizer___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ = (longlong)&___7FTouchInputVisualizer__6B_;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[5]._padding_ + 4) = 0x80;
    pTVar11[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[7]._padding_ = 0;
    if (PRIVATE_GIsRunningCommandlet == false) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddLambda<_FTouchInputVisualizer::FTouchInputVisualizer_::__l5::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnPostEngineInit,&local_res20);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddLambda<_FTouchInputVisualizer::FTouchInputVisualizer_::__l5::<lambda_2>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEnginePreExit,&local_60);
    }
    pFVar13 = (FTouchInputVisualizer *)(pTVar11 + 1);
    if (pFVar13 != (FTouchInputVisualizer *)0x0) goto LAB_14f0347b6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d0 = pFVar13;
  local_c8.ReferenceController = pTVar11;
  if (&this->TouchInputVisualizer != (TSharedPtr<FTouchInputVisualizer,1> *)&local_d0) {
    (this->TouchInputVisualizer).Object = pFVar13;
    local_d0 = (FTouchInputVisualizer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TouchInputVisualizer).SharedReferenceCount,&local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar11 = ::operator_new(0x30);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FInputDeviceDebugTools *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11[1]._padding_ = 0;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInputDeviceDebugTools___00_SharedPointerInternals__6B_
    ;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
    ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                   *)&AHUD::OnShowDebugInfo,
                  (_func___cdecl_void_AHUD_ptr_UCanvas_ptr_FDebugDisplayInfo_ptr_float_ptr_float_ptr
                   *)local_58);
    FInputDeviceDebugTools::AddConsoleCommands((FInputDeviceDebugTools *)(pTVar11 + 1));
    pFVar14 = (FInputDeviceDebugTools *)(pTVar11 + 1);
    pTVar12 = pTVar11;
    if (pFVar14 == (FInputDeviceDebugTools *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14f03495b;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pTVar12 != (TReferenceControllerBase<1> *)pFVar14->_padding_) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = (longlong *)pFVar14->_padding_;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      pFVar14->_padding_ = (longlong)pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14f03495b:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0 = pFVar14;
  local_b8[0].ReferenceController = pTVar12;
  if (&this->InputDeviceVisualizer != (TSharedPtr<FInputDeviceDebugTools,1> *)&local_c0) {
    (this->InputDeviceVisualizer).Object = pFVar14;
    local_c0 = (FInputDeviceDebugTools *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputDeviceVisualizer).SharedReferenceCount,local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// ShutdownModule @ 14f0349c0

void __thiscall FInputDebuggingModule::ShutdownModule(FInputDebuggingModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  FDelegateHandle *pFVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TouchInputVisualizer != (TSharedPtr<FTouchInputVisualizer,1> *)&local_28) {
    (this->TouchInputVisualizer).Object = (FTouchInputVisualizer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TouchInputVisualizer).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InputDeviceVisualizer != (TSharedPtr<FInputDeviceDebugTools,1> *)&local_18) {
    (this->InputDeviceVisualizer).Object = (FInputDeviceDebugTools *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputDeviceVisualizer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UDebugDrawService::Unregister((FDelegateHandle)(this->DrawOnCanvasDelegateHandle).ID);
  pIVar1 = IModularFeatures::Get();
  pFVar2 = &this->DrawOnCanvasDelegateHandle;
  if (this == (FInputDebuggingModule *)0x0) {
    pFVar2 = (FDelegateHandle *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDebuggingInterface");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014f034ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IInputDebuggingInterface::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pFVar2);
  return;
}

// OnDebugDraw @ 14f037580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInputDebuggingModule::OnDebugDraw
          (FInputDebuggingModule *this,UCanvas *param_1,APlayerController *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TouchInputVisualizer).Object == (FTouchInputVisualizer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTouchInputVisualizer::OnDebugDraw((this->TouchInputVisualizer).Object,param_1);
  return;
}

