// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// FPropertyReplicationFragment @ 1442adb80

FPropertyReplicationFragment * __thiscall
UE::Net::FPropertyReplicationFragment::FPropertyReplicationFragment
          (FPropertyReplicationFragment *this,EReplicationFragmentTraits param_1,UObject *param_2,
          FReplicationStateDescriptor *param_3)

{
  TUniquePtr<UE::Net::FPropertyReplicationState,TDefaultDelete<UE::Net::FPropertyReplicationState>_>
  *pTVar1;
  TUniquePtr<UE::Net::FPropertyReplicationState,TDefaultDelete<UE::Net::FPropertyReplicationState>_>
  *pTVar2;
  uint uVar3;
  uint uVar4;
  FPropertyReplicationState *pFVar5;
  FPropertyReplicationState *pFVar6;
  FPropertyReplicationState *this_00;
  undefined8 local_38;
  undefined8 local_30;
  
  this_00 = (FPropertyReplicationState *)0x0;
  pTVar1 = &this->PrevReplicationState;
  this->_padding_ = (longlong)&___7FPropertyReplicationFragment_Net_UE__6B_;
  pTVar2 = &this->SrcReplicationState;
  pTVar2->Ptr = (FPropertyReplicationState *)0x0;
  *(EReplicationFragmentTraits *)&this->_padding_ = param_1;
  pTVar1->Ptr = (FPropertyReplicationState *)0x0;
  (this->ReplicationStateDescriptor).Reference = param_3;
  if (param_3 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::AddRef(param_3);
  }
  this->Owner = param_2;
  if ((param_1 & CanReplicate) != None) {
    pFVar5 = ::operator_new(0x18);
    pFVar6 = this_00;
    if (pFVar5 != (FPropertyReplicationState *)0x0) {
      pFVar6 = FPropertyReplicationState::FPropertyReplicationState(pFVar5,param_3);
    }
    if (pTVar2 == (TUniquePtr<UE::Net::FPropertyReplicationState,TDefaultDelete<UE::Net::FPropertyReplicationState>_>
                   *)&local_38) {
      if (pFVar6 != (FPropertyReplicationState *)0x0) {
        FPropertyReplicationState::~FPropertyReplicationState(pFVar6);
        ::operator_delete(pFVar6,0x18);
      }
    }
    else {
      pFVar5 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar6;
      if (pFVar5 != (FPropertyReplicationState *)0x0) {
        FPropertyReplicationState::~FPropertyReplicationState(pFVar5);
        ::operator_delete(pFVar5,0x18);
      }
    }
  }
  if ((param_1 & CanReceive) == None) goto LAB_1442add09;
  if ((param_3->Traits & HasRepNotifies) != None) {
    if ((bUsePrevReceivedStateForOnReps == false) || ((param_3->Traits & KeepPreviousState) != None)
       ) {
      pFVar6 = ::operator_new(0x18);
      if (pFVar6 != (FPropertyReplicationState *)0x0) {
        this_00 = FPropertyReplicationState::FPropertyReplicationState(pFVar6,param_3);
      }
      if (pTVar1 == (TUniquePtr<UE::Net::FPropertyReplicationState,TDefaultDelete<UE::Net::FPropertyReplicationState>_>
                     *)&local_30) {
        if (this_00 != (FPropertyReplicationState *)0x0) {
          FPropertyReplicationState::~FPropertyReplicationState(this_00);
          goto LAB_1442adce1;
        }
      }
      else {
        pFVar6 = pTVar1->Ptr;
        pTVar1->Ptr = this_00;
        if (pFVar6 != (FPropertyReplicationState *)0x0) {
          FPropertyReplicationState::~FPropertyReplicationState(pFVar6);
          this_00 = pFVar6;
LAB_1442adce1:
          ::operator_delete(this_00,0x18);
        }
      }
      FPropertyReplicationState::StoreCurrentPropertyReplicationStateForRepNotifies
                (pTVar1->Ptr,param_2,(FPropertyReplicationState *)0x0);
      *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x100;
LAB_1442add09:
  uVar3 = (uint)this->_padding_;
  if (((param_1 & CanReplicate) != None) && (param_3->FunctionCount == 0)) {
    uVar3 = uVar3 | 0x80;
    *(uint *)&this->_padding_ = uVar3;
  }
  uVar4 = uVar3;
  if ((param_3->Traits & HasPushBasedDirtiness) != None) {
    uVar4 = uVar3 | 0x400;
    *(uint *)&this->_padding_ = uVar4;
    if ((param_3->Traits & HasFullPushBasedDirtiness) != None) {
      uVar4 = uVar3 | 0xc00;
      *(uint *)&this->_padding_ = uVar4;
    }
  }
  if ((param_3->Traits & HasObjectReference) != None) {
    uVar4 = uVar4 | 0x2000;
  }
  *(uint *)&this->_padding_ = uVar4 | 0x5000;
  return this;
}

// ~FPropertyReplicationFragment @ 1442b0440

void __thiscall
UE::Net::FPropertyReplicationFragment::~FPropertyReplicationFragment
          (FPropertyReplicationFragment *this)

{
  FReplicationStateDescriptor *this_00;
  FPropertyReplicationState *pFVar1;
  
  this->_padding_ = (longlong)&___7FPropertyReplicationFragment_Net_UE__6B_;
  this_00 = (this->ReplicationStateDescriptor).Reference;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(this_00);
  }
  pFVar1 = (this->PrevReplicationState).Ptr;
  if (pFVar1 != (FPropertyReplicationState *)0x0) {
    FPropertyReplicationState::~FPropertyReplicationState(pFVar1);
    ::operator_delete(pFVar1,0x18);
  }
  pFVar1 = (this->SrcReplicationState).Ptr;
  if (pFVar1 != (FPropertyReplicationState *)0x0) {
    FPropertyReplicationState::~FPropertyReplicationState(pFVar1);
    ::operator_delete(pFVar1,0x18);
  }
  this->_padding_ = (longlong)&___7FReplicationFragment_Net_UE__6B_;
  return;
}

// ApplyReplicatedState @ 1442b6310

void __thiscall
UE::Net::FPropertyReplicationFragment::ApplyReplicatedState
          (FPropertyReplicationFragment *this,FReplicationStateApplyContext *param_1)

{
  FPropertyReplicationState *this_00;
  bool bVar1;
  FPropertyReplicationState local_28;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId139,"PropertyReplicationFragment_ApplyReplicatedState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\PropertyReplicationFragment.cpp"
               ,0x8b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId139);
  }
  FPropertyReplicationState::FPropertyReplicationState
            (&local_28,param_1->Descriptor,(param_1->StateBufferData).ExternalStateBuffer);
  if ((bUsePrevReceivedStateForOnReps == false) &&
     (this_00 = (this->PrevReplicationState).Ptr, this_00 != (FPropertyReplicationState *)0x0)) {
    FPropertyReplicationState::StoreCurrentPropertyReplicationStateForRepNotifies
              (this_00,this->Owner,&local_28);
  }
  FPropertyReplicationState::PushPropertyReplicationState(&local_28,this->Owner,this->Owner,false);
  FPropertyReplicationState::~FPropertyReplicationState(&local_28);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CallRepNotifies @ 1442b6ed0

void __thiscall
UE::Net::FPropertyReplicationFragment::CallRepNotifies
          (FPropertyReplicationFragment *this,FReplicationStateApplyContext *param_1)

{
  FPropertyReplicationState *this_00;
  bool bVar1;
  FCallRepNotifiesParameters local_48;
  FPropertyReplicationState local_38;
  FPropertyReplicationState local_20;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId99,"PropertyReplicationFragment_InvokeRepNotifies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\PropertyReplicationFragment.cpp"
               ,99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId99);
  }
  FPropertyReplicationState::FPropertyReplicationState
            (&local_38,param_1->Descriptor,(param_1->StateBufferData).ExternalStateBuffer);
  local_48.PreviousState = (this->PrevReplicationState).Ptr;
  if ((local_48.PreviousState == (FPropertyReplicationState *)0x0) && (param_1->bIsInit != 0)) {
    FPropertyReplicationState::FPropertyReplicationState(&local_20,param_1->Descriptor);
    local_48.PreviousState = &local_20;
    local_48.bIsInit = param_1->bIsInit;
    local_48.bOnlyCallIfDiffersFromLocal = false;
    FPropertyReplicationState::CallRepNotifies(&local_38,this->Owner,&local_48);
    FPropertyReplicationState::~FPropertyReplicationState(&local_20);
  }
  else {
    local_48.bIsInit = param_1->bIsInit;
    local_48.bOnlyCallIfDiffersFromLocal = bUsePrevReceivedStateForOnReps == false;
    FPropertyReplicationState::CallRepNotifies(&local_38,this->Owner,&local_48);
    if ((bUsePrevReceivedStateForOnReps != false) &&
       (this_00 = (this->PrevReplicationState).Ptr, this_00 != (FPropertyReplicationState *)0x0)) {
      if (param_1->bIsInit == 0) {
        FPropertyReplicationState::CopyDirtyProperties(this_00,&local_38);
      }
      else {
        FPropertyReplicationState::operator=(this_00,&local_38);
      }
    }
  }
  FPropertyReplicationState::~FPropertyReplicationState(&local_38);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CollectOwner @ 1442b7ef0

void __thiscall
UE::Net::FPropertyReplicationFragment::CollectOwner
          (FPropertyReplicationFragment *this,FReplicationStateOwnerCollector *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->OwnerCount;
  if ((uVar1 < param_1->MaxOwnerCount) &&
     ((uVar1 == 0 || (param_1->Owners[uVar1 - 1] != this->Owner)))) {
    param_1->Owners[uVar1] = this->Owner;
    param_1->OwnerCount = param_1->OwnerCount + 1;
  }
  return;
}

// CreateAndRegisterFragment @ 1442b8fa0

FPropertyReplicationFragment * __cdecl
UE::Net::FPropertyReplicationFragment::CreateAndRegisterFragment
          (UObject *param_1,FReplicationStateDescriptor *param_2,
          FFragmentRegistrationContext *param_3)

{
  FPropertyReplicationFragment *pFVar1;
  
  if ((param_2 != (FReplicationStateDescriptor *)0x0) &&
     ((param_2->Traits & IsFastArrayReplicationState) == None)) {
    pFVar1 = ::operator_new(0x30);
    if (pFVar1 == (FPropertyReplicationFragment *)0x0) {
      pFVar1 = (FPropertyReplicationFragment *)0x0;
    }
    else {
      pFVar1 = FPropertyReplicationFragment(pFVar1,param_3->FragmentTraits,param_1,param_2);
    }
    *(uint *)&pFVar1->_padding_ = (uint)pFVar1->_padding_ | 8;
    Register(pFVar1,param_3);
    return pFVar1;
  }
  return (FPropertyReplicationFragment *)0x0;
}

// PollReplicatedState @ 1442ca100

bool __thiscall
UE::Net::FPropertyReplicationFragment::PollReplicatedState
          (FPropertyReplicationFragment *this,EReplicationFragmentPollFlags param_1)

{
  bool bVar1;
  bool bVar2;
  EReplicationFragmentPollFlags EVar3;
  FPollParameters local_res10 [4];
  
  bVar1 = false;
  EVar3 = param_1 & EnableVerboseProfiling;
  if ((param_1 & PollAllState) == None) {
    if ((param_1 & PollDirtyState) == None) {
      if ((param_1 & ForceRefreshCachedObjectReferencesAfterGC) != None) {
        if ((EVar3 == None) || (CpuChannel->Enabled < 0)) {
          bVar1 = FPropertyReplicationState::PollObjectReferences
                            ((this->SrcReplicationState).Ptr,this->Owner);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId184,"PropertyReplicationFragment_PollObjectReferences"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\PropertyReplicationFragment.cpp"
                     ,0xb8);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId184);
          bVar1 = FPropertyReplicationState::PollObjectReferences
                            ((this->SrcReplicationState).Ptr,this->Owner);
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    else {
      if (((param_1 & ForceRefreshCachedObjectReferencesAfterGC) == None) ||
         ((((this->ReplicationStateDescriptor).Reference)->Traits & HasObjectReference) == None)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((((this->ReplicationStateDescriptor).Reference)->Traits & HasFullPushBasedDirtiness) ==
            None) || (bVar2)) ||
         (bVar2 = FPropertyReplicationState::IsDirtyForPolling((this->SrcReplicationState).Ptr),
         bVar2)) {
        if ((EVar3 == None) || (CpuChannel->Enabled < 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId175,"PropertyReplicationFragment_PollDirtyState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\PropertyReplicationFragment.cpp"
                     ,0xaf);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId175);
        }
        local_res10[0].bEnableVerboseProfiling = EVar3 != None;
        local_res10[0].bForceRefreshObjectReferences = EVar3 != None;
        bVar1 = FPropertyReplicationState::PollPushBasedPropertyReplicationState
                          ((this->SrcReplicationState).Ptr,this->Owner,local_res10);
        if (bVar2) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
  }
  else if ((EVar3 == None) || (CpuChannel->Enabled < 0)) {
    bVar1 = FPropertyReplicationState::PollPropertyReplicationState
                      ((this->SrcReplicationState).Ptr,this->Owner);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId161,"PropertyReplicationFragment_PollAllState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\PropertyReplicationFragment.cpp"
               ,0xa1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId161);
    bVar1 = FPropertyReplicationState::PollPropertyReplicationState
                      ((this->SrcReplicationState).Ptr,this->Owner);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// Register @ 1442dbbc0

void __thiscall
UE::Net::FPropertyReplicationFragment::Register
          (FPropertyReplicationFragment *this,FFragmentRegistrationContext *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FPropertyReplicationState *pFVar3;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar8;
  FReplicationStateDescriptor *local_28;
  uchar *puStack_20;
  FPropertyReplicationFragment *local_18;
  
  pFVar3 = (this->SrcReplicationState).Ptr;
  if (pFVar3 == (FPropertyReplicationState *)0x0) {
    puStack_20 = (uchar *)0x0;
  }
  else {
    puStack_20 = pFVar3->StateBuffer;
  }
  local_28 = (this->ReplicationStateDescriptor).Reference;
  FVar4 = (param_1->Fragments).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_1;
  if (FVar4 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    FVar8 = FVar4;
  }
  local_18 = this;
  if ((ulonglong)FVar8 <= &local_28) {
    FVar8 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_1;
    if (FVar4 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
      FVar8 = FVar4;
    }
    if ((&local_28 <
         (FReplicationStateDescriptor **)
         ((longlong)FVar8 + (longlong)(param_1->Fragments).ArrayMax * 0x18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (param_1->Fragments).ArrayNum;
  piVar1 = &(param_1->Fragments).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationFragmentInfo>_>
                      (0x818,(ForElementType<UE::Net::FReplicationFragmentInfo> *)param_1,piVar1);
  }
  (param_1->Fragments).ArrayNum = iVar7 + 1;
  FVar4 = (param_1->Fragments).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    param_1 = (FFragmentRegistrationContext *)FVar4;
  }
  puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0x18);
  *puVar2 = local_28;
  puVar2[1] = puStack_20;
  *(FPropertyReplicationFragment **)((uchar *)((longlong)param_1 + 0x10) + (longlong)iVar7 * 0x18) =
       local_18;
  return;
}

// ReplicatedStateToString @ 1442dfdf0

void __thiscall
UE::Net::FPropertyReplicationFragment::ReplicatedStateToString
          (FPropertyReplicationFragment *this,TStringBuilderBase<wchar_t> *param_1,
          FReplicationStateApplyContext *param_2,EReplicationStateToStringFlags param_3)

{
  FPropertyReplicationState local_28;
  
  FPropertyReplicationState::FPropertyReplicationState
            (&local_28,param_2->Descriptor,(param_2->StateBufferData).ExternalStateBuffer);
  FPropertyReplicationState::ToString(&local_28,param_1,(bool)(~(byte)param_3 & 1));
  FPropertyReplicationState::~FPropertyReplicationState(&local_28);
  return;
}

