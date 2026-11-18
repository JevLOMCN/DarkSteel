// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FVolumeTextureMipAllocator_Reallocate @ 148809390

FVolumeTextureMipAllocator_Reallocate * __thiscall
FVolumeTextureMipAllocator_Reallocate::FVolumeTextureMipAllocator_Reallocate
          (FVolumeTextureMipAllocator_Reallocate *this,UTexture *param_1)

{
  int iVar1;
  
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  this->_padding_ = param_1->_padding_;
  *(uint *)&this->_padding_ =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  iVar1 = (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
          (uint)*(byte *)((longlong)&param_1->_padding_ + 6);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVolumeTextureMipAllocator_Reallocate__6B_;
  (this->StreamedInMipData)._padding_ = (longlong)&___7FVolumeTextureBulkData__6B_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  (this->StreamedInMipData).FirstMipIdx = iVar1;
  (this->StreamedInMipData).MipData[0] = (void *)0x0;
  (this->StreamedInMipData).MipData[1] = (void *)0x0;
  (this->StreamedInMipData).MipData[2] = (void *)0x0;
  (this->StreamedInMipData).MipData[3] = (void *)0x0;
  (this->StreamedInMipData).MipData[4] = (void *)0x0;
  (this->StreamedInMipData).MipData[5] = (void *)0x0;
  (this->StreamedInMipData).MipData[6] = (void *)0x0;
  (this->StreamedInMipData).MipData[7] = (void *)0x0;
  (this->StreamedInMipData).MipData[8] = (void *)0x0;
  (this->StreamedInMipData).MipData[9] = (void *)0x0;
  (this->StreamedInMipData).MipData[10] = (void *)0x0;
  (this->StreamedInMipData).MipData[0xb] = (void *)0x0;
  (this->StreamedInMipData).MipData[0xc] = (void *)0x0;
  (this->StreamedInMipData).MipData[0xd] = (void *)0x0;
  (this->StreamedInMipData).MipData[0xe] = (void *)0x0;
  (this->StreamedInMipData).MipSize[0] = 0;
  (this->StreamedInMipData).MipSize[1] = 0;
  (this->StreamedInMipData).MipSize[2] = 0;
  (this->StreamedInMipData).MipSize[3] = 0;
  (this->StreamedInMipData).MipSize[4] = 0;
  (this->StreamedInMipData).MipSize[5] = 0;
  (this->StreamedInMipData).MipSize[6] = 0;
  (this->StreamedInMipData).MipSize[7] = 0;
  (this->StreamedInMipData).MipSize[8] = 0;
  (this->StreamedInMipData).MipSize[9] = 0;
  (this->StreamedInMipData).MipSize[10] = 0;
  (this->StreamedInMipData).MipSize[0xb] = 0;
  (this->StreamedInMipData).MipSize[0xc] = 0;
  (this->StreamedInMipData).MipSize[0xd] = 0;
  (this->StreamedInMipData).MipSize[0xe] = 0;
  return this;
}

// ~FVolumeTextureMipAllocator_Reallocate @ 14880cf70

void __thiscall
FVolumeTextureMipAllocator_Reallocate::~FVolumeTextureMipAllocator_Reallocate
          (FVolumeTextureMipAllocator_Reallocate *this)

{
  this->_padding_ = (longlong)&___7FVolumeTextureMipAllocator_Reallocate__6B_;
  (this->StreamedInMipData)._padding_ = (longlong)&___7FVolumeTextureBulkData__6B_;
  FVolumeTextureBulkData::Discard(&this->StreamedInMipData);
  (this->StreamedInMipData)._padding_ = (longlong)&___7FResourceBulkDataInterface__6B_;
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  return;
}

// AllocateMips @ 14881bc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVolumeTextureMipAllocator_Reallocate::AllocateMips
          (FVolumeTextureMipAllocator_Reallocate *this,FTextureUpdateContext *param_1,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_2
          ,FTextureUpdateSyncOptions *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FTextureMipInfo> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  long64 lVar8;
  long64 *plVar9;
  void *pvVar10;
  ForElementType<EPixelFormat> _Src;
  ForElementType<EPixelFormat> _Dst;
  ForElementType<FTextureMipInfo> FVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  size_t _Size;
  void **ppvVar16;
  undefined1 auStackY_228 [32];
  FRHITextureDesc local_1a8;
  FRHITextureDesc local_158;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FRHITextureDesc local_d8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
            (param_2,(int)this->_padding_);
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  uVar13 = (ulonglong)iVar2;
  if (iVar2 < (int)this->_padding_) {
    ppvVar16 = (this->StreamedInMipData).MipData + uVar13;
    lVar14 = uVar13 * 0x30;
    do {
      uVar12 = (uint)uVar13;
      uVar15 = 0;
      if ((int)uVar12 < (param_1->MipsView).ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      lVar3 = *(longlong *)
               ((longlong)ppvVar16 +
               (longlong)(param_1->MipsView).DataPtr + (-0x30 - (longlong)this));
      uVar15 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      local_158.ClearValue._0_8_ = 1;
      local_158.ArraySize = 1;
      local_158.NumMips = '\x01';
      local_158.NumSamples = '\x01';
      FVar11 = (ForElementType<FTextureMipInfo>)param_2;
      if (FVar4 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar11 = FVar4;
      }
      local_158.Dimension = Texture3D;
      local_158.UAVFormat = PF_Unknown;
      local_158.FastVRAMPercentage = 0xff;
      local_158.AliasableFormats.ArrayMax = 1;
      local_158.Format = param_1->Resource->PixelFormat;
      *(EPixelFormat *)(lVar14 + 0x10 + (longlong)FVar11) = local_158.Format;
      uVar15 = CONCAT22(0,*(ushort *)(lVar3 + 0x48));
      *(uint *)(lVar14 + 0x14 + (longlong)FVar11) = uVar15;
      uVar1 = *(ushort *)(lVar3 + 0x4a);
      *(uint *)(lVar14 + 0x18 + (longlong)FVar11) = (uint)uVar1;
      local_158.Depth = *(ushort *)(lVar3 + 0x4c);
      *(uint *)(lVar14 + 0x1c + (longlong)FVar11) = (uint)local_158.Depth;
      local_158.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_108 = &u_Temp;
      local_158.Extent.field0_0x0._s_0.Y._0_2_ = uVar1;
      local_158.Extent.field0_0x0._s_0.X = uVar15;
      local_158.Extent.field0_0x0._s_0.Y._2_2_ = 0;
      local_158.Flags = None;
      local_158.ClearValue.Value._4_8_ = 0;
      local_158.ClearValue.Value.Color[3] = 0.0;
      local_158.ExtData = 0;
      local_158.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_158.AliasableFormats.ArrayNum = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      FRHITextureDesc::FRHITextureDesc(&local_d8,&local_158);
      local_88 = local_108;
      local_80 = (undefined4)local_100;
      local_7c = local_100._4_4_;
      local_78 = local_f8;
      local_70 = local_f0;
      local_68 = local_e8;
      if (local_158.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_158.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      iVar2 = local_d8.AliasableFormats.ArrayNum;
      local_1a8.Flags = param_1->Resource->CreationFlags;
      local_1a8.ExtData = (param_1->Resource->PlatformData->OptData).ExtData;
      local_1a8.Dimension = local_d8.Dimension;
      local_1a8.Format = local_d8.Format;
      local_1a8.UAVFormat = local_d8.UAVFormat;
      local_1a8.Extent.field0_0x0 = local_d8.Extent.field0_0x0;
      local_1a8.Depth = local_d8.Depth;
      local_1a8.ArraySize = local_d8.ArraySize;
      local_1a8.NumMips = local_d8.NumMips;
      local_1a8.NumSamples = local_d8.NumSamples;
      local_1a8.ClearValue.Value.Color[3] = local_d8.ClearValue.Value.Color[3];
      local_1a8.FastVRAMPercentage = local_d8.FastVRAMPercentage;
      local_1a8.GPUMask.GPUMask = local_d8.GPUMask.GPUMask;
      local_1a8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      _Size = (size_t)local_d8.AliasableFormats.ArrayNum;
      _Src = (ForElementType<EPixelFormat>)&local_d8.AliasableFormats;
      if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        _Src = local_d8.AliasableFormats.AllocatorInstance.SecondaryData;
      }
      local_1a8.AliasableFormats.ArrayMax = 1;
      local_1a8.ClearValue._0_8_ = local_d8.ClearValue._0_8_;
      local_1a8.ClearValue.Value._4_8_ = local_d8.ClearValue.Value._4_8_;
      local_1a8.AliasableFormats.ArrayNum = local_d8.AliasableFormats.ArrayNum;
      local_d8.Flags = local_1a8.Flags;
      local_d8.ExtData = local_1a8.ExtData;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                (1,1,local_d8.AliasableFormats.ArrayNum,1,
                 &local_1a8.AliasableFormats.AllocatorInstance,local_d8.AliasableFormats.ArrayNum,
                 &local_1a8.AliasableFormats.ArrayMax);
      _Dst = (ForElementType<EPixelFormat>)&local_1a8.AliasableFormats;
      if (local_1a8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        _Dst = local_1a8.AliasableFormats.AllocatorInstance.SecondaryData;
      }
      if (iVar2 != 0) {
        memcpy((void *)_Dst,(void *)_Src,_Size);
      }
      if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      bVar6 = FRHITextureDesc::Validate(&local_1a8,L"",false);
      if (bVar6) {
        plVar9 = (long64 *)
                 (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_58,&local_1a8,0);
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      *(long64 *)(lVar14 + 8 + (longlong)FVar11) = lVar8;
      ppvVar16[0xf] = (void *)lVar8;
      if (GRHIGlobals.UseTexture3DBulkData == false) {
        pvVar10 = FMemory::Malloc(*(ulong64 *)(lVar14 + 8 + (longlong)FVar11),0x10);
        *(void **)(lVar14 + (longlong)FVar11) = pvVar10;
        *ppvVar16 = pvVar10;
      }
      if (local_1a8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_1a8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      ppvVar16 = ppvVar16 + 1;
      lVar14 = lVar14 + 0x30;
    } while ((int)(uVar12 + 1) < (int)this->_padding_);
  }
  if (GRHIGlobals.UseTexture3DBulkData != false) {
    FVolumeTextureBulkData::MergeMips
              (&this->StreamedInMipData,(uint)*(byte *)((longlong)&this->_padding_ + 3));
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    uVar13 = (ulonglong)iVar2;
    pvVar10 = (this->StreamedInMipData).MipData[(this->StreamedInMipData).FirstMipIdx];
    if (iVar2 < (int)this->_padding_) {
      lVar14 = uVar13 * 0x30;
      do {
        uVar12 = (uint)uVar13;
        uVar15 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<FTextureMipInfo>)param_2;
        if (FVar4 != (ForElementType<FTextureMipInfo>)0x0) {
          FVar11 = FVar4;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        *(void **)(lVar14 + (longlong)FVar11) = pvVar10;
        pvVar10 = (void *)((longlong)pvVar10 + *(longlong *)(lVar14 + 8 + (longlong)FVar11));
        lVar14 = lVar14 + 0x30;
      } while ((int)(uVar12 + 1) < (int)this->_padding_);
    }
  }
  if ((1 < (uint)this->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                         ,0x68,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return true;
}

// Cancel @ 148827a10

void __thiscall
FVolumeTextureMipAllocator_Reallocate::Cancel
          (FVolumeTextureMipAllocator_Reallocate *this,FTextureUpdateSyncOptions *param_1)

{
  FVolumeTextureBulkData::Discard(&this->StreamedInMipData);
  return;
}

// GetCancelThread @ 14883db40

ETickThread __thiscall
FVolumeTextureMipAllocator_Reallocate::GetCancelThread(FVolumeTextureMipAllocator_Reallocate *this)

{
  longlong lVar1;
  ETickThread EVar2;
  
  lVar1 = (**(code **)((this->StreamedInMipData)._padding_ + 8))(&this->StreamedInMipData);
  EVar2 = None;
  if (lVar1 != 0) {
    EVar2 = Async;
  }
  return EVar2;
}

// UploadMips @ 148863720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FVolumeTextureMipAllocator_Reallocate::UploadMips
          (FVolumeTextureMipAllocator_Reallocate *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  longlong *plVar1;
  EPixelFormat EVar2;
  int iVar3;
  int iVar4;
  FTexture2DMipMap *pFVar5;
  FRHIResource *this_00;
  uchar *puVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FTexture2DMipMap **ppFVar12;
  FRHITextureCreateDesc *pFVar13;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar14;
  int iVar15;
  FResourceBulkDataInterface *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStackY_238 [32];
  char local_1f8 [8];
  undefined1 local_1f0 [24];
  longlong local_1d8;
  longlong local_1d0;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  FName local_1b8;
  FResourceBulkDataInterface local_1a8;
  wchar_t *pwStack_1a0;
  undefined8 local_198;
  FResourceBulkDataInterface *local_190;
  FName local_188;
  FResourceBulkDataInterface local_178;
  wchar_t *pwStack_170;
  undefined8 local_168;
  FResourceBulkDataInterface *local_160;
  byte local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  EVar2 = param_1->Resource->PixelFormat;
  ppFVar12 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                       (&param_1->MipsView,*(int *)((longlong)&this->_padding_ + 4));
  pFVar5 = *ppFVar12;
  pFVar13 = FRHITextureCreateDesc::Create3D
                      (&local_c8,L"FinalizeMips",(uint)pFVar5->SizeX,(uint)pFVar5->SizeY,
                       (uint)pFVar5->SizeZ,EVar2);
  *(undefined1 *)&pFVar13->_padding_ = *(undefined1 *)((longlong)&this->_padding_ + 6);
  pFVar13->_padding_ = param_1->Resource->CreationFlags;
  *(uint *)&pFVar13->_padding_ = (param_1->Resource->PlatformData->OptData).ExtData;
  FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)pFVar13);
  local_f8 = pFVar13->DebugName;
  local_f0 = pFVar13->InitialState;
  local_ec = pFVar13->InitAction;
  local_e8 = pFVar13->BulkData;
  local_e0 = pFVar13->ClassName;
  local_d8 = pFVar13->OwnerName;
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if (GRHIGlobals.UseTexture3DBulkData != false) {
    local_e8 = (FResourceBulkDataInterface *)&this->StreamedInMipData;
    local_ec = BulkData;
  }
  if (local_f0 == None) {
    local_f0 = RHIGetDefaultResourceState
                         (local_148.Flags,local_e8 != (FResourceBulkDataInterface *)0x0);
  }
  bVar9 = IsInRenderingThread();
  if (!bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)local_1f0);
  plVar1 = &this->_padding_;
  if (plVar1 != (longlong *)local_1f0) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_1f0._0_8_;
    local_1f0._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_1488638c1;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_1f0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1f0._0_8_);
  }
LAB_1488638c1:
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_1f8[0] = '\0';
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  local_190 = FMemory::Malloc(0x20,8);
  *local_190 = (FResourceBulkDataInterface)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FVolumeTextureMipAllocator_Reallocate::UploadMips'::`7'::<lambda_1>,1,1>
                ::_vftable_;
  local_190[1] = (FResourceBulkDataInterface)param_1;
  local_190[2] = (FResourceBulkDataInterface)this;
  local_190[3] = (FResourceBulkDataInterface)local_1f8;
  if (local_190 + 1 != (FResourceBulkDataInterface *)0x0) {
    local_1b8 = (FName)UE::Core::Private::Function::
                       TFunctionRefCaller<`FVolumeTextureMipAllocator_Reallocate::UploadMips'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FVolumeTextureMipAllocator_Reallocate::UploadMips_::__l7::TSTR_FCopySharedMipsForTexture3D102>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_1b8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_188 = local_1b8;
    local_160 = local_190;
    local_190 = (FResourceBulkDataInterface *)0x0;
    local_178 = local_1a8;
    pwStack_170 = pwStack_1a0;
    local_168 = local_198;
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    local_158 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`FVolumeTextureMipAllocator_Reallocate::UploadMips'::__l7::TSTR_FCopySharedMipsForTexture3D102>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)&local_188,pFVar14);
    uVar18 = (ulonglong)local_158;
    if (2 < uVar18) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_188 != (FName)0x0) {
        pFVar16 = &local_178;
        if (local_160 != (FResourceBulkDataInterface *)0x0) {
          pFVar16 = local_160;
        }
        (**(code **)((longlong)*pFVar16 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18])(&local_188);
    }
  }
  if (local_1b8 != (FName)0x0) {
    pFVar16 = &local_1a8;
    if (local_190 != (FResourceBulkDataInterface *)0x0) {
      pFVar16 = local_190;
    }
    (**(code **)((longlong)*pFVar16 + 0x10))();
  }
  if (local_1f8[0] == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCopySharedMipsDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\VolumeTextureStreaming.cpp"
                       ,0x71,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  if (GRHIGlobals.UseTexture3DBulkData == false) {
    local_1f0._8_4_ = GPixelFormats[EVar2].BlockBytes;
    iVar3 = GPixelFormats[EVar2].BlockSizeX;
    iVar4 = GPixelFormats[EVar2].BlockSizeY;
    if (GPixelFormats[EVar2].BlockSizeZ != 1) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1104225560541790086>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\VolumeTextureStreaming.cpp"
                         ,0x7a,"GPixelFormats[PixelFormat].BlockSizeZ == 1");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    iVar15 = *(int *)((longlong)&this->_padding_ + 4);
    uVar18 = (ulonglong)iVar15;
    if (iVar15 < (int)this->_padding_) {
      lVar19 = uVar18 * 8;
      do {
        uVar17 = (uint)uVar18;
        uVar11 = 0;
        if ((int)uVar17 < (param_1->MipsView).ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
        }
        puVar6 = *(uchar **)((longlong)(this->StreamedInMipData).MipData + lVar19);
        lVar7 = *(longlong *)(lVar19 + (longlong)(param_1->MipsView).DataPtr);
        if (puVar6 != (uchar *)0x0) {
          local_1c0 = (uint)*(ushort *)(lVar7 + 0x4c);
          local_1c8 = (uint)*(ushort *)(lVar7 + 0x48);
          iVar15 = (int)(iVar3 + -1 + local_1c8) / iVar3;
          local_1c4 = (uint)*(ushort *)(lVar7 + 0x4a);
          local_1f0._16_8_ = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          FRHICommandListBase::UpdateTexture3D
                    ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                     (FRHITexture *)*plVar1,uVar17 - *(int *)((longlong)&this->_padding_ + 4),
                     (FUpdateTextureRegion3D *)(local_1f0 + 0x10),iVar15 * local_1f0._8_4_,
                     ((int)(iVar4 + -1 + local_1c4) / iVar4) * iVar15 * local_1f0._8_4_,puVar6);
        }
        uVar18 = (ulonglong)(uVar17 + 1);
        lVar19 = lVar19 + 8;
      } while ((int)(uVar17 + 1) < (int)this->_padding_);
    }
  }
  FVolumeTextureBulkData::Discard(&this->StreamedInMipData);
  if (2 < (uint)this->_padding_) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                       ,0x68,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return true;
}

