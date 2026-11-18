// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// operator() @ 147eab720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`FLevelStreamingGCHelper::PrepareStreamedOutLevelForGC'::__l5::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  UPackage *this_00;
  char local_res8 [8];
  UPackage *local_res18;
  UPackage *local_res20;
  code *local_18;
  char *local_10;
  
  local_res8[0] = '\0';
  this_00 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_res20 = this_00;
  TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator>::Emplace<UPackage_*_const_&>
            (*(TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator> **)this,
             &local_res18,(bool *)&local_res20);
  if (local_res8[0] == '\0') {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``FLevelStreamingGCHelper::PrepareStreamedOutLevelForGC'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,bool,UObject_*>
               ::Call;
    ForEachObjectWithPackage
              (this_00,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,true,RF_NoFlags,Garbage);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
  }
  return;
}

// AddGarbageCollectorCallback @ 147eadea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FLevelStreamingGCHelper::AddGarbageCollectorCallback(void)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  undefined1 local_res8 [32];
  
  if (!GarbageCollectAdded) {
    pTVar1 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               pTVar1,(_func___cdecl_void *)local_res8);
    pTVar1 = FCoreUObjectDelegates::GetPostGarbageCollect();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               pTVar1,(_func___cdecl_void *)local_res8);
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
    ::AddStatic<>(&FWorldDelegates::OnWorldTickEnd,
                  (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
    GarbageCollectAdded = true;
  }
  return;
}

// CancelUnloadRequest @ 147eb3670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FLevelStreamingGCHelper::CancelUnloadRequest(ULevel *param_1)

{
  code *pcVar1;
  int iVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ULevel *local_res8;
  FWeakObjectPtr local_38 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar9 = 0;
  local_38[0].ObjectIndex = 0;
  local_38[0].ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(local_38,(FObjectPtr)&local_res8);
  if (((LevelsPendingUnload.AllocatorInstance.Data <= local_38) &&
      (local_38 <
       (FWeakObjectPtr *)
       (LevelsPendingUnload.AllocatorInstance.Data + (longlong)LevelsPendingUnload.ArrayMax * 8)))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = LevelsPendingUnload.ArrayNum;
  FVar3.Data = LevelsPendingUnload.AllocatorInstance.Data;
  iVar5 = LevelsPendingUnload.ArrayNum;
  if (LevelsPendingUnload.ArrayNum != 0) {
    bVar6 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                      ((TWeakObjectPtr<ULevel,FWeakObjectPtr> *)
                       LevelsPendingUnload.AllocatorInstance.Data,
                       (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)local_38);
    bVar6 = !bVar6;
    iVar8 = iVar9;
    do {
      iVar2 = iVar8;
      do {
        iVar2 = iVar2 + 1;
        if (iVar4 <= iVar2) break;
        bVar7 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                          ((TWeakObjectPtr<ULevel,FWeakObjectPtr> *)
                           (FVar3.Data + (longlong)iVar2 * 8),
                           (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)local_38);
      } while (bVar6 == !bVar7);
      if (bVar6 != false) {
        if (iVar9 != iVar8) {
          memmove(FVar3.Data + (longlong)iVar9 * 8,FVar3.Data + (longlong)iVar8 * 8,
                  (longlong)(iVar2 - iVar8) << 3);
        }
        iVar9 = iVar9 + (iVar2 - iVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar2;
      iVar5 = iVar9;
    } while (iVar2 < iVar4);
  }
  LevelsPendingUnload.ArrayNum = iVar5;
  return;
}

// EnableForCommandlet @ 147eb8bf0

void __cdecl FLevelStreamingGCHelper::EnableForCommandlet(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (!PRIVATE_GIsRunningCommandlet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsRunningCommandlet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bEnabledForCommandlet = true;
  return;
}

// GetNumLevelsPendingPurge @ 147ec2530

int __cdecl FLevelStreamingGCHelper::GetNumLevelsPendingPurge(void)

{
  return LevelsPendingUnload.ArrayNum + NumberOfPreparedStreamedOutLevelsForGC;
}

// OnPreGarbageCollect @ 147ed04b0

void __cdecl FLevelStreamingGCHelper::OnPreGarbageCollect(void)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId103,"FLevelStreamingGCHelper::OnPreGarbageCollect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId103);
  }
  if (0 < LevelsPendingUnload.ArrayNum + NumberOfPreparedStreamedOutLevelsForGC) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&OnGCStreamedOutLevels);
  }
  PrepareStreamedOutLevelsForGC();
  if (!bVar1) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnWorldTickEnd @ 147ed0c20

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
FLevelStreamingGCHelper::OnWorldTickEnd(UWorld *param_1,ELevelTick param_2,float param_3)

{
  if (!bIsPrepareStreamedOutLevelForGCDelayedToWorldTickEnd) {
    return;
  }
  if (CpuChannel->Enabled < 0) {
    bIsPrepareStreamedOutLevelForGCDelayedToWorldTickEnd = false;
    PrepareStreamedOutLevelsForGC();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId95,"FLevelStreamingGCHelper::OnWorldTickEnd",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
             ,0x5f);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId95);
  bIsPrepareStreamedOutLevelForGCDelayedToWorldTickEnd = false;
  PrepareStreamedOutLevelsForGC();
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// PrepareStreamedOutLevelForGC @ 147ed25a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FLevelStreamingGCHelper::PrepareStreamedOutLevelForGC(ULevel *param_1)

{
  ulonglong uVar1;
  UWorld *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  ULevel *pUVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FNameEntryId FVar10;
  FWorldContext *pFVar11;
  UPackage *pUVar12;
  UObjectBase *pUVar13;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  undefined4 extraout_var;
  FName FVar14;
  FString *pFVar15;
  byte bVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  uint *puVar26;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [6];
  ULevel *local_1d0;
  EUniqueObjectNameOptions local_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0 [16];
  int local_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  int *piStack_1a0;
  undefined8 local_198;
  FName local_190;
  int local_188;
  undefined1 local_184 [4];
  FName local_180;
  UPackage *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined1 local_158 [8];
  FString local_150;
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 **local_d8;
  code *local_d0;
  code **local_c8;
  FDestructionSentinel local_c0 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  if (param_1 != (ULevel *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
    NumberOfPreparedStreamedOutLevelsForGC = NumberOfPreparedStreamedOutLevelsForGC + 1;
    local_1d0 = param_1;
    local_178 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
    if (4 < (byte)LogStreaming._0_1_) {
      local_180 = (FName)local_178->_padding_;
      ::FName::ToString(&local_180,&local_150);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    pFVar22 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    local_1c0._8_8_ = &(GEngine->WorldList).Array.ArrayNum;
    local_1b0 = *(int *)local_1c0._8_8_;
    pFVar20 = pFVar22 + (longlong)local_1b0 * 8;
    local_198 = CONCAT44(uStack_1ac,local_1b0);
    local_1c0._0_8_ = pFVar22;
    piStack_1a0 = (int *)local_1c0._8_8_;
    local_170 = pFVar20;
    while( true ) {
      local_1a8 = pFVar22;
      if (*piStack_1a0 != (int)local_198) {
        local_1d8 = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1d8);
      }
      pUVar5 = local_1d0;
      if (pFVar22 == pFVar20) break;
      pUVar2 = *(UWorld **)(*(longlong *)pFVar22 + 0x2c0);
      if (pUVar2 != (UWorld *)0x0) {
        if ((pUVar2->bInTick != '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!World->bInTick",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
                               ,0x8e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = UEngine::GetWorldContextFromWorldChecked(GEngine,pUVar2);
        pUVar5 = local_1d0;
        iVar25 = (pFVar11->ActiveNetDrivers).ArrayNum;
        pFVar20 = (pFVar11->ActiveNetDrivers).AllocatorInstance.Data;
        pFVar24 = pFVar20 + (longlong)iVar25 * 0x10;
        while( true ) {
          if ((pFVar11->ActiveNetDrivers).ArrayNum != iVar25) {
            local_1d7 = 0;
            `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1d7);
          }
          if (pFVar20 == pFVar24) break;
          plVar3 = *(longlong **)pFVar20;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 1000))(plVar3,pUVar5);
          }
          pFVar20 = pFVar20 + 0x10;
        }
        ULevelStreaming::BroadcastLevelLoadedStatus(pUVar2,(FName)local_178->_padding_,false);
        pFVar20 = local_170;
      }
      pFVar22 = pFVar22 + 8;
    }
    ULevel::CleanupLevel(local_1d0,true,true);
    pUVar12 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar5);
    local_168 = pUVar12->_padding_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&LevelPackageNames,&local_190,(bool *)&local_168);
    iVar25 = 0;
    local_5c = 0x80;
    local_160 = (undefined8 *)local_88;
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    pUVar13 = (UObjectBase *)UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)pUVar5);
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLevelStreamingGCHelper::PrepareStreamedOutLevelForGC'::__l5::<lambda_1>,void,UObject_*>
               ::Call;
    local_d8 = &local_160;
    local_c8 = &local_e0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              (pUVar13,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_d0,true,RF_NoFlags,Garbage);
    uVar23 = local_60;
    if (UObjectBaseUtility::bGarbageEliminationEnabled == false) {
      uStack_134 = 1;
      local_120 = 0;
      uStack_124 = 0;
      if (local_60 != 0) {
        puVar26 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar26 = local_68;
        }
        uVar21 = *puVar26;
        local_120 = 0;
        while (uVar21 == 0) {
          lVar17 = (longlong)iVar25;
          local_120 = local_120 + 0x20;
          iVar25 = iVar25 + 1;
          uStack_124 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_147ed2911;
          uVar21 = (puVar26 + 1)[lVar17];
        }
        uStack_134 = -uVar21 & uVar21;
        uVar1 = (ulonglong)uStack_134 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_190.Number = (uint)lVar17;
        uStack_124 = local_120 + -1 + local_190.Number;
        if ((int)local_60 < (int)uStack_124) {
          uStack_124 = local_60;
        }
      }
LAB_147ed2911:
      local_140 = (longlong *)local_88;
      uStack_11c = local_8c;
      local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      iStack_118 = local_88._8_4_ - local_54;
      uVar21 = local_60 & 0xffffffe0;
      uStack_128 = 0xffffffff;
      TStack_108.CurrentBitIndex = uStack_124;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      TStack_108._padding_ = CONCAT44(uStack_134,iVar25);
      iVar19 = (int)local_60 >> 5;
      TStack_108._28_4_ = local_8c;
      TStack_108.BaseBitIndex = local_120;
      uStack_e8 = CONCAT44(uStack_114,iStack_118);
      bVar16 = (byte)local_60;
      iStack_138 = iVar25;
      local_110 = local_140;
      TStack_108.Array = local_130;
      if (((int)local_60 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar23 != local_60) {
        puVar26 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar26 = local_68;
        }
        uVar23 = -1 << (bVar16 & 0x1f) & puVar26[iVar19];
        while (uVar23 == 0) {
          lVar17 = (longlong)iVar19;
          uVar21 = uVar21 + 0x20;
          iVar19 = iVar19 + 1;
          uVar23 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_147ed2a40;
          uVar23 = (puVar26 + 1)[lVar17];
        }
        uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_188 = (int)lVar17;
        uVar23 = local_188 + -1 + uVar21;
        if ((int)local_60 < (int)uVar23) {
          uVar23 = local_60;
        }
      }
LAB_147ed2a40:
      while( true ) {
        plVar3 = local_110;
        if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
          local_1d6[0] = 0;
          `TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d6);
        }
        pUVar5 = local_1d0;
        if (((TStack_108.CurrentBitIndex == uVar23) &&
            (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar3 == (longlong *)local_88)) break;
        pUVar13 = *(UObjectBase **)(*plVar3 + (longlong)TStack_108.CurrentBitIndex * 0x10);
        this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               FCoreUObjectInternalDelegates::GetOnLeakedPackageRenameDelegate();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)local_c0);
        this->InvocationListLockCount = this->InvocationListLockCount + 1;
        bVar6 = false;
        uVar21 = (this->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar21) {
          lVar17 = (longlong)(int)uVar21 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar21 < (this->InvocationList).ArrayNum) {
              uVar9 = ~uVar21 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar20 = (this->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar20 + lVar17 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar20 + lVar17), plVar3 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar17 = lVar17 + -0x10;
            uVar21 = uVar21 - 1;
          } while (-1 < (int)uVar21);
        }
        this->InvocationListLockCount = this->InvocationListLockCount + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
        }
        if (local_c0[0].bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0[0].Accessor,local_c0);
        }
        FVar10 = FNameEntryId::FromValidEName((EName)local_184);
        uStack_1c4 = 0;
        local_1c8 = *(EUniqueObjectNameOptions *)CONCAT44(extraout_var,FVar10.Value);
        FVar14 = (FName)Z_Construct_UClass_UPackage_NoRegister();
        MakeUniqueObjectName((UObject *)local_158,(UClass *)0x0,FVar14,local_1c8);
        pcVar4 = *(code **)(pUVar13->_padding_ + 0x170);
        pFVar15 = ::FName::ToString((FName *)local_158,(FString *)local_1c0);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        (*pcVar4)(pUVar13,pwVar18,0,0x34);
        if ((FScriptContainerElement *)local_1c0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1c0._0_8_);
        }
        UObjectBase::AtomicallySetFlags(pUVar13,RF_Transient);
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      (local_1d0->Actors).ArrayNum = 0;
      if ((local_1d0->Actors).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(local_1d0->Actors).AllocatorInstance,0,&(local_1d0->Actors).ArrayMax);
      }
      (pUVar5->ActorsForGC).ArrayNum = 0;
      if ((pUVar5->ActorsForGC).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(pUVar5->ActorsForGC).AllocatorInstance,0,&(pUVar5->ActorsForGC).ArrayMax)
        ;
      }
      (pUVar5->ActorCluster).field0_0x0.DebugPtr = (ULevelActorContainer *)0x0;
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
}

// PrepareStreamedOutLevelsForGC @ 147ed2cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FLevelStreamingGCHelper::PrepareStreamedOutLevelsForGC(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ULevel *pUVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId114,"FLevelStreamingGCHelper::PrepareStreamedOutLevelsForGC"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId114);
  }
  uVar5 = 0;
  if (0 < LevelsPendingUnload.ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < LevelsPendingUnload.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = (ULevel *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (LevelsPendingUnload.AllocatorInstance.Data +
                                   (longlong)(int)uVar5 * 8));
      PrepareStreamedOutLevelForGC(pUVar4);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < LevelsPendingUnload.ArrayNum);
  }
  LevelsPendingUnload.ArrayNum = 0;
  if (LevelsPendingUnload.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&LevelsPendingUnload.AllocatorInstance,0,&LevelsPendingUnload.ArrayMax);
  }
  NumberOfPreparedStreamedOutLevelsForGC = 0;
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RequestUnload @ 147ed89d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FLevelStreamingGCHelper::RequestUnload(ULevel *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  ULevel *local_res18;
  ULevel *local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FScriptContainerElement *local_68;
  int *piStack_60;
  undefined8 local_58;
  FScriptContainerElement *local_50;
  int *piStack_48;
  int local_40;
  undefined4 uStack_3c;
  
  if ((!PRIVATE_GIsRunningCommandlet) || (bEnabledForCommandlet)) {
    if ((param_1 == (ULevel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
                           ,0x3d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->bIsVisible != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLevel->bIsVisible == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
                           ,0x3e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = ULevelStreaming::ShouldReuseUnloadedButStillAroundLevels(param_1);
    if (bVar6) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res20);
      FVar5 = LevelsPendingUnload.AllocatorInstance;
      pFVar2 = LevelsPendingUnload.AllocatorInstance.Data +
               (longlong)LevelsPendingUnload.ArrayNum * 8;
      for (FVar8 = LevelsPendingUnload.AllocatorInstance; FVar8.Data != pFVar2;
          FVar8.Data = FVar8.Data + 8) {
        bVar6 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                          ((TWeakObjectPtr<ULevel,FWeakObjectPtr> *)FVar8.Data,
                           (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_70);
        if (bVar6) {
          if ((int)((longlong)FVar8.Data - (longlong)FVar5.Data >> 3) != -1) {
            return;
          }
          break;
        }
      }
      if (((LevelsPendingUnload.AllocatorInstance.Data <= &local_70) &&
          (&local_70 <
           (FWeakObjectPtr *)
           (LevelsPendingUnload.AllocatorInstance.Data + (longlong)LevelsPendingUnload.ArrayMax * 8)
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (LevelsPendingUnload.ArrayNum == LevelsPendingUnload.ArrayMax) {
        LevelsPendingUnload.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&LevelsPendingUnload.AllocatorInstance,&LevelsPendingUnload.ArrayMax);
      }
      lVar7 = (longlong)LevelsPendingUnload.ArrayNum;
      LevelsPendingUnload.ArrayNum = LevelsPendingUnload.ArrayNum + 1;
      *(FWeakObjectPtr *)(LevelsPendingUnload.AllocatorInstance.Data + lVar7 * 8) = local_70;
    }
    else {
      pFVar9 = (GEngine->WorldList).Array.AllocatorInstance.Data;
      piVar1 = &(GEngine->WorldList).Array.ArrayNum;
      iVar3 = *piVar1;
      pFVar2 = pFVar9 + (longlong)iVar3 * 8;
      local_58 = CONCAT44(uStack_3c,iVar3);
      piStack_60 = piVar1;
      local_50 = pFVar9;
      piStack_48 = piVar1;
      local_40 = iVar3;
      while( true ) {
        local_68 = pFVar9;
        if (*piVar1 != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar9 == pFVar2) {
          PrepareStreamedOutLevelForGC(param_1);
          return;
        }
        if ((*(longlong *)(*(longlong *)pFVar9 + 0x2c0) != 0) &&
           ((*(byte *)(*(longlong *)(*(longlong *)pFVar9 + 0x2c0) + 0x18b) & 4) != 0)) break;
        pFVar9 = pFVar9 + 8;
      }
      bIsPrepareStreamedOutLevelForGCDelayedToWorldTickEnd = true;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
      local_res18 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res18);
      FVar5 = LevelsPendingUnload.AllocatorInstance;
      pFVar2 = LevelsPendingUnload.AllocatorInstance.Data +
               (longlong)LevelsPendingUnload.ArrayNum * 8;
      for (FVar8 = LevelsPendingUnload.AllocatorInstance; FVar8.Data != pFVar2;
          FVar8.Data = FVar8.Data + 8) {
        bVar6 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                          ((TWeakObjectPtr<ULevel,FWeakObjectPtr> *)FVar8.Data,
                           (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_78);
        if (bVar6) {
          if ((int)((longlong)FVar8.Data - (longlong)FVar5.Data >> 3) != -1) {
            return;
          }
          break;
        }
      }
      if (((LevelsPendingUnload.AllocatorInstance.Data <= &local_78) &&
          (&local_78 <
           (FWeakObjectPtr *)
           (LevelsPendingUnload.AllocatorInstance.Data + (longlong)LevelsPendingUnload.ArrayMax * 8)
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (LevelsPendingUnload.ArrayNum == LevelsPendingUnload.ArrayMax) {
        LevelsPendingUnload.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&LevelsPendingUnload.AllocatorInstance,&LevelsPendingUnload.ArrayMax);
      }
      lVar7 = (longlong)LevelsPendingUnload.ArrayNum;
      LevelsPendingUnload.ArrayNum = LevelsPendingUnload.ArrayNum + 1;
      *(FWeakObjectPtr *)(LevelsPendingUnload.AllocatorInstance.Data + lVar7 * 8) = local_78;
    }
  }
  return;
}

// TrashPackage @ 147ee29b0

void __cdecl FLevelStreamingGCHelper::TrashPackage(UPackage *param_1)

{
  code *pcVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  EUniqueObjectNameOptions local_res8 [2];
  FName local_res10;
  undefined4 uVar6;
  FString local_18;
  
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res8[0] = *(EUniqueObjectNameOptions *)CONCAT44(extraout_var,FVar2.Value);
  local_res8[1] = 0;
  FVar3 = (FName)Z_Construct_UClass_UPackage_NoRegister();
  uVar6 = 0;
  MakeUniqueObjectName((UObject *)&local_res10,(UClass *)0x0,FVar3,local_res8[0]);
  pcVar1 = *(code **)(param_1->_padding_ + 0x170);
  pFVar4 = ::FName::ToString(&local_res10,&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(param_1,pwVar5,0,0x34,uVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Transient);
  return;
}

// VerifyLevelsGotRemovedByGC @ 147ee67c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FLevelStreamingGCHelper::VerifyLevelsGotRemovedByGC(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  FUObjectItem *pFVar8;
  UClass *pUVar9;
  UPackage *pUVar10;
  FUObjectItem *pFVar11;
  ForElementType<FSetElementId> FVar12;
  UObjectBase *pUVar13;
  UObjectBase *pUVar14;
  int iVar15;
  UObjectBase *pUVar16;
  undefined1 auStackY_198 [32];
  TIterator local_168;
  UClass *local_150;
  EObjectFlags local_148;
  EInternalObjectFlags local_144;
  FString local_140;
  FString local_130;
  FReferenceChainSearch local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (LevelPackageNames.Elements._8_4_ != LevelPackageNames.Elements._52_4_) {
    pUVar14 = (UObjectBase *)0x0;
    if (GLevelStreamingForceVerifyLevelsGotRemovedByGC != 0) {
      iVar15 = 0;
      bVar4 = (*IsAsyncLoading)();
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      local_168.Index = -1;
      local_168.Array = &GUObjectArray;
      local_168.CurrentObject = (FUObjectItem *)0x0;
      FUObjectArray::TIterator::Advance(&local_168);
      local_148 = RF_NoFlags;
      local_150 = pUVar7;
      local_144 = UE::GetAsyncLoadingInternalFlagsExclusion();
      local_144 = local_144 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
      if ((pUVar7 == (UClass *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Class",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                             ,0x70,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&(local_168.Array)->ObjObjectsCritical);
      do {
        pFVar11 = local_168.CurrentObject;
        pUVar13 = pUVar14;
        if (local_168.CurrentObject != (FUObjectItem *)0x0) {
          pUVar13 = ((local_168.CurrentObject)->field1_0x8).Object;
        }
        pUVar16 = pUVar14;
        if (((local_148 & pUVar13->ObjectFlags) == RF_NoFlags) &&
           (pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar13->InternalIndex),
           (local_144 &
           (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
           Borrowed)) {
          pUVar9 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar7 == pUVar9) break;
          pUVar9 = (pUVar13->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar1 = (int)pUVar7->_padding_;
          if ((iVar1 <= (int)pUVar9->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) ==
              &pUVar7->_padding_)) break;
        }
        bVar5 = FUObjectArray::TIterator::Advance(&local_168);
        pUVar7 = local_150;
        pFVar11 = local_168.CurrentObject;
      } while (bVar5);
joined_r0x000147ee6926:
      if (pFVar11 != (FUObjectItem *)0x0) {
        pUVar13 = (pFVar11->field1_0x8).Object;
        pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar13);
        lVar2 = pUVar10->_padding_;
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        if (LevelPackageNames.Elements._8_4_ != LevelPackageNames.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)0x154c57858;
          if (LevelPackageNames.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = LevelPackageNames.Hash.SecondaryData;
          }
          for (iVar15 = *(int *)((longlong)FVar12 +
                                (ulonglong)
                                (LevelPackageNames.HashSize - 1U &
                                (int)((ulonglong)lVar2 >> 0x20) + uVar6) * 4); iVar15 != -1;
              iVar15 = *(int *)(LevelPackageNames.Elements._0_8_ + 8 + (longlong)iVar15 * 0x10)) {
            if (*(longlong *)(LevelPackageNames.Elements._0_8_ + (longlong)iVar15 * 0x10) == lVar2)
            {
              pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
              pUVar7 = (pUVar13->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
              iVar15 = (int)pUVar9->_padding_;
              if (((int)pUVar7->_padding_ < iVar15) ||
                 ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar15 * 8) !=
                  &pUVar9->_padding_)) {
                if ((bVar4) &&
                   (pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar13->InternalIndex),
                   ((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20 & 0xc400000U) != 0)) {
                  if (3 < (byte)LogGarbage._0_1_) {
                    UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)pUVar13,&local_140,(UObject *)0x0,None);
                    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage)
                    ;
                    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_140.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  if (2 < (byte)LogGarbage._0_1_) {
                    UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)pUVar13,&local_130,(UObject *)0x0,None);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage)
                    ;
                    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_130.Data.AllocatorInstance.Data);
                    }
                  }
                  FReferenceChainSearch::FReferenceChainSearch
                            (&local_118,(UObject *)pUVar13,PrintResults|Shortest,Log);
                  pUVar16 = (UObjectBase *)(ulonglong)((int)pUVar16 + 1);
                  FReferenceChainSearch::~FReferenceChainSearch(&local_118);
                }
              }
              break;
            }
          }
        }
LAB_147ee6ac6:
        do {
          do {
            iVar15 = (int)pUVar16;
            bVar5 = FUObjectArray::TIterator::Advance(&local_168);
            pFVar11 = local_168.CurrentObject;
            if (!bVar5) goto joined_r0x000147ee6926;
            pUVar13 = pUVar14;
            if (local_168.CurrentObject != (FUObjectItem *)0x0) {
              pUVar13 = ((local_168.CurrentObject)->field1_0x8).Object;
            }
          } while ((local_148 & pUVar13->ObjectFlags) != RF_NoFlags);
          pUVar7 = Z_Construct_UClass_UObject_NoRegister();
          if (local_150 != pUVar7) {
            pUVar7 = (pUVar13->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
            iVar1 = (int)local_150->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &local_150->_padding_)) goto LAB_147ee6ac6;
          }
          pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar13->InternalIndex);
        } while ((local_144 &
                 (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x000147ee6926;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_168.Array)->ObjObjectsCritical);
      if (0 < iVar15) {
        if (1 < (byte)LogGarbage._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
        }
        if ((GLevelStreamingForceVerifyLevelsGotRemovedByGC == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("GLevelStreamingForceVerifyLevelsGotRemovedByGC",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreamingGCHelper.cpp"
                               ,0xf8,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    bVar4 = 1 < LevelPackageNames.HashSize;
    if (!bVar4) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&LevelPackageNames);
    }
    LevelPackageNames.Elements._8_4_ = 0;
    if (LevelPackageNames.Elements._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&LevelPackageNames,0,
                 (int *)&LevelPackageNames.Elements.field_0xc);
    }
    LevelPackageNames.Elements._52_4_ = 0;
    LevelPackageNames.Elements._40_4_ = 0;
    LevelPackageNames.Elements._48_4_ = 0xffffffff;
    if (0x80 < (uint)LevelPackageNames.Elements._44_4_) {
      LevelPackageNames.Elements._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&LevelPackageNames.Elements.field_0x10,0);
    }
    if (bVar4) {
      LevelPackageNames.HashSize = 1;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&LevelPackageNames);
    }
  }
  return;
}

