// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12CommandAllocator @ 1459a80b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandAllocator * __thiscall
FD3D12CommandAllocator::FD3D12CommandAllocator
          (FD3D12CommandAllocator *this,FD3D12Device *param_1,ED3D12QueueType param_2)

{
  ID3D12CommandAllocator *pIVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  ID3D12Device *pIVar6;
  FD3D12CommandAllocator *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 uVar10;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FStatMessage local_38;
  
  this->Device = param_1;
  this->QueueType = param_2;
  uVar10 = 0;
  (this->CommandAllocator).Reference = (ID3D12CommandAllocator *)0x0;
  pIVar6 = FD3D12Device::GetDevice(param_1);
  pIVar1 = (this->CommandAllocator).Reference;
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
  if (pIVar1 != (ID3D12CommandAllocator *)0x0) {
    (this->CommandAllocator).Reference = (ID3D12CommandAllocator *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (param_2 != Direct) {
    if (param_2 == Copy) {
      uVar10 = 3;
    }
    else if (param_2 == Async) {
      uVar10 = 2;
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                         ,0x2e,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FD3D12CommandAllocator *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  iVar5 = (*pcVar2)(pIVar6,uVar10,&_GUID_6102dee4_af59_4b09_b999_b44d73f09b24,
                    &this->CommandAllocator);
  if (iVar5 < 0) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar5,
               "Device->GetDevice()->CreateCommandAllocator(GetD3DCommandListType(QueueType), IID_PPV_ARGS(CommandAllocator.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
               ,0x4f,(ID3D12Device *)0x0,&local_48);
  }
  FVar9 = StatPtr_STAT_D3D12NumCommandAllocators;
  if (StatPtr_STAT_D3D12NumCommandAllocators ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_D3D12NumCommandAllocators");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumCommandAllocators,*pFVar8,
                       L"Num command allocators (3D, Compute, Copy)","STATGROUP_D3D12RHI",
                       "STATCAT_Advanced",L"D3D12RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar9;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FD3D12CommandAllocator @ 1459ac030

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandAllocator::~FD3D12CommandAllocator(FD3D12CommandAllocator *this)

{
  ID3D12CommandAllocator *pIVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  pIVar1 = (this->CommandAllocator).Reference;
  if (pIVar1 != (ID3D12CommandAllocator *)0x0) {
    (this->CommandAllocator).Reference = (ID3D12CommandAllocator *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FVar4 = StatPtr_STAT_D3D12NumCommandAllocators;
  if (StatPtr_STAT_D3D12NumCommandAllocators ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_D3D12NumCommandAllocators");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumCommandAllocators>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumCommandAllocators,*pFVar3,
                       L"Num command allocators (3D, Compute, Copy)","STATGROUP_D3D12RHI",
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
    local_18.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pIVar1 = (this->CommandAllocator).Reference;
  if (pIVar1 == (ID3D12CommandAllocator *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459ac1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x10))();
  return;
}

// Reset @ 1459d6990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandAllocator::Reset(FD3D12CommandAllocator *this)

{
  int iVar1;
  FString local_18;
  
  iVar1 = (**(code **)((longlong)*(this->CommandAllocator).Reference + 0x40))();
  if (iVar1 < 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar1,"CommandAllocator->Reset()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
               ,0x5b,(ID3D12Device *)0x0,&local_18);
  }
  return;
}

