// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StartupModule @ 149f1bf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPCGModule::StartupModule(FPCGModule *this)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FPCGAttributeAccessorMethods *pFVar8;
  FTSTicker *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  FElement *pFVar12;
  longlong *plVar13;
  undefined1 auStackY_408 [32];
  FLLMScope local_3d8 [2];
  undefined1 local_3d0 [8];
  FDelegateAllocation local_3c8;
  FName local_3b8;
  UClass *local_3b0;
  UClass *local_3a8;
  UClass *local_3a0;
  UClass *local_398;
  FMemScope local_390;
  FDestructionSentinel local_388;
  FDestructionSentinel local_370;
  FDelegateAllocation *local_358;
  undefined1 local_350 [16];
  TWeakPtr<FTSTicker::FElement,1> local_340;
  ForAnyElementType local_328;
  longlong local_318 [3];
  longlong *local_300;
  longlong local_2f8;
  longlong local_2e8 [3];
  longlong *local_2d0;
  longlong local_2c8;
  longlong local_2b8 [3];
  longlong *local_2a0;
  longlong local_298;
  undefined1 local_288 [32];
  FWeakReferencer<1> local_268;
  longlong local_258 [3];
  longlong *local_240;
  ForAnyElementType local_238;
  longlong local_228 [3];
  longlong *local_210;
  longlong local_208;
  longlong local_1f8 [3];
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1c8 [3];
  longlong *local_1b0;
  undefined1 local_1a8 [48];
  longlong local_178;
  longlong local_168 [3];
  longlong *local_150;
  longlong local_148;
  longlong local_138 [3];
  longlong *local_120;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8 [48];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_408;
  FLLMScope::FLLMScope(local_3d8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_3b8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_390,&local_3b8,true);
  if (PCGModule::PCGModulePtr != (FPCGModule *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PCGModule::PCGModulePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGModule.cpp"
                       ,0x4c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  PCGModule::PCGModulePtr = this;
  FPCGAttributeAccessorFactory::RegisterDefaultMethods(&this->AttributeAccessorFactory);
  pFVar8 = UPCGBasePointData::GetPointAccessorMethods((FPCGAttributeAccessorMethods *)&local_328);
  local_3b0 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3b0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3b0);
  }
  FPCGAttributeAccessorFactory::RegisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_3b0,pFVar8);
  if (local_298 != 0) {
    pFVar12 = (FElement *)local_288;
    if ((FElement *)local_288._24_8_ != (FElement *)0x0) {
      pFVar12 = (FElement *)local_288._24_8_;
    }
    (**(code **)((longlong)pFVar12->FireTime + 0x10))();
  }
  if (local_2c8 != 0) {
    plVar13 = local_2b8;
    if (local_2a0 != (longlong *)0x0) {
      plVar13 = local_2a0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_2f8 != 0) {
    plVar13 = local_2e8;
    if (local_2d0 != (longlong *)0x0) {
      plVar13 = local_2d0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    plVar13 = local_318;
    if (local_300 != (longlong *)0x0) {
      plVar13 = local_300;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  pFVar8 = UPCGPointData::GetPointAccessorMethods((FPCGAttributeAccessorMethods *)&local_268);
  local_3a8 = Z_Construct_UClass_UPCGPointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3a8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3a8);
  }
  FPCGAttributeAccessorFactory::RegisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_3a8,pFVar8);
  if (local_1d8 != 0) {
    plVar13 = local_1c8;
    if (local_1b0 != (longlong *)0x0) {
      plVar13 = local_1b0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_208 != 0) {
    plVar13 = local_1f8;
    if (local_1e0 != (longlong *)0x0) {
      plVar13 = local_1e0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    plVar13 = local_228;
    if (local_210 != (longlong *)0x0) {
      plVar13 = local_210;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_268.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar13 = local_258;
    if (local_240 != (longlong *)0x0) {
      plVar13 = local_240;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  pFVar8 = UPCGPolygon2DData::GetPolygon2DAccessorMethods((FPCGAttributeAccessorMethods *)local_1a8)
  ;
  local_3a0 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3a0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3a0);
  }
  FPCGAttributeAccessorFactory::RegisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_3a0,pFVar8);
  if (local_118 != 0) {
    plVar13 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar13 = local_f0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_148 != 0) {
    plVar13 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar13 = local_120;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_178 != 0) {
    plVar13 = local_168;
    if (local_150 != (longlong *)0x0) {
      plVar13 = local_150;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_1a8._0_8_ != 0) {
    plVar13 = (longlong *)(local_1a8 + 0x10);
    if ((longlong *)local_1a8._40_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_1a8._40_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  pFVar8 = UPCGSplineData::GetSplineAccessorMethods((FPCGAttributeAccessorMethods *)local_e8);
  local_398 = Z_Construct_UClass_UPCGSplineData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_398 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_398);
  }
  FPCGAttributeAccessorFactory::RegisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_398,pFVar8);
  if (local_58 != 0) {
    plVar13 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar13 = local_30;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_b8 != 0) {
    plVar13 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar13 = local_90;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_e8._0_8_ != 0) {
    plVar13 = (longlong *)(local_e8 + 0x10);
    if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_e8._40_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddRaw<FPCGModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FPCGModule *)local_350,(pmf_cdb4a468)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddRaw<FPCGModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FPCGModule *)(local_350 + 8),(pmf_cdb4a468)this);
  this_00 = FTSTicker::GetCoreTicker();
  local_3d0 = (undefined1  [8])0x0;
  local_3c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)&local_370);
  local_358 = &local_3c8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_3c8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPCGModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[4] = Tick;
    puVar9[3] = this;
    if (this == (FPCGModule *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  if (local_370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_370.Accessor,&local_370);
  }
  pTVar11 = FTSTicker::AddTicker
                      (this_00,&local_340,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_3d0,0.0);
  if (&this->TickDelegateHandle != pTVar11) {
    (this->TickDelegateHandle).Object = pTVar11->Object;
    pTVar11->Object = (FElement *)0x0;
    pTVar5 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  if (local_340.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pFVar2 = (FScriptContainerElement *)
             ((longlong)local_340.WeakReferenceCount.ReferenceController + 0xc);
    iVar4 = *(int *)pFVar2;
    *(int *)pFVar2 = *(int *)pFVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)((local_340.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_340.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)&local_388);
  if ((local_3c8.DelegateSize != 0) &&
     (local_3c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3c8,0,0,0x10);
    local_3c8.DelegateSize = 0;
  }
  if (local_388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_388.Accessor,&local_388);
  }
  if (local_3c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  FMemScope::~FMemScope(&local_390);
  FLLMScope::~FLLMScope(local_3d8);
  return;
}

// ShutdownModule @ 149f1c560

void __thiscall FPCGModule::ShutdownModule(FPCGModule *this)

{
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  local_18.Object = (this->TickDelegateHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  PCGModule::PCGModulePtr = (FPCGModule *)0x0;
  return;
}

// SupportsDynamicReloading @ 149f1c5d0

bool __thiscall FPCGModule::SupportsDynamicReloading(FPCGModule *this)

{
  return true;
}

// ExecuteNextTick @ 149f434d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPCGModule::ExecuteNextTick(FPCGModule *this,TFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TFunction<void___cdecl(void)> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_68 [32];
  TFunction<void___cdecl(void)> *local_48;
  TFunction<void___cdecl(void)> *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lpCriticalSection = &this->ExecuteNextTickLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar9 = &this->ExecuteNextTicks;
  pTVar2 = (TFunction<void___cdecl(void)> *)(pTVar9->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) &&
     (lVar8 = (longlong)(this->ExecuteNextTicks).ArrayMax, param_1 < pTVar2 + lVar8)) {
    local_30 = (longlong)(this->ExecuteNextTicks).ArrayNum;
    local_28 = 0x30;
    local_48 = param_1;
    local_40 = pTVar2;
    local_38 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExecuteNextTicks).ArrayNum;
  piVar1 = &(this->ExecuteNextTicks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->ExecuteNextTicks).ArrayNum = iVar5 + 1;
  pFVar10 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
  *(longlong *)pFVar10 = *(longlong *)param_1;
  *(longlong *)(pFVar10 + 0x28) = 0;
  if (*(longlong *)pFVar10 != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// GetConstDataTypeRegistry @ 149f490f0

FPCGDataTypeRegistry * __cdecl FPCGModule::GetConstDataTypeRegistry(void)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeRegistry *pFVar3;
  
  if (PCGModule::PCGModulePtr == (FPCGModule *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsPCGModuleLoaded()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGModule.cpp"
                       ,0x38,L"%s");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeRegistry *)(*pcVar1)();
      return pFVar3;
    }
    if ((PCGModule::PCGModulePtr == (FPCGModule *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PCGModule::PCGModulePtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGModule.cpp"
                           ,0x32,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeRegistry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &PCGModule::PCGModulePtr->DataTypeRegistry;
}

// GetMutableDataTypeRegistry @ 149f4b150

FPCGDataTypeRegistry * __cdecl FPCGModule::GetMutableDataTypeRegistry(void)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeRegistry *pFVar3;
  
  if (PCGModule::PCGModulePtr == (FPCGModule *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsPCGModuleLoaded()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGModule.cpp"
                       ,0x3e,L"%s");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeRegistry *)(*pcVar1)();
      return pFVar3;
    }
    if ((PCGModule::PCGModulePtr == (FPCGModule *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PCGModule::PCGModulePtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGModule.cpp"
                           ,0x32,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeRegistry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &PCGModule::PCGModulePtr->DataTypeRegistry;
}

// GetPCGModuleChecked @ 149f4bff0

FPCGModule * __cdecl FPCGModule::GetPCGModuleChecked(void)

{
  code *pcVar1;
  bool bVar2;
  FPCGModule *pFVar3;
  
  if ((PCGModule::PCGModulePtr == (FPCGModule *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PCGModule::PCGModulePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGModule.cpp"
                         ,0x32,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPCGModule *)(*pcVar1)();
    return pFVar3;
  }
  return PCGModule::PCGModulePtr;
}

// IsPCGModuleLoaded @ 149f52850

bool __cdecl FPCGModule::IsPCGModuleLoaded(void)

{
  return PCGModule::PCGModulePtr != (FPCGModule *)0x0;
}

// OnPostInitEngine @ 149f57330

void __thiscall FPCGModule::OnPostInitEngine(FPCGModule *this)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  FPCGDataTypeRegistry::RegisterKnownTypes(&this->DataTypeRegistry);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PreExit @ 149f581c0

void __thiscall FPCGModule::PreExit(FPCGModule *this)

{
  UClass *local_res8;
  
  local_res8 = Z_Construct_UClass_UPCGSplineData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPCGAttributeAccessorFactory::UnregisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_res8);
  local_res8 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPCGAttributeAccessorFactory::UnregisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_res8);
  local_res8 = Z_Construct_UClass_UPCGPointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPCGAttributeAccessorFactory::UnregisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_res8);
  local_res8 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPCGAttributeAccessorFactory::UnregisterMethods
            (&this->AttributeAccessorFactory,(TSubclassOf<UPCGData>)&local_res8);
  FPCGAttributeAccessorFactory::UnregisterDefaultMethods(&this->AttributeAccessorFactory);
  FPCGDataTypeRegistry::Shutdown(&this->DataTypeRegistry);
  return;
}

// Tick @ 149f63d10

bool __thiscall FPCGModule::Tick(FPCGModule *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar4;
  TFunction<void___cdecl(void)> *pTVar5;
  TFunction<void___cdecl(void)> *pTVar6;
  int iVar7;
  FLLMScope local_res8 [5];
  FName local_res18;
  FMemScope local_res20;
  undefined8 local_38 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pTVar5 = (TFunction<void___cdecl(void)> *)0x0;
  lpCriticalSection = &this->ExecuteNextTickLock;
  iVar7 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar4 = &this->ExecuteNextTicks;
    if ((TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *)local_38 != pTVar4) {
      DestructItems<TFunction<void___cdecl(void)>,int>((TFunction<void___cdecl(void)> *)0x0,0);
      pTVar5 = (TFunction<void___cdecl(void)> *)(pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar7 = (this->ExecuteNextTicks).ArrayNum;
      (this->ExecuteNextTicks).ArrayNum = 0;
      (this->ExecuteNextTicks).ArrayMax = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    for (pTVar6 = pTVar5; pTVar6 != pTVar5 + iVar7; pTVar6 = pTVar6 + 1) {
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar6);
      pcVar1 = *(code **)pTVar6;
      plVar3 = (longlong *)&pTVar6->field_0x10;
      if (*(longlong **)&pTVar6->field_0x28 != (longlong *)0x0) {
        plVar3 = *(longlong **)&pTVar6->field_0x28;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>(pTVar5,iVar7);
    if (pTVar5 != (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(pTVar5);
    }
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

