// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Tick @ 1493b79f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNiagaraScriptExecutionContext::Tick
          (FNiagaraScriptExecutionContext *this,FNiagaraSystemInstance *param_1,
          ENiagaraSimTarget param_2)

{
  int *piVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  UNiagaraDataInterface *pUVar2;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar3;
  atomic<unsigned___int64> aVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TVar8;
  FVMExternalFunctionBindingInfo *this_01;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick> FVar15;
  TStatId TVar16;
  void *pvVar17;
  FNiagaraLWCConverter *pFVar18;
  uint uVar19;
  longlong *plVar20;
  FMRSWRecursiveAccessDetector *this_02;
  FScriptContainerElement *pFVar21;
  FDestructionSentinel *pFVar22;
  longlong lVar23;
  FName FVar24;
  longlong *plVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  longlong lVar31;
  TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar32;
  longlong lVar33;
  ulonglong uVar34;
  ForAnyElementType FVar35;
  uint local_288;
  char local_284;
  uint local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  longlong local_268;
  undefined1 local_260 [8];
  ForAnyElementType local_258;
  int local_250;
  FName local_248;
  byte local_240;
  longlong *local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_228;
  int local_220;
  TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *local_218;
  FName local_210;
  FColor_u_0 local_208 [2];
  FVMExternalFunctionBindingInfo *local_200;
  FName local_1f8;
  FNiagaraScriptExecutionParameterStore *local_1f0;
  longlong *local_1e8;
  FName local_1e0;
  FName local_1d0;
  FName local_1c8;
  longlong *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FSourceLocation local_198;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FString local_100;
  FString local_f0;
  FName local_e0;
  FName local_d8;
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  TVector<double>_u_0 local_88;
  FReadAccessScope local_68;
  FNiagaraLWCConverter local_50;
  
  if (((uint)this->_padding_ >> 1 & 1) == 0) goto LAB_1493b8d71;
  FVar15 = StatPtr_STAT_NiagaraScriptExecContextTick;
  if (StatPtr_STAT_NiagaraScriptExecContextTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick>)0x0) {
    pFVar14 = ::FName::FName(&local_d8,"STAT_NiagaraScriptExecContextTick");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_NiagaraScriptExecContextTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraScriptExecContextTick,
                        *pFVar14,L"Context Ticking","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar15;
  bVar7 = false;
  bVar6 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_1493b7b76:
    bVar7 = bVar10;
    bVar6 = bVar9;
    bVar9 = false;
    local_210 = local_1e0;
    FVar24 = local_1e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_1f8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                   ,0x122);
        bVar7 = true;
        bVar6 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493b7b76;
    local_210 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar9 = true;
  }
  lVar23 = this->_padding_;
  local_268 = lVar23;
  if (((lVar23 != 0) && (*(char *)(lVar23 + 0x2d8) != '\0')) && (param_2 == CPUSim)) {
    TVar16.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable;
    if (StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraRebindDataInterfaceFunctionTable>)0x0) {
      pFVar14 = ::FName::FName(&local_e0,"STAT_NiagaraRebindDataInterfaceFunctionTable");
      TVar16.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_NiagaraRebindDataInterfaceFunctionTable,*pFVar14,
                      L"Rebind DInterface Func Table","STATGROUP_Niagara","STATCAT_Niagara",
                      L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_198.Impl._Line = 0x128;
    local_198.Impl._Function =
         "bool __cdecl FNiagaraScriptExecutionContext::Tick(class FNiagaraSystemInstance *,enum ENiagaraSimTarget)"
    ;
    local_198.Impl._Column = 4;
    local_198.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_248,TVar16,CycleStat|ClearEveryFrame,false,&local_198);
    if (*(int *)(lVar23 + 0x228) != (int)this->_padding_) {
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
LAB_1493b8c90:
      if ((local_240 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_240 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_240 & 4) != 0) {
        FThreadStats::AddMessage(local_248,CycleScopeEnd);
      }
      local_240 = 0;
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FThreadStats::AddMessage(FVar24,CycleScopeEnd);
      }
      return false;
    }
    local_1f0 = UNiagaraScript::GetExecutionReadyParameterStore
                          ((UNiagaraScript *)this->_padding_,CPUSim);
    if ((local_1f0 == (FNiagaraScriptExecutionParameterStore *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptParameterStore != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                            ,0x133,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    if (param_1 == (FNiagaraSystemInstance *)0x0) {
      if ((*(int *)(lVar23 + 0x1d4) != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ScriptExecutableData.NumUserPtrs == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                              ,0x151,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
    }
    else {
      TArray<void_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
                ((TArray<void_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 *(int *)(lVar23 + 0x1d4),No);
      uVar27 = 0;
      iVar13 = (int)this->_padding_;
      if (0 < iVar13) {
        lVar31 = 0;
        lVar33 = 0;
        do {
          uVar28 = 0;
          if ((int)uVar27 < iVar13) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          lVar23 = local_268;
          pUVar2 = *(UNiagaraDataInterface **)(this->_padding_ + lVar33);
          uVar28 = 0;
          if ((int)uVar27 < *(int *)(local_268 + 0x228)) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          uVar28 = *(uint *)(lVar31 + 8 + *(longlong *)(lVar23 + 0x220));
          if (uVar28 != 0xffffffff) {
            pvVar17 = FNiagaraSystemInstance::FindDataInterfaceInstanceData(param_1,pUVar2);
            if (pvVar17 == (void *)0x0) {
              if ((byte)LogNiagara._0_1_ < 3) goto LAB_1493b8c90;
              local_1d0 = (FName)param_1->System->_padding_;
              ::FName::ToString(&local_1d0,&local_1a8);
              local_1c8 = (FName)pUVar2->_padding_;
              ::FName::ToString(&local_1c8,&local_1b8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              goto LAB_1493b8c86;
            }
            uVar19 = 0;
            if ((int)uVar28 < (int)this->_padding_) {
              uVar19 = ~uVar28 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
            *(void **)(this->_padding_ + (longlong)(int)uVar28 * 8) = pvVar17;
          }
          uVar27 = uVar27 + 1;
          lVar33 = lVar33 + 8;
          lVar31 = lVar31 + 0x50;
          iVar13 = (int)this->_padding_;
          lVar23 = local_268;
        } while ((int)uVar27 < iVar13);
      }
    }
    uVar27 = *(uint *)(lVar23 + 0x238);
    uVar34 = (ulonglong)(int)uVar27;
    plVar25 = &this->_padding_;
    local_280 = uVar27;
    local_1e8 = plVar25;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    iVar13 = *(int *)((longlong)&this->_padding_ + 4);
    plVar20 = &this->_padding_;
    *(undefined4 *)plVar20 = 0;
    FVar35.Data = (FScriptContainerElement *)((longlong)&this->_padding_ + 4);
    local_1c0 = plVar20;
    if (iVar13 < (int)uVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar27,(ForAnyElementType *)plVar25,0,(int *)FVar35.Data);
    }
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar27,(ForAnyElementType *)plVar25,(int *)plVar20,(int *)FVar35.Data);
    memset((void *)(*plVar25 + (longlong)iVar13 * 8),0,uVar34 << 3);
    pTVar32 = &this->LocalFunctionTable;
    pFVar21 = (FScriptContainerElement *)&(this->LocalFunctionTable).ArrayMax;
    pTVar3 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
              *)(pTVar32->AllocatorInstance).Data;
    iVar13 = (this->LocalFunctionTable).ArrayNum;
    local_218 = pTVar32;
    if ((this->LocalFunctionTable).ArrayMax < 0) {
      DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
                (pTVar3,iVar13);
      (this->LocalFunctionTable).ArrayNum = 0;
      if (*(int *)pFVar21 != 0) {
        plVar20 = (longlong *)((ulonglong)plVar20 & 0xffffffff00000000);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar32->AllocatorInstance,0,(int *)pFVar21);
        FVar35.Data = pFVar21;
      }
    }
    else {
      DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
                (pTVar3,iVar13);
      (this->LocalFunctionTable).ArrayNum = 0;
    }
    local_278.Data = (FScriptContainerElement *)0x0;
    local_270 = 0;
    if (0 < (int)uVar27) {
      FVar35.Data = (FScriptContainerElement *)((longlong)&local_270 + 4);
      plVar20 = (longlong *)((ulonglong)plVar20 & 0xffffffff00000000);
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar27,&local_278,0,(int *)FVar35.Data);
    }
    local_284 = '\x01';
    local_288 = 0;
    if (0 < (int)uVar27) {
      piVar1 = &(this->LocalFunctionTable).ArrayMax;
      do {
        uVar27 = local_288;
        plVar25 = (longlong *)0x0;
        pFVar21 = (FScriptContainerElement *)(longlong)*(int *)(lVar23 + 0x238);
        uVar28 = 0;
        if ((int)local_288 < *(int *)(lVar23 + 0x238)) {
          uVar28 = ~local_288 >> 0x1f;
        }
        if (uVar28 == 0) {
          plVar20 = (longlong *)(longlong)(int)local_288;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          FVar35.Data = pFVar21;
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
        }
        local_200 = (FVMExternalFunctionBindingInfo *)
                    (*(longlong *)(lVar23 + 0x230) + (longlong)(int)uVar27 * 0x58);
        local_260 = (undefined1  [8])0x0;
        local_258.Data = (FScriptContainerElement *)0x0;
        local_250 = 0;
        bVar10 = UNiagaraFunctionLibrary::GetVectorVMFastPathExternalFunction
                           (local_200,
                            (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_260);
        if (bVar10) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,&local_d0);
          if (((local_250 == 0) || (local_258.Data == (FScriptContainerElement *)0x0)) ||
             (cVar12 = (**(code **)(*(longlong *)local_258.Data + 0x38))(), cVar12 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_d0);
            goto LAB_1493b8448;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_d0);
          pFVar21 = (pTVar32->AllocatorInstance).Data;
          if ((pFVar21 <= (FScriptContainerElement *)local_260) &&
             ((FScriptContainerElement *)local_260 < pFVar21 + (longlong)*piVar1 * 0x18)) {
            plVar20 = (longlong *)local_260;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            FVar35.Data = pFVar21;
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
          }
          iVar13 = pTVar32->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar32->AllocatorInstance,piVar1);
          }
          pTVar32->ArrayNum = iVar13 + 1;
          pFVar21 = (pTVar32->AllocatorInstance).Data + (longlong)iVar13 * 0x18;
          ((FMRSWRecursiveAccessDetector *)&pFVar21->field_0x0)->State =
               (atomic<unsigned___int64>)0x0;
          ((FMRSWRecursiveAccessDetector *)&pFVar21[8].field_0x0)->State =
               (atomic<unsigned___int64>)0x0;
          *(undefined4 *)&((FMRSWRecursiveAccessDetector *)&pFVar21[0x10].field_0x0)->State = 0;
          if ((FScriptContainerElement *)local_260 != pFVar21) {
            local_230.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_228.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_220 = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,&local_68
                      );
            if ((local_250 != 0) && (local_258.Data != (FScriptContainerElement *)0x0)) {
              (**(code **)(*(longlong *)local_258.Data + 0x50))(local_258.Data,&local_230);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_68);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_230,(FWriteAccessScope *)&local_178);
            iVar13 = local_220;
            TVar8.AccessDetector.State = local_228.AccessDetector.State;
            local_228.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_220 = 0;
            if (local_178.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar21,
                       (FWriteAccessScope *)&local_160);
            if ((*(int *)&((FMRSWRecursiveAccessDetector *)&pFVar21[0x10].field_0x0)->State != 0) &&
               (aVar4 = ((FMRSWRecursiveAccessDetector *)&pFVar21[8].field_0x0)->State,
               aVar4 != (atomic<unsigned___int64>)0x0)) {
              (*(code *)**(undefined8 **)aVar4)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(pFVar21 + 8),0,0,0x10);
              *(undefined4 *)&((FMRSWRecursiveAccessDetector *)&pFVar21[0x10].field_0x0)->State = 0;
            }
            aVar4 = ((FMRSWRecursiveAccessDetector *)&pFVar21[8].field_0x0)->State;
            if (aVar4 != (atomic<unsigned___int64>)0x0) {
              FMemory::Free((void *)aVar4);
            }
            ((FMRSWRecursiveAccessDetector *)&pFVar21[8].field_0x0)->State =
                 (atomic<unsigned___int64>)TVar8.AccessDetector.State;
            *(int *)&((FMRSWRecursiveAccessDetector *)&pFVar21[0x10].field_0x0)->State = iVar13;
            if (local_160.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_230,(FWriteAccessScope *)&local_148);
            if ((local_220 != 0) &&
               (local_228.AccessDetector.State != (atomic<unsigned___int64>)0x0)) {
              (*(code *)**(undefined8 **)local_228.AccessDetector.State)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_228,0,0,0x10);
              local_220 = 0;
            }
            if (local_148.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
            }
            if (local_228.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
              FMemory::Free((void *)local_228.AccessDetector.State);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
            uVar34 = (ulonglong)local_280;
          }
          if ((local_278.Data <= (FScriptContainerElement *)&local_288) &&
             ((FScriptContainerElement *)&local_288 < local_278.Data + (longlong)local_270._4_4_ * 4
             )) {
            plVar20 = (longlong *)&local_288;
            FVar35.Data = local_278.Data;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
          }
          iVar13 = (int)local_270;
          if ((int)local_270 == local_270._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_278,(int *)((longlong)&local_270 + 4));
          }
          local_270 = CONCAT44(local_270._4_4_,iVar13 + 1);
          *(uint *)(local_278.Data + (longlong)iVar13 * 4) = local_288;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
                     (FWriteAccessScope *)&local_130);
          if ((local_250 != 0) && (local_258.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_258.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_258,0,0,0x10);
            local_250 = 0;
          }
          if (local_130.bDestroyed == false) {
            pFVar22 = &local_130;
            this_02 = local_130.Accessor;
            goto LAB_1493b8769;
          }
        }
        else {
LAB_1493b8448:
          if (0 < *(int *)(lVar23 + 0x228)) {
            lVar31 = 0;
            plVar29 = plVar25;
            do {
              pFVar21 = (FScriptContainerElement *)(longlong)*(int *)(lVar23 + 0x228);
              uVar28 = (uint)plVar29;
              uVar27 = 0;
              if ((int)uVar28 < *(int *)(lVar23 + 0x228)) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if (uVar27 == 0) {
                plVar20 = (longlong *)(longlong)(int)uVar28;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                FVar35.Data = pFVar21;
                if (bVar10) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              iVar13 = (int)this->_padding_;
              pFVar21 = (FScriptContainerElement *)(longlong)iVar13;
              pFVar14 = (FName *)(*(longlong *)(lVar23 + 0x220) + lVar31);
              uVar27 = 0;
              if ((int)uVar28 < iVar13) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (plVar20 = plVar25,
                 bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 FVar35.Data = pFVar21, bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar11 = (*pcVar5)();
                return (bool)uVar11;
              }
              lVar23 = local_268;
              plVar29 = *(longlong **)((longlong)plVar25 * 8 + this->_padding_);
              local_238 = plVar29;
              if (*pFVar14 == local_200->OwnerName) {
                if (((-1 < (int)local_288) && ((int)local_288 < *(int *)(local_268 + 0x248))) &&
                   ((-1 < (int)uVar28 &&
                    (iVar13 = (int)local_1f0->_padding_,
                    pFVar21 = (FScriptContainerElement *)(longlong)iVar13, (int)uVar28 < iVar13))))
                {
                  if ((int)uVar28 < 0) {
                    plVar20 = (longlong *)(longlong)(int)uVar28;
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    FVar35.Data = pFVar21;
                    if (bVar10) {
                      pcVar5 = (code *)swi(3);
                      uVar11 = (*pcVar5)();
                      return (bool)uVar11;
                    }
                  }
                  plVar29 = local_238;
                  uVar27 = local_288;
                  if (local_238 == *(longlong **)((longlong)plVar25 * 8 + local_1f0->_padding_)) {
                    pFVar21 = (FScriptContainerElement *)(longlong)*(int *)(lVar23 + 0x248);
                    uVar28 = 0;
                    if ((int)local_288 < *(int *)(lVar23 + 0x248)) {
                      uVar28 = ~local_288 >> 0x1f;
                    }
                    if (uVar28 == 0) {
                      plVar20 = (longlong *)(longlong)(int)local_288;
                      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      FVar35.Data = pFVar21;
                      if (bVar10) {
                        pcVar5 = (code *)swi(3);
                        uVar11 = (*pcVar5)();
                        return (bool)uVar11;
                      }
                    }
                    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                              (*(longlong *)(lVar23 + 0x240) + (longlong)(int)uVar27 * 0x18);
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                              (this_00,&local_b8);
                    if (((*(int *)&this_00[2].AccessDetector.State != 0) &&
                        (aVar4 = this_00[1].AccessDetector.State,
                        aVar4 != (atomic<unsigned___int64>)0x0)) &&
                       (cVar12 = (**(code **)(*(longlong *)aVar4 + 0x38))(), cVar12 != '\0')) {
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                      ~FReadAccessScope(&local_b8);
                      plVar25 = (longlong *)(longlong)(int)local_288;
                      pFVar21 = (FScriptContainerElement *)(longlong)(int)*local_1c0;
                      uVar27 = 0;
                      if ((int)local_288 < (int)*local_1c0) {
                        uVar27 = ~local_288 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (plVar20 = plVar25,
                         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), FVar35.Data = pFVar21, bVar10)) {
                        pcVar5 = (code *)swi(3);
                        uVar11 = (*pcVar5)();
                        return (bool)uVar11;
                      }
                      *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)
                       (*local_1e8 + (longlong)plVar25 * 8) = this_00;
                      pTVar32 = local_218;
                      if ((pFVar14[1].ComparisonIndex.Value != 0xffffffff) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ScriptInfo.UserPtrIdx == INDEX_NONE",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                                              ,0x17c,L""), pTVar32 = local_218, bVar10)) {
                        pcVar5 = (code *)swi(3);
                        uVar11 = (*pcVar5)();
                        return (bool)uVar11;
                      }
                      break;
                    }
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                    ~FReadAccessScope(&local_b8);
                  }
                }
                uVar27 = pFVar14[1].ComparisonIndex.Value;
                if (uVar27 == 0xffffffff) {
                  uVar26 = 0;
                }
                else {
                  iVar13 = (int)this->_padding_;
                  pFVar21 = (FScriptContainerElement *)(longlong)iVar13;
                  uVar28 = 0;
                  if ((int)uVar27 < iVar13) {
                    uVar28 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (plVar20 = (longlong *)(longlong)(int)uVar27,
                     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), FVar35.Data = pFVar21, bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  uVar26 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar27 * 8);
                }
                pTVar32 = &this->LocalFunctionTable;
                iVar13 = (this->LocalFunctionTable).ArrayNum;
                if (iVar13 == *piVar1) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar32->AllocatorInstance,piVar1);
                }
                (this->LocalFunctionTable).ArrayNum = iVar13 + 1;
                pFVar21 = (pTVar32->AllocatorInstance).Data + (longlong)iVar13 * 0x18;
                DefaultConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
                          (pFVar21,1);
                if ((local_278.Data <= (FScriptContainerElement *)&local_288) &&
                   ((FScriptContainerElement *)&local_288 <
                    local_278.Data + (longlong)local_270._4_4_ * 4)) {
                  plVar20 = (longlong *)&local_288;
                  FVar35.Data = local_278.Data;
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar10) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                }
                iVar13 = (int)local_270;
                if ((int)local_270 == local_270._4_4_) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                }
                this_01 = local_200;
                local_270 = CONCAT44(local_270._4_4_,iVar13 + 1);
                *(uint *)(local_278.Data + (longlong)iVar13 * 4) = local_288;
                if (plVar29 != (longlong *)0x0) {
                  (**(code **)(*plVar29 + 0x330))
                            (plVar29,local_200,uVar26,pFVar21,plVar20,FVar35.Data);
                }
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar21,
                           &local_a0);
                if (((*(int *)(pFVar21 + 0x10) == 0) ||
                    ((atomic<unsigned___int64>)*(FMRSWRecursiveAccessDetector *)(pFVar21 + 8) ==
                     (atomic<unsigned___int64>)0x0)) ||
                   (cVar12 = (**(code **)(*(longlong *)
                                           *(FMRSWRecursiveAccessDetector *)(pFVar21 + 8) + 0x38))()
                   , cVar12 == '\0')) {
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_a0);
                  if (1 < (byte)LogNiagara._0_1_) {
                    ::FName::ToString(&this_01->Name,&local_100);
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara)
                    ;
                    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_100.Data.AllocatorInstance.Data);
                    }
                  }
                  local_284 = '\0';
                  lVar23 = local_268;
                }
                else {
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_a0);
                  lVar23 = local_268;
                }
                break;
              }
              plVar29 = (longlong *)(ulonglong)(uVar28 + 1);
              plVar25 = (longlong *)((longlong)plVar25 + 1);
              lVar31 = lVar31 + 0x50;
              pTVar32 = local_218;
            } while ((int)(uVar28 + 1) < *(int *)(local_268 + 0x228));
            uVar34 = (ulonglong)local_280;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
                     (FWriteAccessScope *)&local_118);
          if ((local_250 != 0) && (local_258.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_258.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_258,0,0,0x10);
            local_250 = 0;
          }
          if (local_118.bDestroyed == false) {
            pFVar22 = &local_118;
            this_02 = local_118.Accessor;
LAB_1493b8769:
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_02,pFVar22);
          }
        }
        if (local_258.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_260);
        local_288 = local_288 + 1;
        FVar24 = local_210;
      } while ((int)local_288 < (int)uVar34);
    }
    plVar25 = local_1e8;
    uVar27 = 0;
    lVar31 = (longlong)(int)local_270;
    if (0 < lVar31) {
      lVar33 = 0;
      do {
        uVar28 = 0;
        if ((int)uVar27 < (this->LocalFunctionTable).ArrayNum) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        pFVar21 = (this->LocalFunctionTable).AllocatorInstance.Data;
        lVar23 = (longlong)(int)uVar27;
        uVar28 = 0;
        if ((int)uVar27 < (int)local_270) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uVar28 = *(uint *)(local_278.Data + lVar33 * 4);
        uVar19 = 0;
        if ((int)uVar28 < (int)this->_padding_) {
          uVar19 = ~uVar28 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uVar27 = uVar27 + 1;
        lVar33 = lVar33 + 1;
        *(FScriptContainerElement **)(*plVar25 + (longlong)(int)uVar28 * 8) =
             pFVar21 + lVar23 * 0x18;
        FVar24 = local_210;
        lVar23 = local_268;
      } while (lVar33 < lVar31);
    }
    uVar30 = 0;
    uVar34 = uVar30;
    if (0 < (int)this->_padding_) {
      do {
        uVar28 = (uint)uVar30;
        uVar27 = 0;
        if ((int)uVar28 < (int)this->_padding_) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        if ((*(longlong *)(uVar34 + this->_padding_) == 0) && (2 < (byte)LogNiagara._0_1_)) {
          uVar27 = 0;
          if ((int)uVar28 < *(int *)(lVar23 + 0x238)) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          ::FName::ToString((FName *)((longlong)(int)uVar28 * 0x58 + *(longlong *)(lVar23 + 0x230)),
                            &local_f0);
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_Functio_151e05c90,
                     (FLogCategoryBase *)&LogNiagara);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
        uVar30 = (ulonglong)(uVar28 + 1);
        FVar24 = local_210;
        uVar34 = uVar34 + 8;
      } while ((int)(uVar28 + 1) < (int)this->_padding_);
    }
    if (local_284 == '\0') {
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      local_1a8.Data.AllocatorInstance.Data = local_278.Data;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
        local_1a8.Data.AllocatorInstance.Data = local_278.Data;
      }
LAB_1493b8c86:
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      goto LAB_1493b8c90;
    }
    if (local_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data);
    }
    if ((local_240 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_240 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_240 & 4) != 0) {
      FThreadStats::AddMessage(local_248,CycleScopeEnd);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
LAB_1493b8d71:
  if ((param_1 != (FNiagaraSystemInstance *)0x0) && (((uint)this->_padding_ >> 3 & 1) != 0)) {
    pFVar18 = FNiagaraSystemInstance::GetLWCConverter(param_1,&local_50,false);
    local_88._s_0.X = (pFVar18->SystemWorldPos).field0_0x0._s_0.X;
    local_88._s_0.Y = (pFVar18->SystemWorldPos).field0_0x0._s_0.Y;
    local_88._s_0.Z = (pFVar18->SystemWorldPos).field0_0x0._s_0.Z;
    FNiagaraParameterStore::ResolvePositions
              ((FNiagaraParameterStore *)&this->_padding_,(FNiagaraLWCConverter *)&local_88._s_0);
  }
  FNiagaraParameterStore::Tick((FNiagaraParameterStore *)&this->_padding_);
  return true;
}

