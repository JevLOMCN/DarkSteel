// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FStaticMeshInstanceBuffer @ 147cc5ca0

FStaticMeshInstanceBuffer * __thiscall
FStaticMeshInstanceBuffer::FStaticMeshInstanceBuffer
          (FStaticMeshInstanceBuffer *this,Type param_1,bool param_2)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  this->RequireCPUAccess = param_2;
  this->bFlushToGPUPending = false;
  this->_padding_ = (longlong)&___7FStaticMeshInstanceBuffer__6B_;
  (this->InstanceData).Object = (FStaticMeshInstanceData *)0x0;
  (this->InstanceData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->InstanceOriginBuffer);
  *(undefined ***)&this->InstanceOriginBuffer =
       &___7FInstanceOriginBuffer_FStaticMeshInstanceBuffer__6B_;
  (this->InstanceOriginSRV).Reference = (FRHIShaderResourceView *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->InstanceTransformBuffer);
  *(undefined ***)&this->InstanceTransformBuffer =
       &___7FInstanceTransformBuffer_FStaticMeshInstanceBuffer__6B_;
  (this->InstanceTransformSRV).Reference = (FRHIShaderResourceView *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->InstanceLightmapBuffer);
  *(undefined ***)&this->InstanceLightmapBuffer =
       &___7FInstanceLightmapBuffer_FStaticMeshInstanceBuffer__6B_;
  (this->InstanceLightmapSRV).Reference = (FRHIShaderResourceView *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->InstanceCustomDataBuffer);
  *(undefined ***)&this->InstanceCustomDataBuffer =
       &___7FInstanceCustomDataBuffer_FStaticMeshInstanceBuffer__6B_;
  (this->InstanceCustomDataSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FStaticMeshInstanceBuffer @ 147cc8e70

void __thiscall
FStaticMeshInstanceBuffer::~FStaticMeshInstanceBuffer(FStaticMeshInstanceBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FStaticMeshInstanceBuffer__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InstanceData != (TSharedPtr<FStaticMeshInstanceData,1> *)&local_18) {
    (this->InstanceData).Object = (FStaticMeshInstanceData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pFVar1 = (this->InstanceCustomDataSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->InstanceCustomDataBuffer);
  pFVar1 = (this->InstanceLightmapSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->InstanceLightmapBuffer);
  pFVar1 = (this->InstanceTransformSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->InstanceTransformBuffer);
  pFVar1 = (this->InstanceOriginSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->InstanceOriginBuffer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceData).SharedReferenceCount.ReferenceController);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator= @ 147cca6d0

void __thiscall
FStaticMeshInstanceBuffer::operator=
          (FStaticMeshInstanceBuffer *this,FStaticMeshInstanceBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                     ,0x1a8,L"Unexpected assignment call");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BindInstanceVertexBuffer @ 147cd8fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FStaticMeshInstanceBuffer::BindInstanceVertexBuffer
          (FStaticMeshInstanceBuffer *this,FVertexFactory *param_1,
          FInstancedStaticMeshDataType *param_2)

{
  FInstanceTransformBuffer *pFVar1;
  FStaticMeshInstanceData *pFVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  bool bVar6;
  uchar uVar7;
  uchar uVar8;
  
  if ((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->InstanceData).Object)->NumInstances != 0) {
    bVar5 = RHISupportsManualVertexFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (bVar5) {
      if ((this->InstanceOriginSRV).Reference == (FRHIShaderResourceView *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceOriginSRV",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                           ,0x214,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((this->InstanceTransformSRV).Reference == (FRHIShaderResourceView *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceTransformSRV",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                           ,0x215,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((this->InstanceLightmapSRV).Reference == (FRHIShaderResourceView *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceLightmapSRV",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                           ,0x216,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if ((this->InstanceCustomDataSRV).Reference == (FRHIShaderResourceView *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceCustomDataSRV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x218,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  param_2->InstanceOriginSRV = (this->InstanceOriginSRV).Reference;
  param_2->InstanceTransformSRV = (this->InstanceTransformSRV).Reference;
  param_2->InstanceLightmapSRV = (this->InstanceLightmapSRV).Reference;
  param_2->InstanceCustomDataSRV = (this->InstanceCustomDataSRV).Reference;
  if ((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_2->NumCustomDataFloats = ((this->InstanceData).Object)->NumCustomDataFloats;
  (param_2->InstanceOriginComponent).VertexBuffer = (FVertexBuffer *)&this->InstanceOriginBuffer;
  (param_2->InstanceOriginComponent).StreamOffset = 0;
  (param_2->InstanceOriginComponent).Offset = '\0';
  (param_2->InstanceOriginComponent).Stride = '\x10';
  (param_2->InstanceOriginComponent).Type = '\x04';
  (param_2->InstanceOriginComponent).VertexStreamUsage = ManualFetch|Instancing;
  if ((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->InstanceData).Object;
  bVar5 = pFVar2->bUseHalfFloat;
  if (pFVar2 == (FStaticMeshInstanceData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = &this->InstanceTransformBuffer;
  bVar6 = ((this->InstanceData).Object)->bUseHalfFloat;
  param_2->InstanceTransformComponent[0].VertexBuffer = (FVertexBuffer *)pFVar1;
  param_2->InstanceTransformComponent[0].StreamOffset = 0;
  uVar8 = '\x10';
  if (bVar6 != false) {
    uVar8 = '\b';
  }
  param_2->InstanceTransformComponent[0].Offset = '\0';
  uVar4 = uVar8 * '\x03';
  param_2->InstanceTransformComponent[0].Stride = uVar4;
  uVar7 = '\x04';
  if (bVar5 != false) {
    uVar7 = '\r';
  }
  param_2->InstanceTransformComponent[0].Type.Value = uVar7;
  param_2->InstanceTransformComponent[0].VertexStreamUsage = ManualFetch|Instancing;
  param_2->InstanceTransformComponent[1].VertexBuffer = (FVertexBuffer *)pFVar1;
  param_2->InstanceTransformComponent[1].StreamOffset = 0;
  param_2->InstanceTransformComponent[1].Offset = uVar8;
  param_2->InstanceTransformComponent[1].Stride = uVar4;
  param_2->InstanceTransformComponent[1].Type.Value = uVar7;
  param_2->InstanceTransformComponent[1].VertexStreamUsage = ManualFetch|Instancing;
  param_2->InstanceTransformComponent[2].VertexBuffer = (FVertexBuffer *)pFVar1;
  param_2->InstanceTransformComponent[2].StreamOffset = 0;
  param_2->InstanceTransformComponent[2].Offset = uVar8 * '\x02';
  param_2->InstanceTransformComponent[2].Stride = uVar4;
  param_2->InstanceTransformComponent[2].Type.Value = uVar7;
  param_2->InstanceTransformComponent[2].VertexStreamUsage = ManualFetch|Instancing;
  (param_2->InstanceLightmapAndShadowMapUVBiasComponent).VertexBuffer =
       (FVertexBuffer *)&this->InstanceLightmapBuffer;
  (param_2->InstanceLightmapAndShadowMapUVBiasComponent).StreamOffset = 0;
  (param_2->InstanceLightmapAndShadowMapUVBiasComponent).Offset = '\0';
  (param_2->InstanceLightmapAndShadowMapUVBiasComponent).Stride = '\b';
  (param_2->InstanceLightmapAndShadowMapUVBiasComponent).Type = '\x0e';
  (param_2->InstanceLightmapAndShadowMapUVBiasComponent).VertexStreamUsage = ManualFetch|Instancing;
  return;
}

// CleanUp @ 147ce41f0

void __thiscall FStaticMeshInstanceBuffer::CleanUp(FStaticMeshInstanceBuffer *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InstanceData != (TSharedPtr<FStaticMeshInstanceData,1> *)&local_18) {
    (this->InstanceData).Object = (FStaticMeshInstanceData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceData).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// CreateVertexBuffer @ 147ceb980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FStaticMeshInstanceBuffer::CreateVertexBuffer
          (FStaticMeshInstanceBuffer *this,FRHICommandListBase *param_1,
          FResourceArrayInterface *param_2,EBufferUsageFlags param_3,uint param_4,uchar param_5,
          TRefCountPtr<FRHIBuffer> *param_6,TRefCountPtr<FRHIShaderResourceView> *param_7)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ERHIAccess EVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  byte bVar8;
  ulonglong uVar9;
  FRHIResource *local_res18;
  FRHIResource *local_70;
  short local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  FResourceArrayInterface *pFStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  if (param_2 == (FResourceArrayInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResourceArray",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)((longlong)*param_2 + 0x10))(param_2);
  if (iVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResourceArray->GetResourceDataSize() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (**(code **)((longlong)*param_2 + 0x10))(param_2);
  bVar8 = (byte)GNumExplicitGPUsForRendering;
  EVar5 = RHIGetDefaultResourceState(param_3 | VertexBuffer,false);
  local_58 = (ulonglong)uVar4;
  uStack_50 = CONCAT44((1 << (bVar8 & 0x1f)) + -1,param_3) | 0x4000;
  local_38 = CONCAT44(2,EVar5);
  local_48 = L"FStaticMeshInstanceBuffer";
  lStack_30 = 0;
  local_28 = 0;
  pFStack_40 = param_2;
  TVar6 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&stack0x00000018);
  if ((FRHIBuffer *)param_6 != TVar6.Reference) {
    this_00 = param_6->Reference;
    param_6->Reference = (FRHIBuffer *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  uVar9 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].bSupportsManualVertexFetch != 0) {
    lStack_60 = 0;
    local_68 = (ushort)param_5 << 8;
    _local_68 = (ulonglong)CONCAT12(1,local_68);
    TVar7 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&stack0xffffffffffffff90,
                       (FInitializer *)param_6->Reference);
    if ((FRHIShaderResourceView *)param_7 != TVar7.Reference) {
      this_01 = param_7->Reference;
                    /* WARNING: Load size is inaccurate */
      param_7->Reference = *TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (local_70 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_70);
    }
  }
  return;
}

// FlushGPUUpload @ 147cf7b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshInstanceBuffer::FlushGPUUpload
          (FStaticMeshInstanceBuffer *this,FRHICommandListBase *param_1)

{
  if (this->bFlushToGPUPending != false) {
    if ((int)this->_padding_ == -1) {
      (**(code **)(this->_padding_ + 0x18))();
      this->bFlushToGPUPending = false;
      return;
    }
    FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
    this->bFlushToGPUPending = false;
  }
  return;
}

// GetFriendlyName @ 147d04bd0

FString * __thiscall
FStaticMeshInstanceBuffer::GetFriendlyName
          (FStaticMeshInstanceBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Static-mesh instances");
  return __return_storage_ptr__;
}

// GetResourceSize @ 147d0d980

ulong64 __thiscall FStaticMeshInstanceBuffer::GetResourceSize(FStaticMeshInstanceBuffer *this)

{
  FStaticMeshInstanceData *pFVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  pFVar1 = (this->InstanceData).Object;
  if ((pFVar1 != (FStaticMeshInstanceData *)0x0) && (0 < pFVar1->NumInstances)) {
    pFVar2 = pFVar1->InstanceOriginData;
    pFVar3 = pFVar1->InstanceLightmapData;
    pFVar4 = pFVar1->InstanceTransformData;
    lVar5 = (**(code **)((longlong)*pFVar1->InstanceCustomData + 0x50))();
    lVar6 = (**(code **)((longlong)*pFVar3 + 0x50))(pFVar3);
    lVar7 = (**(code **)((longlong)*pFVar2 + 0x50))(pFVar2);
    lVar8 = (**(code **)((longlong)*pFVar4 + 0x50))(pFVar4);
    return lVar8 + lVar5 + lVar6 + lVar7;
  }
  return 0;
}

// InitFromPreallocatedData @ 147d16020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshInstanceBuffer::InitFromPreallocatedData
          (FStaticMeshInstanceBuffer *this,FStaticMeshInstanceData *param_1)

{
  TSharedPtr<FStaticMeshInstanceData,1> *pTVar1;
  int *piVar2;
  code *pcVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  uchar *puVar5;
  uchar *puVar6;
  FStaticMeshVertexDataInterface *pFVar7;
  uchar *puVar8;
  FStaticMeshVertexDataInterface *pFVar9;
  uchar *puVar10;
  FStaticMeshVertexDataInterface *pFVar11;
  uchar *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  undefined7 uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined7 uVar21;
  bool bVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshInstanceBuffer::InitFromPreallocatedData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData>
  FVar24;
  longlong *plVar25;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar26;
  FNameEntryId FVar27;
  FName FVar28;
  TReferenceControllerBase<1> *pTVar29;
  FStaticMeshInstanceData *pFVar30;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FStaticMeshInstanceData *local_80;
  FSharedReferencer<1> FStack_78;
  FStatMessage local_70 [3];
  
  pTVar29 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshInstanceBuffer::InitFromPreallocatedData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData>
           )0x0) {
        pFVar23 = ::FName::FName(&local_res20,
                                 "STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData,*pFVar23,
                   L"STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar24 = StatPtr_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData;
  if (StatPtr_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshInstanceBuffer::InitFromPreallocatedData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData>
       )0x0) {
    pFVar23 = ::FName::FName(&local_98,"STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshInstanceBuffer::InitFromPreallocatedData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData,*pFVar23,
                          L"STAT_FStaticMeshInstanceBuffer_InitFromPreallocatedData",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar24;
  bVar13 = false;
  bVar15 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar27 = FVar28.ComparisonIndex.Value;
  uVar26 = FVar28.Number;
  if ((FVar27.Value != 0) || (uVar26 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar13 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar27.Value;
        local_res10.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0x19c);
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar27.Value;
      local_res18.s.HighPart = uVar26;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar14 = true;
      goto LAB_147d161b0;
    }
  }
  bVar14 = false;
  FVar28 = local_90;
LAB_147d161b0:
  FStack_78.ReferenceController = ::operator_new(0x60);
  if (FStack_78.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_80 = ___xmm_00000000000000000000000000000010;
    pFVar30 = (FStaticMeshInstanceData *)&DAT_00000010;
    FStack_78.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_78.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar30 = (FStaticMeshInstanceData *)(FStack_78.ReferenceController + 1);
    (FStack_78.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_78.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStaticMeshInstanceData___00_SharedPointerInternals__6B_
    ;
    FStack_78.ReferenceController[1]._padding_ = 0;
    FStack_78.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[2]._padding_ = 0;
    FStack_78.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[3]._padding_ = 0;
    FStack_78.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[4]._padding_ = 0;
    FStack_78.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    FStack_78.ReferenceController[5]._padding_ = 0;
    *(undefined1 *)&FStack_78.ReferenceController[5].SharedReferenceCount = 0;
    if (pFVar30 == (FStaticMeshInstanceData *)0x0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar22) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    (FStack_78.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_78.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar29 = FStack_78.ReferenceController;
    local_80 = pFVar30;
  }
  pTVar1 = &this->InstanceData;
  if (pTVar1 != (TSharedPtr<FStaticMeshInstanceData,1> *)&local_80) {
    pTVar1->Object = pFVar30;
    local_80 = (FStaticMeshInstanceData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceData).SharedReferenceCount,&FStack_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_78.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  pFVar30 = pTVar1->Object;
  iVar18 = param_1->NumInstances;
  iVar19 = param_1->NumCustomDataFloats;
  bVar20 = param_1->bUseHalfFloat;
  uVar21 = *(undefined7 *)&param_1->field_0x49;
  pFVar4 = param_1->InstanceOriginData;
  puVar5 = param_1->InstanceOriginDataPtr;
  puVar6 = pFVar30->InstanceOriginDataPtr;
  pFVar7 = param_1->InstanceTransformData;
  puVar8 = param_1->InstanceTransformDataPtr;
  pFVar9 = param_1->InstanceLightmapData;
  puVar10 = param_1->InstanceLightmapDataPtr;
  pFVar11 = param_1->InstanceCustomData;
  puVar12 = param_1->InstanceCustomDataPtr;
  param_1->InstanceOriginData = pFVar30->InstanceOriginData;
  param_1->InstanceOriginDataPtr = puVar6;
  puVar6 = pFVar30->InstanceTransformDataPtr;
  param_1->InstanceTransformData = pFVar30->InstanceTransformData;
  param_1->InstanceTransformDataPtr = puVar6;
  puVar6 = pFVar30->InstanceLightmapDataPtr;
  param_1->InstanceLightmapData = pFVar30->InstanceLightmapData;
  param_1->InstanceLightmapDataPtr = puVar6;
  puVar6 = pFVar30->InstanceCustomDataPtr;
  param_1->InstanceCustomData = pFVar30->InstanceCustomData;
  param_1->InstanceCustomDataPtr = puVar6;
  iVar16 = pFVar30->NumCustomDataFloats;
  bVar22 = pFVar30->bUseHalfFloat;
  uVar17 = *(undefined7 *)&pFVar30->field_0x49;
  param_1->NumInstances = pFVar30->NumInstances;
  param_1->NumCustomDataFloats = iVar16;
  param_1->bUseHalfFloat = bVar22;
  *(undefined7 *)&param_1->field_0x49 = uVar17;
  pFVar30->InstanceOriginData = pFVar4;
  pFVar30->InstanceOriginDataPtr = puVar5;
  pFVar30->InstanceTransformData = pFVar7;
  pFVar30->InstanceTransformDataPtr = puVar8;
  pFVar30->InstanceLightmapData = pFVar9;
  pFVar30->InstanceLightmapDataPtr = puVar10;
  pFVar30->InstanceCustomData = pFVar11;
  pFVar30->InstanceCustomDataPtr = puVar12;
  pFVar30->NumInstances = iVar18;
  pFVar30->NumCustomDataFloats = iVar19;
  pFVar30->bUseHalfFloat = bVar20;
  *(undefined7 *)&pFVar30->field_0x49 = uVar21;
  if (pTVar1->Object == (FStaticMeshInstanceData *)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar30 = pTVar1->Object;
  bVar22 = this->RequireCPUAccess;
  if (pFVar30->InstanceOriginData != (FStaticMeshVertexDataInterface *)0x0) {
    plVar25 = (longlong *)(**(code **)((longlong)*pFVar30->InstanceOriginData + 0x38))();
    (**(code **)(*plVar25 + 0x38))(plVar25,bVar22);
  }
  if (pFVar30->InstanceLightmapData != (FStaticMeshVertexDataInterface *)0x0) {
    plVar25 = (longlong *)(**(code **)((longlong)*pFVar30->InstanceLightmapData + 0x38))();
    (**(code **)(*plVar25 + 0x38))(plVar25,bVar22);
  }
  if (pFVar30->InstanceTransformData != (FStaticMeshVertexDataInterface *)0x0) {
    plVar25 = (longlong *)(**(code **)((longlong)*pFVar30->InstanceTransformData + 0x38))();
    (**(code **)(*plVar25 + 0x38))(plVar25,bVar22);
  }
  if (pFVar30->InstanceCustomData != (FStaticMeshVertexDataInterface *)0x0) {
    plVar25 = (longlong *)(**(code **)((longlong)*pFVar30->InstanceCustomData + 0x38))();
    (**(code **)(*plVar25 + 0x38))(plVar25,bVar22);
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70[0].NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_70[0].NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_70[0].StatData.Pad[4] = '\0';
      local_70[0].StatData.Pad[5] = '\0';
      local_70[0].StatData.Pad[6] = '\0';
      local_70[0].StatData.Pad[7] = '\0';
      local_70[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_70[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_70[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_70[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_70);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitRHI @ 147d17970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshInstanceBuffer::InitRHI(FStaticMeshInstanceBuffer *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  undefined1 *puVar3;
  FStaticMeshInstanceData *pFVar4;
  FRHIShaderResourceView *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 this_01;
  FRHICommandListBase *pFVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshInstanceBuffer::InitRHI(FRHICommandListBase_&)_::_12_::FStat_STAT_FStaticMeshInstanceBuffer_InitRHI>
  FVar13;
  FResourceArrayInterface *pFVar14;
  TRefCountPtr<FRHIShaderResourceView> TVar15;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar16;
  uint uVar17;
  uchar uVar18;
  bool bVar19;
  FLLMScope local_res8 [2];
  FRHICommandListBase *local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  undefined1 local_90 [48];
  uint local_60;
  uint local_5c;
  FName local_58;
  FName local_50 [2];
  
  bVar19 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId429,"FStaticMeshInstanceBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x1ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId429);
  }
  if ((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstanceData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                        ,0x1af,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((this->InstanceData).Object)->NumInstances < 1) goto LAB_147d18033;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FStaticMeshInstanceBuffer_InitRHI ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshInstanceBuffer::InitRHI(FRHICommandListBase_&)_::_12_::FStat_STAT_FStaticMeshInstanceBuffer_InitRHI>
         )0x0) {
      pFVar12 = ::FName::FName(&local_58,"STAT_FStaticMeshInstanceBuffer_InitRHI");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FStaticMeshInstanceBuffer_InitRHI,
                 *pFVar12,L"STAT_FStaticMeshInstanceBuffer_InitRHI","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_FStaticMeshInstanceBuffer_InitRHI;
  if (StatPtr_STAT_FStaticMeshInstanceBuffer_InitRHI ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshInstanceBuffer::InitRHI(FRHICommandListBase_&)_::_12_::FStat_STAT_FStaticMeshInstanceBuffer_InitRHI>
       )0x0) {
    pFVar12 = ::FName::FName(local_50,"STAT_FStaticMeshInstanceBuffer_InitRHI");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStaticMeshInstanceBuffer::InitRHI(FRHICommandListBase_&)_::_12_::FStat_STAT_FStaticMeshInstanceBuffer_InitRHI>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FStaticMeshInstanceBuffer_InitRHI,*pFVar12,
                          L"STAT_FStaticMeshInstanceBuffer_InitRHI","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar10 = false;
  bVar8 = false;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_147d17ba5:
    bVar7 = false;
    FVar16.ComparisonIndex.Value = 0;
    FVar16.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_res20.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0x1b2);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147d17ba5;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
  }
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId435,"FStaticMeshInstanceBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x1b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
  }
  FLLMScope::FLLMScope(local_res8,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_90 + 8),InstancedMesh,true);
  if (((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = (FResourceArrayInterface *)
            (**(code **)((longlong)*((this->InstanceData).Object)->InstanceOriginData + 0x38))();
  uVar17 = 0x10;
  CreateVertexBuffer(this,param_1,pFVar14,ShaderResource|Static,0x10,'\x01',
                     (TRefCountPtr<FRHIBuffer> *)&(this->InstanceOriginBuffer).field_0x20,
                     &this->InstanceOriginSRV);
  if (((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->InstanceData).Object;
  uVar18 = '\x01';
  if (pFVar4->bUseHalfFloat != false) {
    uVar18 = '\n';
  }
  if ((pFVar4 == (FStaticMeshInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->InstanceData).Object;
  if (pFVar4->bUseHalfFloat != false) {
    uVar17 = 8;
  }
  if ((pFVar4 == (FStaticMeshInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = (FResourceArrayInterface *)
            (**(code **)((longlong)*((this->InstanceData).Object)->InstanceTransformData + 0x38))();
  pFVar9 = local_res10;
  CreateVertexBuffer(this,local_res10,pFVar14,ShaderResource|Static,uVar17,uVar18,
                     (TRefCountPtr<FRHIBuffer> *)&(this->InstanceTransformBuffer).field_0x20,
                     &this->InstanceTransformSRV);
  if (((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = (FResourceArrayInterface *)
            (**(code **)((longlong)*((this->InstanceData).Object)->InstanceLightmapData + 0x38))();
  CreateVertexBuffer(this,pFVar9,pFVar14,ShaderResource|Static,8,'?',
                     (TRefCountPtr<FRHIBuffer> *)&(this->InstanceLightmapBuffer).field_0x20,
                     &this->InstanceLightmapSRV);
  if (((this->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_01 = GDummyFloatBuffer._40_8_;
  pFVar4 = (this->InstanceData).Object;
  if (pFVar4->NumCustomDataFloats < 1) {
    local_90._0_8_ = (this->InstanceCustomDataSRV).Reference;
    if (local_90._0_8_ != GDummyFloatBuffer._40_8_) {
      (this->InstanceCustomDataSRV).Reference = (FRHIShaderResourceView *)GDummyFloatBuffer._40_8_;
      if (this_01 != 0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      goto joined_r0x000147d17f24;
    }
  }
  else {
    if ((pFVar4 == (FStaticMeshInstanceData *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = (FResourceArrayInterface *)
              (**(code **)((longlong)*((this->InstanceData).Object)->InstanceCustomData + 0x38))();
    pTVar2 = &this->InstanceCustomDataSRV;
    puVar3 = &(this->InstanceCustomDataBuffer).field_0x20;
    CreateVertexBuffer(this,local_res10,pFVar14,ShaderResource|Static,4,'\r',
                       (TRefCountPtr<FRHIBuffer> *)puVar3,pTVar2);
    if (pTVar2->Reference == (FRHIShaderResourceView *)0x0) {
      local_90._32_8_ = 0;
      local_90._24_8_ = 0x10d00;
      TVar15 = FRHICommandListBase::CreateShaderResourceView
                         (local_res10,(FRHIBuffer *)local_90,*(FInitializer **)puVar3);
      if ((FRHIShaderResourceView *)pTVar2 != TVar15.Reference) {
        this_00 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar2->Reference = *TVar15.Reference;
        *(undefined8 *)TVar15.Reference = 0;
        if (this_00 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
joined_r0x000147d17f24:
      if ((FRHIShaderResourceView *)local_90._0_8_ != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_90._0_8_);
      }
    }
  }
  FMemScope::~FMemScope((FMemScope *)(local_90 + 8));
  FLLMScope::~FLLMScope(local_res8);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_60 = (uint)FVar16.ComparisonIndex.Value;
      local_5c = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_90 + 0x10));
      local_90._40_8_ = ZEXT48((uint)local_90._16_4_);
      FThreadStats::AddStatMessage(this_02,(FStatMessage *)(local_90 + 0x28));
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
LAB_147d18033:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitResource @ 147d18100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshInstanceBuffer::InitResource
          (FStaticMeshInstanceBuffer *this,FRHICommandListBase *param_1)

{
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  (**(code **)(*(longlong *)&this->InstanceOriginBuffer + 0x18))
            (&this->InstanceOriginBuffer,param_1);
  (**(code **)(*(longlong *)&this->InstanceTransformBuffer + 0x18))
            (&this->InstanceTransformBuffer,param_1);
  (**(code **)(*(longlong *)&this->InstanceLightmapBuffer + 0x18))
            (&this->InstanceLightmapBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147d18158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->InstanceCustomDataBuffer + 0x18))
            (&this->InstanceCustomDataBuffer,param_1);
  return;
}

// ReleaseRHI @ 147d213c0

void __thiscall FStaticMeshInstanceBuffer::ReleaseRHI(FStaticMeshInstanceBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  
  pFVar1 = (this->InstanceOriginSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->InstanceOriginSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->InstanceTransformSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->InstanceTransformSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->InstanceLightmapSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->InstanceLightmapSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->InstanceCustomDataSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->InstanceCustomDataSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  (**(code **)(*(longlong *)&this->InstanceOriginBuffer + 0x10))(&this->InstanceOriginBuffer);
  (**(code **)(*(longlong *)&this->InstanceTransformBuffer + 0x10))(&this->InstanceTransformBuffer);
  (**(code **)(*(longlong *)&this->InstanceLightmapBuffer + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000147d21460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->InstanceCustomDataBuffer + 0x10))();
  return;
}

// ReleaseResource @ 147d21610

void __thiscall FStaticMeshInstanceBuffer::ReleaseResource(FStaticMeshInstanceBuffer *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)(*(longlong *)&this->InstanceOriginBuffer + 0x20))(&this->InstanceOriginBuffer);
  (**(code **)(*(longlong *)&this->InstanceTransformBuffer + 0x20))(&this->InstanceTransformBuffer);
  (**(code **)(*(longlong *)&this->InstanceLightmapBuffer + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x000147d21650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->InstanceCustomDataBuffer + 0x20))();
  return;
}

