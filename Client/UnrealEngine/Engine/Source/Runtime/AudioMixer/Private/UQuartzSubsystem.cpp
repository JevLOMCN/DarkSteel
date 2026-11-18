// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 69

// StaticClass @ 146536230

UClass * __cdecl UQuartzSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"QuartzSubsystem",
               &Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton,
               StaticRegisterNativesUQuartzSubsystem,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UQuartzSubsystem>,
               InternalVTableHelperCtorCaller<UQuartzSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton;
}

// UQuartzSubsystem @ 14653e8f0

/* WARNING: Enum "Type": Some values do not have unique names */

UQuartzSubsystem * __thiscall
UQuartzSubsystem::UQuartzSubsystem(UQuartzSubsystem *this,FVTableHelper *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FQuartzTickableObjectsManager,1> *pTVar2;
  TSharedRef<FQuartzTickableObjectsManager,1> local_18;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pTVar2 = MakeShared<FQuartzTickableObjectsManager,1>(&local_18);
  (this->TickableObjectManagerPtr).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (this->TickableObjectManagerPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (this->ClockManagerDataPtr).Object = (FPersistentQuartzSubsystemData *)0x0;
  (this->ClockManagerDataPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bTickEvenWhenPaused = false;
  return this;
}

// ~UQuartzSubsystem @ 146541430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UQuartzSubsystem::~UQuartzSubsystem(UQuartzSubsystem *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockManagerDataPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TickableObjectManagerPtr).SharedReferenceCount.ReferenceController);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// AddProxyForExternalClock @ 1465461d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::AddProxyForExternalClock(UQuartzSubsystem *this,FQuartzClockProxy *param_1)

{
  FQuartzClockProxy *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1->ClockId;
  pFVar1 = FindProxyByName(this,local_res10);
  if ((pFVar1 != (FQuartzClockProxy *)0x0) && (2 < (byte)LogAudioQuartz._0_1_)) {
    local_res10[0] = param_1->ClockId;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginDestroy @ 146547720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UQuartzSubsystem::BeginDestroy(UQuartzSubsystem *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPersistentQuartzSubsystemData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  UTickableWorldSubsystem::BeginDestroy((UTickableWorldSubsystem *)this);
  pFVar1 = (this->ClockManagerDataPtr).Object;
  if (pFVar1 != (FPersistentQuartzSubsystemData *)0x0) {
    lpCriticalSection = &(pFVar1->SubsystemClockManager).ActiveClockCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar6 = (pFVar1->SubsystemClockManager).ActiveClocks.ArrayNum - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      do {
        if ((pFVar1->SubsystemClockManager).MixerDevice == (FMixerDevice *)0x0) {
LAB_146547812:
          uVar5 = 0;
          if ((int)uVar6 < (pFVar1->SubsystemClockManager).ActiveClocks.ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<TSharedPtr<Audio::FQuartzClock,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&(pFVar1->SubsystemClockManager).ActiveClocks,uVar6);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(pFVar1->SubsystemClockManager).ActiveClocks.AllocatorInstance,
                     (pFVar1->SubsystemClockManager).ActiveClocks.ArrayNum,
                     &(pFVar1->SubsystemClockManager).ActiveClocks.ArrayMax);
        }
        else {
          uVar5 = 0;
          if ((int)uVar6 < (pFVar1->SubsystemClockManager).ActiveClocks.ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (pFVar1->SubsystemClockManager).ActiveClocks.AllocatorInstance.Data;
          if ((*(longlong *)(pFVar2 + lVar7) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(char *)(*(longlong *)(pFVar2 + lVar7) + 0x55c) == '\0') goto LAB_146547812;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// CreateNewClock @ 14654e780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UQuartzClockHandle * __thiscall
UQuartzSubsystem::CreateNewClock
          (UQuartzSubsystem *this,UObject *param_1,FName param_2,FQuartzClockSettings *param_3,
          bool param_4,bool param_5)

{
  int *piVar1;
  uint *lpCriticalSection;
  FName *pFVar2;
  FPersistentQuartzSubsystemData *pFVar3;
  FQuartzClockProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FQuartzClockManager *this_00;
  UQuartzClockHandle *pUVar9;
  UObject *pUVar10;
  UWorld *pUVar11;
  FQuartzTickableObject *pFVar12;
  FAudioDevice *pFVar13;
  UQuartzClockHandle *pUVar14;
  TArray<Audio::FQuartzClockProxy,TSizedDefaultAllocator<32>_> *pTVar15;
  UQuartzClockHandle *this_01;
  FName local_res18 [2];
  FString local_68;
  FQuartzClockProxy local_58;
  
  local_res18[0] = param_2;
  if ((param_2 == (FName)0x0) || (param_1 == (UObject *)0x0)) {
    pFVar5 = (param_3->TimeSignature).OptionalPulseOverride.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    return (UQuartzClockHandle *)0x0;
  }
  this_00 = GetClockManager(this,param_1,param_5);
  if ((this_00 == (FQuartzClockManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClockManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0x1a5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UQuartzClockHandle *)(*pcVar6)();
    return pUVar9;
  }
  if ((param_3->TimeSignature).NumBeats < 1) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(local_res18,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    (param_3->TimeSignature).NumBeats = 1;
  }
  Audio::FQuartzClockManager::GetOrCreateClock(this_00,&local_58,local_res18,param_3,param_4);
  pUVar10 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UQuartzClockHandle>(pUVar10);
  pUVar11 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  pFVar12 = FQuartzTickableObject::Init((FQuartzTickableObject *)&pUVar9->_padding_,pUVar11);
  pUVar9 = (UQuartzClockHandle *)0x0;
  this_01 = (UQuartzClockHandle *)&pFVar12[-1].CommandQueuePtr;
  if (pFVar12 == (FQuartzTickableObject *)0x0) {
    this_01 = pUVar9;
  }
  UQuartzClockHandle::SubscribeToClock(this_01,param_1,local_res18[0],&local_58);
  if (((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClockManagerDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0x1b4,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UQuartzClockHandle *)(*pcVar6)();
    return pUVar9;
  }
  pUVar11 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((((pUVar11 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) &&
      (pFVar13 = UWorld::GetAudioDeviceRaw(pUVar11), pFVar13 != (FAudioDevice *)0x0)) &&
     (pUVar14 = ::operator_new(8), pUVar14 != (UQuartzClockHandle *)0x0)) {
    lpCriticalSection = &pFVar13[1].DeviceID;
    if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    pUVar14->_padding_ = (longlong)lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar9 = pUVar14;
  }
  if (((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UQuartzClockHandle *)(*pcVar6)();
    return pUVar9;
  }
  pFVar3 = (this->ClockManagerDataPtr).Object;
  pTVar15 = &pFVar3->ActiveAudioMixerClockProxies;
  pFVar4 = (FQuartzClockProxy *)(pTVar15->AllocatorInstance).Data;
  if (((pFVar4 <= &local_58) &&
      (&local_58 < pFVar4 + (pFVar3->ActiveAudioMixerClockProxies).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UQuartzClockHandle *)(*pcVar6)();
    return pUVar9;
  }
  iVar8 = (pFVar3->ActiveAudioMixerClockProxies).ArrayNum;
  piVar1 = &(pFVar3->ActiveAudioMixerClockProxies).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar15->AllocatorInstance,piVar1);
  }
  (pFVar3->ActiveAudioMixerClockProxies).ArrayNum = iVar8 + 1;
  pFVar2 = (FName *)((pTVar15->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
  *pFVar2 = local_58.ClockId;
  pFVar2[1] = (FName)local_58.SharedQueue.Object;
  pFVar2[2] = (FName)local_58.SharedQueue.WeakReferenceCount.ReferenceController;
  if ((FName)local_58.SharedQueue.WeakReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_58.SharedQueue.WeakReferenceCount.ReferenceController + 0xc) =
         *(int *)((longlong)local_58.SharedQueue.WeakReferenceCount.ReferenceController + 0xc) + 1;
    UNLOCK();
  }
  pFVar2[3] = (FName)local_58.ClockWeakPtr.Object;
  pFVar2[4] = (FName)local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController;
  if ((FName)local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController + 0xc) =
         *(int *)((longlong)local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController + 0xc) + 1;
    UNLOCK();
  }
  if (pUVar9 != (UQuartzClockHandle *)0x0) {
    if ((LPCRITICAL_SECTION)pUVar9->_padding_ != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pUVar9->_padding_);
      pUVar9->_padding_ = 0;
    }
    ::operator_delete(pUVar9,8);
  }
  if ((FName)local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)((local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.ClockWeakPtr.WeakReferenceCount.ReferenceController,1);
    }
  }
  if ((FName)local_58.SharedQueue.WeakReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58.SharedQueue.WeakReferenceCount.ReferenceController + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)((local_58.SharedQueue.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.SharedQueue.WeakReferenceCount.ReferenceController,1);
    }
  }
  pFVar5 = (param_3->TimeSignature).OptionalPulseOverride.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this_01;
}

// CreateRequestDataForQuantizedNotify @ 14654f1c0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedRequestData * __cdecl
UQuartzSubsystem::CreateRequestDataForQuantizedNotify
          (FQuartzQuantizedRequestData *__return_storage_ptr__,UQuartzClockHandle *param_1,
          FQuartzQuantizationBoundary *param_2,FOnQuartzCommandEventBP *param_3,float param_4)

{
  FScriptContainerElement FVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FQuartzQuantizedRequestData *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FQuartzGameThreadSubscriber *pFVar10;
  longlong lVar11;
  IQuartzQuantizedCommand *pIVar12;
  atomic<int> *paVar13;
  FSharedReferencer<1> FStack_c0;
  FQuartzQuantizationBoundary local_b8;
  ForAnyElementType local_98;
  int local_90 [6];
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  FQuartzGameThreadSubscriber local_68;
  
  if (param_1 == (UQuartzClockHandle *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7969031669896184178>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x172,"InClockHandle");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FQuartzQuantizedRequestData *)(*pcVar3)();
      return pFVar8;
    }
    (__return_storage_ptr__->QuantizationBoundary).Quantization = Tick;
    (__return_storage_ptr__->ClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->ClockName).Number = 0;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued = false;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum = 0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax = 0;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = 0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = 0;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = 1.0;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint = BarRelative;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = true;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning = false;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued = false;
    __return_storage_ptr__->GameThreadDelegateID = -1;
  }
  else {
    pTVar9 = ::operator_new(0x70);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      pIVar12 = (IQuartzQuantizedCommand *)&DAT_00000010;
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFQuantizedNotify_Audio___00_SharedPointerInternals__6B_
      ;
      Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand
                ((IQuartzQuantizedCommand *)(pTVar9 + 1));
      pTVar9[1]._padding_ = (longlong)&___7FQuantizedNotify_Audio__6B_;
      pIVar12 = (IQuartzQuantizedCommand *)(pTVar9 + 1);
      pTVar9[5]._padding_ = 0;
      pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
      *(float *)&pTVar9[6]._padding_ = param_4;
      *(undefined4 *)((longlong)&pTVar9[6]._padding_ + 4) = 0;
      *(undefined1 *)&pTVar9[6].SharedReferenceCount = 0;
      if ((pIVar12 == (IQuartzQuantizedCommand *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FQuartzQuantizedRequestData *)(*pcVar3)();
        return pFVar8;
      }
      paVar13 = &pTVar9->SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    FVar2 = param_1->CurrentClockId;
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b8.Quantization = Tick;
    local_b8.Multiplier = 1.0;
    local_b8.CountingReferencePoint = BarRelative;
    local_b8.bFireOnClockStart = true;
    local_b8.bCancelCommandIfClockIsNotRunning = false;
    local_b8.bResetClockOnQueued = false;
    local_b8.bResumeClockOnQueued = false;
    local_b8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.GameThreadSubscribers.ArrayNum = 0;
    local_b8.GameThreadSubscribers.ArrayMax = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = -1;
    FQuartzQuantizationBoundary::operator=(&local_b8,param_2);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    local_78 = 0;
    local_70.ReferenceController = pTVar9;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c0,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    if (((TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)&local_98 ==
         &param_2->GameThreadSubscribers) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FQuartzQuantizedRequestData *)(*pcVar3)();
      return pFVar8;
    }
    iVar7 = (param_2->GameThreadSubscribers).ArrayNum;
    if (iVar7 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,iVar7,&local_98,local_90,local_90 + 1);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (local_98.Data + (longlong)iVar6 * 0x40,
                 (FQuartzGameThreadSubscriber *)
                 (param_2->GameThreadSubscribers).AllocatorInstance.Data,iVar7);
    }
    pFVar10 = FQuartzTickableObject::GetQuartzSubscriber
                        ((FQuartzTickableObject *)&param_1->_padding_,&local_68);
    if (((local_98.Data <= pFVar10) &&
        (pFVar10 < (FQuartzGameThreadSubscriber *)(local_98.Data + (longlong)local_90[1] * 0x40)))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FQuartzQuantizedRequestData *)(*pcVar3)();
      return pFVar8;
    }
    iVar7 = local_90[0];
    if (local_90[0] == local_90[1]) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_98,local_90 + 1);
    }
    lVar11 = (longlong)iVar7 * 0x40;
    local_90[0] = iVar7 + 1;
    local_98.Data[lVar11 + 8] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar10->Offset).OffsetInMilliseconds.bIsSet;
    local_98.Data[lVar11 + 8] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      *(double *)&local_98.Data[lVar11].field_0x0 =
           (pFVar10->Offset).OffsetInMilliseconds.TypedValue;
    }
    local_98.Data[lVar11 + 0x20] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar10->Offset).OffsetAsDuration.bIsSet;
    local_98.Data[lVar11 + 0x20] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      uVar4 = *(undefined8 *)&(pFVar10->Offset).OffsetAsDuration.TypedValue.field_0x8;
      *(undefined8 *)(local_98.Data + lVar11 + 0x10) =
           *(undefined8 *)&(pFVar10->Offset).OffsetAsDuration.TypedValue;
      *(undefined8 *)(local_98.Data + lVar11 + 0x10 + 8) = uVar4;
    }
    *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
      **)(local_98.Data + lVar11 + 0x28) = (pFVar10->Queue).Object;
    *(TReferenceControllerBase<1> **)(local_98.Data + lVar11 + 0x30) =
         (pFVar10->Queue).SharedReferenceCount.ReferenceController;
    (pFVar10->Queue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar10->Queue).Object =
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)0x0;
    local_98.Data[lVar11 + 0x38] = (FScriptContainerElement)pFVar10->bOffsetConvertedToFrames;
    local_98.Data[lVar11 + 0x39] = (FScriptContainerElement)pFVar10->bHasBeenNotifiedOfAboutToStart;
    *(int *)(local_98.Data + lVar11 + 0x3c) = pFVar10->OffsetInAudioFrames;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Queue.SharedReferenceCount.ReferenceController);
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3);
    if (bVar5) {
      local_90[2] = FQuartzTickableObject::AddCommandDelegate
                              ((FQuartzTickableObject *)&param_1->_padding_,param_3);
    }
    __return_storage_ptr__->ClockName = FVar2;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = pIVar12;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         FStack_c0.ReferenceController;
    (__return_storage_ptr__->QuantizationBoundary).Quantization = local_b8.Quantization;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint =
         local_b8.CountingReferencePoint;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = local_b8.bFireOnClockStart;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning =
         local_b8.bCancelCommandIfClockIsNotRunning;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued =
         local_b8.bResetClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued =
         local_b8.bResumeClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         local_b8.GameThreadSubscribers.AllocatorInstance.Data;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = local_b8.Multiplier;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum =
         local_b8.GameThreadSubscribers.ArrayNum;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax =
         local_b8.GameThreadSubscribers.ArrayMax;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data = local_98.Data;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = local_90[0];
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = local_90[1];
    __return_storage_ptr__->GameThreadDelegateID = local_90[2];
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.GameThreadSubscribers.ArrayNum = 0;
    local_b8.GameThreadSubscribers.ArrayMax = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)local_b8.GameThreadSubscribers.AllocatorInstance.Data,
               local_b8.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)local_b8.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_b8.GameThreadSubscribers.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return __return_storage_ptr__;
}

// CreateRequestDataForSchedulePlaySound @ 14654f670

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedRequestData * __cdecl
UQuartzSubsystem::CreateRequestDataForSchedulePlaySound
          (FQuartzQuantizedRequestData *__return_storage_ptr__,UQuartzClockHandle *param_1,
          FOnQuartzCommandEventBP *param_2,FQuartzQuantizationBoundary *param_3)

{
  FScriptContainerElement FVar1;
  FName FVar2;
  FQuantizedPlayCommand *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TSharedRef<Audio::FQuantizedPlayCommand,1> *pTVar9;
  FQuartzQuantizedRequestData *pFVar10;
  FQuartzGameThreadSubscriber *pFVar11;
  longlong lVar12;
  FSharedReferencer<1> FStack_c0;
  FQuartzQuantizationBoundary local_b8;
  ForAnyElementType local_98;
  int local_90 [6];
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<Audio::FQuantizedPlayCommand,1> local_68;
  FQuartzGameThreadSubscriber local_58;
  
  local_b8.Quantization = Tick;
  FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.Multiplier = 1.0;
  local_b8.CountingReferencePoint = BarRelative;
  local_b8.bFireOnClockStart = true;
  local_b8.bCancelCommandIfClockIsNotRunning = false;
  local_b8.bResetClockOnQueued = false;
  local_b8.bResumeClockOnQueued = false;
  local_b8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.GameThreadSubscribers.ArrayNum = 0;
  local_b8.GameThreadSubscribers.ArrayMax = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = -1;
  if (param_1 == (UQuartzClockHandle *)0x0) {
    (__return_storage_ptr__->ClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->ClockName).Number = 0;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).Quantization = Tick;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = 1.0;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint = BarRelative;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = true;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning = false;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued = false;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued = false;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum = 0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax = 0;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = 0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = 0;
    __return_storage_ptr__->GameThreadDelegateID = -1;
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
  }
  else {
    FVar2 = param_1->CurrentClockId;
    FQuartzQuantizationBoundary::operator=(&local_b8,param_3);
    pTVar9 = MakeShared<Audio::FQuantizedPlayCommand,1>(&local_68);
    local_70.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar9->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c0,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (((TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)&local_98 ==
         &param_3->GameThreadSubscribers) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar4)();
      return pFVar10;
    }
    iVar8 = (param_3->GameThreadSubscribers).ArrayNum;
    if (iVar8 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,iVar8,&local_98,local_90,local_90 + 1);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (local_98.Data + (longlong)iVar7 * 0x40,
                 (FQuartzGameThreadSubscriber *)
                 (param_3->GameThreadSubscribers).AllocatorInstance.Data,iVar8);
    }
    pFVar11 = FQuartzTickableObject::GetQuartzSubscriber
                        ((FQuartzTickableObject *)&param_1->_padding_,&local_58);
    if (((local_98.Data <= pFVar11) &&
        (pFVar11 < (FQuartzGameThreadSubscriber *)(local_98.Data + (longlong)local_90[1] * 0x40)))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar4)();
      return pFVar10;
    }
    iVar8 = local_90[0];
    if (local_90[0] == local_90[1]) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_98,local_90 + 1);
    }
    lVar12 = (longlong)iVar8 * 0x40;
    local_90[0] = iVar8 + 1;
    local_98.Data[lVar12 + 8] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar11->Offset).OffsetInMilliseconds.bIsSet;
    local_98.Data[lVar12 + 8] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      *(double *)&local_98.Data[lVar12].field_0x0 =
           (pFVar11->Offset).OffsetInMilliseconds.TypedValue;
    }
    local_98.Data[lVar12 + 0x20] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar11->Offset).OffsetAsDuration.bIsSet;
    local_98.Data[lVar12 + 0x20] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      uVar5 = *(undefined8 *)&(pFVar11->Offset).OffsetAsDuration.TypedValue.field_0x8;
      *(undefined8 *)(local_98.Data + lVar12 + 0x10) =
           *(undefined8 *)&(pFVar11->Offset).OffsetAsDuration.TypedValue;
      *(undefined8 *)(local_98.Data + lVar12 + 0x10 + 8) = uVar5;
    }
    *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
      **)(local_98.Data + lVar12 + 0x28) = (pFVar11->Queue).Object;
    *(TReferenceControllerBase<1> **)(local_98.Data + lVar12 + 0x30) =
         (pFVar11->Queue).SharedReferenceCount.ReferenceController;
    (pFVar11->Queue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar11->Queue).Object =
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)0x0;
    local_98.Data[lVar12 + 0x38] = (FScriptContainerElement)pFVar11->bOffsetConvertedToFrames;
    local_98.Data[lVar12 + 0x39] = (FScriptContainerElement)pFVar11->bHasBeenNotifiedOfAboutToStart;
    *(int *)(local_98.Data + lVar12 + 0x3c) = pFVar11->OffsetInAudioFrames;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Queue.SharedReferenceCount.ReferenceController);
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_2);
    if (bVar6) {
      local_90[2] = FQuartzTickableObject::AddCommandDelegate
                              ((FQuartzTickableObject *)&param_1->_padding_,param_2);
    }
    __return_storage_ptr__->ClockName = FVar2;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)pFVar3;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         FStack_c0.ReferenceController;
    (__return_storage_ptr__->QuantizationBoundary).Quantization = local_b8.Quantization;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint =
         local_b8.CountingReferencePoint;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = local_b8.bFireOnClockStart;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning =
         local_b8.bCancelCommandIfClockIsNotRunning;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued =
         local_b8.bResetClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued =
         local_b8.bResumeClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         local_b8.GameThreadSubscribers.AllocatorInstance.Data;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = local_b8.Multiplier;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum =
         local_b8.GameThreadSubscribers.ArrayNum;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax =
         local_b8.GameThreadSubscribers.ArrayMax;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data = local_98.Data;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = local_90[0];
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = local_90[1];
    __return_storage_ptr__->GameThreadDelegateID = local_90[2];
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_b8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.GameThreadSubscribers.ArrayNum = 0;
    local_b8.GameThreadSubscribers.ArrayMax = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
  }
  if ((FQuartzGameThreadSubscriber *)local_98.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_98.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_b8.GameThreadSubscribers.AllocatorInstance.Data,
             local_b8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_b8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_b8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.ReferenceController);
  return __return_storage_ptr__;
}

// CreateRequestDataForStartOtherClock @ 14654fa60

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedRequestData * __cdecl
UQuartzSubsystem::CreateRequestDataForStartOtherClock
          (FQuartzQuantizedRequestData *__return_storage_ptr__,UQuartzClockHandle *param_1,
          FName param_2,FQuartzQuantizationBoundary *param_3,FOnQuartzCommandEventBP *param_4)

{
  FScriptContainerElement FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FQuantizedOtherClockStart *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FQuartzQuantizedRequestData *pFVar10;
  TSharedRef<Audio::FQuantizedOtherClockStart,1> *pTVar11;
  FQuartzGameThreadSubscriber *pFVar12;
  longlong lVar13;
  atomic<int> *paVar14;
  FSharedReferencer<1> FStack_d0;
  FQuartzQuantizationBoundary local_c8;
  ForAnyElementType local_a8;
  int local_a0 [6];
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  TSharedRef<Audio::FQuantizedOtherClockStart,1> local_78;
  FQuartzGameThreadSubscriber local_68;
  
  if (param_1 == (UQuartzClockHandle *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7969031669896184152>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x158,"InClockHandle");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar5)();
      return pFVar10;
    }
    (__return_storage_ptr__->QuantizationBoundary).Quantization = Tick;
    (__return_storage_ptr__->ClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->ClockName).Number = 0;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued = false;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum = 0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax = 0;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = 0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = 0;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = 1.0;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint = BarRelative;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = true;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning = false;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued = false;
    __return_storage_ptr__->GameThreadDelegateID = -1;
  }
  else {
    pTVar11 = MakeShared<Audio::FQuantizedOtherClockStart,1>(&local_78);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar11->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar14 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar14 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    FVar4 = param_1->CurrentClockId;
    local_c8.Quantization = Tick;
    FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c8.Multiplier = 1.0;
    local_c8.CountingReferencePoint = BarRelative;
    local_c8.bFireOnClockStart = true;
    local_c8.bCancelCommandIfClockIsNotRunning = false;
    local_c8.bResetClockOnQueued = false;
    local_c8.bResumeClockOnQueued = false;
    local_c8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.GameThreadSubscribers.ArrayNum = 0;
    local_c8.GameThreadSubscribers.ArrayMax = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = -1;
    FQuartzQuantizationBoundary::operator=(&local_c8,param_3);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_88 = 0;
    local_80.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_d0,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    if (((TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)&local_a8 ==
         &param_3->GameThreadSubscribers) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar5)();
      return pFVar10;
    }
    iVar9 = (param_3->GameThreadSubscribers).ArrayNum;
    if (iVar9 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,iVar9,&local_a8,local_a0,local_a0 + 1);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (local_a8.Data + (longlong)iVar8 * 0x40,
                 (FQuartzGameThreadSubscriber *)
                 (param_3->GameThreadSubscribers).AllocatorInstance.Data,iVar9);
    }
    pFVar12 = FQuartzTickableObject::GetQuartzSubscriber
                        ((FQuartzTickableObject *)&param_1->_padding_,&local_68);
    if (((local_a8.Data <= pFVar12) &&
        (pFVar12 < (FQuartzGameThreadSubscriber *)(local_a8.Data + (longlong)local_a0[1] * 0x40)))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar5)();
      return pFVar10;
    }
    iVar9 = local_a0[0];
    if (local_a0[0] == local_a0[1]) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_a8,local_a0 + 1);
    }
    lVar13 = (longlong)iVar9 * 0x40;
    local_a0[0] = iVar9 + 1;
    local_a8.Data[lVar13 + 8] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar12->Offset).OffsetInMilliseconds.bIsSet;
    local_a8.Data[lVar13 + 8] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      *(double *)&local_a8.Data[lVar13].field_0x0 =
           (pFVar12->Offset).OffsetInMilliseconds.TypedValue;
    }
    local_a8.Data[lVar13 + 0x20] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar12->Offset).OffsetAsDuration.bIsSet;
    local_a8.Data[lVar13 + 0x20] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      uVar6 = *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue.field_0x8;
      *(undefined8 *)(local_a8.Data + lVar13 + 0x10) =
           *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue;
      *(undefined8 *)(local_a8.Data + lVar13 + 0x10 + 8) = uVar6;
    }
    *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
      **)(local_a8.Data + lVar13 + 0x28) = (pFVar12->Queue).Object;
    *(TReferenceControllerBase<1> **)(local_a8.Data + lVar13 + 0x30) =
         (pFVar12->Queue).SharedReferenceCount.ReferenceController;
    (pFVar12->Queue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar12->Queue).Object =
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)0x0;
    local_a8.Data[lVar13 + 0x38] = (FScriptContainerElement)pFVar12->bOffsetConvertedToFrames;
    local_a8.Data[lVar13 + 0x39] = (FScriptContainerElement)pFVar12->bHasBeenNotifiedOfAboutToStart;
    *(int *)(local_a8.Data + lVar13 + 0x3c) = pFVar12->OffsetInAudioFrames;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Queue.SharedReferenceCount.ReferenceController);
    bVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_4);
    if (bVar7) {
      local_a0[2] = FQuartzTickableObject::AddCommandDelegate
                              ((FQuartzTickableObject *)&param_1->_padding_,param_4);
    }
    __return_storage_ptr__->ClockName = FVar4;
    __return_storage_ptr__->OtherClockName = param_2;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)pFVar3;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         FStack_d0.ReferenceController;
    (__return_storage_ptr__->QuantizationBoundary).Quantization = local_c8.Quantization;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint =
         local_c8.CountingReferencePoint;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = local_c8.bFireOnClockStart;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning =
         local_c8.bCancelCommandIfClockIsNotRunning;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued =
         local_c8.bResetClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued =
         local_c8.bResumeClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         local_c8.GameThreadSubscribers.AllocatorInstance.Data;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = local_c8.Multiplier;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum =
         local_c8.GameThreadSubscribers.ArrayNum;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax =
         local_c8.GameThreadSubscribers.ArrayMax;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data = local_a8.Data;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = local_a0[0];
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = local_a0[1];
    __return_storage_ptr__->GameThreadDelegateID = local_a0[2];
    FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.GameThreadSubscribers.ArrayNum = 0;
    local_c8.GameThreadSubscribers.ArrayMax = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data,
               local_c8.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_c8.GameThreadSubscribers.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// CreateRequestDataForTickRateChange @ 14654fe90

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedRequestData * __cdecl
UQuartzSubsystem::CreateRequestDataForTickRateChange
          (FQuartzQuantizedRequestData *__return_storage_ptr__,UQuartzClockHandle *param_1,
          FOnQuartzCommandEventBP *param_2,FQuartzClockTickRate *param_3,
          FQuartzQuantizationBoundary *param_4)

{
  FScriptContainerElement FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FQuantizedTickRateChange *pFVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FQuartzQuantizedRequestData *pFVar11;
  TSharedRef<Audio::FQuantizedTickRateChange,1> *pTVar12;
  FQuartzGameThreadSubscriber *pFVar13;
  longlong lVar14;
  FSharedReferencer<1> FStack_d0;
  FQuartzQuantizationBoundary local_c8;
  ForAnyElementType local_a8;
  int local_a0 [6];
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  TSharedRef<Audio::FQuantizedTickRateChange,1> local_78;
  FQuartzGameThreadSubscriber local_68;
  
  if (param_1 == (UQuartzClockHandle *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7969031669896184101>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x125,"InClockHandle");
    if (!bVar8) {
      (__return_storage_ptr__->QuantizationBoundary).Quantization = Tick;
      (__return_storage_ptr__->ClockName).ComparisonIndex = 0;
      (__return_storage_ptr__->ClockName).Number = 0;
      (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
      (__return_storage_ptr__->OtherClockName).Number = 0;
      (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
      (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued = false;
      (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum = 0;
      (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax = 0;
      (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = 0;
      (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = 0;
      (__return_storage_ptr__->QuantizationBoundary).Multiplier = 1.0;
      (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint = BarRelative;
      (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = true;
      (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning = false;
      (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued = false;
      __return_storage_ptr__->GameThreadDelegateID = -1;
      return __return_storage_ptr__;
    }
    pcVar5 = (code *)swi(3);
    pFVar11 = (FQuartzQuantizedRequestData *)(*pcVar5)();
    return pFVar11;
  }
  pTVar12 = MakeShared<Audio::FQuantizedTickRateChange,1>(&local_78);
  pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar12->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if ((pFVar3 == (FQuantizedTickRateChange *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FQuartzQuantizedRequestData *)(*pcVar5)();
    return pFVar11;
  }
  dVar6 = param_3->MillisecondsPerTick;
  (pFVar3->TickRate).FramesPerTick = param_3->FramesPerTick;
  (pFVar3->TickRate).MillisecondsPerTick = dVar6;
  dVar6 = param_3->ThirtySecondNotesPerMinute;
  (pFVar3->TickRate).SecondsPerTick = param_3->SecondsPerTick;
  (pFVar3->TickRate).ThirtySecondNotesPerMinute = dVar6;
  dVar6 = param_3->SampleRate;
  (pFVar3->TickRate).BeatsPerMinute = param_3->BeatsPerMinute;
  (pFVar3->TickRate).SampleRate = dVar6;
  FVar4 = param_1->CurrentClockId;
  FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.Quantization = Tick;
  local_c8.Multiplier = 1.0;
  local_c8.CountingReferencePoint = BarRelative;
  local_c8.bFireOnClockStart = true;
  local_c8.bCancelCommandIfClockIsNotRunning = false;
  local_c8.bResetClockOnQueued = false;
  local_c8.bResumeClockOnQueued = false;
  local_c8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.GameThreadSubscribers.ArrayNum = 0;
  local_c8.GameThreadSubscribers.ArrayMax = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = -1;
  FQuartzQuantizationBoundary::operator=(&local_c8,param_4);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = 0;
  local_80.ReferenceController = pTVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_d0,&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  if (((TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)&local_a8 ==
       &param_4->GameThreadSubscribers) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FQuartzQuantizedRequestData *)(*pcVar5)();
    return pFVar11;
  }
  iVar10 = (param_4->GameThreadSubscribers).ArrayNum;
  if (iVar10 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,iVar10,&local_a8,local_a0,local_a0 + 1);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              (local_a8.Data + (longlong)iVar9 * 0x40,
               (FQuartzGameThreadSubscriber *)
               (param_4->GameThreadSubscribers).AllocatorInstance.Data,iVar10);
  }
  pFVar13 = FQuartzTickableObject::GetQuartzSubscriber
                      ((FQuartzTickableObject *)&param_1->_padding_,&local_68);
  if (((local_a8.Data <= pFVar13) &&
      (pFVar13 < (FQuartzGameThreadSubscriber *)(local_a8.Data + (longlong)local_a0[1] * 0x40))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FQuartzQuantizedRequestData *)(*pcVar5)();
    return pFVar11;
  }
  iVar10 = local_a0[0];
  if (local_a0[0] == local_a0[1]) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&local_a8,local_a0 + 1);
  }
  lVar14 = (longlong)iVar10 * 0x40;
  local_a0[0] = iVar10 + 1;
  local_a8.Data[lVar14 + 8] = (FScriptContainerElement)0x0;
  FVar1 = (FScriptContainerElement)(pFVar13->Offset).OffsetInMilliseconds.bIsSet;
  local_a8.Data[lVar14 + 8] = FVar1;
  if (FVar1 != (FScriptContainerElement)0x0) {
    *(double *)&local_a8.Data[lVar14].field_0x0 = (pFVar13->Offset).OffsetInMilliseconds.TypedValue;
  }
  local_a8.Data[lVar14 + 0x20] = (FScriptContainerElement)0x0;
  FVar1 = (FScriptContainerElement)(pFVar13->Offset).OffsetAsDuration.bIsSet;
  local_a8.Data[lVar14 + 0x20] = FVar1;
  if (FVar1 != (FScriptContainerElement)0x0) {
    uVar7 = *(undefined8 *)&(pFVar13->Offset).OffsetAsDuration.TypedValue.field_0x8;
    *(undefined8 *)(local_a8.Data + lVar14 + 0x10) =
         *(undefined8 *)&(pFVar13->Offset).OffsetAsDuration.TypedValue;
    *(undefined8 *)(local_a8.Data + lVar14 + 0x10 + 8) = uVar7;
  }
  *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
    **)(local_a8.Data + lVar14 + 0x28) = (pFVar13->Queue).Object;
  *(TReferenceControllerBase<1> **)(local_a8.Data + lVar14 + 0x30) =
       (pFVar13->Queue).SharedReferenceCount.ReferenceController;
  (pFVar13->Queue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar13->Queue).Object =
       (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
        *)0x0;
  local_a8.Data[lVar14 + 0x38] = (FScriptContainerElement)pFVar13->bOffsetConvertedToFrames;
  local_a8.Data[lVar14 + 0x39] = (FScriptContainerElement)pFVar13->bHasBeenNotifiedOfAboutToStart;
  *(int *)(local_a8.Data + lVar14 + 0x3c) = pFVar13->OffsetInAudioFrames;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Queue.SharedReferenceCount.ReferenceController);
  bVar8 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_2);
  if (bVar8) {
    local_a0[2] = FQuartzTickableObject::AddCommandDelegate
                            ((FQuartzTickableObject *)&param_1->_padding_,param_2);
  }
  __return_storage_ptr__->ClockName = FVar4;
  (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
  (__return_storage_ptr__->OtherClockName).Number = 0;
  (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)pFVar3;
  (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
       FStack_d0.ReferenceController;
  (__return_storage_ptr__->QuantizationBoundary).Quantization = local_c8.Quantization;
  (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint =
       local_c8.CountingReferencePoint;
  (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = local_c8.bFireOnClockStart;
  (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning =
       local_c8.bCancelCommandIfClockIsNotRunning;
  (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued = local_c8.bResetClockOnQueued;
  (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued =
       local_c8.bResumeClockOnQueued;
  (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
       local_c8.GameThreadSubscribers.AllocatorInstance.Data;
  (__return_storage_ptr__->QuantizationBoundary).Multiplier = local_c8.Multiplier;
  (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum =
       local_c8.GameThreadSubscribers.ArrayNum;
  (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax =
       local_c8.GameThreadSubscribers.ArrayMax;
  (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data = local_a8.Data;
  (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = local_a0[0];
  (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = local_a0[1];
  __return_storage_ptr__->GameThreadDelegateID = local_a0[2];
  FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.GameThreadSubscribers.ArrayNum = 0;
  local_c8.GameThreadSubscribers.ArrayMax = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data,
             local_c8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_c8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// CreateRequestDataForTransportReset @ 146550320

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedRequestData * __cdecl
UQuartzSubsystem::CreateRequestDataForTransportReset
          (FQuartzQuantizedRequestData *__return_storage_ptr__,UQuartzClockHandle *param_1,
          FQuartzQuantizationBoundary *param_2,FOnQuartzCommandEventBP *param_3)

{
  FScriptContainerElement FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FQuantizedTransportReset *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FQuartzQuantizedRequestData *pFVar10;
  TSharedRef<Audio::FQuantizedTransportReset,1> *pTVar11;
  FQuartzGameThreadSubscriber *pFVar12;
  longlong lVar13;
  atomic<int> *paVar14;
  FSharedReferencer<1> FStack_d0;
  FQuartzQuantizationBoundary local_c8;
  ForAnyElementType local_a8;
  int local_a0 [6];
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  TSharedRef<Audio::FQuantizedTransportReset,1> local_78;
  FQuartzGameThreadSubscriber local_68;
  
  if (param_1 == (UQuartzClockHandle *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7969031669896184127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x13f,"InClockHandle");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar5)();
      return pFVar10;
    }
    (__return_storage_ptr__->QuantizationBoundary).Quantization = Tick;
    (__return_storage_ptr__->ClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->ClockName).Number = 0;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued = false;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum = 0;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax = 0;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = 0;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = 0;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = 1.0;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint = BarRelative;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = true;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning = false;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued = false;
    __return_storage_ptr__->GameThreadDelegateID = -1;
  }
  else {
    pTVar11 = MakeShared<Audio::FQuantizedTransportReset,1>(&local_78);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar11->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar14 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar14 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    FVar4 = param_1->CurrentClockId;
    FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c8.Quantization = Tick;
    local_c8.Multiplier = 1.0;
    local_c8.CountingReferencePoint = BarRelative;
    local_c8.bFireOnClockStart = true;
    local_c8.bCancelCommandIfClockIsNotRunning = false;
    local_c8.bResetClockOnQueued = false;
    local_c8.bResumeClockOnQueued = false;
    local_c8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.GameThreadSubscribers.ArrayNum = 0;
    local_c8.GameThreadSubscribers.ArrayMax = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = -1;
    FQuartzQuantizationBoundary::operator=(&local_c8,param_2);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_88 = 0;
    local_80.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_d0,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    if (((TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *)&local_a8 ==
         &param_2->GameThreadSubscribers) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar5)();
      return pFVar10;
    }
    iVar9 = (param_2->GameThreadSubscribers).ArrayNum;
    if (iVar9 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,iVar9,&local_a8,local_a0,local_a0 + 1);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (local_a8.Data + (longlong)iVar8 * 0x40,
                 (FQuartzGameThreadSubscriber *)
                 (param_2->GameThreadSubscribers).AllocatorInstance.Data,iVar9);
    }
    pFVar12 = FQuartzTickableObject::GetQuartzSubscriber
                        ((FQuartzTickableObject *)&param_1->_padding_,&local_68);
    if (((local_a8.Data <= pFVar12) &&
        (pFVar12 < (FQuartzGameThreadSubscriber *)(local_a8.Data + (longlong)local_a0[1] * 0x40)))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FQuartzQuantizedRequestData *)(*pcVar5)();
      return pFVar10;
    }
    iVar9 = local_a0[0];
    if (local_a0[0] == local_a0[1]) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_a8,local_a0 + 1);
    }
    lVar13 = (longlong)iVar9 * 0x40;
    local_a0[0] = iVar9 + 1;
    local_a8.Data[lVar13 + 8] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar12->Offset).OffsetInMilliseconds.bIsSet;
    local_a8.Data[lVar13 + 8] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      *(double *)&local_a8.Data[lVar13].field_0x0 =
           (pFVar12->Offset).OffsetInMilliseconds.TypedValue;
    }
    local_a8.Data[lVar13 + 0x20] = (FScriptContainerElement)0x0;
    FVar1 = (FScriptContainerElement)(pFVar12->Offset).OffsetAsDuration.bIsSet;
    local_a8.Data[lVar13 + 0x20] = FVar1;
    if (FVar1 != (FScriptContainerElement)0x0) {
      uVar6 = *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue.field_0x8;
      *(undefined8 *)(local_a8.Data + lVar13 + 0x10) =
           *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue;
      *(undefined8 *)(local_a8.Data + lVar13 + 0x10 + 8) = uVar6;
    }
    *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
      **)(local_a8.Data + lVar13 + 0x28) = (pFVar12->Queue).Object;
    *(TReferenceControllerBase<1> **)(local_a8.Data + lVar13 + 0x30) =
         (pFVar12->Queue).SharedReferenceCount.ReferenceController;
    (pFVar12->Queue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar12->Queue).Object =
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)0x0;
    local_a8.Data[lVar13 + 0x38] = (FScriptContainerElement)pFVar12->bOffsetConvertedToFrames;
    local_a8.Data[lVar13 + 0x39] = (FScriptContainerElement)pFVar12->bHasBeenNotifiedOfAboutToStart;
    *(int *)(local_a8.Data + lVar13 + 0x3c) = pFVar12->OffsetInAudioFrames;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Queue.SharedReferenceCount.ReferenceController);
    bVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_3);
    if (bVar7) {
      local_a0[2] = FQuartzTickableObject::AddCommandDelegate
                              ((FQuartzTickableObject *)&param_1->_padding_,param_3);
    }
    __return_storage_ptr__->ClockName = FVar4;
    (__return_storage_ptr__->OtherClockName).ComparisonIndex = 0;
    (__return_storage_ptr__->OtherClockName).Number = 0;
    (__return_storage_ptr__->QuantizedCommandPtr).Object = (IQuartzQuantizedCommand *)pFVar3;
    (__return_storage_ptr__->QuantizedCommandPtr).SharedReferenceCount.ReferenceController =
         FStack_d0.ReferenceController;
    (__return_storage_ptr__->QuantizationBoundary).Quantization = local_c8.Quantization;
    (__return_storage_ptr__->QuantizationBoundary).CountingReferencePoint =
         local_c8.CountingReferencePoint;
    (__return_storage_ptr__->QuantizationBoundary).bFireOnClockStart = local_c8.bFireOnClockStart;
    (__return_storage_ptr__->QuantizationBoundary).bCancelCommandIfClockIsNotRunning =
         local_c8.bCancelCommandIfClockIsNotRunning;
    (__return_storage_ptr__->QuantizationBoundary).bResetClockOnQueued =
         local_c8.bResetClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).bResumeClockOnQueued =
         local_c8.bResumeClockOnQueued;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data =
         local_c8.GameThreadSubscribers.AllocatorInstance.Data;
    (__return_storage_ptr__->QuantizationBoundary).Multiplier = local_c8.Multiplier;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayNum =
         local_c8.GameThreadSubscribers.ArrayNum;
    (__return_storage_ptr__->QuantizationBoundary).GameThreadSubscribers.ArrayMax =
         local_c8.GameThreadSubscribers.ArrayMax;
    (__return_storage_ptr__->GameThreadSubscribers).AllocatorInstance.Data = local_a8.Data;
    (__return_storage_ptr__->GameThreadSubscribers).ArrayNum = local_a0[0];
    (__return_storage_ptr__->GameThreadSubscribers).ArrayMax = local_a0[1];
    __return_storage_ptr__->GameThreadDelegateID = local_a0[2];
    FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.GameThreadSubscribers.ArrayNum = 0;
    local_c8.GameThreadSubscribers.ArrayMax = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data,
               local_c8.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_c8.GameThreadSubscribers.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// Deinitialize @ 1465517f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UQuartzSubsystem::Deinitialize(UQuartzSubsystem *this)

{
  uint *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FPersistentQuartzSubsystemData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UWorld *pUVar4;
  FAudioDevice *pFVar5;
  longlong *plVar6;
  
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar4 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) {
    pFVar5 = UWorld::GetAudioDeviceRaw(pUVar4);
    if (pFVar5 != (FAudioDevice *)0x0) {
      plVar6 = ::operator_new(8);
      if (plVar6 != (longlong *)0x0) {
        lpCriticalSection = &pFVar5[1].DeviceID;
        if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        *plVar6 = (longlong)lpCriticalSection;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_14655185c;
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14655185c:
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar4 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) {
    pFVar5 = UWorld::GetAudioDeviceRaw(pUVar4);
    if (pFVar5 != (FAudioDevice *)0x0) {
      pTVar1 = (this->ClockManagerDataPtr).SharedReferenceCount.ReferenceController;
      pFVar2 = (this->ClockManagerDataPtr).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)&pFVar5[1].PlatformSettings.NumSourceWorkers;
      *(FPersistentQuartzSubsystemData **)&pFVar5[1].PlatformSettings.NumBuffers = pFVar2;
      *(TReferenceControllerBase<1> **)&pFVar5[1].PlatformSettings.NumSourceWorkers = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar6 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar6);
      *plVar6 = 0;
    }
    ::operator_delete(plVar6,8);
  }
  return;
}

// DeleteClockByHandle @ 146551900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::DeleteClockByHandle
          (UQuartzSubsystem *this,UObject *param_1,UQuartzClockHandle **param_2)

{
  if (*param_2 != (UQuartzClockHandle *)0x0) {
    DeleteClockByName(this,param_1,(*param_2)->CurrentClockId);
    return;
  }
  return;
}

// DeleteClockByName @ 146551920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::DeleteClockByName(UQuartzSubsystem *this,UObject *param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FQuartzClock *pFVar1;
  FQuartzClockManager *this_00;
  TSharedPtr<Audio::FQuartzClock,1> *pTVar2;
  bool bVar3;
  FName local_res18;
  TSharedPtr<Audio::FQuartzClock,1> local_28;
  
  bVar3 = false;
  local_res18 = param_2;
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 != (FQuartzClockManager *)0x0) {
    lpCriticalSection = &this_00->ActiveClockCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = Audio::FQuartzClockManager::FindClock(this_00,&local_28,&local_res18);
    pFVar1 = pTVar2->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar1 == (FQuartzClock *)0x0) {
      this_00 = GetClockManager(this,param_1,false);
      bVar3 = true;
      if (this_00 == (FQuartzClockManager *)0x0) {
        return;
      }
    }
    Audio::FQuartzClockManager::RemoveClock(this_00,&local_res18,bVar3);
    PruneStaleProxies(this);
  }
  return;
}

// DoesClockExist @ 146552a50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UQuartzSubsystem::DoesClockExist(UQuartzSubsystem *this,UObject *param_1,FName param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FQuartzClockProxy *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pFVar4 = FindProxyByName(this,local_res18);
  if (pFVar4 != (FQuartzClockProxy *)0x0) {
    pTVar1 = (pFVar4->SharedQueue).WeakReferenceCount.ReferenceController;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar6;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return false;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar7 = aVar2 == aVar3;
        if (bVar7) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar7);
      pTVar5 = (TReferenceControllerBase<1> *)(pFVar4->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      pTVar1 = (pFVar4->SharedQueue).WeakReferenceCount.ReferenceController;
      pTVar5 = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar1->SharedReferenceCount;
        do {
          pTVar5 = pTVar6;
          if (aVar2 == (atomic<int>)0x0) goto LAB_146552af1;
          LOCK();
          aVar3 = pTVar1->SharedReferenceCount;
          bVar7 = aVar2 == aVar3;
          if (bVar7) {
            pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar3 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar3;
        } while (!bVar7);
        pTVar6 = (TReferenceControllerBase<1> *)(pFVar4->SharedQueue).Object;
        pTVar5 = pTVar1;
      }
LAB_146552af1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return pTVar6 != (TReferenceControllerBase<1> *)0x0;
    }
  }
  return false;
}

// DoesSupportWorldType @ 146552b40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UQuartzSubsystem::DoesSupportWorldType(UQuartzSubsystem *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if ((!bVar1) && (param_1 != EditorPreview)) {
    return false;
  }
  return true;
}

// FindProxyByName @ 146553fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FQuartzClockProxy * __thiscall
UQuartzSubsystem::FindProxyByName(UQuartzSubsystem *this,FName *param_1)

{
  uint *lpCriticalSection;
  FPersistentQuartzSubsystemData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FQuartzClockProxy *pFVar4;
  UWorld *this_00;
  FAudioDevice *pFVar5;
  longlong *plVar6;
  FQuartzClockProxy *pFVar7;
  
  if (((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClockManagerDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0x29e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
    return pFVar4;
  }
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((((this_00 == (UWorld *)0x0) || (SimulateNoAudioDeviceCvar != 0)) ||
      (pFVar5 = UWorld::GetAudioDeviceRaw(this_00), pFVar5 == (FAudioDevice *)0x0)) ||
     (plVar6 = ::operator_new(8), plVar6 == (longlong *)0x0)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lpCriticalSection = &pFVar5[1].DeviceID;
    if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    *plVar6 = (longlong)lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
    return pFVar4;
  }
  pFVar1 = (this->ClockManagerDataPtr).Object;
  pFVar7 = (FQuartzClockProxy *)(pFVar1->ActiveAudioMixerClockProxies).AllocatorInstance.Data;
  pFVar4 = pFVar7 + (pFVar1->ActiveAudioMixerClockProxies).ArrayNum;
  if (pFVar7 != pFVar4) {
    do {
      if (pFVar7->ClockId == *param_1) {
        if (pFVar7 != (FQuartzClockProxy *)0x0) goto LAB_146554140;
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar4);
  }
  if ((pFVar1 == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
    return pFVar4;
  }
  pFVar1 = (this->ClockManagerDataPtr).Object;
  pFVar7 = (FQuartzClockProxy *)(pFVar1->ActiveExternalClockProxies).AllocatorInstance.Data;
  pFVar4 = pFVar7 + (pFVar1->ActiveExternalClockProxies).ArrayNum;
  if (pFVar7 != pFVar4) {
    do {
      if (pFVar7->ClockId == *param_1) goto LAB_146554140;
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar4);
  }
  pFVar7 = (FQuartzClockProxy *)0x0;
LAB_146554140:
  if (plVar6 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar6 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar6);
      *plVar6 = 0;
    }
    ::operator_delete(plVar6,8);
  }
  return pFVar7;
}

// FindProxyByName @ 146554190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FQuartzClockProxy * __thiscall
UQuartzSubsystem::FindProxyByName(UQuartzSubsystem *this,FName *param_1)

{
  uint *lpCriticalSection;
  FPersistentQuartzSubsystemData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FQuartzClockProxy *pFVar4;
  UWorld *this_00;
  FAudioDevice *pFVar5;
  longlong *plVar6;
  FQuartzClockProxy *pFVar7;
  
  if (((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClockManagerDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0x2ad,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
    return pFVar4;
  }
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((((this_00 == (UWorld *)0x0) || (SimulateNoAudioDeviceCvar != 0)) ||
      (pFVar5 = UWorld::GetAudioDeviceRaw(this_00), pFVar5 == (FAudioDevice *)0x0)) ||
     (plVar6 = ::operator_new(8), plVar6 == (longlong *)0x0)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lpCriticalSection = &pFVar5[1].DeviceID;
    if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    *plVar6 = (longlong)lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
    return pFVar4;
  }
  pFVar1 = (this->ClockManagerDataPtr).Object;
  pFVar7 = (FQuartzClockProxy *)(pFVar1->ActiveAudioMixerClockProxies).AllocatorInstance.Data;
  pFVar4 = pFVar7 + (pFVar1->ActiveAudioMixerClockProxies).ArrayNum;
  if (pFVar7 != pFVar4) {
    do {
      if (pFVar7->ClockId == *param_1) {
        if (pFVar7 != (FQuartzClockProxy *)0x0) goto LAB_1465542f0;
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar4);
  }
  if ((pFVar1 == (FPersistentQuartzSubsystemData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
    return pFVar4;
  }
  pFVar1 = (this->ClockManagerDataPtr).Object;
  pFVar7 = (FQuartzClockProxy *)(pFVar1->ActiveExternalClockProxies).AllocatorInstance.Data;
  pFVar4 = pFVar7 + (pFVar1->ActiveExternalClockProxies).ArrayNum;
  if (pFVar7 != pFVar4) {
    do {
      if (pFVar7->ClockId == *param_1) goto LAB_1465542f0;
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar4);
  }
  pFVar7 = (FQuartzClockProxy *)0x0;
LAB_1465542f0:
  if (plVar6 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar6 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar6);
      *plVar6 = 0;
    }
    ::operator_delete(plVar6,8);
  }
  return pFVar7;
}

// Get @ 146554d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UQuartzSubsystem * __cdecl UQuartzSubsystem::Get(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UQuartzSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UQuartzSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_146554dc8;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_146554dc8:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_146554df8;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_146554df8:
  pUVar5 = (UQuartzSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetAudioRenderThreadToGameThreadAverageLatency @ 1465551b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency(UQuartzSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickableObjectManagerPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x25a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FQuartLatencyTracker::GetLifetimeAverageLatency
                    ((FQuartLatencyTracker *)(this->TickableObjectManagerPtr).Object);
  return fVar3;
}

// GetAudioRenderThreadToGameThreadMaxLatency @ 146555230

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency(UQuartzSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickableObjectManagerPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x268,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FQuartLatencyTracker::GetMaxLatency
                    ((FQuartLatencyTracker *)(this->TickableObjectManagerPtr).Object);
  return fVar3;
}

// GetAudioRenderThreadToGameThreadMinLatency @ 1465552b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency(UQuartzSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickableObjectManagerPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x261,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FQuartLatencyTracker::GetMinLatency
                    ((FQuartLatencyTracker *)(this->TickableObjectManagerPtr).Object);
  return fVar3;
}

// GetClockManager @ 1465559d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FQuartzClockManager * __thiscall
UQuartzSubsystem::GetClockManager(UQuartzSubsystem *this,UObject *param_1,bool param_2)

{
  uint *lpCriticalSection;
  FPersistentQuartzSubsystemData *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  FAudioDevice *pFVar5;
  FQuartzClockManager *pFVar6;
  longlong *plVar7;
  
  pUVar4 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if ((pUVar4 == (UWorld *)0x0) || (SimulateNoAudioDeviceCvar != 0)) {
    pFVar5 = (FAudioDevice *)0x0;
  }
  else {
    pFVar5 = UWorld::GetAudioDeviceRaw(pUVar4);
  }
  if ((param_2) && (pFVar5 != (FAudioDevice *)0x0)) {
    return (FQuartzClockManager *)pFVar5[1].RenderStateCallbackListCritSec.CriticalSection.Opaque2;
  }
  if ((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClockManagerDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,400,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FQuartzClockManager *)(*pcVar2)();
      return pFVar6;
    }
  }
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar4 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) {
    pFVar5 = UWorld::GetAudioDeviceRaw(pUVar4);
    if (pFVar5 != (FAudioDevice *)0x0) {
      plVar7 = ::operator_new(8);
      if (plVar7 != (longlong *)0x0) {
        lpCriticalSection = &pFVar5[1].DeviceID;
        if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        *plVar7 = (longlong)lpCriticalSection;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_146555aad;
      }
    }
  }
  plVar7 = (longlong *)0x0;
LAB_146555aad:
  if ((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FQuartzClockManager *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->ClockManagerDataPtr).Object;
  if (plVar7 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar7 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar7);
      *plVar7 = 0;
    }
    ::operator_delete(plVar7,8);
  }
  return &pFVar1->SubsystemClockManager;
}

// GetCurrentClockTimestamp @ 146555e50

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzTransportTimeStamp * __thiscall
UQuartzSubsystem::GetCurrentClockTimestamp
          (UQuartzSubsystem *this,FQuartzTransportTimeStamp *__return_storage_ptr__,UObject *param_1
          ,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FQuartzClockProxy *this_00;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar4;
  bool bVar5;
  
  this_00 = FindProxyByName(this,param_2);
  pTVar4 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  if (this_00 != (FQuartzClockProxy *)0x0) {
    pTVar1 = (this_00->SharedQueue).WeakReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_146555ea5;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
      pTVar4 = (this_00->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pTVar4 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      Audio::FQuartzClockProxy::GetCurrentClockTimestamp(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
LAB_146555ea5:
  __return_storage_ptr__->Bars = 0;
  __return_storage_ptr__->Beat = 0;
  __return_storage_ptr__->BeatFraction = 0.0;
  __return_storage_ptr__->Seconds = 0.0;
  return __return_storage_ptr__;
}

// GetDurationOfQuantizationTypeInSeconds @ 146557830

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds
          (UQuartzSubsystem *this,UObject *param_1,FName param_2,EQuartzCommandQuantization *param_3
          ,float param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FQuartzClockProxy *this_00;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar4;
  bool bVar5;
  float fVar6;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  this_00 = FindProxyByName(this,local_res18);
  if (this_00 != (FQuartzClockProxy *)0x0) {
    pTVar1 = (this_00->SharedQueue).WeakReferenceCount.ReferenceController;
    pTVar4 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return 0.0;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
      pTVar4 = (this_00->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pTVar4 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      fVar6 = Audio::FQuartzClockProxy::GetDurationOfQuantizationTypeInSeconds
                        (this_00,param_3,param_4);
      return fVar6;
    }
  }
  return 0.0;
}

// GetEstimatedClockRunTime @ 146557950

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetEstimatedClockRunTime(UQuartzSubsystem *this,UObject *param_1,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FQuartzClockProxy *this_00;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar4;
  bool bVar5;
  float fVar6;
  
  this_00 = FindProxyByName(this,param_2);
  if (this_00 != (FQuartzClockProxy *)0x0) {
    pTVar1 = (this_00->SharedQueue).WeakReferenceCount.ReferenceController;
    pTVar4 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return 0.0;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
      pTVar4 = (this_00->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pTVar4 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      fVar6 = Audio::FQuartzClockProxy::GetEstimatedClockRunTimeSeconds(this_00);
      return fVar6;
    }
  }
  return 0.0;
}

// GetGameThreadToAudioRenderThreadAverageLatency @ 146558320

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency
          (UQuartzSubsystem *this,UObject *param_1)

{
  FQuartzClockManager *this_00;
  float fVar1;
  
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 == (FQuartzClockManager *)0x0) {
    return 0.0;
  }
  fVar1 = FQuartLatencyTracker::GetLifetimeAverageLatency((FQuartLatencyTracker *)this_00);
  return fVar1;
}

// GetGameThreadToAudioRenderThreadMaxLatency @ 146558350

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency
          (UQuartzSubsystem *this,UObject *param_1)

{
  FQuartzClockManager *this_00;
  float fVar1;
  
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 == (FQuartzClockManager *)0x0) {
    return 0.0;
  }
  fVar1 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this_00);
  return fVar1;
}

// GetGameThreadToAudioRenderThreadMinLatency @ 146558380

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency
          (UQuartzSubsystem *this,UObject *param_1)

{
  FQuartzClockManager *this_00;
  float fVar1;
  
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 == (FQuartzClockManager *)0x0) {
    return 0.0;
  }
  fVar1 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this_00);
  return fVar1;
}

// GetHandleForClock @ 146558410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UQuartzClockHandle * __thiscall
UQuartzSubsystem::GetHandleForClock(UQuartzSubsystem *this,UObject *param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FQuartzClock *pFVar3;
  code *pcVar4;
  bool bVar5;
  FQuartzClockManager *this_00;
  TSharedPtr<Audio::FQuartzClock,1> *pTVar6;
  UObject *pUVar7;
  UQuartzClockHandle *pUVar8;
  UWorld *pUVar9;
  FQuartzTickableObject *pFVar10;
  FName local_res18;
  FName local_res20;
  TSharedPtr<Audio::FQuartzClock,1> local_b8;
  FQuartzClockProxy local_a8;
  TSharedPtr<Audio::FQuartzClock,1> local_80;
  TSharedPtr<Audio::FQuartzClock,1> local_68;
  FString local_58;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FQuartzClock *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_res18 = param_2;
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 != (FQuartzClockManager *)0x0) {
    lpCriticalSection = &this_00->ActiveClockCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar6 = Audio::FQuartzClockManager::FindClock(this_00,&local_80,&local_res18);
    pFVar3 = pTVar6->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar3 != (FQuartzClock *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      Audio::FQuartzClockManager::FindClock(this_00,&local_b8,&local_res18);
      if (local_b8.Object == (FQuartzClock *)0x0) {
        if (2 < (byte)LogAudioQuartz._0_1_) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pUVar8 = (UQuartzClockHandle *)(*pcVar4)();
            return pUVar8;
          }
          local_res20 = FRam0000000000000518;
          ::FName::ToString(&local_res20,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        local_a8.ClockId.ComparisonIndex.Value = 0;
        local_a8.ClockId.Number = 0;
        local_a8.SharedQueue.Object = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
        local_a8.SharedQueue.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_a8.ClockWeakPtr.Object = (FQuartzClock *)0x0;
        local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_68.Object = local_b8.Object;
        local_68.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        Audio::FQuartzClockProxy::FQuartzClockProxy(&local_a8,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pUVar7 = GetTransientPackageAsObject();
      pUVar8 = NewObject<UQuartzClockHandle>(pUVar7);
      pUVar9 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      pFVar10 = FQuartzTickableObject::Init((FQuartzTickableObject *)&pUVar8->_padding_,pUVar9);
      pUVar8 = (UQuartzClockHandle *)&pFVar10[-1].CommandQueuePtr;
      if (pFVar10 == (FQuartzTickableObject *)0x0) {
        pUVar8 = (UQuartzClockHandle *)0x0;
      }
      pUVar8->CurrentClockId = param_2;
      (pUVar8->RawHandle).ClockId = local_a8.ClockId;
      if (local_a8.SharedQueue.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedQueue.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedQueue.WeakReferenceCount.ReferenceController)->WeakReferenceCount
             + 1);
        UNLOCK();
      }
      local_48 = (pUVar8->RawHandle).SharedQueue.Object;
      pTStack_40 = (pUVar8->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController;
      (pUVar8->RawHandle).SharedQueue.Object = local_a8.SharedQueue.Object;
      (pUVar8->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController =
           local_a8.SharedQueue.WeakReferenceCount.ReferenceController;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTStack_40->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTStack_40->_padding_ + 8))(pTStack_40,1);
        }
      }
      if (local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      local_38 = (pUVar8->RawHandle).ClockWeakPtr.Object;
      pTStack_30 = (pUVar8->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
      (pUVar8->RawHandle).ClockWeakPtr.Object = local_a8.ClockWeakPtr.Object;
      (pUVar8->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController =
           local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController;
      if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTStack_30->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTStack_30->_padding_ + 8))(pTStack_30,1);
        }
      }
      if (local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount
        ;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8
                      ))(local_a8.ClockWeakPtr.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_a8.SharedQueue.WeakReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        return pUVar8;
      }
      LOCK();
      paVar1 = &(local_a8.SharedQueue.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 != (atomic<int>)0x1) {
        return pUVar8;
      }
      (**(code **)((local_a8.SharedQueue.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_a8.SharedQueue.WeakReferenceCount.ReferenceController,1);
      return pUVar8;
    }
  }
  return (UQuartzClockHandle *)0x0;
}

// GetPrivateStaticClass @ 14655a160

UClass * __cdecl UQuartzSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"QuartzSubsystem",
               &Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton,
               StaticRegisterNativesUQuartzSubsystem,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UQuartzSubsystem>,
               InternalVTableHelperCtorCaller<UQuartzSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuartzSubsystem.InnerSingleton;
}

// GetProxyForClock @ 14655a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockProxy * __thiscall
UQuartzSubsystem::GetProxyForClock
          (UQuartzSubsystem *this,FQuartzClockProxy *__return_storage_ptr__,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuartzClockProxy *pFVar2;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  pFVar2 = FindProxyByName(this,local_res18);
  if (pFVar2 == (FQuartzClockProxy *)0x0) {
    (__return_storage_ptr__->ClockId).ComparisonIndex = 0;
    (__return_storage_ptr__->ClockId).Number = 0;
    (__return_storage_ptr__->SharedQueue).Object =
         (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
    (__return_storage_ptr__->SharedQueue).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->ClockWeakPtr).Object = (FQuartzClock *)0x0;
    (__return_storage_ptr__->ClockWeakPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->ClockId = pFVar2->ClockId;
    (__return_storage_ptr__->SharedQueue).Object = (pFVar2->SharedQueue).Object;
    pTVar1 = (pFVar2->SharedQueue).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedQueue).WeakReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->ClockWeakPtr).Object = (pFVar2->ClockWeakPtr).Object;
    pTVar1 = (pFVar2->ClockWeakPtr).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->ClockWeakPtr).WeakReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetRoundTripAverageLatency @ 14655a790

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzSubsystem::GetRoundTripAverageLatency(UQuartzSubsystem *this,UObject *param_1)

{
  FQuartzClockManager *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 == (FQuartzClockManager *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FQuartLatencyTracker::GetLifetimeAverageLatency((FQuartLatencyTracker *)this_00);
  }
  fVar1 = GetAudioRenderThreadToGameThreadAverageLatency(this);
  return fVar1 + fVar2;
}

// GetRoundTripMaxLatency @ 14655a7e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UQuartzSubsystem::GetRoundTripMaxLatency(UQuartzSubsystem *this,UObject *param_1)

{
  FQuartzClockManager *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 == (FQuartzClockManager *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this_00);
  }
  fVar1 = GetAudioRenderThreadToGameThreadMinLatency(this);
  return fVar1 + fVar2;
}

// GetRoundTripMinLatency @ 14655a830

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UQuartzSubsystem::GetRoundTripMinLatency(UQuartzSubsystem *this,UObject *param_1)

{
  FQuartzClockManager *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = GetClockManager(this,param_1,true);
  if (this_00 == (FQuartzClockManager *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this_00);
  }
  fVar1 = GetAudioRenderThreadToGameThreadMaxLatency(this);
  return fVar1 + fVar2;
}

// GetStatId @ 14655b530

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UQuartzSubsystem::GetStatId(UQuartzSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UQuartzSubsystem::GetStatId(void)const_::_2_::FStat_UQuartzSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UQuartzSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UQuartzSubsystem::GetStatId(void)const_::_2_::FStat_UQuartzSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UQuartzSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UQuartzSubsystem,*pFVar1,
                   L"UQuartzSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UQuartzSubsystem;
  if (StatPtr_UQuartzSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UQuartzSubsystem::GetStatId(void)const_::_2_::FStat_UQuartzSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UQuartzSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UQuartzSubsystem::GetStatId(void)const_::_2_::FStat_UQuartzSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UQuartzSubsystem,*pFVar1,
                         L"UQuartzSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableObjectManager @ 14655ba70

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<FQuartzTickableObjectsManager,1> * __thiscall
UQuartzSubsystem::GetTickableObjectManager
          (UQuartzSubsystem *this,TWeakPtr<FQuartzTickableObjectsManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TickableObjectManagerPtr).Object;
  pTVar1 = (this->TickableObjectManagerPtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Initialize @ 1465606a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::Initialize(UQuartzSubsystem *this,FSubsystemCollectionBase *param_1)

{
  uint *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FAudioDevice *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPersistentQuartzSubsystemData *pFVar7;
  FPersistentQuartzSubsystemData *local_38;
  FSharedReferencer<1> FStack_30;
  FPersistentQuartzSubsystemData *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((pUVar3 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) &&
     (pFVar4 = UWorld::GetAudioDeviceRaw(pUVar3), pFVar4 != (FAudioDevice *)0x0)) {
    lpCriticalSection = &pFVar4[1].DeviceID;
    plVar5 = ::operator_new(8);
    if (plVar5 != (longlong *)0x0) {
      if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      *plVar5 = (longlong)lpCriticalSection;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14656070e;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14656070e:
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar3 != (UWorld *)0x0) &&
     (pFVar4 = UWorld::GetAudioDeviceRaw(pUVar3), pFVar4 != (FAudioDevice *)0x0)) {
    pFVar7 = *(FPersistentQuartzSubsystemData **)&pFVar4[1].PlatformSettings.NumBuffers;
    pTVar6 = *(TReferenceControllerBase<1> **)&pFVar4[1].PlatformSettings.NumSourceWorkers;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = (this->ClockManagerDataPtr).Object;
    pTStack_20 = (this->ClockManagerDataPtr).SharedReferenceCount.ReferenceController;
    (this->ClockManagerDataPtr).Object = pFVar7;
    (this->ClockManagerDataPtr).SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  if ((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) {
    pTVar6 = ::operator_new(0xa0);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FPersistentQuartzSubsystemData *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPersistentQuartzSubsystemData_Audio___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ = 0;
      pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[2]._padding_ = 0;
      pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[3]._padding_ = 0;
      pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[4]._padding_ = 0;
      pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[5]._padding_ = 0;
      pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[6]._padding_ = 0;
      pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[7]._padding_ = 0;
      pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[8]._padding_ = 0;
      pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[9]._padding_ = 0;
      pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
      FQuartLatencyTracker::FQuartLatencyTracker((FQuartLatencyTracker *)(pTVar6 + 1));
      pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 4),4000);
      pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
      pFVar7 = (FPersistentQuartzSubsystemData *)(pTVar6 + 1);
      pTVar6[7]._padding_ = 0;
      pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[8]._padding_ = 0;
      pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[9]._padding_ = 0;
      pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
      if ((pFVar7 == (FPersistentQuartzSubsystemData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      FStack_30.ReferenceController = pTVar6;
      local_38 = pFVar7;
    }
    if (&this->ClockManagerDataPtr !=
        (TSharedPtr<Audio::FPersistentQuartzSubsystemData,1> *)&local_38) {
      (this->ClockManagerDataPtr).Object = pFVar7;
      local_38 = (FPersistentQuartzSubsystemData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClockManagerDataPtr).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar5 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar5);
      *plVar5 = 0;
    }
    ::operator_delete(plVar5,8);
  }
  return;
}

// IsClockRunning @ 146561000

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UQuartzSubsystem::IsClockRunning(UQuartzSubsystem *this,UObject *param_1,FName param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FQuartzClockProxy *this_00;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar4;
  bool bVar5;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  this_00 = FindProxyByName(this,local_res18);
  if (this_00 != (FQuartzClockProxy *)0x0) {
    pTVar1 = (this_00->SharedQueue).WeakReferenceCount.ReferenceController;
    pTVar4 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return false;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
      pTVar4 = (this_00->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pTVar4 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      bVar5 = Audio::FQuartzClockProxy::IsClockRunning(this_00);
      return bVar5;
    }
  }
  return false;
}

// IsQuartzEnabled @ 1465613b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UQuartzSubsystem::IsQuartzEnabled(UQuartzSubsystem *this)

{
  return true;
}

// IsTickable @ 146561a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UQuartzSubsystem::IsTickable(UQuartzSubsystem *this)

{
  uint *lpCriticalSection;
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ushort uVar7;
  UWorld *this_00;
  FAudioDevice *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickableObjectManagerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0xda,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClockManagerDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0xdb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1]._padding_);
  if (((this_00 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) &&
     (pFVar8 = UWorld::GetAudioDeviceRaw(this_00), pFVar8 != (FAudioDevice *)0x0)) {
    lpCriticalSection = &pFVar8[1].DeviceID;
    plVar9 = ::operator_new(8);
    if (plVar9 != (longlong *)0x0) {
      if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      *plVar9 = (longlong)lpCriticalSection;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_146561acb;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_146561acb:
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar12 = (ulonglong)_tls_index;
  iVar2 = *(int *)(this->_padding_ + 0x60);
  lVar13 = (longlong)iVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    __TraceCounter223.Value = 0;
    __TraceCounter223.CounterName = L"QuartzSubsystem::NumClocks";
    __TraceCounter223.CounterId = (atomic<unsigned_int>)0x0;
    __TraceCounter223.CounterFlags = '\0';
    __TraceCounter223.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"QuartzSubsystem::NumClocks",TraceCounterType_Int,TraceCounterDisplayHint_None)
    ;
    LOCK();
    __TraceCounter223.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`UQuartzSubsystem::IsTickable'::__l2::_dynamic_atexit_destructor_for____TraceCounter223__
          );
    _Init_thread_footer(&::_TSS0);
  }
  if ((__TraceCounter223.Value != lVar13) &&
     (__TraceCounter223.Value = lVar13, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter223.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__TraceCounter223.CounterName,TraceCounterType_Int,
                         __TraceCounter223.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter223.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter223.CounterId._2_2_ = 0;
        __TraceCounter223.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter223.CounterId._0_2_,__TraceCounter223.Value);
  }
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar13 = this->_padding_;
  iVar3 = *(int *)(lVar13 + 0x30);
  lVar10 = (longlong)iVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    __TraceCounter149.Value = 0;
    __TraceCounter149.CounterName = L"QuartzSubsystem::NumSubscribers";
    __TraceCounter149.CounterId = (atomic<unsigned_int>)0x0;
    __TraceCounter149.CounterFlags = '\0';
    __TraceCounter149.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"QuartzSubsystem::NumSubscribers",TraceCounterType_Int,
                    TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter149.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`FQuartzTickableObjectsManager::IsTickable'::__l2::
           _dynamic_atexit_destructor_for____TraceCounter149__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((__TraceCounter149.Value != lVar10) &&
     (__TraceCounter149.Value = lVar10, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter149.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__TraceCounter149.CounterName,TraceCounterType_Int,
                         __TraceCounter149.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter149.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter149.CounterId._2_2_ = 0;
        __TraceCounter149.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter149.CounterId._0_2_,__TraceCounter149.Value);
  }
  if (iVar3 < 1) {
LAB_146561d5f:
    bVar5 = false;
  }
  else {
    puVar11 = *(undefined8 **)(lVar13 + 0x28);
    iVar3 = *(int *)(lVar13 + 0x30);
    puVar1 = puVar11 + iVar3;
    while( true ) {
      if (*(int *)(lVar13 + 0x30) != iVar3) {
        `TCheckedPointerIterator<FQuartzTickableObject_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (puVar11 == puVar1) goto LAB_146561d5f;
      if (((FQuartzTickableObject *)*puVar11 != (FQuartzTickableObject *)0x0) &&
         (bVar5 = FQuartzTickableObject::QuartzIsTickable((FQuartzTickableObject *)*puVar11), bVar5)
         ) break;
      puVar11 = puVar11 + 1;
    }
    bVar5 = true;
  }
  if ((0 < iVar2) || (bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (plVar9 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar9 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar9);
      *plVar9 = 0;
    }
    ::operator_delete(plVar9,8);
  }
  return bVar5;
}

// IsTickableWhenPaused @ 146561de0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UQuartzSubsystem::IsTickableWhenPaused(UQuartzSubsystem *this)

{
  return (bool)(char)this->_padding_;
}

// PruneStaleProxies @ 146569d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UQuartzSubsystem::PruneStaleProxies(UQuartzSubsystem *this)

{
  uint *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FAudioDevice *pFVar3;
  longlong *plVar4;
  
  if ((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClockManagerDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0x28b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((this_00 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) {
    pFVar3 = UWorld::GetAudioDeviceRaw(this_00);
    if (pFVar3 != (FAudioDevice *)0x0) {
      plVar4 = ::operator_new(8);
      if (plVar4 != (longlong *)0x0) {
        lpCriticalSection = &pFVar3[1].DeviceID;
        if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        *plVar4 = (longlong)lpCriticalSection;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_146569df5;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_146569df5:
  if ((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) {
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
  PruneStaleProxiesInternal(&((this->ClockManagerDataPtr).Object)->ActiveExternalClockProxies);
  if ((this->ClockManagerDataPtr).Object == (FPersistentQuartzSubsystemData *)0x0) {
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
  PruneStaleProxiesInternal(&((this->ClockManagerDataPtr).Object)->ActiveAudioMixerClockProxies);
  if (plVar4 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar4 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar4);
      *plVar4 = 0;
    }
    ::operator_delete(plVar4,8);
  }
  return;
}

// PruneStaleProxiesInternal @ 146569eb0

void __cdecl
UQuartzSubsystem::PruneStaleProxiesInternal
          (TArray<Audio::FQuartzClockProxy,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      lVar10 = 0;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar11 + 0x10);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar2->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_146569f7a;
          }
          LOCK();
          aVar7 = pTVar2->SharedReferenceCount;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        lVar10 = *(longlong *)(pFVar1 + lVar11 + 8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (lVar10 == 0) {
LAB_146569f7a:
        lVar11 = lVar11 + -0x28;
        uVar6 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<Audio::FQuartzClockProxy,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (param_1,uVar9);
        uVar9 = uVar9 - 1;
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x28;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// SetQuartzSubsystemTickableWhenPaused @ 1465742c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::SetQuartzSubsystemTickableWhenPaused(UQuartzSubsystem *this,bool param_1)

{
  this->bTickEvenWhenPaused = param_1;
  return;
}

// StaticRegisterNativesUQuartzSubsystem @ 146577900

void __cdecl UQuartzSubsystem::StaticRegisterNativesUQuartzSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UQuartzSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SubscribeToQuartzTick @ 1465789a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::SubscribeToQuartzTick(UQuartzSubsystem *this,FQuartzTickableObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FQuartzTickableObject *local_res8;
  
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickableObjectManagerPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                       ,0xef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) {
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
  if (param_1 != (FQuartzTickableObject *)0x0) {
    local_res8 = param_1;
    TArray<FQuartzTickableObject_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FQuartzTickableObject_*_const_&>
              (&((this->TickableObjectManagerPtr).Object)->QuartzTickSubscribers,&local_res8);
  }
  return;
}

// Tick @ 146579830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UQuartzSubsystem::Tick(UQuartzSubsystem *this,float param_1)

{
  uint *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FAudioDevice *pFVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (!__CsvProfilerStat198) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    __CsvProfilerStat198 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId200,"QuartzSubsystem::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
               ,200);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId200);
  }
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickableObjectManagerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0xca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClockManagerDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0xcb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1]._padding_);
  if ((((this_00 == (UWorld *)0x0) || (SimulateNoAudioDeviceCvar != 0)) ||
      (pFVar3 = UWorld::GetAudioDeviceRaw(this_00), pFVar3 == (FAudioDevice *)0x0)) ||
     (plVar4 = ::operator_new(8), plVar4 == (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lpCriticalSection = &pFVar3[1].DeviceID;
    if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    *plVar4 = (longlong)lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  PruneStaleProxies((UQuartzSubsystem *)&this[-1]._padding_);
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Audio::FQuartzClockManager::LowResoultionUpdate((FQuartzClockManager *)this->_padding_,param_1);
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FQuartzTickableObjectsManager::Tick((FQuartzTickableObjectsManager *)this->_padding_,param_1);
  if (plVar4 != (longlong *)0x0) {
    if ((LPCRITICAL_SECTION)*plVar4 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*plVar4);
      *plVar4 = 0;
    }
    ::operator_delete(plVar4,8);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndExclusiveStat("Audio");
  return;
}

// UnsubscribeFromQuartzTick @ 14657b470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzSubsystem::UnsubscribeFromQuartzTick(UQuartzSubsystem *this,FQuartzTickableObject *param_1)

{
  int *piVar1;
  int iVar2;
  FQuartzTickableObjectsManager *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  if (((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickableObjectManagerPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                         ,0xf6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->TickableObjectManagerPtr).Object == (FQuartzTickableObjectsManager *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1 != (FQuartzTickableObject *)0x0) {
    pFVar3 = (this->TickableObjectManagerPtr).Object;
    pFVar4 = (pFVar3->QuartzTickSubscribers).AllocatorInstance.Data;
    iVar7 = (pFVar3->QuartzTickSubscribers).ArrayNum;
    pFVar10 = pFVar4;
    if (pFVar4 != pFVar4 + (longlong)iVar7 * 8) {
      while (*(FQuartzTickableObject **)pFVar10 != param_1) {
        pFVar10 = pFVar10 + 8;
        if (pFVar10 == pFVar4 + (longlong)iVar7 * 8) {
          return;
        }
      }
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
      if (uVar9 != 0xffffffff) {
        uVar8 = 0;
        if ((int)(uVar9 + 1) <= iVar7) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (pFVar3->QuartzTickSubscribers).ArrayNum;
        pFVar4 = (pFVar3->QuartzTickSubscribers).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        piVar1 = &(pFVar3->QuartzTickSubscribers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(pFVar3->QuartzTickSubscribers).AllocatorInstance,
                   (pFVar3->QuartzTickSubscribers).ArrayNum,
                   &(pFVar3->QuartzTickSubscribers).ArrayMax);
      }
    }
  }
  return;
}

// execCreateNewClock @ 14657e3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UQuartzSubsystem::execCreateNewClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  uint *lpCriticalSection;
  FName *pFVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  UObject *pUVar7;
  int iVar8;
  FQuartzClockManager *this;
  UObject *pUVar9;
  UQuartzClockHandle *pUVar10;
  UWorld *pUVar11;
  FQuartzTickableObject *pFVar12;
  FAudioDevice *pFVar13;
  UQuartzClockHandle *pUVar14;
  UQuartzClockHandle *pUVar15;
  ForAnyElementType *pFVar16;
  bool bVar17;
  bool bVar18;
  int local_res10 [4];
  int local_res20 [2];
  FName local_c8;
  UObject *local_c0;
  FName local_b8;
  FQuartzTimeSignature local_b0;
  undefined1 local_98;
  FQuartzClockProxy local_90;
  FQuartzClockSettings local_68;
  FString local_48;
  
  pUVar15 = (UQuartzClockHandle *)0x0;
  local_c0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_b0.NumBeats = 4;
  local_b0.BeatType = QuarterNote;
  local_b0.OptionalPulseOverride.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.OptionalPulseOverride.ArrayNum = 0;
  local_b0.OptionalPulseOverride.ArrayMax = 0;
  local_98 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar17 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar18 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FQuartzTimeSignature::FQuartzTimeSignature(&local_68.TimeSignature,&local_b0);
  pUVar7 = local_c0;
  local_68.bIgnoreLevelChange = (bool)local_98;
  local_b8 = local_c8;
  if ((local_c8 == (FName)0x0) || (local_c0 == (UObject *)0x0)) {
    if (local_68.TimeSignature.OptionalPulseOverride.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TimeSignature.OptionalPulseOverride.AllocatorInstance.Data);
    }
  }
  else {
    this = GetClockManager((UQuartzSubsystem *)param_1,local_c0,bVar18);
    if ((this == (FQuartzClockManager *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClockManager",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                            ,0x1a5,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_68.TimeSignature.NumBeats < 1) {
      if (2 < (byte)LogAudioQuartz._0_1_) {
        ::FName::ToString(&local_b8,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      local_68.TimeSignature.NumBeats = 1;
    }
    Audio::FQuartzClockManager::GetOrCreateClock(this,&local_90,&local_b8,&local_68,bVar17);
    pUVar9 = GetTransientPackageAsObject();
    pUVar10 = NewObject<UQuartzClockHandle>(pUVar9);
    pUVar11 = (UWorld *)(**(code **)(*(longlong *)pUVar7 + 0x180))(pUVar7);
    pFVar12 = FQuartzTickableObject::Init((FQuartzTickableObject *)&pUVar10->_padding_,pUVar11);
    pUVar10 = (UQuartzClockHandle *)&pFVar12[-1].CommandQueuePtr;
    if (pFVar12 == (FQuartzTickableObject *)0x0) {
      pUVar10 = pUVar15;
    }
    UQuartzClockHandle::SubscribeToClock(pUVar10,pUVar7,local_b8,&local_90);
    if ((*(longlong *)&param_1[2].field_0x8 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClockManagerDataPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\QuartzSubsystem.cpp"
                            ,0x1b4,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar11 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
    if ((((pUVar11 != (UWorld *)0x0) && (SimulateNoAudioDeviceCvar == 0)) &&
        (pFVar13 = UWorld::GetAudioDeviceRaw(pUVar11), pFVar13 != (FAudioDevice *)0x0)) &&
       (pUVar14 = ::operator_new(8), pUVar14 != (UQuartzClockHandle *)0x0)) {
      lpCriticalSection = &pFVar13[1].DeviceID;
      if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      pUVar14->_padding_ = (longlong)lpCriticalSection;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pUVar15 = pUVar14;
    }
    if ((*(longlong *)&param_1[2].field_0x8 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)&param_1[2].field_0x8;
    pFVar16 = (ForAnyElementType *)(lVar5 + 0x80);
    if ((((FQuartzClockProxy *)pFVar16->Data <= &local_90) &&
        (&local_90 < (FQuartzClockProxy *)pFVar16->Data + *(int *)(lVar5 + 0x8c))) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = *(int *)(lVar5 + 0x88);
    if (iVar8 == *(int *)(lVar5 + 0x8c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,pFVar16,(int *)(lVar5 + 0x8c));
    }
    *(int *)(lVar5 + 0x88) = iVar8 + 1;
    pFVar3 = (FName *)(pFVar16->Data + (longlong)iVar8 * 0x28);
    *pFVar3 = local_90.ClockId;
    pFVar3[1] = (FName)local_90.SharedQueue.Object;
    pFVar3[2] = (FName)local_90.SharedQueue.WeakReferenceCount.ReferenceController;
    if ((FName)local_90.SharedQueue.WeakReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_90.SharedQueue.WeakReferenceCount.ReferenceController + 0xc) =
           *(int *)((longlong)local_90.SharedQueue.WeakReferenceCount.ReferenceController + 0xc) + 1
      ;
      UNLOCK();
    }
    pFVar3[3] = (FName)local_90.ClockWeakPtr.Object;
    pFVar3[4] = (FName)local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController;
    if ((FName)local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(int *)((longlong)local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController + 0xc) =
           *(int *)((longlong)local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController + 0xc) +
           1;
      UNLOCK();
    }
    if (pUVar15 != (UQuartzClockHandle *)0x0) {
      if ((LPCRITICAL_SECTION)pUVar15->_padding_ != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pUVar15->_padding_);
        pUVar15->_padding_ = 0;
      }
      ::operator_delete(pUVar15,8);
    }
    if ((FName)local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController + 0xc)
      ;
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)((local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_90.ClockWeakPtr.WeakReferenceCount.ReferenceController,1);
      }
    }
    if ((FName)local_90.SharedQueue.WeakReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90.SharedQueue.WeakReferenceCount.ReferenceController + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)((local_90.SharedQueue.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_90.SharedQueue.WeakReferenceCount.ReferenceController,1);
      }
    }
    pUVar15 = pUVar10;
    if (local_68.TimeSignature.OptionalPulseOverride.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TimeSignature.OptionalPulseOverride.AllocatorInstance.Data);
    }
  }
  *(UQuartzClockHandle **)param_3 = pUVar15;
  if (local_b0.OptionalPulseOverride.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.OptionalPulseOverride.AllocatorInstance.Data);
  }
  return;
}

// execDeleteClockByHandle @ 14657e890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execDeleteClockByHandle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar2 = local_res10;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar2 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*plVar2 != 0) {
    DeleteClockByName((UQuartzSubsystem *)param_1,local_res20,*(FName *)(*plVar2 + 0x290));
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*plVar2 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*plVar2);
  }
  return;
}

// execDeleteClockByName @ 14657e990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzSubsystem::execDeleteClockByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeleteClockByName((UQuartzSubsystem *)param_1,local_res20,local_res10);
  return;
}

// execDoesClockExist @ 14657ea60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzSubsystem::execDoesClockExist(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FQuartzClockProxy *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10;
  pFVar5 = FindProxyByName((UQuartzSubsystem *)param_1,&local_res20);
  if (pFVar5 != (FQuartzClockProxy *)0x0) {
    pTVar2 = (pFVar5->SharedQueue).WeakReferenceCount.ReferenceController;
    pTVar6 = pTVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar2->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14657eb55;
        }
        LOCK();
        aVar4 = pTVar2->SharedReferenceCount;
        bVar8 = aVar3 == aVar4;
        if (bVar8) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar8);
      pTVar6 = (TReferenceControllerBase<1> *)(pFVar5->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pTVar2 = (pFVar5->SharedQueue).WeakReferenceCount.ReferenceController;
      pTVar6 = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar2->SharedReferenceCount;
        do {
          pTVar6 = pTVar7;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14657eba1;
          LOCK();
          aVar4 = pTVar2->SharedReferenceCount;
          bVar8 = aVar3 == aVar4;
          if (bVar8) {
            pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar8);
        pTVar7 = (TReferenceControllerBase<1> *)(pFVar5->SharedQueue).Object;
        pTVar6 = pTVar2;
      }
LAB_14657eba1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      *(bool *)param_3 = pTVar7 != (TReferenceControllerBase<1> *)0x0;
      return;
    }
  }
LAB_14657eb55:
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetAudioRenderThreadToGameThreadAverageLatency @ 14657ee70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetAudioRenderThreadToGameThreadAverageLatency((UQuartzSubsystem *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetAudioRenderThreadToGameThreadMaxLatency @ 14657eeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetAudioRenderThreadToGameThreadMaxLatency((UQuartzSubsystem *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetAudioRenderThreadToGameThreadMinLatency @ 14657eef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetAudioRenderThreadToGameThreadMinLatency((UQuartzSubsystem *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetCurrentClockTimestamp @ 14657f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetCurrentClockTimestamp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FQuartzClockProxy *this;
  FName *pFVar5;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar6;
  bool bVar7;
  FName local_res10;
  undefined8 local_res18 [2];
  FQuartzTransportTimeStamp local_38;
  
  pTVar6 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar5 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FindProxyByName((UQuartzSubsystem *)param_1,pFVar5);
  if (this != (FQuartzClockProxy *)0x0) {
    pTVar2 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar2->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14657f219;
        }
        LOCK();
        aVar4 = pTVar2->SharedReferenceCount;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      pTVar6 = (this->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pTVar6 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      Audio::FQuartzClockProxy::GetCurrentClockTimestamp(this,&local_38);
      goto LAB_14657f223;
    }
  }
LAB_14657f219:
  local_38.Bars = 0;
  local_38.Beat = 0;
  local_38.BeatFraction = 0.0;
  local_38.Seconds = 0.0;
LAB_14657f223:
  *(undefined8 *)param_3 = local_38._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_38._8_8_;
  return;
}

// execGetDurationOfQuantizationTypeInSeconds @ 14657f4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetDurationOfQuantizationTypeInSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FQuartzClockProxy *this;
  EQuartzCommandQuantization *pEVar6;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar7;
  bool bVar8;
  float fVar9;
  EQuartzCommandQuantization local_res10 [8];
  float local_res18 [2];
  FName local_res20;
  undefined8 local_68;
  FName local_60 [5];
  
  pTVar7 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  local_68 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Bar;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0.0;
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EQuartzCommandQuantization *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar9 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60[0] = local_res20;
  this = FindProxyByName((UQuartzSubsystem *)param_1,local_60);
  if (this != (FQuartzClockProxy *)0x0) {
    pTVar3 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar3->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14657f645;
        }
        LOCK();
        aVar5 = pTVar3->SharedReferenceCount;
        bVar8 = aVar4 == aVar5;
        if (bVar8) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar8);
      pTVar7 = (this->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar7 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      fVar9 = Audio::FQuartzClockProxy::GetDurationOfQuantizationTypeInSeconds(this,pEVar6,fVar9);
      *(float *)param_3 = fVar9;
      return;
    }
  }
LAB_14657f645:
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetEstimatedClockRunTime @ 14657f6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetEstimatedClockRunTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FQuartzClockProxy *this;
  FName *pFVar5;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar6;
  bool bVar7;
  float fVar8;
  FName local_res10;
  undefined8 local_res18 [2];
  
  pTVar6 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar5 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FindProxyByName((UQuartzSubsystem *)param_1,pFVar5);
  if (this != (FQuartzClockProxy *)0x0) {
    pTVar2 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar2->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14657f795;
        }
        LOCK();
        aVar4 = pTVar2->SharedReferenceCount;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      pTVar6 = (this->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pTVar6 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      fVar8 = Audio::FQuartzClockProxy::GetEstimatedClockRunTimeSeconds(this);
      goto LAB_14657f798;
    }
  }
LAB_14657f795:
  fVar8 = 0.0;
LAB_14657f798:
  *(float *)param_3 = fVar8;
  return;
}

// execGetGameThreadToAudioRenderThreadAverageLatency @ 14657f870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzClockManager *this;
  float fVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetClockManager((UQuartzSubsystem *)param_1,local_res10,true);
  if (this == (FQuartzClockManager *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FQuartLatencyTracker::GetLifetimeAverageLatency((FQuartLatencyTracker *)this);
  }
  *(float *)param_3 = fVar2;
  return;
}

// execGetGameThreadToAudioRenderThreadMaxLatency @ 14657f930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzClockManager *this;
  float fVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetClockManager((UQuartzSubsystem *)param_1,local_res10,true);
  if (this == (FQuartzClockManager *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this);
  }
  *(float *)param_3 = fVar2;
  return;
}

// execGetGameThreadToAudioRenderThreadMinLatency @ 14657f9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzClockManager *this;
  float fVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetClockManager((UQuartzSubsystem *)param_1,local_res10,true);
  if (this == (FQuartzClockManager *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this);
  }
  *(float *)param_3 = fVar2;
  return;
}

// execGetHandleForClock @ 14657fab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzSubsystem::execGetHandleForClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UQuartzClockHandle *pUVar2;
  FName local_res10;
  UObject *local_res18 [2];
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetHandleForClock((UQuartzSubsystem *)param_1,local_res18[0],local_res10);
  *(UQuartzClockHandle **)param_3 = pUVar2;
  return;
}

// execGetRoundTripAverageLatency @ 14657fed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetRoundTripAverageLatency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzClockManager *this;
  float fVar2;
  float fVar3;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetClockManager((UQuartzSubsystem *)param_1,local_res10,true);
  if (this == (FQuartzClockManager *)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = FQuartLatencyTracker::GetLifetimeAverageLatency((FQuartLatencyTracker *)this);
  }
  fVar2 = GetAudioRenderThreadToGameThreadAverageLatency((UQuartzSubsystem *)param_1);
  *(float *)param_3 = fVar2 + fVar3;
  return;
}

// execGetRoundTripMaxLatency @ 14657ffa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetRoundTripMaxLatency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzClockManager *this;
  float fVar2;
  float fVar3;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetClockManager((UQuartzSubsystem *)param_1,local_res10,true);
  if (this == (FQuartzClockManager *)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this);
  }
  fVar2 = GetAudioRenderThreadToGameThreadMinLatency((UQuartzSubsystem *)param_1);
  *(float *)param_3 = fVar2 + fVar3;
  return;
}

// execGetRoundTripMinLatency @ 146580070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzSubsystem::execGetRoundTripMinLatency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzClockManager *this;
  float fVar2;
  float fVar3;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetClockManager((UQuartzSubsystem *)param_1,local_res10,true);
  if (this == (FQuartzClockManager *)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = FQuartLatencyTracker::GetMinLatency((FQuartLatencyTracker *)this);
  }
  fVar2 = GetAudioRenderThreadToGameThreadMaxLatency((UQuartzSubsystem *)param_1);
  *(float *)param_3 = fVar2 + fVar3;
  return;
}

// execIsClockRunning @ 146580460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzSubsystem::execIsClockRunning(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FQuartzClockProxy *this;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar5;
  bool bVar6;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  pTVar5 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10;
  this = FindProxyByName((UQuartzSubsystem *)param_1,&local_res20);
  if (this != (FQuartzClockProxy *)0x0) {
    pTVar2 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar2->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_146580555;
        }
        LOCK();
        aVar4 = pTVar2->SharedReferenceCount;
        bVar6 = aVar3 == aVar4;
        if (bVar6) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar6);
      pTVar5 = (this->SharedQueue).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pTVar5 != (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
      bVar6 = Audio::FQuartzClockProxy::IsClockRunning(this);
      *(bool *)param_3 = bVar6;
      return;
    }
  }
LAB_146580555:
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsQuartzEnabled @ 146580600

void __cdecl UQuartzSubsystem::execIsQuartzEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetQuartzSubsystemTickableWhenPaused @ 146582410

void __cdecl
UQuartzSubsystem::execSetQuartzSubsystemTickableWhenPaused
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[2].field_0x18 = local_res8[0] != 0;
  return;
}

