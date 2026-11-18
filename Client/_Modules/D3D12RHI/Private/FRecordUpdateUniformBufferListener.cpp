// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ~FRecordUpdateUniformBufferListener @ 1459f9aa0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener::
~FRecordUpdateUniformBufferListener(FRecordUpdateUniformBufferListener *this)

{
  return;
}

// Init @ 145a1e430

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener::Init
          (FRecordUpdateUniformBufferListener *this,FD3D12UniformBuffer *param_1,uint param_2,
          uint param_3,uint param_4)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<ID3D12UniformBufferUpdateListener_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FRecordUpdateUniformBufferListener *local_18 [2];
  
  lpCriticalSection = &param_1->UpdateListenersCS;
  this->UniformBuffer = param_1;
  this->ShaderTableOffset = param_2;
  this->RecordIndex = param_3;
  this->OffsetWithinRootSignature = param_4;
  local_18[0] = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar7 = &param_1->UpdateListeners;
  pFVar6 = (pTVar7->AllocatorInstance).Data;
  pFVar2 = pFVar6 + (longlong)(param_1->UpdateListeners).ArrayNum * 8;
  do {
    if (pFVar6 == pFVar2) {
LAB_145a1e4cb:
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(param_1->UpdateListeners).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_1->UpdateListeners).ArrayNum;
      piVar1 = &(param_1->UpdateListeners).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar7->AllocatorInstance,piVar1);
      }
      (param_1->UpdateListeners).ArrayNum = iVar5 + 1;
      *(FRecordUpdateUniformBufferListener **)
       ((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(FRecordUpdateUniformBufferListener **)pFVar6 == local_18[0]) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UpdateListeners.Contains(InUpdateListener)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x3dc,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_145a1e4cb;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// RemoveListener @ 145a2daa0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener::RemoveListener
          (FRecordUpdateUniformBufferListener *this,FD3D12UniformBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UniformBuffer != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBuffer == InUpdatedUniformBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x767,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  RemoveUpdateUniformBufferListener(this->ShaderTable,this->RecordIndex,this);
  return;
}

// UniformBufferUpdated @ 145a35e90

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
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener::UniformBufferUpdated
          (FRecordUpdateUniformBufferListener *this,FRHICommandListBase *param_1,
          FD3D12UniformBuffer *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUBRecordUpdate> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar6;
  longlong *plVar7;
  FName local_res8;
  FName local_res18;
  FStatMessage local_18;
  
  if ((this->UniformBuffer != param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBuffer == InUpdatedUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x76d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar7 = &(this->ShaderTable->Data)._padding_;
  uVar6 = *plVar7;
  if ((uVar6 & 1) != 0) {
    uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)plVar7;
  }
  *(ulong64 *)
   ((this->ShaderTableOffset + 0x20 +
    this->ShaderTable->LocalRecordStride * this->RecordIndex + this->OffsetWithinRootSignature) +
   uVar6) = (param_2->ResourceLocation).GPUVirtualAddress;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar5 = StatPtr_STAT_D3D12RayTracingUBRecordUpdate;
    if (StatPtr_STAT_D3D12RayTracingUBRecordUpdate ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUBRecordUpdate>)0x0) {
      pFVar4 = ::FName::FName(&local_res18,"STAT_D3D12RayTracingUBRecordUpdate");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUBRecordUpdate>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUBRecordUpdate,
                         *pFVar4,L"UniformBuffer Record Updates (per frame)",
                         "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",
                         true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar5;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_18.StatData.Pad[0] = '\x01';
      local_18.StatData.Pad[1] = '\0';
      local_18.StatData.Pad[2] = '\0';
      local_18.StatData.Pad[3] = '\0';
      local_18.StatData.Pad[4] = '\0';
      local_18.StatData.Pad[5] = '\0';
      local_18.StatData.Pad[6] = '\0';
      local_18.StatData.Pad[7] = '\0';
      local_res8 = FVar1;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

