// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FTexture2DArrayMipAllocator_Reallocate @ 148806620

FTexture2DArrayMipAllocator_Reallocate * __thiscall
FTexture2DArrayMipAllocator_Reallocate::FTexture2DArrayMipAllocator_Reallocate
          (FTexture2DArrayMipAllocator_Reallocate *this,UTexture *param_1)

{
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  this->_padding_ = param_1->_padding_;
  *(uint *)&this->_padding_ =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  *(uint *)((longlong)&this->_padding_ + 4) =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 6);
  this->_padding_ = (longlong)&___7FTexture2DArrayMipAllocator_Reallocate__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->StreamedMipData).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
        )0x0;
  (this->StreamedMipData).ArrayNum = 0;
  (this->StreamedMipData).ArrayMax = 0xf;
  (this->StreamedSliceSize).AllocatorInstance.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  (this->StreamedSliceSize).ArrayNum = 0;
  (this->StreamedSliceSize).ArrayMax = 0xf;
  return this;
}

// ~FTexture2DArrayMipAllocator_Reallocate @ 14880c930

void __thiscall
FTexture2DArrayMipAllocator_Reallocate::~FTexture2DArrayMipAllocator_Reallocate
          (FTexture2DArrayMipAllocator_Reallocate *this)

{
  ForElementType<unsigned___int64> FVar1;
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  FVar2;
  
  this->_padding_ = (longlong)&___7FTexture2DArrayMipAllocator_Reallocate__6B_;
  FVar1 = (this->StreamedSliceSize).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                )0x0) {
    FVar2 = (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
             )&this->StreamedMipData;
  }
  DestructItems<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>,int>
            ((TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter> *)
             FVar2,(this->StreamedMipData).ArrayNum);
  FVar2 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  return;
}

// AllocateMips @ 14881aae0

bool __thiscall
FTexture2DArrayMipAllocator_Reallocate::AllocateMips
          (FTexture2DArrayMipAllocator_Reallocate *this,FTextureUpdateContext *param_1,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_2
          ,FTextureUpdateSyncOptions *param_3)

{
  TArray<unsigned___int64,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  EPixelFormat EVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  FTexture2DMipMap *pFVar7;
  ForElementType<FTextureMipInfo> FVar8;
  ulonglong uVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  ulong64 uVar15;
  void *pvVar16;
  uint uVar17;
  ForElementType<unsigned___int64> FVar18;
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  FVar19;
  ForElementType<unsigned___int64> FVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  FVar24;
  longlong lVar25;
  ulonglong uVar26;
  ForElementType<FTextureMipInfo> FVar27;
  longlong *plVar28;
  
  TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
            (param_2,(int)this->_padding_);
  iVar6 = (int)this->_padding_;
  iVar13 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>_>
                     (8,8,iVar6,&(this->StreamedMipData).AllocatorInstance,
                      &(this->StreamedMipData).ArrayNum,&(this->StreamedMipData).ArrayMax);
  FVar24 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
  if (FVar24 == (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                 )0x0) {
    FVar24 = (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
              )&this->StreamedMipData;
  }
  DefaultConstructItems<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>,int>
            ((void *)((longlong)FVar24 + (longlong)iVar13 * 8),iVar6);
  iVar6 = (int)this->_padding_;
  pTVar1 = &this->StreamedSliceSize;
  iVar13 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                     (8,8,iVar6,&pTVar1->AllocatorInstance,&(this->StreamedSliceSize).ArrayNum,
                      &(this->StreamedSliceSize).ArrayMax);
  FVar18 = (this->StreamedSliceSize).AllocatorInstance.SecondaryData;
  if (FVar18 == (ForElementType<unsigned___int64>)0x0) {
    FVar18 = (ForElementType<unsigned___int64>)pTVar1;
  }
  memset((void *)((longlong)FVar18 + (longlong)iVar13 * 8),0,(longlong)iVar6 << 3);
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  uVar22 = (ulonglong)iVar6;
  if (iVar6 < (int)this->_padding_) {
    lVar25 = uVar22 * 0x30;
    uVar26 = uVar22;
    do {
      uVar21 = (uint)uVar22;
      uVar23 = ~uVar21 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar21 < (param_1->MipsView).ArrayNum) {
        uVar14 = uVar23;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar7 = (param_1->MipsView).DataPtr[uVar26];
      uVar14 = 0;
      if ((int)uVar21 < param_2->ArrayNum) {
        uVar14 = uVar23;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      FVar8 = (param_2->AllocatorInstance).SecondaryData;
      FVar27 = (ForElementType<FTextureMipInfo>)param_2;
      if (FVar8 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar27 = FVar8;
      }
      plVar28 = (longlong *)((longlong)FVar27 + lVar25);
      EVar2 = param_1->Resource->PixelFormat;
      *(EPixelFormat *)(plVar28 + 2) = EVar2;
      uVar3 = pFVar7->SizeX;
      *(uint *)((longlong)plVar28 + 0x14) = (uint)uVar3;
      uVar4 = pFVar7->SizeY;
      *(uint *)(plVar28 + 3) = (uint)uVar4;
      uVar5 = pFVar7->SizeZ;
      *(uint *)(plVar28 + 4) = (uint)uVar5;
      uVar15 = CalcTextureMipMapSize((uint)uVar3,(uint)uVar4,EVar2,0);
      uVar15 = uVar15 * uVar5;
      plVar28[1] = uVar15;
      pvVar16 = FMemory::Malloc(uVar15,0x10);
      *plVar28 = (longlong)pvVar16;
      if (((ulonglong)plVar28[1] % (ulonglong)*(uint *)(plVar28 + 4) != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("MipInfo.DataSize % MipInfo.ArraySize == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DArrayStreaming.cpp"
                              ,0x32,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      uVar14 = 0;
      if ((int)uVar21 < (this->StreamedMipData).ArrayNum) {
        uVar14 = uVar23;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      FVar24 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                )&this->StreamedMipData;
      if (FVar24 != (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                     )0x0) {
        FVar19 = FVar24;
      }
      pvVar16 = *(void **)((longlong)FVar19 + uVar26 * 8);
      if (pvVar16 != (void *)*plVar28) {
        *(void **)((longlong)FVar19 + uVar26 * 8) = (void *)*plVar28;
        FMemory::Free(pvVar16);
      }
      uVar14 = *(uint *)(plVar28 + 4);
      uVar9 = plVar28[1];
      uVar17 = 0;
      if ((int)uVar21 < (this->StreamedSliceSize).ArrayNum) {
        uVar17 = uVar23;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      FVar18 = (this->StreamedSliceSize).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<unsigned___int64>)pTVar1;
      if (FVar18 != (ForElementType<unsigned___int64>)0x0) {
        FVar20 = FVar18;
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      lVar25 = lVar25 + 0x30;
      *(ulonglong *)((longlong)FVar20 + uVar26 * 8) = uVar9 / uVar14;
      uVar26 = uVar26 + 1;
    } while ((int)(uVar21 + 1) < (int)this->_padding_);
  }
  if ((1 < (uint)this->_padding_) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(uint32)NextTickState <= (uint32)InState",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                          ,0x68,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return true;
}

// Cancel @ 148824ca0

void __thiscall
FTexture2DArrayMipAllocator_Reallocate::Cancel
          (FTexture2DArrayMipAllocator_Reallocate *this,FTextureUpdateSyncOptions *param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  FVar2;
  
  FVar2 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                )0x0) {
    FVar2 = (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
             )&this->StreamedMipData;
  }
  DestructItems<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>,int>
            ((TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter> *)
             FVar2,(this->StreamedMipData).ArrayNum);
  piVar1 = &(this->StreamedMipData).ArrayMax;
  (this->StreamedMipData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>_>
              (8,8,0,&(this->StreamedMipData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->StreamedSliceSize).ArrayMax;
  (this->StreamedSliceSize).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,0,&(this->StreamedSliceSize).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetCancelThread @ 14883d9a0

ETickThread __thiscall
FTexture2DArrayMipAllocator_Reallocate::GetCancelThread
          (FTexture2DArrayMipAllocator_Reallocate *this)

{
  ETickThread EVar1;
  
  EVar1 = None;
  if ((this->StreamedMipData).ArrayNum != 0) {
    EVar1 = Async;
  }
  return EVar1;
}

// UploadMips @ 1488629d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FTexture2DArrayMipAllocator_Reallocate::UploadMips
          (FTexture2DArrayMipAllocator_Reallocate *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  int *piVar1;
  FTexture2DMipMap *pFVar2;
  FRHIResource *this_00;
  size_t _Size;
  FResourceBulkDataInterface *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *_Dst;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FTexture2DMipMap **ppFVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  FVar12;
  ForElementType<unsigned___int64> FVar13;
  ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
  FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  void *_Src;
  ForElementType<unsigned___int64> FVar19;
  longlong lVar20;
  undefined1 auStackY_348 [32];
  undefined1 local_318 [4];
  uint local_314;
  uint local_310;
  FLLMScope local_30c;
  FLLMScope local_308;
  FLLMScope local_304;
  FLLMScope local_300 [2];
  undefined1 local_2f8 [96];
  FResourceBulkDataInterface *local_298;
  FNameEntryId local_290;
  uint local_28c;
  FNameEntryId local_288;
  undefined4 local_280;
  undefined2 local_27c;
  longlong local_278;
  undefined4 local_270;
  uint local_26c;
  uint local_268;
  undefined4 local_260;
  undefined2 local_25c;
  void *local_258 [4];
  FRHITextureDesc local_238;
  wchar_t *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  code *local_1b8 [2];
  code *local_1a8 [3];
  code **local_190;
  undefined1 local_188 [40];
  code **local_160;
  byte local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_314 = param_1->Resource->SizeZ;
  local_2f8._16_8_ = param_1;
  local_2f8._80_8_ = this;
  ppFVar9 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                      (&param_1->MipsView,*(int *)((longlong)&this->_padding_ + 4));
  local_238.Flags = None;
  local_238.ClearValue._0_8_ = 1;
  pFVar2 = *ppFVar9;
  local_238.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_238.ClearValue.Value._4_8_ = 0;
  local_1e8 = L"FinalizeMips";
  local_2f8._24_4_ = CONCAT22(0,pFVar2->SizeX);
  local_2f8._28_4_ = ZEXT24(pFVar2->SizeY);
  local_238.Extent.field0_0x0._s_0.Y._0_2_ = pFVar2->SizeY;
  local_238.Extent.field0_0x0._s_0.X = local_2f8._24_4_;
  local_238.Extent.field0_0x0._s_0.Y._2_2_ = 0;
  local_238.ClearValue.Value.Color[3] = 0.0;
  local_238.ExtData = 0;
  local_238.Depth = 1;
  local_238.Format = param_1->Resource->PixelFormat;
  local_238.ArraySize = pFVar2->SizeZ;
  local_238.NumMips = '\x01';
  local_238.NumSamples = '\x01';
  local_238.Dimension = Texture2DArray;
  local_238.UAVFormat = PF_Unknown;
  local_238.FastVRAMPercentage = 0xff;
  local_238.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_238.AliasableFormats.ArrayNum = 0;
  local_238.AliasableFormats.ArrayMax = 1;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_148,&local_238);
  local_f8 = local_1e8;
  local_f0 = (undefined4)local_1e0;
  local_ec = local_1e0._4_4_;
  local_e8 = local_1d8;
  local_e0 = local_1d0;
  local_d8 = local_1c8;
  if (local_238.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_238.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_148.NumMips = *(uchar *)((longlong)&this->_padding_ + 6);
  local_148.Flags = param_1->Resource->CreationFlags;
  local_148.ExtData = (param_1->Resource->PlatformData->OptData).ExtData;
  FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
  local_78 = local_f8;
  local_70 = local_f0;
  local_6c = local_ec;
  local_68 = local_e8;
  local_60 = local_e0;
  local_58 = local_d8;
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)local_2f8);
  local_2f8._40_8_ = &this->_padding_;
  if ((undefined1 *)local_2f8._40_8_ != local_2f8) {
    this_00 = *(FRHIResource **)local_2f8._40_8_;
    *(undefined8 *)local_2f8._40_8_ = local_2f8._0_8_;
    local_2f8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_148862c4c;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_2f8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2f8._0_8_);
  }
LAB_148862c4c:
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_318[0] = (code)0x0;
  local_1b8[0] = (code *)0x0;
  local_190 = FMemory::Malloc(0x20,8);
  *local_190 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FTexture2DArrayMipAllocator_Reallocate::UploadMips'::`4'::<lambda_1>,1,1>
                        ::_vftable_;
  local_190[1] = (code *)param_1;
  local_190[2] = (code *)this;
  local_190[3] = (code *)local_318;
  if (local_190 + 1 != (code **)0x0) {
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FTexture2DArrayMipAllocator_Reallocate::UploadMips'::__l4::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FTexture2DArrayMipAllocator_Reallocate::UploadMips_::__l4::TSTR_FCopySharedMipsForTexture2DArray80>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1b8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_188._0_8_ = local_1b8[0];
    local_160 = local_190;
    local_190 = (code **)0x0;
    local_188._16_8_ = local_1a8[0];
    local_188._24_8_ = local_1a8[1];
    local_188._32_8_ = local_1a8[2];
    local_1b8[0] = (code *)0x0;
    local_158 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FTexture2DArrayMipAllocator_Reallocate::UploadMips'::__l4::TSTR_FCopySharedMipsForTexture2DArray80>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_188,pFVar10);
    uVar18 = (ulonglong)local_158;
    if ((2 < uVar18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_188._0_8_ != (code *)0x0) {
        ppcVar11 = (code **)(local_188 + 0x10);
        if (local_160 != (code **)0x0) {
          ppcVar11 = local_160;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18])(local_188);
    }
  }
  if (local_1b8[0] != (code *)0x0) {
    ppcVar11 = local_1b8 + 2;
    if (local_190 != (code **)0x0) {
      ppcVar11 = local_190;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  if ((local_318[0] == (code)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCopySharedMipsDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DArrayStreaming.cpp"
                         ,0x5b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_310 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar18 = (ulonglong)(int)local_310;
  if ((int)local_310 < (int)this->_padding_) {
    FVar19 = (ForElementType<unsigned___int64>)&this->StreamedSliceSize;
    lVar20 = uVar18 * 8;
    local_2f8._88_8_ = FVar19;
    do {
      uVar17 = (uint)uVar18;
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar17 < (param_1->MipsView).ArrayNum) {
        uVar8 = uVar15;
      }
      local_2f8._32_8_ = lVar20;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar8 = 0;
      if ((int)uVar17 < (this->StreamedMipData).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FVar14 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                )&this->StreamedMipData;
      if (FVar14 != (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                     )0x0) {
        FVar12 = FVar14;
      }
      uVar8 = 0;
      if ((int)uVar17 < *(int *)((longlong)FVar19 + 0x80)) {
        uVar8 = uVar15;
      }
      _Src = *(void **)(lVar20 + (longlong)FVar12);
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar5 = local_2f8._40_8_;
      uVar8 = local_314;
      FVar13 = FVar19;
      if (*(ForElementType<unsigned___int64> *)((longlong)FVar19 + 0x78) !=
          (ForElementType<unsigned___int64>)0x0) {
        FVar13 = *(ForElementType<unsigned___int64> *)((longlong)FVar19 + 0x78);
      }
      if ((_Src != (void *)0x0) &&
         (_Size = *(size_t *)(lVar20 + (longlong)FVar13),
         param_1 = (FTextureUpdateContext *)local_2f8._16_8_, _Size != 0)) {
        local_2f8._8_4_ = 0;
        uVar15 = uVar17 - *(int *)((longlong)&this->_padding_ + 4);
        if (local_314 == 0) {
          FVar19 = (ForElementType<unsigned___int64>)&this->StreamedSliceSize;
        }
        else {
          uVar16 = 0;
          do {
            pFVar3 = *(FResourceBulkDataInterface **)uVar5;
            FLLMScope::FLLMScope(&local_308,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_2f8 + 0x38),Textures,true);
            local_290.Value = 0;
            local_27c = 0;
            local_280 = 1;
            local_298 = pFVar3;
            local_28c = uVar16;
            local_288.Value = uVar15;
            FLLMScope::FLLMScope(&local_30c,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_2f8 + 0x30),Textures,true);
            (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_258,0x154be5ed0);
            FMemScope::~FMemScope((FMemScope *)(local_2f8 + 0x30));
            FLLMScope::~FLLMScope(&local_30c);
            _Dst = local_258[0];
            FMemScope::~FMemScope((FMemScope *)(local_2f8 + 0x38));
            FLLMScope::~FLLMScope(&local_308);
            memcpy(_Dst,_Src,_Size);
            lVar20 = *(longlong *)uVar5;
            FLLMScope::FLLMScope(local_300,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_2f8 + 0x48),Textures,true);
            local_270 = 0;
            local_25c = 0;
            local_260 = 3;
            local_278 = lVar20;
            local_26c = uVar16;
            local_268 = uVar15;
            FLLMScope::FLLMScope(&local_304,Textures,false,None,Default,true);
            FMemScope::FMemScope((FMemScope *)(local_2f8 + 0x40),Textures,true);
            (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0);
            FMemScope::~FMemScope((FMemScope *)(local_2f8 + 0x40));
            FLLMScope::~FLLMScope(&local_304);
            FMemScope::~FMemScope((FMemScope *)(local_2f8 + 0x48));
            FLLMScope::~FLLMScope(local_300);
            uVar16 = uVar16 + 1;
            _Src = (void *)((longlong)_Src + _Size);
            this = (FTexture2DArrayMipAllocator_Reallocate *)local_2f8._80_8_;
            param_1 = (FTextureUpdateContext *)local_2f8._16_8_;
            FVar19 = (ForElementType<unsigned___int64>)local_2f8._88_8_;
            lVar20 = local_2f8._32_8_;
            uVar17 = local_310;
          } while (uVar16 < uVar8);
        }
      }
      local_310 = uVar17 + 1;
      uVar18 = (ulonglong)local_310;
      lVar20 = lVar20 + 8;
      local_2f8._32_8_ = lVar20;
    } while ((int)local_310 < (int)this->_padding_);
  }
  FVar14 = (this->StreamedMipData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
                 )0x0) {
    FVar14 = (ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>
              )&this->StreamedMipData;
  }
  DestructItems<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>,int>
            ((TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter> *)
             FVar14,(this->StreamedMipData).ArrayNum);
  piVar1 = &(this->StreamedMipData).ArrayMax;
  (this->StreamedMipData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<unsigned_char,FTexture2DArrayMipAllocator_Reallocate::FMallocDeleter>_>_>
              (8,8,0,&(this->StreamedMipData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->StreamedSliceSize).ArrayMax;
  (this->StreamedSliceSize).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,0,&(this->StreamedSliceSize).AllocatorInstance,0,piVar1);
  }
  if ((2 < (uint)this->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                         ,0x68,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return true;
}

