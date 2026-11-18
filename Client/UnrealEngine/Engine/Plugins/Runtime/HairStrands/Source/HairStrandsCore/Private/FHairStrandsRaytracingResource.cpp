// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// FHairStrandsRaytracingResource @ 14e03d1a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRaytracingResource * __thiscall
FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
          (FHairStrandsRaytracingResource *this,FHairCardsBulkData *param_1,
          FHairResourceName *param_2,FName *param_3)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = (longlong)&___7FHairStrandsRaytracingResource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  (this->PositionBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PositionBuffer).Format = PF_Unknown;
  (this->IndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->IndexBuffer).Format = PF_Unknown;
  FRayTracingGeometry::FRayTracingGeometry(&this->RayTracingGeometry);
  this->MaxVertexCount = (param_1->Positions).ArrayNum;
  this->MaxIndexCount = 0;
  this->bOwnBuffers = false;
  this->bIsRTGeometryInitialized = false;
  this->bProceduralPrimitive = false;
  return this;
}

// FHairStrandsRaytracingResource @ 14e03d270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRaytracingResource * __thiscall
FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
          (FHairStrandsRaytracingResource *this,FHairMeshesBulkData *param_1,
          FHairResourceName *param_2,FName *param_3)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = (longlong)&___7FHairStrandsRaytracingResource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  (this->PositionBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PositionBuffer).Format = PF_Unknown;
  (this->IndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->IndexBuffer).Format = PF_Unknown;
  FRayTracingGeometry::FRayTracingGeometry(&this->RayTracingGeometry);
  this->MaxVertexCount = (param_1->Positions).ArrayNum;
  this->MaxIndexCount = 0;
  this->bOwnBuffers = false;
  this->bIsRTGeometryInitialized = false;
  this->bProceduralPrimitive = false;
  return this;
}

// FHairStrandsRaytracingResource @ 14e03d340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairStrandsRaytracingResource * __thiscall
FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
          (FHairStrandsRaytracingResource *this,FHairStrandsBulkData *param_1,
          FHairResourceName *param_2,FName *param_3)

{
  bool bVar1;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&___7FHairStrandsRaytracingResource__6B_;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  (this->PositionBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PositionBuffer).Format = PF_Unknown;
  (this->IndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->IndexBuffer).Format = PF_Unknown;
  FRayTracingGeometry::FRayTracingGeometry(&this->RayTracingGeometry);
  this->bOwnBuffers = true;
  this->bIsRTGeometryInitialized = false;
  this->bProceduralPrimitive = false;
  this->MaxVertexCount = 0;
  this->MaxIndexCount = 0;
  *(undefined4 *)&this->_padding_ = 0;
  bVar1 = GetSupportHairStrandsProceduralPrimitive(GMaxRHIShaderPlatform);
  this->bProceduralPrimitive = bVar1;
  return this;
}

// GetFriendlyName @ 14e050340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsRaytracingResource::GetFriendlyName
          (FHairStrandsRaytracingResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsRaytracingResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e056430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FHairStrandsRaytracingResource::InternalAllocate
          (FHairStrandsRaytracingResource *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FName *pFVar1;
  uint uVar2;
  undefined1 auStackY_138 [32];
  FRayTracingGeometryInitializer local_108;
  FRHIBuffer *local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 local_84;
  ERayTracingGeometryInitializerType local_80;
  FRayTracingGeometrySegment *local_78;
  undefined8 local_70;
  FResourceArrayUploadInterface *local_68;
  uint local_60 [6];
  FRHIRayTracingGeometry *local_48;
  FDebugName local_40;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->bOwnBuffers != false) {
    if (this->bProceduralPrimitive == false) {
      uVar2 = param_3 * 4;
      this->MaxVertexCount = uVar2;
      this->MaxIndexCount = param_3 * 0x18;
    }
    else {
      uVar2 = param_3 * 8;
      this->MaxVertexCount = uVar2;
    }
    pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
    InternalCreateVertexBufferRDG<FHairStrandsRaytracingFormat>
              (param_1,uVar2,&this->PositionBuffer,L"Hair.StrandsRaytracing_PositionBuffer",pFVar1,
               Dynamic);
    InternalCreateStructuredBufferRDG<FHairStrandsIndexFormat>
              (param_1,this->MaxIndexCount,&this->IndexBuffer,L"Hair.StrandsRaytracing_IndexBuffer",
               pFVar1,Dynamic);
    (**(code **)((this->RayTracingGeometry)._padding_ + 0x10))(&this->RayTracingGeometry);
    local_84 = 0x10000;
    local_98 = (FRHIBuffer *)0x0;
    local_90 = 0;
    local_88 = 0;
    local_80 = Rendering;
    local_78 = (FRayTracingGeometrySegment *)0x0;
    local_70 = 0;
    local_68 = (FResourceArrayUploadInterface *)0x0;
    local_48 = (FRHIRayTracingGeometry *)0x0;
    local_60[0] = 0xffffffff;
    local_60[1] = 0xffffffff;
    local_60[2] = 0xffffffff;
    local_60[3] = 0xffffffff;
    local_60[4] = 0xffffffff;
    local_60[5] = 0xffffffff;
    FDebugName::FDebugName(&local_40);
    local_108.IndexBuffer.Reference = local_98;
    local_108.IndexBufferOffset = (uint)local_90;
    local_108.GeometryType = local_90._4_4_;
    local_108.TotalPrimitiveCount = local_88;
    local_108.bFastBuild = (bool)(undefined1)local_84;
    local_108.bAllowUpdate = (bool)local_84._1_1_;
    local_108.bAllowCompaction = (bool)local_84._2_1_;
    local_108.bTemplate = (bool)local_84._3_1_;
    local_108.Type = local_80;
    local_108.Segments.AllocatorInstance.Data = (FScriptContainerElement *)local_78;
    local_108.Segments.ArrayNum = (int)local_70;
    local_108.Segments.ArrayMax = local_70._4_4_;
    local_108.OfflineData = local_68;
    local_108.SourceGeometry = local_48;
    local_108.DebugName.Number = local_40.Number;
    local_108.OfflineDataHeader.Reserved[0] = local_60[0];
    local_108.OfflineDataHeader.Reserved[1] = local_60[1];
    local_108.OfflineDataHeader.Reserved[2] = local_60[2];
    local_108.OfflineDataHeader.Reserved[3] = local_60[3];
    local_108.OwnerName.ComparisonIndex.Value = 0;
    local_108.OwnerName.Number = 0;
    local_34 = 0;
    local_98 = (FRHIBuffer *)0x0;
    local_78 = (FRayTracingGeometrySegment *)0x0;
    local_70 = 0;
    local_108.OfflineDataHeader.Reserved[4] = local_60[4];
    local_108.OfflineDataHeader.Reserved[5] = local_60[5];
    local_108.DebugName.Name = local_40.Name;
    FRayTracingGeometry::SetInitializer(&this->RayTracingGeometry,&local_108);
    DestructItems<FRayTracingGeometrySegment,int>(local_78,(int)local_70);
    if (local_78 != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_98 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_98);
    }
    this->bIsRTGeometryInitialized = false;
  }
  return;
}

// InternalRelease @ 14e058860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FHairStrandsRaytracingResource::InternalRelease(FHairStrandsRaytracingResource *this)

{
  undefined1 auStack_118 [32];
  FRayTracingGeometryInitializer local_f8;
  FRHIBuffer *local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  ERayTracingGeometryInitializerType local_70;
  FRayTracingGeometrySegment *local_68;
  undefined8 local_60;
  FResourceArrayUploadInterface *local_58;
  uint local_50 [6];
  FRHIRayTracingGeometry *local_38;
  FDebugName local_30;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  FRDGExternalBuffer::Release(&this->PositionBuffer);
  FRDGExternalBuffer::Release(&this->IndexBuffer);
  (**(code **)((this->RayTracingGeometry)._padding_ + 0x10))(&this->RayTracingGeometry);
  local_74 = 0x10000;
  local_88 = (FRHIBuffer *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = Rendering;
  local_68 = (FRayTracingGeometrySegment *)0x0;
  local_60 = 0;
  local_58 = (FResourceArrayUploadInterface *)0x0;
  local_38 = (FRHIRayTracingGeometry *)0x0;
  local_50[0] = 0xffffffff;
  local_50[1] = 0xffffffff;
  local_50[2] = 0xffffffff;
  local_50[3] = 0xffffffff;
  local_50[4] = 0xffffffff;
  local_50[5] = 0xffffffff;
  FDebugName::FDebugName(&local_30);
  local_f8.IndexBuffer.Reference = local_88;
  local_f8.IndexBufferOffset = (uint)local_80;
  local_f8.GeometryType = local_80._4_4_;
  local_f8.TotalPrimitiveCount = local_78;
  local_f8.bFastBuild = (bool)(undefined1)local_74;
  local_f8.bAllowUpdate = (bool)local_74._1_1_;
  local_f8.bAllowCompaction = (bool)local_74._2_1_;
  local_f8.bTemplate = (bool)local_74._3_1_;
  local_f8.Type = local_70;
  local_f8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)local_68;
  local_f8.Segments.ArrayNum = (int)local_60;
  local_f8.Segments.ArrayMax = local_60._4_4_;
  local_f8.OfflineData = local_58;
  local_f8.SourceGeometry = local_38;
  local_f8.DebugName.Number = local_30.Number;
  local_f8.OfflineDataHeader.Reserved[0] = local_50[0];
  local_f8.OfflineDataHeader.Reserved[1] = local_50[1];
  local_f8.OfflineDataHeader.Reserved[2] = local_50[2];
  local_f8.OfflineDataHeader.Reserved[3] = local_50[3];
  local_f8.OwnerName.ComparisonIndex.Value = 0;
  local_f8.OwnerName.Number = 0;
  local_24 = 0;
  local_88 = (FRHIBuffer *)0x0;
  local_68 = (FRayTracingGeometrySegment *)0x0;
  local_60 = 0;
  local_f8.OfflineDataHeader.Reserved[4] = local_50[4];
  local_f8.OfflineDataHeader.Reserved[5] = local_50[5];
  local_f8.DebugName.Name = local_30.Name;
  FRayTracingGeometry::SetInitializer(&this->RayTracingGeometry,&local_f8);
  DestructItems<FRayTracingGeometrySegment,int>(local_68,(int)local_60);
  if (local_68 != (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_88 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88);
  }
  this->bIsRTGeometryInitialized = false;
  return;
}

