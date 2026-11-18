// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FChaosResultsManager @ 143af9aa0

FChaosResultsManager * __thiscall
Chaos::FChaosResultsManager::FChaosResultsManager
          (FChaosResultsManager *this,FChaosMarshallingManager *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FChaosResultsManager *pFVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 local_28 [4];
  
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->InternalQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalQueue).ArrayNum = 0;
  (this->InternalQueue).ArrayMax = 0;
  this->MarshallingManager = param_1;
  this->NumActiveChannels = DefaultNumActiveChannels;
  (this->PerChannelTimeDelay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerChannelTimeDelay).ArrayNum = 0;
  (this->PerChannelTimeDelay).ArrayMax = 0;
  puVar9 = (undefined8 *)0x0;
  if (0 < this->NumActiveChannels) {
    do {
      puVar5 = ::operator_new(0xb0);
      puVar7 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[9] = 0;
        *(undefined4 *)(puVar5 + 0xf) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x7c) = 0x80;
        *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
        *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
        puVar5[0x12] = 0;
        *(undefined4 *)(puVar5 + 0x13) = 0;
        puVar5[0x14] = this;
        *(int *)(puVar5 + 0x15) = (int)puVar9;
        puVar7 = puVar5;
      }
      iVar4 = (this->Channels).ArrayNum;
      if (iVar4 == (this->Channels).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Channels).ArrayMax);
      }
      uVar8 = (int)puVar9 + 1;
      (this->Channels).ArrayNum = iVar4 + 1;
      *(undefined8 **)((this->Channels).AllocatorInstance.Data + (longlong)iVar4 * 8) = puVar7;
      puVar9 = (undefined8 *)(ulonglong)uVar8;
    } while ((int)uVar8 < this->NumActiveChannels);
    iVar4 = (this->PerChannelTimeDelay).ArrayMax;
  }
  pFVar1 = (this->PerChannelTimeDelay).AllocatorInstance.Data;
  local_28[0] = 0;
  if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)iVar4 * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FChaosResultsManager *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->PerChannelTimeDelay).ArrayNum;
  if (iVar4 == (this->PerChannelTimeDelay).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->PerChannelTimeDelay).AllocatorInstance,
                       &(this->PerChannelTimeDelay).ArrayMax);
  }
  (this->PerChannelTimeDelay).ArrayNum = iVar4 + 1;
  *(undefined4 *)((this->PerChannelTimeDelay).AllocatorInstance.Data + (longlong)iVar4 * 4) =
       local_28[0];
  pFVar1 = (this->PerChannelTimeDelay).AllocatorInstance.Data;
  if (((pFVar1 < (FScriptContainerElement *)0x154bb0529) &&
      (&SecondChannelDelay < pFVar1 + (longlong)(this->PerChannelTimeDelay).ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FChaosResultsManager *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->PerChannelTimeDelay).ArrayNum;
  if (iVar4 == (this->PerChannelTimeDelay).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->PerChannelTimeDelay).AllocatorInstance,
                       &(this->PerChannelTimeDelay).ArrayMax);
  }
  (this->PerChannelTimeDelay).ArrayNum = iVar4 + 1;
  *(float *)((this->PerChannelTimeDelay).AllocatorInstance.Data + (longlong)iVar4 * 4) =
       SecondChannelDelay;
  return this;
}

// ~FChaosResultsManager @ 143afccc0

void __thiscall Chaos::FChaosResultsManager::~FChaosResultsManager(FChaosResultsManager *this)

{
  int iVar1;
  FChaosInterpolationResults *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Channels).AllocatorInstance.Data;
  iVar1 = (this->Channels).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FChaosResultsChannel_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    this_00 = *(FChaosInterpolationResults **)pFVar4;
    if (this_00 != (FChaosInterpolationResults *)0x0) {
      if (this_00->Prev != (FPullPhysicsData *)0x0) {
        FreePullData_External
                  ((FChaosResultsManager *)
                   this_00[2].GeometryCollectionInterpolations.AllocatorInstance.Data,this_00->Prev,
                   this_00[2].GeometryCollectionInterpolations.ArrayNum);
      }
      if (this_00->Next != (FPullPhysicsData *)0x0) {
        FreePullData_External
                  ((FChaosResultsManager *)
                   this_00[2].GeometryCollectionInterpolations.AllocatorInstance.Data,this_00->Next,
                   this_00[2].GeometryCollectionInterpolations.ArrayNum);
      }
      this_00[2].RigidInterpolations.ArrayNum = 0;
      pFVar2 = this_00[2].RigidInterpolations.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00[1].RigidInterpolations.ArrayNum);
      FChaosInterpolationResults::~FChaosInterpolationResults(this_00);
      ::operator_delete(this_00,0xb0);
    }
    pFVar4 = pFVar4 + 8;
  }
  iVar1 = (this->InternalQueue).ArrayNum;
  pFVar3 = (this->InternalQueue).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->InternalQueue).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FChaosResultsManager::FPullDataQueueInfo,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    FChaosMarshallingManager::FreePullData_External
              (this->MarshallingManager,*(FPullPhysicsData **)pFVar3);
    pFVar3 = pFVar3 + 0x10;
  }
  pFVar3 = (this->PerChannelTimeDelay).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InternalQueue).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Channels).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// FreePullData_External @ 143b1e710

void __thiscall
Chaos::FChaosResultsManager::FreePullData_External
          (FChaosResultsManager *this,FPullPhysicsData *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  
  uVar5 = 0;
  uVar8 = uVar5;
  uVar9 = uVar5;
  if (0 < (this->InternalQueue).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar11 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->InternalQueue).ArrayNum) {
        uVar4 = uVar11;
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
      pFVar12 = (this->InternalQueue).AllocatorInstance.Data + uVar9;
      if (*(FPullPhysicsData **)pFVar12 == param_1) {
        lVar10 = (longlong)param_2;
        if ((pFVar12[lVar10 + 8] == (FScriptContainerElement)0x0) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7378659067549449753>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                               ,0x1e7,"Info.bHasPopped[GivenChannelIdx]"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((pFVar12[lVar10 + 10] != (FScriptContainerElement)0x0) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7378659067549449752>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                               ,0x1e8,"Info.bPendingFree[GivenChannelIdx] == false"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12[lVar10 + 10] = (FScriptContainerElement)0x1;
        do {
          if (pFVar12[uVar5 + 10] == (FScriptContainerElement)0x0) {
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < 2);
        FChaosMarshallingManager::FreePullData_External
                  (this->MarshallingManager,*(FPullPhysicsData **)pFVar12);
        uVar4 = 0;
        if ((int)uVar7 < (this->InternalQueue).ArrayNum) {
          uVar4 = uVar11;
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
        pFVar12 = (this->InternalQueue).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        iVar6 = (this->InternalQueue).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar6 << 4);
        }
        piVar1 = &(this->InternalQueue).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->InternalQueue).AllocatorInstance,(this->InternalQueue).ArrayNum,
                   &(this->InternalQueue).ArrayMax);
        return;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x10;
    } while ((int)(uVar7 + 1) < (this->InternalQueue).ArrayNum);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7378659067549449728>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                     ,0x200,"false");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PopPullData_External @ 143b2b830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPullPhysicsData * __thiscall
Chaos::FChaosResultsManager::PopPullData_External(FChaosResultsManager *this,int param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  FChaosMarshallingManager *pFVar4;
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FPullPhysicsData *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar11 = 0;
  uVar12 = (this->InternalQueue).ArrayNum - 1;
  if ((int)uVar12 < 0) {
LAB_143b2b8ed:
    pFVar4 = this->MarshallingManager;
    aVar5 = *(atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> *)
             (pFVar4->PullDataQueue).Tail;
    if (aVar5 != (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)0x0) {
      local_48 = *(longlong *)((longlong)aVar5 + 8);
      (pFVar4->PullDataQueue).Tail = aVar5;
      LOCK();
      paVar2 = &(pFVar4->PullDataQueue).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (local_48 != 0) {
        lVar14 = (longlong)this->NumActiveChannels;
        if (0 < lVar14) {
          do {
            *(undefined1 *)((longlong)&uStack_40 + lVar11) = 0;
            *(undefined1 *)((longlong)&uStack_40 + lVar11 + 2) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar14);
        }
        for (; lVar14 < 2; lVar14 = lVar14 + 1) {
          *(undefined1 *)((longlong)&uStack_40 + lVar14) = 1;
          *(undefined1 *)((longlong)&uStack_40 + lVar14 + 2) = 1;
        }
        pFVar10 = (this->InternalQueue).AllocatorInstance.Data;
        if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
           (lVar11 = (longlong)(this->InternalQueue).ArrayMax,
           (FScriptContainerElement *)&local_48 < pFVar10 + lVar11 * 0x10)) {
          local_60 = (longlong)(this->InternalQueue).ArrayNum;
          local_58 = 0x10;
          local_78 = &local_48;
          local_70 = pFVar10;
          local_68 = lVar11;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar9 = (FPullPhysicsData *)(*pcVar6)();
            return pFVar9;
          }
        }
        uVar8 = (this->InternalQueue).ArrayNum;
        piVar1 = &(this->InternalQueue).ArrayMax;
        if (uVar8 == *piVar1) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->InternalQueue).AllocatorInstance,piVar1);
          (this->InternalQueue).ArrayNum = uVar8;
        }
        (this->InternalQueue).ArrayNum = uVar8 + 1;
        pFVar10 = (this->InternalQueue).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
        *(longlong *)pFVar10 = local_48;
        *(longlong *)(pFVar10 + 8) = uStack_40;
        goto LAB_143b2ba20;
      }
    }
    pFVar9 = (FPullPhysicsData *)0x0;
  }
  else {
    lVar14 = (longlong)(int)uVar12 * 0x10 + (longlong)param_1;
    uVar13 = 0xffffffff;
    do {
      uVar8 = uVar12;
      iVar3 = (this->InternalQueue).ArrayNum;
      uVar12 = 0;
      if ((int)uVar8 < iVar3) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_78 = (longlong *)(ulonglong)uVar8;
        local_70 = (FScriptContainerElement *)(longlong)iVar3;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FPullPhysicsData *)(*pcVar6)();
          return pFVar9;
        }
      }
      if ((this->InternalQueue).AllocatorInstance.Data[lVar14 + 8] != (FScriptContainerElement)0x0)
      {
        uVar8 = uVar13;
        if (uVar13 == 0xffffffff) goto LAB_143b2b8ed;
        break;
      }
      lVar14 = lVar14 + -0x10;
      uVar12 = uVar8 - 1;
      uVar13 = uVar8;
    } while (-1 < (int)(uVar8 - 1));
LAB_143b2ba20:
    iVar3 = (this->InternalQueue).ArrayNum;
    local_70 = (FScriptContainerElement *)(longlong)iVar3;
    uVar12 = 0;
    if ((int)uVar8 < iVar3) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_78 = (longlong *)(longlong)(int)uVar8;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FPullPhysicsData *)(*pcVar6)();
        return pFVar9;
      }
    }
    pFVar10 = (this->InternalQueue).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    pFVar10[(longlong)param_1 + 8] = (FScriptContainerElement)0x1;
    pFVar9 = *(FPullPhysicsData **)pFVar10;
  }
  return pFVar9;
}

// PullAsyncPhysicsResults_External @ 143b2caf0

TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FChaosResultsManager::PullAsyncPhysicsResults_External
          (FChaosResultsManager *this,
          TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,double param_1)

{
  double *pdVar1;
  FChaosResultsChannel *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FPullPhysicsData *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  FChaosInterpolationResults *local_78 [10];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  dVar5 = __real_3ff0000000000000;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < this->NumActiveChannels) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->Channels).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      this_00 = *(FChaosResultsChannel **)((this->Channels).AllocatorInstance.Data + lVar13);
      uVar7 = 0;
      if ((int)uVar11 < (this->PerChannelTimeDelay).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      dVar4 = param_1 - (double)*(float *)((this->PerChannelTimeDelay).AllocatorInstance.Data +
                                          lVar12);
      dVar15 = dVar5;
      if (0.0 <= dVar4) {
        pFVar10 = (this_00->Results).Next;
        if ((pFVar10 == (FPullPhysicsData *)0x0) ||
           (dVar14 = pFVar10->ExternalEndTime, dVar14 < dVar4)) {
          FChaosInterpolationResults::Reset(&this_00->Results);
          pFVar10 = (this_00->Results).Next;
          if (pFVar10 == (FPullPhysicsData *)0x0) {
            pFVar10 = PopPullData_External(this_00->ResultsManager,this_00->ChannelIdx);
            (this_00->Results).Next = pFVar10;
            if (pFVar10 != (FPullPhysicsData *)0x0) goto LAB_143b2cc5f;
          }
          else {
LAB_143b2cc5f:
            if (pFVar10->ExternalEndTime <= dVar4 && dVar4 != pFVar10->ExternalEndTime) {
              do {
                bVar6 = FChaosResultsChannel::AdvanceResult(this_00);
                if (!bVar6) break;
                pdVar1 = &((this_00->Results).Next)->ExternalEndTime;
              } while (*pdVar1 <= dVar4 && dVar4 != *pdVar1);
            }
          }
          if ((((this_00->Results).Prev != (FPullPhysicsData *)0x0) &&
              ((this_00->Results).Next == (FPullPhysicsData *)0x0)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7378659067549449853>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\ChaosResultsManager.cpp"
                                 ,0x183,"Results.Prev == nullptr || Results.Next != nullptr"), bVar6
             )) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
          pFVar10 = (this_00->Results).Next;
          if (pFVar10 == (FPullPhysicsData *)0x0) goto LAB_143b2cd0c;
          FChaosResultsChannel::SetPrevNextDataHelper<1>(this_00,pFVar10);
          pFVar10 = (this_00->Results).Next;
          dVar14 = pFVar10->ExternalEndTime;
        }
        dVar14 = dVar14 - pFVar10->ExternalStartTime;
        if ((0.0 < dVar14) &&
           (dVar15 = (dVar4 - pFVar10->ExternalStartTime) / dVar14, dVar5 <= dVar15)) {
          dVar15 = dVar5;
        }
      }
LAB_143b2cd0c:
      local_78[0] = FChaosResultsChannel::UpdateInterpAlpha_External(this_00,dVar4,dVar15);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_78) &&
          ((FScriptContainerElement *)local_78 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::FChaosInterpolationResults_const_*,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar11 = uVar11 + 1;
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 4;
      *(FChaosInterpolationResults **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_78[0];
    } while ((int)uVar11 < this->NumActiveChannels);
  }
  return __return_storage_ptr__;
}

// PullSyncPhysicsResults_External @ 143b2cf40

FChaosInterpolationResults * __thiscall
Chaos::FChaosResultsManager::PullSyncPhysicsResults_External(FChaosResultsManager *this)

{
  FChaosResultsChannel *this_00;
  code *pcVar1;
  bool bVar2;
  FChaosInterpolationResults *pFVar3;
  FPullPhysicsData *pFVar4;
  
  if ((this->Channels).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FChaosInterpolationResults *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = *(FChaosResultsChannel **)(this->Channels).AllocatorInstance.Data;
  pFVar4 = (this_00->Results).Prev;
  if (pFVar4 != (FPullPhysicsData *)0x0) {
    FreePullData_External(this_00->ResultsManager,pFVar4,this_00->ChannelIdx);
    (this_00->Results).Prev = (FPullPhysicsData *)0x0;
  }
  FChaosInterpolationResults::Reset(&this_00->Results);
  if ((this_00->Results).Next == (FPullPhysicsData *)0x0) {
    pFVar4 = PopPullData_External(this_00->ResultsManager,this_00->ChannelIdx);
    (this_00->Results).Next = pFVar4;
  }
  do {
    bVar2 = FChaosResultsChannel::AdvanceResult(this_00);
  } while (bVar2);
  pFVar4 = (this_00->Results).Next;
  if (pFVar4 != (FPullPhysicsData *)0x0) {
    FChaosResultsChannel::SetPrevNextDataHelper<1>(this_00,pFVar4);
    (this_00->Results).Alpha = 1.0;
  }
  return &this_00->Results;
}

// RemoveProxy_External @ 143b35ee0

void __thiscall
Chaos::FChaosResultsManager::RemoveProxy_External
          (FChaosResultsManager *this,FSingleParticlePhysicsProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FSingleParticlePhysicsProxy *local_res8;
  
  pFVar5 = (this->Channels).AllocatorInstance.Data;
  iVar2 = (this->Channels).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FChaosResultsChannel_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    local_res8 = param_1;
    if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      TSet<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::FSingleParticlePhysicsProxy_const_*>
                ((TSet<TTuple<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData>,TDefaultMapHashableKeyFuncs<Chaos::FSingleParticlePhysicsProxy_*,Chaos::FDirtyRigidParticleData,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x50),uVar4 >> 0x10 ^ uVar4,&local_res8);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

