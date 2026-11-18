// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 15

// FD3D12RayTracingShaderBindingTableInternal @ 1459f4600

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FD3D12RayTracingShaderBindingTableInternal * __thiscall
FD3D12RayTracingShaderBindingTableInternal::FD3D12RayTracingShaderBindingTableInternal
          (FD3D12RayTracingShaderBindingTableInternal *this,FRHICommandListBase *param_1,
          FRayTracingShaderBindingTableInitializer *param_2,FD3D12Device *param_3)

{
  longlong *plVar1;
  int *piVar2;
  TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordData,TSizedDefaultAllocator<32>_>
  *this_00;
  undefined4 *puVar3;
  ERayTracingShaderBindingMode EVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  atomic<unsigned___int64> aVar9;
  bool bVar10;
  int iVar11;
  FD3D12RayTracingShaderBindingTableInternal *pFVar12;
  FD3D12ExplicitDescriptorCache *this_01;
  FD3D12ExplicitDescriptorCache *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  FD3D12ExplicitDescriptorCache *pFVar18;
  uint uVar19;
  
  this->ShaderBindingMode = RTPSO;
  pFVar18 = (FD3D12ExplicitDescriptorCache *)0x0;
  this->NumHitRecords = 0;
  this->NumCallableRecords = 0;
  this->NumMissRecords = 0;
  this->MissShaderTableOffset = 0;
  this->HitGroupShaderTableOffset = 0;
  this->CallableShaderTableOffset = 0;
  this_00 = &this->HitRecordData;
  this->Device = (FD3D12Device *)0x0;
  this->Lifetime = Transient;
  this->HitGroupIndexingMode = Allow;
  this->NumShaderSlotsPerGeometrySegment = 0;
  this->LocalRecordSizeUnaligned = 0;
  this->LocalRecordStride = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = 0;
  (this->Data)._padding_ = (longlong)&___7__TResourceArray_E_0EA___6B_;
  (this->InlineGeometryParameterData)._padding_ = (longlong)&___7__TResourceArray_E_0EA___6B_;
  (this->Data).bNeedsCPUAccess = false;
  (this->InlineGeometryParameterData)._padding_ = 0;
  (this->InlineGeometryParameterData)._padding_ = 0;
  (this->InlineGeometryParameterData).bNeedsCPUAccess = false;
  (this->Buffer).Reference = (FD3D12Buffer *)0x0;
  this->bWasDefaultMissShaderSet = false;
  (this->ReferencedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedResources).ArrayNum = 0;
  (this->ReferencedResources).ArrayMax = 0;
  this->DescriptorCache = (FD3D12ExplicitDescriptorCache *)0x0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->HitRecordData).ArrayNum = 0;
  (this->HitRecordData).ArrayMax = 0;
  this->bIsDirty = true;
  this->WorkerData[0].ShaderRecordCache.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[0].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[0].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  this->WorkerData[0].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
  this->WorkerData[0].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
  this->WorkerData[0].ShaderRecordCache.Table.MaxLookups = '\0';
  this->WorkerData[0].ShaderRecordCache.Table.NumElements = 0;
  this->WorkerData[0].MaxUsedHitRecordIndex = -1;
  *(undefined8 *)&this->WorkerData[0].PersistentReferencedResources = 0;
  *(undefined8 *)&this->WorkerData[0].PersistentReferencedResources.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[0].PersistentReferencedResources.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[0].PersistentReferencedResources.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[0].PersistentReferencedResources.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[0].PersistentReferencedResources.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[0].PersistentReferencedResources.field_0x34 = 0;
  *(undefined8 *)&this->WorkerData[0].PersistentReferencedResources.field_0x40 = 0;
  *(undefined4 *)&this->WorkerData[0].PersistentReferencedResources.field_0x48 = 0;
  *(undefined8 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements = 0;
  *(undefined8 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&this->WorkerData[0].LastTrackedBaseShaderResources.Elements.field_0x34 = 0;
  this->WorkerData[0].LastTrackedBaseShaderResources.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  this->WorkerData[0].LastTrackedBaseShaderResources.HashSize = 0;
  this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
  this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.Values = (FNoopStruct *)0x0;
  this->WorkerData[0].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
  this->WorkerData[0].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
  this->WorkerData[0].DynamicReferencedResourceSet.Table.NumElements = 0;
  this->WorkerData[0].DynamicReferencedResources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->WorkerData[0].DynamicReferencedResources.ArrayNum = 0;
  this->WorkerData[0].DynamicReferencedResources.ArrayMax = 0;
  this->WorkerData[1].ShaderRecordCache.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[1].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[1].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  this->WorkerData[1].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
  this->WorkerData[1].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
  this->WorkerData[1].ShaderRecordCache.Table.MaxLookups = '\0';
  this->WorkerData[1].ShaderRecordCache.Table.NumElements = 0;
  this->WorkerData[1].MaxUsedHitRecordIndex = -1;
  *(undefined8 *)&this->WorkerData[1].PersistentReferencedResources = 0;
  *(undefined8 *)&this->WorkerData[1].PersistentReferencedResources.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[1].PersistentReferencedResources.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[1].PersistentReferencedResources.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[1].PersistentReferencedResources.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[1].PersistentReferencedResources.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[1].PersistentReferencedResources.field_0x34 = 0;
  *(undefined8 *)&this->WorkerData[1].PersistentReferencedResources.field_0x40 = 0;
  *(undefined4 *)&this->WorkerData[1].PersistentReferencedResources.field_0x48 = 0;
  *(undefined8 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements = 0;
  *(undefined8 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&this->WorkerData[1].LastTrackedBaseShaderResources.Elements.field_0x34 = 0;
  this->WorkerData[1].LastTrackedBaseShaderResources.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  this->WorkerData[1].LastTrackedBaseShaderResources.HashSize = 0;
  this->WorkerData[1].DynamicReferencedResourceSet.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[1].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[1].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
  this->WorkerData[1].DynamicReferencedResourceSet.Table.CurrentData.Values = (FNoopStruct *)0x0;
  this->WorkerData[1].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
  this->WorkerData[1].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
  this->WorkerData[1].DynamicReferencedResourceSet.Table.NumElements = 0;
  this->WorkerData[1].DynamicReferencedResources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->WorkerData[1].DynamicReferencedResources.ArrayNum = 0;
  this->WorkerData[1].DynamicReferencedResources.ArrayMax = 0;
  this->WorkerData[2].ShaderRecordCache.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[2].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[2].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  this->WorkerData[2].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
  this->WorkerData[2].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
  this->WorkerData[2].ShaderRecordCache.Table.MaxLookups = '\0';
  this->WorkerData[2].ShaderRecordCache.Table.NumElements = 0;
  this->WorkerData[2].MaxUsedHitRecordIndex = -1;
  *(undefined8 *)&this->WorkerData[2].PersistentReferencedResources = 0;
  *(undefined8 *)&this->WorkerData[2].PersistentReferencedResources.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[2].PersistentReferencedResources.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[2].PersistentReferencedResources.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[2].PersistentReferencedResources.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[2].PersistentReferencedResources.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[2].PersistentReferencedResources.field_0x34 = 0;
  *(undefined8 *)&this->WorkerData[2].PersistentReferencedResources.field_0x40 = 0;
  *(undefined4 *)&this->WorkerData[2].PersistentReferencedResources.field_0x48 = 0;
  *(undefined8 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements = 0;
  *(undefined8 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&this->WorkerData[2].LastTrackedBaseShaderResources.Elements.field_0x34 = 0;
  this->WorkerData[2].LastTrackedBaseShaderResources.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  this->WorkerData[2].LastTrackedBaseShaderResources.HashSize = 0;
  this->WorkerData[2].DynamicReferencedResourceSet.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[2].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[2].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
  this->WorkerData[2].DynamicReferencedResourceSet.Table.CurrentData.Values = (FNoopStruct *)0x0;
  this->WorkerData[2].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
  this->WorkerData[2].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
  this->WorkerData[2].DynamicReferencedResourceSet.Table.NumElements = 0;
  this->WorkerData[2].DynamicReferencedResources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->WorkerData[2].DynamicReferencedResources.ArrayNum = 0;
  this->WorkerData[2].DynamicReferencedResources.ArrayMax = 0;
  this->WorkerData[3].ShaderRecordCache.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[3].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[3].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  this->WorkerData[3].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
  this->WorkerData[3].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
  this->WorkerData[3].ShaderRecordCache.Table.MaxLookups = '\0';
  this->WorkerData[3].ShaderRecordCache.Table.NumElements = 0;
  this->WorkerData[3].MaxUsedHitRecordIndex = -1;
  *(undefined8 *)&this->WorkerData[3].PersistentReferencedResources = 0;
  *(undefined8 *)&this->WorkerData[3].PersistentReferencedResources.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[3].PersistentReferencedResources.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[3].PersistentReferencedResources.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[3].PersistentReferencedResources.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[3].PersistentReferencedResources.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[3].PersistentReferencedResources.field_0x34 = 0;
  *(undefined8 *)&this->WorkerData[3].PersistentReferencedResources.field_0x40 = 0;
  *(undefined4 *)&this->WorkerData[3].PersistentReferencedResources.field_0x48 = 0;
  *(undefined8 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements = 0;
  *(undefined8 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&this->WorkerData[3].LastTrackedBaseShaderResources.Elements.field_0x34 = 0;
  this->WorkerData[3].LastTrackedBaseShaderResources.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  this->WorkerData[3].LastTrackedBaseShaderResources.HashSize = 0;
  this->WorkerData[3].DynamicReferencedResourceSet.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[3].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[3].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
  this->WorkerData[3].DynamicReferencedResourceSet.Table.CurrentData.Values = (FNoopStruct *)0x0;
  this->WorkerData[3].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
  this->WorkerData[3].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
  this->WorkerData[3].DynamicReferencedResourceSet.Table.NumElements = 0;
  this->WorkerData[3].DynamicReferencedResources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->WorkerData[3].DynamicReferencedResources.ArrayNum = 0;
  this->WorkerData[3].DynamicReferencedResources.ArrayMax = 0;
  this->WorkerData[4].ShaderRecordCache.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[4].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[4].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  this->WorkerData[4].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
  this->WorkerData[4].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
  this->WorkerData[4].ShaderRecordCache.Table.MaxLookups = '\0';
  this->WorkerData[4].ShaderRecordCache.Table.NumElements = 0;
  this->WorkerData[4].MaxUsedHitRecordIndex = -1;
  *(undefined8 *)&this->WorkerData[4].PersistentReferencedResources = 0;
  *(undefined8 *)&this->WorkerData[4].PersistentReferencedResources.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[4].PersistentReferencedResources.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[4].PersistentReferencedResources.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[4].PersistentReferencedResources.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[4].PersistentReferencedResources.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[4].PersistentReferencedResources.field_0x34 = 0;
  *(undefined8 *)&this->WorkerData[4].PersistentReferencedResources.field_0x40 = 0;
  *(undefined4 *)&this->WorkerData[4].PersistentReferencedResources.field_0x48 = 0;
  *(undefined8 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements = 0;
  *(undefined8 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&this->WorkerData[4].LastTrackedBaseShaderResources.Elements.field_0x34 = 0;
  this->WorkerData[4].LastTrackedBaseShaderResources.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  this->WorkerData[4].LastTrackedBaseShaderResources.HashSize = 0;
  this->WorkerData[4].DynamicReferencedResourceSet.Table.CurrentData.AllocatedCount = 0;
  this->WorkerData[4].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0;
  this->WorkerData[4].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
  this->WorkerData[4].DynamicReferencedResourceSet.Table.CurrentData.Values = (FNoopStruct *)0x0;
  this->WorkerData[4].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
  this->WorkerData[4].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
  this->WorkerData[4].DynamicReferencedResourceSet.Table.NumElements = 0;
  this->WorkerData[4].DynamicReferencedResources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->WorkerData[4].DynamicReferencedResources.ArrayNum = 0;
  this->WorkerData[4].DynamicReferencedResources.ArrayMax = 0;
  LOCK();
  UNLOCK();
  aVar9 = (atomic<unsigned___int64>)((longlong)NextUniqueId + 1);
  this->UniqueId = (ulong64)NextUniqueId;
  NextUniqueId = aVar9;
  (this->DispatchMutex).State = (atomic<unsigned_char>)0x0;
  if ((0x1000 < param_2->LocalBindingDataSize) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.LocalBindingDataSize <= 4096",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x55a,L"The maximum size of a local root signature is 4KB."), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FD3D12RayTracingShaderBindingTableInternal *)(*pcVar5)();
    return pFVar12;
  }
  if ((param_2->ShaderBindingMode == Disabled) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.ShaderBindingMode != ERayTracingShaderBindingMode::Disabled",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x55b,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FD3D12RayTracingShaderBindingTableInternal *)(*pcVar5)();
    return pFVar12;
  }
  this->Device = param_3;
  this->Lifetime = param_2->Lifetime;
  this->HitGroupIndexingMode = param_2->HitGroupIndexingMode;
  EVar4 = param_2->ShaderBindingMode;
  this->ShaderBindingMode = EVar4;
  this->NumShaderSlotsPerGeometrySegment = param_2->NumShaderSlotsPerGeometrySegment;
  if (param_2->HitGroupIndexingMode == Allow) {
    uVar19 = param_2->NumGeometrySegments * param_2->NumShaderSlotsPerGeometrySegment;
  }
  else {
    uVar19 = 1;
  }
  this->NumMissRecords = param_2->NumMissShaderSlots;
  this->NumHitRecords = uVar19;
  this->NumCallableRecords = param_2->NumCallableShaderSlots;
  if ((EVar4 & RTPSO) != Disabled) {
    if ((param_2->LocalBindingDataSize < 0x20) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Initializer.LocalBindingDataSize >= sizeof(FD3D12HitGroupSystemParameters)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x56c,
                            L"All local root signatures are expected to contain ray tracing system root parameters"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FD3D12RayTracingShaderBindingTableInternal *)(*pcVar5)();
      return pFVar12;
    }
    uVar17 = param_2->LocalBindingDataSize;
    this->LocalRecordSizeUnaligned = uVar17 + 0x20;
    this->LocalRecordStride = (uVar17 + 0x1f & 0xffffffe0) + 0x20;
    if ((param_2->NumMissShaderSlots + param_2->NumCallableShaderSlots + uVar19) *
        param_2->LocalBindingDataSize != 0) {
      if (GD3D12ExplicitViewDescriptorHeapOverflowReported != 0) {
        GD3D12ExplicitViewDescriptorHeapOverflowReported = 0;
        GD3D12ExplicitViewDescriptorHeapSize = GD3D12ExplicitViewDescriptorHeapSize * 2;
      }
      uVar17 = GD3D12ExplicitViewDescriptorHeapSize;
      if (1000000 < GD3D12ExplicitViewDescriptorHeapSize) {
        uVar17 = 1000000;
      }
      this_01 = ::operator_new(0x110);
      pFVar13 = pFVar18;
      if (this_01 != (FD3D12ExplicitDescriptorCache *)0x0) {
        pFVar13 = FD3D12ExplicitDescriptorCache::FD3D12ExplicitDescriptorCache
                            (this_01,this->Device,5);
      }
      this->DescriptorCache = pFVar13;
      FD3D12ExplicitDescriptorCache::Init(pFVar13,0,uVar17,0x800,RayTracing);
    }
    uVar17 = this->LocalRecordStride;
    this->HitGroupShaderTableOffset = 0;
    uVar19 = (uVar17 * uVar19 - 1 & 0xffffffc0) + 0x40;
    this->CallableShaderTableOffset = uVar19;
    uVar19 = (uVar19 + uVar17 * param_2->NumCallableShaderSlots + -1 & 0xffffffc0) + 0x40;
    this->MissShaderTableOffset = uVar19;
    TArray<unsigned_char,TMemoryImageAllocator<64>_>::SetNumZeroed
              ((TArray<unsigned_char,TMemoryImageAllocator<64>_> *)&(this->Data)._padding_,
               ((uVar19 + uVar17 * param_2->NumMissShaderSlots + -1 >> 6) + 1) * 0x40,Default);
    plVar1 = &(this->Data)._padding_;
    this->bWasDefaultMissShaderSet = false;
    uVar8 = FD3D12ShaderIdentifier::Null.Data[1]._4_4_;
    uVar7 = (undefined4)FD3D12ShaderIdentifier::Null.Data[1];
    uVar6 = FD3D12ShaderIdentifier::Null.Data[0]._4_4_;
    uVar14 = *plVar1;
    if ((uVar14 & 1) != 0) {
      uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)plVar1;
    }
    uVar19 = this->HitGroupShaderTableOffset;
    puVar3 = (undefined4 *)(uVar19 + uVar14);
    *puVar3 = (undefined4)FD3D12ShaderIdentifier::Null.Data[0];
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    uVar8 = FD3D12ShaderIdentifier::Null.Data[3]._4_4_;
    uVar7 = (undefined4)FD3D12ShaderIdentifier::Null.Data[3];
    uVar6 = FD3D12ShaderIdentifier::Null.Data[2]._4_4_;
    puVar3 = (undefined4 *)((ulonglong)uVar19 + 0x10 + uVar14);
    *puVar3 = (undefined4)FD3D12ShaderIdentifier::Null.Data[2];
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    pFVar13 = pFVar18;
    if (this->NumMissRecords != 0) {
      do {
        iVar16 = (int)pFVar13;
        uVar14 = (ulonglong)(iVar16 * this->LocalRecordStride + this->MissShaderTableOffset);
        if (iVar16 == 0) {
          this->bWasDefaultMissShaderSet = true;
        }
        uVar8 = FD3D12ShaderIdentifier::Null.Data[1]._4_4_;
        uVar7 = (undefined4)FD3D12ShaderIdentifier::Null.Data[1];
        uVar6 = FD3D12ShaderIdentifier::Null.Data[0]._4_4_;
        uVar15 = *plVar1;
        if ((uVar15 & 1) != 0) {
          uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)plVar1;
        }
        pFVar13 = (FD3D12ExplicitDescriptorCache *)(ulonglong)(iVar16 + 1U);
        puVar3 = (undefined4 *)(uVar14 + uVar15);
        *puVar3 = (undefined4)FD3D12ShaderIdentifier::Null.Data[0];
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        uVar8 = FD3D12ShaderIdentifier::Null.Data[3]._4_4_;
        uVar7 = (undefined4)FD3D12ShaderIdentifier::Null.Data[3];
        uVar6 = FD3D12ShaderIdentifier::Null.Data[2]._4_4_;
        puVar3 = (undefined4 *)(uVar14 + 0x10 + uVar15);
        *puVar3 = (undefined4)FD3D12ShaderIdentifier::Null.Data[2];
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      } while (iVar16 + 1U < this->NumMissRecords);
    }
    this->bWasDefaultMissShaderSet = false;
    if (this->NumCallableRecords != 0) {
      do {
        uVar8 = FD3D12ShaderIdentifier::Null.Data[1]._4_4_;
        uVar7 = (undefined4)FD3D12ShaderIdentifier::Null.Data[1];
        uVar6 = FD3D12ShaderIdentifier::Null.Data[0]._4_4_;
        uVar14 = *plVar1;
        uVar15 = (ulonglong)
                 ((int)pFVar18 * this->LocalRecordStride + this->CallableShaderTableOffset);
        if ((uVar14 & 1) != 0) {
          uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)plVar1;
        }
        uVar19 = (int)pFVar18 + 1;
        pFVar18 = (FD3D12ExplicitDescriptorCache *)(ulonglong)uVar19;
        puVar3 = (undefined4 *)(uVar15 + uVar14);
        *puVar3 = (undefined4)FD3D12ShaderIdentifier::Null.Data[0];
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        uVar8 = FD3D12ShaderIdentifier::Null.Data[3]._4_4_;
        uVar7 = (undefined4)FD3D12ShaderIdentifier::Null.Data[3];
        uVar6 = FD3D12ShaderIdentifier::Null.Data[2]._4_4_;
        puVar3 = (undefined4 *)(uVar15 + 0x10 + uVar14);
        *puVar3 = (undefined4)FD3D12ShaderIdentifier::Null.Data[2];
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      } while (uVar19 < this->NumCallableRecords);
    }
    pcVar5 = *(code **)((this->Data)._padding_ + 0x38);
    if (pcVar5 == TResourceArray<unsigned_char,64>::SetAllowCPUAccess) {
      (this->Data).bNeedsCPUAccess = true;
    }
    else {
      (*pcVar5)(&this->Data,CONCAT71((int7)((ulonglong)pFVar13 >> 8),1));
    }
  }
  if (((this->ShaderBindingMode & Inline) != Disabled) && (param_2->NumGeometrySegments != 0)) {
    if ((this->HitGroupIndexingMode != Allow) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("HitGroupIndexingMode == ERayTracingHitGroupIndexingMode::Allow",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x5a5,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FD3D12RayTracingShaderBindingTableInternal *)(*pcVar5)();
      return pFVar12;
    }
    TArray<unsigned_char,TMemoryImageAllocator<64>_>::SetNumZeroed
              ((TArray<unsigned_char,TMemoryImageAllocator<64>_> *)
               &(this->InlineGeometryParameterData)._padding_,param_2->NumGeometrySegments << 5,
               Default);
  }
  if (this->Lifetime == Persistent) {
    iVar16 = (this->HitRecordData).ArrayNum;
    piVar2 = &(this->HitRecordData).ArrayNum;
    uVar19 = this->NumHitRecords;
    if (iVar16 < (int)uVar19) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x78,8,uVar19 - iVar16,&this_00->AllocatorInstance,piVar2,
                          &(this->HitRecordData).ArrayMax);
      DefaultConstructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar11 * 0x78,uVar19 - iVar16);
    }
    else {
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if ((int)uVar19 < iVar16) {
        uVar17 = iVar16 - uVar19;
        if (((int)(uVar19 | uVar17) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FD3D12RayTracingShaderBindingTableInternal *)(*pcVar5)();
          return pFVar12;
        }
        if (uVar17 != 0) {
          TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordData,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(this_00,uVar19,uVar17);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,&this_00->AllocatorInstance,*piVar2,&(this->HitRecordData).ArrayMax);
        }
      }
    }
  }
  return this;
}

// ~FD3D12RayTracingShaderBindingTableInternal @ 1459f95d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::~FD3D12RayTracingShaderBindingTableInternal
          (FD3D12RayTracingShaderBindingTableInternal *this)

{
  FD3D12ExplicitDescriptorCache *pFVar1;
  FScriptContainerElement *pFVar2;
  schar *psVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  FD3D12Buffer *pFVar6;
  uint uVar7;
  FWorkerThreadData *pFVar8;
  longlong lVar9;
  
  uVar7 = 0;
  if (-1 < this->WorkerData[0].MaxUsedHitRecordIndex) {
    do {
      ClearHitRecordData(this,0,uVar7);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 <= this->WorkerData[0].MaxUsedHitRecordIndex);
  }
  pFVar1 = this->DescriptorCache;
  if (pFVar1 != (FD3D12ExplicitDescriptorCache *)0x0) {
    DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
              ((FWorkerThreadData *)(pFVar1->WorkerData).AllocatorInstance.Data,
               (pFVar1->WorkerData).ArrayNum);
    pFVar2 = (pFVar1->WorkerData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&pFVar1->SamplerHeap);
    FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&pFVar1->ViewHeap);
    ::operator_delete(pFVar1,0x110);
  }
  lVar9 = 5;
  pFVar8 = (FWorkerThreadData *)&this->UniqueId;
  do {
    lVar9 = lVar9 + -1;
    DestructItems<TRefCountPtr<FD3D12Resource>,int>
              ((TRefCountPtr<FD3D12Resource> *)
               pFVar8[-1].DynamicReferencedResources.AllocatorInstance.Data,
               pFVar8[-1].DynamicReferencedResources.ArrayNum);
    pFVar2 = pFVar8[-1].DynamicReferencedResources.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    psVar3 = pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData.Distances;
    if (psVar3 != (schar *)0x0) {
      FMemory::Free(psVar3);
      FMemory::Free(pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData.Keys);
      FMemory::Free(pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData.Values);
    }
    pFVar8[-1].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
    pFVar8[-1].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
    pFVar8[-1].DynamicReferencedResourceSet.Table.NumElements = 0;
    *(undefined8 *)&pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData = 0;
    pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0;
    pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
    pFVar8[-1].DynamicReferencedResourceSet.Table.CurrentData.Values = (FNoopStruct *)0x0;
    pFVar8[-1].LastTrackedBaseShaderResources.HashSize = 0;
    FVar4 = pFVar8[-1].LastTrackedBaseShaderResources.Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&pFVar8[-1].LastTrackedBaseShaderResources.Elements);
    *(undefined4 *)&pFVar8[-1].PersistentReferencedResources.field_0x48 = 0;
    pvVar5 = *(void **)&pFVar8[-1].PersistentReferencedResources.field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar8[-1].PersistentReferencedResources);
    psVar3 = pFVar8[-1].ShaderRecordCache.Table.CurrentData.Distances;
    if (psVar3 != (schar *)0x0) {
      FMemory::Free(psVar3);
      FMemory::Free(pFVar8[-1].ShaderRecordCache.Table.CurrentData.Keys);
      FMemory::Free(pFVar8[-1].ShaderRecordCache.Table.CurrentData.Values);
    }
    pFVar8[-1].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
    pFVar8[-1].ShaderRecordCache.Table.MaxLookups = '\0';
    pFVar8[-1].ShaderRecordCache.Table.NumElements = 0;
    *(undefined8 *)&pFVar8[-1].ShaderRecordCache.Table.CurrentData = 0;
    pFVar8[-1].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
    pFVar8[-1].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
    pFVar8[-1].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
    pFVar8 = pFVar8 + -1;
  } while (lVar9 != 0);
  DestructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int>
            ((FRecordData *)(this->HitRecordData).AllocatorInstance.Data,
             (this->HitRecordData).ArrayNum);
  pFVar2 = (this->HitRecordData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReferencedResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar6 = (this->Buffer).Reference;
  if (pFVar6 != (FD3D12Buffer *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0x10))();
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->InlineGeometryParameterData)._padding_);
  (this->InlineGeometryParameterData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->Data)._padding_);
  (this->Data)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// AddDynamicReferencedResource @ 1459feb30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::AddDynamicReferencedResource
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,FD3D12Resource *param_2)

{
  int *piVar1;
  TArray<TRefCountPtr<FD3D12Resource>,TSizedDefaultAllocator<32>_> *pTVar2;
  schar *psVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  FNoopStruct local_res10;
  FD3D12Resource *local_18 [2];
  ulonglong uVar11;
  
  cVar9 = '\0';
  psVar3 = this->WorkerData[param_1].DynamicReferencedResourceSet.Table.CurrentData.Distances;
  uVar8 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar10 = this->WorkerData[param_1].DynamicReferencedResourceSet.Table.NumSlotsMinusOne & uVar8;
  uVar11 = (ulonglong)uVar10;
  if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar11])) {
    do {
      if (param_2 ==
          this->WorkerData[param_1].DynamicReferencedResourceSet.Table.CurrentData.Keys[uVar11]) {
        return;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      cVar9 = cVar9 + '\x01';
    } while (cVar9 <= psVar3[uVar11]);
  }
  Experimental::TSherwoodHashTable_Private::
  TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>::
  Add(&this->WorkerData[param_1].DynamicReferencedResourceSet.Table,cVar9,
      (FData *)&this->WorkerData[param_1].DynamicReferencedResourceSet,uVar10,param_2,uVar8,
      local_res10);
  pTVar2 = &this->WorkerData[param_1].DynamicReferencedResources;
  if (param_2 != (FD3D12Resource *)0x0) {
    LOCK();
    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
    UNLOCK();
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = param_2;
  if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar4 + (longlong)this->WorkerData[param_1].DynamicReferencedResources.ArrayMax * 8)) &&
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
  iVar7 = this->WorkerData[param_1].DynamicReferencedResources.ArrayNum;
  piVar1 = &this->WorkerData[param_1].DynamicReferencedResources.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  this->WorkerData[param_1].DynamicReferencedResources.ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 8) = 0;
  *(FD3D12Resource **)(pFVar4 + (longlong)iVar7 * 8) = local_18[0];
  return;
}

// AddReferencedShaderResource @ 1459ff190

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::AddReferencedShaderResource
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,uint param_2,
          ERayTracingLocalShaderBindingType param_3,FD3D12BaseShaderResource *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FD3D12ShaderResourceRenameListener FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FD3D12ShaderResourceRenameListener *pFVar8;
  longlong *plVar9;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  FD3D12ShaderResourceRenameListener *local_30;
  
  if ((param_3 == Transient) || (this->Lifetime != Persistent)) {
    AddDynamicReferencedResource(this,param_1,(param_4->ResourceLocation).UnderlyingResource);
    return;
  }
  if (param_3 == Persistent) {
    uVar6 = 0;
    if ((int)param_2 < (this->HitRecordData).ArrayNum) {
      uVar6 = ~param_2 >> 0x1f;
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
    pFVar2 = (this->HitRecordData).AllocatorInstance.Data;
    plVar9 = *(longlong **)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x48);
    iVar7 = *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x50);
    plVar1 = plVar9 + iVar7;
    while( true ) {
      if (*(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x50) != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateShaderResourceRenameListener_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar9 == plVar1) break;
      if (*(FD3D12BaseShaderResource **)(*plVar9 + 0x18) == param_4) {
        return;
      }
      plVar9 = plVar9 + 1;
    }
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 == (FD3D12ShaderResourceRenameListener *)0x0) {
      pFVar8 = (FD3D12ShaderResourceRenameListener *)0x0;
    }
    else {
      pFVar8[1] = (FD3D12ShaderResourceRenameListener)this;
      *pFVar8 = (FD3D12ShaderResourceRenameListener)
                &
                ___7FRecordUpdateShaderResourceRenameListener_FD3D12RayTracingShaderBindingTableInternal__6B_
      ;
      pFVar8[3] = (FD3D12ShaderResourceRenameListener)0x0;
      pFVar8[4] = (FD3D12ShaderResourceRenameListener)0x0;
    }
    *(uint *)(pFVar8 + 2) = param_2;
    FVar3 = pFVar8[3];
    local_30 = pFVar8;
    if (FVar3 != (FD3D12ShaderResourceRenameListener)param_4) {
      pFVar8[3] = (FD3D12ShaderResourceRenameListener)param_4;
      if (param_4 != (FD3D12BaseShaderResource *)0x0) {
        (**(code **)(param_4->_padding_ + 8))(param_4,local_38);
      }
      if (FVar3 != (FD3D12ShaderResourceRenameListener)0x0) {
        (**(code **)(*(longlong *)FVar3 + 0x10))(FVar3);
      }
    }
    pFVar8[4] = (FD3D12ShaderResourceRenameListener)(param_4->ResourceLocation).UnderlyingResource;
    FD3D12BaseShaderResource::AddRenameListener((FD3D12BaseShaderResource *)pFVar8[3],pFVar8);
    if (pFVar8[4] != (FD3D12ShaderResourceRenameListener)0x0) {
      UpdatePersistentReferencedResource
                ((FD3D12RayTracingShaderBindingTableInternal *)pFVar8[1],param_1,
                 (FD3D12Resource *)pFVar8[4],1);
    }
    if (((*(FD3D12ShaderResourceRenameListener ***)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x48)
          <= &local_30) &&
        (&local_30 <
         *(FD3D12ShaderResourceRenameListener ***)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x48) +
         *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x54))) &&
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
    iVar7 = *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x50);
    if (iVar7 == *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x54)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x48),
                         (int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x54));
    }
    *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x50) = iVar7 + 1;
    *(FD3D12ShaderResourceRenameListener **)
     (*(longlong *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x48) + (longlong)iVar7 * 8) = local_30
    ;
  }
  return;
}

// AddReferencedTexture @ 1459ff400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::AddReferencedTexture
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,uint param_2,
          ERayTracingLocalShaderBindingType param_3,FRHITexture *param_4)

{
  longlong *plVar1;
  FD3D12RHITextureReference *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FRecordUpdateTextureReferenceReplaceListener *pFVar9;
  FRecordUpdateTextureReferenceReplaceListener *this_00;
  FD3D12BaseShaderResource *pFVar10;
  FD3D12BaseShaderResource *pFVar11;
  longlong *plVar12;
  undefined1 local_res20 [8];
  FRecordUpdateTextureReferenceReplaceListener *local_48 [2];
  
  if ((param_3 == Transient) || (this->Lifetime != Persistent)) {
    uVar6 = *(uint *)&this->Device->field_0x8;
    if ((param_4 == (FRHITexture *)0x0) ||
       (lVar8 = (**(code **)(param_4->_padding_ + 0x48))(), lVar8 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x200 + (ulonglong)uVar6 * 8);
    }
    AddDynamicReferencedResource(this,param_1,*(FD3D12Resource **)(lVar8 + 400));
    return;
  }
  if (param_3 == Persistent) {
    lVar8 = (**(code **)(param_4->_padding_ + 0x28))(param_4);
    if (lVar8 == 0) {
      uVar6 = *(uint *)&this->Device->field_0x8;
      lVar8 = (**(code **)(param_4->_padding_ + 0x48))(param_4);
      pFVar11 = (FD3D12BaseShaderResource *)0x0;
      if (lVar8 != 0) {
        pFVar11 = *(FD3D12BaseShaderResource **)(lVar8 + 0x200 + (ulonglong)uVar6 * 8);
      }
      pFVar10 = (FD3D12BaseShaderResource *)
                &pFVar11[1].ResourceLocation.AllocatorData.PoolAllocatorPrivateData.PoolData.
                 PreviousAllocation;
      if (pFVar11 == (FD3D12BaseShaderResource *)0x0) {
        pFVar10 = (FD3D12BaseShaderResource *)0x0;
      }
      AddReferencedShaderResource(this,param_1,param_2,Persistent,pFVar10);
    }
    else {
      this_00 = (FRecordUpdateTextureReferenceReplaceListener *)0x0;
      pFVar2 = *(FD3D12RHITextureReference **)
                (lVar8 + 0x160 + (ulonglong)*(uint *)&this->Device->field_0x8 * 8);
      uVar6 = 0;
      if ((int)param_2 < (this->HitRecordData).ArrayNum) {
        uVar6 = ~param_2 >> 0x1f;
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
      pFVar3 = (this->HitRecordData).AllocatorInstance.Data;
      plVar12 = *(longlong **)(pFVar3 + (longlong)(int)param_2 * 0x78 + 0x58);
      iVar7 = *(int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 0x60);
      plVar1 = plVar12 + iVar7;
      while( true ) {
        if (*(int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 0x60) != iVar7) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener_*,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (plVar12 == plVar1) break;
        if (*(FD3D12RHITextureReference **)(*plVar12 + 0x20) == pFVar2) {
          return;
        }
        plVar12 = plVar12 + 1;
      }
      pFVar9 = ::operator_new(0x30);
      if (pFVar9 != (FRecordUpdateTextureReferenceReplaceListener *)0x0) {
        pFVar9->ShaderTable = this;
        pFVar9->_padding_ =
             (longlong)
             &FRecordUpdateTextureReferenceReplaceListener::
              _vftable__for__FD3D12TextureReferenceReplaceListener__;
        pFVar9->_padding_ =
             (longlong)
             &FRecordUpdateTextureReferenceReplaceListener::
              _vftable__for__FD3D12ShaderResourceRenameListener__;
        pFVar9->RecordIndex = 0;
        (pFVar9->TextureReference).Reference = (FD3D12RHITextureReference *)0x0;
        pFVar9->CurrentResource = (FD3D12Resource *)0x0;
        this_00 = pFVar9;
      }
      local_48[0] = this_00;
      FRecordUpdateTextureReferenceReplaceListener::Init(this_00,param_1,param_2,pFVar2);
      if (((*(FRecordUpdateTextureReferenceReplaceListener ***)
             (pFVar3 + (longlong)(int)param_2 * 0x78 + 0x58) <= local_48) &&
          (local_48 <
           *(FRecordUpdateTextureReferenceReplaceListener ***)
            (pFVar3 + (longlong)(int)param_2 * 0x78 + 0x58) +
           *(int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 100))) &&
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
      iVar7 = *(int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 0x60);
      if (iVar7 == *(int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 100)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)
                                 (pFVar3 + (longlong)(int)param_2 * 0x78 + 0x58),
                           (int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 100));
      }
      *(int *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 0x60) = iVar7 + 1;
      *(FRecordUpdateTextureReferenceReplaceListener **)
       (*(longlong *)(pFVar3 + (longlong)(int)param_2 * 0x78 + 0x58) + (longlong)iVar7 * 8) =
           local_48[0];
    }
  }
  return;
}

// AddReferencedUniformBuffer @ 1459ff6b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::AddReferencedUniformBuffer
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,uint param_2,uint param_3,
          uint param_4,ERayTracingLocalShaderBindingType param_5,FD3D12UniformBuffer *param_6)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FD3D12UniformBuffer *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar8;
  longlong *plVar9;
  FRecordUpdateUniformBufferListener *local_48;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_40;
  
  pFVar4 = param_6;
  pTVar8 = FD3D12Resource::GetResidencyHandles
                     ((param_6->ResourceLocation).UnderlyingResource,&local_40);
  if (pTVar8->ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBuffer->ResourceLocation.GetResource()->GetResidencyHandles().IsEmpty()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x91a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->Lifetime == Persistent) && (param_5 == Persistent)) {
    uVar6 = 0;
    if ((int)param_2 < (this->HitRecordData).ArrayNum) {
      uVar6 = ~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->HitRecordData).AllocatorInstance.Data;
    plVar9 = *(longlong **)(pFVar2 + (longlong)(int)param_2 * 0x78 + 8);
    iVar7 = *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x10);
    plVar1 = plVar9 + iVar7;
    while( true ) {
      if (*(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x10) != iVar7) {
        param_6._0_1_ = 0;
        `TCheckedPointerIterator<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&param_6);
      }
      if (plVar9 == plVar1) break;
      if (*(FD3D12UniformBuffer **)(*plVar9 + 0x10) == pFVar4) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Listener->UniformBuffer != UniformBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x922,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar9 = plVar9 + 1;
    }
    local_48 = ::operator_new(0x28);
    if (local_48 == (FRecordUpdateUniformBufferListener *)0x0) {
      local_48 = (FRecordUpdateUniformBufferListener *)0x0;
    }
    else {
      local_48->ShaderTable = this;
      local_48->_padding_ =
           (longlong)
           &___7FRecordUpdateUniformBufferListener_FD3D12RayTracingShaderBindingTableInternal__6B_;
      local_48->UniformBuffer = (FD3D12UniformBuffer *)0x0;
      local_48->ShaderTableOffset = 0;
      local_48->RecordIndex = 0;
      local_48->OffsetWithinRootSignature = 0;
    }
    FRecordUpdateUniformBufferListener::Init(local_48,pFVar4,param_3,param_2,param_4);
    if ((*(FRecordUpdateUniformBufferListener ***)(pFVar2 + (longlong)(int)param_2 * 0x78 + 8) <=
         &local_48) &&
       (&local_48 <
        *(FRecordUpdateUniformBufferListener ***)(pFVar2 + (longlong)(int)param_2 * 0x78 + 8) +
        *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x14))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x10);
    if (iVar7 == *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x14)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 8),
                         (int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x14));
    }
    *(int *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 0x10) = iVar7 + 1;
    *(FRecordUpdateUniformBufferListener **)
     (*(longlong *)(pFVar2 + (longlong)(int)param_2 * 0x78 + 8) + (longlong)iVar7 * 8) = local_48;
  }
  return;
}

// ClearHitRecordData @ 145a07040

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::ClearHitRecordData
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,uint param_2)

{
  FD3D12TextureReferenceReplaceListener *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  ID3D12UniformBufferUpdateListener *pIVar4;
  FD3D12ResourceLocation *this_00;
  FD3D12ShaderResourceRenameListener *pFVar5;
  FD3D12ShaderResourceRenameListener FVar6;
  FD3D12TextureReferenceReplaceListener *pFVar7;
  longlong lVar8;
  FD3D12TextureReferenceReplaceListener FVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  FD3D12BaseShaderResource *this_01;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TRefCountPtr<FD3D12BaseShaderResource> local_60;
  TRefCountPtr<FD3D12BaseShaderResource> local_58;
  FD3D12ShaderResourceRenameListener local_50;
  FD3D12BaseShaderResource *local_48 [2];
  
  if (this->Lifetime == Persistent) {
    uVar12 = 0;
    if ((int)param_2 < (this->HitRecordData).ArrayNum) {
      uVar12 = ~param_2 >> 0x1f;
    }
    local_res10 = param_1;
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar15 = (this->HitRecordData).AllocatorInstance.Data + (longlong)(int)param_2 * 0x78;
    puVar14 = *(undefined8 **)(pFVar15 + 8);
    iVar3 = *(int *)(pFVar15 + 0x10);
    puVar2 = puVar14 + iVar3;
    while( true ) {
      if (*(int *)(pFVar15 + 0x10) != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar14 == puVar2) break;
      pIVar4 = (ID3D12UniformBufferUpdateListener *)*puVar14;
      if (pIVar4[2] == (ID3D12UniformBufferUpdateListener)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("UniformBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x760,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FD3D12UniformBuffer::RemoveUpdateListener((FD3D12UniformBuffer *)pIVar4[2],pIVar4);
      pIVar4[2] = (ID3D12UniformBufferUpdateListener)0x0;
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,1);
      puVar14 = puVar14 + 1;
    }
    this_00 = *(FD3D12ResourceLocation **)(pFVar15 + 0x40);
    if (this_00 != (FD3D12ResourceLocation *)0x0) {
      FD3D12ResourceLocation::~FD3D12ResourceLocation(this_00);
      ::operator_delete(this_00,0x78);
      *(undefined8 *)(pFVar15 + 0x40) = 0;
    }
    if (*(FD3D12RayTracingGeometry **)(pFVar15 + 0x28) != (FD3D12RayTracingGeometry *)0x0) {
      FD3D12RayTracingGeometry::RemoveUpdateListener
                (*(FD3D12RayTracingGeometry **)(pFVar15 + 0x28),
                 (ID3D12RayTracingGeometryUpdateListener *)(pFVar15 + 0x18));
    }
    puVar14 = *(undefined8 **)(pFVar15 + 0x48);
    iVar3 = *(int *)(pFVar15 + 0x50);
    puVar2 = puVar14 + iVar3;
    while( true ) {
      if (*(int *)(pFVar15 + 0x50) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateShaderResourceRenameListener_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (puVar14 == puVar2) break;
      pFVar5 = (FD3D12ShaderResourceRenameListener *)*puVar14;
      if (pFVar5[3] == (FD3D12ShaderResourceRenameListener)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderResource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x7cb,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (pFVar5[4] != (FD3D12ShaderResourceRenameListener)0x0) {
        UpdatePersistentReferencedResource
                  ((FD3D12RayTracingShaderBindingTableInternal *)pFVar5[1],param_1,
                   (FD3D12Resource *)pFVar5[4],-1);
        local_50 = pFVar5[3];
        FVar6 = pFVar5[1];
        if (local_50 != (FD3D12ShaderResourceRenameListener)0x0) {
          (**(code **)(*(longlong *)local_50 + 8))(local_50,local_64);
        }
        TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
        ::Emplace<TRefCountPtr<FD3D12BaseShaderResource>_>
                  ((TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
                    *)((ulonglong)param_1 * 0x140 + (longlong)FVar6 + 0x148),&local_60,
                   (bool *)&local_50);
        if (local_50 != (FD3D12ShaderResourceRenameListener)0x0) {
          (**(code **)(*(longlong *)local_50 + 0x10))();
        }
      }
      FD3D12BaseShaderResource::RemoveRenameListener((FD3D12BaseShaderResource *)pFVar5[3],pFVar5);
      FVar6 = pFVar5[3];
      if (FVar6 != (FD3D12ShaderResourceRenameListener)0x0) {
        pFVar5[3] = (FD3D12ShaderResourceRenameListener)0x0;
        (**(code **)(*(longlong *)FVar6 + 0x10))();
      }
      *(undefined4 *)(pFVar5 + 2) = 0;
      pFVar5[4] = (FD3D12ShaderResourceRenameListener)0x0;
      if (pFVar5 != (FD3D12ShaderResourceRenameListener *)0x0) {
        (**(code **)((longlong)*pFVar5 + 8))(pFVar5,1);
      }
      puVar14 = puVar14 + 1;
    }
    puVar14 = *(undefined8 **)(pFVar15 + 0x58);
    iVar3 = *(int *)(pFVar15 + 0x60);
    puVar2 = puVar14 + iVar3;
    while( true ) {
      if (*(int *)(pFVar15 + 0x60) != iVar3) {
        local_68[0] = 0;
        `TCheckedPointerIterator<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_68);
      }
      if (puVar14 == puVar2) break;
      pFVar7 = (FD3D12TextureReferenceReplaceListener *)*puVar14;
      pFVar1 = pFVar7 + 5;
      if ((pFVar7[4] == (FD3D12TextureReferenceReplaceListener)0x0) ||
         (*pFVar1 == (FD3D12TextureReferenceReplaceListener)0x0)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TextureReference && CurrentResource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x80b,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      UpdatePersistentReferencedResource
                ((FD3D12RayTracingShaderBindingTableInternal *)pFVar7[2],local_res10,
                 (FD3D12Resource *)*pFVar1,-1);
      lVar8 = *(longlong *)((longlong)pFVar7[4] + 0x138);
      this_01 = (FD3D12BaseShaderResource *)(lVar8 + 0x138);
      FD3D12BaseShaderResource::RemoveRenameListener
                (this_01,(FD3D12ShaderResourceRenameListener *)(pFVar7 + 1));
      FD3D12RHITextureReference::RemoveReplaceListener
                ((FD3D12RHITextureReference *)pFVar7[4],pFVar7);
      if (lVar8 == 0) {
        this_01 = (FD3D12BaseShaderResource *)0x0;
      }
      uVar13 = (ulonglong)local_res10;
      FVar9 = pFVar7[2];
      local_48[0] = this_01;
      if (this_01 != (FD3D12BaseShaderResource *)0x0) {
        (**(code **)(this_01->_padding_ + 8))
                  (this_01,(undefined1 *)((longlong)&local_60.Reference + 4));
      }
      TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
      ::Emplace<TRefCountPtr<FD3D12BaseShaderResource>_>
                ((TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
                  *)(uVar13 * 0x140 + (longlong)FVar9 + 0x148),&local_58,(bool *)local_48);
      if (local_48[0] != (FD3D12BaseShaderResource *)0x0) {
        (**(code **)(local_48[0]->_padding_ + 0x10))();
      }
      FVar9 = pFVar7[4];
      if (FVar9 != (FD3D12TextureReferenceReplaceListener)0x0) {
        pFVar7[4] = (FD3D12TextureReferenceReplaceListener)0x0;
        FRHIResource::Release((FRHIResource *)FVar9);
      }
      *(undefined4 *)(pFVar7 + 3) = 0;
      *pFVar1 = (FD3D12TextureReferenceReplaceListener)0x0;
      (**(code **)((longlong)*pFVar7 + 8))(pFVar7,1);
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)(pFVar15 + 0x50) = 0;
    if (*(int *)(pFVar15 + 0x54) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(pFVar15 + 0x48),0,(int *)(pFVar15 + 0x54));
    }
    *(undefined4 *)(pFVar15 + 0x60) = 0;
    if (*(int *)(pFVar15 + 100) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(pFVar15 + 0x58),0,(int *)(pFVar15 + 100));
    }
    *(undefined8 *)(pFVar15 + 0x20) = 0;
    *(undefined8 *)(pFVar15 + 0x28) = 0;
    *(undefined8 *)(pFVar15 + 0x30) = 0;
    *(undefined4 *)(pFVar15 + 0x38) = 0;
    *(undefined4 *)(pFVar15 + 0x10) = 0;
    if (*(int *)(pFVar15 + 0x14) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(pFVar15 + 8),0,(int *)(pFVar15 + 0x14));
    }
    *(undefined4 *)(pFVar15 + 0x70) = 0;
    if (*(int *)(pFVar15 + 0x74) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(pFVar15 + 0x68),0,(int *)(pFVar15 + 0x74));
    }
    *(undefined4 *)pFVar15 = 0;
  }
  return;
}

// Commit @ 145a07540

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::Commit
          (FD3D12RayTracingShaderBindingTableInternal *this,FD3D12CommandContext *param_1,
          FRHIBuffer *param_2)

{
  longlong *plVar1;
  TArray<TRefCountPtr<FD3D12Resource>,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<TRefCountPtr<FD3D12Resource>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>_>
  *pTVar3;
  TArray<FD3D12Resource_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
  *this_00;
  schar *psVar5;
  FScriptContainerElement *pFVar6;
  FD3D12Resource *pFVar7;
  undefined1 *puVar8;
  FD3D12Device *pFVar9;
  FD3D12Adapter *this_01;
  FD3D12Buffer *pFVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 *puVar13;
  FD3D12RayTracingShaderBindingTableInternal *pFVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  FD3D12Buffer *pFVar19;
  TRefCountPtr<FD3D12SyncPoint> TVar20;
  int *piVar21;
  void *_Dst;
  uint uVar22;
  ulonglong uVar23;
  char cVar24;
  void *pvVar25;
  FNoopStruct FVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined8 *puVar29;
  longlong lVar30;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *pTVar31;
  FD3D12CommandContext *this_02;
  undefined1 auStackY_3b8 [32];
  FNoopStruct local_368;
  char local_367;
  char local_366;
  uint local_364;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  void *local_340;
  FD3D12Resource *local_338;
  undefined8 local_330;
  int local_328 [2];
  longlong local_320;
  undefined8 *local_318;
  FD3D12RayTracingShaderBindingTableInternal *local_310;
  longlong local_308;
  FD3D12CommandContext *local_300;
  uint local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int iStack_2ec;
  wchar_t *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  ulonglong local_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  uint uStack_28c;
  uint *local_288;
  FD3D12Resource **local_280;
  TRefCountPtr<FD3D12Resource> local_278;
  undefined8 *local_270;
  FRHIBuffer *local_268;
  FName local_260;
  FName local_258 [2];
  undefined1 local_248 [16];
  longlong *local_238;
  undefined1 auStack_230 [16];
  uint uStack_220;
  uint uStack_21c;
  longlong local_218;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *pTStack_210;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *local_208;
  undefined2 local_200;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  FRHIBufferCreateDesc local_198;
  undefined1 local_160 [32];
  longlong local_140;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *pTStack_138;
  undefined1 local_130 [32];
  longlong local_110;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  *pTStack_108;
  FD3D12ResourceLocation local_f8;
  D3D12_RESOURCE_DESC local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_310 = this;
  local_300 = param_1;
  local_268 = param_2;
  if (CpuChannel->Enabled < 0) {
    local_366 = '\0';
  }
  else {
    local_366 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::Commit(FD3D12CommandContext&___ptr64,FRHIBuffer*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1632,"ShaderTableCommit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x660);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::Commit(FD3D12CommandContext&___ptr64,FRHIBuffer*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1632);
  }
  bVar15 = IsInRHIThread();
  if (((!bVar15) && (GIsRunningRHIInSeparateThread_InternalUseOnly != false)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRHIThread() || !IsRunningRHIInSeparateThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x662,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((this->bIsDirty == false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsDirty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x663,L"bIsDirty should be checked before calling Commit()"), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (CpuChannel->Enabled < 0) {
    local_367 = '\0';
  }
  else {
    local_367 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::Commit(FD3D12CommandContext&___ptr64,FRHIBuffer*___ptr64)___ptr64'
                ::__l19::__CpuProfilerEventSpecId1640,"MergeWorkerData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x668);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::Commit(FD3D12CommandContext&___ptr64,FRHIBuffer*___ptr64)___ptr64'
               ::__l19::__CpuProfilerEventSpecId1640);
  }
  uVar23 = 1;
  local_320 = 1;
  local_308 = 0x140;
  local_364 = 1;
  FVar26 = local_368;
  do {
    lVar30 = local_320;
    puVar29 = *(undefined8 **)
               ((longlong)
                &(((TArray<TRefCountPtr<FD3D12Resource>,TSizedDefaultAllocator<32>_> *)
                  ((TSherwoodSet<void_*,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_> *)
                   (&this->WorkerData[0].LastTrackedBaseShaderResources + 1) + 1))->
                 AllocatorInstance).Data + local_308);
    local_288 = &this->NumHitRecords + uVar23 * 0x50;
    iVar18 = this->WorkerData[local_320].DynamicReferencedResources.ArrayNum;
    local_318 = puVar29 + iVar18;
    while( true ) {
      puVar13 = local_318;
      if (this->WorkerData[lVar30].DynamicReferencedResources.ArrayNum != iVar18) {
        local_368 = (FNoopStruct)0x0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12Resource>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_368);
      }
      if (puVar29 == puVar13) break;
      pvVar25 = (void *)*puVar29;
      cVar24 = '\0';
      uVar22 = ((uint)((ulonglong)pvVar25 >> 0x14) & 0xffff ^ (uint)((ulonglong)pvVar25 >> 4)) *
               -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      uVar22 = uVar22 >> 0x10 ^ uVar22;
      uVar28 = this->WorkerData[0].DynamicReferencedResourceSet.Table.NumSlotsMinusOne & uVar22;
      uVar23 = (ulonglong)uVar28;
      if ((this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.Distances !=
           (schar *)0x0) &&
         (psVar5 = this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.Distances,
         -1 < psVar5[uVar23])) {
        cVar24 = '\0';
        do {
          if (pvVar25 ==
              this->WorkerData[0].DynamicReferencedResourceSet.Table.CurrentData.Keys[uVar23])
          goto LAB_145a07847;
          uVar28 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar28;
          cVar24 = cVar24 + '\x01';
        } while (cVar24 <= psVar5[uVar23]);
      }
      Experimental::TSherwoodHashTable_Private::
      TSherwoodHashTable<void_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>
      ::Add(&this->WorkerData[0].DynamicReferencedResourceSet.Table,cVar24,
            (FData *)&this->WorkerData[0].DynamicReferencedResourceSet,uVar28,pvVar25,uVar22,FVar26)
      ;
      pTVar2 = &this->WorkerData[0].DynamicReferencedResources;
      if (pvVar25 != (void *)0x0) {
        LOCK();
        *(int *)((longlong)pvVar25 + 8) = *(int *)((longlong)pvVar25 + 8) + 1;
        UNLOCK();
      }
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      local_340 = pvVar25;
      if (((pFVar6 <= (FScriptContainerElement *)&local_340) &&
          ((FScriptContainerElement *)&local_340 <
           pFVar6 + (longlong)this->WorkerData[0].DynamicReferencedResources.ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar17 = this->WorkerData[0].DynamicReferencedResources.ArrayNum;
      piVar21 = &this->WorkerData[0].DynamicReferencedResources.ArrayMax;
      if (iVar17 == *piVar21) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar21);
      }
      this->WorkerData[0].DynamicReferencedResources.ArrayNum = iVar17 + 1;
      pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 8;
      *(undefined8 *)pFVar6 = 0;
      *(void **)pFVar6 = local_340;
      local_340 = (void *)0x0;
LAB_145a07847:
      puVar29 = puVar29 + 1;
    }
    pTVar31 = (TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
               *)(local_288 + 0x3e);
    TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_160,pTVar31);
    local_200 = 0;
    stack0xfffffffffffffdd8 = local_160._16_16_;
    local_238 = (longlong *)local_160._0_8_;
    auStack_230._0_8_ = local_160._8_8_;
    local_218 = local_140;
    pTStack_210 = pTStack_138;
    uVar23 = local_160._24_8_ >> 0x20;
    local_208 = pTVar31;
    if (local_160._28_4_ < *(int *)(local_160._16_8_ + 0x18)) {
      pTVar3 = &this->WorkerData[0].PersistentReferencedResources;
      do {
        pFVar7 = *(FD3D12Resource **)(*local_238 + (longlong)(int)uVar23 * 0x18);
        iVar18 = *(int *)(*local_238 + 8 + (longlong)(int)uVar23 * 0x18);
        if ((pFVar7 == (FD3D12Resource *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x8b9,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (pFVar7 != (FD3D12Resource *)0x0) {
          LOCK();
          *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
          UNLOCK();
        }
        uVar22 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
                 -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar22 = uVar22 >> 0x10 ^ uVar22;
        local_338 = pFVar7;
        if (*(int *)&this->WorkerData[0].PersistentReferencedResources.field_0x8 !=
            *(int *)&this->WorkerData[0].PersistentReferencedResources.field_0x34) {
          puVar8 = *(undefined1 **)&this->WorkerData[0].PersistentReferencedResources.field_0x40;
          puVar27 = &this->WorkerData[0].PersistentReferencedResources.field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar27 = puVar8;
          }
          iVar17 = *(int *)(puVar27 +
                           (ulonglong)
                           (*(int *)&this->WorkerData[0].PersistentReferencedResources.field_0x48 -
                            1U & uVar22) * 4);
          if (iVar17 != -1) {
            do {
              lVar30 = *(longlong *)&pTVar3->field_0x0 + (longlong)iVar17 * 0x18;
              if (*(FD3D12Resource **)(*(longlong *)&pTVar3->field_0x0 + (longlong)iVar17 * 0x18) ==
                  pFVar7) {
                if (lVar30 != 0) goto LAB_145a07a04;
                break;
              }
              iVar17 = *(int *)(lVar30 + 0x10);
            } while (iVar17 != -1);
          }
        }
        local_280 = &local_338;
        TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<TRefCountPtr<FD3D12Resource>_&&>_>
                  ((TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                    *)pTVar3,(uint)local_328,
                   (TKeyInitializer<TRefCountPtr<FD3D12Resource>_&&> *)(ulonglong)uVar22,
                   (bool *)&local_280);
        lVar30 = *(longlong *)&pTVar3->field_0x0 + (longlong)local_328[0] * 0x18;
LAB_145a07a04:
        if (local_338 != (FD3D12Resource *)0x0) {
          plVar1 = &local_338->_padding_;
          LOCK();
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) &&
             (local_338 != (FD3D12Resource *)0x0)) {
            (**(code **)local_338->_padding_)(local_338,1);
          }
        }
        piVar21 = (int *)(lVar30 + 8);
        *piVar21 = *piVar21 + iVar18;
        if ((*piVar21 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ReferenceCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x8c1,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(int *)(lVar30 + 8) == 0) {
          if (pFVar7 != (FD3D12Resource *)0x0) {
            LOCK();
            *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
            UNLOCK();
          }
          local_278.Reference = pFVar7;
          if (*(int *)&this->WorkerData[0].PersistentReferencedResources.field_0x8 !=
              *(int *)&this->WorkerData[0].PersistentReferencedResources.field_0x34) {
            uVar22 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
                     -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<TRefCountPtr<FD3D12Resource>_>
                      ((TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                        *)pTVar3,uVar22 >> 0x10 ^ uVar22,&local_278);
          }
          if (pFVar7 != (FD3D12Resource *)0x0) {
            plVar1 = &pFVar7->_padding_;
            LOCK();
            lVar30 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar30 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)pFVar7->_padding_)(pFVar7,1);
            }
          }
        }
        uStack_220 = uStack_220 & ~auStack_230._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_230);
        FVar26 = local_368;
        uVar23 = (ulonglong)uStack_21c;
      } while ((int)uStack_21c < *(int *)(auStack_230._8_8_ + 0x18));
      if (((char)local_200 != '\0') && (local_200._1_1_ != '\0')) {
        uVar22 = *(int *)&(local_208->Elements).field_0x8 -
                 *(int *)&(local_208->Elements).field_0x34;
        iVar18 = 1;
        if (3 < uVar22) {
          uVar23 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
          lVar30 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          local_258[1].ComparisonIndex.Value = (uint)lVar30;
          iVar18 = 1 << ((byte)lVar30 & 0x1f);
        }
        if (((0 < (int)uVar22) && (local_208->HashSize < iVar18)) || (iVar18 < local_208->HashSize))
        {
          local_208->HashSize = iVar18;
          TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
          ::Rehash(local_208);
        }
      }
    }
    lVar30 = local_320;
    uVar23 = (ulonglong)local_364;
    DestructItems<TRefCountPtr<FD3D12Resource>,int>
              ((TRefCountPtr<FD3D12Resource> *)
               this->WorkerData[local_320].DynamicReferencedResources.AllocatorInstance.Data,
               this->WorkerData[local_320].DynamicReferencedResources.ArrayNum);
    piVar21 = &this->WorkerData[lVar30].DynamicReferencedResources.ArrayMax;
    this->WorkerData[lVar30].DynamicReferencedResources.ArrayNum = 0;
    if (*piVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&this->WorkerData[uVar23].DynamicReferencedResources.AllocatorInstance,0,
                 piVar21);
    }
    pFVar14 = local_310;
    psVar5 = local_310->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData.Distances;
    if (psVar5 != (schar *)0x0) {
      FMemory::Free(psVar5);
      FMemory::Free(pFVar14->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData.Keys)
      ;
      FMemory::Free(pFVar14->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData.
                    Values);
    }
    pFVar14 = local_310;
    this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.NumSlotsMinusOne = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.MaxLookups = '\0';
    this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.NumElements = 0;
    local_1b8 = 0;
    uStack_1a0 = 0;
    *(undefined8 *)&this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData = 0;
    this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData.Distances = (schar *)0x0
    ;
    this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData.Keys = (void **)0x0;
    this->WorkerData[lVar30].DynamicReferencedResourceSet.Table.CurrentData.Values =
         (FNoopStruct *)0x0;
    bVar15 = 1 < *(int *)&local_310->WorkerData[lVar30].PersistentReferencedResources.field_0x48;
    if (!bVar15) {
      TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                        *)&local_310->WorkerData[lVar30].PersistentReferencedResources);
    }
    TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources,0,
                      *(int *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x8);
    puVar8 = &pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0xc;
    *(undefined4 *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x8 = 0;
    if (*(int *)puVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)
                          &pFVar14->WorkerData[lVar30].PersistentReferencedResources,0,(int *)puVar8
                );
    }
    *(undefined4 *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x30 =
         0xffffffff;
    *(undefined4 *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x34 = 0;
    iVar18 = *(int *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x2c;
    *(undefined4 *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x28 = 0;
    if ((iVar18 < 0) || (0x80 < iVar18)) {
      *(undefined4 *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x10,0);
    }
    if (bVar15) {
      *(undefined4 *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources.field_0x48 = 1;
      TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                *)&pFVar14->WorkerData[lVar30].PersistentReferencedResources);
    }
    iVar18 = pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.HashSize;
    if (iVar18 < 2) {
      TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
      ::UnhashElements(&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources);
    }
    TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements,0,
                      *(int *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.
                               field_0x8);
    puVar8 = &pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0xc;
    *(undefined4 *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x8 =
         0;
    if (*(int *)puVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)
                          &pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources,0,
                 (int *)puVar8);
    }
    *(undefined4 *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x30 =
         0xffffffff;
    *(undefined4 *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x34 =
         0;
    iVar17 = *(int *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x2c
    ;
    *(undefined4 *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x28 =
         0;
    if ((iVar17 < 0) || (0x80 < iVar17)) {
      *(undefined4 *)&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x2c
           = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.Elements.field_0x10,0);
    }
    if (1 < iVar18) {
      pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources.HashSize = 1;
      TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
      ::Rehash(&pFVar14->WorkerData[lVar30].LastTrackedBaseShaderResources);
    }
    cVar24 = local_366;
    local_320 = lVar30 + 1;
    local_364 = local_364 + 1;
    uVar23 = (ulonglong)local_364;
    local_308 = local_308 + 0x140;
    this = pFVar14;
    if (4 < local_364) {
      if (local_367 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::Commit(FD3D12CommandContext&___ptr64,FRHIBuffer*___ptr64)___ptr64'
                    ::__l28::__CpuProfilerEventSpecId1661,"BuildUsedResourceSet",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x67d);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::Commit(FD3D12CommandContext&___ptr64,FRHIBuffer*___ptr64)___ptr64'
                   ::__l28::__CpuProfilerEventSpecId1661);
      }
      pTVar4 = &pFVar14->ReferencedResources;
      uVar22 = (pFVar14->WorkerData[0].DynamicReferencedResources.ArrayNum -
               *(int *)&pFVar14->WorkerData[0].PersistentReferencedResources.field_0x34) +
               *(int *)&pFVar14->WorkerData[0].PersistentReferencedResources.field_0x8;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      lVar30 = 0;
      piVar21 = &(pFVar14->ReferencedResources).ArrayMax;
      (pFVar14->ReferencedResources).ArrayNum = 0;
      if (*piVar21 != uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar22,&pTVar4->AllocatorInstance,0,piVar21);
      }
      pTVar3 = &pFVar14->WorkerData[0].PersistentReferencedResources;
      TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_130,
                 (TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                  *)pTVar3);
      local_1c0 = 0;
      stack0xfffffffffffffe18 = local_130._16_16_;
      local_1f8 = (longlong *)local_130._0_8_;
      auStack_1f0._0_8_ = local_130._8_8_;
      local_1d8 = local_110;
      pTStack_1d0 = pTStack_108;
      uVar23 = local_130._24_8_ >> 0x20;
      local_1c8 = (TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                   *)pTVar3;
      if (local_130._28_4_ < *(int *)(local_130._16_8_ + 0x18)) {
        do {
          local_330 = *(undefined8 *)(*local_1f8 + (longlong)(int)uVar23 * 0x18);
          pFVar6 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_330) &&
              ((FScriptContainerElement *)&local_330 <
               pFVar6 + (longlong)(pFVar14->ReferencedResources).ArrayMax * 8)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar18 = (pFVar14->ReferencedResources).ArrayNum;
          if (iVar18 == *piVar21) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar4->AllocatorInstance,
                                &(pFVar14->ReferencedResources).ArrayMax);
          }
          (pFVar14->ReferencedResources).ArrayNum = iVar18 + 1;
          *(undefined8 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_330;
          uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
          uVar23 = (ulonglong)uStack_1dc;
        } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
        if (((char)local_1c0 != '\0') && (local_1c0._1_1_ != '\0')) {
          uVar22 = *(int *)&(local_1c8->Elements).field_0x8 -
                   *(int *)&(local_1c8->Elements).field_0x34;
          if (uVar22 < 4) {
            iVar18 = 1;
          }
          else {
            uVar23 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_258[1].Number = (uint)lVar12;
            iVar18 = 1 << ((byte)lVar12 & 0x1f);
          }
          if (((0 < (int)uVar22) && (local_1c8->HashSize < iVar18)) ||
             (iVar18 < local_1c8->HashSize)) {
            local_1c8->HashSize = iVar18;
            TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
            ::Rehash(local_1c8);
          }
        }
      }
      pTVar4 = &pFVar14->ReferencedResources;
      pTVar2 = &pFVar14->WorkerData[0].DynamicReferencedResources;
      if ((pTVar4 == (TArray<FD3D12Resource_*,TSizedDefaultAllocator<32>_> *)pTVar2) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar18 = pFVar14->WorkerData[0].DynamicReferencedResources.ArrayNum;
      if (iVar18 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar18,&pTVar4->AllocatorInstance,
                            &(pFVar14->ReferencedResources).ArrayNum,
                            &(pFVar14->ReferencedResources).ArrayMax);
        ConstructItems<FD3D12Resource_*,TRefCountPtr<FD3D12Resource>,int>
                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 8,
                   (TRefCountPtr<FD3D12Resource> *)(pTVar2->AllocatorInstance).Data,iVar18);
      }
      DestructItems<TRefCountPtr<FD3D12Resource>,int>
                ((TRefCountPtr<FD3D12Resource> *)(pTVar2->AllocatorInstance).Data,
                 pFVar14->WorkerData[0].DynamicReferencedResources.ArrayNum);
      piVar21 = &pFVar14->WorkerData[0].DynamicReferencedResources.ArrayMax;
      pFVar14->WorkerData[0].DynamicReferencedResources.ArrayNum = 0;
      if (*piVar21 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,piVar21);
      }
      Experimental::TSherwoodSet<void_*,Experimental::TSherwoodHashKeyFuncs<void_*,FNoopStruct>_>::
      Empty(&pFVar14->WorkerData[0].DynamicReferencedResourceSet);
      this_00 = &pFVar14->WorkerData[0].LastTrackedBaseShaderResources;
      if (pFVar14->WorkerData[0].LastTrackedBaseShaderResources.HashSize < 2) {
        TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
        TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(&this_00->Elements,0);
      }
      else {
        TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(&this_00->Elements,0);
        pFVar14->WorkerData[0].LastTrackedBaseShaderResources.HashSize = 1;
        TSet<TRefCountPtr<FD3D12BaseShaderResource>,DefaultKeyFuncs<TRefCountPtr<FD3D12BaseShaderResource>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar18 = pFVar14->WorkerData[1].MaxUsedHitRecordIndex;
      iVar17 = pFVar14->WorkerData[0].MaxUsedHitRecordIndex;
      pFVar14->WorkerData[1].MaxUsedHitRecordIndex = 0;
      if (iVar18 < iVar17) {
        iVar18 = iVar17;
      }
      iVar17 = pFVar14->WorkerData[2].MaxUsedHitRecordIndex;
      pFVar14->WorkerData[2].MaxUsedHitRecordIndex = 0;
      if (iVar17 < iVar18) {
        iVar17 = iVar18;
      }
      iVar18 = pFVar14->WorkerData[3].MaxUsedHitRecordIndex;
      pFVar14->WorkerData[3].MaxUsedHitRecordIndex = 0;
      if (iVar18 < iVar17) {
        iVar18 = iVar17;
      }
      iVar17 = pFVar14->WorkerData[4].MaxUsedHitRecordIndex;
      if (iVar17 < iVar18) {
        iVar17 = iVar18;
      }
      pFVar14->WorkerData[0].MaxUsedHitRecordIndex = iVar17;
      pFVar14->WorkerData[4].MaxUsedHitRecordIndex = 0;
      psVar5 = pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData.Distances;
      if (psVar5 != (schar *)0x0) {
        FMemory::Free(psVar5);
        FMemory::Free(pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData.Keys);
        FMemory::Free(pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData.Values);
      }
      local_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      pFVar14->WorkerData[0].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
      pFVar14->WorkerData[0].ShaderRecordCache.Table.MaxLookups = '\0';
      *(undefined8 *)&pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData = 0;
      pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
      pFVar14->WorkerData[0].ShaderRecordCache.Table.NumElements = 0;
      pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0
      ;
      pFVar14->WorkerData[0].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
      psVar5 = pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData.Distances;
      if (psVar5 != (schar *)0x0) {
        FMemory::Free(psVar5);
        FMemory::Free(pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData.Keys);
        FMemory::Free(pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData.Values);
      }
      local_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      *(undefined8 *)&pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData = 0;
      pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
      pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0
      ;
      pFVar14->WorkerData[1].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
      pFVar14->WorkerData[1].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
      pFVar14->WorkerData[1].ShaderRecordCache.Table.MaxLookups = '\0';
      pFVar14->WorkerData[1].ShaderRecordCache.Table.NumElements = 0;
      psVar5 = pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData.Distances;
      if (psVar5 != (schar *)0x0) {
        FMemory::Free(psVar5);
        FMemory::Free(pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData.Keys);
        FMemory::Free(pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData.Values);
      }
      local_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      *(undefined8 *)&pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData = 0;
      pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
      pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0
      ;
      pFVar14->WorkerData[2].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
      pFVar14->WorkerData[2].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
      pFVar14->WorkerData[2].ShaderRecordCache.Table.MaxLookups = '\0';
      pFVar14->WorkerData[2].ShaderRecordCache.Table.NumElements = 0;
      psVar5 = pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData.Distances;
      if (psVar5 != (schar *)0x0) {
        FMemory::Free(psVar5);
        FMemory::Free(pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData.Keys);
        FMemory::Free(pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData.Values);
      }
      local_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      *(undefined8 *)&pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData = 0;
      pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
      pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0
      ;
      pFVar14->WorkerData[3].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
      pFVar14->WorkerData[3].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
      pFVar14->WorkerData[3].ShaderRecordCache.Table.MaxLookups = '\0';
      pFVar14->WorkerData[3].ShaderRecordCache.Table.NumElements = 0;
      psVar5 = pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData.Distances;
      if (psVar5 != (schar *)0x0) {
        FMemory::Free(psVar5);
        FMemory::Free(pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData.Keys);
        FMemory::Free(pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData.Values);
      }
      local_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      *(undefined8 *)&pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData = 0;
      pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData.Distances = (schar *)0x0;
      pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0
      ;
      pFVar14->WorkerData[4].ShaderRecordCache.Table.CurrentData.Values = (uint *)0x0;
      pFVar14->WorkerData[4].ShaderRecordCache.Table.NumSlotsMinusOne = 0;
      pFVar14->WorkerData[4].ShaderRecordCache.Table.MaxLookups = '\0';
      pFVar14->WorkerData[4].ShaderRecordCache.Table.NumElements = 0;
      pFVar9 = pFVar14->Device;
      if ((*(longlong *)&pFVar9->field_0x10 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentAdapter != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x41,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_01 = *(FD3D12Adapter **)&pFVar9->field_0x10;
      this_02 = local_300;
      if ((pFVar14->ShaderBindingMode & RTPSO) != Disabled) {
        if (((int)(pFVar14->Data)._padding_ == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x6a0,
                                L"Shader table is expected to be initialized before copying to GPU."
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_2f8 = (**(code **)((pFVar14->Data)._padding_ + 0x10))(&pFVar14->Data);
        local_2b0 = (ulonglong)local_2f8;
        local_2e8 = L"ShaderBindingTable";
        uStack_2a4 = 0x10001;
        uStack_2a0 = 0;
        uStack_294 = 1;
        uStack_290 = 0;
        uStack_2cc = 0;
        uStack_2c8 = 0;
        local_2c0 = 1;
        uStack_2b8 = 0x40;
        local_78._4_4_ = uStack_2bc;
        local_78.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        uStack_2a8 = 1;
        local_78.Height = 1;
        local_78.DepthOrArraySize = 1;
        local_78.MipLevels = 1;
        uStack_29c = 1;
        uStack_298 = 0;
        local_78.Alignment = 0x40;
        uStack_2f4 = 0;
        local_78.Format = DXGI_FORMAT_UNKNOWN;
        local_78.SampleDesc.Count = 1;
        local_78.SampleDesc.Quality = 0;
        local_78.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        uStack_2f0 = 1;
        uStack_2e0 = 0;
        local_78._48_8_ = (ulonglong)uStack_28c << 0x20;
        uStack_2d4 = 0;
        uStack_2d0 = 0;
        iStack_2ec = 1 << ((byte)*(undefined4 *)&pFVar14->Device->field_0x8 & 0x1f);
        local_198._padding_ = (longlong)local_2f8;
        local_198._padding_ = CONCAT44(iStack_2ec,1);
        local_2d8 = 0x2000;
        local_198.DebugName = L"ShaderBindingTable";
        local_198.InitialData = (FResourceArrayUploadInterface *)0x0;
        local_2c4 = 0;
        local_198.OwnerName.ComparisonIndex.Value = 0;
        local_198.OwnerName.Number = 0;
        local_198.InitialState = CopyDest;
        local_198.InitAction = Default;
        local_198.ClassName.ComparisonIndex.Value = 0;
        local_198.ClassName.Number = 0;
        local_78.Width = local_2b0;
        pFVar19 = FD3D12Adapter::CreateRHIBuffer
                            (this_01,&local_78,0x40,&local_198,MultiState,CopyDest,true,
                             (ID3D12ResourceAllocator *)0x0);
        pFVar10 = (pFVar14->Buffer).Reference;
        if (pFVar10 != pFVar19) {
          (pFVar14->Buffer).Reference = pFVar19;
          if (pFVar19 != (FD3D12Buffer *)0x0) {
            (**(code **)(pFVar19->_padding_ + 8))(&pFVar19->_padding_,local_248);
          }
          if (pFVar10 != (FD3D12Buffer *)0x0) {
            (**(code **)(pFVar10->_padding_ + 0x10))();
          }
        }
        this_02 = local_300;
        TVar20 = FD3D12Buffer::UploadResourceDataViaCopyQueue
                           ((pFVar14->Buffer).Reference,(FD3D12CommandContext *)&local_270,
                            (FResourceArrayUploadInterface *)local_300);
        iVar18 = *(int *)&this_02->field_0x20;
        if (iVar18 == *(int *)&this_02->field_0x24) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this_02->field_0x18,
                              (int *)&this_02->field_0x24);
        }
        *(int *)&this_02->field_0x20 = iVar18 + 1;
        lVar12 = *(longlong *)&this_02->field_0x18;
        *(undefined8 *)(lVar12 + (longlong)iVar18 * 8) = 0;
        *(longlong *)(lVar12 + (longlong)iVar18 * 8) = (TVar20.Reference)->_padding_;
        (TVar20.Reference)->_padding_ = 0;
        if (local_270 != (undefined8 *)0x0) {
          piVar21 = (int *)(local_270 + 1);
          LOCK();
          iVar18 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (((iVar18 == 1) && (piVar21 != (int *)0x0)) && (local_270 != (undefined8 *)0x0)) {
            (**(code **)*local_270)(local_270,1);
          }
        }
        FD3D12ContextCommon::AddBarrier
                  ((FD3D12ContextCommon *)this_02,
                   (FD3D12Resource *)((pFVar14->Buffer).Reference)->_padding_,CopyDest,SRVCompute,0)
        ;
      }
      if (((pFVar14->ShaderBindingMode & Inline) != Disabled) &&
         (-1 < pFVar14->WorkerData[0].MaxUsedHitRecordIndex)) {
        if (local_268 == (FRHIBuffer *)0x0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InInlineBindingDataBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x6c9,L"");
          if (bVar15) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        else {
          lVar30 = (&local_268[1]._padding_)[*(uint *)&pFVar14->Device->field_0x8];
        }
        uVar22 = ((uint)pFVar14->WorkerData[0].MaxUsedHitRecordIndex /
                  pFVar14->NumShaderSlotsPerGeometrySegment + 1) * 0x20;
        FD3D12ResourceLocation::FD3D12ResourceLocation(&local_f8,pFVar14->Device);
        _Dst = FD3D12UploadHeapAllocator::AllocUploadResource
                         (this_01->UploadHeapAllocator[*(uint *)&pFVar14->Device->field_0x8],uVar22,
                          0x200,&local_f8);
        pvVar25 = (void *)(pFVar14->InlineGeometryParameterData)._padding_;
        if (((ulonglong)pvVar25 & 1) != 0) {
          pvVar25 = (void *)((longlong)pFVar14->WorkerData + ((longlong)pvVar25 >> 0x18) + -0x68);
        }
        memcpy(_Dst,pvVar25,(ulonglong)uVar22);
        pFVar7 = *(FD3D12Resource **)(lVar30 + 0x140);
        FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_02);
        if ((pFVar7 == (FD3D12Resource *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                ,0x1a5,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)&this_02->field_0x188 == 0) {
          (**(code **)(*(longlong *)this_02 + 8))(this_02);
        }
        FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this_02->field_0x188,pFVar7);
        local_260 = (local_f8.UnderlyingResource)->DebugName;
        local_258[0] = pFVar7->DebugName;
        FD3D12CommandContext::CopyBufferRegionChecked
                  (this_02,(pFVar7->Resource).Reference,local_258,*(ulong64 *)(lVar30 + 400),
                   ((local_f8.UnderlyingResource)->Resource).Reference,&local_260,
                   local_f8.OffsetFromBaseOfResource,uVar22);
        if (((pFVar14->ShaderBindingMode == Inline) &&
            ((pFVar14->ReferencedResources).ArrayNum != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderBindingMode != ERayTracingShaderBindingMode::Inline || ReferencedResources.IsEmpty()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x6e4,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_f8);
      }
      pFVar14->bIsDirty = false;
      if (cVar24 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
  } while( true );
}

// GetDispatchRaysDesc @ 145a187f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

D3D12_DISPATCH_RAYS_DESC * __thiscall
FD3D12RayTracingShaderBindingTableInternal::GetDispatchRaysDesc
          (FD3D12RayTracingShaderBindingTableInternal *this,
          D3D12_DISPATCH_RAYS_DESC *__return_storage_ptr__,FD3D12Device *param_1,
          FD3D12ShaderIdentifier *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FD3D12Buffer *pFVar4;
  longlong lVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  D3D12_DISPATCH_RAYS_DESC *pDVar9;
  ulong64 *puVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  FD3D12ResourceLocation local_88;
  
  if (this->Device != param_1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Device == InDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x6f3,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pDVar9 = (D3D12_DISPATCH_RAYS_DESC *)(*pcVar6)();
      return pDVar9;
    }
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation(&local_88,this->Device);
  uVar12 = 0x40;
  puVar10 = FD3D12FastAllocator::Allocate(&this->Device->DefaultFastAllocator,0x40,0x100,&local_88);
  uVar7 = param_2->Data[1];
  *puVar10 = param_2->Data[0];
  puVar10[1] = uVar7;
  uVar7 = param_2->Data[3];
  puVar10[2] = param_2->Data[2];
  puVar10[3] = uVar7;
  if (this->bIsDirty != false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x6ed,
                       L"Shader table update is pending, therefore GPU address is not available. Use Commit() to upload data and acquire a valid GPU buffer address."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pDVar9 = (D3D12_DISPATCH_RAYS_DESC *)(*pcVar6)();
      return pDVar9;
    }
  }
  pFVar4 = (this->Buffer).Reference;
  uVar1 = this->LocalRecordStride;
  uVar11 = (ulonglong)uVar1;
  uVar2 = this->NumCallableRecords;
  (__return_storage_ptr__->HitGroupTable).StartAddress = 0;
  (__return_storage_ptr__->HitGroupTable).SizeInBytes = 0;
  lVar5 = pFVar4->_padding_;
  uVar3 = this->MissShaderTableOffset;
  (__return_storage_ptr__->HitGroupTable).StrideInBytes = 0;
  (__return_storage_ptr__->CallableShaderTable).StartAddress = 0;
  (__return_storage_ptr__->CallableShaderTable).SizeInBytes = 0;
  (__return_storage_ptr__->CallableShaderTable).StrideInBytes = 0;
  __return_storage_ptr__->Width = 0;
  __return_storage_ptr__->Height = 0;
  *(undefined8 *)&__return_storage_ptr__->Depth = 0;
  (__return_storage_ptr__->MissShaderTable).StartAddress = (ulonglong)uVar3 + lVar5;
  uVar3 = this->NumMissRecords;
  (__return_storage_ptr__->RayGenerationShaderRecord).StartAddress = local_88.GPUVirtualAddress;
  (__return_storage_ptr__->RayGenerationShaderRecord).SizeInBytes = 0x40;
  (__return_storage_ptr__->MissShaderTable).StrideInBytes = uVar11;
  (__return_storage_ptr__->MissShaderTable).SizeInBytes = (ulonglong)(uVar1 * uVar3);
  if (uVar2 != 0) {
    uVar3 = this->CallableShaderTableOffset;
    (__return_storage_ptr__->CallableShaderTable).StrideInBytes = uVar11;
    (__return_storage_ptr__->CallableShaderTable).StartAddress = (ulonglong)uVar3 + lVar5;
    (__return_storage_ptr__->CallableShaderTable).SizeInBytes = (ulonglong)(uVar1 * uVar2);
  }
  if (this->HitGroupIndexingMode == Allow) {
    uVar12 = (ulong64)(uVar1 * this->NumHitRecords);
  }
  else {
    uVar11 = 0;
  }
  (__return_storage_ptr__->HitGroupTable).StartAddress =
       (ulonglong)this->HitGroupShaderTableOffset + lVar5;
  (__return_storage_ptr__->HitGroupTable).StrideInBytes = uVar11;
  (__return_storage_ptr__->HitGroupTable).SizeInBytes = uVar12;
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_88);
  return __return_storage_ptr__;
}

// RemoveUpdateUniformBufferListener @ 145a2e2a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::RemoveUpdateUniformBufferListener
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,
          FRecordUpdateUniformBufferListener *param_2)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = ~param_1 >> 0x1f;
  lVar9 = (longlong)(int)param_1 * 0x78;
  uVar6 = 0;
  lVar7 = 0;
  while( true ) {
    uVar4 = 0;
    if ((int)param_1 < (this->HitRecordData).ArrayNum) {
      uVar4 = uVar10;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)((this->HitRecordData).AllocatorInstance.Data + lVar9 + 0x10) <= (int)uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x9b5,L"");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = 0;
    if ((int)param_1 < (this->HitRecordData).ArrayNum) {
      uVar4 = uVar10;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->HitRecordData).AllocatorInstance.Data;
    uVar8 = ~uVar6 >> 0x1f;
    uVar4 = 0;
    if ((int)uVar6 < *(int *)(pFVar1 + lVar9 + 0x10)) {
      uVar4 = uVar8;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(FRecordUpdateUniformBufferListener **)(*(longlong *)(pFVar1 + lVar9 + 8) + lVar7) ==
        param_2) break;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 8;
  }
  uVar4 = 0;
  if ((int)param_1 < (this->HitRecordData).ArrayNum) {
    uVar4 = uVar10;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->HitRecordData).AllocatorInstance.Data;
  uVar10 = 0;
  if ((int)uVar6 < *(int *)(pFVar1 + lVar9 + 0x10)) {
    uVar10 = uVar8;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _Dst = (void *)(*(longlong *)(pFVar1 + lVar9 + 8) + (longlong)(int)uVar6 * 8);
  iVar5 = *(int *)(pFVar1 + lVar9 + 0x10) + ~uVar6;
  if (iVar5 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
  }
  *(int *)(pFVar1 + lVar9 + 0x10) = *(int *)(pFVar1 + lVar9 + 0x10) + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)(pFVar1 + lVar9 + 8),*(int *)(pFVar1 + lVar9 + 0x10),
             (int *)(pFVar1 + lVar9 + 0x14));
  if (param_2 != (FRecordUpdateUniformBufferListener *)0x0) {
    (**(code **)(param_2->_padding_ + 0x10))(param_2,1);
  }
  return;
}

// SetHitGroupGeometrySystemParameters @ 145a2f7a0

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
FD3D12RayTracingShaderBindingTableInternal::SetHitGroupGeometrySystemParameters
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,
          ERayTracingLocalShaderBindingType param_2,uint param_3,FD3D12RayTracingGeometry *param_4,
          uint param_5,uint param_6)

{
  longlong *plVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<ID3D12RayTracingGeometryUpdateListener_*,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  FD3D12HitGroupSystemParameters_u_16 *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_d8 [32];
  FScriptContainerElement *local_88;
  uint local_80;
  FD3D12HitGroupSystemParameters_u_16 local_78;
  FD3D12HitGroupSystemParameters_u_16 FStack_70;
  FScriptContainerElement *local_68;
  FD3D12HitGroupSystemParameters local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar8 = *(uint *)&this->Device->field_0x8;
  local_80 = param_6;
  uVar10 = 0;
  if ((int)param_6 < param_4->HitGroupSystemParameters[uVar8].ArrayNum) {
    uVar10 = ~param_6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = param_4->HitGroupSystemParameters[uVar8].AllocatorInstance.Data;
  pFVar5 = (FD3D12HitGroupSystemParameters_u_16 *)(pFVar14 + (longlong)(int)param_6 * 0x20 + 0x10);
  local_78 = *pFVar5;
  FStack_70 = pFVar5[1];
  pFVar14 = pFVar14 + (longlong)(int)param_6 * 0x20;
  local_60.RootConstants._0_8_ = *(undefined8 *)pFVar14;
  local_60.RootConstants.FirstPrimitive = (uint)*(undefined8 *)(pFVar14 + 8);
  local_60.RootConstants.UserData = param_5;
  uVar8 = param_3;
  if ((int)param_3 < this->WorkerData[param_1].MaxUsedHitRecordIndex) {
    uVar8 = this->WorkerData[param_1].MaxUsedHitRecordIndex;
  }
  this->WorkerData[param_1].MaxUsedHitRecordIndex = uVar8;
  uVar8 = 0xffffffff;
  if (param_3 % this->NumShaderSlotsPerGeometrySegment == 0) {
    uVar8 = param_3 / this->NumShaderSlotsPerGeometrySegment;
  }
  local_60.field1_0x10 = local_78;
  local_60.VertexBuffer = FStack_70.IndexBuffer;
  if (this->Lifetime == Transient) {
    if ((this->ShaderBindingMode & RTPSO) != Disabled) {
      plVar1 = &(this->Data)._padding_;
      uVar11 = *plVar1;
      uVar13 = (ulonglong)
               (this->HitGroupShaderTableOffset + 0x20 + param_3 * this->LocalRecordStride);
      if ((uVar11 & 1) != 0) {
        uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)plVar1;
      }
      puVar4 = (undefined8 *)(uVar13 + uVar11);
      *puVar4 = local_60.RootConstants._0_8_;
      puVar4[1] = local_60.RootConstants._8_8_;
      pFVar5 = (FD3D12HitGroupSystemParameters_u_16 *)(uVar13 + 0x10 + uVar11);
      *pFVar5 = local_78;
      pFVar5[1] = FStack_70;
    }
    if (((this->ShaderBindingMode & Inline) != Disabled) && (uVar8 != 0xffffffff)) {
      SetInlineGeometryParameters(this,uVar8,&local_60);
    }
  }
  else {
    uVar10 = 0;
    if ((int)param_3 < (this->HitRecordData).ArrayNum) {
      uVar10 = ~param_3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_68 = (this->HitRecordData).AllocatorInstance.Data + (longlong)(int)param_3 * 0x78;
    iVar9 = *(int *)local_68;
    if ((iVar9 != 1) || (param_2 != Transient)) {
      if (param_2 != Validation) {
        if (((iVar9 == 1) && (param_2 != Transient)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RecordData.State != FRecordData::EState::Persistent || BindingType == ERayTracingLocalShaderBindingType::Transient"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                               ,0x88c,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((this->ShaderBindingMode & RTPSO) != Disabled) {
          plVar1 = &(this->Data)._padding_;
          uVar13 = (ulonglong)
                   (this->HitGroupShaderTableOffset + 0x20 + param_3 * this->LocalRecordStride);
          uVar11 = *plVar1;
          if ((uVar11 & 1) != 0) {
            uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)plVar1;
          }
          puVar4 = (undefined8 *)(uVar13 + uVar11);
          *puVar4 = local_60.RootConstants._0_8_;
          puVar4[1] = local_60.RootConstants._8_8_;
          pFVar5 = (FD3D12HitGroupSystemParameters_u_16 *)(uVar13 + 0x10 + uVar11);
          *pFVar5 = local_78;
          pFVar5[1] = FStack_70;
        }
        if (((this->ShaderBindingMode & Inline) != Disabled) && (uVar8 != 0xffffffff)) {
          SetInlineGeometryParameters(this,uVar8,&local_60);
        }
        if (param_2 != Persistent) {
          *(int *)local_68 = 2;
          return;
        }
        uVar8 = 0;
        if ((int)param_3 < (this->HitRecordData).ArrayNum) {
          uVar8 = ~param_3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar14 = (this->HitRecordData).AllocatorInstance.Data +
                  (longlong)(int)param_3 * 0x78 + 0x18;
        if ((*(longlong *)(pFVar14 + 0x10) != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Geometry == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                               ,0x780,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(FD3D12RayTracingShaderBindingTableInternal **)(pFVar14 + 8) = this;
        lpCriticalSection = &param_4->UpdateListenersCS;
        *(uint *)(pFVar14 + 0x1c) = param_5;
        *(FD3D12RayTracingGeometry **)(pFVar14 + 0x10) = param_4;
        *(uint *)(pFVar14 + 0x18) = param_3;
        *(uint *)(pFVar14 + 0x20) = local_80;
        local_88 = pFVar14;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar12 = (param_4->UpdateListeners).AllocatorInstance.Data;
        pFVar14 = pFVar12 + (longlong)(param_4->UpdateListeners).ArrayNum * 8;
        do {
          if (pFVar12 == pFVar14) {
LAB_145a2fb3b:
            pTVar3 = &param_4->UpdateListeners;
            pFVar14 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_88) &&
                ((FScriptContainerElement *)&local_88 <
                 pFVar14 + (longlong)(param_4->UpdateListeners).ArrayMax * 8)) &&
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
            iVar9 = (param_4->UpdateListeners).ArrayNum;
            piVar2 = &(param_4->UpdateListeners).ArrayMax;
            if (iVar9 == *piVar2) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar3->AllocatorInstance,piVar2);
            }
            (param_4->UpdateListeners).ArrayNum = iVar9 + 1;
            *(FScriptContainerElement **)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                 local_88;
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            *(int *)local_68 = 1;
            return;
          }
          if (*(FScriptContainerElement **)pFVar12 == local_88) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!UpdateListeners.Contains(InUpdateListener)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.h"
                               ,0xcf,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_145a2fb3b;
          }
          pFVar12 = pFVar12 + 8;
        } while( true );
      }
      if ((iVar9 != 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RecordData.State == FRecordData::EState::Persistent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x8a4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((this->ShaderBindingMode & RTPSO) != Disabled) {
      plVar1 = &(this->Data)._padding_;
      uVar11 = *plVar1;
      if ((uVar11 & 1) != 0) {
        uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)plVar1;
      }
      iVar9 = memcmp((void *)((this->HitGroupShaderTableOffset + 0x20 +
                              param_3 * this->LocalRecordStride) + uVar11),&local_60,0x20);
      if ((iVar9 != 0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8588839787656379078>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x53a,"FMemory::Memcmp(CurrentData, InData, InDataSize) == 0"), bVar7)
         ) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (((this->ShaderBindingMode & Inline) != Disabled) && (uVar8 != 0xffffffff)) {
      uVar11 = (this->InlineGeometryParameterData)._padding_;
      if ((uVar11 & 1) != 0) {
        uVar11 = (longlong)this->WorkerData + ((longlong)uVar11 >> 0x18) + -0x68;
      }
      iVar9 = memcmp((void *)((uVar8 << 5) + uVar11),&local_60,0x20);
      if ((iVar9 != 0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8588839787656378794>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x656,"FMemory::Memcmp(CurrentData, &SystemParameters, DataSize) == 0"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  return;
}

// SetInlineGeometryParameters @ 145a2fd40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::SetInlineGeometryParameters
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,
          FD3D12HitGroupSystemParameters *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  FD3D12HitGroupSystemParameters_u_16 *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FD3D12HitGroupSystemParameters_u_16 FVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  plVar1 = &(this->InlineGeometryParameterData)._padding_;
  uVar10 = param_1 << 5;
  uVar8 = 0;
  if ((int)uVar10 < (int)(this->InlineGeometryParameterData)._padding_) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = *plVar1;
  if ((uVar9 & 1) != 0) {
    uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)plVar1;
  }
  uVar5 = *(undefined8 *)&(param_2->RootConstants).FirstPrimitive;
  puVar2 = (undefined8 *)((longlong)(int)uVar10 + uVar9);
  *puVar2 = *(undefined8 *)&param_2->RootConstants;
  puVar2[1] = uVar5;
  FVar6 = (FD3D12HitGroupSystemParameters_u_16)param_2->VertexBuffer;
  pFVar3 = (FD3D12HitGroupSystemParameters_u_16 *)((longlong)(int)uVar10 + 0x10 + uVar9);
  *pFVar3 = param_2->field1_0x10;
  pFVar3[1] = FVar6;
  return;
}

// SetLooseParameterData @ 145a2fe00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FD3D12ConstantBufferView * __thiscall
FD3D12RayTracingShaderBindingTableInternal::SetLooseParameterData
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,uint param_2,
          ERayTracingLocalShaderBindingType param_3,void *param_4,uint param_5,ulong64 *param_6)

{
  FScriptContainerElement *pFVar1;
  FD3D12Device *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D12ConstantBufferView *pFVar6;
  void *_Dst;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar7;
  FD3D12ResourceLocation *this_00;
  FD3D12ResourceLocation *pFVar8;
  longlong lVar9;
  uint uVar10;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_a8;
  FD3D12ResourceLocation local_98;
  
  lVar9 = (longlong)(int)param_2;
  if (param_3 == Validation) {
    uVar10 = 0;
    if ((int)param_2 < (this->HitRecordData).ArrayNum) {
      uVar10 = ~param_2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar1 = (this->HitRecordData).AllocatorInstance.Data;
    if (*(uint *)(pFVar1 + lVar9 * 0x78 + 0x70) != param_5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecordData.LooseParameterData.Num() == LooseParameterDataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x93d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = memcmp(*(void **)(pFVar1 + lVar9 * 0x78 + 0x68),param_4,(ulonglong)param_5);
    if (iVar5 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMemory::Memcmp(RecordData.LooseParameterData.GetData(), LooseParameterData, LooseParameterDataSize) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x93e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (*(longlong *)(pFVar1 + lVar9 * 0x78 + 0x40) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecordData.LooseParameterResourceLocation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x93f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
        return pFVar6;
      }
    }
    *param_6 = *(ulong64 *)(*(longlong *)(pFVar1 + lVar9 * 0x78 + 0x40) + 0x58);
  }
  else {
    FD3D12ResourceLocation::FD3D12ResourceLocation(&local_98,this->Device);
    pFVar2 = this->Device;
    if (*(longlong *)&pFVar2->field_0x10 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
        return pFVar6;
      }
    }
    _Dst = FD3D12UploadHeapAllocator::AllocUploadResource
                     (*(FD3D12UploadHeapAllocator **)
                       (*(longlong *)&pFVar2->field_0x10 + 0x4f8 +
                       (ulonglong)*(uint *)&this->Device->field_0x8 * 8),param_5,0x100,&local_98);
    memcpy(_Dst,param_4,(ulonglong)param_5);
    *param_6 = local_98.GPUVirtualAddress;
    pTVar7 = FD3D12Resource::GetResidencyHandles(local_98.UnderlyingResource,&local_a8);
    if (pTVar7->ArrayNum != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceLocation.GetResource()->GetResidencyHandles().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x94d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (this->Lifetime == Persistent) {
      pFVar8 = (FD3D12ResourceLocation *)0x0;
      uVar10 = 0;
      if ((int)param_2 < (this->HitRecordData).ArrayNum) {
        uVar10 = ~param_2 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
          return pFVar6;
        }
      }
      pFVar1 = (this->HitRecordData).AllocatorInstance.Data;
      if (param_3 == Persistent) {
        if (*(longlong *)(pFVar1 + lVar9 * 0x78 + 0x40) != 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RecordData.LooseParameterResourceLocation == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x960,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
            return pFVar6;
          }
        }
        this_00 = ::operator_new(0x78);
        if (this_00 != (FD3D12ResourceLocation *)0x0) {
          pFVar8 = FD3D12ResourceLocation::FD3D12ResourceLocation(this_00,this->Device);
        }
        *(FD3D12ResourceLocation **)(pFVar1 + lVar9 * 0x78 + 0x40) = pFVar8;
        FD3D12ResourceLocation::TransferOwnership(pFVar8,&local_98);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                   (pFVar1 + lVar9 * 0x78 + 0x68),param_5,Default);
        memcpy(*(void **)(pFVar1 + lVar9 * 0x78 + 0x68),param_4,(ulonglong)param_5);
      }
      else if (*(longlong *)(pFVar1 + lVar9 * 0x78 + 0x40) != 0) {
        if (*(uint *)(pFVar1 + lVar9 * 0x78 + 0x70) != param_5) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RecordData.LooseParameterData.Num() == LooseParameterDataSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x96e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
            return pFVar6;
          }
        }
        iVar5 = memcmp(*(void **)(pFVar1 + lVar9 * 0x78 + 0x68),param_4,(ulonglong)param_5);
        if (iVar5 != 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMemory::Memcmp(RecordData.LooseParameterData.GetData(), LooseParameterData, LooseParameterDataSize) == 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x96f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FD3D12ConstantBufferView *)(*pcVar3)();
            return pFVar6;
          }
        }
        FD3D12ResourceLocation::Clear(*(FD3D12ResourceLocation **)(pFVar1 + lVar9 * 0x78 + 0x40));
        FD3D12ResourceLocation::TransferOwnership
                  (*(FD3D12ResourceLocation **)(pFVar1 + lVar9 * 0x78 + 0x40),&local_98);
      }
    }
    FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_98);
  }
  return (FD3D12ConstantBufferView *)0x0;
}

// UpdatePersistentReferencedResource @ 145a36fa0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::UpdatePersistentReferencedResource
          (FD3D12RayTracingShaderBindingTableInternal *this,uint param_1,FD3D12Resource *param_2,
          int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FD3D12Resource *pFVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  TMap<TRefCountPtr<FD3D12Resource>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>_>
  *this_00;
  FD3D12Resource *local_res8;
  int local_res10 [2];
  FD3D12Resource **local_res18;
  TRefCountPtr<FD3D12Resource> local_48 [2];
  
  if ((param_2 == (FD3D12Resource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x8b9,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->WorkerData[param_1].PersistentReferencedResources;
  if (param_2 != (FD3D12Resource *)0x0) {
    LOCK();
    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
    UNLOCK();
  }
  uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  local_res8 = param_2;
  if (*(int *)(&this_00->field_0x0 + 8) != *(int *)(&this_00->field_0x0 + 0x34)) {
    puVar9 = *(undefined1 **)(&this_00->field_0x38 + 8);
    if (*(undefined1 **)(&this_00->field_0x38 + 8) == (undefined1 *)0x0) {
      puVar9 = &this_00->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & uVar7) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
        if (*(FD3D12Resource **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) ==
            param_2) {
          if (lVar8 != 0) goto LAB_145a3710b;
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res18 = &local_res8;
  TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TRefCountPtr<FD3D12Resource>_&&>_>
            ((TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,
             (TKeyInitializer<TRefCountPtr<FD3D12Resource>_&&> *)(ulonglong)uVar7,
             (bool *)&local_res18);
  lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)local_res10[0] * 0x18;
LAB_145a3710b:
  if (local_res8 != (FD3D12Resource *)0x0) {
    plVar1 = &local_res8->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      pFVar6 = local_res8;
      if (plVar1 == (longlong *)0x0) {
        pFVar6 = (FD3D12Resource *)0x0;
      }
      if (pFVar6 != (FD3D12Resource *)0x0) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  iVar5 = *(int *)(lVar8 + 8) + param_3;
  *(int *)(lVar8 + 8) = iVar5;
  if (param_1 == 0) {
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferenceCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x8c1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(lVar8 + 8) == 0) {
      plVar1 = &param_2->_padding_;
      if (param_2 != (FD3D12Resource *)0x0) {
        LOCK();
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
      }
      local_48[0].Reference = param_2;
      if (*(int *)(&this_00->field_0x0 + 8) != *(int *)(&this_00->field_0x0 + 0x34)) {
        uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<TRefCountPtr<FD3D12Resource>_>
                  ((TSet<TTuple<TRefCountPtr<FD3D12Resource>,int>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12Resource>,int,0>,FDefaultSetAllocator>
                    *)this_00,uVar7 >> 0x10 ^ uVar7,local_48);
      }
      if (param_2 != (FD3D12Resource *)0x0) {
        LOCK();
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          if (plVar1 == (longlong *)0x0) {
            param_2 = (FD3D12Resource *)0x0;
          }
          if (param_2 != (FD3D12Resource *)0x0) {
            (**(code **)param_2->_padding_)(param_2,1);
          }
        }
      }
    }
  }
  return;
}

// UpdateResidency @ 145a37530

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::UpdateResidency
          (FD3D12RayTracingShaderBindingTableInternal *this,FD3D12CommandContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  FD3D12Resource *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  bool local_res18 [8];
  uint local_res20 [2];
  
  uVar3 = this->UniqueId;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  ::
  FindOrUpdateIdByHashInternal<0,unsigned___int64_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
            ((TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
              *)&param_1->RayTracingShaderTables,(FHashType)(uint)local_res20,
             (ulong64 *)(ulonglong)((int)(uVar3 >> 0x20) * 0x17 + (int)uVar3 & 0x7fffffff),
             (FUnitType *)&this->UniqueId,local_res18);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  ::FData::Get((FData *)&param_1->RayTracingShaderTables,local_res20[0]);
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::UpdateResidency(FD3D12CommandContext&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId2546,"ShaderTableUpdateResidency",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x9f2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FD3D12RayTracingShaderBindingTableInternal::UpdateResidency(FD3D12CommandContext&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId2546);
  }
  pFVar7 = (this->ReferencedResources).AllocatorInstance.Data;
  iVar2 = (this->ReferencedResources).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ReferencedResources).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FD3D12Resource_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    pFVar4 = *(FD3D12Resource **)pFVar7;
    if ((pFVar4 == (FD3D12Resource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                           ,0x1a5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar4);
    pFVar7 = pFVar7 + 8;
  }
  pFVar4 = (FD3D12Resource *)((this->Buffer).Reference)->_padding_;
  if ((pFVar4 == (FD3D12Resource *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                         ,0x1a5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar4);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

