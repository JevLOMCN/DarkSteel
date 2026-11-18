// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISCore
// Functions: 2

// StartupModule @ 14de50db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNISCoreModule::StartupModule(FNISCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  FNISViewExtension *this_00;
  undefined1 auStack_2d8 [32];
  FAutoRegister local_2b8 [8];
  FNISViewExtension *local_2b0;
  FSharedReferencer<1> local_2a8 [2];
  TSharedRef<FNISViewExtension,1> local_298;
  TRawPtrProxy<FNISViewExtension> local_288 [2];
  TSharedRef<ISceneViewExtension,1> local_278;
  undefined1 local_268 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if (4 < (byte)LogNIS._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"FNISCoreModule::StartupModule",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNIS);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  FVar3 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FCoreDelegates::OnGetOnScreenMessages,
                        (_func___cdecl_void_TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_ptr
                         *)local_268);
                    /* WARNING: Load size is inaccurate */
  FNVImageUpscaler::OnScreenMessagesDelegateHandle.ID = *FVar3.ID;
  this_00 = ::operator_new(0x28);
  if (this_00 == (FNISViewExtension *)0x0) {
    local_288[0].Object = (FNISViewExtension *)0x0;
  }
  else {
    local_288[0].Object = FNISViewExtension::FNISViewExtension(this_00,local_2b8);
    if ((((local_288[0].Object != (FNISViewExtension *)0x0) &&
         (*(longlong *)&(local_288[0].Object)->field_0x8 != 0)) &&
        (*(longlong *)&(local_288[0].Object)->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_288[0].Object)->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TSharedRef<FNISViewExtension,1>::TSharedRef<FNISViewExtension,1><FNISViewExtension>
            (&local_298,local_288);
  local_278.Object = (ISceneViewExtension *)local_298.Object;
  local_278.SharedReferenceCount.ReferenceController =
       local_298.SharedReferenceCount.ReferenceController;
  if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_278);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  local_2b0 = local_298.Object;
  local_2a8[0].ReferenceController = local_298.SharedReferenceCount.ReferenceController;
  if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->NISViewExtension != (TSharedPtr<FNISViewExtension,1> *)&local_2b0) {
    (this->NISViewExtension).Object = local_298.Object;
    local_2b0 = (FNISViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NISViewExtension).SharedReferenceCount,local_2a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  if (4 < (byte)LogNIS._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNISCoreModule::StartupModule",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNIS);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// ShutdownModule @ 14de50ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNISCoreModule::ShutdownModule(FNISCoreModule *this)

{
  code *pcVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  ulonglong uVar6;
  ForAnyElementType *this_00;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  FDestructionSentinel local_298;
  undefined8 local_280;
  FSharedReferencer<1> aFStack_278 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  uVar6 = 0;
  if (4 < (byte)LogNIS._0_1_) {
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FNISCoreModule::ShutdownModule",0x1e,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNIS);
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  local_280 = 0;
  aFStack_278[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->NISViewExtension != (TSharedPtr<FNISViewExtension,1> *)&local_280) {
    (this->NISViewExtension).Object = (FNISViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NISViewExtension).SharedReferenceCount,aFStack_278);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_278[0].ReferenceController);
  FVar2 = FNVImageUpscaler::OnScreenMessagesDelegateHandle;
  if (FNVImageUpscaler::OnScreenMessagesDelegateHandle.ID != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_298);
    uVar8 = uVar6;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      do {
        uVar7 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar7 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_2a8 = (longlong)(int)uVar7;
          local_2a0 = (longlong)(int)FCoreDelegates::OnGetOnScreenMessages._16_4_;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        this_00 = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + uVar8);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == FVar2.ID)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnGetOnScreenMessages,false);
          break;
        }
        uVar6 = (ulonglong)(uVar7 + 1);
        uVar8 = uVar8 + 0x10;
      } while ((int)(uVar7 + 1) < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    FNVImageUpscaler::OnScreenMessagesDelegateHandle.ID = 0;
  }
  if (4 < (byte)LogNIS._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FNISCoreModule::ShutdownModule",0x1e,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNIS);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

