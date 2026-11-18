// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 13

// FD3D12CommandList @ 1459a8880

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandList * __thiscall
FD3D12CommandList::FD3D12CommandList
          (FD3D12CommandList *this,FD3D12CommandAllocator *param_1,FD3D12QueryAllocator *param_2,
          FD3D12QueryAllocator *param_3)

{
  TRefCountPtr<ID3D12GraphicsCommandList> *pTVar1;
  ED3D12QueueType EVar2;
  FD3D12Device *pFVar3;
  ID3D12GraphicsCommandList *pIVar4;
  ID3D12CommandAllocator *pIVar5;
  ID3D12GraphicsCommandList *pIVar6;
  ID3D12CommandList *pIVar7;
  ID3D12GraphicsCommandList1 *pIVar8;
  ID3D12GraphicsCommandList2 *pIVar9;
  ID3D12GraphicsCommandList3 *pIVar10;
  ID3D12GraphicsCommandList4 *pIVar11;
  ID3D12GraphicsCommandList5 *pIVar12;
  ID3D12GraphicsCommandList6 *pIVar13;
  ID3D12GraphicsCommandList7 *pIVar14;
  ID3D12GraphicsCommandList8 *pIVar15;
  ID3D12GraphicsCommandList9 *pIVar16;
  ID3D12GraphicsCommandList10 *pIVar17;
  ID3D12DebugCommandList *pIVar18;
  FName FVar19;
  code *pcVar20;
  bool bVar21;
  D3D12_COMMAND_LIST_TYPE DVar22;
  int iVar23;
  ResidencySet *pRVar24;
  FD3D12CommandList *pFVar25;
  ID3D12Device *pIVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists> FVar28;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  GFSDK_Aftermath_ContextHandle__ *pGVar29;
  ulong64 uVar30;
  undefined4 uVar31;
  uint uVar32;
  FName local_res8;
  FName local_res10;
  FString local_78;
  FString local_68;
  FStatMessage local_58;
  FString local_48;
  FString local_38;
  
  pFVar3 = param_1->Device;
  this->Device = pFVar3;
  this->QueueType = param_1->QueueType;
  if ((GEnableResidencyManagement == false) ||
     (pRVar24 = ::operator_new(0x28), pRVar24 == (ResidencySet *)0x0)) {
    pRVar24 = (ResidencySet *)0x0;
  }
  else {
    pRVar24->CommandListIndex = 0xffffffff;
    pRVar24->ppSet = (ManagedObject **)0x0;
    pRVar24->MaxResidencySetSize = 0;
    pRVar24->CurrentSetSize = 0;
    pRVar24->IsOpen = false;
    pRVar24->OutOfMemory = false;
    pRVar24->pSyncManager = (SyncManager *)&(pFVar3->ResidencyManager).field_0x1a0;
  }
  this->ResidencySet = pRVar24;
  (this->Interfaces).CommandList.Reference = (ID3D12CommandList *)0x0;
  (this->Interfaces).CopyCommandList.Reference = (ID3D12GraphicsCommandList *)0x0;
  (this->Interfaces).GraphicsCommandList.Reference = (ID3D12GraphicsCommandList *)0x0;
  (this->Interfaces).GraphicsCommandList1.Reference = (ID3D12GraphicsCommandList1 *)0x0;
  (this->Interfaces).GraphicsCommandList2.Reference = (ID3D12GraphicsCommandList2 *)0x0;
  (this->Interfaces).GraphicsCommandList3.Reference = (ID3D12GraphicsCommandList3 *)0x0;
  (this->Interfaces).GraphicsCommandList4.Reference = (ID3D12GraphicsCommandList4 *)0x0;
  (this->Interfaces).GraphicsCommandList5.Reference = (ID3D12GraphicsCommandList5 *)0x0;
  (this->Interfaces).GraphicsCommandList6.Reference = (ID3D12GraphicsCommandList6 *)0x0;
  (this->Interfaces).GraphicsCommandList7.Reference = (ID3D12GraphicsCommandList7 *)0x0;
  (this->Interfaces).GraphicsCommandList8.Reference = (ID3D12GraphicsCommandList8 *)0x0;
  (this->Interfaces).GraphicsCommandList9.Reference = (ID3D12GraphicsCommandList9 *)0x0;
  (this->Interfaces).GraphicsCommandList10.Reference = (ID3D12GraphicsCommandList10 *)0x0;
  (this->Interfaces).DebugCommandList.Reference = (ID3D12DebugCommandList *)0x0;
  (this->Interfaces).AftermathHandle = (GFSDK_Aftermath_ContextHandle__ *)0x0;
  (this->Interfaces).IntelCommandListHandle = 0;
  FState::FState(&this->State,param_1,param_2,param_3);
  EVar2 = this->QueueType;
  if (EVar2 != Direct) {
    if (EVar2 == Copy) {
      pIVar26 = FD3D12Device::GetDevice(this->Device);
      pTVar1 = &(this->Interfaces).CopyCommandList;
      pcVar20 = *(code **)((longlong)*pIVar26 + 0x60);
      pIVar4 = pTVar1->Reference;
      if (pIVar4 != (ID3D12GraphicsCommandList *)0x0) {
        pTVar1->Reference = (ID3D12GraphicsCommandList *)0x0;
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      pIVar5 = (param_1->CommandAllocator).Reference;
      DVar22 = GetD3DCommandListType(this->QueueType);
      if (GVirtualMGPU == 0) {
        uVar31 = *(undefined4 *)this->Device;
      }
      else {
        uVar31 = 1;
      }
      iVar23 = (*pcVar20)(pIVar26,uVar31,DVar22,pIVar5,0,&_GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455
                          ,pTVar1);
      if (iVar23 < 0) {
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar23,
                   "Device->GetDevice()->CreateCommandList( Device->GetGPUMask().GetNative(), GetD3DCommandListType(QueueType), *CommandAllocator, nullptr, IID_PPV_ARGS(Interfaces.CopyCommandList.GetInitReference()) )"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                   ,0x9f,(ID3D12Device *)0x0,&local_78);
      }
      pIVar4 = pTVar1->Reference;
      pIVar6 = (ID3D12GraphicsCommandList *)(this->Interfaces).CommandList.Reference;
      if (pIVar6 != pIVar4) {
        (this->Interfaces).CommandList.Reference = (ID3D12CommandList *)pIVar4;
        if (pIVar4 != (ID3D12GraphicsCommandList *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))();
        }
        if (pIVar6 != (ID3D12GraphicsCommandList *)0x0) {
          (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
        }
      }
      goto LAB_1459a8d99;
    }
    if (EVar2 != Async) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                          ,0xa5,L"");
      if (!bVar21) {
        return this;
      }
      pcVar20 = (code *)swi(3);
      pFVar25 = (FD3D12CommandList *)(*pcVar20)();
      return pFVar25;
    }
  }
  pIVar4 = (this->Interfaces).GraphicsCommandList.Reference;
  pTVar1 = &(this->Interfaces).GraphicsCommandList;
  pFVar3 = this->Device;
  if (pIVar4 != (ID3D12GraphicsCommandList *)0x0) {
    pTVar1->Reference = (ID3D12GraphicsCommandList *)0x0;
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  EVar2 = this->QueueType;
  pIVar5 = (param_1->CommandAllocator).Reference;
  if (EVar2 == Direct) {
LAB_1459a8aca:
    DVar22 = D3D12_COMMAND_LIST_TYPE_DIRECT;
  }
  else if (EVar2 == Copy) {
    DVar22 = D3D12_COMMAND_LIST_TYPE_COPY;
  }
  else {
    if (EVar2 != Async) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                          ,0x2e,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        pFVar25 = (FD3D12CommandList *)(*pcVar20)();
        return pFVar25;
      }
      goto LAB_1459a8aca;
    }
    DVar22 = D3D12_COMMAND_LIST_TYPE_COMPUTE;
  }
  if (GVirtualMGPU == 0) {
    uVar32 = *(uint *)this->Device;
  }
  else {
    uVar32 = 1;
  }
  iVar23 = FD3D12Device::CreateCommandList
                     (pFVar3,uVar32,DVar22,pIVar5,(ID3D12PipelineState *)0x0,
                      (_GUID *)&_GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,&pTVar1->Reference);
  if (iVar23 < 0) {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar23,
               "Device->CreateCommandList( Device->GetGPUMask().GetNative(), GetD3DCommandListType(QueueType), *CommandAllocator, nullptr, IID_PPV_ARGS(Interfaces.GraphicsCommandList.GetInitReference()) )"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
               ,0x6e,(ID3D12Device *)0x0,&local_68);
  }
  pIVar4 = pTVar1->Reference;
  pIVar6 = (ID3D12GraphicsCommandList *)(this->Interfaces).CommandList.Reference;
  if (pIVar6 != pIVar4) {
    (this->Interfaces).CommandList.Reference = (ID3D12CommandList *)pIVar4;
    if (pIVar4 != (ID3D12GraphicsCommandList *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))();
    }
    if (pIVar6 != (ID3D12GraphicsCommandList *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar4 = (this->Interfaces).CopyCommandList.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar4 != (ID3D12GraphicsCommandList *)0x0) {
    (this->Interfaces).CopyCommandList.Reference = (ID3D12GraphicsCommandList *)0x0;
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,&(this->Interfaces).CopyCommandList)
  ;
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar8 = (this->Interfaces).GraphicsCommandList1.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar8 != (ID3D12GraphicsCommandList1 *)0x0) {
    (this->Interfaces).GraphicsCommandList1.Reference = (ID3D12GraphicsCommandList1 *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_553103fb_1fe7_4557_bb38_946d7d0e7ca7,
             &(this->Interfaces).GraphicsCommandList1);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar9 = (this->Interfaces).GraphicsCommandList2.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar9 != (ID3D12GraphicsCommandList2 *)0x0) {
    (this->Interfaces).GraphicsCommandList2.Reference = (ID3D12GraphicsCommandList2 *)0x0;
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_38c3e585_ff17_412c_9150_4fc6f9d72a28,
             &(this->Interfaces).GraphicsCommandList2);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar10 = (this->Interfaces).GraphicsCommandList3.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar10 != (ID3D12GraphicsCommandList3 *)0x0) {
    (this->Interfaces).GraphicsCommandList3.Reference = (ID3D12GraphicsCommandList3 *)0x0;
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_6fda83a7_b84c_4e38_9ac8_c7bd22016b3d,
             &(this->Interfaces).GraphicsCommandList3);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar11 = (this->Interfaces).GraphicsCommandList4.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar11 != (ID3D12GraphicsCommandList4 *)0x0) {
    (this->Interfaces).GraphicsCommandList4.Reference = (ID3D12GraphicsCommandList4 *)0x0;
    (**(code **)((longlong)*pIVar11 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_8754318e_d3a9_4541_98cf_645b50dc4874,
             &(this->Interfaces).GraphicsCommandList4);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar12 = (this->Interfaces).GraphicsCommandList5.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar12 != (ID3D12GraphicsCommandList5 *)0x0) {
    (this->Interfaces).GraphicsCommandList5.Reference = (ID3D12GraphicsCommandList5 *)0x0;
    (**(code **)((longlong)*pIVar12 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_55050859_4024_474c_87f5_6472eaee44ea,
             &(this->Interfaces).GraphicsCommandList5);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar13 = (this->Interfaces).GraphicsCommandList6.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar13 != (ID3D12GraphicsCommandList6 *)0x0) {
    (this->Interfaces).GraphicsCommandList6.Reference = (ID3D12GraphicsCommandList6 *)0x0;
    (**(code **)((longlong)*pIVar13 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_c3827890_e548_4cfa_96cf_5689a9370f80,
             &(this->Interfaces).GraphicsCommandList6);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar14 = (this->Interfaces).GraphicsCommandList7.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar14 != (ID3D12GraphicsCommandList7 *)0x0) {
    (this->Interfaces).GraphicsCommandList7.Reference = (ID3D12GraphicsCommandList7 *)0x0;
    (**(code **)((longlong)*pIVar14 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_dd171223_8b61_4769_90e3_160ccde4e2c1,
             &(this->Interfaces).GraphicsCommandList7);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar15 = (this->Interfaces).GraphicsCommandList8.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar15 != (ID3D12GraphicsCommandList8 *)0x0) {
    (this->Interfaces).GraphicsCommandList8.Reference = (ID3D12GraphicsCommandList8 *)0x0;
    (**(code **)((longlong)*pIVar15 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_ee936ef9_599d_4d28_938e_23c4ad05ce51,
             &(this->Interfaces).GraphicsCommandList8);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar16 = (this->Interfaces).GraphicsCommandList9.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar16 != (ID3D12GraphicsCommandList9 *)0x0) {
    (this->Interfaces).GraphicsCommandList9.Reference = (ID3D12GraphicsCommandList9 *)0x0;
    (**(code **)((longlong)*pIVar16 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_34ed2808_ffe6_4c2b_b11a_cabd2b0c59e1,
             &(this->Interfaces).GraphicsCommandList9);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar17 = (this->Interfaces).GraphicsCommandList10.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar17 != (ID3D12GraphicsCommandList10 *)0x0) {
    (this->Interfaces).GraphicsCommandList10.Reference = (ID3D12GraphicsCommandList10 *)0x0;
    (**(code **)((longlong)*pIVar17 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_7013c015_d161_4b63_a08c_238552dd8acc,
             &(this->Interfaces).GraphicsCommandList10);
  pIVar7 = (this->Interfaces).CommandList.Reference;
  pIVar18 = (this->Interfaces).DebugCommandList.Reference;
  pcVar20 = *(code **)*pIVar7;
  if (pIVar18 != (ID3D12DebugCommandList *)0x0) {
    (this->Interfaces).DebugCommandList.Reference = (ID3D12DebugCommandList *)0x0;
    (**(code **)((longlong)*pIVar18 + 0x10))();
  }
  (*pcVar20)(pIVar7,&_GUID_09e0bf36_54ac_484f_8847_4baeeab6053f);
LAB_1459a8d99:
  FVar28 = StatPtr_STAT_D3D12NumCommandLists;
  if (StatPtr_STAT_D3D12NumCommandLists ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists>)0x0) {
    pFVar27 = ::FName::FName(&local_res10,"STAT_D3D12NumCommandLists");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumCommandLists,*pFVar27,
                        L"Num command lists (3D, Compute, Copy)","STATGROUP_D3D12RHI",
                        "STATCAT_Advanced",L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar28;
  local_res8 = FVar19;
  if (((FVar19 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_58.NameAndInfo.Number = FVar19.Number & 0xffffafff | 0xa000;
    local_58.StatData.Pad[0] = '\x01';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_res8 = FVar19;
    local_58.NameAndInfo.Index.Value = FVar19.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_58);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pGVar29 = UE::RHICore::Nvidia::Aftermath::D3D12::RegisterCommandList
                      ((this->Interfaces).CommandList.Reference);
  pIVar7 = (ID3D12CommandList *)(this->Interfaces).GraphicsCommandList.Reference;
  (this->Interfaces).AftermathHandle = pGVar29;
  uVar30 = UE::RHICore::Intel::GPUCrashDumps::D3D12::RegisterCommandList(pIVar7);
  (this->Interfaces).IntelCommandListHandle = uVar30;
  ::FString::PrintfImpl(&local_38,L"FD3D12CommandList (GPU %d)");
  SetD3D12ObjectName((ID3D12Object *)(this->Interfaces).CommandList.Reference,
                     (wchar_t *)local_38.Data.AllocatorInstance.Data);
  if (((GEnableResidencyManagement != false) && (this->ResidencySet != (ResidencySet *)0x0)) &&
     (iVar23 = D3DX12Residency::ResidencySet::Open(this->ResidencySet), iVar23 < 0)) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar23,"pSet->Open()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
               ,0x95,(ID3D12Device *)0x0,&local_48);
  }
  BeginLocalQueries(this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FD3D12CommandList @ 1459ac360

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::~FD3D12CommandList(FD3D12CommandList *this)

{
  ResidencySet *pRVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  if ((GEnableResidencyManagement) && (pRVar1 = this->ResidencySet, pRVar1 != (ResidencySet *)0x0))
  {
    operator_delete__(pRVar1->ppSet);
    ::operator_delete(pRVar1,0x28);
  }
  UE::RHICore::Nvidia::Aftermath::D3D12::UnregisterCommandList((this->Interfaces).AftermathHandle);
  FVar4 = StatPtr_STAT_D3D12NumCommandLists;
  if (StatPtr_STAT_D3D12NumCommandLists ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_D3D12NumCommandLists");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandLists>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumCommandLists,*pFVar3,
                       L"Num command lists (3D, Compute, Copy)","STATGROUP_D3D12RHI",
                       "STATCAT_Advanced",L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar4;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  FState::~FState(&this->State);
  FInterfaces::~FInterfaces(&this->Interfaces);
  return;
}

// AddToResidencySet @ 1459afb10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandList::AddToResidencySet
          (FD3D12CommandList *this,TArrayView<FD3D12ResidencyHandle_*_const,int> *param_1)

{
  FD3D12ResidencyHandle **ppFVar1;
  FD3D12ResidencyHandle *pFVar2;
  ResidencySet *this_00;
  code *pcVar3;
  bool bVar4;
  FD3D12ResidencyHandle **ppFVar5;
  
  ppFVar5 = param_1->DataPtr;
  ppFVar1 = ppFVar5 + param_1->ArrayNum;
  do {
    if (ppFVar5 == ppFVar1) {
      return;
    }
    pFVar2 = *ppFVar5;
    if (((GEnableResidencyManagement != false) && (pFVar2 != (FD3D12ResidencyHandle *)0x0)) &&
       ((ID3D12Pageable *)pFVar2->_padding_ != (ID3D12Pageable *)0x0)) {
      if ((*(uint *)this->Device != (pFVar2->GPUObject->GPUMask).GPUMask) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Device->GetGPUMask() == Handle->GPUObject->GetGPUMask()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                             ,0x2c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = this->ResidencySet;
      if (GEnableResidencyManagement != false) {
        if (((ID3D12Pageable *)pFVar2->_padding_ == (ID3D12Pageable *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object.IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
                               ,0xa9,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        D3DX12Residency::ResidencySet::Insert(this_00,(ManagedObject *)pFVar2);
      }
    }
    ppFVar5 = ppFVar5 + 1;
  } while( true );
}

// BeginLocalQueries @ 1459b2de0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::BeginLocalQueries(FD3D12CommandList *this)

{
  int *piVar1;
  TArray<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  uint *puVar3;
  D3D12_QUERY_TYPE DVar4;
  FD3D12QueryHeap *pFVar5;
  ID3D12GraphicsCommandList *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FBeginWork *pFVar10;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar11;
  int local_res8 [2];
  FBeginWork *local_18 [2];
  
  if ((this->State).bLocalQueriesBegun != false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!State.bLocalQueriesBegun",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0xfc,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (this->State).BeginTimestamp.Heap;
  (this->State).bLocalQueriesBegun = true;
  if (pFVar5 != (FD3D12QueryHeap *)0x0) {
    local_res8[0] = 0;
    pFVar10 = UE::RHI::GPUProfiler::FEventStream::
              Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,int>
                        (&(this->State).EventStream,local_res8);
    pTVar2 = &(this->State).BeginEvents;
    FVar11 = (this->State).BeginEvents.AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
      FVar11 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)pTVar2;
    }
    local_18[0] = pFVar10;
    if (((ulonglong)FVar11 <= local_18) &&
       (local_18 <
        (FBeginWork **)((longlong)FVar11 + (longlong)(this->State).BeginEvents.ArrayMax * 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->State).BeginEvents.ArrayNum;
    piVar1 = &(this->State).BeginEvents.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->State).BeginEvents.ArrayNum = iVar9 + 1;
    FVar11 = (this->State).BeginEvents.AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
      FVar11 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)pTVar2;
    }
    *(FBeginWork **)((longlong)FVar11 + (longlong)iVar9 * 8) = local_18[0];
    (this->State).BeginTimestamp.Target = &pFVar10->GPUTimestampTOP;
    EndQuery(this,&(this->State).BeginTimestamp);
  }
  pFVar5 = (this->State).PipelineStats.Heap;
  if (pFVar5 != (FD3D12QueryHeap *)0x0) {
    DVar4 = pFVar5->QueryType;
    if ((DVar4 != D3D12_QUERY_TYPE_OCCLUSION) && (DVar4 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Location.Heap->QueryType == D3D12_QUERY_TYPE_OCCLUSION || Location.Heap->QueryType == D3D12_QUERY_TYPE_PIPELINE_STATISTICS"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                         ,299,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pIVar6 = (this->Interfaces).GraphicsCommandList.Reference;
    puVar3 = &(this->State).NumCommands;
    *puVar3 = *puVar3 + 1;
    pFVar5 = (this->State).PipelineStats.Heap;
                    /* WARNING: Could not recover jumptable at 0x0001459b2fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar6 + 0x1a0))
              (pIVar6,(pFVar5->D3DQueryHeap).Reference,pFVar5->QueryType,
               (this->State).PipelineStats.Index);
    return;
  }
  return;
}

// BeginQuery @ 1459b2fc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::BeginQuery(FD3D12CommandList *this,FD3D12QueryLocation *param_1)

{
  uint *puVar1;
  D3D12_QUERY_TYPE DVar2;
  ID3D12GraphicsCommandList *pIVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1->Heap == (FD3D12QueryHeap *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Location",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0x12a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  DVar2 = param_1->Heap->QueryType;
  if ((DVar2 != D3D12_QUERY_TYPE_OCCLUSION) && (DVar2 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Location.Heap->QueryType == D3D12_QUERY_TYPE_OCCLUSION || Location.Heap->QueryType == D3D12_QUERY_TYPE_PIPELINE_STATISTICS"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,299,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar3 = (this->Interfaces).GraphicsCommandList.Reference;
  puVar1 = &(this->State).NumCommands;
  *puVar1 = *puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001459b3057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 0x1a0))
            (pIVar3,(param_1->Heap->D3DQueryHeap).Reference,param_1->Heap->QueryType,param_1->Index)
  ;
  return;
}

// Close @ 1459b66d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::Close(FD3D12CommandList *this)

{
  FD3D12QueryLocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FEndWork *pFVar5;
  ID3D12GraphicsCommandList *pIVar6;
  FString local_28;
  FString local_18;
  
  if ((this->State).IsClosed != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0xdd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->State).bLocalQueriesEnded != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!State.bLocalQueriesEnded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0x114,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = &(this->State).PipelineStats;
  (this->State).bLocalQueriesEnded = true;
  if (pFVar1->Heap != (FD3D12QueryHeap *)0x0) {
    EndQuery(this,pFVar1);
  }
  if ((this->State).EndTimestamp.Heap != (FD3D12QueryHeap *)0x0) {
    pFVar5 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
                       (&(this->State).EventStream);
    (this->State).EndTimestamp.Target = pFVar5;
    EndQuery(this,&(this->State).EndTimestamp);
  }
  pIVar6 = (this->Interfaces).CopyCommandList.Reference;
  if (pIVar6 == (ID3D12GraphicsCommandList *)0x0) {
    pIVar6 = (this->Interfaces).GraphicsCommandList.Reference;
  }
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x48))();
  if (iVar4 < 0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar4,"hr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
               ,0xef,(ID3D12Device *)0x0,&local_28);
  }
  if (((*(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x8 ==
        *(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x34) &&
      (GEnableResidencyManagement != false)) && (this->ResidencySet != (ResidencySet *)0x0)) {
    iVar4 = D3DX12Residency::ResidencySet::Close(this->ResidencySet);
    if (iVar4 < 0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,"pSet->Close()",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
                 ,0x9f,(ID3D12Device *)0x0,&local_18);
    }
  }
  (this->State).IsClosed = true;
  return;
}

// CloseResidencySet @ 1459b7680

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ResidencySet * __thiscall FD3D12CommandList::CloseResidencySet(FD3D12CommandList *this)

{
  undefined1 *puVar1;
  TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ResidencySet *pRVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FD3D12ResidencyHandle **local_d8;
  int iStack_d0;
  undefined4 uStack_9c;
  FString local_98;
  TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_58;
  undefined4 local_3c;
  
  puVar1 = &(this->State).DeferredResidencyUpdateSet.Elements.field_0x10;
  iVar10 = *(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x28;
  pTVar2 = &(this->State).DeferredResidencyUpdateSet;
  iVar15 = 0;
  uVar8 = 1;
  iVar17 = 0;
  iVar9 = iVar15;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    iVar17 = 0;
    iVar15 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1459b772d;
      uVar14 = puVar18[lVar12 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar9 = local_res10 + -1 + iVar17;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_1459b772d:
  uVar14 = *(uint *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar8,iVar15);
  TStack_80.CurrentBitIndex = iVar9;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_80._28_4_ = iVar9;
  TStack_80.BaseBitIndex = iVar17;
  uStack_60 = CONCAT44(uStack_9c,
                       *(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x8 -
                       *(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x34);
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pRVar11 = (ResidencySet *)(*pcVar5)();
    return pRVar11;
  }
  uVar8 = *(uint *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x28;
  if (uVar14 != uVar8) {
    puVar16 = *(undefined1 **)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1459b7830;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar14 = local_res18 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar14) {
      uVar14 = uVar8;
    }
  }
LAB_1459b7830:
  while( true ) {
    pTVar6 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FD3D12Resource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar14) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    lVar12 = *(longlong *)
              (*(longlong *)&pTVar6->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
    if ((*(byte *)(lVar12 + 0xab) & 2) == 0) {
      local_d8 = (FD3D12ResidencyHandle **)0x0;
      iStack_d0 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar12 + 0x28);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(lVar12 + 0xb0);
        if (lVar4 == 0) {
          local_d8 = (FD3D12ResidencyHandle **)(lVar12 + 0x30);
          if ((*(longlong *)(lVar12 + 0x30) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ResidencyHandle",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                                 ,0x1a2,
                                 L"Resource requires residency tracking, but StartTrackingForResidency() was not called."
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pRVar11 = (ResidencySet *)(*pcVar5)();
            return pRVar11;
          }
          iStack_d0 = 1;
        }
        else {
          iStack_d0 = *(int *)(lVar4 + 0x18);
          local_d8 = *(FD3D12ResidencyHandle ***)(lVar4 + 0x10);
          if ((iStack_d0 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pRVar11 = (ResidencySet *)(*pcVar5)();
            return pRVar11;
          }
        }
      }
      else if (*(char *)(lVar4 + 0x81) == '\0') {
        local_d8 = (FD3D12ResidencyHandle **)0x0;
        iStack_d0 = 0;
      }
      else {
        local_d8 = (FD3D12ResidencyHandle **)(lVar4 + 0x70);
        if ((*(longlong *)(lVar4 + 0x70) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ResidencyHandle",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                               ,0x5d,
                               L"Resource requires residency tracking, but BeginTrackingResidency() was not called."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pRVar11 = (ResidencySet *)(*pcVar5)();
          return pRVar11;
        }
        iStack_d0 = 1;
      }
    }
    local_58._12_4_ = local_3c;
    local_58.ArrayNum = iStack_d0;
    local_58.DataPtr = local_d8;
    AddToResidencySet(this,&local_58);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if ((0 < *(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x8 -
           *(int *)&(this->State).DeferredResidencyUpdateSet.Elements.field_0x34) &&
     (GEnableResidencyManagement != false)) {
    if (this->ResidencySet == (ResidencySet *)0x0) {
      return (ResidencySet *)0x0;
    }
    iVar10 = D3DX12Residency::ResidencySet::Close(this->ResidencySet);
    if (iVar10 < 0) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar10,"pSet->Close()",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
                 ,0x9f,(ID3D12Device *)0x0,&local_98);
    }
  }
  return this->ResidencySet;
}

// EndLocalQueries @ 1459bf1a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::EndLocalQueries(FD3D12CommandList *this)

{
  FD3D12QueryLocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  FEndWork *pFVar4;
  
  if ((this->State).bLocalQueriesEnded != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!State.bLocalQueriesEnded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0x114,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = &(this->State).PipelineStats;
  (this->State).bLocalQueriesEnded = true;
  if (pFVar1->Heap != (FD3D12QueryHeap *)0x0) {
    EndQuery(this,pFVar1);
  }
  if ((this->State).EndTimestamp.Heap != (FD3D12QueryHeap *)0x0) {
    pFVar4 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
                       (&(this->State).EventStream);
    (this->State).EndTimestamp.Target = pFVar4;
    EndQuery(this,&(this->State).EndTimestamp);
  }
  return;
}

// EndQuery @ 1459bf240

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::EndQuery(FD3D12CommandList *this,FD3D12QueryLocation *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  D3D12_QUERY_TYPE DVar3;
  ED3D12QueryType EVar4;
  ID3D12GraphicsCommandList *pIVar5;
  FD3D12QueryLocation *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *pTVar12;
  
  if ((param_1->Heap == (FD3D12QueryHeap *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Location",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                          ,0x136,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  DVar3 = param_1->Heap->QueryType;
  if (DVar3 == D3D12_QUERY_TYPE_OCCLUSION) {
    pIVar5 = (this->Interfaces).GraphicsCommandList.Reference;
    puVar1 = &(this->State).NumCommands;
    *puVar1 = *puVar1 + 1;
    (**(code **)((longlong)*pIVar5 + 0x1a8))
              (pIVar5,(param_1->Heap->D3DQueryHeap).Reference,param_1->Heap->QueryType,
               param_1->Index);
    pTVar12 = &(this->State).OcclusionQueries;
  }
  else if (DVar3 == D3D12_QUERY_TYPE_TIMESTAMP) {
    EVar4 = param_1->Type;
    if ((((EVar4 != TimestampMicroseconds) && (EVar4 != TimestampRaw)) &&
        (EVar4 != ProfilerTimestampTOP)) &&
       ((EVar4 != ProfilerTimestampBOP &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                             ,0x155,L"Query location type is not a top or bottom of pipe timestamp."
                            ), bVar10)))) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pIVar5 = (this->Interfaces).GraphicsCommandList.Reference;
    puVar1 = &(this->State).NumCommands;
    *puVar1 = *puVar1 + 1;
    (**(code **)((longlong)*pIVar5 + 0x1a8))
              (pIVar5,(param_1->Heap->D3DQueryHeap).Reference,param_1->Heap->QueryType,
               param_1->Index);
    pTVar12 = &(this->State).TimestampQueries;
  }
  else {
    if (DVar3 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                          ,0x13a,L"");
      if (!bVar10) {
        return;
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pIVar5 = (this->Interfaces).GraphicsCommandList.Reference;
    puVar1 = &(this->State).NumCommands;
    *puVar1 = *puVar1 + 1;
    (**(code **)((longlong)*pIVar5 + 0x1a8))
              (pIVar5,(param_1->Heap->D3DQueryHeap).Reference,param_1->Heap->QueryType,
               param_1->Index);
    pTVar12 = &(this->State).PipelineStatsQueries;
  }
  pFVar6 = (FD3D12QueryLocation *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar6 <= param_1) && (param_1 < pFVar6 + pTVar12->ArrayMax)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = pTVar12->ArrayNum;
  if (iVar11 == pTVar12->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar11 + 1;
  uVar9 = *(undefined8 *)&param_1->Index;
  pFVar7 = (pTVar12->AllocatorInstance).Data;
  pFVar2 = pFVar7 + (longlong)iVar11 * 0x18;
  *(FD3D12QueryHeap **)pFVar2 = param_1->Heap;
  *(undefined8 *)(pFVar2 + 8) = uVar9;
  *(void **)(pFVar7 + (longlong)iVar11 * 0x18 + 0x10) = param_1->Target;
  return;
}

// Reset @ 1459d69f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandList::Reset
          (FD3D12CommandList *this,FD3D12CommandAllocator *param_1,FD3D12QueryAllocator *param_2,
          FD3D12QueryAllocator *param_3)

{
  ID3D12GraphicsCommandList *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  char *pcVar6;
  uint uVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((this->State).IsClosed == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0xc9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->Device != this->Device) || (param_1->QueueType != this->QueueType)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCommandAllocator->Device == Device && NewCommandAllocator->QueueType == QueueType"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0xca,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Interfaces).CopyCommandList.Reference;
  if (pIVar1 == (ID3D12GraphicsCommandList *)0x0) {
    pIVar1 = (this->Interfaces).GraphicsCommandList.Reference;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,(param_1->CommandAllocator).Reference,0);
    if (-1 < iVar4) goto LAB_1459d6af6;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = &local_38;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pcVar6 = "Interfaces.GraphicsCommandList->Reset(*NewCommandAllocator, nullptr)";
    uVar7 = 0xd1;
  }
  else {
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x50))();
    if (-1 < iVar4) goto LAB_1459d6af6;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = &local_48;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pcVar6 = "Interfaces.CopyCommandList->Reset(*NewCommandAllocator, nullptr)";
    uVar7 = 0xcd;
  }
  D3D12RHI::VerifyD3D12Result
            (iVar4,pcVar6,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
             ,uVar7,(ID3D12Device *)0x0,pFVar5);
LAB_1459d6af6:
  if ((GEnableResidencyManagement != false) && (this->ResidencySet != (ResidencySet *)0x0)) {
    iVar4 = D3DX12Residency::ResidencySet::Open(this->ResidencySet);
    if (iVar4 < 0) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,"pSet->Open()",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
                 ,0x95,(ID3D12Device *)0x0,&local_28);
    }
  }
  FState::~FState(&this->State);
  FState::FState(&this->State,param_1,param_2,param_3);
  BeginLocalQueries(this);
  return;
}

// UpdateResidency @ 1459e0010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::UpdateResidency(FD3D12CommandList *this,FD3D12Resource *param_1)

{
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar1;
  FD3D12Resource *local_res10;
  FD3D12Resource *local_res18 [2];
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_18;
  
  local_res10 = param_1;
  if ((param_1->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(this->State).DeferredResidencyUpdateSet,local_res18,(bool *)&local_res10);
    return;
  }
  pTVar1 = FD3D12Resource::GetResidencyHandles(param_1,&local_18);
  local_28.DataPtr = pTVar1->DataPtr;
  local_28.ArrayNum = pTVar1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
  AddToResidencySet(this,&local_28);
  return;
}

// WriteTimestamp @ 1459e11d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandList::WriteTimestamp
          (FD3D12CommandList *this,FD3D12QueryLocation *param_1,ED3D12QueryPosition param_2)

{
  uint *puVar1;
  ID3D12GraphicsCommandList *pIVar2;
  
  pIVar2 = (this->Interfaces).GraphicsCommandList.Reference;
  puVar1 = &(this->State).NumCommands;
  *puVar1 = *puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001459e11f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0x1a8))
            (pIVar2,(param_1->Heap->D3DQueryHeap).Reference,param_1->Heap->QueryType,param_1->Index)
  ;
  return;
}

// EmplaceProfilerEvent<UE::RHI::GPUProfiler::FEvent::FBeginWork,int> @ 1459e4c30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FBeginWork * __thiscall
FD3D12CommandList::EmplaceProfilerEvent<UE::RHI::GPUProfiler::FEvent::FBeginWork,int>
          (FD3D12CommandList *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBeginWork *pFVar5;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar6;
  TArray<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  FBeginWork *local_18 [2];
  
  pFVar5 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,int>
                     (&(this->State).EventStream,param_1);
  pTVar7 = &(this->State).BeginEvents;
  FVar6 = (this->State).BeginEvents.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
    FVar6 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)pTVar7;
  }
  local_18[0] = pFVar5;
  if (((ulonglong)FVar6 <= local_18) &&
     (local_18 < (FBeginWork **)((longlong)FVar6 + (longlong)(this->State).BeginEvents.ArrayMax * 8)
     )) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBeginWork *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->State).BeginEvents.ArrayNum;
  piVar1 = &(this->State).BeginEvents.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->State).BeginEvents.ArrayNum = iVar4 + 1;
  FVar6 = (this->State).BeginEvents.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
    FVar6 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)pTVar7;
  }
  *(FBeginWork **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
  return pFVar5;
}

