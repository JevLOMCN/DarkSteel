// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// operator() @ 1488b3e80

void __thiscall
`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  TIntPoint<int> TVar4;
  TIntRect<int>_u_0 local_58;
  undefined8 local_48;
  bool bStack_40;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  FReadSurfaceDataFlags local_28;
  
  pTVar2 = *(TArray<FFloat16Color,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
  iVar1 = *(int *)((longlong)this + 0x34);
  local_38 = 0;
  uStack_34 = 0;
  local_48 = 6;
  bStack_40 = true;
  uStack_3c = 0x467a0000;
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 8);
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x10);
  local_28._16_8_ = (ulonglong)uStack_36 << 0x10;
  local_28.CubeFace = CubeFace_MAX;
  local_28.CompressionMode = RCM_UNorm;
  local_28.bLinearToGamma = true;
  local_28._9_3_ = uStack_3f;
  local_28.MaxDepthRange = 16000.0;
  local_28.GPUIndex = 0;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))();
  TVar4.field0_0x0._s_0.Y = iVar1 + 1;
  TVar4.field0_0x0._s_0.X = iVar1;
  FRHICommandListImmediate::Read3DSurfaceFloatData
            (param_1,(FRHITexture *)*puVar3,(TIntRect<int> *)&local_58._s_0,TVar4,pTVar2,&local_28);
  return;
}

// GetDisplayGamma @ 1488c2a70

float __thiscall
FTextureRenderTargetVolumeResource::GetDisplayGamma(FTextureRenderTargetVolumeResource *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001488c2a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x3e0))();
  return fVar1;
}

// GetSizeX @ 1488c4b50

uint __thiscall
FTextureRenderTargetVolumeResource::GetSizeX(FTextureRenderTargetVolumeResource *this)

{
  return this->Owner->SizeX;
}

// GetSizeXY @ 1488c4be0

TIntPoint<int> __thiscall
FTextureRenderTargetVolumeResource::GetSizeXY(FTextureRenderTargetVolumeResource *this)

{
  longlong lVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  lVar1 = this->_padding_;
  *(undefined4 *)in_RDX = *(undefined4 *)(lVar1 + 0x158);
  *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)(lVar1 + 0x15c);
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 1488c4c60

uint __thiscall
FTextureRenderTargetVolumeResource::GetSizeY(FTextureRenderTargetVolumeResource *this)

{
  return this->Owner->SizeY;
}

// GetSizeZ @ 1488c4c80

uint __thiscall
FTextureRenderTargetVolumeResource::GetSizeZ(FTextureRenderTargetVolumeResource *this)

{
  return this->Owner->SizeZ;
}

// GetTextureRenderTargetVolumeResource @ 1488c6480

FTextureRenderTargetVolumeResource * __thiscall
FTextureRenderTargetVolumeResource::GetTextureRenderTargetVolumeResource
          (FTextureRenderTargetVolumeResource *this)

{
  return this;
}

// InitRHI @ 1488c9990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTargetVolumeResource::InitRHI
          (FTextureRenderTargetVolumeResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UTextureRenderTargetVolume *pUVar5;
  FRHIResource *pFVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  TEventRef<unsigned_int> TVar10;
  UPackage *pUVar11;
  TRefCountPtr<FRHITexture> TVar12;
  TRefCountPtr<FRHIUnorderedAccessView> TVar13;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  FRHIResource *pFVar14;
  FWriteBuffer *pFVar15;
  uint uVar16;
  ETextureCreateFlags EVar17;
  undefined1 auStack_1a8 [32];
  TIntPoint<int>_u_0 local_188 [2];
  FSamplerStateInitializerRHI local_178;
  TLogScope<0> local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar10 = (TEventRef<unsigned_int>)local_188;
    local_188[0] = (TIntPoint<int>_u_0)0x0;
  }
  else {
    local_188[0] = (TIntPoint<int>_u_0)0x0;
    TVar10 = FStringTrace::GetNameRef((FName *)&local_158);
  }
  uVar2 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_188[0] = (TIntPoint<int>_u_0)0x0;
    TVar10 = (TEventRef<unsigned_int>)local_188;
  }
  else {
    local_188[0] = (TIntPoint<int>_u_0)0x0;
    TVar10 = FStringTrace::GetNameRef((FName *)&local_158);
  }
  uVar3 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_188[0] = (TIntPoint<int>_u_0)0x0;
    TVar10 = (TEventRef<unsigned_int>)local_188;
  }
  else {
    pUVar11 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Owner);
    local_188[0] = (TIntPoint<int>_u_0)pUVar11->_padding_;
    TVar10 = FStringTrace::GetNameRef((FName *)&local_158);
  }
  uVar4 = *(undefined8 *)TVar10;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>(&local_158);
    bVar8 = true;
    *(int *)local_158._0_8_ = (int)uVar2;
    *(int *)(local_158._0_8_ + 4) = (int)uVar3;
    *(int *)(local_158._0_8_ + 8) = (int)uVar4;
    *(undefined8 *)(local_158._8_8_ + 0x28) = *(undefined8 *)(local_158._8_8_ + 0x20);
  }
  pUVar5 = this->Owner;
  if (((0 < pUVar5->SizeX) && (0 < pUVar5->SizeY)) && (0 < pUVar5->SizeZ)) {
    cVar9 = (**(code **)(pUVar5->_padding_ + 0x3d8))();
    pUVar5 = this->Owner;
    local_148.ExtData = 0;
    local_148.ArraySize = 1;
    local_148.NumSamples = '\x01';
    local_148.Dimension = Texture3D;
    uVar16 = -(uint)(cVar9 != '\0') & 0x10;
    local_148.UAVFormat = PF_Unknown;
    local_148.FastVRAMPercentage = 0xff;
    local_148.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_148.AliasableFormats.ArrayNum = 0;
    local_148.AliasableFormats.ArrayMax = 1;
    EVar17 = (ulonglong)uVar16 | UAV;
    if ((pUVar5->_padding_ & 0x200000000) == 0) {
      EVar17 = (ulonglong)uVar16;
    }
    local_f0 = 0;
    local_148.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_e8 = 0;
    local_f8 = L"FTextureRenderTargetVolumeResource";
    local_188[0] = *(TIntPoint<int>_u_0 *)&pUVar5->SizeX;
    local_148.Depth = (ushort)pUVar5->SizeZ;
    local_e0 = 0;
    local_d8 = 0;
    local_148.Extent.field0_0x0 = local_188[0];
    local_148.Format = (**(code **)(pUVar5->_padding_ + 0x3d0))(pUVar5);
    local_148.NumMips = '\x01';
    local_148.ClearValue.ColorBinding = EColorBound;
    local_148.Flags = EVar17 | (ShaderResource|RenderTargetable);
    local_148.ClearValue.Value.DSValue =
         (DSVAlue)*(undefined8 *)&(this->Owner->ClearColor).field0_0x0;
    local_148.ClearValue.Value._8_8_ =
         *(undefined8 *)((longlong)&(this->Owner->ClearColor).field0_0x0 + 8);
    FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
    local_78 = local_f8;
    local_70 = (undefined4)local_f0;
    local_6c = local_f0._4_4_;
    local_68 = local_e8;
    local_60 = local_e0;
    local_58 = local_d8;
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar12 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)&local_188[0]._s_0)
    ;
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar12.Reference) {
      pFVar6 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar12.Reference)->_padding_;
      (TVar12.Reference)->_padding_ = 0;
      if (pFVar6 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar6);
      }
    }
    pFVar6 = (FRHIResource *)*plVar1;
    pFVar14 = (FRHIResource *)this->_padding_;
    if (pFVar14 != pFVar6) {
      this->_padding_ = (longlong)pFVar6;
      if (pFVar6 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar6);
      }
      if (pFVar14 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar14);
      }
    }
    if (local_188[0] != (TIntPoint<int>_u_0)0x0) {
      FRHIResource::Release((FRHIResource *)local_188[0]);
    }
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    if (EVar17 >> 0x11 != 0) {
      local_158._8_8_ = 0;
      local_158._0_8_ = &DAT_100000003;
      FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
                ((FInitializer *)&local_158,(FRHITexture *)this->_padding_);
      TVar13 = FRHICommandListBase::CreateUnorderedAccessView
                         (param_1,(FRHITexture *)&local_188[0]._s_0,(FInitializer *)this->_padding_)
      ;
      TRefCountPtr<FRHIUnorderedAccessView>::operator=
                (&this->UnorderedAccessViewRHI,
                 (TRefCountPtr<FRHIUnorderedAccessView> *)TVar13.Reference);
      if (local_188[0] != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::Release((FRHIResource *)local_188[0]);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,*(FRHITextureReference **)(this->Owner->_padding_ + 0x20),
               (FRHITexture *)this->_padding_);
    FDeferredUpdateResource::AddToDeferredUpdateList
              ((FDeferredUpdateResource *)&this->_padding_,true);
  }
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  local_178.Filter.Value = UTextureLODSettings::GetSamplerFilter(this_02,(UTexture *)this->Owner);
  local_178.AddressU.Value = '\x01';
  local_178.AddressV.Value = '\x01';
  local_178.AddressW.Value = '\x01';
  local_178.MipBias = 0.0;
  local_178.MinMipLevel = 0.0;
  local_178.MaxMipLevel = 3.4028235e+38;
  local_178.MaxAnisotropy = 0;
  local_178.BorderColor = 0;
  local_178.SamplerComparisonFunction.Value = '\0';
  pFVar14 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_178);
  pFVar6 = (FRHIResource *)this->_padding_;
  if (pFVar6 != pFVar14) {
    this->_padding_ = (longlong)pFVar14;
    if (pFVar14 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar14);
    }
    if (pFVar6 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar6);
    }
  }
  if (bVar8) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar7 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar15 = *(FWriteBuffer **)(lVar7 + 0x20);
    if ((int)pFVar15 - *(int *)&pFVar15->Cursor < 1) {
      pFVar15 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar15->Cursor = '\n';
    pFVar15->Cursor = pFVar15->Cursor + 1;
    pFVar15->Committed = pFVar15->Cursor;
  }
  return;
}

// ReadFloat16Pixels @ 1488d43c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTextureRenderTargetVolumeResource::ReadFloat16Pixels
          (FTextureRenderTargetVolumeResource *this,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_1,FReadSurfaceDataFlags *param_2,
          TIntRect<int> *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar16;
  code **ppcVar17;
  ulonglong uVar18;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((((*(int *)&param_3->field0_0x0 == 0) && (*(int *)((longlong)&param_3->field0_0x0 + 4) == 0))
      && (*(int *)((longlong)&param_3->field0_0x0 + 8) == 0)) &&
     (*(int *)((longlong)&param_3->field0_0x0 + 0xc) == 0)) {
    lVar13 = (**(code **)(this->_padding_ + 0x28))(this,local_c8);
    uVar2 = *(undefined4 *)(lVar13 + 4);
    puVar14 = (undefined4 *)(**(code **)(this->_padding_ + 0x28))(this,local_c0);
    uVar3 = *puVar14;
    (param_3->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    TVar5._s_0.Y = uVar2;
    TVar5._s_0.X = uVar3;
    (param_3->field0_0x0)._s_0.Max.field0_0x0 = TVar5;
  }
  puVar15 = (undefined8 *)(**(code **)(this->_padding_ + 0x10))(this);
  lVar13 = (**(code **)(*(longlong *)*puVar15 + 0x20))();
  cVar1 = *(char *)(lVar13 + 0x33);
  cVar10 = (**(code **)(*(longlong *)this->_padding_ + 0x3d0))();
  if (cVar10 != cVar1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Owner->GetFormat() == GetRenderTargetTexture()->GetFormat()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                        ,0x17b,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
  }
  puVar15 = (undefined8 *)(**(code **)(this->_padding_ + 0x10))(this);
  lVar13 = (**(code **)(*(longlong *)*puVar15 + 0x20))();
  if ((*(char *)(lVar13 + 0x33) == '\n') || ((*(char *)(lVar13 + 0x33) - 0xdU & 0xf7) == 0)) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    TVar5 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
    TVar6 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x48,8);
    pcVar8 = *(code **)param_2;
    pcVar9 = *(code **)&param_2->bLinearToGamma;
    pcVar7 = *(code **)&param_2->bOutputStencil;
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    uVar4 = param_2->GPUIndex;
    local_90[1] = (code *)&this[-1]._padding_;
    *(TIntPoint<int>_u_0 *)(local_90 + 2) = TVar5;
    *(TIntPoint<int>_u_0 *)(local_90 + 3) = TVar6;
    local_90[5] = pcVar8;
    local_90[6] = pcVar9;
    local_90[4] = (code *)param_1;
    local_90[7] = pcVar7;
    *(uint *)(local_90 + 8) = uVar4;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FTextureRenderTargetVolumeResource::ReadFloat16Pixels_::__l2::TSTR_ReadSurfaceCommand392>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::TSTR_ReadSurfaceCommand392>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar16);
      uVar18 = (ulonglong)local_58;
      if (2 < uVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar17 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar17 = local_60;
          }
          (**(code **)(*ppcVar17 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar17 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar17 = local_90;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    FlushRenderingCommands();
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  return bVar11;
}

// ReadLinearColorPixels @ 1488d4680

bool __thiscall
FTextureRenderTargetVolumeResource::ReadLinearColorPixels
          (FTextureRenderTargetVolumeResource *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,FReadSurfaceDataFlags *param_2,
          TIntRect<int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                     ,0x196,
                     L"Not implemented : volume textures only support float16 ATM. Use ReadFloat16Pixels and convert to the desired format"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// ReadPixels @ 1488d4840

bool __thiscall
FTextureRenderTargetVolumeResource::ReadPixels
          (FTextureRenderTargetVolumeResource *this,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,int param_2,TIntRect<int> *param_3)

{
  FFloat16Color *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FLinearColor *this_00;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res8;
  undefined1 local_res18 [16];
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> local_c8;
  TIntRect<int>_u_0 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined2 uStack_96;
  int iStack_94;
  FReadSurfaceDataFlags local_88 [3];
  
  local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_98 = 0;
  local_88[0]._16_8_ = (ulonglong)CONCAT42(param_2,uStack_96) << 0x10;
  local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_88[0].GPUIndex = 0;
  local_a8 = 6;
  uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
  uStack_9c = 0x467a0000;
  local_88[0].MaxDepthRange = 16000.0;
  local_88[0]._8_4_ = uStack_a0;
  local_88[0].CubeFace = CubeFace_MAX;
  local_88[0].CompressionMode = RCM_UNorm;
  iStack_94 = param_2;
  bVar6 = FRenderTarget::ReadFloat16Pixels
                    ((FRenderTarget *)&this->_padding_,&local_c8,local_88,
                     (TIntRect<int> *)&local_b8._s_0);
  fVar4 = __real_437f0000;
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  if (bVar6) {
    iVar5 = local_c8.ArrayNum;
    uVar8 = (ulonglong)local_c8.ArrayNum;
    pFVar1 = (FFloat16Color *)(local_c8.AllocatorInstance.Data + uVar8 * 8);
    FVar9.Data = local_c8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar5) {
        `TCheckedPointerIterator<FFloat16Color,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FFloat16Color *)FVar9.Data == pFVar1) break;
      this_00 = FLinearColor::FLinearColor
                          ((FLinearColor *)&local_b8._s_0,(FFloat16Color *)FVar9.Data);
      if (*(char *)((longlong)&this->_padding_ + 6) == '\0') {
        fVar10 = (this_00->field0_0x0)._s_0.B;
        fVar11 = (this_00->field0_0x0)._s_0.G;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar12 = (this_00->field0_0x0)._s_0.R;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar13 = (this_00->field0_0x0)._s_0.A;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (fVar2 <= fVar10) {
          fVar10 = fVar2;
        }
        if (fVar2 <= fVar11) {
          fVar11 = fVar2;
        }
        if (fVar2 <= fVar12) {
          fVar12 = fVar2;
        }
        if (fVar2 <= fVar13) {
          fVar13 = fVar2;
        }
        local_res8 = CONCAT13((char)(int)(fVar13 * fVar4 + fVar3),
                              CONCAT12((char)(int)(fVar12 * fVar4 + fVar3),
                                       CONCAT11((char)(int)(fVar11 * fVar4 + fVar3),
                                                (char)(int)(fVar10 * fVar4 + fVar3))));
      }
      else {
        FLinearColor::ToFColorSRGB(this_00);
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      FVar9.Data = FVar9.Data + 8;
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res8;
      uVar8 = local_c8._8_8_ & 0xffffffff;
    }
  }
  if ((FFloat16Color *)local_c8.AllocatorInstance.Data != (FFloat16Color *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return true;
}

// ReadPixels @ 1488d4a80

bool __thiscall
FTextureRenderTargetVolumeResource::ReadPixels
          (FTextureRenderTargetVolumeResource *this,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TIntRect<int> *param_3)

{
  bool bVar1;
  TIntRect<int>_u_0 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined2 uStack_36;
  int iStack_34;
  FReadSurfaceDataFlags local_28;
  
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Min.field0_0x0;
  local_48 = 6;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  uStack_3c = 0x467a0000;
  local_38 = 0;
  local_28.MaxDepthRange = 16000.0;
  local_28._8_4_ = uStack_40;
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->field0_0x0)._s_0.Max.field0_0x0;
  local_28._16_8_ = (ulonglong)CONCAT42(param_2,uStack_36) << 0x10;
  local_28.CubeFace = CubeFace_MAX;
  local_28.CompressionMode = RCM_UNorm;
  local_28.GPUIndex = 0;
  iStack_34 = param_2;
  bVar1 = FRenderTarget::ReadFloat16Pixels
                    ((FRenderTarget *)&this->_padding_,param_1,&local_28,
                     (TIntRect<int> *)&local_58._s_0);
  return bVar1;
}

// ReadPixels @ 1488d4af0

bool __thiscall
FTextureRenderTargetVolumeResource::ReadPixels
          (FTextureRenderTargetVolumeResource *this,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,FReadSurfaceDataFlags *param_2,
          TIntRect<int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                     ,0x170,
                     L"Not implemented : volume textures only support float16 ATM. Use ReadFloat16Pixels and convert to the desired format"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// ReleaseRHI @ 1488d5fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTextureRenderTargetVolumeResource::ReleaseRHI(FTextureRenderTargetVolumeResource *this)

{
  FRHITextureReference *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  FTexture::ReleaseRHI((FTexture *)this);
  pFVar1 = *(FRHITextureReference **)(this->Owner->_padding_ + 0x20);
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1,(FRHITexture *)0x0)
  ;
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  return;
}

// UpdateDeferredResource @ 1488eb580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FTextureRenderTargetVolumeResource::UpdateDeferredResource
          (FTextureRenderTargetVolumeResource *this,FRHICommandListImmediate *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  FRHICommandListImmediate *this_00;
  TEventRef<unsigned_int> TVar6;
  UPackage *pUVar7;
  FWriteBuffer *pFVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  FRHITransitionInfo local_98;
  FRHICommandListImmediate *local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_68 = param_1;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar6 = (TEventRef<unsigned_int>)local_a8;
    local_a8[0] = 0;
  }
  else {
    local_a8[0] = 0;
    TVar6 = FStringTrace::GetNameRef((FName *)&local_58);
  }
  uVar1 = *(undefined8 *)TVar6;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_a8[0] = 0;
    TVar6 = (TEventRef<unsigned_int>)local_a8;
  }
  else {
    local_a8[0] = 0;
    TVar6 = FStringTrace::GetNameRef((FName *)&local_58);
  }
  uVar2 = *(undefined8 *)TVar6;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_a8[0] = 0;
    TVar6 = (TEventRef<unsigned_int>)local_a8;
  }
  else {
    pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->_padding_);
    local_a8[0] = pUVar7->_padding_;
    TVar6 = FStringTrace::GetNameRef((FName *)&local_58);
  }
  uVar3 = *(undefined8 *)TVar6;
  bVar5 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_58);
    bVar5 = true;
    *(int *)&(local_58.DataPtr)->_padding_ = (int)uVar1;
    *(int *)((longlong)&(local_58.DataPtr)->_padding_ + 4) = (int)uVar2;
    *(int *)&(local_58.DataPtr)->field1_0x8 = (int)uVar3;
    *(undefined8 *)(local_58._8_8_ + 0x28) = *(undefined8 *)(local_58._8_8_ + 0x20);
  }
  this_00 = local_68;
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 8) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (param_2) {
    local_98.field1_0x8 = (FRHITransitionInfo_u_8)this[-1]._padding_;
    local_58.ArrayNum = 1;
    local_58.DataPtr = &local_98;
    local_98._padding_._0_4_ = 0xffffffff;
    local_98._padding_._4_2_ = 0xffff;
    local_98.Type = Texture;
    local_98.AccessBefore = None;
    local_98.AccessAfter = RTV;
    local_98.Flags = None;
    local_98.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)local_68,&local_58,None);
    ClearRenderTarget((FRHICommandList *)this_00,(FRHITexture *)this[-1]._padding_,0,0);
    local_98.field1_0x8 = (FRHITransitionInfo_u_8)this[-1]._padding_;
    local_58.ArrayNum = 1;
    local_58.DataPtr = &local_98;
    local_98._padding_._0_4_ = 0xffffffff;
    local_98._padding_._4_2_ = 0xffff;
    local_98.Type = Texture;
    local_98.AccessBefore = RTV;
    local_98.AccessAfter = SRVMask;
    local_98.Flags = None;
    local_98.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_00,&local_58,None);
  }
  if (bVar5) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar8 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 1) {
      pFVar8 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar8->Cursor = '\n';
    pFVar8->Cursor = pFVar8->Cursor + 1;
    pFVar8->Committed = pFVar8->Cursor;
  }
  return;
}

