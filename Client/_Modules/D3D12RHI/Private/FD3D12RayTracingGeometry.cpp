// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 17

// FD3D12RayTracingGeometry @ 1459f0100

/* WARNING: Removing unreachable block (ram,0x0001459f08ef) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FD3D12RayTracingGeometry * __thiscall
FD3D12RayTracingGeometry::FD3D12RayTracingGeometry
          (FD3D12RayTracingGeometry *this,FRHICommandListBase *param_1,FD3D12Adapter *param_2,
          FRayTracingGeometryInitializer *param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar2;
  FRHIBuffer *this_00;
  FRayTracingGeometrySegment *pFVar3;
  FName FVar4;
  ID3D12Device *pIVar5;
  ID3D12Device1 *pIVar6;
  ID3D12Device2 *pIVar7;
  ID3D12Device3 *pIVar8;
  ID3D12Device4 *pIVar9;
  code *pcVar10;
  longlong lVar11;
  TRefCountPtr<FRHIBuffer> this_01;
  ForAnyElementType FVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ERHIBufferInitAction EVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FDebugName *pFVar22;
  FD3D12RayTracingGeometry *pFVar23;
  FD3D12RayTracingGeometryTracker *this_02;
  uint *puVar24;
  longlong *plVar25;
  FString *pFVar26;
  wchar_t *pwVar27;
  TRefCountPtr<FD3D12Buffer> TVar28;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory> FVar29;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory> FVar30;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory> FVar31;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory> FVar32;
  ulong64 uVar33;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS> FVar34;
  void *_Dst;
  FRHICommandBase *pFVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  ulong64 uVar39;
  uchar auVar40 [8];
  uchar auVar41 [8];
  uchar auVar42 [8];
  ID3D12Device5 *pIVar43;
  FD3D12Buffer *pFVar44;
  uint uVar45;
  ERHIAccess EVar46;
  uint local_res8;
  uint local_res20;
  char *in_stack_fffffffffffffc18;
  void *local_3a8;
  ForAnyElementType local_3a0;
  undefined1 local_398 [8];
  FRHIBufferCreateDesc local_390;
  undefined4 uStack_358;
  int iStack_354;
  wchar_t *local_350;
  undefined ***pppuStack_348;
  ERHIAccess local_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 local_330;
  uint local_328;
  undefined4 local_324;
  uint local_320;
  undefined1 local_31c [4];
  FName local_318;
  FD3D12RayTracingGeometry *local_310;
  undefined1 local_308 [56];
  undefined4 local_2d0;
  uint local_2cc;
  TRefCountPtr<ID3D12Device7> local_2c8;
  TRefCountPtr<ID3D12Device8> local_2c0;
  TRefCountPtr<ID3D12Device9> local_2b8;
  FStatMessage local_2b0;
  FDebugName local_2a0;
  FStatMessage local_290;
  FStatMessage local_280;
  FStatMessage local_270;
  FStatMessage local_260;
  undefined **local_250;
  FScriptContainerElement *local_248;
  uint local_240;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> local_238;
  int iStack_230;
  wchar_t awStack_22c [2];
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208 [2];
  TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> local_1f8;
  FString local_1e8;
  FName local_1d8;
  ulonglong local_1d0;
  wchar_t awStack_1c8 [4];
  wchar_t *local_1c0;
  undefined ***pppuStack_1b8;
  wchar_t local_1b0 [4];
  wchar_t awStack_1a8 [8];
  FDebugName local_198;
  FD3D12RayTracingGeometry *local_188;
  FD3D12ResourceLocation local_180;
  undefined1 local_108;
  undefined1 local_100 [24];
  FD3D12ResourceLocation local_e8;
  undefined1 local_68 [40];
  
  FRHIRayTracingAccelerationStructure::FRHIRayTracingAccelerationStructure
            ((FRHIRayTracingAccelerationStructure *)this);
  uVar39 = 0;
  this->_padding_ = (longlong)&___7FRHIRayTracingGeometry__6B_;
  this->_padding_ = 0;
  this_00 = (param_3->IndexBuffer).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  plVar2 = &this->_padding_;
  *(uint *)&this->_padding_ = param_3->IndexBufferOffset;
  *(ERayTracingGeometryType *)((longlong)&this->_padding_ + 4) = param_3->GeometryType;
  *(uint *)&this->_padding_ = param_3->TotalPrimitiveCount;
  *(bool *)((longlong)&this->_padding_ + 4) = param_3->bFastBuild;
  *(bool *)((longlong)&this->_padding_ + 5) = param_3->bAllowUpdate;
  *(bool *)((longlong)&this->_padding_ + 6) = param_3->bAllowCompaction;
  *(bool *)((longlong)&this->_padding_ + 7) = param_3->bTemplate;
  *(ERayTracingGeometryInitializerType *)&this->_padding_ = param_3->Type;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *plVar2 = 0;
  iVar16 = (param_3->Segments).ArrayNum;
  pFVar3 = (FRayTracingGeometrySegment *)(param_3->Segments).AllocatorInstance.Data;
  *(int *)&this->_padding_ = iVar16;
  if (iVar16 == 0) {
    *piVar1 = 0;
  }
  else {
    in_stack_fffffffffffffc18 = (char *)plVar2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar16,0,(ForAnyElementType *)plVar2,iVar16,piVar1);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              ((void *)*plVar2,pFVar3,iVar16);
  }
  this->_padding_ = (longlong)param_3->OfflineData;
  lVar36 = *(longlong *)((param_3->OfflineDataHeader).Reserved + 2);
  this->_padding_ = *(longlong *)(param_3->OfflineDataHeader).Reserved;
  this->_padding_ = lVar36;
  this->_padding_ = *(longlong *)((param_3->OfflineDataHeader).Reserved + 4);
  this->_padding_ = (longlong)param_3->SourceGeometry;
  this->_padding_ = (longlong)(param_3->DebugName).Name;
  *(uint *)&this->_padding_ = (param_3->DebugName).Number;
  *(FName *)((longlong)&this->_padding_ + 4) = param_3->OwnerName;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)&_vftable__for__FRHIRayTracingGeometry__;
  this->_padding_ = (longlong)&_vftable__for__FD3D12ShaderResourceRenameListener__;
  this->bIsAccelerationStructureDirty[0] = false;
  this->bIsAccelerationStructureDirty[1] = false;
  this->bIsAccelerationStructureDirty[2] = false;
  this->bIsAccelerationStructureDirty[3] = false;
  this->bIsAccelerationStructureDirty[4] = false;
  this->bIsAccelerationStructureDirty[5] = false;
  this->bIsAccelerationStructureDirty[6] = false;
  this->bIsAccelerationStructureDirty[7] = false;
  this->AccelerationStructureBuffers[0].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[1].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[2].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[3].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[4].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[5].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[6].Reference = (FD3D12Buffer *)0x0;
  this->AccelerationStructureBuffers[7].Reference = (FD3D12Buffer *)0x0;
  this->HitGroupSystemParameters[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[0].ArrayNum = 0;
  this->HitGroupSystemParameters[0].ArrayMax = 0;
  this->HitGroupSystemParameters[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[1].ArrayNum = 0;
  this->HitGroupSystemParameters[1].ArrayMax = 0;
  this->HitGroupSystemParameters[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[2].ArrayNum = 0;
  this->HitGroupSystemParameters[2].ArrayMax = 0;
  this->HitGroupSystemParameters[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[3].ArrayNum = 0;
  this->HitGroupSystemParameters[3].ArrayMax = 0;
  this->HitGroupSystemParameters[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[4].ArrayNum = 0;
  this->HitGroupSystemParameters[4].ArrayMax = 0;
  this->HitGroupSystemParameters[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[5].ArrayNum = 0;
  this->HitGroupSystemParameters[5].ArrayMax = 0;
  this->HitGroupSystemParameters[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[6].ArrayNum = 0;
  this->HitGroupSystemParameters[6].ArrayMax = 0;
  this->HitGroupSystemParameters[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HitGroupSystemParameters[7].ArrayNum = 0;
  this->HitGroupSystemParameters[7].ArrayMax = 0;
  this->HitGroupSystemIndexBufferSRV[0].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[0].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[1].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[1].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[2].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[2].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[3].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[3].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[4].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[4].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[5].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[5].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[6].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[6].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemIndexBufferSRV[7].Object = (FD3D12ShaderResourceView *)0x0;
  this->HitGroupSystemIndexBufferSRV[7].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[1].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[1].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[2].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[2].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[3].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[3].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[4].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[4].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[4].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[5].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[5].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[5].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[6].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[6].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[6].ArrayMax = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[7].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->HitGroupSystemSegmentVertexBufferSRVs[7].ArrayNum = 0;
  this->HitGroupSystemSegmentVertexBufferSRVs[7].ArrayMax = 0;
  FDebugName::FDebugName(&this->DebugName);
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->GeometryDescs).AllocatorInstance.SecondaryData =
       (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0;
  (this->GeometryDescs).ArrayNum = 0;
  (this->GeometryDescs).ArrayMax = 1;
  this->AccelerationStructureCompactedSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UpdateListenersCS,4000);
  (this->UpdateListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateListeners).ArrayNum = 0;
  (this->UpdateListeners).ArrayMax = 0;
  FVar19 = StatPtr_STAT_D3D12RayTracingAllocatedBLAS;
  if (StatPtr_STAT_D3D12RayTracingAllocatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS>)0x0) {
    pFVar18 = ::FName::FName(&local_228,"STAT_D3D12RayTracingAllocatedBLAS");
    in_stack_fffffffffffffc18 = "STATCAT_Advanced";
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedBLAS,
                        *pFVar18,L"Allocated bottom level acceleration structures",
                        "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true
                        ,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar19;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_2b0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
    local_2b0.StatData.Pad[0] = '\x01';
    local_2b0.StatData.Pad[1] = '\0';
    local_2b0.StatData.Pad[2] = '\0';
    local_2b0.StatData.Pad[3] = '\0';
    local_2b0.StatData.Pad[4] = '\0';
    local_2b0.StatData.Pad[5] = '\0';
    local_2b0.StatData.Pad[6] = '\0';
    local_2b0.StatData.Pad[7] = '\0';
    local_318 = FVar4;
    local_2b0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_2b0);
    FStatsTrace::Add(&local_318,1);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_BLAS,L"BLAS");
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) && ((int)this->_padding_ == 0)) {
    pFVar22 = FDebugName::FDebugName(&local_198,NAME_BLAS);
  }
  else {
    local_2a0.Number = (uint)this->_padding_;
    pFVar22 = &local_2a0;
    local_2a0.Name = (FName)this->_padding_;
  }
  (this->DebugName).Name = pFVar22->Name;
  (this->DebugName).Number = pFVar22->Number;
  this->OwnerName = *(FName *)((longlong)&this->_padding_ + 4);
  this->bHasPendingCompactionRequests[0] = false;
  this->bHasPendingCompactionRequests[1] = false;
  this->bHasPendingCompactionRequests[2] = false;
  this->bHasPendingCompactionRequests[3] = false;
  this->bHasPendingCompactionRequests[4] = false;
  this->bHasPendingCompactionRequests[5] = false;
  this->bHasPendingCompactionRequests[6] = false;
  this->bHasPendingCompactionRequests[7] = false;
  this->bRegisteredAsRenameListener[0] = false;
  this->bRegisteredAsRenameListener[1] = false;
  this->bRegisteredAsRenameListener[2] = false;
  this->bRegisteredAsRenameListener[3] = false;
  this->bRegisteredAsRenameListener[4] = false;
  this->bRegisteredAsRenameListener[5] = false;
  this->bRegisteredAsRenameListener[6] = false;
  this->bRegisteredAsRenameListener[7] = false;
  if (NullTransformBuffer.Reference == (FRHIBuffer *)0x0) {
    local_3a0.Data = (FScriptContainerElement *)0x0;
    local_398._0_4_ = 0;
    local_398._4_4_ = 0;
    in_stack_fffffffffffffc18 = local_398;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,0xc,&local_3a0,(int *)in_stack_fffffffffffffc18,(int *)(local_398 + 4));
    FVar12.Data = local_3a0.Data;
    lVar36 = (longlong)iVar16;
    *(undefined8 *)(local_3a0.Data + lVar36 * 4) = 0;
    *(undefined8 *)(local_3a0.Data + lVar36 * 4 + 8) = 0;
    *(undefined8 *)(local_3a0.Data + lVar36 * 4 + 0x10) = 0;
    *(undefined8 *)(local_3a0.Data + lVar36 * 4 + 0x10 + 8) = 0;
    *(undefined8 *)(local_3a0.Data + lVar36 * 4 + 0x20) = 0;
    *(undefined8 *)(local_3a0.Data + lVar36 * 4 + 0x20 + 8) = 0;
    uVar13 = local_398._0_4_;
    if (((int)local_398._0_4_ < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
      return pFVar23;
    }
    local_340 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
    local_250 = &___7FResourceArrayUploadArrayView__6B_;
    pppuStack_348 = &local_250;
    local_390.OwnerName.ComparisonIndex.Value = uVar13 * 4;
    iStack_354 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_350 = L"NullTransformBuffer";
    local_1c0 = L"NullTransformBuffer";
    local_390.OwnerName.Number = 0;
    uStack_358 = 0x4001;
    local_1d0 = (ulonglong)local_390.OwnerName.ComparisonIndex.Value;
    awStack_1c8._4_4_ = iStack_354;
    awStack_1c8[0] = L'䀁';
    awStack_1c8[1] = L'\0';
    uStack_338 = 0;
    uStack_33c = 2;
    local_330 = 0;
    local_1b0[2] = L'\x02';
    local_1b0[3] = L'\0';
    local_1b0[0] = (short)local_340;
    local_1b0[1] = (short)(local_340 >> 0x10);
    local_248 = FVar12.Data;
    awStack_1a8[0] = L'\0';
    awStack_1a8[1] = L'\0';
    awStack_1a8[2] = L'\0';
    awStack_1a8[3] = L'\0';
    awStack_1a8[4] = L'\0';
    awStack_1a8[5] = L'\0';
    awStack_1a8[6] = L'\0';
    awStack_1a8[7] = L'\0';
    local_240 = local_390.OwnerName.ComparisonIndex.Value;
    pppuStack_1b8 = pppuStack_348;
    FRHICommandListBase::CreateBuffer(param_1,&local_390);
    this_01 = NullTransformBuffer;
    local_250 = &___7FResourceArrayUploadInterface__6B_;
    NullTransformBuffer.Reference = (FRHIBuffer *)local_390._padding_;
    local_390._padding_ = 0;
    if ((this_01.Reference != (FRHIBuffer *)0x0) &&
       (FRHIResource::Release((FRHIResource *)this_01.Reference),
       (FRHIBuffer *)local_390._padding_ != (FRHIBuffer *)0x0)) {
      FRHIResource::Release((FRHIResource *)local_390._padding_);
    }
    if (local_3a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data);
    }
  }
  this_02 = GetD3D12RayTracingGeometryTracker();
  uVar33 = this->AccelerationStructureCompactedSize;
  if (uVar33 == 0) {
    uVar33 = this->_padding_;
  }
  lpCriticalSection = &this_02->CS;
  local_310 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<FD3D12RayTracingGeometry_*,DefaultKeyFuncs<FD3D12RayTracingGeometry_*,0>,FDefaultSetAllocator>
  ::Emplace<FD3D12RayTracingGeometry_*_const_&>
            (&this_02->Geometries,(FD3D12RayTracingGeometry **)local_31c,(bool *)&local_310);
  this_02->TotalBLASSize = this_02->TotalBLASSize + uVar33;
  uVar37 = this_02->TotalBLASSize;
  if (this_02->TotalBLASSize < this_02->MaxTotalBLASSize) {
    uVar37 = this_02->MaxTotalBLASSize;
  }
  this_02->MaxTotalBLASSize = uVar37;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((int)this->_padding_ < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.Segments.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xe37,
                          L"Ray tracing geometry must be initialized with at least one segment."),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
    return pFVar23;
  }
  TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&this->GeometryDescs,(int)this->_padding_,Default);
  local_238 = (this->GeometryDescs).AllocatorInstance.SecondaryData;
  if (local_238 == (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
    local_238 = (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)&this->GeometryDescs;
  }
  iVar16 = (this->GeometryDescs).ArrayNum;
  if ((iVar16 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
    return pFVar23;
  }
  local_1f8._12_2_ = awStack_22c[0];
  local_1f8._14_2_ = awStack_22c[1];
  local_1f8.ArrayNum = iVar16;
  local_1f8.DataPtr = (D3D12_RAYTRACING_GEOMETRY_DESC *)local_238;
  iStack_230 = iVar16;
  TranslateRayTracingGeometryDescs((FRayTracingGeometryInitializer *)&this->_padding_,&local_1f8);
  uVar38 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_328 = 0;
  if (uVar38 != 0) {
    for (; (uVar38 >> local_328 & 1) == 0; local_328 = local_328 + 1) {
    }
  }
  uVar37 = 0x20;
  if (uVar38 != 0) {
    uVar37 = (ulonglong)local_328;
  }
  local_324 = 0;
  if (uVar38 != 0) {
    while( true ) {
      this->bIsAccelerationStructureDirty[uVar37] = true;
      uVar38 = uVar38 & ~(1 << ((byte)uVar37 & 0x1f));
      local_320 = 0;
      if (uVar38 != 0) {
        for (; (uVar38 >> local_320 & 1) == 0; local_320 = local_320 + 1) {
        }
      }
      if (uVar38 == 0) break;
      uVar37 = (ulonglong)local_320;
    }
  }
  local_2c8.Reference = (ID3D12Device7 *)0xffffffffffffffff;
  local_2c0.Reference = (ID3D12Device8 *)0xffffffffffffffff;
  local_2b8.Reference = (ID3D12Device9 *)0xffffffffffffffff;
  if ((((((int)this->_padding_ == -1) && (*(int *)((longlong)&this->_padding_ + 4) == -1)) &&
       ((int)this->_padding_ == -1)) &&
      ((*(int *)((longlong)&this->_padding_ + 4) == -1 && ((int)this->_padding_ == -1)))) &&
     (*(int *)((longlong)&this->_padding_ + 4) == -1)) {
    bVar14 = false;
    local_res20 = 0;
    uVar33 = uVar39;
  }
  else {
    local_390.InitialState = None;
    bVar14 = true;
    local_390.ClassName.ComparisonIndex.Value = 0;
    puVar24 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0x488))(GDynamicRHI,local_100);
    local_res20 = puVar24[2];
    uVar33 = (ulong64)*puVar24;
  }
  local_3a8 = (void *)0x0;
  if (this->_padding_ != 0) {
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasOfflineMetadata",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xe4a,
                            L"OfflineData provided in Initializer has data but OfflineDataHeader is not valid."
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
      return pFVar23;
    }
    local_3a8 = (void *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    uVar38 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    if (uVar38 < local_res20) {
      in_stack_fffffffffffffc18 =
           (char *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffc18 >> 0x20),uVar38);
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceDataSize >= OfflineBvhMetadata.SerializedSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xe4f,
                          L"OfflineData provided in Initializer has %u bytes but FD3D12RayTracingGeometry expected %u bytes."
                         );
      if (bVar14) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
        return pFVar23;
      }
    }
    if (((local_3a8 != (void *)0x0) && (param_3->bAllowUpdate != false)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InInitializer.bAllowUpdate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xe54,
                            L"FD3D12RayTracingGeometry doesn\'t support updating BVH created using offline data."
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
      return pFVar23;
    }
  }
  plVar2 = &this->_padding_;
  if (local_3a8 == (void *)0x0) {
    plVar25 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x478))(GDynamicRHI,local_68);
    lVar11 = plVar25[1];
    lVar36 = plVar25[2];
    *plVar2 = *plVar25;
    this->_padding_ = lVar11;
    this->_padding_ = lVar36;
  }
  else {
    *plVar2 = uVar33;
    this->AccelerationStructureCompactedSize = uVar33;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  if (*plVar2 == 0) {
    pFVar26 = GetGeometryInitializerDebugString
                        (&local_1e8,(FRayTracingGeometryInitializer *)&this->_padding_);
    if ((pFVar26->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("SizeInfo.ResultSize != 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0xe68,
                        L"Unexpected acceleration structure buffer size (0).\nGeometry initializer details:\n%s"
                       );
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    in_stack_fffffffffffffc18 = (char *)pwVar27;
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
      return pFVar23;
    }
  }
  if ((char)this->_padding_ != '\x01') {
    pFVar44 = (FD3D12Buffer *)this->AccelerationStructureBuffers;
    local_res8 = 0;
    uVar33 = uVar39;
    do {
      if (GNumExplicitGPUsForRendering <= (uint)uVar33) break;
      in_stack_fffffffffffffc18 =
           (char *)((ulonglong)in_stack_fffffffffffffc18 & 0xffffffff00000000);
      TVar28 = CreateRayTracingBuffer
                         ((FD3D12Adapter *)local_308,(uint)param_2,uVar33,
                          (ERayTracingBufferType)this->_padding_,
                          (FDebugName *)in_stack_fffffffffffffc18);
      if (pFVar44 != TVar28.Reference) {
        lVar36 = pFVar44->_padding_;
        pFVar44->_padding_ = (TVar28.Reference)->_padding_;
        (TVar28.Reference)->_padding_ = 0;
        if (lVar36 != 0) {
          (**(code **)(*(longlong *)(lVar36 + 0xe8) + 0x10))();
        }
      }
      if (local_308._0_8_ != 0) {
        (**(code **)(*(longlong *)(local_308._0_8_ + 0xe8) + 0x10))();
      }
      *(FName *)(pFVar44->_padding_ + 0x10) = this->OwnerName;
      auVar40[4] = '\0';
      auVar40[5] = '\0';
      auVar40[6] = '\0';
      auVar40[7] = '\0';
      auVar40._0_4_ = *(uint *)(pFVar44->_padding_ + 0xd8);
      if (auVar40 != (uchar  [8])0x0) {
        FVar29 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
        if (StatPtr_STAT_D3D12RayTracingUsedVideoMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
          pFVar18 = ::FName::FName(&local_220,"STAT_D3D12RayTracingUsedVideoMemory");
          in_stack_fffffffffffffc18 = "STATCAT_Advanced";
          FVar29 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar18,
                              L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                              "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                              false,MCR_Physical);
        }
        pIVar5 = *(ID3D12Device **)FVar29;
        uVar45 = (uint)pIVar5;
        uVar38 = (uint)((ulonglong)pIVar5 >> 0x20);
        local_390.DebugName._0_4_ = uVar45;
        local_390.DebugName._4_4_ = uVar38;
        if (((pIVar5 != (ID3D12Device *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_290.NameAndInfo.Number = uVar38 & 0xffffafff | 0xa000;
          local_308._8_8_ = pIVar5;
          local_290.StatData.Pad = auVar40;
          local_290.NameAndInfo.Index.Value = uVar45;
          FThreadStats::AddStatMessage(pFVar20,&local_290);
          FStatsTrace::Add((FName *)(local_308 + 8),(long64)auVar40);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      auVar41[4] = '\0';
      auVar41[5] = '\0';
      auVar41[6] = '\0';
      auVar41[7] = '\0';
      auVar41._0_4_ = *(uint *)(pFVar44->_padding_ + 0xd8);
      if (auVar41 != (uchar  [8])0x0) {
        FVar30 = StatPtr_STAT_D3D12RayTracingBLASMemory;
        if (StatPtr_STAT_D3D12RayTracingBLASMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)0x0) {
          pFVar18 = ::FName::FName(&local_1d8,"STAT_D3D12RayTracingBLASMemory");
          in_stack_fffffffffffffc18 = "STATCAT_Advanced";
          FVar30 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBLASMemory,
                              *pFVar18,L"Total BL AS Memory","STATGROUP_D3D12RayTracing",
                              "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                              false,MCR_Physical);
        }
        pIVar6 = *(ID3D12Device1 **)FVar30;
        uVar45 = (uint)pIVar6;
        uVar38 = (uint)((ulonglong)pIVar6 >> 0x20);
        local_390.InitialData._0_4_ = uVar45;
        local_390.InitialData._4_4_ = uVar38;
        if (((pIVar6 != (ID3D12Device1 *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_280.NameAndInfo.Number = uVar38 & 0xffffafff | 0xa000;
          local_308._16_8_ = pIVar6;
          local_280.StatData.Pad = auVar41;
          local_280.NameAndInfo.Index.Value = uVar45;
          FThreadStats::AddStatMessage(pFVar20,&local_280);
          FStatsTrace::Add((FName *)(local_308 + 0x10),(long64)auVar41);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      uVar38 = *(uint *)(pFVar44->_padding_ + 0xd8);
      auVar42[4] = '\0';
      auVar42[5] = '\0';
      auVar42[6] = '\0';
      auVar42[7] = '\0';
      auVar42[0] = (char)uVar38;
      auVar42[1] = (char)(uVar38 >> 8);
      auVar42[2] = (char)(uVar38 >> 0x10);
      auVar42[3] = (char)(uVar38 >> 0x18);
      if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
        if (uVar38 != 0) {
          FVar32 = StatPtr_STAT_D3D12RayTracingStaticBLASMemory;
          if (StatPtr_STAT_D3D12RayTracingStaticBLASMemory ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)0x0) {
            pFVar18 = ::FName::FName(&local_210,"STAT_D3D12RayTracingStaticBLASMemory");
            in_stack_fffffffffffffc18 = "STATCAT_Advanced";
            FVar32 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_D3D12RayTracingStaticBLASMemory,*pFVar18,
                                L"Static BL AS Memory","STATGROUP_D3D12RayTracing",
                                "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,
                                false,false,MCR_Physical);
          }
          pIVar8 = *(ID3D12Device3 **)FVar32;
          EVar46 = (ERHIAccess)pIVar8;
          EVar17 = (ERHIBufferInitAction)((ulonglong)pIVar8 >> 0x20);
          local_390.InitialState = EVar46;
          local_390.InitAction = EVar17;
          if (((pIVar8 != (ID3D12Device3 *)0x0) && (FThreadStats::bPrimaryDisableForever == false))
             && (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar20 == (FThreadStats *)0x0) {
              pFVar21 = FThreadStatsPool::Get();
              pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
            }
            local_260.NameAndInfo.Number = EVar17 & 0xffffafff | 0xa000;
            local_308._32_8_ = pIVar8;
            local_260.StatData.Pad = auVar42;
            local_260.NameAndInfo.Index.Value = EVar46;
            FThreadStats::AddStatMessage(pFVar20,&local_260);
            pFVar18 = (FName *)(local_308 + 0x20);
            goto LAB_1459f10d3;
          }
        }
      }
      else if (uVar38 != 0) {
        FVar31 = StatPtr_STAT_D3D12RayTracingDynamicBLASMemory;
        if (StatPtr_STAT_D3D12RayTracingDynamicBLASMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory>)0x0) {
          pFVar18 = ::FName::FName(&local_218,"STAT_D3D12RayTracingDynamicBLASMemory");
          in_stack_fffffffffffffc18 = "STATCAT_Advanced";
          FVar31 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12RayTracingDynamicBLASMemory,*pFVar18,
                              L"Dynamic BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced"
                              ,L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical
                             );
        }
        pIVar7 = *(ID3D12Device2 **)FVar31;
        uVar45 = (uint)pIVar7;
        uVar38 = (uint)((ulonglong)pIVar7 >> 0x20);
        local_390._padding_._0_4_ = uVar45;
        local_390._padding_._4_4_ = uVar38;
        if (((pIVar7 != (ID3D12Device2 *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar20 == (FThreadStats *)0x0) {
            pFVar21 = FThreadStatsPool::Get();
            pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
          }
          local_270.NameAndInfo.Number = uVar38 & 0xffffafff | 0xa000;
          local_308._24_8_ = pIVar7;
          local_270.StatData.Pad = auVar42;
          local_270.NameAndInfo.Index.Value = uVar45;
          FThreadStats::AddStatMessage(pFVar20,&local_270);
          pFVar18 = (FName *)(local_308 + 0x18);
LAB_1459f10d3:
          FStatsTrace::Add(pFVar18,(long64)auVar42);
          if (pFVar20->ScopeCount == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      local_res8 = local_res8 + 1;
      uVar33 = (ulong64)local_res8;
      pFVar44 = (FD3D12Buffer *)&pFVar44->_padding_;
    } while (local_res8 < 8);
    pIVar43 = (ID3D12Device5 *)(ulonglong)(uint)this->_padding_;
    if (pIVar43 != (ID3D12Device5 *)0x0) {
      FVar34 = StatPtr_STAT_D3D12RayTracingTrianglesBLAS;
      if (StatPtr_STAT_D3D12RayTracingTrianglesBLAS ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS>)0x0) {
        pFVar18 = ::FName::FName(local_208,"STAT_D3D12RayTracingTrianglesBLAS");
        FVar34 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingTrianglesBLAS,
                            *pFVar18,L"Triangles in all BL acceleration structures",
                            "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",
                            true,false,ST_int64,false,false,MCR_Invalid);
      }
      pIVar9 = *(ID3D12Device4 **)FVar34;
      if (((pIVar9 != (ID3D12Device4 *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        local_2cc = (uint)((ulonglong)pIVar9 >> 0x20) & 0xffffafff | 0xa000;
        local_308._40_8_ = pIVar9;
        local_308._48_8_ = pIVar43;
        local_2d0 = (int)pIVar9;
        FThreadStats::AddStatMessage(pFVar20,(FStatMessage *)(local_308 + 0x30));
        FStatsTrace::Add((FName *)(local_308 + 0x28),(long64)pIVar43);
        if (pFVar20->ScopeCount == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
    bVar14 = (char)this->_padding_ == '\0';
    if (local_3a8 == (void *)0x0) {
      do {
        uVar38 = (uint)uVar39;
        if (GNumExplicitGPUsForRendering <= uVar38) {
          return this;
        }
        RegisterAsRenameListener(this,uVar38);
        uVar39 = (ulong64)(uVar38 + 1);
      } while (uVar38 + 1 < 8);
    }
    else {
      if ((GNumExplicitGPUsForRendering == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
        return pFVar23;
      }
      FD3D12ResourceLocation::FD3D12ResourceLocation(&local_e8,(param_2->Devices).Elements[0]);
      _Dst = FD3D12UploadHeapAllocator::AllocUploadResource
                       (param_2->UploadHeapAllocator[0],local_res20,0x100,&local_e8);
      memcpy(_Dst,local_3a8,(ulonglong)local_res20);
      local_188 = this;
      if (((FD3D12Device *)local_e8._padding_ == (FD3D12Device *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parent != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x59,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
        return pFVar23;
      }
      FD3D12ResourceLocation::FD3D12ResourceLocation(&local_180,(FD3D12Device *)local_e8._padding_);
      FD3D12ResourceLocation::TransferOwnership(&local_180,&local_e8);
      local_108 = bVar14;
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
        pFVar35 = FMemStackBase::Alloc(&param_1->MemManager,0xa0,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar35;
        param_1->CommandLink = &pFVar35->Next;
        pFVar35->_padding_ =
             (longlong)
             &TRHILambdaCommand<FRHICommandListBase,`FD3D12RayTracingGeometry::FD3D12RayTracingGeometry'::`116'::<lambda_1>_>
              ::_vftable_;
        pFVar35->Next = (FRHICommandBase *)0x0;
        pFVar35[1]._padding_ = (longlong)local_188;
        if (((FD3D12Device *)local_180._padding_ == (FD3D12Device *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parent != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                ,0x59,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FD3D12RayTracingGeometry *)(*pcVar10)();
          return pFVar23;
        }
        FD3D12ResourceLocation::FD3D12ResourceLocation
                  ((FD3D12ResourceLocation *)&pFVar35[1].Next,(FD3D12Device *)local_180._padding_);
        FD3D12ResourceLocation::TransferOwnership
                  ((FD3D12ResourceLocation *)&pFVar35[1].Next,&local_180);
        *(undefined1 *)&pFVar35[9]._padding_ = local_108;
        pFVar35[9].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      }
      else {
        `FD3D12RayTracingGeometry::FD3D12RayTracingGeometry'::__l116::<lambda_1>::operator()
                  (&local_188,param_1);
      }
      FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_180);
      (**(code **)(*(longlong *)this->_padding_ + 0x18))();
      FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_e8);
    }
  }
  return this;
}

// ~FD3D12RayTracingGeometry @ 1459f8ff0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12RayTracingGeometry::~FD3D12RayTracingGeometry(FD3D12RayTracingGeometry *this)

{
  int *piVar1;
  TRefCountPtr<FD3D12Buffer> *pTVar2;
  TArray<ID3D12RayTracingGeometryUpdateListener_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar6;
  TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  TRefCountPtr<FD3D12Buffer> *pTVar12;
  TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__FRHIRayTracingGeometry__;
  pTVar3 = &this->UpdateListeners;
  this->_padding_ = (longlong)&_vftable__for__FD3D12ShaderResourceRenameListener__;
  pFVar10 = (pTVar3->AllocatorInstance).Data;
  iVar5 = (this->UpdateListeners).ArrayNum;
  pFVar4 = pFVar10 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->UpdateListeners).ArrayNum != iVar5) {
      `TCheckedPointerIterator<ID3D12RayTracingGeometryUpdateListener_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar4) break;
    (**(code **)**(undefined8 **)pFVar10)(*(undefined8 **)pFVar10,this);
    pFVar10 = pFVar10 + 8;
  }
  piVar1 = &(this->UpdateListeners).ArrayMax;
  lVar9 = 8;
  (this->UpdateListeners).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  ReleaseUnderlyingResource(this);
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UpdateListenersCS);
  FVar6 = (this->GeometryDescs).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  lVar8 = 8;
  pTVar11 = (TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *)
            &this->DebugName;
  do {
    pTVar7 = pTVar11 + -1;
    pTVar11 = pTVar11 + -1;
    lVar8 = lVar8 + -1;
    DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
              ((TSharedPtr<FD3D12ShaderResourceView,1> *)(pTVar11->AllocatorInstance).Data,
               pTVar7->ArrayNum);
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  } while (lVar8 != 0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[7].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[6].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[5].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[4].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[3].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[2].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[1].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->HitGroupSystemIndexBufferSRV[0].SharedReferenceCount.ReferenceController);
  lVar8 = 8;
  pTVar13 = (TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *)
            this->HitGroupSystemIndexBufferSRV;
  do {
    pFVar4 = pTVar13[-1].AllocatorInstance.Data;
    pTVar13 = pTVar13 + -1;
    lVar8 = lVar8 + -1;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  } while (lVar8 != 0);
  pTVar12 = (TRefCountPtr<FD3D12Buffer> *)this->bRegisteredAsRenameListener;
  do {
    pTVar2 = pTVar12 + -1;
    pTVar12 = pTVar12 + -1;
    lVar9 = lVar9 + -1;
    if (pTVar2->Reference != (FD3D12Buffer *)0x0) {
      (**(code **)(pTVar2->Reference->_padding_ + 0x10))();
    }
  } while (lVar9 != 0);
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 1459fb4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12RayTracingGeometry::FD3D12RayTracingGeometry'::__l116::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  uint *puVar1;
  ERHIPipeline EVar2;
  longlong lVar3;
  ID3D12GraphicsCommandList4 *pIVar4;
  FD3D12Resource *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  FD3D12ContextCommon *this_00;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = 0;
  lVar11 = 0x168;
  do {
    if (GNumExplicitGPUsForRendering <= uVar10) break;
    EVar2 = param_1->ActivePipelines;
    if (((EVar2 == None) || ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(ActivePipelines)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b7,
                           L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b8,
                           L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar8 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
    this_00 = (FD3D12ContextCommon *)(**(code **)(*plVar8 + 0x290))(plVar8,uVar10);
    lVar3 = *(longlong *)(lVar11 + *(longlong *)this);
    if (this_00->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    pIVar4 = (this_00->CommandList->Interfaces).GraphicsCommandList4.Reference;
    puVar1 = &(this_00->CommandList->State).NumCommands;
    *puVar1 = *puVar1 + 1;
    (**(code **)((longlong)*pIVar4 + 0x250))
              (pIVar4,*(undefined8 *)(lVar3 + 0x188),*(undefined8 *)((longlong)this + 0x60),4);
    pFVar5 = *(FD3D12Resource **)((longlong)this + 0x18);
    if ((pFVar5 == (FD3D12Resource *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                           ,0x1a5,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (this_00->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    FD3D12CommandList::UpdateResidency(this_00->CommandList,pFVar5);
    FD3D12ContextCommon::ConditionalSplitCommandList(this_00);
    if (*(char *)((longlong)this + 0x80) != '\0') {
      FD3D12RayTracingGeometry::RegisterAsRenameListener(*(FD3D12RayTracingGeometry **)this,uVar10);
      FD3D12RayTracingGeometry::SetupHitGroupSystemParameters
                (*(FD3D12RayTracingGeometry **)this,uVar10);
    }
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 8;
  } while (uVar10 < 8);
  lVar11 = *(longlong *)this;
  uVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar10 = 0;
  bVar7 = uVar9 != 0;
  if (bVar7) {
    for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
    }
  }
  while (bVar7) {
    *(undefined1 *)((ulonglong)uVar10 + 0x160 + lVar11) = 0;
    uVar9 = uVar9 & ~(1 << ((byte)uVar10 & 0x1f));
    uVar10 = 0;
    bVar7 = uVar9 != 0;
    if (bVar7) {
      for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
  }
  return;
}

// AllocateBufferSRVs @ 145a012e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::AllocateBufferSRVs(FD3D12RayTracingGeometry *this,uint param_1)

{
  int *piVar1;
  TSharedPtr<FD3D12ShaderResourceView,1> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  FD3D12Device *pFVar5;
  code *pcVar6;
  FD3D12ShaderResourceView *pFVar7;
  FD3D12BaseShaderResource *pFVar8;
  TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  FD3D12BaseShaderResource *pFVar12;
  FD3D12BaseShaderResource *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  FD3D12BaseShaderResource *pFVar19;
  TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *pTVar20;
  FD3D12ShaderResourceView *pFVar21;
  longlong *plVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  FD3D12ShaderResourceView *local_118;
  FD3D12BaseShaderResource *pFStack_110;
  TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *local_108;
  FD3D12ShaderResourceView *local_100;
  FSharedReferencer<1> FStack_f8;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_f0;
  FD3D12ShaderResourceView *local_c8;
  FSharedReferencer<1> FStack_c0;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_b8;
  FResourceInfo local_90;
  FResourceInfo local_78 [2];
  
  uVar15 = (ulonglong)param_1;
  local_c8 = (FD3D12ShaderResourceView *)0x0;
  FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = this->HitGroupSystemIndexBufferSRV + uVar15;
  local_res10 = param_1;
  local_res20 = uVar15;
  if (pTVar2 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_c8) {
    pTVar2->Object = (FD3D12ShaderResourceView *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[uVar15].SharedReferenceCount,&FStack_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.ReferenceController);
  pTVar20 = this->HitGroupSystemSegmentVertexBufferSRVs + uVar15;
  local_108 = pTVar20;
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)(pTVar20->AllocatorInstance).Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[uVar15].ArrayNum);
  piVar1 = &this->HitGroupSystemSegmentVertexBufferSRVs[uVar15].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[uVar15].ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar20->AllocatorInstance,0,piVar1);
  }
  pFVar8 = _UNK_150651568;
  pFVar7 = ___xmm_00000000000000000000000000000010;
  if ((this->_padding_ != 0) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
    if (((this->_padding_ & 0xf) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Initializer.IndexBufferOffset % 16) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xf2c,
                            L"The byte offset of raw views must be a multiple of %d (specified offset: %d)."
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar17 = this->_padding_;
    iVar11 = (int)this->_padding_;
    lVar4 = this->_padding_;
    lVar3 = lVar17 + (longlong)iVar11 * 0x28;
    uVar18 = 0;
    while( true ) {
      if ((int)this->_padding_ != iVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      uVar14 = local_res10;
      if (lVar17 == lVar3) break;
      uVar14 = *(int *)(lVar17 + 0x1c) + *(int *)(lVar17 + 0x18);
      if (uVar14 < uVar18) {
        uVar14 = uVar18;
      }
      lVar17 = lVar17 + 0x28;
      uVar18 = uVar14;
    }
    pFVar13 = (FD3D12BaseShaderResource *)0x0;
    local_b8.field3_0x10.Texture2DArray.ResourceMinLODClamp = 0.0;
    local_b8.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
    local_b8.Shader4ComponentMapping = 0x1688;
    local_b8._12_4_ = 0;
    local_b8.Format = DXGI_FORMAT_R32_TYPELESS;
    local_b8.field3_0x10.Buffer.FirstElement =
         *(longlong *)(lVar4 + 400) + (ulonglong)(uint)this->_padding_ >> 2;
    local_b8.field3_0x10.Buffer.Flags = D3D12_BUFFER_SRV_FLAG_RAW;
    local_b8.field3_0x10.Buffer.StructureByteStride = 0;
    local_b8.field3_0x10.Buffer.NumElements = (uVar18 * *(int *)(lVar4 + 0xdc) + 1) * 3 >> 2;
    if (local_b8.field3_0x10.Buffer.NumElements == 0) {
      local_b8.field3_0x10.Buffer.NumElements = 1;
    }
    pFVar19 = pFVar13;
    if (local_res10 != 0) {
      pFVar19 = (FD3D12BaseShaderResource *)this->HitGroupSystemIndexBufferSRV[0].Object;
    }
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = this->_padding_;
    if ((GNumExplicitGPUsForRendering <= uVar14) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GPUIndex < GNumExplicitGPUsForRendering",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                            ,0x103,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = *(FD3D12Device **)(lVar3 + 0x800 + local_res20 * 8);
    pFVar12 = ::operator_new(0xa8);
    if (pFVar12 == (FD3D12BaseShaderResource *)0x0) {
      pFVar21 = (FD3D12ShaderResourceView *)&DAT_00000010;
      local_100 = pFVar7;
      FStack_f8.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      pFVar12 = pFVar13;
    }
    else {
      *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar12->_padding_)[1] = (atomic<int>)0x1;
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFD3D12ShaderResourceView___00_SharedPointerInternals__6B_
      ;
      FD3D12ShaderResourceView::FD3D12ShaderResourceView
                ((FD3D12ShaderResourceView *)&pFVar12->RenameListenersCS,pFVar5,
                 (FD3D12ShaderResourceView *)pFVar19,BufferSRV,(FD3D12RayTracingScene *)0x0);
      pFVar21 = (FD3D12ShaderResourceView *)&pFVar12->RenameListenersCS;
      if ((pFVar21 == (FD3D12ShaderResourceView *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(atomic<int> *)&pFVar12->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
      UNLOCK();
      FStack_f8.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      local_100 = pFVar21;
    }
    if (pTVar2 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_100) {
      pTVar2->Object = pFVar21;
      local_100 = (FD3D12ShaderResourceView *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&this->HitGroupSystemIndexBufferSRV[uVar15].SharedReferenceCount,&FStack_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_f8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if ((pTVar2->Object == (FD3D12ShaderResourceView *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_90.BaseResource = (FD3D12BaseShaderResource *)(lVar4 + 0xe8);
    if (lVar4 == 0) {
      local_90.BaseResource = pFVar13;
    }
    if (local_90.BaseResource == (FD3D12BaseShaderResource *)0x0) {
      local_90.ResourceLocation = (FD3D12ResourceLocation *)0x0;
      local_90.Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_90.ResourceLocation = &(local_90.BaseResource)->ResourceLocation;
      local_90.Resource = ((local_90.BaseResource)->ResourceLocation).UnderlyingResource;
    }
    FD3D12ShaderResourceView::CreateView(pTVar2->Object,&local_90,&local_b8,None);
    pTVar20 = local_108;
    param_1 = local_res10;
  }
  iVar11 = (int)this->_padding_;
  uVar15 = (ulonglong)iVar11;
  plVar22 = (longlong *)this->_padding_;
  local_res20 = CONCAT44(local_res20._4_4_,iVar11);
  local_108 = (TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *)
              (plVar22 + uVar15 * 5);
  while( true ) {
    pTVar9 = local_108;
    if ((int)this->_padding_ != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *)plVar22 ==
        pTVar9) {
      return;
    }
    if (((*(uint *)((longlong)plVar22 + 0xc) & 0xf) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Segment.VertexBufferOffset % 16) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xf48,
                            L"The byte offset of raw views must be a multiple of %d (specified offset: %d)."
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar22;
    pFVar21 = (FD3D12ShaderResourceView *)0x0;
    local_f0._12_4_ = 0;
    local_f0.field3_0x10.Texture2DArray.ResourceMinLODClamp = 0.0;
    local_f0.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
    local_f0.Format = DXGI_FORMAT_R32_TYPELESS;
    local_f0.Shader4ComponentMapping = 0x1688;
    uVar15 = *(longlong *)(lVar3 + 400) + (ulonglong)*(uint *)((longlong)plVar22 + 0xc);
    local_f0.field3_0x10.Texture1D.MostDetailedMip = (uint)(uVar15 >> 2);
    local_f0.field3_0x10.Texture1D.MipLevels = (uint)(uVar15 >> 0x22);
    if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
      local_f0.field3_0x10.Buffer.NumElements =
           *(int *)((longlong)plVar22 + 0x1c) * (int)plVar22[2] + 3U >> 2;
    }
    else {
      local_f0.field3_0x10.Buffer.NumElements =
           *(int *)((longlong)plVar22 + 0x14) * (int)plVar22[2] + 3U >> 2;
      if (local_f0.field3_0x10.Buffer.NumElements == 0) {
        local_f0.field3_0x10.Buffer.NumElements = 1;
      }
    }
    local_f0.field3_0x10._12_8_ = 0x100000000;
    if (param_1 != 0) {
      uVar18 = this->HitGroupSystemSegmentVertexBufferSRVs[param_1].ArrayNum;
      if ((int)uVar18 < this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayNum) {
        uVar14 = 0;
        if ((int)uVar18 < this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = *(FD3D12ShaderResourceView **)
                   (this->HitGroupSystemSegmentVertexBufferSRVs[0].AllocatorInstance.Data +
                   (longlong)(int)uVar18 * 0x10);
      }
    }
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar17 = this->_padding_;
    if ((GNumExplicitGPUsForRendering <= param_1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GPUIndex < GNumExplicitGPUsForRendering",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                            ,0x103,L""), bVar10)) break;
    pFVar5 = *(FD3D12Device **)(lVar17 + 0x800 + (ulonglong)param_1 * 8);
    pFVar13 = ::operator_new(0xa8);
    if (pFVar13 == (FD3D12BaseShaderResource *)0x0) {
      pFVar13 = (FD3D12BaseShaderResource *)0x0;
      local_118 = pFVar7;
      pFStack_110 = pFVar8;
    }
    else {
      *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar13->_padding_)[1] = (atomic<int>)0x1;
      pFVar13->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFD3D12ShaderResourceView___00_SharedPointerInternals__6B_
      ;
      FD3D12ShaderResourceView::FD3D12ShaderResourceView
                ((FD3D12ShaderResourceView *)&pFVar13->RenameListenersCS,pFVar5,pFVar21,BufferSRV,
                 (FD3D12RayTracingScene *)0x0);
      if ((&pFVar13->RenameListenersCS == (FWindowsRecursiveMutex *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(atomic<int> *)&pFVar13->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
      UNLOCK();
      local_118 = (FD3D12ShaderResourceView *)&pFVar13->RenameListenersCS;
      pFStack_110 = pFVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if ((local_118 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_78[0].BaseResource = (FD3D12BaseShaderResource *)(lVar3 + 0xe8);
    if (lVar3 == 0) {
      local_78[0].BaseResource = (FD3D12BaseShaderResource *)0x0;
    }
    if (local_78[0].BaseResource == (FD3D12BaseShaderResource *)0x0) {
      local_78[0].ResourceLocation = (FD3D12ResourceLocation *)0x0;
      local_78[0].Resource = (FD3D12Resource *)0x0;
    }
    else {
      local_78[0].ResourceLocation = &(local_78[0].BaseResource)->ResourceLocation;
      local_78[0].Resource = ((local_78[0].BaseResource)->ResourceLocation).UnderlyingResource;
    }
    FD3D12ShaderResourceView::CreateView(local_118,local_78,&local_f0,None);
    pFVar16 = (pTVar20->AllocatorInstance).Data;
    piVar1 = &pTVar20->ArrayMax;
    if (((pFVar16 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = pTVar20->ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar20->AllocatorInstance,piVar1);
    }
    pTVar20->ArrayNum = iVar11 + 1;
    pFVar16 = (pTVar20->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(FD3D12ShaderResourceView **)pFVar16 = local_118;
    *(FD3D12BaseShaderResource **)(pFVar16 + 8) = pFStack_110;
    if (pFStack_110 != (FD3D12BaseShaderResource *)0x0) {
      LOCK();
      *(int *)&pFStack_110->_padding_ = (int)pFStack_110->_padding_ + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFStack_110);
    uVar15 = local_res20 & 0xffffffff;
    plVar22 = plVar22 + 5;
    param_1 = local_res10;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// BuffersValid @ 145a05310

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall FD3D12RayTracingGeometry::BuffersValid(FD3D12RayTracingGeometry *this,uint param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  if ((this->_padding_ == 0) ||
     (*(char *)(*(longlong *)(this->_padding_ + 0x1b0 + (ulonglong)param_1 * 8) + 0x1a0) != '\0')) {
    plVar4 = (longlong *)this->_padding_;
    iVar2 = (int)this->_padding_;
    plVar1 = plVar4 + (longlong)iVar2 * 5;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<FRayTracingGeometrySegment_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar4 == plVar1) {
        return true;
      }
      lVar3 = 0;
      if (*plVar4 != 0) {
        lVar3 = *(longlong *)(*plVar4 + 0x1b0 + (ulonglong)param_1 * 8);
      }
      if (*(char *)(lVar3 + 0x1a0) == '\0') break;
      plVar4 = plVar4 + 5;
    }
  }
  return false;
}

// CompactAccelerationStructure @ 145a08880

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

void __thiscall
FD3D12RayTracingGeometry::CompactAccelerationStructure
          (FD3D12RayTracingGeometry *this,FD3D12CommandContext *param_1,uint param_2,ulong64 param_3
          )

{
  int *piVar1;
  FD3D12Buffer *pFVar2;
  FName FVar3;
  longlong lVar4;
  longlong lVar5;
  ID3D12Device *pIVar6;
  ID3D12Device1 *pIVar7;
  ID3D12Device2 *pIVar8;
  FD3D12Resource *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory> FVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory> FVar18;
  TRefCountPtr<FD3D12Buffer> TVar19;
  ID3D12Device4 *pIVar20;
  uchar auVar21 [8];
  uchar auVar22 [8];
  ulonglong uVar23;
  uchar auVar24 [8];
  uchar auVar25 [8];
  uchar auVar26 [8];
  undefined1 local_res18 [8];
  ulong64 local_res20;
  undefined8 in_stack_fffffffffffffea8;
  char *pcVar27;
  FLLMScope local_110;
  undefined1 local_10c [4];
  FName local_108;
  FName local_100;
  FName local_f8;
  undefined1 local_f0 [48];
  uint local_c0;
  uint local_bc;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  uVar23 = (ulonglong)param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name4274,L"FD3D12RT/CompactBLAS");
    _Init_thread_footer(&::_TSS0);
  }
  pcVar27 = (char *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffea8 >> 8),1);
  FLLMScope::FLLMScope(&local_110,LLMScope_Name4274,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_f0 + 0x20),&LLMScope_Name4274,true);
  if ((this->bHasPendingCompactionRequests[uVar23] == false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bHasPendingCompactionRequests[InGPUIndex]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x10b4,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->bHasPendingCompactionRequests[uVar23] = false;
  if (param_3 == 0) {
    local_res18[0] = 0;
    `FD3D12RayTracingGeometry::CompactAccelerationStructure'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  else {
    pFVar2 = (FD3D12Buffer *)(this->AccelerationStructureBuffers + uVar23);
    pIVar20 = (ID3D12Device4 *)
              (ulonglong)(uint)(this->AccelerationStructureBuffers[uVar23].Reference)->_padding_;
    if (pIVar20 != (ID3D12Device4 *)0x0) {
      FVar14 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
      if (StatPtr_STAT_D3D12RayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
        pFVar13 = ::FName::FName(&local_68,"STAT_D3D12RayTracingUsedVideoMemory");
        pcVar27 = "STATCAT_Advanced";
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar13,
                            L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                            "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar3 = *(FName *)FVar14;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_bc = FVar3.Number & 0xffffbfff | 0xb000;
        local_108 = FVar3;
        local_f0._40_8_ = pIVar20;
        local_c0 = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar15,(FStatMessage *)(local_f0 + 0x28));
        FStatsTrace::Add(&local_108,-(longlong)pIVar20);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21._0_4_ = *(uint *)(pFVar2->_padding_ + 0xd8);
    if (auVar21 != (uchar  [8])0x0) {
      FVar17 = StatPtr_STAT_D3D12RayTracingBLASMemory;
      if (StatPtr_STAT_D3D12RayTracingBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)0x0) {
        pFVar13 = ::FName::FName(&local_60,"STAT_D3D12RayTracingBLASMemory");
        pcVar27 = "STATCAT_Advanced";
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBLASMemory,
                            *pFVar13,L"Total BL AS Memory","STATGROUP_D3D12RayTracing",
                            "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar3 = *(FName *)FVar17;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_b8.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_100 = FVar3;
        local_b8.StatData.Pad = auVar21;
        local_b8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar15,&local_b8);
        FStatsTrace::Add(&local_100,-(longlong)auVar21);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22._0_4_ = *(uint *)(pFVar2->_padding_ + 0xd8);
    if (auVar22 != (uchar  [8])0x0) {
      FVar18 = StatPtr_STAT_D3D12RayTracingStaticBLASMemory;
      if (StatPtr_STAT_D3D12RayTracingStaticBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)0x0) {
        pFVar13 = ::FName::FName(&local_58,"STAT_D3D12RayTracingStaticBLASMemory");
        pcVar27 = "STATCAT_Advanced";
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12RayTracingStaticBLASMemory,*pFVar13,
                            L"Static BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                            L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar3 = *(FName *)FVar18;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_a8.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_f8 = FVar3;
        local_a8.StatData.Pad = auVar22;
        local_a8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar15,&local_a8);
        FStatsTrace::Add(&local_f8,-(longlong)auVar22);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    UnregisterD3D12RayTracingGeometry(this);
    lVar4 = pFVar2->_padding_;
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)(lVar4 + 0xe8) + 8))((longlong *)(lVar4 + 0xe8),local_10c);
    }
    if ((*(longlong *)&param_1->field_0x2f0 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TVar19 = CreateRayTracingBuffer
                       ((FD3D12Adapter *)local_f0,(uint)*(undefined8 *)&param_1->field_0x2f0,uVar23,
                        (ERayTracingBufferType)local_res20,
                        (FDebugName *)((ulonglong)pcVar27 & 0xffffffff00000000));
    if (pFVar2 != TVar19.Reference) {
      lVar5 = pFVar2->_padding_;
      pFVar2->_padding_ = (TVar19.Reference)->_padding_;
      (TVar19.Reference)->_padding_ = 0;
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0xe8) + 0x10))();
      }
    }
    if (local_f0._0_8_ != 0) {
      (**(code **)(*(longlong *)(local_f0._0_8_ + 0xe8) + 0x10))();
    }
    *(FName *)(pFVar2->_padding_ + 0x10) = this->OwnerName;
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    auVar24._0_4_ = *(uint *)(pFVar2->_padding_ + 0xd8);
    if (auVar24 != (uchar  [8])0x0) {
      FVar14 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
      if (StatPtr_STAT_D3D12RayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
        pFVar13 = ::FName::FName(&local_50,"STAT_D3D12RayTracingUsedVideoMemory");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar13,
                            L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                            "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      pIVar6 = *(ID3D12Device **)FVar14;
      if (((pIVar6 != (ID3D12Device *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_98.NameAndInfo.Number = (uint)((ulonglong)pIVar6 >> 0x20) & 0xffffafff | 0xa000;
        local_f0._8_8_ = pIVar6;
        local_98.StatData.Pad = auVar24;
        local_98.NameAndInfo.Index.Value = (uint)pIVar6;
        FThreadStats::AddStatMessage(pFVar15,&local_98);
        FStatsTrace::Add((FName *)(local_f0 + 8),(long64)auVar24);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    auVar25[4] = '\0';
    auVar25[5] = '\0';
    auVar25[6] = '\0';
    auVar25[7] = '\0';
    auVar25._0_4_ = *(uint *)(pFVar2->_padding_ + 0xd8);
    if (auVar25 != (uchar  [8])0x0) {
      FVar17 = StatPtr_STAT_D3D12RayTracingBLASMemory;
      if (StatPtr_STAT_D3D12RayTracingBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)0x0) {
        pFVar13 = ::FName::FName(&local_48,"STAT_D3D12RayTracingBLASMemory");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBLASMemory,
                            *pFVar13,L"Total BL AS Memory","STATGROUP_D3D12RayTracing",
                            "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      pIVar7 = *(ID3D12Device1 **)FVar17;
      if (((pIVar7 != (ID3D12Device1 *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_88.NameAndInfo.Number = (uint)((ulonglong)pIVar7 >> 0x20) & 0xffffafff | 0xa000;
        local_f0._16_8_ = pIVar7;
        local_88.StatData.Pad = auVar25;
        local_88.NameAndInfo.Index.Value = (uint)pIVar7;
        FThreadStats::AddStatMessage(pFVar15,&local_88);
        FStatsTrace::Add((FName *)(local_f0 + 0x10),(long64)auVar25);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    auVar26[4] = '\0';
    auVar26[5] = '\0';
    auVar26[6] = '\0';
    auVar26[7] = '\0';
    auVar26._0_4_ = *(uint *)(pFVar2->_padding_ + 0xd8);
    if (auVar26 != (uchar  [8])0x0) {
      FVar18 = StatPtr_STAT_D3D12RayTracingStaticBLASMemory;
      if (StatPtr_STAT_D3D12RayTracingStaticBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)0x0) {
        pFVar13 = ::FName::FName(&local_40,"STAT_D3D12RayTracingStaticBLASMemory");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12RayTracingStaticBLASMemory,*pFVar13,
                            L"Static BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                            L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      pIVar8 = *(ID3D12Device2 **)FVar18;
      if (((pIVar8 != (ID3D12Device2 *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_78.NameAndInfo.Number = (uint)((ulonglong)pIVar8 >> 0x20) & 0xffffafff | 0xa000;
        local_f0._24_8_ = pIVar8;
        local_78.StatData.Pad = auVar26;
        local_78.NameAndInfo.Index.Value = (uint)pIVar8;
        FThreadStats::AddStatMessage(pFVar15,&local_78);
        FStatsTrace::Add((FName *)(local_f0 + 0x18),(long64)auVar26);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    pFVar9 = *(FD3D12Resource **)(lVar4 + 0x140);
    if ((pFVar9 == (FD3D12Resource *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                            ,0x1a5,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar9);
    pFVar9 = *(FD3D12Resource **)(pFVar2->_padding_ + 0x140);
    if ((pFVar9 == (FD3D12Resource *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                            ,0x1a5,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar9);
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    plVar10 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x48);
    piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar10 + 0x250))
              (plVar10,*(undefined8 *)(pFVar2->_padding_ + 0x188),*(undefined8 *)(lVar4 + 0x188),1);
    this->AccelerationStructureCompactedSize = local_res20;
    RegisterD3D12RayTracingGeometry(this);
    (**(code **)(*(longlong *)(lVar4 + 0xe8) + 0x10))(lVar4 + 0xe8);
  }
  FMemScope::~FMemScope((FMemScope *)(local_f0 + 0x20));
  FLLMScope::~FLLMScope(&local_110);
  return;
}

// CreateAccelerationStructureBuildDesc @ 145a09e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::CreateAccelerationStructureBuildDesc
          (FD3D12RayTracingGeometry *this,FD3D12CommandContext *param_1,
          EAccelerationStructureBuildMode param_2,ulong64 param_3,
          D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *param_4,
          TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  EAccelerationStructureBuildMode EVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  int local_118;
  int local_114;
  ERayTracingAccelerationStructureFlags local_110;
  uint local_10c;
  EAccelerationStructureBuildMode local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *local_e8;
  longlong local_e0;
  longlong local_d8;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS_u_16 *local_d0;
  FD3D12CommandContext *local_c8;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS local_c0;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  ulong64 local_98;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *local_90;
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_90 = param_4;
  local_d0 = (D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS_u_16 *)param_5;
  local_108 = param_2;
  local_c8 = param_1;
  local_98 = param_3;
  if ((((this->_padding_ != 0) && (iVar2 = *(int *)(this->_padding_ + 0xdc), iVar2 != 2)) &&
      (iVar2 != 4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.IndexBuffer->GetStride() == 2 || Initializer.IndexBuffer->GetStride() == 4"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x101c,L"Index buffer must be 16 or 32 bit."), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8 = 0;
  bVar10 = *(int *)&param_1->field_0x2f8 != 0;
  if (bVar10) {
    for (; (*(uint *)&param_1->field_0x2f8 >> local_a8 & 1) == 0; local_a8 = local_a8 + 1) {
    }
  }
  uVar17 = 0x20;
  if (bVar10) {
    uVar17 = local_a8;
  }
  uVar20 = 0;
  uVar19 = 0;
  if (this->_padding_ == 0) {
    local_114 = 0;
  }
  else {
    local_114 = *(int *)(this->_padding_ + 0xdc);
  }
  local_10c = uVar17;
  if ((param_5->ArrayNum != (this->GeometryDescs).ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutGeometryDescs.Num() == GeometryDescs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1024,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar10 = BuffersValid(this,uVar17);
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuffersValid(GPUIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1025,
                          L"Index & vertex buffers should be valid (not streamed out) when building the acceleration structure"
                         ), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = *(uint *)&param_1->field_0x2f8;
  local_a4 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> local_a4 & 1) == 0; local_a4 = local_a4 + 1) {
    }
  }
  if (this->_padding_ == 0) {
    local_100 = 0;
  }
  else {
    uVar12 = 0x20;
    if (uVar14 != 0) {
      uVar12 = (ulonglong)local_a4;
    }
    local_100 = *(longlong *)(this->_padding_ + 0x1b0 + uVar12 * 8);
  }
  local_a0 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> local_a0 & 1) == 0; local_a0 = local_a0 + 1) {
    }
  }
  local_e8 = this->HitGroupSystemParameters + uVar17;
  if ((local_e8->ArrayNum != (int)this->_padding_) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("HitGroupSystemParametersForThisGPU.Num() == Initializer.Segments.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x102b,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_110 = GetRayTracingAccelerationStructureBuildFlags
                        ((FRayTracingGeometryInitializer *)&this->_padding_);
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar2 == 0) {
LAB_145a0a026:
    local_118 = 0;
  }
  else {
    if (iVar2 != 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1c0,L"Unexpected ray tracing geometry type");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_145a0a026;
    }
    local_118 = 1;
  }
  if (0 < (int)this->_padding_) {
    local_e0 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_d8 = 0;
    uVar12 = uVar20;
    do {
      lVar9 = local_d8;
      lVar8 = local_e0;
      uVar18 = (uint)uVar12;
      uVar14 = ~uVar18 >> 0x1f;
      uVar17 = uVar19;
      if ((int)uVar18 < *(int *)((longlong)param_5 + 8)) {
        uVar17 = uVar14;
      }
      if (uVar17 == 0) {
        local_128 = (longlong)(int)uVar18;
        local_120 = (longlong)*(int *)((longlong)param_5 + 8);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar2 = (this->GeometryDescs).ArrayNum;
      puVar16 = (undefined8 *)((longlong)&param_5->DataPtr->Type + lVar9);
      uVar17 = uVar19;
      if ((int)uVar18 < iVar2) {
        uVar17 = uVar14;
      }
      if ((uVar17 == 0) &&
         (local_128 = lVar8, local_120 = (longlong)iVar2,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->GeometryDescs).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)&this->GeometryDescs;
      if (FVar3 != (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
        FVar13 = FVar3;
      }
      uVar6 = ((undefined8 *)(lVar9 + (longlong)FVar13))[1];
      *puVar16 = *(undefined8 *)(lVar9 + (longlong)FVar13);
      puVar16[1] = uVar6;
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)FVar13);
      uVar6 = puVar1[1];
      puVar16[2] = *puVar1;
      puVar16[3] = uVar6;
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)FVar13);
      uVar6 = puVar1[1];
      puVar16[4] = *puVar1;
      puVar16[5] = uVar6;
      puVar16[6] = *(undefined8 *)(lVar9 + 0x30 + (longlong)FVar13);
      iVar2 = (int)this->_padding_;
      uVar17 = uVar19;
      if ((int)uVar18 < iVar2) {
        uVar17 = uVar14;
      }
      if (uVar17 == 0) {
        local_128 = (longlong)(int)uVar18;
        local_120 = (longlong)iVar2;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar15 = (longlong *)(local_f8 + this->_padding_);
      uVar17 = 0;
      if ((int)uVar18 < local_e8->ArrayNum) {
        uVar17 = uVar14;
      }
      if ((uVar17 == 0) &&
         (local_128 = lVar8, local_120 = (longlong)local_e8->ArrayNum,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar8 = local_f0;
      pFVar4 = (local_e8->AllocatorInstance).Data;
      local_9c = 0;
      bVar10 = *(int *)&local_c8->field_0x2f8 != 0;
      if (bVar10) {
        for (; (*(uint *)&local_c8->field_0x2f8 >> local_9c & 1) == 0; local_9c = local_9c + 1) {
        }
      }
      uVar12 = uVar20;
      if (*plVar15 != 0) {
        uVar12 = 0x20;
        if (bVar10) {
          uVar12 = (ulonglong)local_9c;
        }
        uVar12 = *(ulonglong *)(*plVar15 + 0x1b0 + uVar12 * 8);
      }
      if (local_118 == 0) {
        iVar2 = (int)plVar15[1];
        if (iVar2 == 2) {
          if ((*(int *)((longlong)puVar16 + 0x14) != 0x10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.VertexFormat == DXGI_FORMAT_R32G32_FLOAT",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1046,L""), bVar10)) goto code_r0x000145a0a347;
        }
        else if ((iVar2 == 3) || (iVar2 == 4)) {
          if ((*(int *)((longlong)puVar16 + 0x14) != 6) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.VertexFormat == DXGI_FORMAT_R32G32B32_FLOAT",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1043,L""), bVar10)) goto code_r0x000145a0a347;
        }
        else if (iVar2 == 0xc) {
          if ((*(int *)((longlong)puVar16 + 0x14) != 0x22) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.VertexFormat == DXGI_FORMAT_R16G16_FLOAT",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1049,L""), bVar10)) goto code_r0x000145a0a347;
        }
        else {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x104c,L"");
          if (bVar10) {
code_r0x000145a0a347:
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (*(char *)((longlong)plVar15 + 0x22) == '\0') {
          *(undefined4 *)(puVar16 + 3) = 0;
        }
        if ((puVar16[1] != 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Desc.Triangles.Transform3x4 == D3D12_GPU_VIRTUAL_ADDRESS(0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x1055,L"BLAS geometry transforms are not supported!"), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_100 == 0) {
          if (((int)this->_padding_ != 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Initializer.Segments.Num() == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1061,
                                  L"Non-indexed geometry with multiple segments is not implemented."
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(int *)(puVar16 + 2) != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.IndexFormat == DXGI_FORMAT_UNKNOWN",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1062,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(int *)(puVar16 + 3) != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.IndexCount == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1063,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((puVar16[4] != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.IndexBuffer == D3D12_GPU_VIRTUAL_ADDRESS(0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1064,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if (((uint)(*(int *)((longlong)plVar15 + 0x1c) * 3) < *(uint *)(puVar16 + 3)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Triangles.IndexCount <= Segment.NumPrimitives * FD3D12RayTracingGeometry::IndicesPerPrimitive"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1059,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = 0x39;
          if (local_114 == 4) {
            uVar11 = 0x2a;
          }
          *(undefined4 *)(puVar16 + 2) = uVar11;
          puVar16[4] = (ulonglong)*(uint *)(pFVar4 + lVar8 + 4) + *(longlong *)(local_100 + 0x188);
        }
        puVar16[5] = (ulonglong)*(uint *)((longlong)plVar15 + 0xc) + *(longlong *)(uVar12 + 0x188);
        puVar16[6] = (ulonglong)*(uint *)(plVar15 + 2);
LAB_145a0a4ad:
        if ((((int)plVar15[1] != 3) && ((int)plVar15[1] != 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Segment.VertexBufferElementType == VET_Float3 || Segment.VertexBufferElementType == VET_Float4"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x1079,
                                L"Only VET_Float3 and Float4 are currently implemented and tested. Other formats will be supported in the future."
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (local_118 == 1) {
        puVar16[1] = (ulonglong)*(uint *)((longlong)plVar15 + 0x1c);
        puVar16[2] = (ulonglong)*(uint *)((longlong)plVar15 + 0xc) + *(longlong *)(uVar12 + 0x188);
        puVar16[3] = (ulonglong)*(uint *)(plVar15 + 2);
      }
      else {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1072,L"Unexpected ray tracing geometry type");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_118 == 0) goto LAB_145a0a4ad;
      }
      uVar12 = (ulonglong)(uVar18 + 1);
      local_e0 = local_e0 + 1;
      local_f8 = local_f8 + 0x28;
      local_d8 = local_d8 + 0x38;
      local_f0 = local_f0 + 0x20;
      param_1 = local_c8;
      param_5 = (TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *)local_d0;
      uVar17 = local_10c;
    } while ((int)(uVar18 + 1) < (int)this->_padding_);
  }
  local_c0.Flags = TranslateRayTracingAccelerationStructureFlags(local_110);
  EVar7 = local_108;
  if (local_108 == Update) {
    if (((local_110 & AllowUpdate) == None) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAllFlags(BuildFlags, ERayTracingAccelerationStructureFlags::AllowUpdate)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1082,
                            L"Acceleration structure must be created with FRayTracingGeometryInitializer::bAllowUpdate=true to perform refit / update."
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c0.Flags =
         local_c0.Flags | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PERFORM_UPDATE;
  }
  local_c0.NumDescs = *(uint *)((longlong)param_5 + 8);
  local_c0.field4_0x10 =
       (D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS_u_16)
       *(D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS_u_16 *)param_5;
  local_c0.Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL;
  local_c0.DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  local_58.ResultDataMaxSizeInBytes = 0;
  local_58.ScratchDataSizeInBytes = 0;
  local_58.UpdateScratchDataSizeInBytes = 0;
  if ((*(longlong *)&param_1->field_0x300 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FD3D12Device::GetRaytracingAccelerationStructurePrebuildInfo
            (*(FD3D12Device **)&param_1->field_0x300,&local_c0,&local_58);
  if (((ulonglong)this->_padding_ < local_58.ResultDataMaxSizeInBytes) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrebuildInfo.ResultDataMaxSizeInBytes <= SizeInfo.ResultSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1094,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (EVar7 == Update) {
    if (((ulonglong)this->_padding_ < local_58.UpdateScratchDataSizeInBytes) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrebuildInfo.UpdateScratchDataSizeInBytes <= SizeInfo.UpdateScratchSize"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1098,L""), bVar10)) {
code_r0x000145a0a674:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (((ulonglong)this->_padding_ < local_58.ScratchDataSizeInBytes) &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrebuildInfo.ScratchDataSizeInBytes <= SizeInfo.BuildScratchSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                               ,0x109c,L""), bVar10)) goto code_r0x000145a0a674;
  uVar12 = (this->AccelerationStructureBuffers[uVar17].Reference)->_padding_;
  if (EVar7 == Update) {
    uVar20 = uVar12;
  }
  local_90->DestAccelerationStructureData = uVar12;
  (local_90->Inputs).Type = local_c0.Type;
  (local_90->Inputs).Flags = local_c0.Flags;
  (local_90->Inputs).NumDescs = local_c0.NumDescs;
  (local_90->Inputs).DescsLayout = local_c0.DescsLayout;
  *(int *)&(local_90->Inputs).field4_0x10 = (int)local_c0.field4_0x10.InstanceDescs;
  *(int *)((longlong)&(local_90->Inputs).field4_0x10 + 4) =
       (int)((ulonglong)local_c0.field4_0x10 >> 0x20);
  local_90->SourceAccelerationStructureData = uVar20;
  local_90->ScratchAccelerationStructureData = local_98;
  return;
}

// GetAccelerationStructureAddress @ 145a17c00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

ulong64 __thiscall
FD3D12RayTracingGeometry::GetAccelerationStructureAddress
          (FD3D12RayTracingGeometry *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  FString local_18;
  
  if (this->AccelerationStructureBuffers[param_1].Reference == (FD3D12Buffer *)0x0) {
    FDebugName::ToString(&this->DebugName,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccelerationStructureBuffers[GPUIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.h"
                       ,0x89,
                       L"Trying to get address of acceleration structure \'%s\' without allocated memory."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (this->AccelerationStructureBuffers[param_1].Reference)->_padding_;
}

// RegisterAsRenameListener @ 145a285c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::RegisterAsRenameListener(FD3D12RayTracingGeometry *this,uint param_1)

{
  longlong *plVar1;
  ForElementType<FD3D12Buffer_*> FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FD3D12Buffer_*> FVar9;
  ForElementType<FD3D12Buffer_*> FVar10;
  FD3D12ShaderResourceRenameListener *pFVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStackY_b8 [32];
  undefined1 local_68 [8];
  longlong local_60;
  ForElementType<FD3D12Buffer_*> local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar12 = (ulonglong)param_1;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = this->_padding_;
  if ((GNumExplicitGPUsForRendering == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUIndex < GNumExplicitGPUsForRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0x103,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)(*(longlong *)(lVar5 + 0x800) + 0x750) < 1) {
    if ((this->bRegisteredAsRenameListener[uVar12] != false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bRegisteredAsRenameListener[InGPUIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0xf73,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->_padding_ != 0) &&
       (lVar5 = *(longlong *)(this->_padding_ + 0x1b0 + uVar12 * 8), lVar5 != 0)) {
      pFVar11 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
      if (this == (FD3D12RayTracingGeometry *)0x0) {
        pFVar11 = (FD3D12ShaderResourceRenameListener *)0x0;
      }
      FD3D12BaseShaderResource::AddRenameListener
                ((FD3D12BaseShaderResource *)(lVar5 + 0xe8),pFVar11);
    }
    uVar3 = (uint)this->_padding_;
    local_58.SecondaryData = (ForElementType<FD3D12Buffer_*>)0x0;
    local_48 = 0;
    local_44 = 1;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (1 < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_>
                (8,8,uVar3,&local_58,0,&local_44);
    }
    iVar4 = (int)this->_padding_;
    plVar13 = (longlong *)this->_padding_;
    plVar1 = plVar13 + (longlong)iVar4 * 5;
    FVar10 = local_58.SecondaryData;
    while( true ) {
      if ((int)this->_padding_ != iVar4) {
        local_68[0] = 0;
        `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_68);
        FVar10 = local_58.SecondaryData;
      }
      if (plVar13 == plVar1) break;
      if (*plVar13 == 0) {
        local_60 = 0;
LAB_145a288b5:
        plVar13 = plVar13 + 5;
      }
      else {
        local_60 = *(longlong *)(*plVar13 + 0x1b0 + uVar12 * 8);
        if (local_60 == 0) goto LAB_145a288b5;
        FVar9 = (ForElementType<FD3D12Buffer_*>)&local_58;
        if (FVar10 != (ForElementType<FD3D12Buffer_*>)0x0) {
          FVar9 = FVar10;
        }
        FVar2 = (ForElementType<FD3D12Buffer_*>)((longlong)FVar9 + (longlong)local_48 * 8);
        for (; FVar9 != FVar2; FVar9 = (ForElementType<FD3D12Buffer_*>)((longlong)FVar9 + 8)) {
          if (*(longlong *)FVar9 == local_60) goto LAB_145a288b5;
        }
        pFVar11 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
        if (this == (FD3D12RayTracingGeometry *)0x0) {
          pFVar11 = (FD3D12ShaderResourceRenameListener *)0x0;
        }
        FD3D12BaseShaderResource::AddRenameListener
                  ((FD3D12BaseShaderResource *)(local_60 + 0xe8),pFVar11);
        FVar10 = (ForElementType<FD3D12Buffer_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FD3D12Buffer_*>)0x0) {
          FVar10 = local_58.SecondaryData;
        }
        if ((ulonglong)FVar10 <= &local_60) {
          FVar10 = (ForElementType<FD3D12Buffer_*>)&local_58;
          if (local_58.SecondaryData != (ForElementType<FD3D12Buffer_*>)0x0) {
            FVar10 = local_58.SecondaryData;
          }
          if ((&local_60 < (longlong *)((longlong)FVar10 + (longlong)local_44 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = local_48;
        if (local_48 == local_44) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_>
                            (0x808,&local_58,&local_44);
        }
        local_48 = iVar8 + 1;
        FVar10 = (ForElementType<FD3D12Buffer_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FD3D12Buffer_*>)0x0) {
          FVar10 = local_58.SecondaryData;
        }
        plVar13 = plVar13 + 5;
        *(longlong *)((longlong)FVar10 + (longlong)iVar8 * 8) = local_60;
        FVar10 = local_58.SecondaryData;
      }
    }
    this->bRegisteredAsRenameListener[uVar12] = true;
    if (FVar10 != (ForElementType<FD3D12Buffer_*>)0x0) {
      FMemory::Free((void *)FVar10);
    }
  }
  return;
}

// ReleaseUnderlyingResource @ 145a2be90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall FD3D12RayTracingGeometry::ReleaseUnderlyingResource(FD3D12RayTracingGeometry *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  FD3D12Buffer *pFVar4;
  FName FVar5;
  FRHIResource *this_00;
  code *pcVar6;
  bool *pbVar7;
  bool bVar8;
  uint uVar9;
  FD3D12RayTracingGeometryTracker *this_01;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory> FVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory> FVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory> FVar16;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS> FVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS> FVar18;
  bool *pbVar19;
  int *piVar20;
  FNameEntryId FVar21;
  ulong64 uVar22;
  uchar auVar23 [8];
  uchar auVar24 [8];
  TRefCountPtr<FD3D12Buffer> *pTVar25;
  TRefCountPtr<FD3D12Buffer> *pTVar26;
  longlong lVar27;
  uchar auVar28 [8];
  uchar auVar29 [8];
  undefined1 auStackY_1f8 [32];
  undefined8 local_198;
  FSharedReferencer<1> FStack_190;
  FName local_188;
  FName local_180;
  uint local_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  bool *local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FStatMessage local_140;
  FStatMessage local_130;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8 [2];
  FRHIResource *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  FRayTracingGeometrySegment *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong local_58;
  FDebugName local_50;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_01 = GetD3D12RayTracingGeometryTracker();
  uVar22 = this->AccelerationStructureCompactedSize;
  if (uVar22 == 0) {
    uVar22 = this->_padding_;
  }
  lpCriticalSection = &this_01->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<FD3D12RayTracingGeometry_*,DefaultKeyFuncs<FD3D12RayTracingGeometry_*,0>,FDefaultSetAllocator>
  ::Remove(&this_01->Geometries,this);
  this_01->TotalBLASSize = this_01->TotalBLASSize - uVar22;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar26 = this->AccelerationStructureBuffers;
  lVar27 = 8;
  pbVar19 = this->bHasPendingCompactionRequests;
  pTVar25 = pTVar26;
  do {
    if (*pbVar19 != false) {
      if ((pTVar25->Reference == (FD3D12Buffer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AccelerationStructureBuffers[GPUIndex]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0xee3,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = pTVar25->Reference;
      if ((pFVar4->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar8 = FD3D12RayTracingCompactionRequestHandler::ReleaseRequest
                        (*(FD3D12RayTracingCompactionRequestHandler **)(pFVar4->_padding_ + 0x1608),
                         this);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("bRequestFound",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0xee3,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *pbVar19 = false;
    }
    pTVar25 = pTVar25 + 1;
    pbVar19 = pbVar19 + 1;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198) {
    this->HitGroupSystemIndexBufferSRV[0].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[0].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[0].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[0].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[0].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,0);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 1 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[1].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[1].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[1].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[1].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[1].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[1].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[1].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,1);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 2 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[2].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[2].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[2].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[2].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[2].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[2].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[2].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,2);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 3 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[3].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[3].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[3].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[3].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[3].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[3].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[3].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,3);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 4 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[4].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[4].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[4].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[4].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[4].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[4].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[4].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,4);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 5 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[5].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[5].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[5].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[5].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[5].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[5].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[5].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,5);
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 6 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[6].Object = (FD3D12ShaderResourceView *)0x0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[6].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[6].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[6].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[6].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[6].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[6].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,6);
  local_198 = 0;
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->HitGroupSystemIndexBufferSRV + 7 != (TSharedPtr<FD3D12ShaderResourceView,1> *)&local_198
     ) {
    this->HitGroupSystemIndexBufferSRV[7].Object = (FD3D12ShaderResourceView *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->HitGroupSystemIndexBufferSRV[7].SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)
             this->HitGroupSystemSegmentVertexBufferSRVs[7].AllocatorInstance.Data,
             this->HitGroupSystemSegmentVertexBufferSRVs[7].ArrayNum);
  piVar20 = &this->HitGroupSystemSegmentVertexBufferSRVs[7].ArrayMax;
  this->HitGroupSystemSegmentVertexBufferSRVs[7].ArrayNum = 0;
  if (*piVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&this->HitGroupSystemSegmentVertexBufferSRVs[7].AllocatorInstance,0,piVar20)
    ;
  }
  UnregisterAsRenameListener(this,7);
  local_168 = this->bRegisteredAsRenameListener;
  FVar17 = StatPtr_STAT_D3D12RayTracingTrianglesBLAS;
  FVar11 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
  do {
    StatPtr_STAT_D3D12RayTracingTrianglesBLAS = FVar17;
    StatPtr_STAT_D3D12RayTracingUsedVideoMemory = FVar11;
    if (pTVar26 == (TRefCountPtr<FD3D12Buffer> *)this->bRegisteredAsRenameListener) {
      pTVar26 = this->AccelerationStructureBuffers;
      pbVar19 = local_168;
      if ((char)this->_padding_ != '\x02') {
        uVar9 = (uint)this->_padding_;
        auVar24[4] = '\0';
        auVar24[5] = '\0';
        auVar24[6] = '\0';
        auVar24[7] = '\0';
        auVar24[0] = (char)uVar9;
        auVar24[1] = (char)(uVar9 >> 8);
        auVar24[2] = (char)(uVar9 >> 0x10);
        auVar24[3] = (char)(uVar9 >> 0x18);
        if (auVar24 != (uchar  [8])0x0) {
          if (FVar17 == (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS>)0x0) {
            pFVar10 = ::FName::FName(&local_c0,"STAT_D3D12RayTracingTrianglesBLAS");
            FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_D3D12RayTracingTrianglesBLAS,*pFVar10,
                                L"Triangles in all BL acceleration structures",
                                "STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                                L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid
                               );
          }
          FVar5 = *(FName *)FVar17;
          local_188 = FVar5;
          if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar12 == (FThreadStats *)0x0) {
              pFVar13 = FThreadStatsPool::Get();
              pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
            }
            local_100.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
            local_188 = FVar5;
            local_100.StatData.Pad = auVar24;
            local_100.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar12,&local_100);
            FStatsTrace::Add(&local_188,-(longlong)auVar24);
            if (pFVar12->ScopeCount == 0) {
              FThreadStats::Flush(pFVar12,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar12,false,false);
            }
          }
        }
        FVar18 = StatPtr_STAT_D3D12RayTracingAllocatedBLAS;
        if (StatPtr_STAT_D3D12RayTracingAllocatedBLAS ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS>)0x0) {
          pFVar10 = ::FName::FName(local_b8,"STAT_D3D12RayTracingAllocatedBLAS");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12RayTracingAllocatedBLAS,*pFVar10,
                              L"Allocated bottom level acceleration structures",
                              "STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                              L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar18;
        local_188 = FVar5;
        pbVar19 = local_168;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_f0.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
          local_f0.StatData.Pad[0] = '\x01';
          local_f0.StatData.Pad[1] = '\0';
          local_f0.StatData.Pad[2] = '\0';
          local_f0.StatData.Pad[3] = '\0';
          local_f0.StatData.Pad[4] = '\0';
          local_f0.StatData.Pad[5] = '\0';
          local_f0.StatData.Pad[6] = '\0';
          local_f0.StatData.Pad[7] = '\0';
          local_180 = FVar5;
          local_f0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar12,&local_f0);
          FStatsTrace::Add(&local_180,-1);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
            pbVar19 = local_168;
          }
          else {
            pbVar19 = local_168;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar12,false,false);
              pbVar19 = local_168;
            }
          }
        }
      }
      for (; pbVar7 = local_168, pTVar26 != (TRefCountPtr<FD3D12Buffer> *)local_168;
          pTVar26 = pTVar26 + 1) {
        pFVar4 = pTVar26->Reference;
        local_168 = pbVar19;
        if (pFVar4 != (FD3D12Buffer *)0x0) {
          pTVar26->Reference = (FD3D12Buffer *)0x0;
          (**(code **)(pFVar4->_padding_ + 0x10))();
        }
        pbVar19 = local_168;
        local_168 = pbVar7;
      }
      local_a8 = (FRHIResource *)0x0;
      local_a0 = 0;
      local_98 = 0;
      local_94 = 0x10000;
      local_90 = 0;
      local_88 = (FRayTracingGeometrySegment *)0x0;
      local_80 = 0;
      local_78 = 0;
      local_70 = -1;
      lStack_68 = -1;
      local_60 = -1;
      local_58 = 0;
      local_168 = pbVar19;
      FDebugName::FDebugName(&local_50);
      plVar2 = &this->_padding_;
      local_44 = 0;
      if ((FRHIResource **)plVar2 != &local_a8) {
        this_00 = (FRHIResource *)*plVar2;
        *plVar2 = (longlong)local_a8;
        local_a8 = (FRHIResource *)0x0;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_00);
        }
      }
      plVar2 = &this->_padding_;
      *(undefined4 *)&this->_padding_ = (undefined4)local_a0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = local_a0._4_4_;
      *(undefined4 *)&this->_padding_ = local_98;
      *(undefined1 *)((longlong)&this->_padding_ + 4) = (undefined1)local_94;
      *(undefined1 *)((longlong)&this->_padding_ + 5) = local_94._1_1_;
      *(undefined1 *)((longlong)&this->_padding_ + 6) = local_94._2_1_;
      *(undefined1 *)((longlong)&this->_padding_ + 7) = local_94._3_1_;
      *(undefined1 *)&this->_padding_ = local_90;
      if ((FRayTracingGeometrySegment **)plVar2 == &local_88) {
      }
      else {
        DestructItems<FRayTracingGeometrySegment,int>
                  ((FRayTracingGeometrySegment *)*plVar2,(int)this->_padding_);
        if ((void *)*plVar2 != (void *)0x0) {
          FMemory::Free((void *)*plVar2);
        }
        *plVar2 = (longlong)local_88;
        *(int *)&this->_padding_ = (int)local_80;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_80._4_4_;
        local_88 = (FRayTracingGeometrySegment *)0x0;
        local_80._0_4_ = 0;
        local_80 = 0;
      }
      this->_padding_ = local_78;
      this->_padding_ = local_70;
      this->_padding_ = lStack_68;
      this->_padding_ = local_58;
      this->_padding_ = (longlong)local_50.Name;
      *(uint *)&this->_padding_ = local_50.Number;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = local_44;
      this->_padding_ = local_60;
      DestructItems<FRayTracingGeometrySegment,int>(local_88,(int)local_80);
      if (local_88 != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_a8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_a8);
      }
      this->AccelerationStructureCompactedSize = 0;
      iVar3 = (this->GeometryDescs).ArrayMax;
      piVar20 = &(this->GeometryDescs).ArrayMax;
      (this->GeometryDescs).ArrayNum = 0;
      if (iVar3 == 0) {
        *piVar20 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
                  (0x38,8,0,iVar3,&(this->GeometryDescs).AllocatorInstance,0,piVar20);
      }
      if (this->HitGroupSystemParameters !=
          (TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *)
          this->HitGroupSystemIndexBufferSRV) {
        piVar20 = &this->HitGroupSystemParameters[0].ArrayMax;
        do {
          piVar20[-1] = 0;
          if (*piVar20 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)(piVar20 + -3),0,piVar20);
          }
          puVar1 = (undefined1 *)(piVar20 + 1);
          piVar20 = piVar20 + 4;
        } while ((TSharedPtr<FD3D12ShaderResourceView,1> *)puVar1 !=
                 this->HitGroupSystemIndexBufferSRV);
      }
      return;
    }
    if (pTVar26->Reference != (FD3D12Buffer *)0x0) {
      uVar9 = (uint)pTVar26->Reference->_padding_;
      auVar28[4] = '\0';
      auVar28[5] = '\0';
      auVar28[6] = '\0';
      auVar28[7] = '\0';
      auVar28[0] = (char)uVar9;
      auVar28[1] = (char)(uVar9 >> 8);
      auVar28[2] = (char)(uVar9 >> 0x10);
      auVar28[3] = (char)(uVar9 >> 0x18);
      if (auVar28 != (uchar  [8])0x0) {
        if (FVar11 == (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
          pFVar10 = ::FName::FName(&local_e0,"STAT_D3D12RayTracingUsedVideoMemory");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar10,
                              L"Total Used Video Memory","STATGROUP_D3D12RayTracing",
                              "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                              false,MCR_Physical);
        }
        FVar5 = *(FName *)FVar11;
        FVar21 = FVar5.ComparisonIndex.Value;
        uVar9 = FVar5.Number;
        local_178 = FVar21.Value;
        uStack_174 = uVar9;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_140.NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
          local_160 = FVar5;
          local_140.StatData.Pad = auVar28;
          local_140.NameAndInfo.Index.Value = FVar21.Value;
          FThreadStats::AddStatMessage(pFVar12,&local_140);
          FStatsTrace::Add(&local_160,-(longlong)auVar28);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
      uVar9 = (uint)pTVar26->Reference->_padding_;
      auVar29[4] = '\0';
      auVar29[5] = '\0';
      auVar29[6] = '\0';
      auVar29[7] = '\0';
      auVar29[0] = (char)uVar9;
      auVar29[1] = (char)(uVar9 >> 8);
      auVar29[2] = (char)(uVar9 >> 0x10);
      auVar29[3] = (char)(uVar9 >> 0x18);
      if (auVar29 != (uchar  [8])0x0) {
        FVar14 = StatPtr_STAT_D3D12RayTracingBLASMemory;
        if (StatPtr_STAT_D3D12RayTracingBLASMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)0x0) {
          pFVar10 = ::FName::FName(&local_d8,"STAT_D3D12RayTracingBLASMemory");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBLASMemory,
                              *pFVar10,L"Total BL AS Memory","STATGROUP_D3D12RayTracing",
                              "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                              false,MCR_Physical);
        }
        FVar5 = *(FName *)FVar14;
        FVar21 = FVar5.ComparisonIndex.Value;
        uVar9 = FVar5.Number;
        local_170 = FVar21.Value;
        uStack_16c = uVar9;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_130.NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
          local_158 = FVar5;
          local_130.StatData.Pad = auVar29;
          local_130.NameAndInfo.Index.Value = FVar21.Value;
          FThreadStats::AddStatMessage(pFVar12,&local_130);
          FStatsTrace::Add(&local_158,-(longlong)auVar29);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
      uVar9 = (uint)pTVar26->Reference->_padding_;
      auVar23[4] = '\0';
      auVar23[5] = '\0';
      auVar23[6] = '\0';
      auVar23[7] = '\0';
      auVar23[0] = (char)uVar9;
      auVar23[1] = (char)(uVar9 >> 8);
      auVar23[2] = (char)(uVar9 >> 0x10);
      auVar23[3] = (char)(uVar9 >> 0x18);
      if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
        if (auVar23 != (uchar  [8])0x0) {
          FVar16 = StatPtr_STAT_D3D12RayTracingStaticBLASMemory;
          if (StatPtr_STAT_D3D12RayTracingStaticBLASMemory ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)0x0) {
            pFVar10 = ::FName::FName(&local_c8,"STAT_D3D12RayTracingStaticBLASMemory");
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_D3D12RayTracingStaticBLASMemory,*pFVar10,
                                L"Static BL AS Memory","STATGROUP_D3D12RayTracing",
                                "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,
                                false,false,MCR_Physical);
          }
          FVar5 = *(FName *)FVar16;
          local_188 = FVar5;
          if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar12 == (FThreadStats *)0x0) {
              pFVar13 = FThreadStatsPool::Get();
              pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
            }
            local_110.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
            local_148 = FVar5;
            local_110.StatData.Pad = auVar23;
            local_110.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar12,&local_110);
            pFVar10 = &local_148;
            goto LAB_145a2c93c;
          }
        }
      }
      else if (auVar23 != (uchar  [8])0x0) {
        FVar15 = StatPtr_STAT_D3D12RayTracingDynamicBLASMemory;
        if (StatPtr_STAT_D3D12RayTracingDynamicBLASMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory>)0x0) {
          pFVar10 = ::FName::FName(&local_d0,"STAT_D3D12RayTracingDynamicBLASMemory");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12RayTracingDynamicBLASMemory,*pFVar10,
                              L"Dynamic BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced"
                              ,L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical
                             );
        }
        FVar5 = *(FName *)FVar15;
        local_180 = FVar5;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_120.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
          local_150 = FVar5;
          local_120.StatData.Pad = auVar23;
          local_120.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar12,&local_120);
          pFVar10 = &local_150;
LAB_145a2c93c:
          FStatsTrace::Add(pFVar10,-(longlong)auVar23);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
    }
    pTVar26 = pTVar26 + 1;
    FVar17 = StatPtr_STAT_D3D12RayTracingTrianglesBLAS;
    FVar11 = StatPtr_STAT_D3D12RayTracingUsedVideoMemory;
  } while( true );
}

// RemoveUpdateListener @ 145a2dec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::RemoveUpdateListener
          (FD3D12RayTracingGeometry *this,ID3D12RayTracingGeometryUpdateListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  ID3D12RayTracingGeometryUpdateListener *pIVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ID3D12RayTracingGeometryUpdateListener *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->UpdateListenersCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->UpdateListeners).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->UpdateListeners).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = (this->UpdateListeners).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->UpdateListeners).AllocatorInstance.Data;
    bVar3 = *(ID3D12RayTracingGeometryUpdateListener **)pFVar1 != local_res10;
    lVar8 = 0;
    pIVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(ID3D12RayTracingGeometryUpdateListener **)(pFVar1 + lVar8 * 8) != pIVar5)
              );
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pIVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->UpdateListeners).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_145a2e089;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Removed == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.h"
                     ,0xd8,
                     L"Should have exactly one registered listener during remove (same listener shouldn\'t registered twice and we shouldn\'t call this if not registered"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145a2e089:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ResourceRenamed @ 145a2f510

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::ResourceRenamed
          (FD3D12RayTracingGeometry *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = this->_padding_;
  if (GNumExplicitGPUsForRendering == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUIndex < GNumExplicitGPUsForRendering",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0x103,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < *(int *)(*(longlong *)(lVar2 + 0x800) + 0x750)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreBindlessResourcesEnabledForRayTracing(GetParentAdapter())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0xfaa,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 == (FD3D12ResourceLocation *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNewResourceLocation != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0xfae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = *(uint *)(param_2->_padding_ + 8);
  bVar4 = BuffersValid((FD3D12RayTracingGeometry *)(this[-1].HitGroupSystemIndexBufferSRV + 5),uVar1
                      );
  if (bVar4) {
    SetupHitGroupSystemParameters
              ((FD3D12RayTracingGeometry *)(this[-1].HitGroupSystemIndexBufferSRV + 5),uVar1);
  }
  return;
}

// SetupHitGroupSystemParameters @ 145a32db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::SetupHitGroupSystemParameters(FD3D12RayTracingGeometry *this,uint param_1)

{
  int *piVar1;
  TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [4];
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar9 = (ulonglong)param_1;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  uVar14 = 0;
  if (iVar7 == 0) {
LAB_145a32e15:
    local_94 = 0;
  }
  else {
    if (iVar7 != 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x1c0,L"Unexpected ray tracing geometry type");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_145a32e15;
    }
    local_94 = 1;
  }
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar11 = this->_padding_;
  if ((GNumExplicitGPUsForRendering == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUIndex < GNumExplicitGPUsForRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0x103,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = (uint)this->_padding_;
  iVar7 = *(int *)(*(longlong *)(lVar11 + 0x800) + 0x750);
  pTVar2 = this->HitGroupSystemParameters + uVar9;
  local_8c = iVar7;
  local_68 = uVar9;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  iVar3 = this->HitGroupSystemParameters[uVar9].ArrayMax;
  piVar1 = &this->HitGroupSystemParameters[uVar9].ArrayMax;
  this->HitGroupSystemParameters[uVar9].ArrayNum = 0;
  if (iVar3 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar6,&pTVar2->AllocatorInstance,0,piVar1);
  }
  bVar5 = BuffersValid(this,param_1);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuffersValid(InGPUIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0xfeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < iVar7) {
    AllocateBufferSRVs(this,param_1);
  }
  if (this->_padding_ == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(this->_padding_ + 0x1b0 + uVar9 * 8);
    if (lVar11 != 0) {
      local_88 = *(uint *)(lVar11 + 0xdc);
      goto LAB_145a32f63;
    }
  }
  local_88 = 0;
LAB_145a32f63:
  iVar7 = (int)this->_padding_;
  if (0 < iVar7) {
    local_90 = local_88 & 0xff;
    local_80 = 0;
    local_70 = 0;
    local_78 = 0;
    do {
      lVar8 = local_70;
      uVar6 = 0;
      if ((int)uVar14 < iVar7) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar12 = (longlong *)(lVar8 + this->_padding_);
      lVar8 = 0;
      if (*plVar12 != 0) {
        lVar8 = *(longlong *)(*plVar12 + 0x1b0 + local_68 * 8);
      }
      uStack_58 = 0;
      local_50 = 0;
      lStack_48 = 0;
      local_60 = (ulonglong)((uint)*(byte *)(plVar12 + 2) << 8 | local_90);
      if (local_8c < 1) {
        lStack_48 = (ulonglong)*(uint *)((longlong)plVar12 + 0xc) + *(longlong *)(lVar8 + 0x188);
      }
      else {
        uVar6 = 0;
        if ((int)uVar14 < this->HitGroupSystemSegmentVertexBufferSRVs[uVar9].ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = this->HitGroupSystemSegmentVertexBufferSRVs[uVar9].AllocatorInstance.Data +
                  local_78;
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_50 = CONCAT44(*(undefined4 *)(*(longlong *)pFVar10 + 0x48),(undefined4)local_50);
      }
      if ((local_94 == 0) && (lVar11 != 0)) {
        if (local_8c < 1) {
          local_50 = *(undefined8 *)(lVar11 + 0x188);
        }
        else {
          if ((this->HitGroupSystemIndexBufferSRV[uVar9].Object == (FD3D12ShaderResourceView *)0x0)
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_50 = CONCAT44(local_50._4_4_,
                              (int)(this->HitGroupSystemIndexBufferSRV[uVar9].Object)->_padding_);
        }
        local_60 = CONCAT44(local_88 * (int)plVar12[3] * 3 + (int)this->_padding_,
                            (undefined4)local_60);
        uStack_58 = CONCAT44(uStack_58._4_4_,(int)plVar12[3]);
      }
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < pFVar10 + (longlong)*piVar1 * 0x20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = this->HitGroupSystemParameters[uVar9].ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar2->AllocatorInstance,piVar1);
      }
      local_80 = local_80 + 1;
      local_78 = local_78 + 0x10;
      local_70 = local_70 + 0x28;
      uVar14 = uVar14 + 1;
      this->HitGroupSystemParameters[uVar9].ArrayNum = iVar7 + 1;
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      pFVar10 = pFVar13 + (longlong)iVar7 * 0x20;
      *(ulonglong *)pFVar10 = local_60;
      *(undefined8 *)(pFVar10 + 8) = uStack_58;
      pFVar13 = pFVar13 + (longlong)iVar7 * 0x20 + 0x10;
      *(undefined8 *)pFVar13 = local_50;
      *(longlong *)(pFVar13 + 8) = lStack_48;
      iVar7 = (int)this->_padding_;
    } while ((int)uVar14 < iVar7);
  }
  lpCriticalSection = &this->UpdateListenersCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar13 = (this->UpdateListeners).AllocatorInstance.Data;
  iVar7 = (this->UpdateListeners).ArrayNum;
  pFVar10 = pFVar13 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->UpdateListeners).ArrayNum != iVar7) {
      `TCheckedPointerIterator<ID3D12RayTracingGeometryUpdateListener_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (pFVar13 == pFVar10) break;
    (**(code **)(**(longlong **)pFVar13 + 8))(*(longlong **)pFVar13,this);
    pFVar13 = pFVar13 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Swap @ 145a33450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::Swap(FD3D12RayTracingGeometry *this,FD3D12RayTracingGeometry *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  FD3D12Buffer *pFVar6;
  ulong64 uVar7;
  FRHIResource *this_00;
  FRHIResource *this_01;
  FRayTracingGeometrySegment *pFVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  FName *pFVar12;
  FDebugName *pFVar13;
  TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *pTVar14;
  uint uVar15;
  uint uVar16;
  FName local_res8;
  FDebugName local_68;
  FDebugName local_5c;
  TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> local_48;
  TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> local_38;
  
  pFVar6 = this->AccelerationStructureBuffers[0].Reference;
  uVar15 = 0;
  this->AccelerationStructureBuffers[0].Reference =
       param_1->AccelerationStructureBuffers[0].Reference;
  param_1->AccelerationStructureBuffers[0].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[0];
  this->bIsAccelerationStructureDirty[0] = param_1->bIsAccelerationStructureDirty[0];
  param_1->bIsAccelerationStructureDirty[0] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[1].Reference;
  this->AccelerationStructureBuffers[1].Reference =
       param_1->AccelerationStructureBuffers[1].Reference;
  param_1->AccelerationStructureBuffers[1].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[1];
  this->bIsAccelerationStructureDirty[1] = param_1->bIsAccelerationStructureDirty[1];
  param_1->bIsAccelerationStructureDirty[1] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[2].Reference;
  this->AccelerationStructureBuffers[2].Reference =
       param_1->AccelerationStructureBuffers[2].Reference;
  param_1->AccelerationStructureBuffers[2].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[2];
  this->bIsAccelerationStructureDirty[2] = param_1->bIsAccelerationStructureDirty[2];
  param_1->bIsAccelerationStructureDirty[2] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[3].Reference;
  this->AccelerationStructureBuffers[3].Reference =
       param_1->AccelerationStructureBuffers[3].Reference;
  param_1->AccelerationStructureBuffers[3].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[3];
  this->bIsAccelerationStructureDirty[3] = param_1->bIsAccelerationStructureDirty[3];
  param_1->bIsAccelerationStructureDirty[3] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[4].Reference;
  this->AccelerationStructureBuffers[4].Reference =
       param_1->AccelerationStructureBuffers[4].Reference;
  param_1->AccelerationStructureBuffers[4].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[4];
  this->bIsAccelerationStructureDirty[4] = param_1->bIsAccelerationStructureDirty[4];
  param_1->bIsAccelerationStructureDirty[4] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[5].Reference;
  this->AccelerationStructureBuffers[5].Reference =
       param_1->AccelerationStructureBuffers[5].Reference;
  param_1->AccelerationStructureBuffers[5].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[5];
  this->bIsAccelerationStructureDirty[5] = param_1->bIsAccelerationStructureDirty[5];
  param_1->bIsAccelerationStructureDirty[5] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[6].Reference;
  this->AccelerationStructureBuffers[6].Reference =
       param_1->AccelerationStructureBuffers[6].Reference;
  param_1->AccelerationStructureBuffers[6].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[6];
  this->bIsAccelerationStructureDirty[6] = param_1->bIsAccelerationStructureDirty[6];
  param_1->bIsAccelerationStructureDirty[6] = bVar11;
  pFVar6 = this->AccelerationStructureBuffers[7].Reference;
  this->AccelerationStructureBuffers[7].Reference =
       param_1->AccelerationStructureBuffers[7].Reference;
  param_1->AccelerationStructureBuffers[7].Reference = pFVar6;
  bVar11 = this->bIsAccelerationStructureDirty[7];
  this->bIsAccelerationStructureDirty[7] = param_1->bIsAccelerationStructureDirty[7];
  param_1->bIsAccelerationStructureDirty[7] = bVar11;
  uVar7 = this->AccelerationStructureCompactedSize;
  this->AccelerationStructureCompactedSize = param_1->AccelerationStructureCompactedSize;
  param_1->AccelerationStructureCompactedSize = uVar7;
  uVar16 = uVar15;
  do {
    if (GNumExplicitGPUsForRendering <= uVar16) break;
    UnregisterAsRenameListener(this,uVar16);
    uVar16 = uVar16 + 1;
  } while (uVar16 < 8);
  this_00 = (FRHIResource *)param_1->_padding_;
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != this_00) {
    this->_padding_ = (longlong)this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  plVar2 = &this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  if (plVar2 != &param_1->_padding_) {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)*plVar2,(int)this->_padding_);
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    pFVar8 = (FRayTracingGeometrySegment *)param_1->_padding_;
    iVar5 = *piVar1;
    *(int *)&this->_padding_ = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar5,(ForAnyElementType *)plVar2,iVar4,piVar1);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                ((void *)*plVar2,pFVar8,iVar4);
    }
  }
  this->_padding_ = param_1->_padding_;
  lVar10 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar10;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  FVar3 = (FName)param_1->_padding_;
  this->_padding_ = (longlong)FVar3;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  if ((this->_padding_ == 0) && ((int)this->_padding_ == 0)) {
    pFVar12 = ::FName::FName(&local_res8,L"BLAS");
    pFVar13 = FDebugName::FDebugName(&local_5c,*pFVar12);
  }
  else {
    local_68.Number = (uint)this->_padding_;
    pFVar13 = &local_68;
    local_68.Name = FVar3;
  }
  (this->DebugName).Name = pFVar13->Name;
  (this->DebugName).Number = pFVar13->Number;
  if (((int)this->_padding_ < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.Segments.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xec8,
                          L"Ray tracing geometry must be initialized with at least one segment."),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&this->GeometryDescs,(int)this->_padding_,Default);
  pTVar14 = TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int>::
            TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int><TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_38,&this->GeometryDescs);
  local_48.DataPtr = pTVar14->DataPtr;
  local_48.ArrayNum = pTVar14->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
  TranslateRayTracingGeometryDescs((FRayTracingGeometryInitializer *)&this->_padding_,&local_48);
  do {
    if (GNumExplicitGPUsForRendering <= uVar15) {
      return;
    }
    RegisterAsRenameListener(this,uVar15);
    SetupHitGroupSystemParameters(this,uVar15);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 8);
  return;
}

// UnregisterAsRenameListener @ 145a36170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::UnregisterAsRenameListener(FD3D12RayTracingGeometry *this,uint param_1)

{
  longlong *plVar1;
  ForElementType<FD3D12Buffer_*> FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FD3D12Buffer_*> FVar9;
  ForElementType<FD3D12Buffer_*> FVar10;
  FD3D12ShaderResourceRenameListener *pFVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStackY_b8 [32];
  undefined1 local_68 [8];
  longlong local_60;
  ForElementType<FD3D12Buffer_*> local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar12 = (ulonglong)param_1;
  if (this->bRegisteredAsRenameListener[uVar12] != false) {
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = this->_padding_;
    if ((GNumExplicitGPUsForRendering == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GPUIndex < GNumExplicitGPUsForRendering",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                           ,0x103,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((0 < *(int *)(*(longlong *)(lVar5 + 0x800) + 0x750)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AreBindlessResourcesEnabledForRayTracing(GetParentAdapter())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0xf91,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->_padding_ != 0) &&
       (lVar5 = *(longlong *)(this->_padding_ + 0x1b0 + uVar12 * 8), lVar5 != 0)) {
      pFVar11 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
      if (this == (FD3D12RayTracingGeometry *)0x0) {
        pFVar11 = (FD3D12ShaderResourceRenameListener *)0x0;
      }
      FD3D12BaseShaderResource::RemoveRenameListener
                ((FD3D12BaseShaderResource *)(lVar5 + 0xe8),pFVar11);
    }
    uVar3 = (uint)this->_padding_;
    local_58.SecondaryData = (ForElementType<FD3D12Buffer_*>)0x0;
    local_48 = 0;
    local_44 = 1;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (1 < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_>
                (8,8,uVar3,&local_58,0,&local_44);
    }
    iVar4 = (int)this->_padding_;
    plVar13 = (longlong *)this->_padding_;
    plVar1 = plVar13 + (longlong)iVar4 * 5;
    FVar10 = local_58.SecondaryData;
    while( true ) {
      if ((int)this->_padding_ != iVar4) {
        local_68[0] = 0;
        `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_68);
        FVar10 = local_58.SecondaryData;
      }
      if (plVar13 == plVar1) break;
      if (*plVar13 == 0) {
        local_60 = 0;
LAB_145a36455:
        plVar13 = plVar13 + 5;
      }
      else {
        local_60 = *(longlong *)(*plVar13 + 0x1b0 + uVar12 * 8);
        if (local_60 == 0) goto LAB_145a36455;
        FVar9 = (ForElementType<FD3D12Buffer_*>)&local_58;
        if (FVar10 != (ForElementType<FD3D12Buffer_*>)0x0) {
          FVar9 = FVar10;
        }
        FVar2 = (ForElementType<FD3D12Buffer_*>)((longlong)FVar9 + (longlong)local_48 * 8);
        for (; FVar9 != FVar2; FVar9 = (ForElementType<FD3D12Buffer_*>)((longlong)FVar9 + 8)) {
          if (*(longlong *)FVar9 == local_60) goto LAB_145a36455;
        }
        pFVar11 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
        if (this == (FD3D12RayTracingGeometry *)0x0) {
          pFVar11 = (FD3D12ShaderResourceRenameListener *)0x0;
        }
        FD3D12BaseShaderResource::RemoveRenameListener
                  ((FD3D12BaseShaderResource *)(local_60 + 0xe8),pFVar11);
        FVar10 = (ForElementType<FD3D12Buffer_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FD3D12Buffer_*>)0x0) {
          FVar10 = local_58.SecondaryData;
        }
        if ((ulonglong)FVar10 <= &local_60) {
          FVar10 = (ForElementType<FD3D12Buffer_*>)&local_58;
          if (local_58.SecondaryData != (ForElementType<FD3D12Buffer_*>)0x0) {
            FVar10 = local_58.SecondaryData;
          }
          if ((&local_60 < (longlong *)((longlong)FVar10 + (longlong)local_44 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = local_48;
        if (local_48 == local_44) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Buffer_*>_>
                            (0x808,&local_58,&local_44);
        }
        local_48 = iVar8 + 1;
        FVar10 = (ForElementType<FD3D12Buffer_*>)&local_58;
        if (local_58.SecondaryData != (ForElementType<FD3D12Buffer_*>)0x0) {
          FVar10 = local_58.SecondaryData;
        }
        plVar13 = plVar13 + 5;
        *(longlong *)((longlong)FVar10 + (longlong)iVar8 * 8) = local_60;
        FVar10 = local_58.SecondaryData;
      }
    }
    this->bRegisteredAsRenameListener[uVar12] = false;
    if (FVar10 != (ForElementType<FD3D12Buffer_*>)0x0) {
      FMemory::Free((void *)FVar10);
    }
  }
  return;
}

// UpdateResidency @ 145a37220

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGeometry::UpdateResidency
          (FD3D12RayTracingGeometry *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  FD3D12Resource *pFVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  uint local_res20;
  
  if (this->_padding_ != 0) {
    local_res10 = 0;
    bVar9 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar9) {
      for (; (*(uint *)&param_1->field_0x2f8 >> local_res10 & 1) == 0; local_res10 = local_res10 + 1
          ) {
      }
    }
    uVar8 = 0x20;
    if (bVar9) {
      uVar8 = (ulonglong)local_res10;
    }
    pFVar4 = *(FD3D12Resource **)(*(longlong *)(this->_padding_ + 0x1b0 + uVar8 * 8) + 0x140);
    if (pFVar4 == (FD3D12Resource *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                         ,0x1a5,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar4);
  }
  iVar2 = (int)this->_padding_;
  plVar7 = (longlong *)this->_padding_;
  plVar1 = plVar7 + (longlong)iVar2 * 5;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar3 = *(uint *)&param_1->field_0x2f8;
    if (plVar7 == plVar1) break;
    local_res18 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> local_res18 & 1) == 0; local_res18 = local_res18 + 1) {
      }
    }
    if (*plVar7 == 0) {
      lVar6 = 0;
    }
    else {
      uVar8 = 0x20;
      if (uVar3 != 0) {
        uVar8 = (ulonglong)local_res18;
      }
      lVar6 = *(longlong *)(*plVar7 + 0x1b0 + uVar8 * 8);
    }
    pFVar4 = *(FD3D12Resource **)(lVar6 + 0x140);
    if (pFVar4 == (FD3D12Resource *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                         ,0x1a5,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar4);
    plVar7 = plVar7 + 5;
  }
  local_res20 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> local_res20 & 1) == 0; local_res20 = local_res20 + 1) {
    }
  }
  uVar8 = 0x20;
  if (uVar3 != 0) {
    uVar8 = (ulonglong)local_res20;
  }
  pFVar4 = (FD3D12Resource *)(this->AccelerationStructureBuffers[uVar8].Reference)->_padding_;
  if (pFVar4 == (FD3D12Resource *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar4);
  return;
}

// operator() @ 1504d6240

bool __thiscall
`FD3D12RayTracingGeometry::CompactAccelerationStructure'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8588839787656376137>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8588839787656376137>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

