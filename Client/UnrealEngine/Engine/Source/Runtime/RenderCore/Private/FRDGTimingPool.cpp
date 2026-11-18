// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// InitRHI @ 145d73420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGTimingPool::InitRHI(FRDGTimingPool *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 local_res8 [4];
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = 0;
  DynamicRenderScaling::TMap<unsigned___int64>::SetAll(&this->LatestTimings,local_res8);
  return;
}

// ReleaseRHI @ 145d73480

void __thiscall FRDGTimingPool::ReleaseRHI(FRDGTimingPool *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->QueryPool).Reference != (FRHIRenderQueryPool *)0x0) {
    GatherResults(this,true);
    if (((this->Pending != (FRDGTimingFrame *)0x0) || (this->Recording != (FRDGTimingFrame *)0x0))
       || (this->Previous != (FRDGTimingFrame *)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Pending && !Recording && !Previous",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                         ,0x8b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (FRHIResource *)(this->QueryPool).Reference;
    if (this_00 != (FRHIResource *)0x0) {
      (this->QueryPool).Reference = (FRHIRenderQueryPool *)0x0;
      FRHIResource::Release(this_00);
      return;
    }
  }
  return;
}

// ~FRDGTimingPool @ 145d91070

void __thiscall FRDGTimingPool::~FRDGTimingPool(FRDGTimingPool *this)

{
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar1;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar2;
  FRHIResource *this_00;
  
  FVar1 = (this->bIsBudgetRecordingEnabled).Array.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->LatestTimings).Array.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this_00 = (FRHIResource *)(this->QueryPool).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// BeginFrame @ 145da30c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRDGTimingPool::BeginFrame(FRDGTimingPool *this,TMap<bool> *param_1)

{
  TRefCountPtr<FRHIRenderQueryPool> *pTVar1;
  int iVar2;
  uint uVar3;
  FBudget *pFVar4;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar5;
  FRHIResource *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar10;
  TRefCountPtr<FRHIRenderQueryPool> TVar11;
  FRDGTimingFrame *pFVar12;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar13;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar14;
  FRDGTimingFrame *pFVar15;
  FRHIResource *local_res8;
  ulong64 local_res18 [2];
  
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                         ,0x94,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->Recording != (FRDGTimingFrame *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Recording",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                         ,0x95,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  GatherResults(this,false);
  ppTVar10 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar14 = *ppTVar10;
  if (pTVar14 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
    pFVar15 = (FRDGTimingFrame *)0x0;
    do {
      pFVar4 = pTVar14->Element;
      iVar2 = (param_1->Array).ArrayNum;
      iVar8 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      if ((iVar2 != iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Array.Num() == FBudget::GetGlobalListSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                             ,0xcf,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = pFVar4->BudgetId;
      uVar9 = 0;
      if ((int)uVar3 < (param_1->Array).ArrayNum) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (param_1->Array).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)param_1;
      if (FVar5 != (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
        FVar13 = FVar5;
      }
      if (((uchar *)((longlong)FVar13 + 8))[(longlong)(int)uVar3 * 0x10] != '\0') {
        if ((GRHIGlobals.SupportsGPUTimestampBubblesRemoval == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("DynamicRenderScaling::IsSupported()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                               ,0xa1,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar1 = &this->QueryPool;
        if ((this->QueryPool).Reference == (FRHIRenderQueryPool *)0x0) {
          TVar11 = RHICreateRenderQueryPool((ERenderQueryType)&local_res8,2);
          if ((FRHIRenderQueryPool *)pTVar1 != TVar11.Reference) {
            this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
            pTVar1->Reference = *TVar11.Reference;
            *(undefined8 *)TVar11.Reference = 0;
            if (this_00 != (FRHIResource *)0x0) {
              FRHIResource::Release(this_00);
            }
          }
          if (local_res8 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_res8);
          }
        }
        pFVar12 = ::operator_new(0x140);
        if (pFVar12 != (FRDGTimingFrame *)0x0) {
          pFVar12->QueryPool = pTVar1->Reference;
          (pFVar12->TimingScopes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->TimingScopes).ArrayNum = 0;
          (pFVar12->TimingScopes).ArrayMax = 0;
          pFVar12->NextScope = 0;
          (pFVar12->RHIEndFence).Reference = (FBaseGraphTask *)0x0;
          pFVar12->Next = (FRDGTimingFrame *)0x0;
          DynamicRenderScaling::TMap<unsigned___int64>::TMap<unsigned___int64>(&pFVar12->Timings);
          local_res18[0] = 0;
          DynamicRenderScaling::TMap<unsigned___int64>::SetAll(&pFVar12->Timings,local_res18);
          pFVar15 = pFVar12;
        }
        this->Recording = pFVar15;
        DynamicRenderScaling::TMap<bool>::operator=(&this->bIsBudgetRecordingEnabled,param_1);
        return;
      }
      pTVar14 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar14->_padding_;
    } while (pTVar14 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0);
  }
  return;
}

// GatherResults @ 145db7c30

void __thiscall FRDGTimingPool::GatherResults(FRDGTimingPool *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FRDGTimingFrame *pFVar5;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar6;
  FBaseGraphTask *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> _Src;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar10;
  
  pFVar5 = this->Pending;
  while ((pFVar5 != (FRDGTimingFrame *)0x0 &&
         (bVar9 = FRDGTimingFrame::GatherResults(pFVar5,param_1), bVar9))) {
    pFVar5 = this->Pending;
    FVar10 = (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)
             &this->LatestTimings;
    if (FVar10 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)
                  &pFVar5->Timings) {
      FVar6 = (pFVar5->Timings).Array.AllocatorInstance.SecondaryData;
      piVar2 = &(this->LatestTimings).Array.ArrayMax;
      iVar3 = (pFVar5->Timings).Array.ArrayNum;
      iVar4 = *piVar2;
      _Src = (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)&pFVar5->Timings;
      if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
        _Src = FVar6;
      }
      (this->LatestTimings).Array.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0x10;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_>
                  (0x10,8,iVar3,iVar4,
                   (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *)FVar10,
                   iVar3,piVar2);
        FVar6 = (this->LatestTimings).Array.AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
          FVar10 = FVar6;
        }
        if (iVar3 != 0) {
          memcpy((void *)FVar10,(void *)_Src,(longlong)iVar3 << 4);
        }
      }
    }
    if (this->Previous == pFVar5) {
      this->Previous = (FRDGTimingFrame *)0x0;
    }
    this->Pending = pFVar5->Next;
    FVar10 = (pFVar5->Timings).Array.AllocatorInstance.SecondaryData;
    if (FVar10 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
      FMemory::Free((void *)FVar10);
    }
    pFVar7 = (pFVar5->RHIEndFence).Reference;
    if (pFVar7 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar7->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
      }
    }
    DestructItems<FRDGTimingFrame::FInFlightTimingScope,int>
              ((FInFlightTimingScope *)(pFVar5->TimingScopes).AllocatorInstance.Data,
               (pFVar5->TimingScopes).ArrayNum);
    pFVar8 = (pFVar5->TimingScopes).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    ::operator_delete(pFVar5,0x140);
    pFVar5 = this->Pending;
  }
  return;
}

