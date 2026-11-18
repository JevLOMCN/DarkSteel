// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetPackedUniforms @ 14873d8a0

void __thiscall
UE::SVT::FTextureRenderResources::GetPackedUniforms
          (FTextureRenderResources *this,TIntVector4<unsigned_int> *param_1,
          TIntVector4<unsigned_int> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_28;
  
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x368,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar6 = __real_3d800000;
  uVar1 = *(undefined8 *)&(this->Header).PageTableVolumeAABBMin.field0_0x0;
  iVar3 = (this->GlobalVolumeResolution).field0_0x0._s_0.Z;
  iVar4 = (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z;
  fVar10 = __real_3f800000 / (float)(this->TileDataTextureResolution).field0_0x0._s_0.X;
  fVar11 = __real_3f800000 / (float)(this->TileDataTextureResolution).field0_0x0._s_0.Z;
  fVar9 = __real_3f800000 / (float)(this->TileDataTextureResolution).field0_0x0._s_0.Y;
  uVar2 = *(undefined8 *)&(this->GlobalVolumeResolution).field0_0x0;
  local_28 = (int)uVar2;
  *(float *)&param_1->field0_0x0 = (float)local_28 * __real_3d800000;
  *(float *)((longlong)&param_1->field0_0x0 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20) * fVar6;
  *(float *)((longlong)&param_1->field0_0x0 + 8) = (float)iVar3 * fVar6;
  (param_1->field0_0x0)._s_0.W =
       ((uint)((ulonglong)uVar1 >> 0x20) & 0x7ff | iVar4 << 0xb) << 0xb | (uint)uVar1 & 0x7ff;
  *(float *)((longlong)&param_2->field0_0x0 + 4) = fVar9;
  (param_2->field0_0x0)._s_0.W = 0;
  *(float *)&param_2->field0_0x0 = fVar10;
  *(float *)((longlong)&param_2->field0_0x0 + 8) = fVar11;
  uVar8 = this->FrameIndex & 0xffff;
  (param_2->field0_0x0)._s_0.W = uVar8;
  (param_2->field0_0x0)._s_0.W = this->NumLogicalMipLevels * 0x10000 - 0x10000U | uVar8;
  return;
}

// InitRHI @ 148746740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::SVT::FTextureRenderResources::InitRHI
          (FTextureRenderResources *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITextureReference> *pTVar1;
  FRHITextureReference *pFVar2;
  TRefCountPtr<FRHITextureReference> local_28;
  TRefCountPtr<FRHITextureReference> local_20;
  TRefCountPtr<FRHITextureReference> local_18 [2];
  
  (**(code **)(GDynamicRHI->_padding_ + 0x1a8))
            (GDynamicRHI,&local_28,param_1,(GBlackUintVolumeTexture->TextureRHI).Reference);
  pTVar1 = &this->PageTableTextureReferenceRHI;
  if (pTVar1 == &local_28) {
LAB_1487467a2:
    if (local_28.Reference != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)local_28.Reference);
    }
  }
  else {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = local_28.Reference;
    local_28.Reference = (FRHITextureReference *)0x0;
    if (pFVar2 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
      goto LAB_1487467a2;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1a8))
            (GDynamicRHI,&local_20,param_1,(GBlackVolumeTexture->TextureRHI).Reference);
  pTVar1 = &this->PhysicalTileDataATextureReferenceRHI;
  if (pTVar1 != &local_20) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = local_20.Reference;
    local_20.Reference = (FRHITextureReference *)0x0;
    if (pFVar2 == (FRHITextureReference *)0x0) goto LAB_148746812;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if (local_20.Reference != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)local_20.Reference);
  }
LAB_148746812:
  (**(code **)(GDynamicRHI->_padding_ + 0x1a8))
            (GDynamicRHI,local_18,param_1,(GBlackVolumeTexture->TextureRHI).Reference);
  pTVar1 = &this->PhysicalTileDataBTextureReferenceRHI;
  if (pTVar1 != local_18) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = local_18[0].Reference;
    local_18[0].Reference = (FRHITextureReference *)0x0;
    if (pFVar2 == (FRHITextureReference *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if (local_18[0].Reference != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18[0].Reference);
  }
  return;
}

// ReleaseRHI @ 148751ea0

void __thiscall UE::SVT::FTextureRenderResources::ReleaseRHI(FTextureRenderResources *this)

{
  FRHITextureReference *pFVar1;
  
  pFVar1 = (this->PageTableTextureReferenceRHI).Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    (this->PageTableTextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PhysicalTileDataATextureReferenceRHI).Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    (this->PhysicalTileDataATextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PhysicalTileDataBTextureReferenceRHI).Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    (this->PhysicalTileDataBTextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// SetGlobalVolumeResolution_GameThread @ 14875ad80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread
          (FTextureRenderResources *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined8 *)&param_1->field0_0x0;
  local_90 = (param_1->field0_0x0)._s_0.Z;
  local_88[0] = (code *)0x0;
  local_a0 = this;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  uStack_98 = (undefined4)local_a8;
  uStack_94 = (undefined4)((ulonglong)local_a8 >> 0x20);
  *(undefined4 *)(local_60 + 1) = (undefined4)local_a0;
  *(undefined4 *)((longlong)local_60 + 0xc) = local_a0._4_4_;
  *(undefined4 *)(local_60 + 2) = uStack_98;
  *(undefined4 *)((longlong)local_60 + 0x14) = uStack_94;
  local_60[3] = (code *)CONCAT44(uStack_8c,local_90);
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread_::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>
             ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

