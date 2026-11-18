// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FChaosDDFrame @ 1436f5540

FChaosDDFrame * __thiscall
ChaosDD::Private::FChaosDDFrame::FChaosDDFrame
          (FChaosDDFrame *this,TWeakPtr<ChaosDD::Private::FChaosDDTimeline,1> *param_1,
          long64 param_2,double param_3,double param_4,TSphere<double> *param_5,int param_6,
          int param_7)

{
  int *piVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FChaosDDFrame_Private_ChaosDD__6B_;
  (this->Timeline).Object = param_1->Object;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  (this->Timeline).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  piVar1 = &(this->Commands).ArrayMax;
  piVar2 = &(this->LatentCommands).ArrayMax;
  this->Time = param_3;
  this->Dt = param_4;
  this->FrameIndex = param_2;
  uVar4 = *(undefined4 *)((longlong)&(param_5->Center).field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&(param_5->Center).field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&(param_5->Center).field0_0x0 + 0xc);
  *(undefined4 *)&(this->DrawRegion).Center.field0_0x0 =
       *(undefined4 *)&(param_5->Center).field0_0x0;
  *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 0xc) = uVar6;
  uVar4 = *(undefined4 *)((longlong)&(param_5->Center).field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(param_5->Center).field0_0x0 + 0x14);
  uVar6 = *(undefined4 *)&param_5->W;
  uVar7 = *(undefined4 *)((longlong)&param_5->W + 4);
  this->CommandCost = 0;
  *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->DrawRegion).W = uVar6;
  *(undefined4 *)((longlong)&(this->DrawRegion).W + 4) = uVar7;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  *piVar1 = 0;
  (this->LatentCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentCommands).ArrayNum = 0;
  *piVar2 = 0;
  this->CommandBudget = param_6;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CommandsCS,4000);
  if (0 < param_7) {
    if (*piVar1 < param_7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,param_7,&(this->Commands).AllocatorInstance,(this->Commands).ArrayNum,
                 piVar1);
    }
    if (*piVar2 < param_7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1b0,0x10,param_7,&(this->LatentCommands).AllocatorInstance,
                 (this->LatentCommands).ArrayNum,piVar2);
    }
  }
  BuildName(this);
  return this;
}

// ~FChaosDDFrame @ 1436f71f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ChaosDD::Private::FChaosDDFrame::~FChaosDDFrame(FChaosDDFrame *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FChaosDDFrame_Private_ChaosDD__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CommandsCS);
  DestructItems<Chaos::FLatentDrawCommand,int>
            ((FLatentDrawCommand *)(this->LatentCommands).AllocatorInstance.Data,
             (this->LatentCommands).ArrayNum);
  pFVar5 = (this->LatentCommands).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,int>
            ((TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)
             (this->Commands).AllocatorInstance.Data,(this->Commands).ArrayNum);
  pFVar5 = (this->Commands).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->Timeline).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// BeginWrite @ 1436f9500

void __thiscall ChaosDD::Private::FChaosDDFrame::BeginWrite(FChaosDDFrame *this)

{
  return;
}

// BuildName @ 1436fad00

void __thiscall ChaosDD::Private::FChaosDDFrame::BuildName(FChaosDDFrame *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  FChaosDDTimeline *pFVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pTVar1 = (this->Timeline).WeakReferenceCount.ReferenceController;
  pTVar7 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1436fad46;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    pFVar3 = (this->Timeline).Object;
    pTVar7 = pTVar1;
    if (pFVar3 != (FChaosDDTimeline *)0x0) {
      pFVar6 = ::FString::FString((FString *)&local_68,&pFVar3->Name);
      FStringFormatArg::FStringFormatArg(&local_48,pFVar6);
      FStringFormatArg::FStringFormatArg(&local_28,this->FrameIndex);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_48,2);
      ::FString::FormatImpl(&local_88,L"{0}: {1}",&local_98);
      pFVar6 = &this->Name;
      if (pFVar6 != &local_88) {
        pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar6->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        (this->Name).Data.ArrayNum = local_88.Data.ArrayNum;
        (this->Name).Data.ArrayMax = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
      }
      goto LAB_1436faf34;
    }
  }
LAB_1436fad46:
  FStringFormatArg::FStringFormatArg(&local_68,this->FrameIndex);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_68,1)
  ;
  ::FString::FormatImpl(&local_78,L"<Global>: {0}",&local_98);
  pFVar6 = &this->Name;
  if (pFVar6 != &local_78) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (this->Name).Data.ArrayNum = local_78.Data.ArrayNum;
    (this->Name).Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  local_48.StringValue.Data.AllocatorInstance.Data =
       local_68.StringValue.Data.AllocatorInstance.Data;
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
    local_48.StringValue.Data.AllocatorInstance.Data =
         local_68.StringValue.Data.AllocatorInstance.Data;
  }
LAB_1436faf34:
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// EndWrite @ 1436fed40

void __thiscall ChaosDD::Private::FChaosDDFrame::EndWrite(FChaosDDFrame *this)

{
  return;
}

// ExtractFrame @ 1436feeb0

TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> * __thiscall
ChaosDD::Private::FChaosDDFrame::ExtractFrame
          (FChaosDDFrame *this,TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *__return_storage_ptr__
          )

{
  TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FChaosDDFrame *this_01;
  FChaosDDFrame *pFVar8;
  
  iVar1 = (this->Commands).ArrayMax;
  this_00 = &this->LatentCommands;
  iVar2 = (this->LatentCommands).ArrayMax;
  this_01 = ::operator_new(0xc0);
  pFVar8 = (FChaosDDFrame *)0x0;
  if (this_01 != (FChaosDDFrame *)0x0) {
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = (longlong)&___7FChaosDDFrame_Private_ChaosDD__6B_;
    (this_01->Timeline).Object = (this->Timeline).Object;
    pTVar4 = (this->Timeline).WeakReferenceCount.ReferenceController;
    (this_01->Timeline).WeakReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    this_01->FrameIndex = this->FrameIndex;
    this_01->Time = this->Time;
    this_01->Dt = this->Dt;
    uVar5 = *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 0xc);
    *(undefined4 *)&(this_01->DrawRegion).Center.field0_0x0 =
         *(undefined4 *)&(this->DrawRegion).Center.field0_0x0;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 4) = uVar5;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 8) = uVar6;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 0xc) = uVar7;
    uVar5 = *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 0x14);
    uVar6 = *(undefined4 *)&(this->DrawRegion).W;
    uVar7 = *(undefined4 *)((longlong)&(this->DrawRegion).W + 4);
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 0x10) =
         *(undefined4 *)((longlong)&(this->DrawRegion).Center.field0_0x0 + 0x10);
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 0x14) = uVar5;
    *(undefined4 *)&(this_01->DrawRegion).W = uVar6;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).W + 4) = uVar7;
    this_01->CommandBudget = this->CommandBudget;
    iVar3 = this->CommandCost;
    (this_01->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01->CommandCost = iVar3;
    (this_01->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Name).Data.ArrayNum = 0;
    (this_01->Name).Data.ArrayMax = 0;
    (this_01->Commands).AllocatorInstance.Data = (this->Commands).AllocatorInstance.Data;
    (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Commands).ArrayNum = (this->Commands).ArrayNum;
    (this_01->Commands).ArrayMax = (this->Commands).ArrayMax;
    (this->Commands).ArrayNum = 0;
    (this->Commands).ArrayMax = 0;
    (this_01->LatentCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->LatentCommands).AllocatorInstance.Data = (this_00->AllocatorInstance).Data;
    (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this_01->LatentCommands).ArrayNum = (this->LatentCommands).ArrayNum;
    (this_01->LatentCommands).ArrayMax = (this->LatentCommands).ArrayMax;
    (this->LatentCommands).ArrayNum = 0;
    (this->LatentCommands).ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_01->CommandsCS,4000);
    BuildName(this_01);
    pFVar8 = this_01;
  }
  TArray<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,TSizedDefaultAllocator<32>_>
  ::Reset(&this->Commands,iVar1);
  TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_>::Reset(this_00,iVar2);
  this->CommandCost = 0;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>::
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1><ChaosDD::Private::FChaosDDFrame>
            (__return_storage_ptr__,pFVar8);
  return __return_storage_ptr__;
}

// AddToCost @ 143a4bc90

bool __thiscall ChaosDD::Private::FChaosDDFrame::AddToCost(FChaosDDFrame *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CommandsCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->CommandCost = this->CommandCost + param_1;
    if ((this->CommandBudget < this->CommandCost) && (this->CommandBudget != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EnqueueCommand @ 143a663e0

void __thiscall
ChaosDD::Private::FChaosDDFrame::EnqueueCommand
          (FChaosDDFrame *this,
          TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  lpCriticalSection = &this->CommandsCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = (this->Commands).ArrayNum;
    piVar1 = &(this->Commands).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->Commands).AllocatorInstance,piVar1);
    }
    (this->Commands).ArrayNum = iVar5 + 1;
    pFVar6 = (this->Commands).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
    *(longlong *)pFVar6 = *(longlong *)param_1;
    *(longlong *)(pFVar6 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined4 *)&param_1->field_0x14;
    uVar3 = *(undefined4 *)&param_1->field_0x18;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)(pFVar6 + 0x10) = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)(pFVar6 + 0x14) = uVar2;
    *(undefined4 *)(pFVar6 + 0x18) = uVar3;
    *(undefined4 *)(pFVar6 + 0x1c) = uVar4;
    *(longlong *)(pFVar6 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar6 != 0) {
      *(undefined8 *)param_1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000143a66485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

