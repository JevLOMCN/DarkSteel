// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 6

// ~FMeshRenderBufferSet @ 1496faef0

void __thiscall FMeshRenderBufferSet::~FMeshRenderBufferSet(FMeshRenderBufferSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshRenderBufferSet__6B_;
  if (0 < this->TriangleCount) {
    (**(code **)((this->PositionVertexBuffer)._padding_ + 0x20))();
    (**(code **)((this->StaticMeshVertexBuffer)._padding_ + 0x20))(&this->StaticMeshVertexBuffer);
    (**(code **)((this->ColorVertexBuffer)._padding_ + 0x20))();
    (**(code **)((this->VertexFactory)._padding_ + 0x20))();
    if ((int)(this->IndexBuffer)._padding_ != -1) {
      (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
    }
    if ((int)(this->SecondaryIndexBuffer)._padding_ != -1) {
      (**(code **)((this->SecondaryIndexBuffer)._padding_ + 0x20))();
    }
    if (this->bEnableRaytracing != false) {
      (**(code **)((this->PrimaryRayTracingGeometry)._padding_ + 0x20))();
      (**(code **)((this->SecondaryRayTracingGeometry)._padding_ + 0x20))();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BuffersLock);
  FRayTracingGeometry::~FRayTracingGeometry(&this->SecondaryRayTracingGeometry);
  FRayTracingGeometry::~FRayTracingGeometry(&this->PrimaryRayTracingGeometry);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->SecondaryIndexBuffer);
  if (((this->Triangles).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->Triangles).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&this->ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&this->PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this->StaticMeshVertexBuffer);
  return;
}

// TransferVertexUpdateToGPU @ 14971ac50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshRenderBufferSet::TransferVertexUpdateToGPU
          (FMeshRenderBufferSet *this,FRHICommandListBase *param_1,bool param_2,bool param_3,
          bool param_4,bool param_5)

{
  FStaticMeshVertexBuffer *this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  if (this->TriangleCount != 0) {
    if (param_2) {
      pvVar4 = FRHICommandListBase::LockBuffer
                         (param_1,(FRHIBuffer *)(this->PositionVertexBuffer)._padding_,0,
                          (this->PositionVertexBuffer).Stride *
                          (this->PositionVertexBuffer).NumVertices,RLM_WriteOnly);
      memcpy(pvVar4,(this->PositionVertexBuffer).Data,
             (ulonglong)
             ((this->PositionVertexBuffer).Stride * (this->PositionVertexBuffer).NumVertices));
      FRHICommandListBase::UnlockBuffer
                (param_1,(FRHIBuffer *)(this->PositionVertexBuffer)._padding_);
    }
    this_00 = &this->StaticMeshVertexBuffer;
    if (param_3) {
      uVar2 = FStaticMeshVertexBuffer::GetTangentSize(this_00);
      pvVar4 = FRHICommandListBase::LockBuffer
                         (param_1,*(FRHIBuffer **)
                                   &(this->StaticMeshVertexBuffer).TangentsVertexBuffer.field_0x20,0
                          ,uVar2,RLM_WriteOnly);
      iVar3 = FStaticMeshVertexBuffer::GetTangentSize(this_00);
      memcpy(pvVar4,(this->StaticMeshVertexBuffer).TangentsDataPtr,(longlong)iVar3);
      FRHICommandListBase::UnlockBuffer
                (param_1,*(FRHIBuffer **)
                          &(this->StaticMeshVertexBuffer).TangentsVertexBuffer.field_0x20);
    }
    if (param_5) {
      pvVar4 = FRHICommandListBase::LockBuffer
                         (param_1,(FRHIBuffer *)(this->ColorVertexBuffer)._padding_,0,
                          (this->ColorVertexBuffer).Stride * (this->ColorVertexBuffer).NumVertices,
                          RLM_WriteOnly);
      memcpy(pvVar4,(this->ColorVertexBuffer).Data,
             (ulonglong)((this->ColorVertexBuffer).Stride * (this->ColorVertexBuffer).NumVertices));
      FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)(this->ColorVertexBuffer)._padding_);
    }
    if (param_4) {
      uVar2 = FStaticMeshVertexBuffer::GetTexCoordSize(this_00);
      pvVar4 = FRHICommandListBase::LockBuffer
                         (param_1,*(FRHIBuffer **)
                                   &(this->StaticMeshVertexBuffer).TexCoordVertexBuffer.field_0x20,0
                          ,uVar2,RLM_WriteOnly);
      iVar3 = FStaticMeshVertexBuffer::GetTexCoordSize(this_00);
      memcpy(pvVar4,(this->StaticMeshVertexBuffer).TexcoordDataPtr,(longlong)iVar3);
      FRHICommandListBase::UnlockBuffer
                (param_1,*(FRHIBuffer **)
                          &(this->StaticMeshVertexBuffer).TexCoordVertexBuffer.field_0x20);
    }
    this->bIsRayTracingDataValid = false;
    bVar1 = IsRayTracingEnabled();
    if ((bVar1) && (this->bEnableRaytracing != false)) {
      UpdateRaytracingGeometryIfEnabled(this);
      this->bIsRayTracingDataValid = true;
    }
  }
  return;
}

// UpdateRaytracingGeometryIfEnabled @ 14971be10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMeshRenderBufferSet::UpdateRaytracingGeometryIfEnabled(FMeshRenderBufferSet *this)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_00;
  FRHIResource *this_01;
  code *pcVar2;
  FRHIBuffer *this_02;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FRayTracingGeometry *this_03;
  longlong lVar7;
  undefined1 auStack_198 [32];
  FRHIResource **local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  FRHIResource *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  FScriptContainerElement local_126;
  FRayTracingGeometryInitializer local_120;
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ERayTracingGeometryInitializerType local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  FResourceArrayUploadInterface *local_78;
  uint local_70 [6];
  FRHIRayTracingGeometry *local_58;
  FDebugName local_50;
  FName local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  (**(code **)((this->PrimaryRayTracingGeometry)._padding_ + 0x20))();
  (**(code **)((this->SecondaryRayTracingGeometry)._padding_ + 0x20))();
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = 0;
  do {
    lVar7 = 0x198;
    if (iVar5 != 0) {
      lVar7 = 0x428;
    }
    if (*(int *)((longlong)&this->_padding_ + lVar7) != 0) {
      local_a8 = (FRHIBuffer *)0x0;
      lVar6 = 0x440;
      local_a0 = 0;
      if (iVar5 != 0) {
        lVar6 = 0x540;
      }
      local_98 = 0;
      local_94 = 0x10000;
      this_03 = (FRayTracingGeometry *)((longlong)&this->_padding_ + lVar6);
      local_90 = Rendering;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = 0;
      local_78 = (FResourceArrayUploadInterface *)0x0;
      local_70[0] = 0xffffffff;
      local_70[1] = 0xffffffff;
      local_70[2] = 0xffffffff;
      local_70[3] = 0xffffffff;
      local_70[4] = 0xffffffff;
      local_70[5] = 0xffffffff;
      local_58 = (FRHIRayTracingGeometry *)0x0;
      FDebugName::FDebugName(&local_50);
      this_02 = local_a8;
      local_44.ComparisonIndex.Value = 0;
      local_44.Number = 0;
      lVar6 = 0x188;
      if (iVar5 != 0) {
        lVar6 = 0x418;
      }
      this_00 = *(FRHIBuffer **)((longlong)&this->_padding_ + lVar6);
      if (local_a8 != this_00) {
        local_a8 = this_00;
        if (this_00 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
        }
        if (this_02 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this_02);
        }
      }
      this_01 = (FRHIResource *)(this->PositionVertexBuffer)._padding_;
      iVar4 = *(int *)((longlong)&this->_padding_ + lVar7);
      local_a0 = local_a0 & 0xffffffff;
      local_94 = CONCAT22(local_94._2_2_,1);
      local_98 = iVar4 / 3 + (iVar4 >> 0x1f) +
                 (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
      local_148 = (FRHIResource *)0x0;
      local_140 = 3;
      local_138 = 0xc;
      local_130 = 0;
      local_128 = 0x100;
      local_126 = (FScriptContainerElement)0x1;
      if (this_01 != (FRHIResource *)0x0) {
        local_148 = this_01;
        FRHIResource::AddRef(this_01);
      }
      local_138 = CONCAT44((this->PositionVertexBuffer).NumVertices,(undefined4)local_138);
      local_130 = CONCAT44(local_98,(undefined4)local_130);
      if (local_88.Data <= (FScriptContainerElement *)&local_148) {
        if ((FScriptContainerElement *)&local_148 < local_88.Data + (longlong)local_80._4_4_ * 0x28)
        {
          local_160 = (longlong)(int)local_80;
          local_158 = 0x28;
          local_178 = &local_148;
          local_170 = local_88.Data;
          local_168 = (longlong)local_80._4_4_;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      iVar4 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_88,(int *)((longlong)&local_80 + 4));
      }
      pFVar1 = local_88.Data + (longlong)iVar4 * 0x28;
      *(undefined8 *)pFVar1 = 0;
      *(FRHIResource **)pFVar1 = local_148;
      local_80._0_4_ = iVar4 + 1;
      if (local_148 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_148);
      }
      *(undefined4 *)(pFVar1 + 8) = (undefined4)local_140;
      *(undefined4 *)(pFVar1 + 0xc) = local_140._4_4_;
      *(undefined4 *)(pFVar1 + 0x10) = (undefined4)local_138;
      *(undefined4 *)(pFVar1 + 0x14) = local_138._4_4_;
      *(undefined4 *)(pFVar1 + 0x18) = (undefined4)local_130;
      *(undefined4 *)(pFVar1 + 0x1c) = local_130._4_4_;
      pFVar1[0x20] = local_128._0_1_;
      pFVar1[0x21] = local_128._1_1_;
      pFVar1[0x22] = local_126;
      local_120.IndexBuffer.Reference = local_a8;
      local_120.IndexBufferOffset = (uint)local_a0;
      local_120.GeometryType = local_a0._4_4_;
      local_120.TotalPrimitiveCount = local_98;
      local_120.bFastBuild = (bool)(undefined1)local_94;
      local_120.bAllowUpdate = (bool)local_94._1_1_;
      local_120.bAllowCompaction = (bool)local_94._2_1_;
      local_120.bTemplate = (bool)local_94._3_1_;
      local_120.Type = local_90;
      local_120.Segments.AllocatorInstance.Data = local_88.Data;
      local_120.Segments.ArrayNum = (int)local_80;
      local_120.Segments.ArrayMax = local_80._4_4_;
      local_120.OfflineData = local_78;
      local_120.SourceGeometry = local_58;
      local_120.DebugName.Number = local_50.Number;
      local_120.OfflineDataHeader.Reserved[0] = local_70[0];
      local_120.OfflineDataHeader.Reserved[1] = local_70[1];
      local_120.OfflineDataHeader.Reserved[2] = local_70[2];
      local_120.OfflineDataHeader.Reserved[3] = local_70[3];
      local_120.OwnerName = local_44;
      local_a8 = (FRHIBuffer *)0x0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = 0;
      local_120.OfflineDataHeader.Reserved[4] = local_70[4];
      local_120.OfflineDataHeader.Reserved[5] = local_70[5];
      local_120.DebugName.Name = local_50.Name;
      FRayTracingGeometry::SetInitializer(this_03,&local_120);
      (**(code **)(this_03->_padding_ + 0x18))(this_03,0x154be5ed0);
      if (local_148 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_148);
      }
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_88.Data,(int)local_80);
      if ((FRayTracingGeometrySegment *)local_88.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if (local_a8 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_a8);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}

// Upload @ 14971d080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMeshRenderBufferSet::Upload(FMeshRenderBufferSet *this)

{
  FPositionVertexBuffer *this_00;
  FColorVertexBuffer *this_01;
  FLocalVertexFactory *this_02;
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_118 [32];
  FDataType local_f8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->TriangleCount != 0) {
    this_00 = &this->PositionVertexBuffer;
    if ((int)(this->PositionVertexBuffer)._padding_ == -1) {
      (**(code **)(this_00->_padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)this_00,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    if ((int)(this->StaticMeshVertexBuffer)._padding_ == -1) {
      (**(code **)((this->StaticMeshVertexBuffer)._padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)&this->StaticMeshVertexBuffer,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    this_01 = &this->ColorVertexBuffer;
    if ((int)(this->ColorVertexBuffer)._padding_ == -1) {
      (**(code **)(this_01->_padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)this_01,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    local_f8._padding_._4_4_ = 4;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    this_02 = &this->VertexFactory;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_._0_4_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_._0_4_ = 0xffffffff;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_._4_2_ = 0xff;
    local_f8._padding_._6_1_ = 0;
    local_f8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
    local_f8.PreSkinPositionComponent.StreamOffset = 0;
    local_f8.PreSkinPositionComponent.Offset = '\0';
    local_f8.PreSkinPositionComponent.Stride = '\0';
    local_f8.PreSkinPositionComponent.Type.Value = '\0';
    local_f8.PreSkinPositionComponent.VertexStreamUsage = Default;
    local_f8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
    FPositionVertexBuffer::BindPositionVertexBuffer
              (this_00,(FVertexFactory *)this_02,(FStaticMeshDataType *)&local_f8);
    FStaticMeshVertexBuffer::BindTangentVertexBuffer
              (&this->StaticMeshVertexBuffer,(FVertexFactory *)this_02,
               (FStaticMeshDataType *)&local_f8);
    FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
              (&this->StaticMeshVertexBuffer,(FVertexFactory *)this_02,
               (FStaticMeshDataType *)&local_f8,-1);
    FColorVertexBuffer::BindColorVertexBuffer
              (this_01,(FVertexFactory *)this_02,(FStaticMeshDataType *)&local_f8);
    FLocalVertexFactory::SetData
              (this_02,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,&local_f8);
    if ((int)(this->VertexFactory)._padding_ == -1) {
      (**(code **)(this_02->_padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)this_02,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    (**(code **)(this_00->_padding_ + 0x18))(this_00,0x154be5ed0);
    (**(code **)((this->StaticMeshVertexBuffer)._padding_ + 0x18))
              (&this->StaticMeshVertexBuffer,0x154be5ed0);
    (**(code **)(this_01->_padding_ + 0x18))(this_01,0x154be5ed0);
    (**(code **)(this_02->_padding_ + 0x18))(this_02,0x154be5ed0);
    if (0 < (this->IndexBuffer).Indices.ArrayNum) {
      (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,0x154be5ed0);
    }
    if ((this->bEnableSecondaryIndexBuffer != false) &&
       (0 < (this->SecondaryIndexBuffer).Indices.ArrayNum)) {
      (**(code **)((this->SecondaryIndexBuffer)._padding_ + 0x18))
                (&this->SecondaryIndexBuffer,0x154be5ed0);
    }
    this->bIsRayTracingDataValid = false;
    bVar2 = IsRayTracingEnabled();
    if ((bVar2) && (this->bEnableRaytracing != false)) {
      UpdateRaytracingGeometryIfEnabled(this);
      this->bIsRayTracingDataValid = true;
    }
  }
  return;
}

// UploadIndexBufferUpdate @ 14971d330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMeshRenderBufferSet::UploadIndexBufferUpdate(FMeshRenderBufferSet *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < (this->IndexBuffer).Indices.ArrayNum) {
    if ((int)(this->IndexBuffer)._padding_ == -1) {
      (**(code **)((this->IndexBuffer)._padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)&this->IndexBuffer,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
  }
  if ((this->bEnableSecondaryIndexBuffer != false) &&
     (0 < (this->SecondaryIndexBuffer).Indices.ArrayNum)) {
    if ((int)(this->SecondaryIndexBuffer)._padding_ == -1) {
      (**(code **)((this->SecondaryIndexBuffer)._padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)&this->SecondaryIndexBuffer,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
  }
  this->bIsRayTracingDataValid = false;
  bVar2 = IsRayTracingEnabled();
  if ((bVar2) && (this->bEnableRaytracing != false)) {
    UpdateRaytracingGeometryIfEnabled(this);
    this->bIsRayTracingDataValid = true;
  }
  return;
}

// UploadVertexUpdate @ 14971d400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshRenderBufferSet::UploadVertexUpdate
          (FMeshRenderBufferSet *this,bool param_1,bool param_2,bool param_3)

{
  FLocalVertexFactory *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_118 [32];
  FDataType local_f8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (this->TriangleCount != 0) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1) {
      if ((int)(this->PositionVertexBuffer)._padding_ == -1) {
        (**(code **)((this->PositionVertexBuffer)._padding_ + 0x18))();
      }
      else {
        FRenderResource::UpdateRHI
                  ((FRenderResource *)&this->PositionVertexBuffer,
                   (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
      }
    }
    if (param_2) {
      if ((int)(this->StaticMeshVertexBuffer)._padding_ == -1) {
        (**(code **)((this->StaticMeshVertexBuffer)._padding_ + 0x18))();
      }
      else {
        FRenderResource::UpdateRHI
                  ((FRenderResource *)&this->StaticMeshVertexBuffer,
                   (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
      }
    }
    if (param_3) {
      if ((int)(this->ColorVertexBuffer)._padding_ == -1) {
        (**(code **)((this->ColorVertexBuffer)._padding_ + 0x18))();
      }
      else {
        FRenderResource::UpdateRHI
                  ((FRenderResource *)&this->ColorVertexBuffer,
                   (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
      }
    }
    local_f8._padding_._4_4_ = 4;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    this_00 = &this->VertexFactory;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_._0_4_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_._0_4_ = 0xffffffff;
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8._padding_._4_2_ = 0xff;
    local_f8._padding_._6_1_ = 0;
    local_f8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
    local_f8.PreSkinPositionComponent.StreamOffset = 0;
    local_f8.PreSkinPositionComponent.Offset = '\0';
    local_f8.PreSkinPositionComponent.Stride = '\0';
    local_f8.PreSkinPositionComponent.Type.Value = '\0';
    local_f8.PreSkinPositionComponent.VertexStreamUsage = Default;
    local_f8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
    FPositionVertexBuffer::BindPositionVertexBuffer
              (&this->PositionVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_f8);
    FStaticMeshVertexBuffer::BindTangentVertexBuffer
              (&this->StaticMeshVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_f8);
    FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
              (&this->StaticMeshVertexBuffer,(FVertexFactory *)this_00,
               (FStaticMeshDataType *)&local_f8,-1);
    FColorVertexBuffer::BindColorVertexBuffer
              (&this->ColorVertexBuffer,(FVertexFactory *)this_00,(FStaticMeshDataType *)&local_f8);
    FLocalVertexFactory::SetData
              (this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,&local_f8);
    if ((int)(this->VertexFactory)._padding_ == -1) {
      (**(code **)(this_00->_padding_ + 0x18))();
    }
    else {
      FRenderResource::UpdateRHI
                ((FRenderResource *)this_00,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    this->bIsRayTracingDataValid = false;
    bVar2 = IsRayTracingEnabled();
    if ((bVar2) && (this->bEnableRaytracing != false)) {
      UpdateRaytracingGeometryIfEnabled(this);
      this->bIsRayTracingDataValid = true;
    }
  }
  return;
}

