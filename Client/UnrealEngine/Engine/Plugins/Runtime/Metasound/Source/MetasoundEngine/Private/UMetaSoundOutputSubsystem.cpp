// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 14

// StaticClass @ 14b2fb140

UClass * __cdecl UMetaSoundOutputSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundOutputSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundOutputSubsystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundOutputSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundOutputSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.InnerSingleton;
}

// UMetaSoundOutputSubsystem @ 14b34c4a0

UMetaSoundOutputSubsystem * __thiscall
UMetaSoundOutputSubsystem::UMetaSoundOutputSubsystem
          (UMetaSoundOutputSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundOutputSubsystem__6B_;
  (this->TrackedGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedGenerators).ArrayNum = 0;
  (this->TrackedGenerators).ArrayMax = 0;
  return this;
}

// UMetaSoundOutputSubsystem @ 14b34c4e0

UMetaSoundOutputSubsystem * __thiscall
UMetaSoundOutputSubsystem::UMetaSoundOutputSubsystem(UMetaSoundOutputSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UMetaSoundOutputSubsystem__6B_;
  (this->TrackedGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedGenerators).ArrayNum = 0;
  (this->TrackedGenerators).ArrayMax = 0;
  return this;
}

// ~UMetaSoundOutputSubsystem @ 14b352530

void __thiscall
UMetaSoundOutputSubsystem::~UMetaSoundOutputSubsystem(UMetaSoundOutputSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<Metasound::FMetasoundGeneratorHandle,1>,int>
            ((TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
             (this->TrackedGenerators).AllocatorInstance.Data,(this->TrackedGenerators).ArrayNum);
  pFVar1 = (this->TrackedGenerators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// CleanUpInvalidGeneratorHandles @ 14b3683d0

void __thiscall
UMetaSoundOutputSubsystem::CleanUpInvalidGeneratorHandles(UMetaSoundOutputSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  int local_res20;
  
  iVar2 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::CleanUpInvalidGeneratorHandles");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId132,
               "UMetasoundOutputSubsystem::CleanUpInvalidGeneratorHandles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x84);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId132);
  }
  iVar10 = (this->TrackedGenerators).ArrayNum;
  lVar8 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar1 = (this->TrackedGenerators).AllocatorInstance.Data;
    iVar10 = 0;
    local_res20 = 0;
    if ((*(longlong *)pFVar1 == 0) ||
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar1 + 0x70)), !bVar3)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    lVar9 = 0;
    iVar6 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar7 = iVar6 + 1;
      if (lVar9 < lVar8) {
        pFVar12 = pFVar1 + lVar9 * 0x10;
        do {
          if ((*(longlong *)pFVar12 == 0) ||
             (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar12 + 0x70)),
             !bVar3)) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
          iVar10 = local_res20;
          if (bVar5 != bVar4) break;
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 1;
          pFVar12 = pFVar12 + 0x10;
        } while (lVar9 < lVar8);
      }
      iVar11 = iVar7 - iVar6;
      if (bVar5 == 0) {
        DestructItems<TSharedPtr<Metasound::FMetasoundGeneratorHandle,1>,int>
                  ((TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
                   (pFVar1 + (longlong)iVar6 * 0x10),iVar11);
      }
      else {
        if (iVar10 != iVar6) {
          memmove(pFVar1 + (longlong)iVar10 * 0x10,pFVar1 + (longlong)iVar6 * 0x10,
                  (longlong)iVar11 << 4);
        }
        iVar10 = iVar10 + iVar11;
        local_res20 = iVar10;
      }
      bVar5 = bVar5 ^ 1;
      iVar6 = iVar7;
    } while (lVar9 < lVar8);
    (this->TrackedGenerators).ArrayNum = iVar10;
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (iVar2 < 1) {
    return;
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetOrCreateGeneratorHandle @ 14b3be820

TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> * __thiscall
UMetaSoundOutputSubsystem::GetOrCreateGeneratorHandle
          (UMetaSoundOutputSubsystem *this,
          TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *__return_storage_ptr__,
          UAudioComponent *param_1)

{
  int *piVar1;
  ulong64 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  FWeakObjectPtr local_res18;
  UAudioComponent *local_res20;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> local_48;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle");
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId93,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId93);
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
                         ,0x5f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar5)();
    return pTVar8;
  }
  CleanUpInvalidGeneratorHandles(this);
  if (param_1 == (UAudioComponent *)0x0) {
    __return_storage_ptr__->Object = (FMetasoundGeneratorHandle *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    FGenericPlatformMisc::EndNamedEvent();
    return __return_storage_ptr__;
  }
  pFVar9 = (this->TrackedGenerators).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->TrackedGenerators).ArrayNum * 0x10;
  uVar2 = param_1->AudioComponentID;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
    if ((*(longlong *)pFVar9 != 0) &&
       (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar9 + 0x70)), bVar6)) {
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar5)();
        return pTVar8;
      }
      if ((*(FMetasoundGeneratorHandle **)pFVar9)->AudioComponentId == uVar2) {
        __return_storage_ptr__->Object = *(FMetasoundGeneratorHandle **)pFVar9;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14b3beb40;
      }
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  Metasound::FMetasoundGeneratorHandle::Create
            (&local_48,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_res18);
  if (local_48.Object != (FMetasoundGeneratorHandle *)0x0) {
    if ((local_48.Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar5)();
      return pTVar8;
    }
    bVar6 = FWeakObjectPtr::IsValid(&((local_48.Object)->AudioComponent).WeakPtr);
    if (bVar6) {
      pTVar8 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
               (this->TrackedGenerators).AllocatorInstance.Data;
      if (((pTVar8 <= &local_48) && (&local_48 < pTVar8 + (this->TrackedGenerators).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = (this->TrackedGenerators).ArrayNum;
      piVar1 = &(this->TrackedGenerators).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->TrackedGenerators).AllocatorInstance,piVar1);
      }
      pFVar9 = (this->TrackedGenerators).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      (this->TrackedGenerators).ArrayNum = iVar7 + 1;
      *(FMetasoundGeneratorHandle **)pFVar9 = local_48.Object;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = local_48.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      goto LAB_14b3beb40;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  __return_storage_ptr__->Object = (FMetasoundGeneratorHandle *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14b3beb40:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b3bf360

UClass * __cdecl UMetaSoundOutputSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundOutputSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundOutputSubsystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundOutputSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundOutputSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.InnerSingleton;
}

// StaticRegisterNativesUMetaSoundOutputSubsystem @ 14b3e14b0

void __cdecl UMetaSoundOutputSubsystem::StaticRegisterNativesUMetaSoundOutputSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnwatchOutput @ 14b3e50f0

bool __thiscall
UMetaSoundOutputSubsystem::UnwatchOutput
          (UMetaSoundOutputSubsystem *this,UAudioComponent *param_1,FName param_2,
          TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
          *param_3,FName param_4,FName param_5)

{
  int *piVar1;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar2;
  longlong *plVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ulong64 *puVar11;
  FScriptContainerElement *pFVar12;
  ulong64 uVar13;
  FSharedReferencer<1> FVar14;
  FMetasoundGeneratorHandle *this_00;
  bool bVar15;
  bool bVar16;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> local_c8;
  FScriptContainerElement *local_b8;
  FWeakObjectPtr local_b0;
  ulong64 local_a8;
  UAudioComponent *local_a0;
  FWatchOutputUnifiedDelegate local_98;
  undefined1 local_60 [8];
  FReadAccessScope local_58;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::UnwatchOutput_Native");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId79,"UMetasoundOutputSubsystem::UnwatchOutput_Native",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x4f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId79);
  }
  bVar8 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar8) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId93,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId93);
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
                         ,0x5f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  CleanUpInvalidGeneratorHandles(this);
  if (param_1 == (UAudioComponent *)0x0) {
LAB_14b3e554e:
    FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    local_a8 = param_1->AudioComponentID;
    pFVar12 = (this->TrackedGenerators).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)(this->TrackedGenerators).ArrayNum * 0x10;
    local_b8 = pFVar10;
    if (pFVar12 != pFVar10) {
      do {
        if ((*(longlong *)pFVar12 != 0) &&
           (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar12 + 0x70)),
           pFVar10 = local_b8, bVar6)) {
          if ((*(longlong *)pFVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          this_00 = *(FMetasoundGeneratorHandle **)pFVar12;
          pFVar10 = local_b8;
          if (this_00->AudioComponentId == local_a8) {
            FVar14.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
            if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar14.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_14b3e5476;
          }
        }
        pFVar12 = pFVar12 + 0x10;
      } while (pFVar12 != pFVar10);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_a0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
    Metasound::FMetasoundGeneratorHandle::Create
              (&local_c8,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_b0);
    if (local_c8.Object == (FMetasoundGeneratorHandle *)0x0) {
LAB_14b3e5541:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      goto LAB_14b3e554e;
    }
    if ((local_c8.Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = FWeakObjectPtr::IsValid(&((local_c8.Object)->AudioComponent).WeakPtr);
    if (!bVar6) goto LAB_14b3e5541;
    pTVar2 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
             (this->TrackedGenerators).AllocatorInstance.Data;
    if (((pTVar2 <= &local_c8) && (&local_c8 < pTVar2 + (this->TrackedGenerators).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = (this->TrackedGenerators).ArrayNum;
    piVar1 = &(this->TrackedGenerators).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->TrackedGenerators).AllocatorInstance,piVar1);
    }
    pFVar12 = (this->TrackedGenerators).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    (this->TrackedGenerators).ArrayNum = iVar9 + 1;
    *(FMetasoundGeneratorHandle **)pFVar12 = local_c8.Object;
    *(TReferenceControllerBase<1> **)(pFVar12 + 8) =
         local_c8.SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    FVar14.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
    this_00 = local_c8.Object;
LAB_14b3e5476:
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((this_00 != (FMetasoundGeneratorHandle *)0x0) &&
       (bVar8 = FWeakObjectPtr::IsValid(&(this_00->AudioComponent).WeakPtr), bVar8)) {
      uVar13 = 0;
      local_98.WatchDelegate._0_8_ = 0;
      local_98.WatchDelegate._8_8_ = 0;
      local_98.WatchDelegate._16_8_ = 0;
      TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
                (&local_98.NativeWatchDelegate,param_3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_58);
      if ((*(int *)&param_3->field_0x10 != 0) &&
         (plVar3 = *(longlong **)&param_3->field_0x8, plVar3 != (longlong *)0x0)) {
        puVar11 = (ulong64 *)(**(code **)(*plVar3 + 0x40))(plVar3,local_60);
        uVar13 = *puVar11;
      }
      local_98.NativeWatchDelegateHandle.ID = uVar13;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      bVar8 = Metasound::FMetasoundGeneratorHandle::UnwatchOutputInternal
                        (this_00,param_2,&local_98,param_4,param_5);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_98.NativeWatchDelegate);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_98);
      goto LAB_14b3e5563;
    }
  }
  bVar8 = false;
LAB_14b3e5563:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar8;
}

// UnwatchOutput @ 14b3e55d0

bool __thiscall
UMetaSoundOutputSubsystem::UnwatchOutput
          (UMetaSoundOutputSubsystem *this,UAudioComponent *param_1,FName param_2,
          FOnMetasoundOutputValueChanged *param_3,FName param_4,FName param_5)

{
  int *piVar1;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FSharedReferencer<1> FVar11;
  FMetasoundGeneratorHandle *this_00;
  bool bVar12;
  bool bVar13;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> local_d8;
  FScriptContainerElement *local_c8;
  FWeakObjectPtr local_c0;
  undefined1 local_b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  int local_90;
  FDelegateHandle local_88;
  ulong64 local_80;
  UAudioComponent *local_78;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::UnwatchOutput_Dynamic");
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId60,"UMetasoundOutputSubsystem::UnwatchOutput_Dynamic",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x3c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId60);
  }
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId93,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId93);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
                         ,0x5f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  CleanUpInvalidGeneratorHandles(this);
  if (param_1 == (UAudioComponent *)0x0) {
LAB_14b3e5a65:
    FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    local_80 = param_1->AudioComponentID;
    pFVar10 = (this->TrackedGenerators).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)(this->TrackedGenerators).ArrayNum * 0x10;
    local_c8 = pFVar9;
    if (pFVar10 != pFVar9) {
      do {
        if ((*(longlong *)pFVar10 != 0) &&
           (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar10 + 0x70)),
           pFVar9 = local_c8, bVar5)) {
          if ((*(longlong *)pFVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          this_00 = *(FMetasoundGeneratorHandle **)pFVar10;
          pFVar9 = local_c8;
          if (this_00->AudioComponentId == local_80) {
            FVar11.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
            if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar11.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_14b3e5942;
          }
        }
        pFVar10 = pFVar10 + 0x10;
      } while (pFVar10 != pFVar9);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_78 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_78);
    Metasound::FMetasoundGeneratorHandle::Create
              (&local_d8,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_c0);
    if (local_d8.Object == (FMetasoundGeneratorHandle *)0x0) {
LAB_14b3e5a5b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      goto LAB_14b3e5a65;
    }
    if ((local_d8.Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = FWeakObjectPtr::IsValid(&((local_d8.Object)->AudioComponent).WeakPtr);
    if (!bVar5) goto LAB_14b3e5a5b;
    pTVar2 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
             (this->TrackedGenerators).AllocatorInstance.Data;
    if (((pTVar2 <= &local_d8) && (&local_d8 < pTVar2 + (this->TrackedGenerators).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = (this->TrackedGenerators).ArrayNum;
    piVar1 = &(this->TrackedGenerators).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->TrackedGenerators).AllocatorInstance,piVar1);
    }
    pFVar10 = (this->TrackedGenerators).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    (this->TrackedGenerators).ArrayNum = iVar8 + 1;
    *(FMetasoundGeneratorHandle **)pFVar10 = local_d8.Object;
    *(TReferenceControllerBase<1> **)(pFVar10 + 8) =
         local_d8.SharedReferenceCount.ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    FVar11.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
    this_00 = local_d8.Object;
LAB_14b3e5942:
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((this_00 != (FMetasoundGeneratorHandle *)0x0) &&
       (bVar7 = FWeakObjectPtr::IsValid(&(this_00->AudioComponent).WeakPtr), bVar7)) {
      local_b8._0_8_ = (atomic<unsigned___int64>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_58);
      local_b8._8_8_ = *(undefined8 *)&param_3->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_3->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      local_90 = 0;
      local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_98.Data = (FScriptContainerElement *)0x0;
      local_88.ID = 0;
      bVar7 = Metasound::FMetasoundGeneratorHandle::UnwatchOutputInternal
                        (this_00,param_2,(FWatchOutputUnifiedDelegate *)local_b8,param_4,param_5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a0,(FWriteAccessScope *)&local_70);
      if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_98.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (FStack_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b8);
      goto LAB_14b3e5a7d;
    }
  }
  bVar7 = false;
LAB_14b3e5a7d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar7;
}

// WatchOutput @ 14b3e6df0

bool __thiscall
UMetaSoundOutputSubsystem::WatchOutput
          (UMetaSoundOutputSubsystem *this,UAudioComponent *param_1,FName param_2,
          TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
          *param_3,FName param_4,FName param_5)

{
  int *piVar1;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FMetasoundGeneratorHandle *this_00;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  bool bVar13;
  FWeakObjectPtr local_68;
  ulong64 local_60;
  UAudioComponent *local_58;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> local_50;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::WatchOutput_Native");
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId41,"UMetasoundOutputSubsystem::WatchOutput_Native",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x29);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId41);
  }
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId93,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId93);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
                         ,0x5f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  CleanUpInvalidGeneratorHandles(this);
  if (param_1 == (UAudioComponent *)0x0) {
LAB_14b3e71c6:
    FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    pFVar9 = (this->TrackedGenerators).AllocatorInstance.Data;
    local_60 = param_1->AudioComponentID;
    pFVar10 = pFVar9 + (longlong)(this->TrackedGenerators).ArrayNum * 0x10;
    for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
      if ((*(longlong *)pFVar9 != 0) &&
         (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar9 + 0x70)), bVar5)) {
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_00 = *(FMetasoundGeneratorHandle **)pFVar9;
        if (this_00->AudioComponentId == local_60) {
          FVar11.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
          if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar11.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_14b3e715a;
        }
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
    Metasound::FMetasoundGeneratorHandle::Create
              (&local_50,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_68);
    if (local_50.Object == (FMetasoundGeneratorHandle *)0x0) {
LAB_14b3e71bc:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
      goto LAB_14b3e71c6;
    }
    if ((local_50.Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = FWeakObjectPtr::IsValid(&((local_50.Object)->AudioComponent).WeakPtr);
    if (!bVar5) goto LAB_14b3e71bc;
    pTVar2 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
             (this->TrackedGenerators).AllocatorInstance.Data;
    if (((pTVar2 <= &local_50) && (&local_50 < pTVar2 + (this->TrackedGenerators).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = (this->TrackedGenerators).ArrayNum;
    piVar1 = &(this->TrackedGenerators).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->TrackedGenerators).AllocatorInstance,piVar1);
    }
    pFVar9 = (this->TrackedGenerators).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    (this->TrackedGenerators).ArrayNum = iVar8 + 1;
    *(FMetasoundGeneratorHandle **)pFVar9 = local_50.Object;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) =
         local_50.SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    this_00 = local_50.Object;
    FVar11.ReferenceController = local_50.SharedReferenceCount.ReferenceController;
LAB_14b3e715a:
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((this_00 != (FMetasoundGeneratorHandle *)0x0) &&
       (bVar7 = FWeakObjectPtr::IsValid(&(this_00->AudioComponent).WeakPtr), bVar7)) {
      bVar7 = Metasound::FMetasoundGeneratorHandle::WatchOutput
                        (this_00,param_2,param_3,param_4,param_5);
      goto LAB_14b3e71db;
    }
  }
  bVar7 = false;
LAB_14b3e71db:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar7;
}

// WatchOutput @ 14b3e7250

bool __thiscall
UMetaSoundOutputSubsystem::WatchOutput
          (UMetaSoundOutputSubsystem *this,UAudioComponent *param_1,FName param_2,
          FOnMetasoundOutputValueChanged *param_3,FName param_4,FName param_5)

{
  int *piVar1;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FMetasoundGeneratorHandle *this_00;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  bool bVar13;
  FWeakObjectPtr local_68;
  ulong64 local_60;
  UAudioComponent *local_58;
  TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> local_50;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::WatchOutput_Dynamic");
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"UMetasoundOutputSubsystem::WatchOutput_Dynamic",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId93,"UMetasoundOutputSubsystem::GetOrCreateGeneratorHandle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
               ,0x5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId93);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOutputSubsystem.cpp"
                         ,0x5f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  CleanUpInvalidGeneratorHandles(this);
  if (param_1 == (UAudioComponent *)0x0) {
LAB_14b3e7626:
    FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    pFVar9 = (this->TrackedGenerators).AllocatorInstance.Data;
    local_60 = param_1->AudioComponentID;
    pFVar10 = pFVar9 + (longlong)(this->TrackedGenerators).ArrayNum * 0x10;
    for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
      if ((*(longlong *)pFVar9 != 0) &&
         (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)pFVar9 + 0x70)), bVar5)) {
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_00 = *(FMetasoundGeneratorHandle **)pFVar9;
        if (this_00->AudioComponentId == local_60) {
          FVar11.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
          if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar11.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_14b3e75ba;
        }
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
    Metasound::FMetasoundGeneratorHandle::Create
              (&local_50,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_68);
    if (local_50.Object == (FMetasoundGeneratorHandle *)0x0) {
LAB_14b3e761c:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
      goto LAB_14b3e7626;
    }
    if ((local_50.Object == (FMetasoundGeneratorHandle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = FWeakObjectPtr::IsValid(&((local_50.Object)->AudioComponent).WeakPtr);
    if (!bVar5) goto LAB_14b3e761c;
    pTVar2 = (TSharedPtr<Metasound::FMetasoundGeneratorHandle,1> *)
             (this->TrackedGenerators).AllocatorInstance.Data;
    if (((pTVar2 <= &local_50) && (&local_50 < pTVar2 + (this->TrackedGenerators).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = (this->TrackedGenerators).ArrayNum;
    piVar1 = &(this->TrackedGenerators).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->TrackedGenerators).AllocatorInstance,piVar1);
    }
    pFVar9 = (this->TrackedGenerators).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    (this->TrackedGenerators).ArrayNum = iVar8 + 1;
    *(FMetasoundGeneratorHandle **)pFVar9 = local_50.Object;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) =
         local_50.SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    this_00 = local_50.Object;
    FVar11.ReferenceController = local_50.SharedReferenceCount.ReferenceController;
LAB_14b3e75ba:
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((this_00 != (FMetasoundGeneratorHandle *)0x0) &&
       (bVar7 = FWeakObjectPtr::IsValid(&(this_00->AudioComponent).WeakPtr), bVar7)) {
      bVar7 = Metasound::FMetasoundGeneratorHandle::WatchOutput
                        (this_00,param_2,param_3,param_4,param_5);
      goto LAB_14b3e763b;
    }
  }
  bVar7 = false;
LAB_14b3e763b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar7;
}

// execUnwatchOutput @ 14b3f69b0

void __cdecl
UMetaSoundOutputSubsystem::execUnwatchOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  UAudioComponent *local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  atomic<unsigned___int64> local_58;
  FReadAccessScope local_50;
  
  local_88 = (UAudioComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_78 = 0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this = &local_80;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
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
  FVar3 = local_res18;
  FVar2 = local_res10;
  local_68._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_50);
  local_68._8_8_ = this[1].AccessDetector.State;
  local_58 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  bVar4 = UnwatchOutput((UMetaSoundOutputSubsystem *)param_1,local_88,local_res20,
                        (FOnMetasoundOutputValueChanged *)local_68,FVar3,FVar2);
  *(bool *)param_3 = bVar4;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  return;
}

// execWatchOutput @ 14b3f6bd0

void __cdecl
UMetaSoundOutputSubsystem::execWatchOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  UAudioComponent *local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  atomic<unsigned___int64> local_58;
  FReadAccessScope local_50;
  
  local_88 = (UAudioComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_78 = 0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this = &local_80;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
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
  FVar3 = local_res18;
  FVar2 = local_res10;
  local_68._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_50);
  local_68._8_8_ = this[1].AccessDetector.State;
  local_58 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  bVar4 = WatchOutput((UMetaSoundOutputSubsystem *)param_1,local_88,local_res20,
                      (FOnMetasoundOutputValueChanged *)local_68,FVar3,FVar2);
  *(bool *)param_3 = bVar4;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  return;
}

