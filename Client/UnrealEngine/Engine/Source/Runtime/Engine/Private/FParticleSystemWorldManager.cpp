// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// ProcessTickList<1> @ 1481c32d0

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
FParticleSystemWorldManager::ProcessTickList<1>
          (FParticleSystemWorldManager *this,float param_1,ELevelTick param_2,ETickingGroup param_3,
          TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_> *param_4,
          TRefCountPtr<FBaseGraphTask> *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  UParticleSystemComponent *this_00;
  UParticleSystem *this_01;
  ForElementType<int> FVar4;
  FBaseGraphTask *pFVar5;
  FParticleSystemWorldManager *pFVar6;
  FParticleSystemWorldManager *pFVar7;
  code *pcVar8;
  float fVar9;
  FParticleSystemWorldManager *pFVar10;
  FTickList *this_02;
  FScriptContainerElement *pFVar11;
  TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  TRefCountPtr<FBaseGraphTask> TVar16;
  UWorld *pUVar17;
  ForElementType<int> FVar18;
  ulonglong uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  ForElementType<int> FVar23;
  uint uVar24;
  longlong lVar25;
  ForElementType<int> *pFVar26;
  uint uVar27;
  float fVar28;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [2];
  uint local_1f4;
  uint local_1f0 [2];
  uint local_1e8;
  FLLMScope local_1e4;
  FLLMScope local_1e0;
  ELevelTick local_1dc;
  uint local_1d8;
  ETickingGroup local_1d4;
  FParticleSystemWorldManager *local_1d0;
  FParticleSystemWorldManager *local_1c8;
  ForElementType<int> *local_1c0;
  FScriptContainerElement *local_1b8;
  FParticleSystemWorldManager *local_1b0;
  FTickList *local_1a8;
  TRefCountPtr<FBaseGraphTask> *local_1a0;
  FScriptContainerElement *local_198;
  FString local_190;
  FString local_180;
  undefined8 *local_170;
  FParticleSystemWorldManager *local_168;
  FConstructor local_160;
  FParticleSystemWorldManager *local_158;
  FMemScope local_150;
  ForElementType<int> local_148;
  FScriptContainerElement *local_140;
  TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_> *local_138;
  FParticleSystemWorldManager *local_130;
  FConstructor local_128;
  FParticleSystemWorldManager *local_120;
  FMemScope local_118 [2];
  ForElementType<int> local_108;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1a0 = param_5;
  uVar27 = 0;
  if ((int)param_3 < param_4->ArrayNum) {
    uVar27 = ~param_3 >> 0x1f;
  }
  local_138 = param_4;
  local_1e8 = 0;
  local_1dc = param_2;
  local_1d4 = param_3;
  local_1b0 = this;
  if ((uVar27 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = __real_3f800000;
  local_1a8 = (FTickList *)((param_4->AllocatorInstance).Data + (longlong)(int)param_3 * 0x18);
  local_108.SecondaryData = (ForElementType<int>)0x0;
  local_80 = 0;
  local_7c = 0x20;
  local_1d8 = (local_1a8->TickList).ArrayNum;
  uVar19 = (ulonglong)(int)local_1d8;
  pFVar21 = (local_1a8->TickList).AllocatorInstance.Data;
  local_140 = pFVar21 + uVar19 * 4;
  local_148 = (ForElementType<int>)(longlong)(int)param_3;
  uVar27 = 0;
  do {
    pFVar11 = local_140;
    FVar23 = local_148;
    local_1b8 = pFVar21;
    if ((local_1a8->TickList).ArrayNum != (int)uVar19) {
      local_1f8 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    pTVar12 = local_138;
    if (pFVar21 == pFVar11) {
      if (local_1d4 != TG_LastDemotable) {
        uVar27 = local_1d4 + TG_StartPhysics;
        uVar20 = 0;
        if ((int)uVar27 < local_138->ArrayNum) {
          uVar20 = ~uVar27 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_02 = local_1a8;
        uVar20 = 0;
        pFVar21 = (pTVar12->AllocatorInstance).Data;
        if (0 < local_80) {
          lVar22 = 0;
          do {
            uVar24 = ~uVar20 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar20 < local_80) {
              uVar15 = uVar24;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar23 = (ForElementType<int>)&local_108;
            if (local_108.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_108.SecondaryData;
            }
            FTickList::Remove(this_02,*(int *)((longlong)FVar23 + lVar22));
            uVar15 = 0;
            if ((int)uVar20 < local_80) {
              uVar15 = uVar24;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar23 = (ForElementType<int>)&local_108;
            if (local_108.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_108.SecondaryData;
            }
            FTickList::Add((FTickList *)(pFVar21 + (longlong)(int)uVar27 * 0x18),
                           *(int *)((longlong)FVar23 + lVar22));
            uVar15 = 0;
            if ((int)uVar20 < local_80) {
              uVar15 = uVar24;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar23 = (ForElementType<int>)&local_108;
            if (local_108.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_108.SecondaryData;
            }
            uVar15 = *(uint *)((longlong)FVar23 + lVar22);
            uVar24 = 0;
            if ((int)uVar15 < (this->PSCTickData).ArrayNum) {
              uVar24 = ~uVar15 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar20 = uVar20 + 1;
            lVar22 = lVar22 + 4;
            (this->PSCTickData).AllocatorInstance.Data[(longlong)(int)uVar15 * 0x10 + 0xc] =
                 SUB41(uVar27,0);
          } while ((int)uVar20 < local_80);
        }
      }
      local_80 = 0;
      if (local_7c < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,0,&local_108,0,&local_7c);
      }
      if (0 < (this->AsyncTickBatch).ArrayNum) {
        FLLMScope::FLLMScope(&local_1e0,Particles,false,None,Default,true);
        FMemScope::FMemScope(local_118,Particles,true);
        local_128.Prerequisites =
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)0x0;
        local_130 = this;
        TGraphTask<FParticleManagerAsyncTask>::FConstructor::
        ConstructAndDispatchWhenReady<FParticleSystemWorldManager_*,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&>
                  (&local_128,&local_1c8,
                   (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   &local_130);
        pFVar10 = local_1c8;
        local_120 = local_1c8;
        pFVar5 = local_1a0->Reference;
        if (local_1c8 != (FParticleSystemWorldManager *)0x0) {
          LOCK();
          piVar1 = &(local_1c8->ManagedPSCs).ArrayNum;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FBaseGraphTask::DontCompleteUntil(pFVar5,(FBaseGraphTask *)&local_120);
        FVar23 = (this->AsyncTickBatch).AllocatorInstance.SecondaryData;
        iVar14 = (this->AsyncTickBatch).ArrayNum;
        if (FVar23 == (ForElementType<int>)0x0) {
          FVar23 = (ForElementType<int>)&this->AsyncTickBatch;
        }
        FVar4 = (ForElementType<int>)((longlong)FVar23 + (longlong)iVar14 * 4);
        while( true ) {
          if ((this->AsyncTickBatch).ArrayNum != iVar14) {
            local_1f6[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1f6);
          }
          if (FVar23 == FVar4) break;
          uVar27 = *(uint *)FVar23;
          uVar20 = 0;
          if ((int)uVar27 < (this->ManagedPSCs).ArrayNum) {
            uVar20 = ~uVar27 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar22 = *(longlong *)
                    ((this->ManagedPSCs).AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
          pFVar7 = *(FParticleSystemWorldManager **)(lVar22 + 0x870);
          if (pFVar7 != pFVar10) {
            *(FParticleSystemWorldManager **)(lVar22 + 0x870) = pFVar10;
            if (pFVar10 != (FParticleSystemWorldManager *)0x0) {
              LOCK();
              piVar1 = &(pFVar10->ManagedPSCs).ArrayNum;
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            if (pFVar7 != (FParticleSystemWorldManager *)0x0) {
              LOCK();
              piVar1 = &(pFVar7->ManagedPSCs).ArrayNum;
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)pFVar7->_padding_)(pFVar7,1);
              }
            }
          }
          FVar23 = (ForElementType<int>)((longlong)FVar23 + 4);
        }
        (this->AsyncTickBatch).ArrayNum = 0;
        if ((this->AsyncTickBatch).ArrayMax < 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,0,&(this->AsyncTickBatch).AllocatorInstance,0,
                     &(this->AsyncTickBatch).ArrayMax);
        }
        if (local_1c8 != (FParticleSystemWorldManager *)0x0) {
          LOCK();
          piVar1 = &(local_1c8->ManagedPSCs).ArrayNum;
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)local_1c8->_padding_)(local_1c8,1);
          }
        }
        FMemScope::~FMemScope(local_118);
        FLLMScope::~FLLMScope(&local_1e0);
      }
      if (local_108.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    local_1f4 = *(uint *)pFVar21;
    lVar22 = (longlong)(int)local_1f4;
    uVar20 = 0;
    if ((int)local_1f4 < (this->ManagedPSCs).ArrayNum) {
      uVar20 = ~local_1f4 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar25 = (longlong)(int)local_1f4;
    this_00 = *(UParticleSystemComponent **)
               ((this->ManagedPSCs).AllocatorInstance.Data + lVar22 * 8);
    uVar20 = 0;
    if ((int)local_1f4 < (this->PSCTickData).ArrayNum) {
      uVar20 = ~local_1f4 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar21 = (this->PSCTickData).AllocatorInstance.Data;
    pFVar26 = (ForElementType<int> *)(lVar25 * 0x10);
    local_1c0 = pFVar26;
    local_198 = pFVar21;
    if (((((ForElementType<int> *)pFVar26->InlineData)->InlineData + 0xd)[(longlong)pFVar21] & 2) ==
        0) {
      if ((*(longlong *)(pFVar21 + (longlong)pFVar26->InlineData) != 0) &&
         (bVar13 = FTickFunction::IsCompletionHandleValid
                             ((FTickFunction *)
                              (*(longlong *)(pFVar21 + (longlong)pFVar26->InlineData) + 0x38)),
         bVar13)) {
        if (FVar23 == (ForElementType<int>)0x6) {
LAB_1481c34fe:
          bVar13 = true;
        }
        else {
          uVar27 = uVar27 | 1;
          local_1e8 = uVar27;
          TVar16 = FTickFunction::GetCompletionHandle
                             ((FTickFunction *)
                              (*(longlong *)(pFVar21 + (longlong)pFVar26->InlineData) + 0x38));
          if (*(char *)(*(longlong *)TVar16.Reference + 0xd0) != '\0') goto LAB_1481c34fe;
          bVar13 = false;
        }
        if (((uVar27 & 1) != 0) && (local_1e8 = uVar27 & 0xfffffffe, local_170 != (undefined8 *)0x0)
           ) {
          LOCK();
          piVar1 = (int *)(local_170 + 6);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar14 == 1) && (local_170 != (undefined8 *)0x0)) {
            (**(code **)*local_170)(local_170,1);
          }
        }
        if (!bVar13) {
          FVar23 = (ForElementType<int>)&local_108;
          if (local_108.SecondaryData != (ForElementType<int>)0x0) {
            FVar23 = local_108.SecondaryData;
          }
          if ((ulonglong)FVar23 <= &local_1f4) {
            FVar23 = (ForElementType<int>)&local_108;
            if (local_108.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_108.SecondaryData;
            }
            if ((&local_1f4 < (uint *)((longlong)FVar23 + (longlong)local_7c * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar14 = local_80;
          if (local_80 == local_7c) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_108,&local_7c);
          }
          local_80 = iVar14 + 1;
          FVar23 = (ForElementType<int>)&local_108;
          if (local_108.SecondaryData != (ForElementType<int>)0x0) {
            FVar23 = local_108.SecondaryData;
          }
          *(uint *)((longlong)FVar23 + (longlong)iVar14 * 4) = local_1f4;
          goto LAB_1481c3a85;
        }
      }
      if ((*(longlong *)&this_00->field_0xb0 == 0) &&
         (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
         pUVar17 == (UWorld *)0x0)) {
        if (2 < (byte)LogParticles._0_1_) {
          this_01 = (this_00->Template).field0_0x0.DebugPtr;
          if ((this_01 == (UParticleSystem *)0x0) || (this_01->_padding_ == 0)) {
            ::FString::FString(&local_180,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_180,(UObject *)0x0,None);
          }
          if (*(longlong *)&this_00->field_0x10 == 0) {
            ::FString::FString(&local_190,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_190,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<3>
                    (&`private:_void___cdecl_FParticleSystemWorldManager::ProcessTickList<1>(float,ELevelTick,ETickingGroup,TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_>&___ptr64,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                      ::__l20::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          pFVar21 = local_198;
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
            pFVar21 = local_198;
          }
        }
        this_00->bPendingManagerAdd = 0;
        this_00->bPendingManagerRemove = 0;
        this_00->bPendingManagerRemove = -1;
        (((ForElementType<int> *)local_1c0->InlineData)->InlineData + 0xd)[(longlong)pFVar21] =
             (((ForElementType<int> *)local_1c0->InlineData)->InlineData + 0xd)[(longlong)pFVar21] &
             0xfb | 2;
      }
      else {
        bVar13 = UParticleSystemComponent::CanSkipTickDueToVisibility(this_00);
        if (!bVar13) {
          fVar28 = fVar9;
          if (*(longlong *)&this_00->field_0xa8 != 0) {
            fVar28 = *(float *)(*(longlong *)&this_00->field_0xa8 + 0x68);
          }
          (**(code **)(*(longlong *)this_00 + 0x410))(this_00,param_1 * fVar28);
          UParticleSystemComponent::MarshalParamsForAsyncTick(this_00);
          FVar23 = (ForElementType<int>)&this->AsyncTickBatch;
          FVar4 = (this->AsyncTickBatch).AllocatorInstance.SecondaryData;
          local_1f0[0] = local_1f4;
          FVar18 = FVar23;
          if (FVar4 != (ForElementType<int>)0x0) {
            FVar18 = FVar4;
          }
          local_1c0 = (ForElementType<int> *)FVar23;
          if ((ulonglong)FVar18 <= local_1f0) {
            FVar18 = FVar23;
            if (FVar4 != (ForElementType<int>)0x0) {
              FVar18 = FVar4;
            }
            if ((local_1f0 <
                 (uint *)((longlong)FVar18 + (longlong)(this->AsyncTickBatch).ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar14 = (this->AsyncTickBatch).ArrayNum;
          if (iVar14 == (this->AsyncTickBatch).ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar23,&(this->AsyncTickBatch).ArrayMax
                               );
          }
          (this->AsyncTickBatch).ArrayNum = iVar14 + 1;
          FVar4 = (this->AsyncTickBatch).AllocatorInstance.SecondaryData;
          FVar18 = FVar23;
          if (FVar4 != (ForElementType<int>)0x0) {
            FVar18 = FVar4;
          }
          *(uint *)((longlong)FVar18 + (longlong)iVar14 * 4) = local_1f0[0];
          iVar14 = (this->AsyncTickBatch).ArrayNum;
          if ((iVar14 == GParticleManagerAsyncBatchSize) && (0 < iVar14)) {
            FLLMScope::FLLMScope(&local_1e4,Particles,false,None,Default,true);
            FMemScope::FMemScope(&local_150,Particles,true);
            local_160.Prerequisites =
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0;
            local_168 = this;
            TGraphTask<FParticleManagerAsyncTask>::FConstructor::
            ConstructAndDispatchWhenReady<FParticleSystemWorldManager_*,TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&>
                      (&local_160,&local_1d0,
                       (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                       &local_168);
            pFVar10 = local_1d0;
            local_158 = local_1d0;
            pFVar5 = local_1a0->Reference;
            if (local_1d0 != (FParticleSystemWorldManager *)0x0) {
              LOCK();
              piVar1 = &(local_1d0->ManagedPSCs).ArrayNum;
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            FBaseGraphTask::DontCompleteUntil(pFVar5,(FBaseGraphTask *)&local_158);
            pFVar7 = local_1b0;
            FVar4 = (this->AsyncTickBatch).AllocatorInstance.SecondaryData;
            iVar14 = (this->AsyncTickBatch).ArrayNum;
            if (FVar4 != (ForElementType<int>)0x0) {
              FVar23 = FVar4;
            }
            FVar4 = (ForElementType<int>)((longlong)FVar23 + (longlong)iVar14 * 4);
            while( true ) {
              if ((this->AsyncTickBatch).ArrayNum != iVar14) {
                local_1f7 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_1f7);
              }
              if (FVar23 == FVar4) break;
              uVar27 = *(uint *)FVar23;
              uVar20 = 0;
              if ((int)uVar27 < (pFVar7->ManagedPSCs).ArrayNum) {
                uVar20 = ~uVar27 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar22 = *(longlong *)
                        ((pFVar7->ManagedPSCs).AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
              pFVar6 = *(FParticleSystemWorldManager **)(lVar22 + 0x870);
              if (pFVar6 != pFVar10) {
                *(FParticleSystemWorldManager **)(lVar22 + 0x870) = pFVar10;
                if (pFVar10 != (FParticleSystemWorldManager *)0x0) {
                  LOCK();
                  piVar1 = &(pFVar10->ManagedPSCs).ArrayNum;
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                if (pFVar6 != (FParticleSystemWorldManager *)0x0) {
                  LOCK();
                  piVar1 = &(pFVar6->ManagedPSCs).ArrayNum;
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)pFVar6->_padding_)(pFVar6,1);
                  }
                }
              }
              FVar23 = (ForElementType<int>)((longlong)FVar23 + 4);
            }
            iVar14 = *(int *)(local_1c0[1].InlineData + 4);
            local_1c0[1].InlineData[0] = '\0';
            local_1c0[1].InlineData[1] = '\0';
            local_1c0[1].InlineData[2] = '\0';
            local_1c0[1].InlineData[3] = '\0';
            if (iVar14 < 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,0,local_1c0,0,(int *)(local_1c0[1].InlineData + 4));
            }
            if (local_1d0 != (FParticleSystemWorldManager *)0x0) {
              LOCK();
              piVar1 = &(local_1d0->ManagedPSCs).ArrayNum;
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)local_1d0->_padding_)(local_1d0,1);
              }
            }
            FMemScope::~FMemScope(&local_150);
            FLLMScope::~FLLMScope(&local_1e4);
          }
        }
      }
    }
LAB_1481c3a85:
    pFVar21 = local_1b8 + 4;
    uVar19 = (ulonglong)local_1d8;
    this = local_1b0;
    uVar27 = local_1e8;
  } while( true );
}

// ProcessTickList<0> @ 1481c3f00

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
FParticleSystemWorldManager::ProcessTickList<0>
          (FParticleSystemWorldManager *this,float param_1,ELevelTick param_2,ETickingGroup param_3,
          TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_> *param_4,
          TRefCountPtr<FBaseGraphTask> *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  UParticleSystemComponent *this_00;
  UParticleSystem *this_01;
  code *pcVar3;
  float fVar4;
  FTickList *this_02;
  TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  ForElementType<int> FVar10;
  UWorld *pUVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [4];
  uint local_184;
  uint local_180;
  ELevelTick local_17c;
  uint local_178;
  ETickingGroup local_174;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FParticleSystemWorldManager *local_160;
  longlong local_158;
  FTickList *local_150;
  FString local_148;
  FString local_138;
  undefined8 *local_128;
  longlong local_120;
  FScriptContainerElement *local_118;
  TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_> *local_110;
  ForElementType<int> local_108;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar19 = 0;
  lVar14 = (longlong)(int)param_3;
  uVar12 = 0;
  if ((int)param_3 < param_4->ArrayNum) {
    uVar12 = ~param_3 >> 0x1f;
  }
  local_110 = param_4;
  local_180 = 0;
  local_17c = param_2;
  local_174 = param_3;
  local_160 = this;
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  local_150 = (FTickList *)((param_4->AllocatorInstance).Data + lVar14 * 0x18);
  local_108.SecondaryData = (ForElementType<int>)0x0;
  local_80 = 0;
  local_7c = 0x20;
  local_178 = (local_150->TickList).ArrayNum;
  uVar13 = (ulonglong)(int)local_178;
  pFVar20 = (local_150->TickList).AllocatorInstance.Data;
  local_118 = pFVar20 + uVar13 * 4;
  local_158 = lVar14;
LAB_1481c3ffb:
  do {
    while( true ) {
      pFVar16 = local_118;
      local_170 = pFVar20;
      if ((local_150->TickList).ArrayNum != (int)uVar13) {
        local_188[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_188);
      }
      pTVar5 = local_110;
      if (pFVar20 == pFVar16) {
        if (local_174 != TG_LastDemotable) {
          uVar12 = local_174 + TG_StartPhysics;
          uVar19 = 0;
          if ((int)uVar12 < local_110->ArrayNum) {
            uVar19 = ~uVar12 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_02 = local_150;
          uVar19 = 0;
          pFVar20 = (pTVar5->AllocatorInstance).Data;
          if (0 < local_80) {
            lVar14 = 0;
            do {
              uVar17 = ~uVar19 >> 0x1f;
              uVar8 = 0;
              if ((int)uVar19 < local_80) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar10 = (ForElementType<int>)&local_108;
              if (local_108.SecondaryData != (ForElementType<int>)0x0) {
                FVar10 = local_108.SecondaryData;
              }
              FTickList::Remove(this_02,*(int *)(lVar14 + (longlong)FVar10));
              uVar8 = 0;
              if ((int)uVar19 < local_80) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar10 = (ForElementType<int>)&local_108;
              if (local_108.SecondaryData != (ForElementType<int>)0x0) {
                FVar10 = local_108.SecondaryData;
              }
              FTickList::Add((FTickList *)(pFVar20 + (longlong)(int)uVar12 * 0x18),
                             *(int *)(lVar14 + (longlong)FVar10));
              uVar8 = 0;
              if ((int)uVar19 < local_80) {
                uVar8 = uVar17;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar10 = (ForElementType<int>)&local_108;
              if (local_108.SecondaryData != (ForElementType<int>)0x0) {
                FVar10 = local_108.SecondaryData;
              }
              uVar8 = *(uint *)(lVar14 + (longlong)FVar10);
              uVar17 = 0;
              if ((int)uVar8 < (this->PSCTickData).ArrayNum) {
                uVar17 = ~uVar8 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar19 = uVar19 + 1;
              lVar14 = lVar14 + 4;
              (this->PSCTickData).AllocatorInstance.Data[(longlong)(int)uVar8 * 0x10 + 0xc] =
                   SUB41(uVar12,0);
            } while ((int)uVar19 < local_80);
          }
        }
        local_80 = 0;
        if (local_7c < 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,0,&local_108,0,&local_7c);
        }
        if (local_108.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_108.SecondaryData);
        }
        return;
      }
      local_184 = *(uint *)pFVar20;
      lVar15 = (longlong)(int)local_184;
      uVar12 = 0;
      if ((int)local_184 < (this->ManagedPSCs).ArrayNum) {
        uVar12 = ~local_184 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar18 = (longlong)(int)local_184;
      this_00 = *(UParticleSystemComponent **)
                 ((this->ManagedPSCs).AllocatorInstance.Data + lVar15 * 8);
      uVar12 = 0;
      if ((int)local_184 < (this->PSCTickData).ArrayNum) {
        uVar12 = ~local_184 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (this->PSCTickData).AllocatorInstance.Data;
      lVar18 = lVar18 * 0x10;
      local_168 = pFVar16;
      local_120 = lVar18;
      if (((byte)pFVar16[lVar18 + 0xd] & 2) == 0) break;
LAB_1481c4422:
      pFVar20 = pFVar20 + 4;
      uVar13 = (ulonglong)local_178;
    }
    if ((*(longlong *)(pFVar16 + lVar18) != 0) &&
       (bVar6 = FTickFunction::IsCompletionHandleValid
                          ((FTickFunction *)(*(longlong *)(pFVar16 + lVar18) + 0x38)), bVar6)) {
      if (lVar14 == 6) {
LAB_1481c412b:
        bVar6 = true;
      }
      else {
        uVar19 = uVar19 | 1;
        local_180 = uVar19;
        TVar9 = FTickFunction::GetCompletionHandle
                          ((FTickFunction *)(*(longlong *)(pFVar16 + lVar18) + 0x38));
        if (*(char *)(*(longlong *)TVar9.Reference + 0xd0) != '\0') goto LAB_1481c412b;
        bVar6 = false;
      }
      if (((uVar19 & 1) != 0) &&
         (uVar19 = uVar19 & 0xfffffffe, local_180 = uVar19, local_128 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(local_128 + 6);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar7 == 1) && (local_128 != (undefined8 *)0x0)) {
          (**(code **)*local_128)(local_128,1);
        }
      }
      if (!bVar6) {
        FVar10 = (ForElementType<int>)&local_108;
        if (local_108.SecondaryData != (ForElementType<int>)0x0) {
          FVar10 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar10 <= &local_184) {
          FVar10 = (ForElementType<int>)&local_108;
          if (local_108.SecondaryData != (ForElementType<int>)0x0) {
            FVar10 = local_108.SecondaryData;
          }
          if ((&local_184 < (uint *)((longlong)FVar10 + (longlong)local_7c * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar7 = local_80;
        if (local_80 == local_7c) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&local_108,&local_7c);
        }
        local_80 = iVar7 + 1;
        FVar10 = (ForElementType<int>)&local_108;
        if (local_108.SecondaryData != (ForElementType<int>)0x0) {
          FVar10 = local_108.SecondaryData;
        }
        pFVar20 = pFVar20 + 4;
        *(uint *)((longlong)FVar10 + (longlong)iVar7 * 4) = local_184;
        uVar13 = (ulonglong)local_178;
        goto LAB_1481c3ffb;
      }
    }
    if ((*(longlong *)&this_00->field_0xb0 != 0) ||
       (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
       pUVar11 != (UWorld *)0x0)) {
      bVar6 = UParticleSystemComponent::CanSkipTickDueToVisibility(this_00);
      if (!bVar6) {
        fVar21 = fVar4;
        if (*(longlong *)&this_00->field_0xa8 != 0) {
          fVar21 = *(float *)(*(longlong *)&this_00->field_0xa8 + 0x68);
        }
        (**(code **)(*(longlong *)this_00 + 0x410))(this_00,param_1 * fVar21);
        UParticleSystemComponent::ComputeTickComponent_Concurrent(this_00);
        UParticleSystemComponent::FinalizeTickComponent(this_00);
      }
      goto LAB_1481c4422;
    }
    if (2 < (byte)LogParticles._0_1_) {
      this_01 = (this_00->Template).field0_0x0.DebugPtr;
      if ((this_01 == (UParticleSystem *)0x0) || (this_01->_padding_ == 0)) {
        ::FString::FString(&local_138,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_01,&local_138,(UObject *)0x0,None);
      }
      if (*(longlong *)&this_00->field_0x10 == 0) {
        ::FString::FString(&local_148,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_148,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>
                (&`private:_void___cdecl_FParticleSystemWorldManager::ProcessTickList<0>(float,ELevelTick,ETickingGroup,TArray<FParticleSystemWorldManager::FTickList,TSizedDefaultAllocator<32>_>&___ptr64,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      pFVar16 = local_168;
      lVar14 = local_158;
      this = local_160;
      pFVar20 = local_170;
      uVar19 = local_180;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
        pFVar16 = local_168;
        lVar14 = local_158;
        this = local_160;
        pFVar20 = local_170;
        uVar19 = local_180;
      }
    }
    this_00->bPendingManagerAdd = 0;
    this_00->bPendingManagerRemove = 0;
    this_00->bPendingManagerRemove = -1;
    uVar13 = (ulonglong)local_178;
    pFVar16[local_120 + 0xd] = (FScriptContainerElement)((byte)pFVar16[local_120 + 0xd] & 0xfb | 2);
    pFVar20 = pFVar20 + 4;
  } while( true );
}

// FParticleSystemWorldManager @ 1481c7b20

/* WARNING: Removing unreachable block (ram,0x0001481c7e47) */
/* WARNING: Removing unreachable block (ram,0x0001481c7f2a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FParticleSystemWorldManager * __thiscall
FParticleSystemWorldManager::FParticleSystemWorldManager
          (FParticleSystemWorldManager *this,UWorld *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FParticleSystemWorldManager *pFVar14;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDelegateHandle FVar15;
  FTickFunction *this_01;
  int *piVar16;
  uint uVar17;
  FParticleSystemWorldManager *local_68;
  undefined8 local_60;
  undefined8 local_58;
  FParticleSystemWorldManager *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->World = param_1;
  piVar16 = &(this->TickFunctions).ArrayNum;
  this->_padding_ = (longlong)&___7FParticleSystemWorldManager__6B_;
  piVar1 = &(this->TickFunctions).ArrayMax;
  (this->TickFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar16 = 0;
  *piVar1 = 0;
  (this->ManagedPSCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedPSCs).ArrayNum = 0;
  (this->ManagedPSCs).ArrayMax = 0;
  (this->PSCTickData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PSCTickData).ArrayNum = 0;
  (this->PSCTickData).ArrayMax = 0;
  (this->TickLists_Concurrent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickLists_Concurrent).ArrayNum = 0;
  (this->TickLists_Concurrent).ArrayMax = 0;
  (this->TickLists_GT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickLists_GT).ArrayNum = 0;
  (this->TickLists_GT).ArrayMax = 0;
  (this->PendingRegisterPSCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRegisterPSCs).ArrayNum = 0;
  (this->PendingRegisterPSCs).ArrayMax = 0;
  (this->PostGarbageCollectHandle).ID = 0;
  (this->AsyncTickBatch).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->AsyncTickBatch).ArrayNum = 0;
  (this->AsyncTickBatch).ArrayMax = 8;
  iVar13 = *piVar16;
  if (iVar13 < 7) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,7 - iVar13,&(this->TickFunctions).AllocatorInstance,piVar16,piVar1);
    DefaultConstructItems<FParticleSystemWorldManagerTickFunction,int>
              ((this->TickFunctions).AllocatorInstance.Data + (longlong)iVar11 * 0x30,7 - iVar13);
  }
  else if (7 < iVar13) {
    iVar13 = iVar13 + -7;
    if (iVar13 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FParticleSystemWorldManager *)(*pcVar6)();
        return pFVar14;
      }
    }
    else if (iVar13 == 0) goto LAB_1481c7cb6;
    TArray<FParticleSystemWorldManagerTickFunction,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->TickFunctions,7,iVar13);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&(this->TickFunctions).AllocatorInstance,*piVar16,piVar1);
  }
LAB_1481c7cb6:
  uVar17 = 0;
  piVar16 = &(this->TickLists_GT).ArrayMax;
  iVar13 = (this->TickFunctions).ArrayNum;
  this->bCachedParticleWorldManagerEnabled = GbEnablePSCWorldManager;
  uVar7 = local_48;
  uVar8 = local_40;
  if (0 < iVar13) {
    do {
      local_40 = uVar8;
      local_48 = uVar7;
      uVar12 = 0;
      if ((int)uVar17 < (this->TickFunctions).ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FParticleSystemWorldManager *)(*pcVar6)();
        return pFVar14;
      }
      bVar10 = 0;
      this_01 = (FTickFunction *)
                ((this->TickFunctions).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30);
      puVar2 = &this_01->field_0xa;
      bVar4 = *puVar2;
      (this_01->TickGroup).Value = (uchar)uVar17;
      (this_01->EndTickGroup).Value = (uchar)uVar17;
      puVar3 = &this_01->field_0xa;
      this_01->bCanEverTick = '\x01';
      iVar13 = ParticleSystemWorldManagerInternal::GFirstHighPriTickGroup;
      this_01->bAllowTickOnDedicatedServer = '\0';
      this_01->bStartWithTickEnabled = '\x01';
      this_01[1]._padding_ = (longlong)this;
      if (iVar13 <= (int)uVar17) {
        bVar10 = 0x20;
      }
      this_01->field_0xa = bVar10 | bVar4 & 0xd7 | 6;
      FTickFunction::RegisterTickFunction(this_01,(param_1->PersistentLevel).field0_0x0.DebugPtr);
      pFVar5 = (this->TickLists_Concurrent).AllocatorInstance.Data;
      local_60 = 0;
      local_58 = 0;
      local_68 = this;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar5 + (longlong)(this->TickLists_Concurrent).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FParticleSystemWorldManager *)(*pcVar6)();
        return pFVar14;
      }
      iVar13 = (this->TickLists_Concurrent).ArrayNum;
      if (iVar13 == (this->TickLists_Concurrent).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->TickLists_Concurrent).AllocatorInstance,
                            &(this->TickLists_Concurrent).ArrayMax);
      }
      (this->TickLists_Concurrent).ArrayNum = iVar13 + 1;
      pFVar5 = (this->TickLists_Concurrent).AllocatorInstance.Data + (longlong)iVar13 * 0x18;
      *(FParticleSystemWorldManager **)pFVar5 = local_68;
      *(undefined8 *)(pFVar5 + 8) = 0;
      *(undefined8 *)(pFVar5 + 8) = local_60;
      *(undefined4 *)(pFVar5 + 0x10) = (undefined4)local_58;
      *(undefined4 *)(pFVar5 + 0x14) = local_58._4_4_;
      local_58 = 0;
      local_60 = 0;
      pFVar5 = (this->TickLists_GT).AllocatorInstance.Data;
      local_48 = 0;
      local_40 = 0;
      local_50 = this;
      if (((pFVar5 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < pFVar5 + (longlong)*piVar16 * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FParticleSystemWorldManager *)(*pcVar6)();
        return pFVar14;
      }
      iVar13 = (this->TickLists_GT).ArrayNum;
      if (iVar13 == *piVar16) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->TickLists_GT).AllocatorInstance,piVar16);
      }
      (this->TickLists_GT).ArrayNum = iVar13 + 1;
      pFVar5 = (this->TickLists_GT).AllocatorInstance.Data + (longlong)iVar13 * 0x18;
      *(FParticleSystemWorldManager **)pFVar5 = local_50;
      *(undefined8 *)(pFVar5 + 8) = 0;
      *(undefined8 *)(pFVar5 + 8) = local_48;
      local_48 = 0;
      uVar7 = local_48;
      *(undefined4 *)(pFVar5 + 0x10) = (undefined4)local_40;
      *(undefined4 *)(pFVar5 + 0x14) = local_40._4_4_;
      local_40 = 0;
      uVar8 = local_40;
      local_40 = 0;
      local_48 = 0;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (this->TickFunctions).ArrayNum);
  }
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar15 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddRaw<FParticleSystemWorldManager>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)this_00,(FParticleSystemWorldManager *)&stack0x00000018,(pmf_9a7208e8)this)
  ;
                    /* WARNING: Load size is inaccurate */
  (this->PostGarbageCollectHandle).ID = *FVar15.ID;
  return this;
}

// ~FParticleSystemWorldManager @ 1481c9360

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
FParticleSystemWorldManager::~FParticleSystemWorldManager(FParticleSystemWorldManager *this)

{
  int iVar1;
  longlong lVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FParticleSystemWorldManager__6B_;
  if ((5 < (byte)LogParticles._0_1_) &&
     (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
     5 < (byte)LogParticles._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(FDelegateHandle)(this->PostGarbageCollectHandle).ID);
  pFVar5 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
  iVar1 = (this->PendingRegisterPSCs).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->PendingRegisterPSCs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UParticleSystemComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    lVar2 = *(longlong *)pFVar5;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x580) = *(uint *)(lVar2 + 0x580) & 0xbfffffff | 0x3fffffff;
    }
    pFVar5 = pFVar5 + 8;
  }
  (this->PendingRegisterPSCs).ArrayNum = 0;
  if ((this->PendingRegisterPSCs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingRegisterPSCs).AllocatorInstance,0,
               &(this->PendingRegisterPSCs).ArrayMax);
  }
  iVar1 = (this->ManagedPSCs).ArrayNum;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    RemovePSC(this,iVar1);
  }
  this->World = (UWorld *)0x0;
  FVar3 = (this->AsyncTickBatch).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar4 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FParticleSystemWorldManager::FTickList,int>
            ((FTickList *)(this->TickLists_GT).AllocatorInstance.Data,(this->TickLists_GT).ArrayNum)
  ;
  pFVar4 = (this->TickLists_GT).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FParticleSystemWorldManager::FTickList,int>
            ((FTickList *)(this->TickLists_Concurrent).AllocatorInstance.Data,
             (this->TickLists_Concurrent).ArrayNum);
  pFVar4 = (this->TickLists_Concurrent).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->PSCTickData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ManagedPSCs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FParticleSystemWorldManagerTickFunction,int>
            ((FParticleSystemWorldManagerTickFunction *)(this->TickFunctions).AllocatorInstance.Data
             ,(this->TickFunctions).ArrayNum);
  pFVar4 = (this->TickFunctions).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddPSC @ 1481d29e0

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
FParticleSystemWorldManager::AddPSC
          (FParticleSystemWorldManager *this,UParticleSystemComponent *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  code *pcVar4;
  UParticleSystemComponent *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement FVar13;
  FScriptContainerElement *pFVar14;
  UParticleSystemComponent *local_res10;
  uint local_res18;
  
  if ((param_1 != (UParticleSystemComponent *)0x0) &&
     ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    pFVar14 = (this->ManagedPSCs).AllocatorInstance.Data;
    local_res10 = param_1;
    if ((pFVar14 <= (FScriptContainerElement *)&local_res10) &&
       (((FScriptContainerElement *)&local_res10 <
         pFVar14 + (longlong)(this->ManagedPSCs).ArrayMax * 8 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (this->ManagedPSCs).ArrayNum;
    piVar1 = &(this->ManagedPSCs).ArrayMax;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ManagedPSCs).AllocatorInstance,piVar1);
    }
    pFVar14 = (this->ManagedPSCs).AllocatorInstance.Data;
    (this->ManagedPSCs).ArrayNum = uVar7 + 1;
    *(UParticleSystemComponent **)(pFVar14 + (longlong)(int)uVar7 * 8) = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UParticleSystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    iVar8 = (this->PSCTickData).ArrayNum;
    piVar1 = &(this->PSCTickData).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PSCTickData).AllocatorInstance,piVar1);
    }
    (this->PSCTickData).ArrayNum = iVar8 + 1;
    DefaultConstructItems<FPSCTickData,int>
              ((this->PSCTickData).AllocatorInstance.Data + (longlong)iVar8 * 0x10,1);
    local_res18 = ~uVar7 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar7 < (this->PSCTickData).ArrayNum) {
      uVar9 = local_res18;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar5 = local_res10;
    pFVar14 = (this->PSCTickData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    *(uint *)&local_res10->field_0x580 =
         (uVar7 ^ *(uint *)&local_res10->field_0x580) & 0xc0000000 ^ uVar7;
    local_res10->bPendingManagerAdd = 0;
    if (local_res10->bIsElligibleForAsyncTickComputed == '\0') {
      UParticleSystemComponent::ComputeCanTickInAnyThread(local_res10);
    }
    pUVar3 = *(UObject **)&local_res10->field_0xd0;
    if (pUVar3 == (UObject *)0x0) {
      FVar13 = (FScriptContainerElement)0x0;
    }
    else {
      uVar10 = (byte)pUVar3[1].field_0x19 + 1;
      uVar9 = 6;
      if (uVar10 < 6) {
        uVar9 = uVar10;
      }
      FVar13 = SUB41(uVar9,0);
    }
    pFVar14[0xc] = FVar13;
    pFVar14[0xd] = (FScriptContainerElement)
                   ((pUVar5->bIsElligibleForAsyncTick ^ (byte)pFVar14[0xd] & 0xf9) & 1 ^
                   (byte)pFVar14[0xd] & 0xf9);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(UObject **)pFVar14 = pUVar3;
    uVar11 = (ulonglong)(byte)pFVar14[0xc];
    uVar9 = (uint)(byte)pFVar14[0xc];
    if (((byte)pFVar14[0xd] & 1) == 0) {
      if (((this->TickLists_GT).ArrayNum <= (int)uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this->TickLists_GT).AllocatorInstance.Data;
    }
    else {
      if (((this->TickLists_Concurrent).ArrayNum <= (int)uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = (ulonglong)(int)uVar9;
      pFVar12 = (this->TickLists_Concurrent).AllocatorInstance.Data;
    }
    FTickList::Add((FTickList *)(pFVar12 + uVar11 * 0x18),uVar7);
    if (5 < (byte)LogParticles._0_1_) {
      FTickList::operator[]((FTickList *)(pFVar12 + uVar11 * 0x18),*(int *)(pFVar14 + 8));
      uVar9 = 0;
      if ((int)uVar7 < (this->ManagedPSCs).ArrayNum) {
        uVar9 = local_res18;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
  }
  return;
}

// AddReferencedObjects @ 1481d31c0

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
FParticleSystemWorldManager::AddReferencedObjects
          (FParticleSystemWorldManager *this,FReferenceCollector *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (this->World != (UWorld *)0x0) {
    uVar9 = 0;
    uVar4 = 0;
    uVar8 = uVar9;
    uVar10 = uVar9;
    uVar11 = uVar9;
    if (0 < (this->ManagedPSCs).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar6 = ~uVar7 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar7 < (this->ManagedPSCs).ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)((this->ManagedPSCs).AllocatorInstance.Data + uVar11);
        if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
          uVar5 = uVar4;
          if ((int)uVar7 < (this->ManagedPSCs).ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)((this->ManagedPSCs).AllocatorInstance.Data + uVar11) = 0;
        }
        else {
          uVar5 = uVar4;
          if ((int)uVar7 < (this->ManagedPSCs).ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(param_1->_padding_ + 0x88))
                    (param_1,(this->ManagedPSCs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8,0
                     ,0);
        }
        uVar5 = uVar4;
        if ((int)uVar7 < (this->PSCTickData).ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)((this->PSCTickData).AllocatorInstance.Data + uVar10);
        if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
          uVar5 = uVar4;
          if ((int)uVar7 < (this->PSCTickData).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)((this->PSCTickData).AllocatorInstance.Data + uVar10) = 0;
        }
        else {
          uVar5 = uVar4;
          if ((int)uVar7 < (this->PSCTickData).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(param_1->_padding_ + 0x88))
                    (param_1,(this->PSCTickData).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 0x10);
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar10 = uVar10 + 0x10;
        uVar11 = uVar11 + 8;
      } while ((int)(uVar7 + 1) < (this->ManagedPSCs).ArrayNum);
    }
    uVar8 = uVar9;
    if (0 < (this->PendingRegisterPSCs).ArrayNum) {
      do {
        uVar7 = (uint)uVar9;
        uVar6 = ~uVar7 >> 0x1f;
        uVar5 = uVar4;
        if ((int)uVar7 < (this->PendingRegisterPSCs).ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)((this->PendingRegisterPSCs).AllocatorInstance.Data + uVar8);
        if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
          uVar5 = uVar4;
          if ((int)uVar7 < (this->PendingRegisterPSCs).ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)((this->PendingRegisterPSCs).AllocatorInstance.Data + uVar8) = 0;
        }
        else {
          uVar5 = uVar4;
          if ((int)uVar7 < (this->PendingRegisterPSCs).ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(param_1->_padding_ + 0x88))
                    (param_1,(this->PendingRegisterPSCs).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 8,0,0);
        }
        uVar9 = (ulonglong)(uVar7 + 1);
        uVar8 = uVar8 + 8;
      } while ((int)(uVar7 + 1) < (this->PendingRegisterPSCs).ArrayNum);
    }
  }
  return;
}

// BuildTickLists @ 1481d5c10

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
FParticleSystemWorldManager::BuildTickLists
          (FParticleSystemWorldManager *this,int param_1,ETickingGroup param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ETickingGroup EVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  uVar9 = (ulonglong)param_1;
  if (param_1 == 0) {
    pFVar10 = (this->TickLists_GT).AllocatorInstance.Data;
    iVar3 = (this->TickLists_GT).ArrayNum;
    pFVar7 = pFVar10 + 0x10;
    pFVar1 = pFVar10 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((this->TickLists_GT).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FParticleSystemWorldManager::FTickList,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar1) break;
      *(undefined4 *)pFVar7 = 0;
      if (*(int *)(pFVar7 + 4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar7 + -8),0,(int *)(pFVar7 + 4));
      }
      pFVar10 = pFVar10 + 0x18;
      pFVar7 = pFVar7 + 0x18;
    }
    pFVar10 = (this->TickLists_Concurrent).AllocatorInstance.Data;
    iVar3 = (this->TickLists_Concurrent).ArrayNum;
    pFVar7 = pFVar10 + 0x10;
    pFVar1 = pFVar10 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((this->TickLists_Concurrent).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FParticleSystemWorldManager::FTickList,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar1) break;
      *(undefined4 *)pFVar7 = 0;
      if (*(int *)(pFVar7 + 4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar7 + -8),0,(int *)(pFVar7 + 4));
      }
      pFVar10 = pFVar10 + 0x18;
      pFVar7 = pFVar7 + 0x18;
    }
  }
  if (param_1 < (this->PSCTickData).ArrayNum) {
    lVar11 = uVar9 << 4;
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (this->PSCTickData).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      pFVar7 = (this->PSCTickData).AllocatorInstance.Data;
      FVar2 = pFVar7[lVar11 + 0xc];
      EVar12 = (uint)(byte)FVar2;
      if ((int)(uint)(byte)FVar2 < (int)param_2) {
        EVar12 = param_2;
      }
      if (((byte)pFVar7[lVar11 + 0xd] & 1) == 0) {
        uVar6 = 0;
        if ((int)EVar12 < (this->TickLists_GT).ArrayNum) {
          uVar6 = ~EVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (this->TickLists_GT).AllocatorInstance.Data;
      }
      else {
        uVar6 = 0;
        if ((int)EVar12 < (this->TickLists_Concurrent).ArrayNum) {
          uVar6 = ~EVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar7 = (this->TickLists_Concurrent).AllocatorInstance.Data;
      }
      FTickList::Add((FTickList *)(pFVar7 + (longlong)(int)EVar12 * 0x18),uVar8);
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar11 = lVar11 + 0x10;
    } while ((int)(uVar8 + 1) < (this->PSCTickData).ArrayNum);
  }
  return;
}

// Cleanup @ 1481d9ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FParticleSystemWorldManager::Cleanup(FParticleSystemWorldManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (5 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(FDelegateHandle)(this->PostGarbageCollectHandle).ID);
  pFVar4 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
  iVar2 = (this->PendingRegisterPSCs).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PendingRegisterPSCs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UParticleSystemComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x580) = *(uint *)(lVar3 + 0x580) & 0xbfffffff | 0x3fffffff;
    }
    pFVar4 = pFVar4 + 8;
  }
  (this->PendingRegisterPSCs).ArrayNum = 0;
  if ((this->PendingRegisterPSCs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingRegisterPSCs).AllocatorInstance,0,
               &(this->PendingRegisterPSCs).ArrayMax);
  }
  iVar2 = (this->ManagedPSCs).ArrayNum;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    RemovePSC(this,iVar2);
  }
  this->World = (UWorld *)0x0;
  return;
}

// ClearPendingUnregister @ 1481da140

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
FParticleSystemWorldManager::ClearPendingUnregister(FParticleSystemWorldManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = (this->ManagedPSCs).ArrayNum - 1;
  if (-1 < (int)uVar4) {
    lVar5 = (longlong)(int)uVar4 << 4;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->PSCTickData).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      if (((byte)(this->PSCTickData).AllocatorInstance.Data[lVar5 + 0xd] & 2) != 0) {
        RemovePSC(this,uVar4);
      }
      lVar5 = lVar5 + -0x10;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  return;
}

// Dump @ 1481e2700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FParticleSystemWorldManager::Dump(FParticleSystemWorldManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UParticleSystemComponent *this_00;
  FScriptContainerElement *pFVar3;
  UParticleSystem *pUVar4;
  UObjectBaseUtility *this_01;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FName this_02;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar9 = 0;
  local_res18 = 0;
  if (((4 < (byte)LogParticles._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
      4 < (byte)LogParticles._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
     4 < (byte)LogParticles._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  uVar10 = 0;
  if (0 < (this->ManagedPSCs).ArrayNum) {
    local_98 = 0;
    local_a0 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->ManagedPSCs).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(UParticleSystemComponent **)
                 ((this->ManagedPSCs).AllocatorInstance.Data + local_a0);
      uVar7 = 0;
      if ((int)uVar10 < (this->PSCTickData).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->PSCTickData).AllocatorInstance.Data;
      local_res20 = UParticleSystemComponent::GetNumActiveParticles(this_00);
      ::FString::FString(&local_88,L"NA");
      if ((bool)this_00->bIsManagingSignificance) {
        ::FString::operator=(&local_88,L"false");
        pUVar4 = (this_00->Template).field0_0x0.DebugPtr;
        pFVar8 = (pUVar4->Emitters).AllocatorInstance.Data;
        iVar2 = (pUVar4->Emitters).ArrayNum;
        pFVar1 = pFVar8 + (longlong)iVar2 * 8;
        while( true ) {
          if ((pUVar4->Emitters).ArrayNum != iVar2) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UParticleEmitter>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          uVar9 = local_res18;
          if (pFVar8 == pFVar1) goto LAB_1481e2918;
          bVar6 = UParticleEmitter::IsSignificant
                            (*(UParticleEmitter **)pFVar8,this_00->RequiredSignificance);
          if (bVar6) break;
          pFVar8 = pFVar8 + 8;
        }
        ::FString::operator=(&local_88,L"true");
        uVar9 = local_res18;
      }
LAB_1481e2918:
      UParticleSystemComponent::CanConsiderInvisible(this_00);
      if (4 < (byte)LogParticles._0_1_) {
        this_01 = *(UObjectBaseUtility **)(pFVar3 + local_98);
        if (this_01 != (UObjectBaseUtility *)0x0) {
          local_res18 = uVar9 | 1;
          UObjectBaseUtility::GetFullName(this_01,&local_58,(UObject *)0x0,None);
        }
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0,None)
        ;
        this_02 = UEnum::GetNameByValue(TickGroupEnum,(long64)local_90);
        ::FName::ToString((FName *)this_02,&local_78);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        uVar9 = local_res18;
        if (((local_res18 & 1) != 0) &&
           (uVar9 = local_res18 & 0xfffffffe, local_res18 = uVar9,
           local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      uVar10 = uVar10 + 1;
      local_a0 = local_a0 + 8;
      local_98 = local_98 + 0x10;
    } while ((int)uVar10 < (this->ManagedPSCs).ArrayNum);
  }
  return;
}

// GetReferencerName @ 1481fe1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FParticleSystemWorldManager::GetReferencerName
          (FParticleSystemWorldManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FParticleSystemWorldManager");
  return __return_storage_ptr__;
}

// GetTickData @ 1481ffa50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPSCTickData * __thiscall
FParticleSystemWorldManager::GetTickData(FParticleSystemWorldManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPSCTickData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->PSCTickData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPSCTickData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPSCTickData *)((this->PSCTickData).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// HandleManagerEnabled @ 148201000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FParticleSystemWorldManager::HandleManagerEnabled(FParticleSystemWorldManager *this)

{
  int iVar1;
  UActorComponent *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  longlong lVar9;
  FTickFunction *this_01;
  FTickFunction *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TObjectIterator<UParticleSystemComponent> local_38;
  
  if (GbEnablePSCWorldManager != this->bCachedParticleWorldManagerEnabled) {
    local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectArray.ArrayNum = 0;
    local_38.ObjectArray.ArrayMax = 0;
    local_38.Index = 0xffffffff;
    this->bCachedParticleWorldManagerEnabled = GbEnablePSCWorldManager;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
    GetObjectsOfClass(pUVar7,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UParticleSystemComponent>::Advance(&local_38);
      lVar9 = (longlong)local_38.Index;
      if (local_38.Index < 0) break;
      if (local_38.ObjectArray.ArrayNum <= local_38.Index) break;
      uVar6 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00 = *(UActorComponent **)(local_38.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
      if (this_00 == (UActorComponent *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PSC",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                           ,0x31c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar8 = this_00->WorldPrivate;
      if (pUVar8 == (UWorld *)0x0) {
        pUVar8 = UActorComponent::GetWorld_Uncached(this_00);
      }
      if ((pUVar8 == this->World) &&
         (cVar4 = (**(code **)(this_00->_padding_ + 0x430))(this_00), cVar4 != '\0')) {
        (**(code **)(this_00->_padding_ + 0x420))(this_00,1);
      }
    }
    if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
    }
    iVar1 = (this->TickFunctions).ArrayNum;
    this_01 = (FTickFunction *)(this->TickFunctions).AllocatorInstance.Data;
    pFVar10 = (FTickFunction *)((longlong)this_01 + (longlong)iVar1 * 0x30);
    if (this->bCachedParticleWorldManagerEnabled == 0) {
      while( true ) {
        if ((this->TickFunctions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FParticleSystemWorldManagerTickFunction,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        if (this_01 == pFVar10) break;
        FTickFunction::SetTickFunctionEnable(this_01,(this_01->TickGroup).Value == '\0');
        this_01 = (FTickFunction *)&this_01[1].TickGroup;
      }
    }
    else {
      while( true ) {
        if ((this->TickFunctions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FParticleSystemWorldManagerTickFunction,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (this_01 == pFVar10) break;
        FTickFunction::SetTickFunctionEnable(this_01,true);
        this_01 = (FTickFunction *)&this_01[1].TickGroup;
      }
    }
  }
  return;
}

// HandlePostGarbageCollect @ 1482011f0

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
FParticleSystemWorldManager::HandlePostGarbageCollect(FParticleSystemWorldManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (5 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  uVar4 = (this->ManagedPSCs).ArrayNum - 1;
  if (-1 < (int)uVar4) {
    lVar5 = (longlong)(int)uVar4 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->ManagedPSCs).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      if (*(longlong *)((this->ManagedPSCs).AllocatorInstance.Data + lVar5) == 0) {
        RemovePSC(this,uVar4);
      }
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  return;
}

// OnPreWorldFinishDestroy @ 148208b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FParticleSystemWorldManager::OnPreWorldFinishDestroy(UWorld *param_1)

{
  FParticleSystemWorldManager *pFVar1;
  FParticleSystemWorldManager **ppFVar2;
  uint uVar3;
  UWorld *local_res10 [3];
  FString local_18;
  
  ppFVar2 = TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar2 != (FParticleSystemWorldManager **)0x0) {
    if (5 < (byte)LogParticles._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FParticleSystemWorldManager *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res10[0] = param_1;
      TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar3 >> 0x10 ^ uVar3,local_res10);
    }
  }
  return;
}

// OnShutdown @ 148208e40

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FParticleSystemWorldManager::OnShutdown(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
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
          iVar12) goto LAB_148208eed;
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
LAB_148208eed:
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
    lVar9 = 0x154c5faf0;
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
          iVar12) goto LAB_148209000;
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
LAB_148209000:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FParticleSystemWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == iVar7) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    puVar2 = *(undefined8 **)(WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar4 = 1 < (int)WorldManagers._72_4_;
  if (!bVar4) {
    TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
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
    TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
              *)&WorldManagers);
  }
  FParticlePerfStatsManager::OnShutdown();
  return;
}

// OnStartup @ 148209120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FParticleSystemWorldManager::OnStartup(void)

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
  FParticlePerfStatsManager::OnStartup();
  return;
}

// OnWorldBeginTearDown @ 1482091a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FParticleSystemWorldManager::OnWorldBeginTearDown(UWorld *param_1)

{
  FParticleSystemWorldManager *pFVar1;
  FParticleSystemWorldManager **ppFVar2;
  uint uVar3;
  UWorld *local_res10 [3];
  FString local_18;
  
  ppFVar2 = TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar2 != (FParticleSystemWorldManager **)0x0) {
    if (5 < (byte)LogParticles._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FParticleSystemWorldManager *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res10[0] = param_1;
      TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar3 >> 0x10 ^ uVar3,local_res10);
    }
  }
  return;
}

// OnWorldCleanup @ 1482092a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FParticleSystemWorldManager::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  FParticleSystemWorldManager *pFVar1;
  FParticleSystemWorldManager **ppFVar2;
  uint uVar3;
  UWorld *local_res20;
  FString local_18;
  
  ppFVar2 = TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
                    *)&WorldManagers,param_1);
  if (ppFVar2 != (FParticleSystemWorldManager **)0x0) {
    if (5 < (byte)LogParticles._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FParticleSystemWorldManager *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res20 = param_1;
      TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar3 >> 0x10 ^ uVar3,&local_res20);
    }
  }
  return;
}

// OnWorldInit @ 1482093a0

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
FParticleSystemWorldManager::OnWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleSystemWorldManager **ppFVar3;
  UClass *pUVar4;
  FParticleSystemWorldManager *pFVar5;
  UWorld *local_res8;
  TKeyInitializer<UWorld_*_const_&> local_res18;
  UWorld **local_res20;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_res8 = param_1;
  ppFVar3 = TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
            ::Find((TMapBase<UWorld_*,FParticleSystemWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>_>
                    *)&WorldManagers,param_1);
  if ((ppFVar3 != (FParticleSystemWorldManager **)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldManagers.Find(World) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                         ,0xcc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (TickGroupEnum == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UClass_UEnum_NoRegister();
    local_28._12_4_ = uStack_2c;
    local_28.Size = 0x1c;
    local_28.DataPtr = L"/Script/Engine.ETickingGroup";
    TickGroupEnum = (UEnum *)StaticFindObjectChecked(pUVar4,(UObject *)0x0,&local_28,None);
  }
  pFVar5 = ::operator_new(0xb8);
  if (pFVar5 == (FParticleSystemWorldManager *)0x0) {
    pFVar5 = (FParticleSystemWorldManager *)0x0;
  }
  else {
    pFVar5 = FParticleSystemWorldManager(pFVar5,local_res8);
  }
  local_res20 = &local_res8;
  TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UWorld_*_const_&>_>
            ((TSet<TTuple<UWorld_*,FParticleSystemWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FParticleSystemWorldManager_*,0>,FDefaultSetAllocator>
              *)&WorldManagers,&local_res18,(bool *)&local_res20);
  *(FParticleSystemWorldManager **)(WorldManagers._0_8_ + 8 + (longlong)(int)local_res18.Key * 0x18)
       = pFVar5;
  if (5 < (byte)LogParticles._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)local_res8,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterComponent @ 14820d360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FParticleSystemWorldManager::RegisterComponent
          (FParticleSystemWorldManager *this,UParticleSystemComponent *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  UParticleSystemComponent *local_res10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar8 = param_1->ManagerHandle;
  local_res10 = param_1;
  if (uVar8 == 0xffffffff) {
    if ((BADTYPE)param_1->bPendingManagerAdd) {
      if (5 < (byte)LogParticles._0_1_) {
        local_res20 = (FName)((param_1->Template).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_res20,&local_48);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
    pFVar4 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar4 + (longlong)(this->PendingRegisterPSCs).ArrayMax * 8)) &&
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
    uVar8 = (this->PendingRegisterPSCs).ArrayNum;
    piVar1 = &(this->PendingRegisterPSCs).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->PendingRegisterPSCs).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
    (this->PendingRegisterPSCs).ArrayNum = uVar8 + 1;
    *(UParticleSystemComponent **)(pFVar4 + (longlong)(int)uVar8 * 8) = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UParticleSystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    *(uint *)&local_res10->field_0x580 =
         (uVar8 ^ *(uint *)&local_res10->field_0x580) & 0xc0000000 ^ uVar8;
    local_res10->bPendingManagerAdd = -1;
    if ((byte)LogParticles._0_1_ < 6) {
      return true;
    }
    local_res18 = (FName)((local_res10->Template).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res18,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  else {
    if ((BADTYPE)param_1->bPendingManagerAdd) {
      return true;
    }
    uVar9 = param_1->bPendingManagerAdd;
    if ((int)uVar8 < (this->PSCTickData).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar4 = (this->PSCTickData).AllocatorInstance.Data;
    FVar3 = pFVar4[(longlong)(int)uVar8 * 0x10 + 0xd];
    if (((byte)FVar3 & 2) == 0) {
      if ((byte)LogParticles._0_1_ < 6) {
        return true;
      }
      local_60 = (FName)((local_res10->Template).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_60,&local_28);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
    else {
      pFVar4[(longlong)(int)uVar8 * 0x10 + 0xd] = (FScriptContainerElement)((byte)FVar3 | 4);
      if ((byte)LogParticles._0_1_ < 6) {
        return true;
      }
      local_68 = (FName)((local_res10->Template).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_68,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// RemovePSC @ 14820e760

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
FParticleSystemWorldManager::RemovePSC(FParticleSystemWorldManager *this,int param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  UParticleSystemComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  
  lVar15 = (longlong)param_1;
  uVar7 = ~param_1;
  uVar16 = uVar7 >> 0x1f;
  uVar8 = 0;
  uVar9 = uVar8;
  if (param_1 < (this->ManagedPSCs).ArrayNum) {
    uVar9 = uVar16;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar3 = *(UParticleSystemComponent **)((this->ManagedPSCs).AllocatorInstance.Data + lVar15 * 8);
  uVar9 = uVar8;
  if (param_1 < (this->PSCTickData).ArrayNum) {
    uVar9 = uVar16;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->PSCTickData).AllocatorInstance.Data;
  lVar14 = lVar15 * 0x10;
  FVar1 = pFVar4[lVar14 + 0xd];
  if (pUVar3 != (UParticleSystemComponent *)0x0) {
    pUVar3->ManagerHandle = -1;
    pUVar3->bPendingManagerRemove = 0;
  }
  if (5 < (byte)LogParticles._0_1_) {
    uVar9 = uVar8;
    if (param_1 < (this->ManagedPSCs).ArrayNum) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  uVar11 = (ulonglong)(byte)pFVar4[lVar14 + 0xc];
  uVar9 = (uint)(byte)pFVar4[lVar14 + 0xc];
  if (((byte)pFVar4[lVar14 + 0xd] & 1) == 0) {
    if ((this->TickLists_GT).ArrayNum <= (int)uVar9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar12 = (this->TickLists_GT).AllocatorInstance.Data;
  }
  else {
    if ((this->TickLists_Concurrent).ArrayNum <= (int)uVar9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = (ulonglong)(int)uVar9;
    pFVar12 = (this->TickLists_Concurrent).AllocatorInstance.Data;
  }
  if (5 < (byte)LogParticles._0_1_) {
    FTickList::operator[]((FTickList *)(pFVar12 + uVar11 * 0x18),*(int *)(pFVar4 + lVar14 + 8));
    if (param_1 < (this->ManagedPSCs).ArrayNum) {
      uVar8 = uVar16;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  FTickList::Remove((FTickList *)(pFVar12 + uVar11 * 0x18),param_1);
  uVar8 = 0;
  uVar9 = uVar8;
  if (param_1 < (this->ManagedPSCs).ArrayNum) {
    uVar9 = uVar16;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->ManagedPSCs).ArrayNum;
  pFVar4 = (this->ManagedPSCs).AllocatorInstance.Data;
  iVar10 = iVar2 + uVar7;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove(pFVar4 + lVar15 * 8,pFVar4 + (longlong)(iVar2 - iVar10) * 8,(longlong)iVar10 << 3);
  }
  piVar13 = &(this->ManagedPSCs).ArrayNum;
  *piVar13 = *piVar13 + -1;
  uVar9 = uVar8;
  if (param_1 < (this->PSCTickData).ArrayNum) {
    uVar9 = uVar16;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->PSCTickData).ArrayNum;
  pFVar4 = (this->PSCTickData).AllocatorInstance.Data;
  iVar10 = iVar2 + uVar7;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove(pFVar4 + lVar14,pFVar4 + (longlong)(iVar2 - iVar10) * 0x10,(longlong)iVar10 << 4);
  }
  piVar13 = &(this->PSCTickData).ArrayNum;
  *piVar13 = *piVar13 + -1;
  if ((-1 < param_1) && (param_1 < (this->ManagedPSCs).ArrayNum)) {
    uVar9 = uVar8;
    if (param_1 < (this->ManagedPSCs).ArrayNum) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)((this->ManagedPSCs).AllocatorInstance.Data + lVar15 * 8) != 0) {
      if (param_1 < (this->ManagedPSCs).ArrayNum) {
        uVar8 = uVar16;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar14 = *(longlong *)((this->ManagedPSCs).AllocatorInstance.Data + lVar15 * 8);
      *(uint *)(lVar14 + 0x580) = (param_1 ^ *(uint *)(lVar14 + 0x580)) & 0xc0000000 ^ param_1;
    }
    uVar9 = 0;
    if (param_1 < (this->PSCTickData).ArrayNum) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->PSCTickData).AllocatorInstance.Data;
    uVar11 = (ulonglong)(byte)pFVar4[lVar15 * 0x10 + 0xc];
    uVar9 = (uint)(byte)pFVar4[lVar15 * 0x10 + 0xc];
    if (((byte)pFVar4[lVar15 * 0x10 + 0xd] & 1) == 0) {
      if ((this->TickLists_GT).ArrayNum <= (int)uVar9) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar12 = (this->TickLists_GT).AllocatorInstance.Data;
    }
    else {
      if ((this->TickLists_Concurrent).ArrayNum <= (int)uVar9) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar11 = (ulonglong)(int)uVar9;
      pFVar12 = (this->TickLists_Concurrent).AllocatorInstance.Data;
    }
    piVar13 = FTickList::operator[]
                        ((FTickList *)(pFVar12 + uVar11 * 0x18),*(int *)(pFVar4 + lVar15 * 0x10 + 8)
                        );
    *piVar13 = param_1;
  }
  if (((byte)FVar1 & 4) != 0) {
    AddPSC(this,pUVar3);
  }
  return;
}

// SetFirstHighPriTickGroup @ 1482173b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FParticleSystemWorldManager::SetFirstHighPriTickGroup(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = 0;
  iVar10 = 0;
  uVar4 = 1;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14821745d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uVar5 = local_res18 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_14821745d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar4,iVar9);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = iVar10;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c5faf0;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_148217570;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    uVar8 = local_res20 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_148217570:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FParticleSystemWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    lVar6 = *(longlong *)(WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar6 != 0) {
      iVar9 = 0;
      lVar7 = 0;
      do {
        if ((*(int *)(lVar6 + 0x20) <= iVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FTickFunction::SetPriorityIncludingPrerequisites
                  ((FTickFunction *)(*(longlong *)(lVar6 + 0x18) + lVar7),param_1 <= iVar9);
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 0x30;
      } while (iVar9 < 7);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetTickGroupPriority @ 1482191e0

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
FParticleSystemWorldManager::SetTickGroupPriority
          (FParticleSystemWorldManager *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (6 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleSystemTickGroupIndex >= 0) && (ParticleSystemTickGroupIndex < ParticleSystemWorldManagerInternal::NumTickGroups)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                       ,0x36e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->TickFunctions).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTickFunction::SetPriorityIncludingPrerequisites
            ((FTickFunction *)
             ((this->TickFunctions).AllocatorInstance.Data + (longlong)param_1 * 0x30),param_2);
  return;
}

// Tick @ 148221040

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
FParticleSystemWorldManager::Tick
          (FParticleSystemWorldManager *this,ETickingGroup param_1,float param_2,ELevelTick param_3,
          Type param_4,TRefCountPtr<FBaseGraphTask> *param_5)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PSCMan_Tick> FVar12;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8 [2];
  undefined1 local_res10 [8];
  FName local_80;
  TRefCountPtr<FBaseGraphTask> local_78;
  TRefCountPtr<FBaseGraphTask> local_70;
  FName local_68;
  FName local_60;
  
  FVar12 = StatPtr_STAT_PSCMan_Tick;
  if (StatPtr_STAT_PSCMan_Tick == (FThreadSafeStaticStat<FStat_STAT_PSCMan_Tick>)0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_PSCMan_Tick");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PSCMan_Tick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSCMan_Tick,*pFVar11,
                        L"PSC Manager Tick [GT]","STATGROUP_PSCWorldMan","STATCAT_Advanced",
                        L"Particle World Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value == 0) && (FVar13.Number == 0)) {
LAB_148221199:
    bVar6 = false;
    FVar13 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_80.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                   ,0x2de);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148221199;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar6 = true;
  }
  if (__CsvProfilerStat735 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat735 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  if (__CsvProfilerStat736 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_CascadeSystemWorldManager",_GCsvCategory_Particles.Index);
    __CsvProfilerStat736 = true;
  }
  uVar8 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_CascadeSystemWorldManager",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_CascadeSystemWorldManager");
  if (param_1 == TG_PrePhysics) {
    HandleManagerEnabled(this);
    uVar15 = (this->ManagedPSCs).ArrayNum - 1;
    if (-1 < (int)uVar15) {
      lVar14 = (longlong)(int)uVar15 << 4;
      do {
        uVar10 = 0;
        if ((int)uVar15 < (this->PSCTickData).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (((byte)(this->PSCTickData).AllocatorInstance.Data[lVar14 + 0xd] & 2) != 0) {
          RemovePSC(this,uVar15);
        }
        lVar14 = lVar14 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
  }
  if (this->bCachedParticleWorldManagerEnabled == 0) {
    if ((this->ManagedPSCs).ArrayNum != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagedPSCs.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                         ,0x2ed,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((this->PSCTickData).ArrayNum != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PSCTickData.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                         ,0x2ee,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    pFVar16 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
    iVar3 = (this->PendingRegisterPSCs).ArrayNum;
    pFVar2 = pFVar16 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->PendingRegisterPSCs).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UParticleSystemComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar16 == pFVar2) break;
      AddPSC(this,*(UParticleSystemComponent **)pFVar16);
      pFVar16 = pFVar16 + 8;
    }
    (this->PendingRegisterPSCs).ArrayNum = 0;
    if ((this->PendingRegisterPSCs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingRegisterPSCs).AllocatorInstance,0,
                 &(this->PendingRegisterPSCs).ArrayMax);
    }
    if ((this->PSCTickData).ArrayNum != (this->ManagedPSCs).ArrayNum) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PSCTickData.Num() == ManagedPSCs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                         ,0x2ff,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_78.Reference = (FBaseGraphTask *)0x0;
    ProcessTickList<0>(this,param_2,param_3,param_1,&this->TickLists_GT,&local_78);
    if (local_78.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_78.Reference)->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_78.Reference)(local_78.Reference,1);
      }
    }
    if ((FXConsoleVariables::bFreezeParticleSimulation == 0) &&
       (FXConsoleVariables::bAllowAsyncTick != 0)) {
      bVar9 = FApp::ShouldUseThreadingForPerformance();
      if ((bVar9) && (GDistributionType != 0)) {
        ProcessTickList<1>(this,param_2,param_3,param_1,&this->TickLists_Concurrent,param_5);
        goto LAB_1482214a8;
      }
    }
    local_70.Reference = (FBaseGraphTask *)0x0;
    ProcessTickList<0>(this,param_2,param_3,param_1,&this->TickLists_Concurrent,&local_70);
    if (local_70.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_70.Reference)->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
  }
LAB_1482214a8:
  FCsvProfiler::EndStat("CoreSystems_CascadeSystemWorldManager",uVar8);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// UnregisterComponent @ 1482231e0

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
FParticleSystemWorldManager::UnregisterComponent
          (FParticleSystemWorldManager *this,UParticleSystemComponent *param_1)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  
  uVar9 = param_1->ManagerHandle;
  if (uVar9 != 0xffffffff) {
    if (param_1->bPendingManagerAdd != 0) {
      if (5 < (byte)LogParticles._0_1_) {
        local_res10 = (FName)((param_1->Template).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_res10,&local_48);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar10 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (this->PendingRegisterPSCs).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar11 = (longlong)(int)uVar9;
      if (*(longlong *)((this->PendingRegisterPSCs).AllocatorInstance.Data + lVar11 * 8) == 0) {
        param_1->ManagerHandle = -1;
      }
      else {
        uVar7 = 0;
        if ((int)uVar9 < (this->PendingRegisterPSCs).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar1 = (uint *)(*(longlong *)
                           ((this->PendingRegisterPSCs).AllocatorInstance.Data + lVar11 * 8) + 0x580
                         );
        *puVar1 = *puVar1 | 0x3fffffff;
      }
      uVar7 = 0;
      if ((int)uVar9 < (this->PendingRegisterPSCs).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = (this->PendingRegisterPSCs).ArrayNum;
      pFVar3 = (this->PendingRegisterPSCs).AllocatorInstance.Data;
      iVar8 = iVar2 + ~uVar9;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar3 + lVar11 * 8,pFVar3 + (longlong)(iVar2 - iVar8) * 8,(longlong)iVar8 << 3);
      }
      iVar8 = (this->PendingRegisterPSCs).ArrayNum + -1;
      (this->PendingRegisterPSCs).ArrayNum = iVar8;
      if ((-1 < (int)uVar9) && ((int)uVar9 < iVar8)) {
        if (((int)uVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = *(longlong *)((this->PendingRegisterPSCs).AllocatorInstance.Data + lVar11 * 8);
        *(uint *)(lVar11 + 0x580) = (uVar9 ^ *(uint *)(lVar11 + 0x580)) & 0xc0000000 ^ uVar9;
      }
      param_1->bPendingManagerAdd = 0;
      return;
    }
    uVar7 = 0;
    if ((int)uVar9 < (this->PSCTickData).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->PSCTickData).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)(int)uVar9 * 0x10 + 0xd;
    *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 | 2);
    param_1->bPendingManagerRemove = -1;
    pFVar4 = pFVar4 + (longlong)(int)uVar9 * 0x10 + 0xd;
    *pFVar4 = (FScriptContainerElement)((byte)*pFVar4 & 0xfb);
    if (5 < (byte)LogParticles._0_1_) {
      local_res18 = (FName)((param_1->Template).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res18,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

