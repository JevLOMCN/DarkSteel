// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12QueryHeap @ 1459ef0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12QueryHeap * __thiscall
FD3D12QueryHeap::FD3D12QueryHeap
          (FD3D12QueryHeap *this,FD3D12Device *param_1,D3D12_QUERY_TYPE param_2,
          D3D12_QUERY_HEAP_TYPE param_3)

{
  TRefCountPtr<FD3D12Resource> *pTVar1;
  D3D12_QUERY_TYPE DVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID3D12QueryHeap *pIVar7;
  longlong *plVar8;
  FD3D12Resource *pFVar9;
  FD3D12Adapter *this_00;
  code *pcVar10;
  longlong lVar11;
  FD3D12Device *pFVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FD3D12QueryHeap *pFVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps> FVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TEventRef<unsigned_int> TVar20;
  uchar *puVar21;
  FWriteBuffer *pFVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  undefined1 auStackY_208 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  FD3D12Device *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  longlong lStack_168;
  ulonglong local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int local_138;
  FName local_130 [2];
  FStatMessage local_120;
  FString local_110;
  FString local_100;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  D3D12_QUERY_HEAP_TYPE local_c8;
  uint local_c4;
  undefined4 local_c0;
  D3D12_HEAP_PROPERTIES local_b8;
  undefined4 *local_a0;
  longlong local_98;
  FD3D12ResourceDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar15 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar15;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar15;
  local_138 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> local_138 & 1) == 0; local_138 = local_138 + 1) {
    }
  }
  iVar16 = 0x20;
  if (uVar15 != 0) {
    iVar16 = local_138;
  }
  *(int *)&this->_padding_ = iVar16;
  this->Device = param_1;
  this->QueryType = param_2;
  this->HeapType = param_3;
  local_178 = param_1;
  if ((param_2 == D3D12_QUERY_TYPE_OCCLUSION) || (param_2 == D3D12_QUERY_TYPE_TIMESTAMP)) {
LAB_1459ef17f:
    uVar15 = 0x2000;
  }
  else {
    if (param_2 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                          ,0x4b,L"");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FD3D12QueryHeap *)(*pcVar10)();
        return pFVar17;
      }
      goto LAB_1459ef17f;
    }
    uVar15 = 0x2e8;
  }
  this->NumQueries = uVar15;
  (this->ResultBuffer).Reference = (FD3D12Resource *)0x0;
  this->ResultPtr = (uchar *)0x0;
  (this->D3DQueryHeap).Reference = (ID3D12QueryHeap *)0x0;
  *(undefined4 *)&(this->ResidencyHandle)._padding_ = 0;
  (this->ResidencyHandle)._padding_ = 0;
  (this->ResidencyHandle)._padding_ = 0;
  (this->ResidencyHandle)._padding_ = 0;
  (this->ResidencyHandle)._padding_ = 0;
  memset(&(this->ResidencyHandle)._padding_,0,0x400);
  (this->ResidencyHandle).GPUObject = (FD3D12GPUObject *)0x0;
  (this->NumRefs).Counter = 0;
  FVar19 = StatPtr_STAT_D3D12NumQueryHeaps;
  if (StatPtr_STAT_D3D12NumQueryHeaps == (FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps>)0x0)
  {
    pFVar18 = ::FName::FName(&local_f0,"STAT_D3D12NumQueryHeaps");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumQueryHeaps,*pFVar18,
                        L"Num Query Heaps","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
                        false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar19;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    local_120.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_120.StatData.Pad[0] = '\x01';
    local_120.StatData.Pad[1] = '\0';
    local_120.StatData.Pad[2] = '\0';
    local_120.StatData.Pad[3] = '\0';
    local_120.StatData.Pad[4] = '\0';
    local_120.StatData.Pad[5] = '\0';
    local_120.StatData.Pad[6] = '\0';
    local_120.StatData.Pad[7] = '\0';
    local_130[0] = FVar3;
    local_120.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_01,&local_120);
    FStatsTrace::Add(local_130,1);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
  if (param_3 == D3D12_QUERY_HEAP_TYPE_OCCLUSION) {
LAB_1459ef34b:
    pwVar23 = L"Occlusion Query Heap";
    pwVar24 = L"Occlusion Query Heap Result Buffer";
  }
  else if (param_3 == D3D12_QUERY_HEAP_TYPE_TIMESTAMP) {
    pwVar23 = L"Timestamp Query Heap";
    pwVar24 = L"Timestamp Query Heap Result Buffer";
  }
  else if (param_3 == D3D12_QUERY_HEAP_TYPE_PIPELINE_STATISTICS) {
    pwVar23 = L"Pipeline Statistics Query Heap (Copy)";
    pwVar24 = L"Pipeline Statistics Query Heap Result Buffer (Copy)";
  }
  else {
    if (param_3 != D3D12_QUERY_HEAP_TYPE_COPY_QUEUE_TIMESTAMP) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
                          ,0x37,L"");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FD3D12QueryHeap *)(*pcVar10)();
        return pFVar17;
      }
      goto LAB_1459ef34b;
    }
    pwVar23 = L"Timestamp Query Heap (Copy)";
    pwVar24 = L"Timestamp Query Heap Result Buffer (Copy)";
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_198 = 0;
    TVar20 = (TEventRef<unsigned_int>)&local_198;
  }
  else {
    ::FName::FName(&local_e8,pwVar24);
    TVar20 = FStringTrace::GetNameRef(&local_e0);
  }
  uVar4 = *(undefined8 *)TVar20;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_190 = 0;
    TVar20 = (TEventRef<unsigned_int>)&local_190;
  }
  else {
    FLazyName::Resolve(&D3D12QueryHeapName);
    TVar20 = FStringTrace::GetNameRef(&local_d8);
  }
  uVar5 = *(undefined8 *)TVar20;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_180 = 0;
    TVar20 = (TEventRef<unsigned_int>)&local_180;
  }
  else {
    local_188 = 0;
    TVar20 = FStringTrace::GetNameRef(&local_d0);
  }
  uVar6 = *(undefined8 *)TVar20;
  bVar13 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_a0);
    bVar13 = true;
    *local_a0 = (int)uVar4;
    local_a0[1] = (int)uVar5;
    local_a0[2] = (int)uVar6;
    *(undefined8 *)(local_98 + 0x28) = *(undefined8 *)(local_98 + 0x20);
  }
  pFVar12 = local_178;
  local_c4 = this->NumQueries;
  local_c0 = 1;
  if (GVirtualMGPU == 0) {
    local_c0 = (undefined4)this->_padding_;
  }
  local_c8 = param_3;
  if ((*(longlong *)&local_178->field_0x10 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    pFVar17 = (FD3D12QueryHeap *)(*pcVar10)();
    return pFVar17;
  }
  pIVar7 = (this->D3DQueryHeap).Reference;
  plVar8 = *(longlong **)(*(longlong *)&pFVar12->field_0x10 + 8);
  pcVar10 = *(code **)(*plVar8 + 0x138);
  if (pIVar7 != (ID3D12QueryHeap *)0x0) {
    (this->D3DQueryHeap).Reference = (ID3D12QueryHeap *)0x0;
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  iVar16 = (*pcVar10)(plVar8,&local_c8,&_GUID_0d9658ae_ed45_469e_a61d_970ec583cab4,
                      &this->D3DQueryHeap);
  if (iVar16 < 0) {
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar16,
               "Device->GetDevice()->CreateQueryHeap(&QueryHeapDesc, IID_PPV_ARGS(D3DQueryHeap.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
               ,0x5a,(ID3D12Device *)0x0,&local_110);
  }
  SetD3D12ObjectName((ID3D12Object *)(this->D3DQueryHeap).Reference,pwVar23);
  local_b8.CreationNodeMask = 1;
  local_b8.VisibleNodeMask = 1;
  if (GVirtualMGPU == 0) {
    local_b8.VisibleNodeMask = *(uint *)((longlong)&this->_padding_ + 4);
    local_b8.CreationNodeMask = (uint)this->_padding_;
  }
  DVar2 = this->QueryType;
  local_b8.Type = D3D12_HEAP_TYPE_READBACK;
  local_b8.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  local_b8.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  if ((DVar2 != D3D12_QUERY_TYPE_OCCLUSION) && (DVar2 != D3D12_QUERY_TYPE_TIMESTAMP)) {
    if (DVar2 == D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
      iVar16 = 0x58;
      goto LAB_1459ef601;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                        ,0x4b,L"");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FD3D12QueryHeap *)(*pcVar10)();
      return pFVar17;
    }
  }
  iVar16 = 8;
LAB_1459ef601:
  pFVar12 = local_178;
  local_160 = (ulonglong)(iVar16 * this->NumQueries);
  local_170 = 1;
  lStack_168 = 0;
  uStack_158 = 1;
  uStack_154 = 0x10001;
  uStack_150 = 0;
  uStack_14c = 1;
  uStack_148 = 0;
  uStack_144 = 1;
  uStack_140 = 0;
  if ((*(longlong *)&local_178->field_0x10 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    pFVar17 = (FD3D12QueryHeap *)(*pcVar10)();
    return pFVar17;
  }
  pFVar9 = (this->ResultBuffer).Reference;
  pTVar1 = &this->ResultBuffer;
  this_00 = *(FD3D12Adapter **)&pFVar12->field_0x10;
  if (pFVar9 != (FD3D12Resource *)0x0) {
    pTVar1->Reference = (FD3D12Resource *)0x0;
    plVar8 = &pFVar9->_padding_;
    LOCK();
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (plVar8 != (longlong *)0x0)) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  local_88._padding_ = CONCAT44(uStack_16c,local_170);
  local_88._padding_ = CONCAT44(uStack_154,uStack_158);
  local_88._padding_ = lStack_168;
  local_88._padding_ = CONCAT44(uStack_14c,uStack_150);
  local_88._padding_ = CONCAT44(uStack_144,uStack_148);
  local_88._padding_ = local_160;
  local_88._padding_ = CONCAT44(uStack_13c,uStack_140);
  local_88._62_2_ = 0;
  local_88.PixelFormat = PF_Unknown;
  local_88.UAVPixelFormat = PF_Unknown;
  local_88._58_4_ = 0;
  iVar16 = FD3D12Adapter::CreateCommittedResource
                     (this_00,&local_88,(FRHIGPUMask)(uint)this->_padding_,&local_b8,CopyDest,
                      Default,Unknown,(D3D12_CLEAR_VALUE *)0x0,&pTVar1->Reference,pwVar24,true);
  if (iVar16 < 0) {
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar16,
               "Device->GetParentAdapter()->CreateCommittedResource( BufferDesc, GetGPUMask(), HeapProps, ED3D12Access::CopyDest, nullptr, ResultBuffer.GetInitReference(), ResultBufferName )"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
               ,0x76,(ID3D12Device *)0x0,&local_100);
  }
  SetD3D12ResourceName(pTVar1->Reference,pwVar24);
  puVar21 = FD3D12Resource::Map(pTVar1->Reference,(D3D12_RANGE *)0x0);
  this->ResultPtr = puVar21;
  if (bVar13) {
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar11 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar22 = *(FWriteBuffer **)(lVar11 + 0x20);
    if ((int)pFVar22 - *(int *)&pFVar22->Cursor < 1) {
      pFVar22 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar22->Cursor = '\n';
    pFVar22->Cursor = pFVar22->Cursor + 1;
    pFVar22->Committed = pFVar22->Cursor;
  }
  return this;
}

// ~FD3D12QueryHeap @ 1459f8b60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12QueryHeap::~FD3D12QueryHeap(FD3D12QueryHeap *this)

{
  longlong *plVar1;
  int *piVar2;
  FD3D12Resource *pFVar3;
  ID3D12Resource *pIVar4;
  FName FVar5;
  ID3D12QueryHeap *pIVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this->ResultPtr != (uchar *)0x0) {
    pFVar3 = (this->ResultBuffer).Reference;
    if ((pFVar3->Resource).Reference == (ID3D12Resource *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x129,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (pFVar3->ResourceBaseAddress == (void *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceBaseAddress",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x12a,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (pFVar3->NumMapCalls < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumMapCalls > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,299,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    piVar2 = &pFVar3->NumMapCalls;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      pIVar4 = (pFVar3->Resource).Reference;
      (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,0);
      pFVar3->ResourceBaseAddress = (void *)0x0;
    }
    this->ResultPtr = (uchar *)0x0;
  }
  if ((GEnableResidencyManagement != false) && ((this->ResidencyHandle)._padding_ != 0)) {
    D3DX12Residency::Internal::ResidencyManagerInternal::EndTrackingObject
              ((ResidencyManagerInternal *)&this->Device->ResidencyManager,
               (ManagedObject *)&this->ResidencyHandle);
  }
  FVar11 = StatPtr_STAT_D3D12NumQueryHeaps;
  if (StatPtr_STAT_D3D12NumQueryHeaps == (FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps>)0x0)
  {
    pFVar10 = ::FName::FName(&local_res10,"STAT_D3D12NumQueryHeaps");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12NumQueryHeaps>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12NumQueryHeaps,*pFVar10,
                        L"Num Query Heaps","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
                        false,ST_int64,false,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar11;
  local_res8 = FVar5;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar5;
    local_28.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pIVar6 = (this->D3DQueryHeap).Reference;
  if (pIVar6 != (ID3D12QueryHeap *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pFVar3 = (this->ResultBuffer).Reference;
  if (pFVar3 != (FD3D12Resource *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// Release @ 145a2a600

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

uint __thiscall FD3D12QueryHeap::Release(FD3D12QueryHeap *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FD3D12Device *pFVar3;
  uint uVar4;
  uint uVar5;
  FIndexedLockFreeLink *pFVar6;
  uint uVar7;
  
  LOCK();
  pFVar1 = &this->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  uVar7 = iVar2 - 1;
  if (uVar7 == 0) {
    pFVar3 = this->Device;
    uVar4 = GetQueryHeapPoolIndex(this->HeapType);
    uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar5 == 0) {
      pFVar6 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + (uVar5 & 0x3fff);
    }
    pFVar6->Payload = (atomic<void_*>)this;
    FLockFreePointerListLIFORoot<64,1>::Push
              ((FLockFreePointerListLIFORoot<64,1> *)((pFVar3->QueryHeapPool).Elements + uVar4),
               uVar5);
  }
  return uVar7;
}

