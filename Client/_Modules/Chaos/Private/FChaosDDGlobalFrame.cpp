// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// BeginWrite @ 1436f9510

void __thiscall ChaosDD::Private::FChaosDDGlobalFrame::BeginWrite(FChaosDDGlobalFrame *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001436f9517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&this->FrameWriteCS);
  return;
}

// EndWrite @ 1436fed50

void __thiscall ChaosDD::Private::FChaosDDGlobalFrame::EndWrite(FChaosDDGlobalFrame *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001436fed57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->FrameWriteCS);
  return;
}

// ExtractFrame @ 1436ff030

TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> * __thiscall
ChaosDD::Private::FChaosDDGlobalFrame::ExtractFrame
          (FChaosDDGlobalFrame *this,
          TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  FChaosDDFrame *this_01;
  FChaosDDFrame *pFVar8;
  
  lpCriticalSection = &this->FrameWriteCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  this_00 = &this->_padding_;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  this_01 = ::operator_new(0xc0);
  pFVar8 = (FChaosDDFrame *)0x0;
  if (this_01 != (FChaosDDFrame *)0x0) {
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = (longlong)&___7FChaosDDFrame_Private_ChaosDD__6B_;
    (this_01->Timeline).Object = (FChaosDDTimeline *)this->_padding_;
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    (this_01->Timeline).WeakReferenceCount.ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    this_01->FrameIndex = this->_padding_;
    this_01->Time = (double)this->_padding_;
    this_01->Dt = (double)this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)&(this_01->DrawRegion).Center.field0_0x0 = (int)this->_padding_;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 4) = uVar5;
    *(int *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 8) = (int)lVar7;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 0xc) = uVar6;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 0x10) = (int)this->_padding_;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).Center.field0_0x0 + 0x14) = uVar5;
    *(int *)&(this_01->DrawRegion).W = (int)lVar7;
    *(undefined4 *)((longlong)&(this_01->DrawRegion).W + 4) = uVar6;
    this_01->CommandBudget = (int)this->_padding_;
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    (this_01->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01->CommandCost = iVar3;
    (this_01->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Name).Data.ArrayNum = 0;
    (this_01->Name).Data.ArrayMax = 0;
    (this_01->Commands).AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
    this->_padding_ = 0;
    (this_01->Commands).ArrayNum = (int)this->_padding_;
    (this_01->Commands).ArrayMax = *(int *)((longlong)&this->_padding_ + 4);
    this->_padding_ = 0;
    (this_01->LatentCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->LatentCommands).AllocatorInstance.Data = (FScriptContainerElement *)*this_00;
    *this_00 = 0;
    (this_01->LatentCommands).ArrayNum = (int)this->_padding_;
    (this_01->LatentCommands).ArrayMax = *(int *)((longlong)&this->_padding_ + 4);
    this->_padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_01->CommandsCS,4000);
    FChaosDDFrame::BuildName(this_01);
    pFVar8 = this_01;
  }
  TArray<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,TSizedDefaultAllocator<32>_>
  ::Reset((TArray<TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)>,TSizedDefaultAllocator<32>_>
           *)&this->_padding_,iVar1);
  TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *)this_00,iVar2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>::
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1><ChaosDD::Private::FChaosDDFrame>
            (__return_storage_ptr__,pFVar8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

