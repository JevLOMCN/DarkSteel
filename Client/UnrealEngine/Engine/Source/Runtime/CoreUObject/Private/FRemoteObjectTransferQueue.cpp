// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// NameForDebug @ 142197370

wchar_t * __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::NameForDebug
          (FRemoteObjectTransferQueue *this)

{
  return L"RemoteObjectTransferQueue";
}

// BeginRequest @ 142197380

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::BeginRequest
          (FRemoteObjectTransferQueue *this)

{
  return;
}

// TickSubsystem @ 142197390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem
          (FRemoteObjectTransferQueue *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FRemoteObjectId_u_0_s_0 *pFVar4;
  FRemoteObjectId_u_0 FVar5;
  FRemoteObjectId_u_0_s_0 FVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  ulong64 uVar9;
  code *pcVar10;
  FName FVar11;
  FRemoteObjectTransferQueue *this_00;
  undefined1 *puVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  UObject *pUVar17;
  FString *pFVar18;
  FRemoteObjectStub *pFVar19;
  byte bVar20;
  longlong *plVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  wchar_t *pwVar24;
  uint uVar25;
  FRemoteServerId FVar26;
  FRemoteServerId FVar27;
  uint uVar28;
  ulonglong uVar29;
  FRemoteObjectId_u_0 *pFVar30;
  longlong lVar31;
  ulonglong uVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  FRemoteObjectId_u_0 *pFVar34;
  uint *puVar35;
  uint uVar36;
  FRemoteServerId FVar37;
  FRemoteObjectId_u_0_s_0 *pFVar38;
  FUObjectMigrationContext *pFVar39;
  longlong lVar40;
  undefined1 auStackY_678 [32];
  undefined1 local_638;
  undefined1 local_637;
  undefined1 local_636 [2];
  uint local_634;
  FRemoteServerId local_630 [2];
  longlong local_628;
  FRemoteObjectTransferQueue *local_620;
  longlong *local_618;
  undefined8 uStack_610;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_608;
  uint uStack_600;
  uint uStack_5fc;
  int iStack_5f8;
  undefined4 uStack_5f4;
  int local_5f0;
  undefined4 uStack_5ec;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_5e8;
  FRemoteObjectId_u_0 *local_5d8;
  FRemoteObjectId_u_0 local_5d0;
  FRemoteObjectId_u_0 local_5c8;
  FRemoteObjectId_u_0 local_5c0;
  undefined4 local_5b8;
  undefined8 local_5b4;
  undefined4 local_5ac;
  undefined1 local_5a8;
  undefined4 local_5a4;
  FRemoteObjectId_u_0 *local_598;
  FRemoteObjectData local_590;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_548;
  FString local_528;
  FRemoteObjectId_u_0 local_518;
  uint local_510;
  uint local_50c;
  uint local_508;
  undefined4 local_504;
  undefined1 local_500;
  undefined4 local_4fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f8;
  FRemoteObjectData local_4d8;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  FName local_484;
  UObject *local_478;
  FName local_470;
  FRemoteObjectId_u_0_s_0 *local_468;
  FString local_460;
  FRemoteObjectId_u_0 local_450;
  FName local_448;
  FUObjectMigrationContext *local_440;
  undefined1 *local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_430;
  undefined8 uStack_410;
  longlong *local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_400;
  undefined8 uStack_3e0;
  longlong *local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d0;
  undefined8 uStack_3b0;
  FString local_3a8;
  FDestructionSentinel local_398;
  FDestructionSentinel local_380;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FReadAccessScope local_218;
  FReadAccessScope local_200;
  FReadAccessScope local_1e8;
  FReadAccessScope local_1d0;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  FReadAccessScope local_188;
  FStringFormatArg local_168;
  FStringFormatArg local_148;
  undefined8 local_128;
  longlong lStack_120;
  undefined4 local_fc;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_678;
  uVar25 = 0;
  local_634 = 0;
  if (0 < (this->PendingObjectMigrationRequests).ArrayNum) {
    local_628 = 0;
    local_620 = this;
    do {
      lVar31 = local_628;
      uVar36 = 0;
      if ((int)uVar25 < (this->PendingObjectMigrationRequests).ArrayNum) {
        uVar36 = ~uVar25 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar30 = (FRemoteObjectId_u_0 *)
                ((this->PendingObjectMigrationRequests).AllocatorInstance.Data + lVar31 * 0x18);
      local_5d8 = pFVar30;
      if (6 < (byte)LogRemoteObject._0_1_) {
        FRemoteObjectId::ToString((FRemoteObjectId *)pFVar30,&local_2d8,Default);
        Logging::Private::BasicLog<7>
                  (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
      }
      pUVar17 = StaticFindObjectFastInternal((FRemoteObjectId)*pFVar30,RF_NoFlags,Borrowed);
      local_478 = pUVar17;
      if (pUVar17 == (UObject *)0x0) {
        if (6 < (byte)LogRemoteObject._0_1_) {
          FRemoteObjectId::ToString((FRemoteObjectId *)pFVar30,&local_2e8,Default);
          Logging::Private::BasicLog<7>
                    (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                      ::__l208::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
        }
        pFVar19 = RemoteObject::Private::FRemoteObjectMaps::FindRemoteObjectStub
                            (RemoteObject::Private::ObjectMaps,(FRemoteObjectId)*pFVar30);
        this_00 = local_620;
        if (pFVar19 == (FRemoteObjectStub *)0x0) {
          FVar26.Id = SUB84(pFVar30->Id,4) >> 0x16;
        }
        else {
          FVar26.Id = (pFVar19->ResidentServerId).Id;
        }
        uVar36 = 0;
        if (0 < *(int *)(pFVar30 + 2)) {
          lVar40 = 0;
          do {
            uVar25 = 0;
            if ((int)uVar36 < *(int *)(pFVar30 + 2)) {
              uVar25 = ~uVar36 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar34 = (FRemoteObjectId_u_0 *)(pFVar30[1].Id + lVar40);
            FVar27.Id = *(uint *)(pFVar34 + 1);
            FRemoteServerId::VerifyComparableServerIds(FVar26.Id,FVar27.Id);
            FVar37.Id = FVar26.Id;
            if (FVar26.Id == 0x3fd) {
              FVar37 = FRemoteServerId::GlobalServerId;
            }
            if (FVar27.Id == 0x3fd) {
              FVar27 = FRemoteServerId::GlobalServerId;
            }
            if (FVar37.Id == FVar27.Id) {
              uVar9 = pFVar34->Id;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &RemoteObjectDeniedTransferDelegate,&local_1a0);
              plVar22 = (longlong *)0x0;
              if (RemoteObjectDeniedTransferDelegate._16_4_ != 0) {
                plVar22 = (longlong *)RemoteObjectDeniedTransferDelegate._8_8_;
              }
              (**(code **)(*plVar22 + 0x60))(plVar22,uVar9);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_1a0);
            }
            else {
              SendRemoteObjectRequest
                        (this_00,(FRemoteWorkPriority)*(ulong64 *)&pFVar34[2]._s_0,
                         (FRemoteObjectId)*(FRemoteObjectId_u_0 *)&pFVar34->_s_0,FVar26,
                         (FRemoteServerId)*(uint *)(pFVar34 + 1));
            }
            uVar36 = uVar36 + 1;
            lVar40 = lVar40 + 0x18;
            lVar31 = local_628;
            this = this_00;
            uVar25 = local_634;
          } while ((int)uVar36 < *(int *)(pFVar30 + 2));
        }
        uVar36 = 0;
        if ((int)uVar25 < (this->PendingObjectMigrationRequests).ArrayNum) {
          uVar36 = ~uVar25 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar7 = (this->PendingObjectMigrationRequests).AllocatorInstance.Data;
        pFVar3 = pFVar7 + lVar31 * 0x18;
        pvVar8 = *(void **)(pFVar7 + lVar31 * 0x18 + 8);
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        iVar16 = (this->PendingObjectMigrationRequests).ArrayNum + ~uVar25;
        if (iVar16 != 0) {
          memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar16 * 0x18);
        }
        piVar1 = &(this->PendingObjectMigrationRequests).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else {
        if (6 < (byte)LogRemoteObject._0_1_) {
          FRemoteObjectId::ToString((FRemoteObjectId *)pFVar30,&local_2c8,Default);
          Logging::Private::BasicLog<7>
                    (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(int *)(pFVar30 + 2) < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar4 = (FRemoteObjectId_u_0_s_0 *)pFVar30[1].Id;
        uVar25 = 1;
        local_468 = pFVar4;
        if (1 < *(int *)(pFVar30 + 2)) {
          lVar31 = 0x18;
          do {
            uVar36 = 0;
            if ((int)uVar25 < *(int *)(pFVar30 + 2)) {
              uVar36 = ~uVar25 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((ulonglong)*(FRemoteObjectId_u_0_s_0 *)(pFVar30[1].Id + 0x10 + lVar31) <
                 (ulonglong)pFVar4[2]) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsHigherPriority(Request->RequestPriority, HighestPriorityRequest->RequestPriority)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                                    ,0x95,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar25 = uVar25 + 1;
            lVar31 = lVar31 + 0x18;
          } while ((int)uVar25 < *(int *)(pFVar30 + 2));
        }
        if (6 < (byte)LogRemoteObject._0_1_) {
          FRemoteWorkPriority::ToString((FRemoteWorkPriority *)(pFVar4 + 2),&local_2a8);
          FRemoteObjectId::ToString((FRemoteObjectId *)pFVar30,&local_2b8,Default);
          Logging::Private::BasicLog<7>
                    (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                      ::__l53::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
        }
        iVar16 = (int)this->_padding_;
        uVar29 = 0;
        local_5d0.Id = 0;
        uVar32 = uVar29;
        if (0 < iVar16) {
          do {
            uVar36 = (uint)uVar32;
            uVar25 = 0;
            if ((int)uVar36 < iVar16) {
              uVar25 = ~uVar36 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar2 = (undefined8 *)(this->_padding_ + uVar29);
            local_128 = *puVar2;
            lStack_120 = puVar2[1];
            if ((ulonglong)*(FRemoteObjectId_u_0_s_0 *)(lStack_120 + 8) < (ulonglong)pFVar4[2]) {
              iVar16 = 0;
              if (FRemoteServerId::GlobalServerId.Id == 0) {
                iVar16 = 0x3fd;
              }
              iVar16 = TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FRemoteObjectId>
                                 ((TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator>
                                   *)(lStack_120 + 0xb0),iVar16 * 0x5c00000,
                                  (FRemoteObjectId *)&local_5d0._s_0);
              if (iVar16 != -1) {
                if (6 < (byte)LogRemoteObject._0_1_) {
                  FRemoteObjectId::ToString((FRemoteObjectId *)pFVar30,&local_298,Default);
                  Logging::Private::BasicLog<7>
                            (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                              ::__l188::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
                  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_298.Data.AllocatorInstance.Data);
                  }
                }
                local_634 = local_634 + 1;
                local_628 = local_628 + 1;
                uVar25 = local_634;
                goto LAB_1421990a3;
              }
            }
            iVar16 = (int)this->_padding_;
            uVar32 = (ulonglong)(uVar36 + 1);
            uVar29 = uVar29 + 0x10;
          } while ((int)(uVar36 + 1) < iVar16);
        }
        local_484.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
        local_484.Number = *(uint *)&pUVar17->field_0x1c;
        ::FName::ToString(&local_484,&local_2f8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
             ::__l81::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                                 ::__l81::_thread_safe_static_guard_0__),
           `public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
           ::__l81::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                          ::__l81::SendObjectRegionName,L"ObjectTransferQueue_SendObject");
          _Init_thread_footer(&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                               ::__l81::_thread_safe_static_guard_0__);
        }
        FVar11 = `public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                 ::__l81::SendObjectRegionName;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &RemoteExecutor::OnRegionBeginDelegate,&local_188);
        if ((RemoteExecutor::OnRegionBeginDelegate._16_4_ != 0) &&
           (RemoteExecutor::OnRegionBeginDelegate._8_8_ != 0)) {
          (**(code **)(*(longlong *)RemoteExecutor::OnRegionBeginDelegate._8_8_ + 0x68))
                    (RemoteExecutor::OnRegionBeginDelegate._8_8_,FVar11);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_188);
        if (6 < (byte)LogRemoteObject._0_1_) {
          FRemoteWorkPriority::ToString((FRemoteWorkPriority *)(pFVar4 + 2),&local_268);
          FRemoteServerId::ToString((FRemoteServerId *)(pFVar4 + 1),&local_278);
          FRemoteObjectId::ToString((FRemoteObjectId *)pFVar4,&local_288,Default);
          Logging::Private::BasicLog<7>
                    (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                      ::__l82::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
        }
        pFVar39 = FUObjectMigrationContext::CurrentMigrationContext;
        local_5c0._s_0 = *pFVar4;
        local_5b8 = *(undefined4 *)(pFVar4 + 1);
        local_5b4 = 0;
        local_5ac = 0;
        local_5a8 = 1;
        local_5a4 = 0;
        local_440 = FUObjectMigrationContext::CurrentMigrationContext;
        bVar13 = IsInGameThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                                ,0x71,L"%hs: We expect migrations to only occur on the GameThread.")
           , bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FUObjectMigrationContext::CurrentMigrationContext = (FUObjectMigrationContext *)&local_5c0;
        local_d8._0_8_ = 0;
        local_d8._8_8_ = 0;
        local_b8 = (uint *)0x0;
        local_b0 = 0;
        local_ac = 0x80;
        local_a8 = 0xffffffff;
        local_a4 = 0;
        local_98 = (ForElementType<FSetElementId>)0x0;
        local_90 = 0;
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = 0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        Serialization::SerializeObjectData
                  (&local_4d8,pUVar17,
                   (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_d8,
                   (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88,
                   (FUObjectMigrationContext *)&local_5c0._s_0);
        if (local_d8._8_4_ - local_a4 < 1) {
          FRemoteServerId::ToString((FRemoteServerId *)(pFVar4 + 1),&local_248);
          FRemoteObjectId::ToString((FRemoteObjectId *)pFVar4,&local_258,Default);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("SentObjects.Num() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                              ,0xd0,L"unable to migrate object %s to %s");
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        local_4f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        local_4f8._padding_._0_4_ = 0;
        local_4f8._padding_._4_4_ = 1;
        local_4f8.UnvisitedBitMask = 0xffffffff;
        local_4f8.CurrentBitIndex = 0;
        local_4f8.BaseBitIndex = 0;
        if (local_60 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4f8);
        }
        uVar25 = local_60;
        uStack_610 = CONCAT44(local_4f8._padding_._4_4_,(undefined4)local_4f8._padding_);
        local_618 = (longlong *)local_88;
        uStack_5fc = local_4f8.CurrentBitIndex;
        uStack_600 = local_4f8.UnvisitedBitMask;
        uStack_5f4 = local_4f8._28_4_;
        iStack_5f8 = local_4f8.BaseBitIndex;
        pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        bVar20 = (byte)local_60 & 0x1f;
        local_5f0 = local_88._8_4_ - local_54;
        local_548._padding_._0_4_ = (int)local_60 >> 5;
        local_548._padding_._4_4_ = 1 << bVar20;
        local_548.UnvisitedBitMask = -1 << bVar20;
        pTStack_608 = local_4f8.Array;
        local_548.BaseBitIndex = local_60 & 0xffffffe0;
        local_548.CurrentBitIndex = local_60;
        uStack_410 = CONCAT44(uStack_5ec,local_5f0);
        TStack_430.Array = local_4f8.Array;
        local_548.Array = pTVar33;
        local_438 = (undefined1 *)local_618;
        TStack_430._padding_ = uStack_610;
        TStack_430._16_8_ = _uStack_600;
        TStack_430._24_8_ = _iStack_5f8;
        if (((int)local_60 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar25 != local_60) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_548);
          pTVar33 = local_548.Array;
          uVar25 = local_548.CurrentBitIndex;
        }
        while( true ) {
          puVar12 = local_438;
          if (*(int *)(local_438 + 8) - *(int *)(local_438 + 0x34) != (int)uStack_410) {
            local_638 = 0;
            `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_638);
          }
          uVar36 = local_b0;
          if (((TStack_430.CurrentBitIndex == uVar25) && (TStack_430.Array == pTVar33)) &&
             (puVar12 == local_88)) break;
          TStack_430.UnvisitedBitMask = TStack_430.UnvisitedBitMask & ~TStack_430._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_430);
        }
        iVar16 = 0;
        iStack_5f8 = 0;
        uVar25 = 1;
        uStack_5fc = 0;
        if (local_b0 != 0) {
          puVar35 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar35 = local_b8;
          }
          uVar28 = *puVar35;
          while (uVar28 == 0) {
            lVar31 = (longlong)iVar16;
            iStack_5f8 = iStack_5f8 + 0x20;
            iVar16 = iVar16 + 1;
            uStack_5fc = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_142197d23;
            uVar28 = puVar35[lVar31 + 1];
          }
          uVar25 = -uVar28 & uVar28;
          uVar32 = (ulonglong)uVar25 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_498 = (int)lVar31;
          uStack_5fc = iStack_5f8 + -1 + local_498;
          if ((int)local_b0 < (int)uStack_5fc) {
            uStack_5fc = local_b0;
          }
        }
LAB_142197d23:
        local_618 = (longlong *)local_d8;
        pTStack_608 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        uVar28 = local_b0 & 0xffffffe0;
        local_5f0 = local_d8._8_4_ - local_a4;
        uStack_610 = CONCAT44(uVar25,iVar16);
        uStack_600 = 0xffffffff;
        uStack_5f4 = local_fc;
        TStack_400._padding_ = uStack_610;
        iVar16 = (int)local_b0 >> 5;
        uStack_3e0 = CONCAT44(uStack_5ec,local_5f0);
        bVar20 = (byte)local_b0;
        TStack_400.UnvisitedBitMask = 0xffffffff;
        TStack_400.CurrentBitIndex = uStack_5fc;
        TStack_400.BaseBitIndex = iStack_5f8;
        TStack_400._28_4_ = local_fc;
        local_408 = local_618;
        TStack_400.Array = pTStack_608;
        if (((int)local_b0 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar36 != local_b0) {
          puVar35 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar35 = local_b8;
          }
          uVar25 = -1 << (bVar20 & 0x1f) & puVar35[iVar16];
          while (uVar25 == 0) {
            lVar31 = (longlong)iVar16;
            uVar28 = uVar28 + 0x20;
            iVar16 = iVar16 + 1;
            uVar36 = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_142197e53;
            uVar25 = puVar35[lVar31 + 1];
          }
          uVar32 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar31 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_494 = (int)lVar31;
          uVar36 = (uVar28 - 1) + local_494;
          if ((int)local_b0 < (int)uVar36) {
            uVar36 = local_b0;
          }
        }
LAB_142197e53:
        bVar13 = false;
        while( true ) {
          plVar22 = local_408;
          if ((int)local_408[1] - *(int *)((longlong)local_408 + 0x34) != (int)uStack_3e0) {
            local_637 = 0;
            `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_637);
          }
          if (((TStack_400.CurrentBitIndex == uVar36) &&
              (TStack_400.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
             (plVar22 == (longlong *)local_d8)) break;
          local_450.Id = 0;
          lVar31 = *(longlong *)(*plVar22 + (longlong)TStack_400.CurrentBitIndex * 0x10);
          if (6 < (byte)LogRemoteObject._0_1_) {
            if (lVar31 == 0) {
              ::FString::FString(&local_528,L"None");
            }
            else {
              local_448 = *(FName *)(lVar31 + 0x18);
              ::FName::ToString(&local_448,&local_528);
            }
            FRemoteObjectId::ToString((FRemoteObjectId *)&local_450._s_0,&local_228,Default);
            FRemoteObjectId::ToString((FRemoteObjectId *)pFVar4,&local_238,Default);
            Logging::Private::BasicLog<7>
                      (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                        ::__l117::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_528.Data.AllocatorInstance.Data);
            }
          }
          TStack_400.UnvisitedBitMask = TStack_400.UnvisitedBitMask & ~TStack_400._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_400);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &OnObjectDataSentDelegate,(FWriteAccessScope *)&local_398);
        OnObjectDataSentDelegate._28_4_ = OnObjectDataSentDelegate._28_4_ + 1;
        uVar25 = OnObjectDataSentDelegate._16_4_ - 1;
        if (-1 < (int)uVar25) {
          lVar31 = (longlong)(int)uVar25 << 4;
          do {
            uVar36 = 0;
            if ((int)uVar25 < (int)OnObjectDataSentDelegate._16_4_) {
              uVar36 = ~uVar25 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((*(int *)(OnObjectDataSentDelegate._8_8_ + 8 + lVar31) == 0) ||
                (plVar22 = *(longlong **)(OnObjectDataSentDelegate._8_8_ + lVar31),
                plVar22 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar22 + 0x68))(plVar22,&local_4d8,&local_5c0),
               cVar15 == '\0')) {
              bVar13 = true;
            }
            lVar31 = lVar31 + -0x10;
            uVar25 = uVar25 - 1;
          } while (-1 < (int)uVar25);
        }
        plVar22 = (longlong *)0x0;
        OnObjectDataSentDelegate._28_4_ = OnObjectDataSentDelegate._28_4_ + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnObjectDataSentDelegate
                     ,false);
        }
        if (local_398.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
        }
        FVar23.Data = local_4d8.Tables.Names.AllocatorInstance.Data;
        local_598 = &local_5c0;
        local_590.Tables.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = local_4d8.Tables.Names.ArrayNum;
        local_590.Tables.Names.ArrayNum = iVar16;
        if (iVar16 == 0) {
          local_590.Tables.Names.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar16,0,(ForAnyElementType *)&local_590,iVar16,
                     &local_590.Tables.Names.ArrayMax);
          memcpy(local_590.Tables.Names.AllocatorInstance.Data,FVar23.Data,(longlong)iVar16 << 3);
        }
        FVar23.Data = local_4d8.Tables.RemoteIds.AllocatorInstance.Data;
        local_590.Tables.RemoteIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = local_4d8.Tables.RemoteIds.ArrayNum;
        local_590.Tables.RemoteIds.ArrayNum = iVar16;
        if (iVar16 == 0) {
          local_590.Tables.RemoteIds.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar16,0,&local_590.Tables.RemoteIds.AllocatorInstance,iVar16,
                     &local_590.Tables.RemoteIds.ArrayMax);
          memcpy(local_590.Tables.RemoteIds.AllocatorInstance.Data,FVar23.Data,(longlong)iVar16 << 3
                );
        }
        iVar16 = local_4d8.PathNames.ArrayNum;
        FVar23.Data = local_4d8.PathNames.AllocatorInstance.Data;
        local_590.PathNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_4d8.PathNames.ArrayNum == 0) {
          local_590.PathNames.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,local_4d8.PathNames.ArrayNum,0,&local_590.PathNames.AllocatorInstance,
                     local_4d8.PathNames.ArrayNum,&local_590.PathNames.ArrayMax);
          ConstructItems<FPackedRemoteObjectPathName,FPackedRemoteObjectPathName,int>
                    (local_590.PathNames.AllocatorInstance.Data,
                     (FPackedRemoteObjectPathName *)FVar23.Data,iVar16);
        }
        iVar16 = local_4d8.Bytes.ArrayNum;
        FVar23.Data = local_4d8.Bytes.AllocatorInstance.Data;
        local_590.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_4d8.Bytes.ArrayNum == 0) {
          local_590.Bytes.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_4d8.Bytes.ArrayNum,0,&local_590.Bytes.AllocatorInstance,
                     local_4d8.Bytes.ArrayNum,&local_590.Bytes.ArrayMax);
          ConstructItems<FRemoteObjectBytes,FRemoteObjectBytes,int>
                    (local_590.Bytes.AllocatorInstance.Data,(FRemoteObjectBytes *)FVar23.Data,iVar16
                    );
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &RemoteObjectTransferDelegate,&local_218);
        plVar21 = plVar22;
        if (RemoteObjectTransferDelegate._16_4_ != 0) {
          plVar21 = (longlong *)RemoteObjectTransferDelegate._8_8_;
        }
        (**(code **)(*plVar21 + 0x60))(plVar21,&local_598);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_218);
        RemoteObject::Private::UnsafeToMigrateObjects =
             RemoteObject::Private::UnsafeToMigrateObjects + 1;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnObjectsSentDelegate,
                   (FWriteAccessScope *)&local_380);
        bVar13 = false;
        OnObjectsSentDelegate._28_4_ = OnObjectsSentDelegate._28_4_ + 1;
        uVar25 = OnObjectsSentDelegate._16_4_ - 1;
        if (-1 < (int)uVar25) {
          lVar31 = (longlong)(int)uVar25 << 4;
          bVar13 = false;
          do {
            uVar36 = 0;
            if ((int)uVar25 < (int)OnObjectsSentDelegate._16_4_) {
              uVar36 = ~uVar25 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((*(int *)(OnObjectsSentDelegate._8_8_ + 8 + lVar31) == 0) ||
                (plVar21 = *(longlong **)(OnObjectsSentDelegate._8_8_ + lVar31),
                plVar21 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar21 + 0x68))(plVar21,local_d8,&local_5c0), cVar15 == '\0'
               )) {
              bVar13 = true;
            }
            lVar31 = lVar31 + -0x10;
            uVar25 = uVar25 - 1;
          } while (-1 < (int)uVar25);
        }
        OnObjectsSentDelegate._28_4_ = OnObjectsSentDelegate._28_4_ + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnObjectsSentDelegate,
                     false);
        }
        if (local_380.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_380.Accessor,&local_380);
        }
        uVar25 = local_b0;
        uVar36 = 1;
        plVar21 = plVar22;
        uStack_5fc = 0;
        if (local_b0 != 0) {
          puVar35 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar35 = local_b8;
          }
          uVar28 = *puVar35;
          while (uVar28 == 0) {
            iVar16 = (int)plVar22;
            plVar21 = (longlong *)(ulonglong)((int)plVar21 + 0x20);
            uVar28 = iVar16 + 1;
            plVar22 = (longlong *)(ulonglong)uVar28;
            uStack_5fc = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
            goto LAB_142198423;
            uVar28 = puVar35[(longlong)iVar16 + 1];
          }
          uVar36 = -uVar28 & uVar28;
          uVar32 = (ulonglong)uVar36 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_490 = (int)lVar31;
          uStack_5fc = (int)plVar21 + -1 + local_490;
          if ((int)local_b0 < (int)uStack_5fc) {
            uStack_5fc = local_b0;
          }
        }
LAB_142198423:
        local_618 = (longlong *)local_d8;
        pTStack_608 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        uVar28 = local_b0 & 0xffffffe0;
        local_5f0 = local_d8._8_4_ - local_a4;
        uStack_610 = CONCAT44(uVar36,(int)plVar22);
        uStack_600 = 0xffffffff;
        uStack_5f4 = local_dc;
        iStack_5f8 = (int)plVar21;
        TStack_3d0._padding_ = uStack_610;
        iVar16 = (int)local_b0 >> 5;
        uStack_3b0 = CONCAT44(uStack_5ec,local_5f0);
        bVar20 = (byte)local_b0;
        TStack_3d0.UnvisitedBitMask = 0xffffffff;
        TStack_3d0.CurrentBitIndex = uStack_5fc;
        TStack_3d0.BaseBitIndex = (int)plVar21;
        TStack_3d0._28_4_ = local_dc;
        local_3d8 = local_618;
        TStack_3d0.Array = pTStack_608;
        if (((int)local_b0 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar25 != local_b0) {
          puVar35 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar35 = local_b8;
          }
          uVar25 = -1 << (bVar20 & 0x1f) & puVar35[iVar16];
          while (uVar25 == 0) {
            lVar31 = (longlong)iVar16;
            uVar28 = uVar28 + 0x20;
            iVar16 = iVar16 + 1;
            uVar25 = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_142198553;
            uVar25 = puVar35[lVar31 + 1];
          }
          uVar32 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar31 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_48c = (int)lVar31;
          uVar25 = local_48c + -1 + uVar28;
          if ((int)local_b0 < (int)uVar25) {
            uVar25 = local_b0;
          }
        }
LAB_142198553:
        while( true ) {
          plVar22 = local_3d8;
          if ((int)local_3d8[1] - *(int *)((longlong)local_3d8 + 0x34) != (int)uStack_3b0) {
            local_636[0] = 0;
            `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_636);
          }
          if (((TStack_3d0.CurrentBitIndex == uVar25) &&
              (TStack_3d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
             (plVar22 == (longlong *)local_d8)) break;
          RemoteObject::Private::MarkAsRemote
                    (*(UObject **)(*plVar22 + (longlong)TStack_3d0.CurrentBitIndex * 0x10),
                     (FRemoteServerId)*(uint *)(pFVar4 + 1));
          TStack_3d0.UnvisitedBitMask = TStack_3d0.UnvisitedBitMask & ~TStack_3d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d0);
        }
        RemoteObject::Private::UnsafeToMigrateObjects =
             RemoteObject::Private::UnsafeToMigrateObjects + -1;
        if ((RemoteObject::Private::UnsafeToMigrateObjects < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("UnsafeToMigrateObjects >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                                ,0x1d7,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar25 = 0;
        if (0 < *(int *)(local_5d8 + 2)) {
          lVar31 = 0;
          pFVar30 = local_5d8;
          do {
            uVar36 = 0;
            if ((int)uVar25 < *(int *)(pFVar30 + 2)) {
              uVar36 = ~uVar25 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar4 = local_468;
            pFVar38 = (FRemoteObjectId_u_0_s_0 *)(pFVar30[1].Id + lVar31);
            pFVar39 = FUObjectMigrationContext::CurrentMigrationContext;
            if (pFVar38 != local_468) {
              FVar26.Id = *(uint *)(local_468 + 1);
              FRemoteServerId::VerifyComparableServerIds(*(uint *)(pFVar38 + 1),FVar26.Id);
              FVar27.Id = *(uint *)(pFVar38 + 1);
              if (*(uint *)(pFVar38 + 1) == 0x3fd) {
                FVar27 = FRemoteServerId::GlobalServerId;
              }
              if (FVar26.Id == 0x3fd) {
                FVar26 = FRemoteServerId::GlobalServerId;
              }
              if (FVar27.Id == FVar26.Id) {
                if (6 < (byte)LogRemoteObject._0_1_) {
                  FRemoteServerId::ToString((FRemoteServerId *)(pFVar38 + 1),&local_318);
                  FRemoteObjectId::ToString((FRemoteObjectId *)&pFVar30->_s_0,&local_328,Default);
                  Logging::Private::BasicLog<7>
                            (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                              ::__l168::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
                  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_328.Data.AllocatorInstance.Data);
                  }
                  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_318.Data.AllocatorInstance.Data);
                  }
                }
                FVar6 = *pFVar38;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                           &RemoteObjectDeniedTransferDelegate,&local_1d0);
                plVar22 = (longlong *)0x0;
                if (RemoteObjectDeniedTransferDelegate._16_4_ != 0) {
                  plVar22 = (longlong *)RemoteObjectDeniedTransferDelegate._8_8_;
                }
                (**(code **)(*plVar22 + 0x60))(plVar22,FVar6);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_1d0);
                pFVar39 = FUObjectMigrationContext::CurrentMigrationContext;
              }
              else {
                if (6 < (byte)LogRemoteObject._0_1_) {
                  FRemoteServerId::ToString((FRemoteServerId *)(pFVar38 + 1),&local_358);
                  FRemoteObjectId::ToString((FRemoteObjectId *)&pFVar30->_s_0,&local_368,Default);
                  Logging::Private::BasicLog<7>
                            (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickSubsystem(void)___ptr64'
                              ::__l148::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
                  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_368.Data.AllocatorInstance.Data);
                  }
                  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.Data.AllocatorInstance.Data);
                  }
                }
                FVar37.Id = DatabaseId.Id;
                FVar26.Id = *(uint *)(pFVar4 + 1);
                FVar5.Id = *(ulong64 *)pFVar38;
                FVar27.Id = *(uint *)(pFVar38 + 1);
                FVar6 = pFVar38[2];
                local_630[0].Id = FVar27.Id;
                local_5c8.Id = FVar5.Id;
                FRemoteServerId::VerifyComparableServerIds(FVar26.Id,DatabaseId.Id);
                if (FVar26.Id == 0x3fd) {
                  FVar26 = FRemoteServerId::GlobalServerId;
                }
                if (FVar37.Id == 0x3fd) {
                  FVar37 = FRemoteServerId::GlobalServerId;
                }
                if (FVar26.Id == FVar37.Id) {
                  if (4 < (byte)LogRemoteObject._0_1_) {
                    FRemoteServerId::ToString(local_630,&local_338);
                    FRemoteObjectId::ToString((FRemoteObjectId *)&local_5c8._s_0,&local_348,Default)
                    ;
                    Logging::Private::BasicLog<5>
                              (&`public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::SendRemoteObjectRequest(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId)___ptr64'
                                ::__l15::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
                    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_348.Data.AllocatorInstance.Data);
                    }
                    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_338.Data.AllocatorInstance.Data);
                    }
                  }
                  pFVar39 = FUObjectMigrationContext::CurrentMigrationContext;
                  local_510 = DatabaseId.Id;
                  local_50c = DatabaseId.Id;
                  local_508 = DatabaseId.Id;
                  local_4fc = 0;
                  local_504 = 0;
                  local_500 = 0;
                  local_518.Id = FVar5.Id;
                  bVar13 = IsInGameThread();
                  if ((!bVar13) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsInGameThread()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                                          ,0x71,
                                          L"%hs: We expect migrations to only occur on the GameThread."
                                         ), bVar13)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  FUObjectMigrationContext::CurrentMigrationContext =
                       (FUObjectMigrationContext *)&local_518;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                             &RestoreRemoteObjectDataDelegate,&local_1e8);
                  plVar22 = (longlong *)0x0;
                  if (RestoreRemoteObjectDataDelegate._16_4_ != 0) {
                    plVar22 = (longlong *)RestoreRemoteObjectDataDelegate._8_8_;
                  }
                  (**(code **)(*plVar22 + 0x60))(plVar22,&local_518);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_1e8);
                  if (((FRemoteServerId::GlobalServerId.Id == 0x3fd) && (FVar27.Id - 1 < 0x3fc)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Id1 != (uint32)ERemoteServerIdConstants::Local || Id0 == (uint32)ERemoteServerIdConstants::Invalid || Id0 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                                          ,0xab,
                                          L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: Local)"
                                         ), bVar13)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  FVar26.Id = FVar27.Id;
                  if (FVar27.Id == 0x3fd) {
                    FVar26.Id = FRemoteServerId::GlobalServerId.Id;
                  }
                  if (FVar26.Id != FRemoteServerId::GlobalServerId.Id) {
                    uVar36 = GRemoteExecutor.NextTransactionRequestId + 1;
                    uVar28 = GRemoteExecutor.NextTransactionRequestId & 0x7fffff;
                    GRemoteExecutor.NextTransactionRequestId = uVar36;
                    if ((FRemoteServerId::GlobalServerId.Id == 0x3fd) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                                            ,0x9d,
                                            L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                                           ), bVar13)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    RequestObjectMigration
                              (&GTransferQueue,
                               (FRemoteWorkPriority)
                               (CONCAT44(FRemoteServerId::GlobalServerId.Id,uVar28 + 1000) |
                               0xff000000),(FRemoteObjectId)FVar5,FVar27);
                  }
                  bVar13 = IsInGameThread();
                  pFVar30 = local_5d8;
                  if ((!bVar13) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsInGameThread()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                                          ,0x71,
                                          L"%hs: We expect migrations to only occur on the GameThread."
                                         ), pFVar30 = local_5d8, bVar13)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                else {
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                             &RequestRemoteObjectDelegate,&local_200);
                  plVar22 = (longlong *)0x0;
                  if (RequestRemoteObjectDelegate._16_4_ != 0) {
                    plVar22 = (longlong *)RequestRemoteObjectDelegate._8_8_;
                  }
                  (**(code **)(*plVar22 + 0x60))(plVar22,FVar6);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_200);
                  pFVar30 = local_5d8;
                  pFVar39 = FUObjectMigrationContext::CurrentMigrationContext;
                }
              }
            }
            FUObjectMigrationContext::CurrentMigrationContext = pFVar39;
            uVar25 = uVar25 + 1;
            lVar31 = lVar31 + 0x18;
            pFVar39 = local_440;
          } while ((int)uVar25 < *(int *)(pFVar30 + 2));
        }
        local_470.ComparisonIndex.Value = *(uint *)&local_478->field_0x18;
        local_470.Number = *(uint *)&local_478->field_0x1c;
        ::FName::ToString(&local_470,&local_460);
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_460.Data.ArrayNum != 0) {
          FVar23.Data = local_460.Data.AllocatorInstance.Data;
        }
        FStringFormatArg::FStringFormatArg(&local_168,(wchar_t *)FVar23.Data);
        pFVar18 = FRemoteObjectId::ToString((FRemoteObjectId *)&local_5d0._s_0,&local_308,Default);
        if ((pFVar18->Data).ArrayNum == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
        FStringFormatArg::FStringFormatArg(&local_148,pwVar24);
        local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5e8.ArrayNum = 2;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_5e8.AllocatorInstance,2,&local_5e8.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_5e8.AllocatorInstance.Data,&local_168,2);
        ::FString::FormatImpl(&local_3a8,L"{0} {1}",&local_5e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &RemoteExecutor::OnRegionEndDelegate,&local_1b8);
        if ((RemoteExecutor::OnRegionEndDelegate._16_4_ != 0) &&
           (RemoteExecutor::OnRegionEndDelegate._8_8_ != 0)) {
          (**(code **)(*(longlong *)RemoteExecutor::OnRegionEndDelegate._8_8_ + 0x68))
                    (RemoteExecutor::OnRegionEndDelegate._8_8_,&local_3a8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b8);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_5e8.AllocatorInstance.Data,local_5e8.ArrayNum);
        if ((FStringFormatArg *)local_5e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_5e8.AllocatorInstance.Data);
        }
        if (local_148.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
        this = local_620;
        uVar25 = local_634;
        uVar36 = 0;
        if ((int)local_634 < (local_620->PendingObjectMigrationRequests).ArrayNum) {
          uVar36 = ~local_634 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar7 = (this->PendingObjectMigrationRequests).AllocatorInstance.Data;
        pFVar3 = pFVar7 + local_628 * 0x18;
        pvVar8 = *(void **)(pFVar7 + local_628 * 0x18 + 8);
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        iVar16 = (this->PendingObjectMigrationRequests).ArrayNum + ~uVar25;
        if (iVar16 != 0) {
          memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar16 * 0x18);
        }
        piVar1 = &(this->PendingObjectMigrationRequests).ArrayNum;
        *piVar1 = *piVar1 + -1;
        FRemoteObjectData::~FRemoteObjectData(&local_590);
        DestructItems<FRemoteObjectBytes,int>
                  ((FRemoteObjectBytes *)local_4d8.Bytes.AllocatorInstance.Data,
                   local_4d8.Bytes.ArrayNum);
        if (local_4d8.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Bytes.AllocatorInstance.Data);
        }
        DestructItems<FPackedRemoteObjectPathName,int>
                  ((FPackedRemoteObjectPathName *)local_4d8.PathNames.AllocatorInstance.Data,
                   local_4d8.PathNames.ArrayNum);
        if ((FPackedRemoteObjectPathName *)local_4d8.PathNames.AllocatorInstance.Data !=
            (FPackedRemoteObjectPathName *)0x0) {
          FMemory::Free(local_4d8.PathNames.AllocatorInstance.Data);
        }
        if (local_4d8.Tables.RemoteIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Tables.RemoteIds.AllocatorInstance.Data);
        }
        if (local_4d8.Tables.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Tables.Names.AllocatorInstance.Data);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        local_90 = 0;
        if (local_98 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98);
        }
        TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        bVar13 = IsInGameThread();
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                                ,0x71,L"%hs: We expect migrations to only occur on the GameThread.")
           , bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FUObjectMigrationContext::CurrentMigrationContext = pFVar39;
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
      }
LAB_1421990a3:
    } while ((int)uVar25 < (this->PendingObjectMigrationRequests).ArrayNum);
  }
  return;
}

// TickRequest @ 142199140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickRequest
          (FRemoteObjectTransferQueue *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  FRemoteObjectId *this_00;
  uint uVar12;
  FRemoteObjectId_u_0 *this_01;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint uVar15;
  undefined4 local_res8 [2];
  int local_res10;
  longlong *local_res18;
  FString local_f8;
  FString local_e8;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  iVar13 = 0;
  local_res8[0] = 0;
  bVar4 = false;
  lVar9 = this->_padding_;
  if (*(int *)(lVar9 + 0x110) != *(int *)(lVar9 + 0x13c)) {
    TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator> *)
               (lVar9 + 0x108));
    *(undefined4 *)(lVar9 + 0x110) = 0;
    if (*(int *)(lVar9 + 0x114) < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar9 + 0x108),0,(int *)(lVar9 + 0x114));
    }
    *(undefined4 *)(lVar9 + 0x138) = 0xffffffff;
    *(undefined4 *)(lVar9 + 0x13c) = 0;
    *(undefined4 *)(lVar9 + 0x130) = 0;
  }
  *(undefined8 *)(this->_padding_ + 0x100) = 0;
  if (6 < (byte)LogRemoteObject._0_1_) {
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_f8,*(int *)this->_padding_);
    Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickRequest(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (LogRemoteObject._0_1_ == '\a') {
      lVar9 = this->_padding_;
      local_b8 = 0;
      iVar2 = *(int *)(lVar9 + 0x38);
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar9 + 0x20);
      uStack_cc = 1;
      local_res18 = (longlong *)(lVar9 + 0x10);
      iStack_bc = iVar13;
      if (iVar2 != 0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x30);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x30) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar12 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
        iVar13 = 0;
        while (uVar12 == 0) {
          lVar8 = (longlong)iVar13;
          local_b8 = local_b8 + 0x20;
          iVar13 = iVar13 + 1;
          iStack_bc = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1421992df;
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uStack_cc = -uVar12 & uVar12;
        uVar10 = (ulonglong)uStack_cc * 2 + 1;
        lVar8 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_res10 = (int)lVar8;
        iStack_bc = local_b8 + -1 + local_res10;
        if (iVar2 < iStack_bc) {
          iStack_bc = iVar2;
        }
      }
LAB_1421992df:
      uStack_b4 = local_3c;
      iStack_b0 = *(int *)(lVar9 + 0x18) - *(int *)(lVar9 + 0x44);
      uVar12 = *(uint *)(lVar9 + 0x38);
      uStack_c0 = 0xffffffff;
      TStack_a0._padding_ = CONCAT44(uStack_cc,iVar13);
      uVar15 = uVar12 & 0xffffffe0;
      TStack_a0.CurrentBitIndex = iStack_bc;
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar12 >> 5;
      TStack_a0._28_4_ = local_3c;
      TStack_a0.BaseBitIndex = local_b8;
      uStack_80 = CONCAT44(uStack_ac,iStack_b0);
      local_d8 = local_res18;
      iStack_d0 = iVar13;
      local_c8 = pTVar1;
      local_a8 = local_res18;
      TStack_a0.Array = pTVar1;
      if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(uint *)(lVar9 + 0x38);
      bVar6 = false;
      if (uVar12 != uVar7) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x30);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x30) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = pTVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
        while (bVar6 = bVar4, uVar12 == 0) {
          lVar9 = (longlong)iVar11;
          uVar15 = uVar15 + 0x20;
          iVar11 = iVar11 + 1;
          uVar12 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_1421993db;
          uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uVar10 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar12 = (int)lVar9 + -1 + uVar15;
        if ((int)uVar7 < (int)uVar12) {
          uVar12 = uVar7;
        }
      }
LAB_1421993db:
      while( true ) {
        plVar5 = local_a8;
        if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
          `TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_a0.CurrentBitIndex == uVar12) && (TStack_a0.Array == pTVar1)) &&
           (plVar5 == local_res18)) break;
        this_01 = (FRemoteObjectId_u_0 *)((longlong)TStack_a0.CurrentBitIndex * 0x10 + *plVar5);
        lVar9 = this->_padding_;
        uVar15 = (uint)(this_01->Id >> 0x20);
        uVar7 = uVar15 >> 0x16;
        if (uVar15 >> 0x16 == FRemoteServerId::GlobalServerId.Id) {
          uVar7 = 0x3fd;
        }
        uVar10 = this_01->Id & 0x3ffffffffffffe;
        iVar13 = TSet<TTuple<FRemoteObjectId,FRemoteObjectId>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectId,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FRemoteObjectId>
                           ((TSet<TTuple<FRemoteObjectId,FRemoteObjectId>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectId,0>,FDefaultSetAllocator>
                             *)(lVar9 + 0x60),
                            ((uint)(((ulonglong)uVar7 << 0x36) >> 0x20) | (uint)(uVar10 >> 0x20)) *
                            0x17 + (int)uVar10,(FRemoteObjectId *)&this_01->_s_0);
        if (iVar13 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(lVar9 + 0x60) + (longlong)iVar13 * 0x18;
        }
        this_00 = (FRemoteObjectId *)(lVar9 + 8);
        if (lVar9 == 0) {
          this_00 = (FRemoteObjectId *)0x0;
        }
        if (6 < (byte)LogRemoteObject._0_1_) {
          RemoteObject::Handle::IsRemote((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&this_01->_s_0);
          if (this_00 != (FRemoteObjectId *)0x0) {
            bVar6 = true;
            FRemoteObjectId::ToString(this_00,local_68,Default);
          }
          FRemoteObjectId::ToString((FRemoteObjectId *)&this_01->_s_0,&local_78,Default);
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_e8,*(int *)this->_padding_);
          Logging::Private::BasicLog<7>
                    (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickRequest(void)___ptr64'
                      ::__l28::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if ((bVar6) &&
             (bVar6 = false,
             local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      }
    }
  }
  SendRequests(this);
  return;
}

// TickAbortedRequest @ 142199610

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::TickAbortedRequest
          (FRemoteObjectTransferQueue *this)

{
  long64 lVar1;
  FRemoteObjectId local_res8 [4];
  
  lVar1 = FRemoteObjectId::Compare
                    ((FRemoteObjectId *)(this->_padding_ + 0x100),(FRemoteObjectId)0x0);
  if (lVar1 != 0) {
    TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator>::
    Emplace<FRemoteObjectId_const_&>
              ((TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator> *)
               (this->_padding_ + 0x10),local_res8,(bool *)(this->_padding_ + 0x100));
    SendRequests(this);
    return;
  }
  return;
}

// AreDependenciesSatisfied @ 142199670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::AreDependenciesSatisfied
          (FRemoteObjectTransferQueue *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FString local_a8;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = this->_padding_;
  iStack_90 = 0;
  iVar4 = *(int *)(lVar11 + 0x38);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x20);
  local_78 = 0;
  uStack_8c = 1;
  plVar2 = (longlong *)(lVar11 + 0x10);
  iStack_7c = 0;
  if (iVar4 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar14 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14219971d;
      uVar14 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14219971d:
  iStack_70 = *(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x44);
  uVar14 = *(uint *)(lVar11 + 0x38);
  uStack_80 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = plVar2;
  local_88 = pTVar1;
  iStack_74 = iStack_7c;
  local_68 = plVar2;
  TStack_60.Array = pTVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar5 = *(uint *)(lVar11 + 0x38);
  if (uVar14 != uVar5) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142199820;
      uVar14 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_142199820:
  while( true ) {
    plVar7 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) && (TStack_60.Array == pTVar1)) && (plVar7 == plVar2)
       ) break;
    bVar8 = RemoteObject::Handle::IsRemote
                      ((FRemoteObjectId)
                       *(FRemoteObjectId_u_0 *)
                        &((FRemoteObjectId_u_0 *)
                         ((longlong)TStack_60.CurrentBitIndex * 0x10 + *plVar7))->_s_0);
    if (bVar8) {
      return false;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (6 < (byte)LogRemoteObject._0_1_) {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_a8,*(int *)this->_padding_);
    Logging::Private::BasicLog<7>
              (&`public:_virtual_bool___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::AreDependenciesSatisfied(void)const___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// BeginMultiServerCommit @ 142199900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::BeginMultiServerCommit
          (FRemoteObjectTransferQueue *this,
          TArray<FRemoteServerId,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  FRemoteObjectId_u_0_s_0 FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FRemoteServerId FVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UObject *pUVar13;
  byte bVar14;
  longlong lVar15;
  FRemoteServerId FVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  int iVar22;
  undefined1 local_res18 [8];
  uint local_res20;
  FRemoteServerId local_188;
  FRemoteServerId local_184;
  UObject *local_180;
  int local_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_170;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  FRemoteObjectId_u_0 local_158;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  longlong *local_148;
  undefined8 uStack_140;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  UObject *local_110;
  longlong *local_108;
  FName local_100;
  FRemoteObjectId_u_0 local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveRequest",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                          ,0x1d8,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->bInMultiServerCommit != false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bInMultiServerCommit",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                          ,0x1d9,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->bInMultiServerCommit = true;
  if ((*(int *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x8 !=
       *(int *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x34) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MultiServerCommitObjectsToReturn.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                          ,0x1dc,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x8 !=
       *(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x34) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MultiServerCommitSentObjects.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                          ,0x1dd,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x8 !=
       *(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x34) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MultiServerCommitReferencedObjects.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                          ,0x1de,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (6 < (byte)LogRemoteObject._0_1_) {
    Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::BeginMultiServerCommit(TArray<FRemoteServerId,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l38::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
  }
  lVar4 = this->_padding_;
  iVar20 = 0;
  local_128._0_4_ = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x118);
  iVar12 = *(int *)(lVar4 + 0x130);
  local_148 = (longlong *)(lVar4 + 0x108);
  uStack_130._4_4_ = 0;
  uVar11 = 1;
  if (iVar12 != 0) {
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x128);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x128) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar15 = (longlong)iVar20;
      local_128._0_4_ = (int)local_128 + 0x20;
      iVar20 = iVar20 + 1;
      uStack_130._4_4_ = iVar12;
      uVar11 = 1;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_142199ade;
      uVar11 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar11 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_118 = (int)lVar15;
    uStack_130._4_4_ = (int)local_128 + -1 + local_118;
    if (iVar12 < uStack_130._4_4_) {
      uStack_130._4_4_ = iVar12;
    }
  }
LAB_142199ade:
  iStack_120 = *(int *)(lVar4 + 0x110) - *(int *)(lVar4 + 0x13c);
  uVar3 = *(uint *)(lVar4 + 0x130);
  bVar14 = (byte)uVar3 & 0x1f;
  uStack_174 = 1 << bVar14;
  uVar18 = uVar3 & 0xffffffe0;
  iVar22 = (int)uVar3 >> 5;
  uVar17 = -1 << bVar14;
  uStack_140 = CONCAT44(uVar11,iVar20);
  uStack_130._0_4_ = 0xffffffff;
  local_128._4_4_ = local_3c;
  TStack_c0._padding_ = uStack_140;
  uStack_a0 = CONCAT44(uStack_11c,iStack_120);
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_130._4_4_;
  TStack_c0.BaseBitIndex = (int)local_128;
  TStack_c0._28_4_ = local_3c;
  local_178 = iVar22;
  pTStack_170 = pTVar1;
  local_168 = uVar17;
  uStack_164 = uVar3;
  uStack_160 = uVar18;
  local_108 = local_148;
  local_c8 = local_148;
  TStack_c0.Array = pTVar1;
  if ((((int)uVar3 < 0) || (iVar12 < (int)uVar3)) &&
     (local_138 = pTVar1,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)(lVar4 + 0x130);
  if (uVar3 != uVar11) {
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x128);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x128) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = pTVar1;
    }
    uVar17 = uVar17 & *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
    while (uVar17 == 0) {
      uStack_160 = uVar18 + 0x20;
      local_178 = iVar22 + 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < local_178)
      goto LAB_142199c1d;
      uVar17 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar22 * 4 + 4);
      local_168 = 0xffffffff;
      uVar18 = uStack_160;
      iVar22 = local_178;
    }
    uStack_174 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_174 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_114 = (int)lVar4;
    uStack_164 = local_114 + -1 + uVar18;
    if ((int)uVar11 < (int)uStack_164) {
LAB_142199c1d:
      uStack_164 = uVar11;
    }
  }
  uStack_140 = CONCAT44(uStack_174,local_178);
  uStack_130 = CONCAT44(uStack_164,local_168);
  local_128 = CONCAT44(uStack_15c,uStack_160);
  local_138 = pTStack_170;
  local_150 = pTStack_170;
  local_res20 = uStack_164;
  uVar11 = uStack_164;
  do {
    plVar9 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_c0.CurrentBitIndex == uVar11) && (TStack_c0.Array == local_150)) &&
       (plVar9 == local_108)) {
      return;
    }
    FVar5 = ((FRemoteObjectId_u_0 *)(*plVar9 + (longlong)TStack_c0.CurrentBitIndex * 0x10))->_s_0;
    local_158._s_0 = FVar5;
    if ((&((FRemoteObjectId_u_0 *)(*plVar9 + (longlong)TStack_c0.CurrentBitIndex * 0x10))->_s_0)->
        ServerId != 0x3fe) {
      bVar10 = RemoteObject::Handle::IsRemote((FRemoteObjectId)FVar5);
      if ((bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Handle::IsRemote(UsedObjectId)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                              ,0x1eb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar13 = StaticFindObjectFastInternal((FRemoteObjectId)FVar5,RF_NoFlags,Borrowed);
      if ((pUVar13 == (UObject *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("UsedObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                              ,0x1ee,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_184.Id = 0;
      local_180 = pUVar13;
      if ((pUVar13 == (UObject *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("RootObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                              ,0x1f2,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_f8.Id = 0;
      local_188.Id = 0;
      uVar11 = local_res20;
      if (FRemoteServerId::GlobalServerId.Id != 0) {
        if (6 < (byte)LogRemoteObject._0_1_) {
          FRemoteServerId::ToString(&local_188,local_68);
          local_100.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
          local_100.Number = *(uint *)&pUVar13->field_0x1c;
          ::FName::ToString(&local_100,&local_d8);
          FRemoteObjectId::ToString((FRemoteObjectId *)&local_f8._s_0,&local_78,Default);
          FRemoteServerId::ToString(&local_184,&local_88);
          local_f0.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
          local_f0.Number = *(uint *)&pUVar13->field_0x1c;
          ::FName::ToString(&local_f0,&local_e8);
          FRemoteObjectId::ToString((FRemoteObjectId *)&local_158._s_0,&local_98,Default);
          Logging::Private::BasicLog<7>
                    (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::BeginMultiServerCommit(TArray<FRemoteServerId,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                      ::__l97::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
        TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
        Emplace<UObject_*_const_&>
                  (&this->MultiServerCommitObjectsToReturn,&local_110,(bool *)&local_180);
        pFVar6 = (param_1->AllocatorInstance).Data;
        iVar12 = param_1->ArrayNum;
        FVar16.Id = local_188.Id;
        for (pFVar19 = pFVar6; local_188.Id = FVar16.Id, pFVar19 != pFVar6 + (longlong)iVar12 * 4;
            pFVar19 = pFVar19 + 4) {
          if (FRemoteServerId::GlobalServerId.Id == 0x3fd) {
            if (*(uint *)pFVar19 == 0x3fd) {
              if (FVar16.Id != 0) {
                if (0x3fc < FVar16.Id) goto LAB_142199f6a;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Id0 != (uint32)ERemoteServerIdConstants::Local || Id1 == (uint32)ERemoteServerIdConstants::Invalid || Id1 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                                    ,0xa9,
                                    L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: %u)"
                                   );
                if (bVar10) goto code_r0x000142199fa7;
              }
            }
            else {
LAB_142199f6a:
              if (((FVar16.Id == 0x3fd) && (*(uint *)pFVar19 - 1 < 0x3fc)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Id1 != (uint32)ERemoteServerIdConstants::Local || Id0 == (uint32)ERemoteServerIdConstants::Invalid || Id0 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                                      ,0xab,
                                      L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: Local)"
                                     ), bVar10)) {
code_r0x000142199fa7:
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          FVar8.Id = *(uint *)pFVar19;
          if (*(uint *)pFVar19 == 0x3fd) {
            FVar8.Id = FRemoteServerId::GlobalServerId.Id;
          }
          if (FVar16.Id == 0x3fd) {
            FVar16.Id = FRemoteServerId::GlobalServerId.Id;
          }
          if (FVar8.Id == FVar16.Id) {
            uVar11 = local_res20;
            if ((int)((longlong)pFVar19 - (longlong)pFVar6 >> 2) != -1) goto LAB_14219a08c;
            break;
          }
          FVar16.Id = local_188.Id;
        }
        pFVar6 = (param_1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 < pFVar6 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = param_1->ArrayNum;
        if (iVar12 == param_1->ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar12;
        }
        param_1->ArrayNum = iVar12 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_188.Id;
        uVar11 = local_res20;
      }
    }
LAB_14219a08c:
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// ExecuteMultiServerCommit @ 14219a0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::ExecuteMultiServerCommit
          (FRemoteObjectTransferQueue *this)

{
  undefined1 *puVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  UObject *pUVar4;
  code *pcVar5;
  FUObjectMigrationContext *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  FRemoteObjectTransferQueue *pFVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStackY_348 [32];
  undefined1 local_308;
  undefined1 local_307 [7];
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_300;
  undefined8 uStack_2f8;
  TBitArray<FDefaultBitArrayAllocator> *local_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  uint local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  FRemoteServerId local_2d0 [2];
  int local_2c8;
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c0;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  FRemoteObjectId_u_0 local_2a8;
  FRemoteObjectTransferQueue *local_2a0;
  FRemoteObjectId_u_0 *local_298;
  FRemoteObjectData local_290;
  FRemoteObjectId_u_0 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined4 local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  FName local_218;
  FRemoteObjectId_u_0 local_210;
  FString local_208;
  FRemoteObjectData local_1f8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_118;
  longlong lStack_110;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined8 uStack_100;
  int iStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FReadAccessScope local_e8 [2];
  undefined4 local_b4;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2a0 = this;
  if ((*(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x8 !=
       *(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MultiServerCommitSentObjects.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                         ,0x217,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x8 !=
       *(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MultiServerCommitReferencedObjects.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                         ,0x218,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->bInMultiServerCommit == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInMultiServerCommit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                         ,0x219,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar16 = *(int *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x28;
  puVar1 = &(this->MultiServerCommitObjectsToReturn).Elements.field_0x10;
  iVar17 = 0;
  pTVar2 = &this->MultiServerCommitObjectsToReturn;
  local_2e0 = 0;
  uVar9 = 1;
  uStack_2e4 = 0;
  if (iVar16 != 0) {
    puVar20 = *(uint **)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar22 = *puVar20;
    while (uVar22 == 0) {
      lVar11 = (longlong)iVar17;
      local_2e0 = local_2e0 + 0x20;
      iVar17 = iVar17 + 1;
      uStack_2e4 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14219a22d;
      uVar22 = puVar20[lVar11 + 1];
    }
    uVar9 = -uVar22 & uVar22;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_228 = (int)lVar11;
    uStack_2e4 = local_2e0 + -1 + local_228;
    if (iVar16 < (int)uStack_2e4) {
      uStack_2e4 = iVar16;
    }
  }
LAB_14219a22d:
  uVar22 = *(uint *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x28;
  bVar10 = (byte)uVar22 & 0x1f;
  iStack_2d8 = *(int *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x8 -
               *(int *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x34;
  uVar15 = uVar22 & 0xffffffe0;
  iVar21 = (int)uVar22 >> 5;
  uStack_2c4 = 1 << bVar10;
  uVar13 = -1 << bVar10;
  uStack_2f8 = CONCAT44(uVar9,iVar17);
  uStack_2e8 = 0xffffffff;
  uStack_2dc = local_b4;
  TStack_180._padding_ = uStack_2f8;
  uStack_160 = CONCAT44(uStack_2d4,iStack_2d8);
  TStack_180.UnvisitedBitMask = 0xffffffff;
  TStack_180.CurrentBitIndex = uStack_2e4;
  TStack_180.BaseBitIndex = local_2e0;
  TStack_180._28_4_ = local_b4;
  local_2c8 = iVar21;
  pTStack_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_2b8 = uVar13;
  uStack_2b4 = uVar22;
  uStack_2b0 = uVar15;
  local_188 = pTVar2;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar22 < 0) || (iVar16 < (int)uVar22)) &&
     (local_300 = pTVar2, local_2f0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x28;
  if (uVar22 != uVar9) {
    puVar18 = *(undefined1 **)&(this->MultiServerCommitObjectsToReturn).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar13 = uVar13 & *(uint *)(puVar18 + (longlong)iVar21 * 4);
    while (uVar13 == 0) {
      uStack_2b0 = uVar15 + 0x20;
      local_2c8 = iVar21 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2c8)
      goto LAB_14219a378;
      uVar13 = *(uint *)(puVar18 + (longlong)iVar21 * 4 + 4);
      local_2b8 = 0xffffffff;
      uVar15 = uStack_2b0;
      iVar21 = local_2c8;
    }
    uStack_2c4 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_2c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_224 = (int)lVar11;
    uStack_2b4 = local_224 + -1 + uVar15;
    if ((int)uVar9 < (int)uStack_2b4) {
LAB_14219a378:
      uStack_2b4 = uVar9;
    }
  }
  uStack_2f8 = CONCAT44(uStack_2c4,local_2c8);
  uStack_2e4 = uStack_2b4;
  uStack_2e8 = local_2b8;
  uStack_2dc = uStack_2ac;
  local_2e0 = uStack_2b0;
  local_2f0 = pTStack_2c0;
  iStack_2d8 = *(int *)&(local_2a0->MultiServerCommitObjectsToReturn).Elements.field_0x8 -
               *(int *)&(local_2a0->MultiServerCommitObjectsToReturn).Elements.field_0x34;
  uStack_f0 = CONCAT44(uStack_2d4,iStack_2d8);
  local_108 = pTStack_2c0;
  pFVar14 = local_2a0;
  local_300 = pTVar2;
  local_118 = pTVar2;
  lStack_110 = uStack_2f8;
  uStack_100 = _uStack_2e8;
  local_f8 = _local_2e0;
  do {
    pTVar2 = local_188;
    plVar19 = (longlong *)0x0;
    if (*(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34 !=
        (int)uStack_160) {
      local_308 = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_308);
    }
    if (((TStack_180.CurrentBitIndex == iStack_fc) && (TStack_180.Array == local_108)) &&
       (pTVar2 == local_118)) {
      return;
    }
    local_2a8.Id = 0;
    uVar9 = 0;
    local_2d0[0].Id = 0;
    pUVar4 = *(UObject **)
              (*(longlong *)&pTVar2->Elements + (longlong)TStack_180.CurrentBitIndex * 0x10);
    if (6 < (byte)LogRemoteObject._0_1_) {
      FRemoteServerId::ToString(local_2d0,&local_148);
      FRemoteObjectId::ToString((FRemoteObjectId *)&local_2a8._s_0,&local_158,Default);
      Logging::Private::BasicLog<7>
                (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::ExecuteMultiServerCommit(void)___ptr64'
                  ::__l28::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = FUObjectMigrationContext::CurrentMigrationContext;
    local_248.Id = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 1;
    local_22c = *(undefined4 *)pFVar14->_padding_;
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                           ,0x71,L"%hs: We expect migrations to only occur on the GameThread."),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    FUObjectMigrationContext::CurrentMigrationContext = (FUObjectMigrationContext *)&local_248;
    Serialization::SerializeObjectData
              (&local_1f8,pUVar4,
               (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88,
               &pFVar14->MultiServerCommitReferencedObjects,
               (FUObjectMigrationContext *)&local_248._s_0);
    local_290.Tables.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = local_1f8.Tables.Names.ArrayNum;
    local_298 = &local_248;
    local_290.Tables.Names.ArrayNum = iVar16;
    if (iVar16 == 0) {
      local_290.Tables.Names.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar16,0,(ForAnyElementType *)&local_290,iVar16,
                 &local_290.Tables.Names.ArrayMax);
      memcpy(local_290.Tables.Names.AllocatorInstance.Data,
             local_1f8.Tables.Names.AllocatorInstance.Data,(longlong)iVar16 << 3);
    }
    local_290.Tables.RemoteIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = local_1f8.Tables.RemoteIds.ArrayNum;
    local_290.Tables.RemoteIds.ArrayNum = iVar16;
    if (iVar16 == 0) {
      local_290.Tables.RemoteIds.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar16,0,&local_290.Tables.RemoteIds.AllocatorInstance,iVar16,
                 &local_290.Tables.RemoteIds.ArrayMax);
      memcpy(local_290.Tables.RemoteIds.AllocatorInstance.Data,
             local_1f8.Tables.RemoteIds.AllocatorInstance.Data,(longlong)iVar16 << 3);
    }
    iVar16 = local_1f8.PathNames.ArrayNum;
    local_290.PathNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1f8.PathNames.ArrayNum == 0) {
      local_290.PathNames.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_1f8.PathNames.ArrayNum,0,&local_290.PathNames.AllocatorInstance,
                 local_1f8.PathNames.ArrayNum,&local_290.PathNames.ArrayMax);
      ConstructItems<FPackedRemoteObjectPathName,FPackedRemoteObjectPathName,int>
                (local_290.PathNames.AllocatorInstance.Data,
                 (FPackedRemoteObjectPathName *)local_1f8.PathNames.AllocatorInstance.Data,iVar16);
    }
    local_290.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar16 = local_1f8.Bytes.ArrayNum;
    local_290.Bytes.ArrayNum = iVar16;
    if (iVar16 == 0) {
      local_290.Bytes.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar16,0,&local_290.Bytes.AllocatorInstance,iVar16,&local_290.Bytes.ArrayMax
                );
      ConstructItems<FRemoteObjectBytes,FRemoteObjectBytes,int>
                (local_290.Bytes.AllocatorInstance.Data,
                 (FRemoteObjectBytes *)local_1f8.Bytes.AllocatorInstance.Data,iVar16);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &RemoteObjectTransferDelegate,local_e8);
    plVar12 = plVar19;
    if (RemoteObjectTransferDelegate._16_4_ != 0) {
      plVar12 = (longlong *)RemoteObjectTransferDelegate._8_8_;
    }
    (**(code **)(*plVar12 + 0x60))(plVar12,&local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_e8);
    uVar22 = local_60;
    uVar13 = 1;
    uStack_2e4 = uVar9;
    if (local_60 != 0) {
      puVar20 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar20 = local_68;
      }
      uVar15 = *puVar20;
      plVar12 = plVar19;
      while (uVar9 = (uint)plVar12, uVar15 == 0) {
        iVar17 = (int)plVar19;
        uVar9 = uVar9 + 0x20;
        plVar12 = (longlong *)(ulonglong)uVar9;
        uVar15 = iVar17 + 1;
        plVar19 = (longlong *)(ulonglong)uVar15;
        uStack_2e4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_14219a7b0;
        uVar15 = puVar20[(longlong)iVar17 + 1];
      }
      uVar13 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_220 = (int)lVar11;
      uStack_2e4 = (uVar9 - 1) + local_220;
      if ((int)local_60 < (int)uStack_2e4) {
        uStack_2e4 = local_60;
      }
    }
LAB_14219a7b0:
    local_300 = (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88;
    local_2f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar15 = local_60 & 0xffffffe0;
    iStack_2d8 = local_88._8_4_ - local_54;
    uStack_2f8 = CONCAT44(uVar13,(int)plVar19);
    uStack_2e8 = 0xffffffff;
    uStack_2dc = local_94;
    local_2e0 = uVar9;
    TStack_1b0._padding_ = uStack_2f8;
    iVar17 = (int)local_60 >> 5;
    uStack_190 = CONCAT44(uStack_2d4,iStack_2d8);
    bVar10 = (byte)local_60;
    TStack_1b0.UnvisitedBitMask = 0xffffffff;
    TStack_1b0.CurrentBitIndex = uStack_2e4;
    TStack_1b0.BaseBitIndex = uVar9;
    TStack_1b0._28_4_ = local_94;
    local_1b8 = local_300;
    TStack_1b0.Array = local_2f0;
    if (((int)local_60 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar22 != local_60) {
      puVar20 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar20 = local_68;
      }
      uVar9 = -1 << (bVar10 & 0x1f) & puVar20[iVar17];
      while (uVar9 == 0) {
        lVar11 = (longlong)iVar17;
        uVar15 = uVar15 + 0x20;
        iVar17 = iVar17 + 1;
        uVar22 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14219a8e4;
        uVar9 = puVar20[lVar11 + 1];
      }
      uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_21c = (int)lVar11;
      uVar22 = (uVar15 - 1) + local_21c;
      if ((int)local_60 < (int)uVar22) {
        uVar22 = local_60;
      }
    }
LAB_14219a8e4:
    while( true ) {
      pTVar2 = local_1b8;
      if (*(int *)&(local_1b8->Elements).field_0x8 - *(int *)&(local_1b8->Elements).field_0x34 !=
          (int)uStack_190) {
        local_307[0] = 0;
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_307);
      }
      pFVar14 = local_2a0;
      if (((TStack_1b0.CurrentBitIndex == uVar22) &&
          (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (pTVar2 == (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88))
      break;
      local_210.Id = 0;
      if (6 < (byte)LogRemoteObject._0_1_) {
        local_218 = *(FName *)(*(longlong *)
                                (*(longlong *)&pTVar2->Elements +
                                (longlong)TStack_1b0.CurrentBitIndex * 0x10) + 0x18);
        ::FName::ToString(&local_218,&local_208);
        FRemoteObjectId::ToString((FRemoteObjectId *)&local_210._s_0,&local_128,Default);
        FRemoteObjectId::ToString((FRemoteObjectId *)&local_2a8._s_0,&local_138,Default);
        Logging::Private::BasicLog<7>
                  (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::ExecuteMultiServerCommit(void)___ptr64'
                    ::__l51::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&local_2a0->MultiServerCommitSentObjects,
               (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88);
    FRemoteObjectData::~FRemoteObjectData(&local_290);
    FVar7.Data = local_1f8.Bytes.AllocatorInstance.Data;
    DestructItems<FRemoteObjectBytes,int>
              ((FRemoteObjectBytes *)local_1f8.Bytes.AllocatorInstance.Data,iVar16);
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    FVar7.Data = local_1f8.PathNames.AllocatorInstance.Data;
    DestructItems<FPackedRemoteObjectPathName,int>
              ((FPackedRemoteObjectPathName *)local_1f8.PathNames.AllocatorInstance.Data,
               local_1f8.PathNames.ArrayNum);
    if ((FPackedRemoteObjectPathName *)FVar7.Data != (FPackedRemoteObjectPathName *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (local_1f8.Tables.RemoteIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Tables.RemoteIds.AllocatorInstance.Data);
    }
    if (local_1f8.Tables.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Tables.Names.AllocatorInstance.Data);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                           ,0x71,L"%hs: We expect migrations to only occur on the GameThread."),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    FUObjectMigrationContext::CurrentMigrationContext = pFVar6;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  } while( true );
}

// AbortMultiServerCommit @ 14219ab80

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::AbortMultiServerCommit
          (FRemoteObjectTransferQueue *this)

{
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset
            (&this->MultiServerCommitObjectsToReturn);
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset
            (&this->MultiServerCommitSentObjects);
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset
            (&this->MultiServerCommitReferencedObjects);
  this->bInMultiServerCommit = false;
  return;
}

// CommitMultiServerCommit @ 14219abc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::CommitMultiServerCommit
          (FRemoteObjectTransferQueue *this)

{
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  FUObjectMigrationContext *pFVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_198;
  FRemoteObjectId_u_0 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined4 local_174;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  int local_138;
  FRemoteObjectId_u_0 local_130;
  FRemoteObjectId_u_0 local_128;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  if (6 < (byte)LogRemoteObject._0_1_) {
    Logging::Private::BasicLog<7>
              (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::CommitMultiServerCommit(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
  }
  pTVar1 = &this->MultiServerCommitReferencedObjects;
  iVar13 = *(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x28;
  local_160 = &(this->MultiServerCommitReferencedObjects).Elements.field_0x10;
  iStack_168 = 0;
  local_198 = 1;
  local_150 = 0;
  uStack_164 = 1;
  iStack_154 = 0;
  if (iVar13 != 0) {
    puVar16 = *(uint **)&(this->MultiServerCommitReferencedObjects).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_160;
    }
    uStack_164 = *puVar16;
    while (uStack_164 == 0) {
      lVar9 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      uStack_164 = 1;
      iStack_154 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_14219ac91;
      uStack_164 = puVar16[lVar9 + 1];
    }
    uStack_164 = -uStack_164 & uStack_164;
    uVar2 = (ulonglong)uStack_164 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_154 = local_150 + -1 + local_res20;
    if (iVar13 < iStack_154) {
      iStack_154 = iVar13;
    }
  }
LAB_14219ac91:
  uVar14 = *(uint *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x28;
  uStack_14c = local_54;
  puVar17 = &(this->MultiServerCommitReferencedObjects).Elements.field_0x10;
  iStack_148 = *(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x8 -
               *(int *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x34;
  uVar12 = uVar14 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uStack_164,iStack_168);
  uStack_158 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_154;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_150;
  uStack_c8 = CONCAT44(uStack_144,iStack_148);
  local_170 = pTVar1;
  local_f0 = pTVar1;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_160;
  if ((((int)uVar14 < 0) || (iVar13 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->MultiServerCommitReferencedObjects).Elements.field_0x28;
  if (uVar14 != uVar3) {
    puVar15 = *(undefined1 **)&(this->MultiServerCommitReferencedObjects).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar17;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14219adad;
      uVar14 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_140 = (int)lVar9;
    uVar14 = local_140 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_14219adad:
  iVar13 = 0;
  while( true ) {
    pTVar7 = local_f0;
    if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
        (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_e8.CurrentBitIndex == uVar14) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) && (pTVar7 == pTVar1))
    break;
    local_130.Id = 0;
    if (6 < (byte)LogRemoteObject._0_1_) {
      FRemoteObjectId::ToString((FRemoteObjectId *)&local_130._s_0,&local_90,Default);
      Logging::Private::BasicLog<7>
                (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::CommitMultiServerCommit(void)___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset(pTVar1);
  RemoteObject::Private::UnsafeToMigrateObjects = RemoteObject::Private::UnsafeToMigrateObjects + 1;
  iStack_118 = 0;
  pTVar1 = &this->MultiServerCommitSentObjects;
  iVar10 = *(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x28;
  local_110 = &(this->MultiServerCommitSentObjects).Elements.field_0x10;
  iStack_104 = iVar13;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->MultiServerCommitSentObjects).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_110;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_118;
      iVar13 = iVar13 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_14219aee1;
      uVar14 = puVar16[lVar9 + 1];
    }
    local_198 = -uVar14 & uVar14;
    uVar2 = (ulonglong)local_198 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_13c = (int)lVar9;
    iStack_104 = iVar13 + -1 + local_13c;
    if (iVar10 < iStack_104) {
      iStack_104 = iVar10;
    }
  }
LAB_14219aee1:
  uVar14 = *(uint *)&(this->MultiServerCommitSentObjects).Elements.field_0x28;
  puVar17 = &(this->MultiServerCommitSentObjects).Elements.field_0x10;
  uStack_114 = local_198;
  iStack_fc = iStack_154;
  iStack_f8 = *(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x8 -
              *(int *)&(this->MultiServerCommitSentObjects).Elements.field_0x34;
  uStack_108 = 0xffffffff;
  uVar12 = uVar14 & 0xffffffe0;
  TStack_b8.CurrentBitIndex = iStack_104;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(local_198,iStack_118);
  iVar11 = (int)uVar14 >> 5;
  TStack_b8._28_4_ = iStack_154;
  TStack_b8.BaseBitIndex = iVar13;
  uStack_98 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = pTVar1;
  local_100 = iVar13;
  local_c0 = pTVar1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->MultiServerCommitSentObjects).Elements.field_0x28;
  if (uVar14 != uVar3) {
    puVar15 = *(undefined1 **)&(this->MultiServerCommitSentObjects).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar17;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14219b000;
      uVar14 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_138 = (int)lVar9;
    uVar14 = local_138 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_14219b000:
  while( true ) {
    pTVar7 = local_c0;
    if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
        (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    pFVar6 = FUObjectMigrationContext::CurrentMigrationContext;
    if (((TStack_b8.CurrentBitIndex == uVar14) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) && (pTVar7 == pTVar1))
    {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset
                (&this->MultiServerCommitObjectsToReturn);
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset(pTVar1);
      this->bInMultiServerCommit = false;
      RemoteObject::Private::UnsafeToMigrateObjects =
           RemoteObject::Private::UnsafeToMigrateObjects + -1;
      if ((RemoteObject::Private::UnsafeToMigrateObjects < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("UnsafeToMigrateObjects >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                             ,0x1d7,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      return;
    }
    local_128.Id = 0;
    local_190.Id = 0;
    local_188 = 0;
    pUVar4 = *(UObject **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10);
    local_180 = 0;
    local_178 = 1;
    local_174 = 0;
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                           ,0x71,L"%hs: We expect migrations to only occur on the GameThread."),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUObjectMigrationContext::CurrentMigrationContext = (FUObjectMigrationContext *)&local_190;
    if (6 < (byte)LogRemoteObject._0_1_) {
      FRemoteObjectId::ToString((FRemoteObjectId *)&local_128._s_0,local_80,Default);
      Logging::Private::BasicLog<7>
                (&`public:_virtual_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::CommitMultiServerCommit(void)___ptr64'
                  ::__l48::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
      if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
      }
    }
    RemoteObject::Private::MarkAsRemote(pUVar4,(FRemoteServerId)0x0);
    bVar8 = IsInGameThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                           ,0x71,L"%hs: We expect migrations to only occur on the GameThread."),
       bVar8)) break;
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    FUObjectMigrationContext::CurrentMigrationContext = pFVar6;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// EndRequest @ 14219b1d0

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::EndRequest
          (FRemoteObjectTransferQueue *this,bool param_1)

{
  return;
}

// ~FRemoteObjectTransferQueue @ 1421b6a20

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::~FRemoteObjectTransferQueue
          (FRemoteObjectTransferQueue *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<UE::RemoteObject::Transfer::FObjectMigrationRequests,int>
            ((FObjectMigrationRequests *)
             (this->PendingObjectMigrationRequests).AllocatorInstance.Data,
             (this->PendingObjectMigrationRequests).ArrayNum);
  pFVar1 = (this->PendingObjectMigrationRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MultiServerCommitReferencedObjects).HashSize = 0;
  FVar2 = (this->MultiServerCommitReferencedObjects).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MultiServerCommitReferencedObjects).Elements);
  (this->MultiServerCommitSentObjects).HashSize = 0;
  FVar2 = (this->MultiServerCommitSentObjects).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MultiServerCommitSentObjects).Elements);
  (this->MultiServerCommitObjectsToReturn).HashSize = 0;
  FVar2 = (this->MultiServerCommitObjectsToReturn).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MultiServerCommitObjectsToReturn).Elements);
  pFVar1 = (this->PendingObjectRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// FulfillReceiveRequest @ 1421cc730

/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::FulfillReceiveRequest
          (FRemoteObjectTransferQueue *this,FRemoteObjectData *param_1,
          FUObjectMigrationContext *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRemoteServerId FVar5;
  long64 lVar6;
  uint uVar7;
  ulonglong uVar8;
  FRemoteServerId local_res8 [4];
  FRemoteServerId local_res18 [2];
  FRemoteObjectId_u_0 local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar7 = 0;
  uVar4 = 0xffffffff;
  if (0 < (this->PendingObjectRequests).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->PendingObjectRequests).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = FRemoteObjectId::Compare
                        ((FRemoteObjectId *)
                         ((this->PendingObjectRequests).AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 0x10),
                         (FRemoteObjectId)
                         *(FRemoteObjectId_u_0 *)&(param_2->ObjectId).field0_0x0._s_0);
      uVar4 = uVar7;
    } while ((lVar6 != 0) &&
            (uVar7 = uVar7 + 1, uVar4 = 0xffffffff,
            (int)uVar7 < (this->PendingObjectRequests).ArrayNum));
  }
  if (5 < (byte)LogRemoteObject._0_1_) {
    FRemoteServerId::ToString(&param_2->OwnerServerId,&local_a8);
    FRemoteObjectId::ToString(&param_2->ObjectId,&local_b8,Default);
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::FulfillReceiveRequest(FRemoteObjectData&___ptr64,FUObjectMigrationContext_const&___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  MigrateObjectFromObjectData(param_1,param_2);
  uVar1 = (param_2->ObjectId).field0_0x0.Id;
  uVar8 = uVar1 >> 0x36;
  uVar7 = (uint)(uVar1 >> 0x36);
  FRemoteServerId::VerifyComparableServerIds(0,uVar7);
  if (uVar7 == 0x3fd) {
    uVar8 = (ulonglong)FRemoteServerId::GlobalServerId.Id;
  }
  if ((uVar8 & 0x7ff) != 0 || (uVar1 >> 1 & 0x1fffffffffffff) != 0) {
    local_res20.Id = 0;
    FRemoteObjectId::ToString((FRemoteObjectId *)&local_res20._s_0,&local_68,Default);
    FRemoteServerId::ToString(&param_2->RemoteServerId,&local_78);
    FRemoteObjectId::ToString(&param_2->ObjectId,&local_88,Default);
    local_res8[0].Id = 0x3fd;
    FRemoteServerId::ToString(local_res8,&local_98);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::CoreUObject::Private::FObjectHandleUtils::GetRemoteId(Result) == MigrationContext.ObjectId"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                       ,0x30a,
                       L"PeerId:%s requested object %s migration from PeerId:%s but received %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar5.Id = (param_2->OwnerServerId).Id;
  if (FVar5.Id == 0x3fd) {
    FVar5.Id = FRemoteServerId::GlobalServerId.Id;
  }
  if (FVar5.Id != 0) {
    local_res18[0].Id = 0;
    FRemoteServerId::ToString(local_res18,&local_48);
    FRemoteServerId::ToString(&param_2->OwnerServerId,&local_58);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MigrationContext.OwnerServerId == Handle::GetOwnerServerId(Result)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                       ,0x30b,L"Expected owner id %s doesn\'t match post-deserialize owner: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar4 != 0xffffffff) {
    TArray<UE::RemoteObject::Transfer::FPendingObjectRequest,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->PendingObjectRequests,uVar4,Default);
  }
  return;
}

// RequestObjectMigration @ 1421e0db0

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration
          (FRemoteObjectTransferQueue *this,FRemoteWorkPriority param_1,FRemoteObjectId param_2,
          FRemoteServerId param_3)

{
  int *piVar1;
  ulong64 uVar2;
  FRemoteObjectId FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long64 lVar8;
  longlong lVar9;
  FRemoteServerId FVar10;
  FRemoteServerId FVar11;
  uint uVar12;
  FRemoteObjectId_u_0 FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res20 [8];
  
  if (FRemoteServerId::GlobalServerId.Id == 0x3fd) {
    if (param_3.Id != 0) {
      if (0x3fc < param_3.Id) goto LAB_1421e0e21;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id1 != (uint32)ERemoteServerIdConstants::Local || Id0 == (uint32)ERemoteServerIdConstants::Invalid || Id0 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0xab,
                         L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: Local)"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
LAB_1421e0e21:
    FVar10.Id = FRemoteServerId::GlobalServerId.Id;
    if (param_3.Id == 0x3fd) goto LAB_1421e0e27;
  }
  FVar10.Id = param_3.Id;
LAB_1421e0e27:
  if ((FVar10.Id == FRemoteServerId::GlobalServerId.Id) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationServerId != FRemoteServerId::GetLocalServerId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectTransfer.cpp"
                         ,0x28a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 0;
  if (0 < (this->PendingObjectMigrationRequests).ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar12 < (this->PendingObjectMigrationRequests).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (this->PendingObjectMigrationRequests).AllocatorInstance.Data +
                (longlong)(int)uVar12 * 0x18;
      lVar8 = FRemoteObjectId::Compare((FRemoteObjectId *)pFVar14,param_2);
      if (lVar8 == 0) {
        if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_1421e0f3e;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->PendingObjectMigrationRequests).ArrayNum);
  }
  iVar7 = (this->PendingObjectMigrationRequests).ArrayNum;
  piVar1 = &(this->PendingObjectMigrationRequests).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->PendingObjectMigrationRequests).AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar7;
  (this->PendingObjectMigrationRequests).ArrayNum = iVar7 + 1;
  pFVar14 = (this->PendingObjectMigrationRequests).AllocatorInstance.Data;
  *(undefined8 *)(pFVar14 + lVar9 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar14 + lVar9 * 0x18 + 0x10) = 0;
  ((FRemoteObjectId_u_0 *)(pFVar14 + lVar9 * 0x18))->_s_0 =
       (FRemoteObjectId_u_0_s_0)param_2.field0_0x0;
  pFVar14 = pFVar14 + lVar9 * 0x18;
LAB_1421e0f3e:
  iVar7 = *(int *)&pFVar14[0x10].field_0x0;
  FVar13 = (FRemoteObjectId_u_0)((FRemoteObjectId_u_0 *)(pFVar14 + 8))->Id;
  uVar2 = FVar13.Id + (longlong)iVar7 * 0x18;
  while( true ) {
    if (*(int *)&pFVar14[0x10].field_0x0 != iVar7) {
      `TCheckedPointerIterator<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar13.Id == uVar2) goto LAB_1421e0fa2;
    FRemoteServerId::VerifyComparableServerIds(*(uint *)(FVar13.Id + 8),param_3.Id);
    FVar10.Id = *(uint *)(FVar13.Id + 8);
    if (*(uint *)(FVar13.Id + 8) == 0x3fd) {
      FVar10 = FRemoteServerId::GlobalServerId;
    }
    FVar11.Id = param_3.Id;
    if (param_3.Id == 0x3fd) {
      FVar11 = FRemoteServerId::GlobalServerId;
    }
    if (FVar10.Id == FVar11.Id) break;
    FVar13.Id = FVar13.Id + 0x18;
  }
  if (FVar13.Id == 0) {
LAB_1421e0fa2:
    iVar7 = *(int *)&pFVar14[0x10].field_0x0;
    if (iVar7 == *(int *)(pFVar14 + 0x14)) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)(pFVar14 + 8),(int *)(pFVar14 + 0x14));
    }
    lVar9 = (longlong)iVar7;
    *(int *)&pFVar14[0x10].field_0x0 = iVar7 + 1;
    FVar3.field0_0x0 = (FRemoteObjectId_u_0)((FRemoteObjectId_u_0 *)(pFVar14 + 8))->Id;
    *(undefined4 *)((longlong)FVar3.field0_0x0 + 0xc + lVar9 * 0x18) = 0;
    ((FRemoteObjectId_u_0 *)((longlong)FVar3.field0_0x0 + lVar9 * 0x18))->_s_0 =
         (FRemoteObjectId_u_0_s_0)param_2.field0_0x0;
    *(uint *)((longlong)FVar3.field0_0x0 + 8 + lVar9 * 0x18) = param_3.Id;
    FVar13.Id = (longlong)FVar3.field0_0x0 + lVar9 * 0x18;
  }
  *(ulong64 *)(FVar13.Id + 0x10) = param_1.PackedData;
  AlgoImpl::
  IntroSortInternal<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,FIdentityFunctor,TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration_::__l2::<lambda_1>_>_>
            ((FObjectMigrationRequest *)*(FRemoteObjectId_u_0 *)(pFVar14 + 8),
             *(int *)&pFVar14[0x10].field_0x0,local_res20[0],(<lambda_1> *)local_res8);
  return;
}

// SendRemoteObjectRequest @ 1421e5e80

/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::SendRemoteObjectRequest
          (FRemoteObjectTransferQueue *this,FRemoteWorkPriority param_1,FRemoteObjectId param_2,
          FRemoteServerId param_3,FRemoteServerId param_4)

{
  uint uVar1;
  code *pcVar2;
  FRemoteServerId FVar3;
  FUObjectMigrationContext *pFVar4;
  bool bVar5;
  FRemoteServerId FVar6;
  uint uVar7;
  longlong *plVar8;
  FRemoteObjectId_u_0 local_res18;
  FString local_88;
  FString local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FRemoteObjectId_u_0 local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  
  FVar6.Id = DatabaseId.Id;
  local_res18 = param_2.field0_0x0;
  FRemoteServerId::VerifyComparableServerIds(param_3.Id,DatabaseId.Id);
  FVar3.Id = param_3.Id;
  if (param_3.Id == 0x3fd) {
    FVar3 = FRemoteServerId::GlobalServerId;
  }
  if (FVar6.Id == 0x3fd) {
    FVar6 = FRemoteServerId::GlobalServerId;
  }
  if (FVar3.Id == FVar6.Id) {
    if (4 < (byte)LogRemoteObject._0_1_) {
      FRemoteServerId::ToString(&param_4,&local_78);
      FRemoteObjectId::ToString((FRemoteObjectId *)&local_res18._s_0,&local_88,Default);
      Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::SendRemoteObjectRequest(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = FUObjectMigrationContext::CurrentMigrationContext;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_30 = DatabaseId.Id;
    local_2c = DatabaseId.Id;
    local_28 = DatabaseId.Id;
    local_38 = param_2.field0_0x0;
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                           ,0x71,L"%hs: We expect migrations to only occur on the GameThread."),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUObjectMigrationContext::CurrentMigrationContext = (FUObjectMigrationContext *)&local_38;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &RestoreRemoteObjectDataDelegate,&local_50);
    plVar8 = (longlong *)0x0;
    if (RestoreRemoteObjectDataDelegate._16_4_ != 0) {
      plVar8 = (longlong *)RestoreRemoteObjectDataDelegate._8_8_;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    FVar3 = param_4;
    if (((FRemoteServerId::GlobalServerId.Id == 0x3fd) && (param_4.Id - 1 < 0x3fc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Id1 != (uint32)ERemoteServerIdConstants::Local || Id0 == (uint32)ERemoteServerIdConstants::Invalid || Id0 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                           ,0xab,
                           L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: Local)"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6 = FVar3;
    if (FVar3.Id == 0x3fd) {
      FVar6.Id = FRemoteServerId::GlobalServerId.Id;
    }
    if (FVar6.Id != FRemoteServerId::GlobalServerId.Id) {
      uVar1 = GRemoteExecutor.NextTransactionRequestId + 1;
      uVar7 = GRemoteExecutor.NextTransactionRequestId & 0x7fffff;
      GRemoteExecutor.NextTransactionRequestId = uVar1;
      if ((FRemoteServerId::GlobalServerId.Id == 0x3fd) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                             ,0x9d,
                             L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RequestObjectMigration
                (&GTransferQueue,
                 (FRemoteWorkPriority)
                 (CONCAT44(FRemoteServerId::GlobalServerId.Id,uVar7 + 1000) | 0xff000000),param_2,
                 FVar3);
    }
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\UObjectMigrationContext.h"
                           ,0x71,L"%hs: We expect migrations to only occur on the GameThread."),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &RequestRemoteObjectDelegate,&local_68);
    plVar8 = (longlong *)0x0;
    if (RequestRemoteObjectDelegate._16_4_ != 0) {
      plVar8 = (longlong *)RequestRemoteObjectDelegate._8_8_;
    }
    (**(code **)(*plVar8 + 0x60))
              (plVar8,param_1.PackedData,param_2.field0_0x0,param_3.Id,param_4.Id);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    pFVar4 = FUObjectMigrationContext::CurrentMigrationContext;
  }
  FUObjectMigrationContext::CurrentMigrationContext = pFVar4;
  return;
}

// SendRequests @ 1421e61a0

/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::SendRequests
          (FRemoteObjectTransferQueue *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FRemoteObjectId_u_0_s_0 FVar5;
  code *pcVar6;
  FRemoteObjectId_u_0_s_0 FVar7;
  FRemoteObjectId_u_0_s_0 FVar8;
  FRemoteObjectId_u_0_s_0 FVar9;
  FRemoteObjectId *pFVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  long64 lVar14;
  FRemoteObjectStub *pFVar15;
  UObject *pUVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  FRemoteObjectId_u_0 *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  FRemoteObjectId_u_0 *pFVar23;
  ulonglong uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  FRemoteObjectId_u_0 *pFVar26;
  FRemoteObjectId_u_0 *pFVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FRemoteServerId local_res20 [2];
  longlong local_1f8;
  int local_1e8;
  uint uStack_1e4;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  FString local_1c8;
  FString local_1b8;
  FRemoteObjectId_u_0 *local_1a8;
  undefined8 local_1a0;
  FRemoteObjectId_u_0 *local_198;
  int iStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  TPairInitializer<FRemoteObjectId_const_&,FRemoteObjectId_const_&> local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FRemoteObjectId_u_0 *local_128;
  undefined8 *local_120;
  FRemoteObjectId *local_118;
  undefined8 uStack_110;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FRemoteObjectId *local_88;
  undefined8 uStack_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar4 = this->_padding_;
  iVar12 = *(int *)(lVar4 + 0x38);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x20);
  iStack_190 = 0;
  local_198 = (FRemoteObjectId_u_0 *)(lVar4 + 0x10);
  local_178 = 0;
  uStack_18c = 1;
  iStack_17c = 0;
  if (iVar12 != 0) {
    pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar25 = pTVar1;
    }
    uStack_18c = *(uint *)(pTVar25->AllocatorInstance).InlineData;
    local_178 = 0;
    while (uStack_18c == 0) {
      lVar18 = (longlong)iStack_190;
      local_178 = local_178 + 0x20;
      iStack_190 = iStack_190 + 1;
      uStack_18c = 1;
      iStack_17c = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190) goto LAB_1421e624d;
      uStack_18c = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar18 * 4 + 4);
    }
    uStack_18c = -uStack_18c & uStack_18c;
    uVar19 = (ulonglong)uStack_18c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_168 = (int)lVar18;
    iStack_17c = local_168 + -1 + local_178;
    if (iVar12 < iStack_17c) {
      iStack_17c = iVar12;
    }
  }
LAB_1421e624d:
  iStack_170 = *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x44);
  uStack_1d4 = *(uint *)(lVar4 + 0x38);
  local_1e8 = (int)uStack_1d4 >> 5;
  bVar17 = (byte)uStack_1d4 & 0x1f;
  TStack_150._padding_ = CONCAT44(uStack_18c,iStack_190);
  uStack_1e4 = 1 << bVar17;
  uStack_1d0 = uStack_1d4 & 0xffffffe0;
  local_1d8 = -1 << bVar17;
  uStack_180 = 0xffffffff;
  TStack_150.CurrentBitIndex = iStack_17c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150._28_4_ = iStack_17c;
  TStack_150.BaseBitIndex = local_178;
  uStack_130 = CONCAT44(uStack_16c,iStack_170);
  local_188 = pTVar1;
  iStack_174 = iStack_17c;
  local_160.Value = (FRemoteObjectId *)local_198;
  TStack_150.Array = pTVar1;
  if ((((int)uStack_1d4 < 0) || (iVar12 < (int)uStack_1d4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = *(uint *)(lVar4 + 0x38);
  if (uStack_1d4 != uVar13) {
    pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar25 = pTVar1;
    }
    uVar22 = local_1d8 &
             *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)local_1e8 * 4);
    while (uVar22 == 0) {
      uStack_1d0 = uStack_1d0 + 0x20;
      lVar18 = (longlong)local_1e8;
      local_1e8 = local_1e8 + 1;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1e8)
      goto LAB_1421e637f;
      uVar22 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      local_1d8 = 0xffffffff;
    }
    uStack_1e4 = -uVar22 & uVar22;
    uVar19 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_164 = (int)lVar18;
    uStack_1d4 = local_164 + -1 + uStack_1d0;
    if ((int)uVar13 < (int)uStack_1d4) {
LAB_1421e637f:
      uStack_1d4 = uVar13;
    }
  }
  uStack_110 = CONCAT44(uStack_1e4,local_1e8);
  local_118 = (FRemoteObjectId *)(lVar4 + 0x10);
  uStack_100 = CONCAT44(uStack_1d4,local_1d8);
  uStack_f8 = CONCAT44(uStack_1cc,uStack_1d0);
  local_f0 = *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x44);
  uStack_60 = CONCAT44(uStack_ec,local_f0);
  pTStack_108 = pTVar1;
  local_88 = local_118;
  uStack_80 = uStack_110;
  local_78 = pTVar1;
  uStack_70 = uStack_100;
  local_68 = uStack_f8;
  do {
    pFVar10 = local_160.Value;
    if (*(int *)&local_160.Value[1].field0_0x0 - *(int *)((longlong)local_160.Value + 0x34) !=
        (int)uStack_130) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_150.CurrentBitIndex == uStack_70._4_4_) && (TStack_150.Array == local_78)) &&
       (pFVar10 == local_88)) {
      return;
    }
    pFVar27 = (FRemoteObjectId_u_0 *)
              ((longlong)TStack_150.CurrentBitIndex * 0x10 + pFVar10->field0_0x0);
    lVar4 = this->_padding_;
    uVar13 = (uint)(pFVar27->Id >> 0x20);
    uVar22 = uVar13 >> 0x16;
    if (uVar13 >> 0x16 == FRemoteServerId::GlobalServerId.Id) {
      uVar22 = 0x3fd;
    }
    uVar19 = pFVar27->Id & 0x3ffffffffffffe;
    local_1a8 = pFVar27;
    iVar12 = TSet<TTuple<FRemoteObjectId,FRemoteObjectId>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectId,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FRemoteObjectId>
                       ((TSet<TTuple<FRemoteObjectId,FRemoteObjectId>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectId,0>,FDefaultSetAllocator>
                         *)(lVar4 + 0x60),
                        ((uint)(((ulonglong)uVar22 << 0x36) >> 0x20) | (uint)(uVar19 >> 0x20)) *
                        0x17 + (int)uVar19,(FRemoteObjectId *)&pFVar27->_s_0);
    pFVar26 = (FRemoteObjectId_u_0 *)0x0;
    pFVar20 = pFVar26;
    if (iVar12 != -1) {
      pFVar20 = (FRemoteObjectId_u_0 *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar12 * 0x18);
    }
    pFVar23 = pFVar20 + 1;
    if (pFVar20 == (FRemoteObjectId_u_0 *)0x0) {
      pFVar23 = pFVar26;
    }
    pFVar20 = pFVar27;
    if (pFVar23 != (FRemoteObjectId_u_0 *)0x0) {
      pFVar20 = pFVar23;
    }
    FVar5 = pFVar20->_s_0;
    bVar11 = RemoteObject::Handle::IsRemote((FRemoteObjectId)FVar5);
    if (bVar11) {
      local_1f8 = this->_padding_;
      iVar12 = (int)this->_padding_;
      if (0 < iVar12) {
        uVar24 = pFVar20->ServerId;
        uVar19 = pFVar20->SerialNumber;
        pFVar27 = pFVar26;
LAB_1421e6500:
        uVar22 = (uint)pFVar27;
        uVar13 = 0;
        if ((int)uVar22 < iVar12) {
          uVar13 = ~uVar22 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = (&pFVar20->_s_0)->ServerId;
        uVar21 = uVar24;
        if (uVar13 == FRemoteServerId::GlobalServerId.Id) {
          uVar21 = 0x3fd;
        }
        lVar4 = *(longlong *)(this->_padding_ + 8 + (longlong)pFVar26);
        puVar3 = (undefined8 *)(this->_padding_ + (longlong)pFVar26);
        local_58 = *puVar3;
        uStack_50 = puVar3[1];
        if (*(int *)(lVar4 + 0xb8) != *(int *)(lVar4 + 0xe4)) {
          lVar18 = lVar4 + 0xe8;
          if (*(longlong *)(lVar4 + 0xf0) != 0) {
            lVar18 = *(longlong *)(lVar4 + 0xf0);
          }
          for (iVar12 = *(int *)(lVar18 + (ulonglong)
                                          (*(int *)(lVar4 + 0xf8) - 1U &
                                          (int)((uVar21 << 0x35 | uVar19) >> 0x1f) * 0x17 +
                                          (int)uVar19 * 2) * 4); iVar12 != -1;
              iVar12 = *(int *)((longlong)iVar12 * 0x10 + 8 + *(longlong *)(lVar4 + 0xb0))) {
            lVar14 = FRemoteObjectId::Compare
                               ((FRemoteObjectId *)
                                (*(longlong *)(lVar4 + 0xb0) + (longlong)iVar12 * 0x10),
                                (FRemoteObjectId)FVar5);
            if (lVar14 == 0) goto LAB_1421e667a;
          }
        }
        uVar21 = uVar24;
        if (uVar13 == FRemoteServerId::GlobalServerId.Id) {
          uVar21 = 0x3fd;
        }
        if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
          lVar18 = lVar4 + 0x48;
          if (*(longlong *)(lVar4 + 0x50) != 0) {
            lVar18 = *(longlong *)(lVar4 + 0x50);
          }
          for (iVar12 = *(int *)(lVar18 + (ulonglong)
                                          (*(int *)(lVar4 + 0x58) - 1U &
                                          (int)((uVar21 << 0x35 | uVar19) >> 0x1f) * 0x17 +
                                          (int)uVar19 * 2) * 4); iVar12 != -1;
              iVar12 = *(int *)((longlong)iVar12 * 0x10 + 8 + *(longlong *)(lVar4 + 0x10))) {
            lVar14 = FRemoteObjectId::Compare
                               ((FRemoteObjectId *)
                                (*(longlong *)(lVar4 + 0x10) + (longlong)iVar12 * 0x10),
                                (FRemoteObjectId)FVar5);
            if (lVar14 == 0) goto LAB_1421e667a;
          }
        }
        goto LAB_1421e668b;
      }
LAB_1421e66ae:
      iVar12 = (this->PendingObjectRequests).ArrayNum;
      pFVar27 = (FRemoteObjectId_u_0 *)(this->PendingObjectRequests).AllocatorInstance.Data;
      pFVar20 = pFVar27 + (longlong)iVar12 * 2;
      while( true ) {
        if ((this->PendingObjectRequests).ArrayNum != iVar12) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::RemoteObject::Transfer::FPendingObjectRequest,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        pFVar26 = (FRemoteObjectId_u_0 *)0x0;
        if ((pFVar27 == pFVar20) ||
           (lVar14 = FRemoteObjectId::Compare
                               ((FRemoteObjectId *)&pFVar27->_s_0,(FRemoteObjectId)FVar5),
           pFVar26 = pFVar27, lVar14 == 0)) break;
        pFVar27 = pFVar27 + 2;
      }
      pFVar27 = pFVar26;
      if (pFVar26 == (FRemoteObjectId_u_0 *)0x0) {
        iVar12 = (this->PendingObjectRequests).ArrayNum;
        piVar2 = &(this->PendingObjectRequests).ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->PendingObjectRequests).AllocatorInstance,piVar2);
        }
        pFVar27 = (FRemoteObjectId_u_0 *)
                  ((this->PendingObjectRequests).AllocatorInstance.Data + (longlong)iVar12 * 0x10);
        (this->PendingObjectRequests).ArrayNum = iVar12 + 1;
        pFVar27[1].Id = 0;
        pFVar27->_s_0 = FVar5;
      }
      if (pFVar27[1].Id != *(ulong64 *)(local_1f8 + 8)) {
        pFVar27[1].Id = *(ulong64 *)(local_1f8 + 8);
        pFVar15 = RemoteObject::Private::FRemoteObjectMaps::FindRemoteObjectStub
                            (RemoteObject::Private::ObjectMaps,(FRemoteObjectId)FVar5);
        if (pFVar15 == (FRemoteObjectStub *)0x0) {
          local_res20[0].Id = pFVar20->ServerId;
        }
        else {
          local_res20[0].Id = (pFVar15->ResidentServerId).Id;
        }
        SendRemoteObjectRequest
                  (this,(FRemoteWorkPriority)*(ulong64 *)(local_1f8 + 8),(FRemoteObjectId)FVar5,
                   local_res20[0],(FRemoteServerId)0x3fd);
        if (pFVar26 == (FRemoteObjectId_u_0 *)0x0) {
          if (5 < (byte)LogRemoteObject._0_1_) {
            FRemoteServerId::ToString(local_res20,&local_98);
            FRemoteWorkPriority::ToString((FRemoteWorkPriority *)(local_1f8 + 8),&local_a8);
            FRemoteObjectId::ToString((FRemoteObjectId *)&local_1a8->_s_0,&local_b8,Default);
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.Data.ArrayNum = 0;
            local_1b8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_1b8,*(int *)this->_padding_);
            Logging::Private::BasicLog<6>
                      (&`public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::SendRequests(void)___ptr64'
                        ::__l54::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (5 < (byte)LogRemoteObject._0_1_) {
          FRemoteServerId::ToString(local_res20,&local_c8);
          FRemoteWorkPriority::ToString((FRemoteWorkPriority *)(local_1f8 + 8),&local_d8);
          FRemoteObjectId::ToString((FRemoteObjectId *)&local_1a8->_s_0,&local_e8,Default);
          local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Data.ArrayNum = 0;
          local_1c8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_1c8,*(int *)this->_padding_);
          Logging::Private::BasicLog<6>
                    (&`public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::SendRequests(void)___ptr64'
                      ::__l34::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    else if ((pFVar23 == (FRemoteObjectId_u_0 *)0x0) &&
            (pUVar16 = StaticFindObjectFastInternal
                                 ((FRemoteObjectId)*(FRemoteObjectId_u_0 *)&pFVar27->_s_0,RF_NoFlags
                                  ,Borrowed), pUVar16 != (UObject *)0x0)) {
      local_120 = &local_1a0;
      local_1a0 = 0;
      local_128 = pFVar27;
      TSet<TTuple<FRemoteObjectId,FRemoteObjectId>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectId,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRemoteObjectId_const_&,FRemoteObjectId_const_&>_>
                ((TSet<TTuple<FRemoteObjectId,FRemoteObjectId>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectId,0>,FDefaultSetAllocator>
                  *)(this->_padding_ + 0x60),&local_160,(bool *)&local_128);
      TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator>::
      Emplace<FRemoteObjectId_const_&>
                ((TSet<FRemoteObjectId,DefaultKeyFuncs<FRemoteObjectId,0>,FDefaultSetAllocator> *)
                 (this->_padding_ + 0xb0),(FRemoteObjectId *)((longlong)&local_160.Key + 4),
                 (bool *)&local_1a0);
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
LAB_1421e667a:
  if (*(ulonglong *)(lVar4 + 8) < *(ulonglong *)(local_1f8 + 8)) {
    local_1f8 = lVar4;
  }
LAB_1421e668b:
  pFVar27 = (FRemoteObjectId_u_0 *)(ulonglong)(uVar22 + 1);
  pFVar26 = pFVar26 + 2;
  iVar12 = (int)this->_padding_;
  if (iVar12 <= (int)(uVar22 + 1)) goto LAB_1421e66ae;
  goto LAB_1421e6500;
}

