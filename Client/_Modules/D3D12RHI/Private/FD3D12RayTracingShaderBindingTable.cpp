// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12RayTracingShaderBindingTable @ 1459f4380

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FD3D12RayTracingShaderBindingTable * __thiscall
FD3D12RayTracingShaderBindingTable::FD3D12RayTracingShaderBindingTable
          (FD3D12RayTracingShaderBindingTable *this,FRHICommandListBase *param_1,
          FD3D12Adapter *param_2,FRayTracingShaderBindingTableInitializer *param_3)

{
  FName FVar1;
  code *pcVar2;
  FD3D12Device **ppFVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FD3D12RayTracingShaderBindingTable *pFVar7;
  TStaticArray<FD3D12Device_*,8,4294967295> *pTVar8;
  longlong lVar9;
  FName local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RayTracingShaderBindingTable);
  RHIValidation::FShaderBindingTable::FShaderBindingTable
            ((FShaderBindingTable *)&this->_padding_,param_3);
  this->_padding_ = (longlong)&___7FRHIShaderBindingTable__6B_;
  lVar9 = *(longlong *)&param_3->NumShaderSlotsPerGeometrySegment;
  this->_padding_ = *(longlong *)param_3;
  this->_padding_ = lVar9;
  this->_padding_ = *(longlong *)&param_3->NumMissShaderSlots;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&___7FD3D12RayTracingShaderBindingTable__6B_;
  this->ShaderTablesPerGPU[0] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[1] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[2] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[3] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[4] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[5] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[6] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  this->ShaderTablesPerGPU[7] = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  FVar6 = StatPtr_STAT_D3D12RayTracingAllocatedSBT;
  if (StatPtr_STAT_D3D12RayTracingAllocatedSBT ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_D3D12RayTracingAllocatedSBT");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedSBT,
                       *pFVar5,L"Allocated shader binding tables","STATGROUP_D3D12RayTracing",
                       "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar6;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if (((int)this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Initializer.NumMissShaderSlots >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0xc2b,L"Need at least 1 miss shader slot."), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FD3D12RayTracingShaderBindingTable *)(*pcVar2)();
    return pFVar7;
  }
  lVar9 = (longlong)(int)GNumExplicitGPUsForRendering;
  pTVar8 = &param_2->Devices;
  if (((int)GNumExplicitGPUsForRendering < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FD3D12RayTracingShaderBindingTable *)(*pcVar2)();
    return pFVar7;
  }
  ppFVar3 = pTVar8->Elements;
  for (; pTVar8 != (TStaticArray<FD3D12Device_*,8,4294967295> *)(ppFVar3 + lVar9);
      pTVar8 = (TStaticArray<FD3D12Device_*,8,4294967295> *)(pTVar8->Elements + 1)) {
    InitForDevice(this,param_1,pTVar8->Elements[0]);
  }
  return this;
}

// GetInlineBindingDataSizeAndStride @ 145a19460

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FRHISizeAndStride * __thiscall
FD3D12RayTracingShaderBindingTable::GetInlineBindingDataSizeAndStride
          (FD3D12RayTracingShaderBindingTable *this,FRHISizeAndStride *__return_storage_ptr__)

{
  if (this->ShaderTablesPerGPU[0] != (FD3D12RayTracingShaderBindingTableInternal *)0x0) {
    __return_storage_ptr__->Size =
         (longlong)(int)(this->ShaderTablesPerGPU[0]->InlineGeometryParameterData)._padding_;
    __return_storage_ptr__->Stride = 0x20;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Stride = 0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// InitForDevice @ 145a1e6f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTable::InitForDevice
          (FD3D12RayTracingShaderBindingTable *this,FRHICommandListBase *param_1,
          FD3D12Device *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12CreateShaderTable> FVar8;
  FD3D12RayTracingShaderBindingTableInternal *this_00;
  FD3D12RayTracingShaderBindingTableInternal *pFVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  bool bVar13;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FD3D12RayTracingShaderBindingTable::InitForDevice(FRHICommandListBase&___ptr64,FD3D12Device*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId3162,"ShaderTableInit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0xc5a);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FD3D12RayTracingShaderBindingTable::InitForDevice(FRHICommandListBase&___ptr64,FD3D12Device*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId3162);
  }
  pFVar9 = (FD3D12RayTracingShaderBindingTableInternal *)0x0;
  FVar8 = StatPtr_STAT_D3D12CreateShaderTable;
  if (StatPtr_STAT_D3D12CreateShaderTable ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CreateShaderTable>)0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_D3D12CreateShaderTable");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12CreateShaderTable>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CreateShaderTable,*pFVar7,
                       L"CreateShaderTable","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                       L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0xc5b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar11.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_145a1e891;
    }
  }
  bVar4 = false;
  FVar12 = local_60;
LAB_145a1e891:
  uVar10 = *(uint *)&param_2->field_0x8;
  if ((this->ShaderTablesPerGPU[uVar10] != (FD3D12RayTracingShaderBindingTableInternal *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderTablesPerGPU[GPUIndex] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0xc5f,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = ::operator_new(0x740,0x40);
  if (this_00 != (FD3D12RayTracingShaderBindingTableInternal *)0x0) {
    pFVar9 = FD3D12RayTracingShaderBindingTableInternal::FD3D12RayTracingShaderBindingTableInternal
                       (this_00,param_1,(FRayTracingShaderBindingTableInitializer *)&this->_padding_
                        ,param_2);
  }
  this->ShaderTablesPerGPU[uVar10] = pFVar9;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_50.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_50);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

