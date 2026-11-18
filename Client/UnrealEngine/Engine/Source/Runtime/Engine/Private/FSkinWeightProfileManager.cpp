// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// FSkinWeightProfileManager @ 1475a5880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinWeightProfileManager * __thiscall
FSkinWeightProfileManager::FSkinWeightProfileManager
          (FSkinWeightProfileManager *this,UWorld *param_1)

{
  byte bVar1;
  UWorld *local_res8;
  
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
  *(undefined ***)this = &___7FSkinWeightProfileManager__6B_;
  (this->CanceledRequest).AllocatorInstance.SecondaryData = (ForElementType<FSetProfileRequest>)0x0;
  (this->CanceledRequest).ArrayNum = 0;
  (this->CanceledRequest).ArrayMax = 4;
  (this->PendingSetProfileRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSetProfileRequests).ArrayNum = 0;
  (this->PendingSetProfileRequests).ArrayMax = 0;
  *(undefined8 *)&this->PendingMeshes = 0;
  *(undefined8 *)&(this->PendingMeshes).field_0x8 = 0;
  *(undefined8 *)&(this->PendingMeshes).field_0x20 = 0;
  *(undefined4 *)&(this->PendingMeshes).field_0x28 = 0;
  *(undefined4 *)&(this->PendingMeshes).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingMeshes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingMeshes).field_0x34 = 0;
  *(undefined8 *)&(this->PendingMeshes).field_0x40 = 0;
  *(undefined4 *)&(this->PendingMeshes).field_0x48 = 0;
  FTickFunction::FTickFunction((FTickFunction *)&this->TickFunction);
  local_res8 = (UWorld *)0x0;
  (this->TickFunction)._padding_ = (longlong)&___7FSkinWeightProfileManagerTickFunction__6B_;
  this->LastGamethreadProfileIndex = -1;
  this->WaitingForStreaming = false;
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WeakWorld).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncTask).Reference = (FBaseGraphTask *)0x0;
  if (param_1 != (UWorld *)0x0) {
    bVar1 = *(byte *)((longlong)&(this->TickFunction)._padding_ + 2);
    *(undefined2 *)&(this->TickFunction)._padding_ = 0x500;
    (this->TickFunction).Owner = this;
    *(byte *)((longlong)&(this->TickFunction)._padding_ + 2) = bVar1 & 0xfe | 6;
    FTickFunction::RegisterTickFunction
              ((FTickFunction *)&this->TickFunction,(param_1->PersistentLevel).field0_0x0.DebugPtr);
    local_res8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->WeakWorld).WeakPtr,(FObjectPtr)&local_res8);
  }
  return this;
}

// AllowCPU @ 1475b2fd0

bool __cdecl FSkinWeightProfileManager::AllowCPU(void)

{
  return GAllowCPU != 0;
}

// CancelSkinWeightProfileRequest @ 1475b7040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightProfileManager::CancelSkinWeightProfileRequest
          (FSkinWeightProfileManager *this,UObject *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetProfileRequest> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::CancelSkinWeightProfileRequest(UObject_*)_::_2_::FStat_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest>
  FVar11;
  ForElementType<FSetProfileRequest> FVar12;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  ForElementType<FSetProfileRequest> FVar16;
  ForElementType<FSetProfileRequest> FVar17;
  ForElementType<FSetProfileRequest> FVar18;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::CancelSkinWeightProfileRequest(UObject_*)_::_2_::FStat_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest>
         )0x0) {
      pFVar10 = ::FName::FName(&local_70,
                               "STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest,*pFVar10,
                 L"STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest;
  if (StatPtr_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::CancelSkinWeightProfileRequest(UObject_*)_::_2_::FStat_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest>
       )0x0) {
    pFVar10 = ::FName::FName(&local_68,
                             "STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::CancelSkinWeightProfileRequest(UObject_*)_::_2_::FStat_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest,
                          *pFVar10,L"STAT_SkinWeightProfileManager_CancelSkinWeightProfileRequest",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                   ,0xc4);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1475b71bf;
    }
  }
  bVar6 = false;
  FVar15 = local_60;
LAB_1475b71bf:
  iVar2 = (this->PendingSetProfileRequests).ArrayNum;
  FVar16 = (ForElementType<FSetProfileRequest>)
           (this->PendingSetProfileRequests).AllocatorInstance.Data;
  FVar18 = (ForElementType<FSetProfileRequest>)((longlong)iVar2 * 0x70 + (longlong)FVar16);
  do {
    if ((this->PendingSetProfileRequests).ArrayNum != iVar2) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FSetProfileRequest,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar16 == FVar18) {
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar15,CycleScopeEnd);
      }
      return;
    }
    bVar8 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)((longlong)FVar16 + 0x50),param_1);
    if ((bVar8) ||
       (bVar8 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          ((TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)((longlong)FVar16 + 0x58)
                           ,param_1), bVar8)) {
      FVar17 = (ForElementType<FSetProfileRequest>)&this->CanceledRequest;
      this->WaitingForStreaming = false;
      FVar3 = (this->CanceledRequest).AllocatorInstance.SecondaryData;
      FVar12 = FVar17;
      if (FVar3 != (ForElementType<FSetProfileRequest>)0x0) {
        FVar12 = FVar3;
      }
      if ((ulonglong)FVar12 <= (ulonglong)FVar16) {
        FVar12 = FVar17;
        if (FVar3 != (ForElementType<FSetProfileRequest>)0x0) {
          FVar12 = FVar3;
        }
        if (((ulonglong)FVar16 <
             (ulonglong)((longlong)(this->CanceledRequest).ArrayMax * 0x70 + (longlong)FVar12)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = (this->CanceledRequest).ArrayNum;
      piVar1 = &(this->CanceledRequest).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetProfileRequest>_>
                          (0x1070,(ForElementType<FSetProfileRequest> *)FVar17,piVar1);
      }
      (this->CanceledRequest).ArrayNum = iVar9 + 1;
      FVar3 = (this->CanceledRequest).AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<FSetProfileRequest>)0x0) {
        FVar17 = FVar3;
      }
      FSetProfileRequest::FSetProfileRequest
                ((FSetProfileRequest *)((longlong)iVar9 * 0x70 + (longlong)FVar17),
                 (FSetProfileRequest *)FVar16);
      if (3 < (byte)LogSkinWeightProfileManager._0_1_) {
        local_78.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_78.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_78,&local_50);
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogSkinWeightProfileManager);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
    }
    FVar16 = (ForElementType<FSetProfileRequest>)((longlong)FVar16 + 0x70);
  } while( true );
}

// CleanupRequest @ 1475b9b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightProfileManager::CleanupRequest
          (FSkinWeightProfileManager *this,FSetProfileRequest *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_FSkinWeightProfileManager::CleanupRequest(FSetProfileRequest_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_CleanupRequest>
  FVar8;
  int *piVar9;
  UObject *pUVar10;
  longlong *plVar11;
  FName FVar12;
  longlong *plVar13;
  FName local_res8;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SkinWeightProfileManager_CleanupRequest ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FSkinWeightProfileManager::CleanupRequest(FSetProfileRequest_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_CleanupRequest>
         )0x0) {
      pFVar7 = ::FName::FName(&local_res8,"STAT_SkinWeightProfileManager_CleanupRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinWeightProfileManager_CleanupRequest,
                 *pFVar7,L"STAT_SkinWeightProfileManager_CleanupRequest","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_SkinWeightProfileManager_CleanupRequest;
  if (StatPtr_STAT_SkinWeightProfileManager_CleanupRequest ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FSkinWeightProfileManager::CleanupRequest(FSetProfileRequest_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_CleanupRequest>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_SkinWeightProfileManager_CleanupRequest");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_FSkinWeightProfileManager::CleanupRequest(FSetProfileRequest_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_CleanupRequest>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_SkinWeightProfileManager_CleanupRequest,*pFVar7,
                         L"STAT_SkinWeightProfileManager_CleanupRequest","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (FName)((ulonglong)local_res8.Number << 0x20);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                   ,0x15f);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_1475b9cde;
    }
  }
  bVar4 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_1475b9cde:
  local_res8 = *(FName *)&(param_1->WeakSkeletalMesh).WeakPtr;
  iVar6 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                      *)&this->PendingMeshes,
                     local_res8.Number ^ local_res8.ComparisonIndex.Value.Value,
                     (TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *)&local_res8);
  if (iVar6 != -1) {
    lVar1 = *(longlong *)&this->PendingMeshes + (longlong)iVar6 * 0x14;
    piVar9 = (int *)(lVar1 + 8);
    if (lVar1 == 0) {
      piVar9 = (int *)0x0;
    }
    if ((piVar9 != (int *)0x0) && (*piVar9 = *piVar9 + -1, *piVar9 == 0)) {
      local_res8 = *(FName *)&(param_1->WeakSkeletalMesh).WeakPtr;
      if (*(int *)&(this->PendingMeshes).field_0x8 != *(int *)&(this->PendingMeshes).field_0x34) {
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                    *)&this->PendingMeshes,
                   local_res8.Number ^ local_res8.ComparisonIndex.Value.Value,
                   (TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *)&local_res8);
      }
      pUVar10 = FWeakObjectPtr::Get(&(param_1->WeakSkeletalMesh).WeakPtr);
      if ((pUVar10 != (UObject *)0x0) &&
         (plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x398))(pUVar10),
         plVar11 != (longlong *)0x0)) {
        plVar13 = (longlong *)*plVar11;
        lVar1 = plVar11[1];
        plVar2 = plVar13 + (int)lVar1;
        while( true ) {
          if ((int)plVar11[1] != (int)lVar1) {
            `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (plVar13 == plVar2) break;
          FSkinWeightProfilesData::ResetGPUReadback((FSkinWeightProfilesData *)(*plVar13 + 0x328));
          plVar13 = plVar13 + 1;
        }
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return;
}

// ConvertLODIndexToCount @ 1475bb5e0

int __thiscall
FSkinWeightProfileManager::ConvertLODIndexToCount
          (FSkinWeightProfileManager *this,USkeletalMesh *param_1,int param_2)

{
  return ((uint)*(byte *)((longlong)&param_1->_padding_ + 4) +
         (uint)*(byte *)((longlong)&param_1->_padding_ + 3)) - param_2;
}

// DoTick @ 1475c0990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinWeightProfileManager::DoTick
          (FSkinWeightProfileManager *this,float param_1,Type param_2,
          TRefCountPtr<FBaseGraphTask> *param_3)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  TArray<FSetProfileRequest,TSizedDefaultAllocator<32>_> *this_00;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  atomic<unsigned_int> aVar5;
  code *pcVar6;
  FBaseGraphTask *pFVar7;
  ulonglong uVar8;
  FName FVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TConsoleVariableData<int> *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_Tick>
  FVar24;
  UObject *pUVar25;
  FTaskGraphInterface *pFVar26;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_24_::FStat_STAT_SkinWeightProfileManager_TickMesh>
  FVar27;
  FSetProfileRequest *pFVar28;
  UStreamableRenderAsset *pUVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined8 uVar32;
  FName FVar33;
  FTaskBase *this_01;
  longlong lVar34;
  TRefCountPtr<FBaseGraphTask> TVar35;
  Type TVar36;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar37;
  FNameEntryId FVar38;
  FScriptContainerElement *pFVar39;
  FName FVar40;
  uint uVar41;
  int iVar42;
  ulonglong uVar43;
  FName FVar44;
  FSkinWeightProfileManager *this_02;
  FScriptContainerElement *pFVar45;
  undefined1 auStackY_358 [32];
  undefined1 local_2f4;
  EExtendedTaskPriority local_2f3;
  ETaskPriority local_2f2 [2];
  int local_2f0;
  uint local_2ec;
  FName local_2e8;
  longlong local_2e0;
  uint local_2d8;
  uint local_2d4;
  ulonglong local_2d0 [2];
  FColor_u_0 local_2c0;
  FColor_u_0 local_2bc;
  TRefCountPtr<FBaseGraphTask> local_2b8;
  FName local_2b0;
  uint local_2a8;
  uint uStack_2a4;
  UStreamableRenderAsset *local_2a0;
  longlong local_298;
  longlong *local_290;
  FSkinWeightProfileManager *local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_260;
  FName local_250;
  undefined8 local_248;
  FName local_240;
  TRefCountPtr<FBaseGraphTask> *local_238;
  FBaseGraphTask *local_230;
  undefined8 *local_228;
  FString local_220;
  FName local_210;
  FString local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  longlong local_1d8 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [112];
  undefined1 local_148 [112];
  FSetProfileRequest local_d8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_288 = this;
  local_238 = param_3;
  if (!__CsvProfilerStat212) {
    FCsvProfilerTrace::OutputInlineStatExclusive("SkinWeightProfileManagerGT");
    __CsvProfilerStat212 = true;
  }
  FCsvProfiler::BeginExclusiveStat("SkinWeightProfileManagerGT","CSV_SkinWeightProfileManagerGT");
  if (__CsvProfilerStat213 == false) {
    FCsvProfilerTrace::OutputInlineStat("SkinWeightProfileManager_PendingMeshes",0);
    __CsvProfilerStat213 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("SkinWeightProfileManager_PendingMeshes",0,
             *(int *)&(this->PendingMeshes).field_0x8 - *(int *)&(this->PendingMeshes).field_0x34,
             Set);
  if (__CsvProfilerStat214 == false) {
    FCsvProfilerTrace::OutputInlineStat("SkinWeightProfileManager_PendingRequests",0);
    __CsvProfilerStat214 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("SkinWeightProfileManager_PendingRequests",0,(this->PendingSetProfileRequests).ArrayNum
             ,Set);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_SkinWeightProfileManager_Tick =
         (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_Tick>
          )0x0;
    pFVar23 = ::FName::FName(&local_1f8,"STAT_SkinWeightProfileManager_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinWeightProfileManager_Tick,*pFVar23,
               L"STAT_SkinWeightProfileManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar24 = StatPtr_STAT_SkinWeightProfileManager_Tick;
  if (StatPtr_STAT_SkinWeightProfileManager_Tick ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_Tick>
       )0x0) {
    pFVar23 = ::FName::FName(&local_1f0,"STAT_SkinWeightProfileManager_Tick");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_STAT_SkinWeightProfileManager_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinWeightProfileManager_Tick,
                          *pFVar23,L"STAT_SkinWeightProfileManager_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar40 = *(FName *)FVar24;
  bVar10 = false;
  bVar13 = false;
  local_270.ComparisonIndex.Value = 0;
  local_270.Number = 0;
  bVar15 = false;
  bVar17 = false;
  if ((FVar40.ComparisonIndex.Value.Value == 0) && (FVar40.Number == 0)) {
LAB_1475c0c5a:
    bVar13 = bVar17;
    bVar10 = bVar15;
    bVar15 = false;
    local_280 = local_270;
    FVar40 = local_270;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c0._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar10 = false;
      bVar13 = true;
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_278.ComparisonIndex.Value = FVar40.ComparisonIndex.Value.Value;
        local_278.Number = FVar40.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_278,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                   ,0xd9);
        bVar10 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1475c0c5a;
    local_2e8 = FVar40;
    local_280 = FVar40;
    FThreadStats::AddMessage(FVar40,CycleScopeStart);
    bVar15 = true;
  }
  iVar22 = (this->PendingSetProfileRequests).ArrayNum;
  this->LastGamethreadProfileIndex = -1;
  if (iVar22 == 0) {
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->TickFunction,false);
    goto LAB_1475c18f4;
  }
  if ((this->WaitingForStreaming != false) && (GSkipLODWithoutDataOrStreamingRequest != 0)) {
    pFVar39 = (this->PendingSetProfileRequests).AllocatorInstance.Data;
    pFVar45 = pFVar39 + (longlong)iVar22 * 0x70;
    while( true ) {
      if ((this->PendingSetProfileRequests).ArrayNum != iVar22) {
        local_2f4 = 0;
        `TCheckedPointerIterator<FSetProfileRequest_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2f4);
      }
      if (pFVar39 == pFVar45) goto LAB_1475c18f4;
      if ((((*(int *)(pFVar39 + 0x60) == -1) ||
           (bVar17 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)(pFVar39 + 0x50),true,false), bVar17)
           ) || (pUVar25 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar39 + 0x58)),
                pUVar25 == (UObject *)0x0)) ||
         (*(int *)(pFVar39 + 0x60) <= (int)(uint)(byte)pUVar25[5].field_0x15)) break;
      pFVar39 = pFVar39 + 0x70;
    }
  }
  this->WaitingForStreaming = false;
  if ((this->AsyncTask).Reference != (FBaseGraphTask *)0x0) {
    pFVar26 = FTaskGraphInterface::Get();
    pcVar6 = *(code **)((longlong)*pFVar26 + 0x60);
    local_2b8.Reference = (this->AsyncTask).Reference;
    if (local_2b8.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_2b8.Reference)->field_0x30 = *(int *)&(local_2b8.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    local_68.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_40 = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_68,1,&local_3c);
    FVar37 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
    if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar37 = local_68.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar37,&local_2b8,1);
    (*pcVar6)(pFVar26,&local_68);
    FVar37 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
    if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar37 = local_68.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar37,local_40)
    ;
    if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
    if (local_2b8.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_2b8.Reference)->field_0x30;
      iVar22 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (*(code *)**(undefined8 **)local_2b8.Reference)(local_2b8.Reference,1);
      }
    }
    pFVar7 = (this->AsyncTask).Reference;
    if (pFVar7 != (FBaseGraphTask *)0x0) {
      (this->AsyncTask).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar7->field_0x30;
      iVar22 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
      }
    }
  }
  iVar22 = (this->PendingSetProfileRequests).ArrayNum;
  bVar17 = false;
  local_2ec = 0;
  if (iVar22 < 1) {
LAB_1475c175f:
    if (GSkipLODWithoutDataOrStreamingRequest != 0) {
      this->WaitingForStreaming = true;
      goto LAB_1475c18f4;
    }
  }
  else {
    this_00 = &this->PendingSetProfileRequests;
    local_2e0 = 0;
    this_02 = this;
    do {
      lVar34 = local_2e0;
      uVar20 = local_2ec;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        StatPtr_STAT_SkinWeightProfileManager_TickMesh =
             (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_24_::FStat_STAT_SkinWeightProfileManager_TickMesh>
              )0x0;
        pFVar23 = ::FName::FName(&local_1e8,"STAT_SkinWeightProfileManager_TickMesh");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinWeightProfileManager_TickMesh,
                   *pFVar23,L"STAT_SkinWeightProfileManager_TickMesh","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      FVar27 = StatPtr_STAT_SkinWeightProfileManager_TickMesh;
      if (StatPtr_STAT_SkinWeightProfileManager_TickMesh ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_24_::FStat_STAT_SkinWeightProfileManager_TickMesh>
           )0x0) {
        pFVar23 = ::FName::FName(&local_1e0,"STAT_SkinWeightProfileManager_TickMesh");
        FVar27 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkinWeightProfileManager::DoTick(float,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_24_::FStat_STAT_SkinWeightProfileManager_TickMesh>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_SkinWeightProfileManager_TickMesh,*pFVar23,
                              L"STAT_SkinWeightProfileManager_TickMesh","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar40 = *(FName *)FVar27;
      bVar11 = false;
      bVar12 = false;
      local_260.ComparisonIndex.Value = 0;
      local_260.Number = 0;
      bVar16 = false;
      bVar18 = false;
      FVar38 = FVar40.ComparisonIndex.Value;
      uVar21 = FVar40.Number;
      if ((FVar38.Value == 0) && (uVar21 == 0)) {
LAB_1475c1055:
        bVar12 = bVar18;
        bVar11 = bVar16;
        bVar16 = false;
        FVar40 = local_260;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_2bc.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_2bc._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
          bVar11 = false;
          bVar12 = true;
          bVar16 = false;
          bVar18 = true;
          if (-1 < CpuChannel->Enabled) {
            local_2b0.ComparisonIndex.Value = FVar38.Value;
            local_2b0.Number = uVar21;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                       ,0xef);
            bVar11 = true;
            bVar12 = true;
            bVar16 = true;
            bVar18 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1475c1055;
        local_2a8 = FVar38.Value;
        uStack_2a4 = uVar21;
        local_260 = FVar40;
        FThreadStats::AddMessage(FVar40,CycleScopeStart);
        bVar16 = true;
      }
      local_2d4 = ~uVar20 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar20 < (this->PendingSetProfileRequests).ArrayNum) {
        uVar21 = local_2d4;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar44 = (FName)(lVar34 * 0x70 + (longlong)(this_00->AllocatorInstance).Data);
      *(undefined4 *)((longlong)FVar44 + 0x60) = 0xffffffff;
      local_2e8 = FVar44;
      bVar18 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)((longlong)FVar44 + 0x50),true,false);
      if ((bVar18) ||
         (bVar18 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)((longlong)FVar44 + 0x58),true,false),
         bVar18)) {
LAB_1475c11a9:
        bVar18 = true;
      }
      else {
        FSetProfileRequest::FSetProfileRequest
                  ((FSetProfileRequest *)local_148,(FSetProfileRequest *)FVar44);
        FSetProfileRequest::FSetProfileRequest
                  ((FSetProfileRequest *)local_1b8,(FSetProfileRequest *)local_148);
        FSetProfileRequest::FSetProfileRequest(&local_d8,(FSetProfileRequest *)local_1b8);
        pFVar28 = TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  ::FindByPredicate<_FSkinWeightProfileManager::DoTick_::__l24::<lambda_1>_>
                            (&this_02->CanceledRequest,(<lambda_1> *)&local_d8);
        if (local_1b8._32_8_ != 0) {
          plVar30 = (longlong *)(local_1b8 + 0x30);
          if ((longlong *)local_1b8._72_8_ != (longlong *)0x0) {
            plVar30 = (longlong *)local_1b8._72_8_;
          }
          (**(code **)(*plVar30 + 0x10))();
        }
        if ((FScriptContainerElement *)local_1b8._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1b8._16_8_);
        }
        if (local_148._32_8_ != 0) {
          plVar30 = (longlong *)(local_148 + 0x30);
          if ((longlong *)local_148._72_8_ != (longlong *)0x0) {
            plVar30 = (longlong *)local_148._72_8_;
          }
          (**(code **)(*plVar30 + 0x10))();
        }
        if ((FScriptContainerElement *)local_148._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._16_8_);
        }
        bVar18 = false;
        if (pFVar28 != (FSetProfileRequest *)0x0) goto LAB_1475c11a9;
      }
      pUVar29 = (UStreamableRenderAsset *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar44 + 0x58));
      local_2a0 = pUVar29;
      if (pUVar29 == (UStreamableRenderAsset *)0x0) {
        plVar30 = (longlong *)0x0;
      }
      else {
        plVar30 = (longlong *)(**(code **)(pUVar29->_padding_ + 0x398))(pUVar29);
      }
      local_290 = plVar30;
      if ((bVar18) || (plVar30 == (longlong *)0x0)) {
LAB_1475c1578:
        CleanupRequest(this_02,(FSetProfileRequest *)FVar44);
        FVar9 = *(FName *)&(this_02->CanceledRequest).AllocatorInstance.SecondaryData;
        FVar33 = (FName)&this_02->CanceledRequest;
        if (FVar9 != (FName)0x0) {
          FVar33 = FVar9;
        }
        if ((ulonglong)FVar33 <= (ulonglong)FVar44) {
          FVar33 = (FName)&this_02->CanceledRequest;
          if (FVar9 != (FName)0x0) {
            FVar33 = FVar9;
          }
          if (((ulonglong)FVar44 <
               (ulonglong)((longlong)(this_02->CanceledRequest).ArrayMax * 0x70 + (longlong)FVar33))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_240 = FVar44;
        TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
        RemoveAll<_TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Remove_::__l2::<lambda_1>_>
                  (&this_02->CanceledRequest,(<lambda_1> *)&local_240);
        lVar34 = local_2e0;
        uVar20 = local_2ec;
        uVar21 = 0;
        if ((int)local_2ec < (this->PendingSetProfileRequests).ArrayNum) {
          uVar21 = local_2d4;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<FSetProfileRequest,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar20);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,&this_00->AllocatorInstance,(this->PendingSetProfileRequests).ArrayNum,
                   &(this->PendingSetProfileRequests).ArrayMax);
        lVar34 = lVar34 + -1;
        uVar20 = uVar20 - 1;
      }
      else {
        if ((pUVar29 == (UStreamableRenderAsset *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("SkeletalMesh",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                                ,0x103,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar18 = true;
        local_2f0 = -1;
        local_2d8 = 0;
        if (0 < *(int *)((longlong)FVar44 + 0x18)) {
          local_298 = 0;
          do {
            lVar34 = local_298;
            uVar20 = 0;
            if ((int)local_2d8 < *(int *)((longlong)FVar44 + 0x18)) {
              uVar20 = ~local_2d8 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar20 = *(uint *)(lVar34 + *(longlong *)((longlong)FVar44 + 0x10));
            uVar43 = 0;
            uVar21 = 0;
            if ((int)uVar20 < (int)plVar30[1]) {
              uVar21 = ~uVar20 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_2d0[1] = 0;
            lVar34 = *(longlong *)(*plVar30 + (longlong)(int)uVar20 * 8);
            uVar8 = *(ulonglong *)FVar44;
            local_2d0[0] = uVar43;
            if (uVar8 != 0) {
              local_2d0[0] = uVar8;
            }
            if (*(longlong *)((longlong)local_2e8 + 8) != 0) {
              *(longlong *)((longlong)local_2d0 + (ulonglong)(-(uint)(uVar8 != 0) & 8)) =
                   *(longlong *)((longlong)local_2e8 + 8);
              uVar43 = local_2d0[1] & 0xffffffff;
            }
            uVar8 = local_2d0[0];
            uVar21 = ::GetTypeHash((FNameEntryId)(uint)local_2d0[0]);
            uVar41 = (int)(uVar8 >> 0x20) + uVar21 + 0x9e3779b9;
            uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar43);
            pUVar29 = local_2a0;
            if (*(int *)(lVar34 + 0x340) != *(int *)(lVar34 + 0x36c)) {
              lVar31 = lVar34 + 0x370;
              if (*(longlong *)(lVar34 + 0x378) != 0) {
                lVar31 = *(longlong *)(lVar34 + 0x378);
              }
              iVar22 = *(int *)(lVar31 + (ulonglong)
                                         (*(int *)(lVar34 + 0x380) - 1U &
                                         ((int)(local_2d0[1] >> 0x20) + uVar41 * 0x40 +
                                          (uVar41 >> 2) + uVar21 + 0x9e3779b9 ^ uVar41)) * 4);
              if (iVar22 != -1) {
                lVar34 = *(longlong *)(lVar34 + 0x338);
                do {
                  lVar31 = (longlong)iVar22 * 0x20;
                  if ((*(ulonglong *)(lVar31 + lVar34) == uVar8) &&
                     (*(ulonglong *)(lVar31 + 8 + lVar34) == local_2d0[1])) {
                    iVar42 = local_2f0;
                    if (iVar22 != -1) goto LAB_1475c16a5;
                    break;
                  }
                  iVar22 = *(int *)(lVar31 + 0x18 + lVar34);
                } while (iVar22 != -1);
              }
            }
            bVar18 = false;
            iVar42 = ((uint)(local_2a0->CachedSRRState).field0_0x0._s_0.AssetLODBias +
                     (uint)(local_2a0->CachedSRRState).field0_0x0._s_0.MaxNumLODs) - uVar20;
            if (GSkipLODWithoutDataOrStreamingRequest == 0) {
              bVar17 = true;
              *(int *)((longlong)local_2e8 + 0x60) = local_2f0;
              lVar34 = local_2e0;
              uVar20 = local_2ec;
              goto LAB_1475c16fb;
            }
            if ((iVar42 <= (int)(uint)(local_2a0->CachedSRRState).field0_0x0._s_0.NumResidentLODs)
               || (bVar19 = UStreamableRenderAsset::HasPendingInitOrStreaming(local_2a0,false),
                  bVar19)) {
              bVar17 = true;
              FVar44 = local_2e8;
              this_02 = local_288;
              iVar42 = local_2f0;
              if (GSkipLODWithoutDataOrStreamingRequest == 0) break;
            }
            else if ((local_2f0 != -1) && (local_2f0 < iVar42)) {
              iVar42 = local_2f0;
            }
LAB_1475c16a5:
            local_2f0 = iVar42;
            local_2d8 = local_2d8 + 1;
            local_298 = local_298 + 4;
            FVar44 = local_2e8;
            this_02 = local_288;
            plVar30 = local_290;
          } while ((int)local_2d8 < *(int *)((longlong)local_2e8 + 0x18));
        }
        *(int *)((longlong)FVar44 + 0x60) = local_2f0;
        lVar34 = local_2e0;
        uVar20 = local_2ec;
        if ((bVar18) &&
           (bVar18 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)FVar44 + 0x50)),
           lVar34 = local_2e0, uVar20 = local_2ec, bVar18)) {
          if (3 < (byte)LogSkinWeightProfileManager._0_1_) {
            pUVar25 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar44 + 0x50));
            local_210.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
            local_210.Number = *(uint *)&pUVar25->field_0x1c;
            ::FName::ToString(&local_210,&local_220);
            local_250 = (FName)pUVar29->_padding_;
            ::FName::ToString(&local_250,&local_208);
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogSkinWeightProfileManager);
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.Data.AllocatorInstance.Data);
            }
          }
          local_1c8 = *(undefined8 *)FVar44;
          uStack_1c0 = *(undefined8 *)((longlong)FVar44 + 8);
          local_248 = *(undefined8 *)((longlong)FVar44 + 0x58);
          UE::Core::Private::Function::CheckCallable(*(void **)((longlong)FVar44 + 0x20));
          pcVar6 = *(code **)((longlong)FVar44 + 0x20);
          plVar30 = (longlong *)((longlong)FVar44 + 0x30);
          if (*(longlong **)((longlong)FVar44 + 0x48) != (longlong *)0x0) {
            plVar30 = *(longlong **)((longlong)FVar44 + 0x48);
          }
          uVar32 = (**(code **)(*plVar30 + 8))();
          (*pcVar6)(uVar32,&local_248,&local_1c8);
          goto LAB_1475c1578;
        }
      }
LAB_1475c16fb:
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar16) {
        FThreadStats::AddMessage(FVar40,CycleScopeEnd);
      }
      local_2ec = uVar20 + 1;
      local_2e0 = lVar34 + 1;
      iVar22 = (local_288->PendingSetProfileRequests).ArrayNum;
      this_02 = local_288;
    } while ((int)local_2ec < iVar22);
    FVar40 = local_280;
    this = local_288;
    if (!bVar17) goto LAB_1475c175f;
  }
  this->LastGamethreadProfileIndex = iVar22 + -1;
  if (local_238->Reference != (FBaseGraphTask *)0x0) {
    this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
    if (this_01 == (FTaskBase *)0x0) {
      this_01 = (FTaskBase *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_01,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_01->_padding_ = (longlong)&___7__TGraphTask_VFSkinWeightProfileManagerAsyncTask____6B_;
    }
    this_01[1]._padding_ = (longlong)this;
    pTVar14 = CVarForceSkinWeightProfileManagerAsyncTaskOnGT.Ref;
    bVar17 = IsInParallelGameThread();
    if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
      lVar34 = 0;
    }
    else {
      lVar34 = 4;
    }
    TVar36 = GameThread;
    if (*(int *)((longlong)pTVar14->ShadowedValue + lVar34) == 0) {
      TVar36 = AnyBackgroundHiPriTask;
    }
    UE::Tasks::Private::TranslatePriority(TVar36,local_2f2,&local_2f3);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_2f2[0],local_2f3,None);
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0xe0);
    pTVar4 = &this->AsyncTask;
    if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)local_1d8) {
      LOCK();
      paVar2 = &this_01->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    else {
      pFVar7 = pTVar4->Reference;
      pTVar4->Reference = (FBaseGraphTask *)this_01;
      if (pFVar7 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar7->field_0x30;
        iVar22 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
        }
      }
    }
    TVar35 = FTickFunction::GetCompletionHandle((FTickFunction *)&this->TickFunction);
                    /* WARNING: Load size is inaccurate */
    pFVar7 = *TVar35.Reference;
    local_230 = pTVar4->Reference;
    if (local_230 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_230->field_0x30 = *(int *)&local_230->field_0x30 + 1;
      UNLOCK();
    }
    FBaseGraphTask::DontCompleteUntil(pFVar7,(FBaseGraphTask *)&local_230);
    if (local_228 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(local_228 + 6);
      iVar22 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar22 == 1) && (local_228 != (undefined8 *)0x0)) {
        (**(code **)*local_228)(local_228,1);
      }
    }
  }
LAB_1475c18f4:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar40,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("SkinWeightProfileManagerGT");
  return;
}

// Get @ 1475cd5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinWeightProfileManager * __cdecl FSkinWeightProfileManager::Get(UWorld *param_1)

{
  FSkinWeightProfileManager **ppFVar1;
  
  ppFVar1 = TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar1 != (FSkinWeightProfileManager **)0x0) {
    return *ppFVar1;
  }
  return (FSkinWeightProfileManager *)0x0;
}

// GetStatId @ 1475de6b0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FSkinWeightProfileManager::GetStatId(FSkinWeightProfileManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FSkinWeightProfileManager::GetStatId(void)const_::_2_::FStat_FSkinWeightProfileManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FSkinWeightProfileManager ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FSkinWeightProfileManager::GetStatId(void)const_::_2_::FStat_FSkinWeightProfileManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FSkinWeightProfileManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FSkinWeightProfileManager,*pFVar1,
                   L"FSkinWeightProfileManager","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FSkinWeightProfileManager;
  if (StatPtr_FSkinWeightProfileManager ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FSkinWeightProfileManager::GetStatId(void)const_::_2_::FStat_FSkinWeightProfileManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FSkinWeightProfileManager");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FSkinWeightProfileManager::GetStatId(void)const_::_2_::FStat_FSkinWeightProfileManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FSkinWeightProfileManager,*pFVar1,
                         L"FSkinWeightProfileManager","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// HandleDelayedLoads @ 1475dee70

bool __cdecl FSkinWeightProfileManager::HandleDelayedLoads(void)

{
  return GHandleDelayedLoads != 0;
}

// IsTickable @ 1475e2c60

bool __thiscall FSkinWeightProfileManager::IsTickable(FSkinWeightProfileManager *this)

{
  if (((this->WeakWorld).WeakPtr.ObjectIndex == 0) &&
     ((this->WeakWorld).WeakPtr.ObjectSerialNumber == 0)) {
    return true;
  }
  return false;
}

// IsTickableInEditor @ 1475e2c80

bool __thiscall FSkinWeightProfileManager::IsTickableInEditor(FSkinWeightProfileManager *this)

{
  return true;
}

// IsTickableWhenPaused @ 1475e2c90

bool __thiscall FSkinWeightProfileManager::IsTickableWhenPaused(FSkinWeightProfileManager *this)

{
  return false;
}

// OnPreWorldFinishDestroy @ 1475e8760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FSkinWeightProfileManager::OnPreWorldFinishDestroy(UWorld *param_1)

{
  FSkinWeightProfileManager *pFVar1;
  FSkinWeightProfileManager **ppFVar2;
  uint uVar3;
  UWorld *local_res10 [3];
  
  ppFVar2 = TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar2 != (FSkinWeightProfileManager **)0x0) {
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FSkinWeightProfileManager *)0x0) {
      (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res10[0] = param_1;
      TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar3 >> 0x10 ^ uVar3,local_res10);
    }
  }
  return;
}

// OnShutdown @ 1475e88b0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FSkinWeightProfileManager::OnShutdown(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar7 = WorldManagers._40_4_;
  iVar12 = 0;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = iVar13;
  if (WorldManagers._40_4_ != 0) {
    puVar14 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar14 = (uint *)WorldManagers._32_8_;
    }
    uVar11 = *puVar14;
    iVar13 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = WorldManagers._40_4_;
      if ((int)(WorldManagers._40_4_ + -1 + (WorldManagers._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
          iVar12) goto LAB_1475e895d;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar5 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar6 = local_res10 + -1 + iVar13;
    if ((int)WorldManagers._40_4_ < iVar6) {
      iVar6 = WorldManagers._40_4_;
    }
  }
LAB_1475e895d:
  uVar11 = WorldManagers._40_4_ & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)WorldManagers._40_4_ >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  bVar8 = WorldManagers._40_1_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)WorldManagers._40_4_ < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar7 != WorldManagers._40_4_) {
    lVar9 = 0x154c276b0;
    if (WorldManagers._32_8_ != 0) {
      lVar9 = WorldManagers._32_8_;
    }
    uVar5 = -1 << (bVar8 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar12 * 4);
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = WorldManagers._40_4_;
      if ((int)(WorldManagers._40_4_ + -1 + (WorldManagers._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
          iVar12) goto LAB_1475e8a70;
      uVar5 = *(uint *)(lVar9 + 4 + lVar10 * 4);
    }
    uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + uVar11;
    if ((int)WorldManagers._40_4_ < iVar7) {
      iVar7 = WorldManagers._40_4_;
    }
  }
LAB_1475e8a70:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FSkinWeightProfileManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == iVar7) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    plVar2 = *(longlong **)(WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar4 = 1 < (int)WorldManagers._72_4_;
  if (!bVar4) {
    TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
                      *)&WorldManagers);
  }
  WorldManagers._8_4_ = 0;
  if (WorldManagers._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&WorldManagers,0,(int *)&WorldManagers.field_0xc);
  }
  WorldManagers._48_4_ = 0xffffffff;
  WorldManagers._52_4_ = 0;
  WorldManagers._40_4_ = 0;
  if (0x80 < (uint)WorldManagers._44_4_) {
    WorldManagers._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10,0);
  }
  if (bVar4) {
    WorldManagers._72_4_ = 1;
    TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
              *)&WorldManagers);
  }
  return;
}

// OnStartup @ 1475e8b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FSkinWeightProfileManager::OnStartup(void)

{
  undefined1 local_res8 [32];
  
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                 *)&FWorldDelegates::OnPreWorldInitialization,
                (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
               *)&FWorldDelegates::OnPostWorldCleanup,
              (_func___cdecl_void_UWorld_ptr_bool_bool *)local_res8);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldFinishDestroy,(_func___cdecl_void_UWorld_ptr *)local_res8);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,(_func___cdecl_void_UWorld_ptr *)local_res8);
  return;
}

// OnWorldBeginTearDown @ 1475e8c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FSkinWeightProfileManager::OnWorldBeginTearDown(UWorld *param_1)

{
  FSkinWeightProfileManager *pFVar1;
  FSkinWeightProfileManager **ppFVar2;
  uint uVar3;
  UWorld *local_res10 [3];
  
  ppFVar2 = TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar2 != (FSkinWeightProfileManager **)0x0) {
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FSkinWeightProfileManager *)0x0) {
      (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res10[0] = param_1;
      TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar3 >> 0x10 ^ uVar3,local_res10);
    }
  }
  return;
}

// OnWorldCleanup @ 1475e8c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FSkinWeightProfileManager::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  FSkinWeightProfileManager *pFVar1;
  FSkinWeightProfileManager **ppFVar2;
  uint uVar3;
  UWorld *local_res20;
  
  ppFVar2 = TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar2 != (FSkinWeightProfileManager **)0x0) {
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FSkinWeightProfileManager *)0x0) {
      (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res20 = param_1;
      TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar3 >> 0x10 ^ uVar3,&local_res20);
    }
  }
  return;
}

// OnWorldInit @ 1475e8d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FSkinWeightProfileManager::OnWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  code *pcVar1;
  UWorld *pUVar2;
  bool bVar3;
  FSkinWeightProfileManager **ppFVar4;
  FTickableGameObject this;
  UWorld *local_res8 [2];
  TKeyInitializer<UWorld_*_const_&> local_res18;
  undefined8 local_res20;
  UWorld *local_38;
  UWorld **local_30;
  
  local_res8[0] = param_1;
  ppFVar4 = TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FSkinWeightProfileManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>_>
                    *)&WorldManagers,param_1);
  if ((ppFVar4 != (FSkinWeightProfileManager **)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldManagers.Find(World) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfileManager.cpp"
                         ,0x49,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = (FTickableGameObject)::operator_new(0x2a0);
  pUVar2 = local_res8[0];
  if (this == (FTickableGameObject)0x0) {
    this = (FTickableGameObject)0x0;
  }
  else {
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
    *(undefined ***)this = &___7FSkinWeightProfileManager__6B_;
    *(FTickableGameObject *)((longlong)this + 0x1d0) = (FTickableGameObject)0x0;
    *(undefined4 *)((longlong)this + 0x1e0) = 0;
    *(undefined4 *)((longlong)this + 0x1e4) = 4;
    *(FTickableGameObject *)((longlong)this + 0x1f0) = (FTickableGameObject)0x0;
    *(FTickableGameObject *)((longlong)this + 0x1f8) = (FTickableGameObject)0x0;
    *(FTickableGameObject *)((longlong)this + 0x200) = (FTickableGameObject)0x0;
    *(FTickableGameObject *)((longlong)this + 0x208) = (FTickableGameObject)0x0;
    *(FTickableGameObject *)((longlong)this + 0x220) = (FTickableGameObject)0x0;
    *(undefined4 *)((longlong)this + 0x228) = 0;
    *(undefined4 *)((longlong)this + 0x22c) = 0x80;
    *(undefined4 *)((longlong)this + 0x230) = 0xffffffff;
    *(undefined4 *)((longlong)this + 0x234) = 0;
    *(FTickableGameObject *)((longlong)this + 0x240) = (FTickableGameObject)0x0;
    *(undefined4 *)((longlong)this + 0x248) = 0;
    FTickFunction::FTickFunction((FTickFunction *)((longlong)this + 0x250));
    local_res20 = 0;
    *(undefined ***)((longlong)this + 0x250) = &___7FSkinWeightProfileManagerTickFunction__6B_;
    *(undefined4 *)((longlong)this + 0x280) = 0xffffffff;
    *(undefined1 *)((longlong)this + 0x284) = 0;
    *(FTickableGameObject *)((longlong)this + 0x288) = (FTickableGameObject)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this + 0x288),(FObjectPtr)&local_res20);
    *(FTickableGameObject *)((longlong)this + 0x290) = (FTickableGameObject)0x0;
    if (pUVar2 != (UWorld *)0x0) {
      *(undefined2 *)((longlong)this + 600) = 0x500;
      *(FTickableGameObject *)((longlong)this + 0x278) = this;
      *(byte *)((longlong)this + 0x25a) = *(byte *)((longlong)this + 0x25a) & 0xfe | 6;
      FTickFunction::RegisterTickFunction
                ((FTickFunction *)((longlong)this + 0x250),
                 (pUVar2->PersistentLevel).field0_0x0.DebugPtr);
      local_38 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this + 0x288),(FObjectPtr)&local_38);
    }
  }
  local_30 = local_res8;
  TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UWorld_*_const_&>_>
            ((TSet<TTuple<UWorld_*,FSkinWeightProfileManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FSkinWeightProfileManager_*,0>,FDefaultSetAllocator>
              *)&WorldManagers,&local_res18,(bool *)&local_30);
  *(FTickableGameObject *)(WorldManagers._0_8_ + 8 + (longlong)(int)local_res18.Key * 0x18) = this;
  return;
}

// RequestSkinWeightProfileStack @ 1475f5f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FSkinWeightProfileManager::RequestSkinWeightProfileStack
          (FSkinWeightProfileManager *this,FSkinWeightProfileStack *param_1,USkinnedAsset *param_2,
          UObject *param_3,
          TFunction<void___cdecl(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack)>
          *param_4,int param_5)

{
  TArray<FSetProfileRequest,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  UClass *pUVar14;
  int *piVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  FName FVar20;
  undefined1 auStack_1a8 [32];
  int *local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  int local_158;
  FWeakObjectPtr local_154;
  int local_14c;
  FName local_148;
  undefined8 uStack_140;
  FName local_138;
  UObject *local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  undefined1 local_e8 [72];
  longlong *plStack_a0;
  FWeakObjectPtr local_98;
  FWeakObjectPtr FStack_90;
  int local_88;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [3];
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FVar20.ComparisonIndex.Value = 0;
  FVar20.Number = 0;
  if (param_2 != (USkinnedAsset *)0x0) {
    pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar13 = (int)pUVar14->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar14->_padding_)) goto LAB_1475f5fa6;
  }
  param_2 = (USkinnedAsset *)FVar20;
LAB_1475f5fa6:
  if ((FName)param_2 != (FName)0x0) {
    FVar2 = (param_1->Layers).Elements[0];
    FVar3 = (param_1->Layers).Elements[1];
    local_148 = FVar20;
    if (FVar2 != (FName)0x0) {
      local_148 = FVar2;
    }
    local_e8._16_8_ = (FScriptContainerElement *)0x0;
    local_e8._24_4_ = 0;
    local_e8._28_4_ = 0;
    local_e8._32_8_ = 0;
    plStack_a0 = (longlong *)0x0;
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    FStack_90.ObjectIndex = 0;
    FStack_90.ObjectSerialNumber = 0;
    local_88 = -1;
    uStack_140 = 0;
    if (FVar3 != (FName)0x0) {
      *(FName *)((longlong)&local_148.ComparisonIndex.Value +
                (ulonglong)(-(uint)(FVar2 != (FName)0x0) & 8)) = FVar3;
    }
    local_78 = *(longlong *)param_4;
    plStack_50 = (longlong *)0x0;
    local_e8._0_4_ = local_148.ComparisonIndex.Value;
    local_e8._4_4_ = local_148.Number;
    local_e8._8_4_ = (uint)uStack_140;
    local_e8._12_4_ = uStack_140._4_4_;
    if (local_78 != 0) {
      puVar16 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar16)(local_148.ComparisonIndex.Value,local_68);
    }
    plVar18 = plStack_a0;
    uVar11 = local_e8._60_4_;
    uVar10 = local_e8._56_4_;
    uVar9 = local_e8._52_4_;
    uVar8 = local_e8._48_4_;
    uVar7 = local_e8._40_8_;
    uVar6 = local_e8._32_8_;
    local_e8._32_8_ = local_78;
    local_e8._40_8_ = uStack_70;
    local_e8._64_4_ = (undefined4)local_68[2];
    local_e8._68_4_ = local_68[2]._4_4_;
    plStack_a0 = plStack_50;
    local_e8._48_4_ = (undefined4)local_68[0];
    local_e8._52_4_ = local_68[0]._4_4_;
    local_e8._56_4_ = (undefined4)local_68[1];
    local_e8._60_4_ = local_68[1]._4_4_;
    local_78 = uVar6;
    uStack_70 = uVar7;
    local_68[0]._0_4_ = uVar8;
    local_68[0]._4_4_ = uVar9;
    local_68[1]._0_4_ = uVar10;
    local_68[1]._4_4_ = uVar11;
    plStack_50 = plVar18;
    if (uVar6 != 0) {
      plVar17 = local_68;
      if (plVar18 != (longlong *)0x0) {
        plVar17 = plVar18;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    local_138 = (FName)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&FStack_90,(FObjectPtr)&local_138);
    local_130 = param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_3);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_130);
    if (3 < (byte)LogSkinWeightProfileManager._0_1_) {
      local_128.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_128.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_128,&local_100);
      local_120 = *(FName *)((longlong)param_2 + 0x18);
      ::FName::ToString(&local_120,&local_110);
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogSkinWeightProfileManager);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    if (param_5 == -1) {
      iVar13 = (**(code **)(*(longlong *)param_2 + 0x3d0))(param_2);
      local_158 = (**(code **)(*(longlong *)param_2 + 0x448))(param_2,1);
      pFVar4 = local_180;
      lVar19 = local_178;
      local_180 = (FScriptContainerElement *)local_e8._16_8_;
      for (; local_178 = lVar19, local_e8._16_8_ = local_180, local_158 < iVar13;
          local_158 = local_158 + 1) {
        if ((local_180 <= (FScriptContainerElement *)&local_158) &&
           (local_178 = (longlong)(int)local_e8._28_4_,
           (FScriptContainerElement *)&local_158 < local_180 + local_178 * 4)) {
          local_170 = (longlong)(int)local_e8._24_4_;
          local_168 = 4;
          local_188 = &local_158;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          pFVar4 = local_180;
          lVar19 = local_178;
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_178 = lVar19;
        local_180 = pFVar4;
        if (local_e8._24_4_ == local_e8._28_4_) {
          local_e8._24_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(local_e8 + 0x10),(int *)(local_e8 + 0x1c));
        }
        *(int *)(local_e8._16_8_ + (longlong)(int)local_e8._24_4_ * 4) = local_158;
        pFVar4 = local_180;
        lVar19 = local_178;
        local_180 = (FScriptContainerElement *)local_e8._16_8_;
        local_e8._24_4_ = local_e8._24_4_ + 1;
      }
    }
    else {
      if (((ulonglong)local_e8._16_8_ <= (FScriptContainerElement *)&param_5) &&
         ((FScriptContainerElement *)&param_5 <
          (FScriptContainerElement *)(local_e8._16_8_ + (longlong)(int)local_e8._28_4_ * 4))) {
        local_170 = (longlong)(int)local_e8._24_4_;
        local_168 = 4;
        local_188 = &param_5;
        local_180 = (FScriptContainerElement *)local_e8._16_8_;
        local_178 = (longlong)(int)local_e8._28_4_;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_e8._24_4_ == local_e8._28_4_) {
        local_e8._24_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)(local_e8 + 0x10),(int *)(local_e8 + 0x1c));
      }
      *(int *)(local_e8._16_8_ + (longlong)(int)local_e8._24_4_ * 4) = param_5;
      pFVar4 = local_180;
      local_e8._24_4_ = local_e8._24_4_ + 1;
    }
    local_180 = pFVar4;
    pTVar1 = &this->PendingSetProfileRequests;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_e8) &&
       (lVar19 = (longlong)(this->PendingSetProfileRequests).ArrayMax,
       (FScriptContainerElement *)local_e8 < pFVar4 + lVar19 * 0x70)) {
      local_170 = (longlong)(this->PendingSetProfileRequests).ArrayNum;
      local_168 = 0x70;
      local_188 = (int *)local_e8;
      local_180 = pFVar4;
      local_178 = lVar19;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar13 = (this->PendingSetProfileRequests).ArrayNum;
    piVar15 = &(this->PendingSetProfileRequests).ArrayMax;
    if (iVar13 == *piVar15) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&pTVar1->AllocatorInstance,piVar15);
    }
    (this->PendingSetProfileRequests).ArrayNum = iVar13 + 1;
    FSetProfileRequest::FSetProfileRequest
              ((FSetProfileRequest *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x70),
               (FSetProfileRequest *)local_e8);
    local_14c = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_154.ObjectIndex = 0;
    local_154.ObjectSerialNumber = 0;
    local_118 = (FName)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_154,(FObjectPtr)&local_118);
    piVar15 = TMapBase<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>
                        ((TMapBase<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>_>
                          *)&this->PendingMeshes,
                         local_154.ObjectSerialNumber ^ local_154.ObjectIndex,
                         (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)&local_154,&local_14c);
    *piVar15 = *piVar15 + 1;
    this->WaitingForStreaming = false;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->TickFunction,true);
    if (local_e8._32_8_ != 0) {
      plVar18 = (longlong *)(local_e8 + 0x30);
      if (plStack_a0 != (longlong *)0x0) {
        plVar18 = plStack_a0;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._16_8_);
    }
  }
  return;
}

// ShouldIgnoreLOD @ 1475fddf0

bool __thiscall
FSkinWeightProfileManager::ShouldIgnoreLOD
          (FSkinWeightProfileManager *this,FSkinWeightProfilesData *param_1,USkeletalMesh *param_2,
          int param_3)

{
  bool bVar1;
  
  if ((GSkipLODWithoutDataOrStreamingRequest != 0) &&
     ((int)(uint)*(byte *)((longlong)&param_2->_padding_ + 5) < param_3)) {
    bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming
                      ((UStreamableRenderAsset *)param_2,false);
    return !bVar1;
  }
  return false;
}

// ShouldSkipTick @ 1475fdf70

bool __thiscall FSkinWeightProfileManager::ShouldSkipTick(FSkinWeightProfileManager *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->WaitingForStreaming != false) {
    iVar1 = (this->PendingSetProfileRequests).ArrayNum;
    if ((iVar1 != 0) && (GSkipLODWithoutDataOrStreamingRequest != 0)) {
      pFVar4 = (this->PendingSetProfileRequests).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar1 * 0x70;
      while( true ) {
        if ((this->PendingSetProfileRequests).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FSetProfileRequest_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar4 == pFVar5) {
          return true;
        }
        if ((((*(int *)(pFVar4 + 0x60) == -1) ||
             (bVar2 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)(pFVar4 + 0x50),true,false), bVar2))
            || (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar4 + 0x58)),
               pUVar3 == (UObject *)0x0)) ||
           (*(int *)(pFVar4 + 0x60) <= (int)(uint)(byte)pUVar3[5].field_0x15)) break;
        pFVar4 = pFVar4 + 0x70;
      }
    }
  }
  return false;
}

// Tick @ 1475ff5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSkinWeightProfileManager::Tick(FSkinWeightProfileManager *this,float param_1)

{
  TRefCountPtr<FBaseGraphTask> local_res18 [2];
  
  local_res18[0].Reference = (FBaseGraphTask *)0x0;
  DoTick(this,param_1,GameThread,local_res18);
  return;
}

