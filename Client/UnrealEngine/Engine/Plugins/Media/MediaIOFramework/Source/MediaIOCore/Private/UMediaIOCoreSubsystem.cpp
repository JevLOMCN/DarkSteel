// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 12

// StaticClass @ 14d77c770

UClass * __cdecl UMediaIOCoreSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaIOCoreSubsystem",
               &Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton,
               StaticRegisterNativesUMediaIOCoreSubsystem,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMediaIOCoreSubsystem>,
               InternalVTableHelperCtorCaller<UMediaIOCoreSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton;
}

// UMediaIOCoreSubsystem @ 14d78b730

UMediaIOCoreSubsystem * __thiscall
UMediaIOCoreSubsystem::UMediaIOCoreSubsystem(UMediaIOCoreSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaIOCoreSubsystem__6B_;
  (this->MainMediaIOAudioCapture).Object = (FMainMediaIOAudioCapture *)0x0;
  (this->MainMediaIOAudioCapture).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->MediaIOAudioCaptures = 0;
  *(undefined8 *)&(this->MediaIOAudioCaptures).field_0x8 = 0;
  *(undefined8 *)&(this->MediaIOAudioCaptures).field_0x20 = 0;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x28 = 0;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x34 = 0;
  *(undefined8 *)&(this->MediaIOAudioCaptures).field_0x40 = 0;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x48 = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BufferReceivedDelegate,4000);
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x38 = 2;
  return this;
}

// UMediaIOCoreSubsystem @ 14d78b7e0

UMediaIOCoreSubsystem * __thiscall
UMediaIOCoreSubsystem::UMediaIOCoreSubsystem(UMediaIOCoreSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UMediaIOCoreSubsystem__6B_;
  (this->MainMediaIOAudioCapture).Object = (FMainMediaIOAudioCapture *)0x0;
  (this->MainMediaIOAudioCapture).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->MediaIOAudioCaptures = 0;
  *(undefined8 *)&(this->MediaIOAudioCaptures).field_0x8 = 0;
  *(undefined8 *)&(this->MediaIOAudioCaptures).field_0x20 = 0;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x28 = 0;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x34 = 0;
  *(undefined8 *)&(this->MediaIOAudioCaptures).field_0x40 = 0;
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x48 = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BufferReceivedDelegate,4000);
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x38 = 2;
  return this;
}

// ~UMediaIOCoreSubsystem @ 14d78d2b0

void __thiscall UMediaIOCoreSubsystem::~UMediaIOCoreSubsystem(UMediaIOCoreSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMediaIOCoreSubsystem__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BufferReceivedDelegate).field_0x28,
             *(int *)&(this->BufferReceivedDelegate).field_0x30);
  pvVar1 = *(void **)&(this->BufferReceivedDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferReceivedDelegate);
  *(undefined4 *)&(this->MediaIOAudioCaptures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaIOAudioCaptures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaIOAudioCaptures);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainMediaIOAudioCapture).SharedReferenceCount.ReferenceController);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// CreateAudioOutput @ 14d79e0b0

TSharedPtr<FMediaIOAudioOutput,1> * __thiscall
UMediaIOCoreSubsystem::CreateAudioOutput
          (UMediaIOCoreSubsystem *this,TSharedPtr<FMediaIOAudioOutput,1> *__return_storage_ptr__,
          FCreateAudioOutputArgs *param_1)

{
  TMap<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>,0>_>
  *this_00;
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FMediaIOAudioOutput,1> *pTVar12;
  FAudioDevice *pFVar13;
  FMainMediaIOAudioCapture *pFVar14;
  uint *puVar15;
  TReferenceControllerBase<1> *pTVar16;
  FMediaIOAudioCapture *this_01;
  undefined1 *puVar17;
  uint local_res18 [2];
  int local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  FDelegateAllocation local_180;
  FMediaIOAudioCapture *local_170;
  FSharedReferencer<1> local_168;
  undefined1 local_160 [8];
  FDelegateAllocation local_158;
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  int local_138;
  FMainMediaIOAudioCapture *local_130;
  FSharedReferencer<1> local_128;
  TReferenceControllerBase<1> *local_120;
  TReferenceControllerBase<1> *local_118;
  UMediaIOCoreSubsystem *local_110;
  UMediaIOCoreSubsystem *local_108;
  undefined8 local_100;
  FSharedReferencer<1> local_f8;
  uint *local_f0;
  TReferenceControllerBase<1> **local_e8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar6 = FAudioDeviceHandle::IsValid(&param_1->AudioDeviceHandle);
  if (!bVar6) {
    if ((this->MainMediaIOAudioCapture).Object == (FMainMediaIOAudioCapture *)0x0) {
      uVar7 = FAudioDeviceHandle::GetDeviceID(&param_1->AudioDeviceHandle);
      local_160 = (undefined1  [8])0x0;
      local_158.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_158.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
                 (FWriteAccessScope *)&local_78);
      local_60 = &local_158;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_158);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_
        ;
        *(uint *)(puVar9 + 1) = uVar7;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMediaIOCoreSubsystem____A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[3] = 0;
        local_108 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_108);
        puVar9[4] = OnBufferReceivedByCapture;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      pTVar16 = ::operator_new(0xd8);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        pFVar14 = (FMainMediaIOAudioCapture *)&DAT_00000010;
LAB_14d79e6f3:
        if (((*(longlong *)&pFVar14->field_0x8 == 0) || (*(longlong *)&pFVar14->field_0x10 == 0)) ||
           (*(int *)(*(longlong *)&pFVar14->field_0x10 + 8) < 1)) {
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(FMainMediaIOAudioCapture **)&pFVar14->field_0x8 = pFVar14;
          if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar14->field_0x10) {
            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar4 = *(longlong **)&pFVar14->field_0x10;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            *(TReferenceControllerBase<1> **)&pFVar14->field_0x10 = pTVar11;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
        }
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFMainMediaIOAudioCapture___00_SharedPointerInternals__6B_
        ;
        FMediaIOAudioCapture::FMediaIOAudioCapture((FMediaIOAudioCapture *)(pTVar16 + 1));
        pFVar14 = (FMainMediaIOAudioCapture *)(pTVar16 + 1);
        pTVar16[1]._padding_ = (longlong)&___7FMainMediaIOAudioCapture__6B_;
        pTVar11 = pTVar16;
        if (pFVar14 != (FMainMediaIOAudioCapture *)0x0) goto LAB_14d79e6f3;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar5)();
          return pTVar12;
        }
      }
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_130 = pFVar14;
      local_128.ReferenceController = pTVar11;
      if (&this->MainMediaIOAudioCapture != (TSharedPtr<FMainMediaIOAudioCapture,1> *)&local_130) {
        (this->MainMediaIOAudioCapture).Object = pFVar14;
        local_130 = (FMainMediaIOAudioCapture *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MainMediaIOAudioCapture).SharedReferenceCount,&local_128);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      pFVar14 = TSharedPtr<FMainMediaIOAudioCapture,1>::operator->(&this->MainMediaIOAudioCapture);
      if ((*(longlong *)&pFVar14->field_0x20 == 0) ||
         ((*(longlong *)&pFVar14->field_0x28 != 0 &&
          (*(int *)(*(longlong *)&pFVar14->field_0x28 + 8) == 1)))) {
        TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy>::operator=
                  ((TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *)
                   &pFVar14->field_0xb0,
                   (TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *)local_160);
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3187632067466755832>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
                           ,0x108,
                           "!SubmixBufferListenerProxy || SubmixBufferListenerProxy.GetSharedReferenceCount() == 1"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar5)();
          return pTVar12;
        }
      }
      FMainMediaIOAudioCapture::RegisterCurrentAudioDevice(pFVar14);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
                 (FWriteAccessScope *)&local_b0);
      if ((local_158.DelegateSize != 0) &&
         (local_158.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_158.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_158,0,0,0x10);
        local_158.DelegateSize = 0;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      if (local_158.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_158.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_160);
    }
    local_f8.ReferenceController =
         (this->MainMediaIOAudioCapture).SharedReferenceCount.ReferenceController;
    local_170 = (FMediaIOAudioCapture *)(this->MainMediaIOAudioCapture).Object;
    if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_100 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_168,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.ReferenceController);
    this_01 = local_170;
    goto LAB_14d79e8b8;
  }
  this_00 = &this->MediaIOAudioCaptures;
  uVar7 = FAudioDeviceHandle::GetDeviceID(&param_1->AudioDeviceHandle);
  if (*(int *)&(this->MediaIOAudioCaptures).field_0x8 !=
      *(int *)&(this->MediaIOAudioCaptures).field_0x34) {
    puVar17 = *(undefined1 **)&(this->MediaIOAudioCaptures).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->MediaIOAudioCaptures).field_0x38;
    }
    uVar8 = *(uint *)(puVar17 +
                     (ulonglong)(*(int *)&(this->MediaIOAudioCaptures).field_0x48 - 1U & uVar7) * 4)
    ;
    if (uVar8 != 0xffffffff) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar8 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*puVar15 == uVar7) {
          pTVar16 = (TReferenceControllerBase<1> *)(puVar15 + 2);
          if (puVar15 == (uint *)0x0) {
            pTVar16 = pTVar11;
          }
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            this_01 = (FMediaIOAudioCapture *)pTVar16->_padding_;
            local_168.ReferenceController =
                 *(TReferenceControllerBase<1> **)&pTVar16->SharedReferenceCount;
            if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_168.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_170 = this_01;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_14d79e8b8;
          }
          break;
        }
        uVar8 = puVar15[6];
      } while (uVar8 != 0xffffffff);
    }
  }
  uVar7 = FAudioDeviceHandle::GetDeviceID(&param_1->AudioDeviceHandle);
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_180.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_98);
  local_80 = &local_180;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_;
    *(uint *)(puVar9 + 1) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMediaIOCoreSubsystem____A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMediaIOCoreSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_110 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMediaIOCoreSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_110);
    puVar9[4] = OnBufferReceivedByCapture;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  pTVar11 = ::operator_new(0xd8);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d79e2fc:
    lVar3._0_4_ = pTVar16->SharedReferenceCount;
    lVar3._4_4_ = pTVar16->WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar16[1]._padding_ == 0)) || (*(int *)(pTVar16[1]._padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar16->SharedReferenceCount = pTVar16;
      if (pTVar11 != (TReferenceControllerBase<1> *)pTVar16[1]._padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = (longlong *)pTVar16[1]._padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        pTVar16[1]._padding_ = (longlong)pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMediaIOAudioCapture___00_SharedPointerInternals__6B_
    ;
    memset(pTVar11 + 1,0,200);
    FMediaIOAudioCapture::FMediaIOAudioCapture((FMediaIOAudioCapture *)(pTVar11 + 1));
    pTVar16 = pTVar11 + 1;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d79e2fc;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120 = pTVar16;
  local_118 = pTVar11;
  local_res18[0] = FAudioDeviceHandle::GetDeviceID(&param_1->AudioDeviceHandle);
  local_f0 = local_res18;
  local_e8 = &local_120;
  TSet<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,TSharedPtr<FMediaIOAudioCapture,1>_&&>_>
            ((TSet<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<unsigned_int_&&,TSharedPtr<FMediaIOAudioCapture,1>_&&> *)&local_res20
             ,(bool *)&local_f0);
  local_168.ReferenceController =
       *(TReferenceControllerBase<1> **)
        ((longlong)local_res20 * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0);
  this_01 = *(FMediaIOAudioCapture **)
             ((longlong)local_res20 * 0x20 + 8 + *(longlong *)&this_00->field_0x0);
  if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_170 = this_01;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((this_01 == (FMediaIOAudioCapture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar5)();
    return pTVar12;
  }
  if ((TDelegate<void___cdecl(float_*,int),FDefaultDelegateUserPolicy> *)&local_188 !=
      &this_01->AudioCapturedDelegate) {
    local_148 = (undefined1  [8])0x0;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_188,&local_58)
    ;
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_180.DelegateAllocator + 0x50))
                (local_180.DelegateAllocator,local_148);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->AudioCapturedDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_e0);
    if ((local_138 != 0) && (local_140.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_140.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_140,0,0,0x10);
      local_138 = 0;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_148);
  }
  FMediaIOAudioCapture::UnregisterAudioDevice(this_01);
  bVar6 = FAudioDeviceHandle::IsValid(&param_1->AudioDeviceHandle);
  if (bVar6) {
    pFVar13 = FAudioDeviceHandle::GetAudioDevice(&param_1->AudioDeviceHandle);
    FMediaIOAudioCapture::RegisterBufferListener(this_01,pFVar13);
    uVar7 = FAudioDeviceHandle::GetDeviceID(&param_1->AudioDeviceHandle);
    this_01->RegisteredDeviceId = uVar7;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_c8);
  if ((local_180.DelegateSize != 0) &&
     (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_180,0,0,0x10);
    local_180.DelegateSize = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
LAB_14d79e8b8:
  if ((this_01 == (FMediaIOAudioCapture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FMediaIOAudioOutput,1> *)(*pcVar5)();
    return pTVar12;
  }
  FMediaIOAudioCapture::CreateAudioOutput
            (this_01,__return_storage_ptr__,param_1->NumOutputChannels,param_1->TargetFrameRate,
             param_1->MaxSampleLatency,param_1->OutputSampleRate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ReferenceController);
  return __return_storage_ptr__;
}

// Deinitialize @ 14d7a1860

void __thiscall UMediaIOCoreSubsystem::Deinitialize(UMediaIOCoreSubsystem *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *this_00;
  
  uVar1 = (this->DeviceDestroyedHandle).ID;
  if (uVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed);
    uVar6 = 0;
    if (0 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (ForAnyElementType *)
                  (FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._40_8_ + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                     &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed);
  }
  return;
}

// GetNumAudioInputChannels @ 14d7ac2b0

int __thiscall UMediaIOCoreSubsystem::GetNumAudioInputChannels(UMediaIOCoreSubsystem *this)

{
  FMainMediaIOAudioCapture *pFVar1;
  
  pFVar1 = (this->MainMediaIOAudioCapture).Object;
  if (pFVar1 != (FMainMediaIOAudioCapture *)0x0) {
    return *(int *)&pFVar1->field_0x38;
  }
  return 0;
}

// GetPrivateStaticClass @ 14d7ad180

UClass * __cdecl UMediaIOCoreSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaIOCoreSubsystem",
               &Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton,
               StaticRegisterNativesUMediaIOCoreSubsystem,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMediaIOCoreSubsystem>,
               InternalVTableHelperCtorCaller<UMediaIOCoreSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaIOCoreSubsystem.InnerSingleton;
}

// Initialize @ 14d7af9e0

void __thiscall
UMediaIOCoreSubsystem::Initialize(UMediaIOCoreSubsystem *this,FSubsystemCollectionBase *param_1)

{
  FDelegateHandle FVar1;
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddUObject<UMediaIOCoreSubsystem>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                     (UMediaIOCoreSubsystem *)&stack0x00000008,(pmf_dc4134c3)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceDestroyedHandle).ID = *FVar1.ID;
  return;
}

// OnAudioDeviceDestroyed @ 14d7b25c0

void __thiscall
UMediaIOCoreSubsystem::OnAudioDeviceDestroyed(UMediaIOCoreSubsystem *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_res10 [6];
  
  if (*(int *)&(this->MediaIOAudioCaptures).field_0x8 !=
      *(int *)&(this->MediaIOAudioCaptures).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MediaIOAudioCaptures).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MediaIOAudioCaptures).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->MediaIOAudioCaptures).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->MediaIOAudioCaptures).field_0x0;
      while (*(uint *)((longlong)iVar2 * 0x20 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res10[0] = param_1;
      TSet<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FMediaIOAudioCapture,1>,0>,FDefaultSetAllocator>
                  *)&this->MediaIOAudioCaptures,param_1,local_res10);
    }
  }
  return;
}

// OnBufferReceivedByCapture @ 14d7b2780

void __thiscall
UMediaIOCoreSubsystem::OnBufferReceivedByCapture
          (UMediaIOCoreSubsystem *this,float *param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(unsigned_int,float_*,int),FDefaultTSDelegateUserPolicy> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  this_00 = &this->BufferReceivedDelegate;
  if ((this_00 ==
       (TMulticastDelegate<void___cdecl(unsigned_int,float_*,int),FDefaultTSDelegateUserPolicy> *)
       0x0) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Mutex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                   ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  puVar1 = &(this->BufferReceivedDelegate).field_0x3c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->BufferReceivedDelegate).field_0x30 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->BufferReceivedDelegate).field_0x30) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->BufferReceivedDelegate).field_0x28;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->BufferReceivedDelegate).field_0x3c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d7b28c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  return;
}

// StaticRegisterNativesUMediaIOCoreSubsystem @ 14d7be490

void __cdecl UMediaIOCoreSubsystem::StaticRegisterNativesUMediaIOCoreSubsystem(void)

{
  return;
}

