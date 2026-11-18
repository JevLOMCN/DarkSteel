// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FTexture2DArrayResource @ 1484437b0

/* WARNING: Enum "Type": Some values do not have unique names */

FTexture2DArrayResource * __thiscall
FTexture2DArrayResource::FTexture2DArrayResource
          (FTexture2DArrayResource *this,UTexture2DArray *param_1,
          FStreamableRenderResourceState *param_2)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FTexturePlatformData *pFVar6;
  FTexture2DArrayResource *pFVar7;
  char cVar8;
  int iVar9;
  FString local_18;
  
  pFVar6 = UTexture2DArray::GetPlatformData(param_1);
  FStreamableTextureResource::FStreamableTextureResource
            ((FStreamableTextureResource *)this,(UTexture *)param_1,pFVar6,param_2,false);
  this->_padding_ = (longlong)&___7FTexture2DArrayResource__6B_;
  cVar4 = '\0';
  this->ProxiedResource = (FTexture2DArrayResource *)0x0;
  cVar8 = '\0';
  (this->AllMipsData).AllocatorInstance.SecondaryData = (ForElementType<FUniqueBuffer>)0x0;
  (this->AllMipsData).ArrayNum = 0;
  (this->AllMipsData).ArrayMax = 0xf;
  uVar1 = (param_1->AddressX).Value;
  if (uVar1 != '\0') {
    cVar8 = (uVar1 != '\x01') + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 1) = cVar8;
  cVar8 = '\0';
  uVar1 = (param_1->AddressY).Value;
  if (uVar1 != '\0') {
    cVar8 = (uVar1 != '\x01') + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 2) = cVar8;
  uVar1 = (param_1->AddressZ).Value;
  if (uVar1 != '\0') {
    cVar4 = (uVar1 != '\x01') + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 3) = cVar4;
  bVar5 = UTexture2DArray::GetMipData
                    (param_1,((uint)*(byte *)((longlong)&this->_padding_ + 4) +
                             (uint)*(byte *)((longlong)&this->_padding_ + 3)) -
                             (uint)*(byte *)((longlong)&this->_padding_ + 6),&this->AllMipsData);
  if (bVar5) {
    iVar2 = *(int *)(this->_padding_ + 0x14);
    iVar9 = 1;
    if (iVar2 != 0) {
      iVar9 = iVar2;
    }
    if (((this->AllMipsData).ArrayNum !=
         ((uint)*(byte *)((longlong)&this->_padding_ + 6) - iVar9) + 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllMipsData.Num() == State.NumRequestedLODs - MipCountLostDueToPacking",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DArrayResource.cpp"
                           ,0x2a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTexture2DArrayResource *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return this;
    }
  }
  return this;
}

// FTexture2DArrayResource @ 148443940

FTexture2DArrayResource * __thiscall
FTexture2DArrayResource::FTexture2DArrayResource
          (FTexture2DArrayResource *this,UTexture2DArray *param_1,FTexture2DArrayResource *param_2)

{
  FStreamableRenderResourceState_u_0 local_res8;
  
  local_res8.Data = 0;
  FStreamableTextureResource::FStreamableTextureResource
            ((FStreamableTextureResource *)this,(UTexture *)param_1,
             (FTexturePlatformData *)param_2->_padding_,
             (FStreamableRenderResourceState *)&local_res8._s_0,false);
  this->ProxiedResource = param_2;
  this->_padding_ = (longlong)&___7FTexture2DArrayResource__6B_;
  (this->AllMipsData).AllocatorInstance.SecondaryData = (ForElementType<FUniqueBuffer>)0x0;
  (this->AllMipsData).ArrayNum = 0;
  (this->AllMipsData).ArrayMax = 0xf;
  return this;
}

// CreatePartiallyResidentTexture @ 14845e120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DArrayResource::CreatePartiallyResidentTexture
          (FTexture2DArrayResource *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DArrayResource.cpp"
                     ,0x5d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// CreateTexture @ 1484602a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DArrayResource::CreateTexture(FTexture2DArrayResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  FRHIResource *this_00;
  longlong lVar7;
  code *pcVar8;
  void *pvVar9;
  uint uVar10;
  bool bVar11;
  TRefCountPtr<FRHITexture> TVar12;
  ForElementType<FUniqueBuffer> FVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_2c8 [32];
  FLLMScope local_288;
  FLLMScope local_284;
  FLLMScope local_280;
  FLLMScope local_27c;
  uint local_278;
  uint uStack_274;
  undefined1 local_270 [48];
  int local_240;
  longlong local_238;
  undefined4 local_230;
  uint local_22c;
  uint local_228;
  undefined4 local_220;
  undefined2 local_21c;
  longlong local_218;
  undefined4 local_210;
  uint local_20c;
  FNameEntryId local_208;
  FNameEntryId local_200;
  undefined2 local_1fc;
  FString local_1f8;
  void *local_1e8 [2];
  uint local_1d8;
  FRHITextureDesc local_1c8;
  wchar_t *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  FName local_e0;
  longlong local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  FName local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar3 = *(byte *)((longlong)&this->_padding_ + 3);
  bVar4 = *(byte *)((longlong)&this->_padding_ + 6);
  bVar5 = *(byte *)((longlong)&this->_padding_ + 4);
  uVar14 = (uint)bVar3 - (uint)bVar4;
  lVar6 = *(longlong *)(this->_padding_ + 0x18);
  uVar15 = 0;
  if ((int)uVar14 < (int)(uint)bVar3) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *(longlong *)(lVar6 + (((ulonglong)bVar3 - (ulonglong)bVar4) + (ulonglong)bVar5) * 8);
  ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),(FString *)(local_270 + 0x28));
  local_178 = L"";
  if (local_240 != 0) {
    local_178 = (wchar_t *)local_270._40_8_;
  }
  uVar15 = 0;
  local_1c8.Format = *(EPixelFormat *)((longlong)&this->_padding_ + 4);
  local_1c8.ArraySize = *(ushort *)(lVar6 + 0x4c);
  local_1c8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_278 = CONCAT22(0,*(ushort *)(lVar6 + 0x48));
  uStack_274 = (uint)*(ushort *)(lVar6 + 0x4a);
  local_1c8.Extent.field0_0x0._s_0.Y._0_2_ = *(ushort *)(lVar6 + 0x4a);
  local_1c8.Extent.field0_0x0._s_0.X = local_278;
  local_1c8.Extent.field0_0x0._s_0.Y._2_2_ = 0;
  local_1c8.Flags = None;
  local_1c8.ClearValue._0_8_ = 1;
  local_1c8.ClearValue.Value._4_8_ = 0;
  local_1c8.ClearValue.Value.Color[3] = 0.0;
  local_1c8.ExtData = 0;
  local_1c8.Depth = 1;
  local_1c8.NumMips = '\x01';
  local_1c8.NumSamples = '\x01';
  local_1c8.Dimension = Texture2DArray;
  local_1c8.UAVFormat = PF_Unknown;
  local_1c8.FastVRAMPercentage = 0xff;
  local_1c8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1c8.AliasableFormats.ArrayNum = 0;
  local_1c8.AliasableFormats.ArrayMax = 1;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_148,&local_1c8);
  local_f8 = local_178;
  local_f0 = (undefined4)local_170;
  local_ec = local_170._4_4_;
  local_e8 = local_168;
  local_e0.ComparisonIndex.Value = (undefined4)local_160;
  local_e0.Number = local_160._4_4_;
  local_d8 = local_158;
  if (local_1c8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_148.NumMips = *(uchar *)((longlong)&this->_padding_ + 6);
  local_148.Flags = this->_padding_;
  local_148.ExtData = *(uint *)(this->_padding_ + 0x10);
  local_e0 = NAME_FTexture2DArrayResource;
  local_d8 = this->_padding_;
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
  TVar12 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_270);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar12.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar12.Reference)->_padding_;
    (TVar12.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)local_270._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_270._0_8_);
  }
  if (0 < (this->AllMipsData).ArrayNum) {
    do {
      uVar14 = 0;
      if ((int)this->_padding_ != 0) {
        do {
          if (((param_1->PersistentState).bImmediate == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImmediate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                  ,0x17,L"This operation expects the immediate command list."),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = this->_padding_;
          FLLMScope::FLLMScope(&local_284,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_270 + 0x10),Textures,true);
          local_230 = 0;
          local_21c = 0;
          local_220 = 1;
          local_238 = lVar7;
          local_22c = uVar14;
          local_228 = uVar15;
          FLLMScope::FLLMScope(&local_288,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_270 + 8),Textures,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_1e8);
          FMemScope::~FMemScope((FMemScope *)(local_270 + 8));
          FLLMScope::~FLLMScope(&local_288);
          uVar10 = local_1d8;
          pvVar9 = local_1e8[0];
          FMemScope::~FMemScope((FMemScope *)(local_270 + 0x10));
          FLLMScope::~FLLMScope(&local_284);
          if (pvVar9 == (void *)0x0) {
            if (2 < (byte)LogTexture._0_1_) {
              ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),&local_1f8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            GetData(this,(uint)*(ushort *)(lVar6 + 0x48),(uint)*(ushort *)(lVar6 + 0x4a),uVar14,
                    uVar15,pvVar9,uVar10);
          }
          if (((param_1->PersistentState).bImmediate == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImmediate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                  ,0x17,L"This operation expects the immediate command list."),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = this->_padding_;
          FLLMScope::FLLMScope(&local_27c,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_270 + 0x20),Textures,true);
          local_210 = 0;
          local_1fc = 0;
          local_200.Value = 3;
          local_218 = lVar7;
          local_20c = uVar14;
          local_208.Value = uVar15;
          FLLMScope::FLLMScope(&local_280,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_270 + 0x18),Textures,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1);
          FMemScope::~FMemScope((FMemScope *)(local_270 + 0x18));
          FLLMScope::~FLLMScope(&local_280);
          FMemScope::~FMemScope((FMemScope *)(local_270 + 0x20));
          FLLMScope::~FLLMScope(&local_27c);
          uVar14 = uVar14 + 1;
        } while (uVar14 < (uint)this->_padding_);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (this->AllMipsData).ArrayNum);
  }
  FVar13 = (this->AllMipsData).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<FUniqueBuffer>)0x0) {
    FVar13 = (ForElementType<FUniqueBuffer>)&this->AllMipsData;
  }
  DestructItems<FUniqueBuffer,int>((FUniqueBuffer *)FVar13,(this->AllMipsData).ArrayNum);
  piVar2 = &(this->AllMipsData).ArrayMax;
  (this->AllMipsData).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FUniqueBuffer>_>
              (8,8,0,&(this->AllMipsData).AllocatorInstance,0,piVar2);
  }
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if ((wchar_t *)local_270._40_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_270._40_8_);
  }
  return;
}

// GetData @ 14846b290

void __thiscall
FTexture2DArrayResource::GetData
          (FTexture2DArrayResource *this,int param_1,int param_2,uint param_3,uint param_4,
          void *param_5,uint param_6)

{
  EPixelFormat EVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong _Size;
  ulonglong uVar9;
  ForElementType<FUniqueBuffer> FVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar4 = this->_padding_;
  uVar13 = 0;
  uVar6 = 0;
  if ((int)param_4 < (this->AllMipsData).ArrayNum) {
    uVar6 = ~param_4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar10 = (this->AllMipsData).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FUniqueBuffer>)0x0) {
    FVar10 = (ForElementType<FUniqueBuffer>)&this->AllMipsData;
  }
  plVar2 = *(longlong **)((longlong)FVar10 + (longlong)(int)param_4 * 8);
  uVar14 = uVar13;
  if (plVar2 != (longlong *)0x0) {
    if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    uVar14 = plVar2[2];
  }
  plVar2 = *(longlong **)((longlong)FVar10 + (longlong)(int)param_4 * 8);
  if (plVar2 != (longlong *)0x0) {
    if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    uVar13 = plVar2[1];
  }
  _Size = uVar14 / (uint)lVar4;
  uVar9 = param_3 * _Size;
  if (uVar14 < param_3 * _Size) {
    uVar9 = uVar14;
  }
  if (uVar14 - uVar9 < _Size) {
    _Size = uVar14 - uVar9;
  }
  if (param_6 == 0) {
    memcpy(param_5,(void *)(uVar9 + uVar13),_Size);
  }
  else {
    EVar1 = *(EPixelFormat *)((longlong)&this->_padding_ + 4);
    uVar11 = param_2 >> ((byte)param_4 & 0x1f);
    iVar12 = param_1 >> ((byte)param_4 & 0x1f);
    uVar6 = 1;
    if (1 < (int)uVar11) {
      uVar6 = uVar11;
    }
    iVar7 = 1;
    if (1 < iVar12) {
      iVar7 = iVar12;
    }
    uVar11 = (iVar7 + -1 + GPixelFormats[EVar1].BlockSizeX) / GPixelFormats[EVar1].BlockSizeX;
    if (((EVar1 == PF_PVRTC2) || (uVar8 = uVar11, EVar1 == PF_PVRTC4)) && (uVar8 = 2, 2 < uVar11)) {
      uVar8 = uVar11;
    }
    CopyTextureData2D((void *)(uVar9 + uVar13),param_5,uVar6,EVar1,
                      uVar8 * GPixelFormats[EVar1].BlockBytes,param_6);
  }
  return;
}

// GetPlatformMipsSize @ 14846cea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
FTexture2DArrayResource::GetPlatformMipsSize(FTexture2DArrayResource *this,uint param_1)

{
  bool bVar1;
  ulong64 *puVar2;
  ulong64 uVar3;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  TIntPoint<int>_u_0 local_198 [2];
  FRHITextureDesc local_188;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FRHITextureDesc local_108;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88 [16];
  FRHITextureDesc local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((this->_padding_ == 0) || (param_1 == 0)) {
    uVar3 = 0;
  }
  else {
    local_1a8 = *(byte *)((longlong)&this->_padding_ + 3) - param_1;
    CalcMipMapExtent((uint)local_198,(uint)this->_padding_,
                     (EPixelFormat)*(undefined4 *)((longlong)&this->_padding_ + 4),
                     (uint)*(byte *)((longlong)&this->_padding_ + 4));
    uVar3 = 0;
    local_188.Flags = None;
    local_188.ClearValue._0_8_ = 1;
    local_188.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_188.Depth = 1;
    local_138 = &u_Temp;
    local_188.Extent.field0_0x0 = local_198[0];
    local_188.Format = *(EPixelFormat *)((longlong)&this->_padding_ + 4);
    local_188.ArraySize = (ushort)this->_padding_;
    local_188.Dimension = Texture2DArray;
    local_188.AliasableFormats.ArrayMax = 1;
    local_188.ClearValue.Value._4_8_ = 0;
    local_188.ClearValue.Value.Color[3] = 0.0;
    local_188.ExtData = 0;
    local_188.NumMips = '\x01';
    local_188.NumSamples = '\x01';
    local_188.UAVFormat = PF_Unknown;
    local_188.FastVRAMPercentage = 0xff;
    local_188.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_188.AliasableFormats.ArrayNum = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_108,&local_188);
    local_b8 = local_138;
    local_b0 = (undefined4)local_130;
    local_ac = local_130._4_4_;
    local_a8 = local_128;
    local_a0 = local_120;
    local_98 = local_118;
    if (local_188.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_188.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_108.Flags = this->_padding_;
    local_108.NumMips = (uchar)param_1;
    local_108.ExtData = *(uint *)(this->_padding_ + 0x10);
    FRHITextureDesc::FRHITextureDesc(&local_78,&local_108);
    if (local_108.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_108.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    bVar1 = FRHITextureDesc::Validate(&local_78,L"",false);
    if (bVar1) {
      puVar2 = (ulong64 *)
               (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_88,&local_78,0);
      uVar3 = *puVar2;
    }
    if (local_78.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_78.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return uVar3;
}

// GetTexture2DArrayResource @ 148470cc0

FTexture2DArrayResource * __thiscall
FTexture2DArrayResource::GetTexture2DArrayResource(FTexture2DArrayResource *this)

{
  return this;
}

// GetTexture2DArrayResource @ 148470cd0

FTexture2DArrayResource * __thiscall
FTexture2DArrayResource::GetTexture2DArrayResource(FTexture2DArrayResource *this)

{
  return this;
}

// InitRHI @ 148476430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DArrayResource::InitRHI(FTexture2DArrayResource *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  FRHIResource *pFVar2;
  
  if (this->ProxiedResource != (FTexture2DArrayResource *)0x0) {
    pFVar1 = (FRHIResource *)this->ProxiedResource->_padding_;
    pFVar2 = (FRHIResource *)this->_padding_;
    if (pFVar2 != pFVar1) {
      this->_padding_ = (longlong)pFVar1;
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar1);
      }
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,(FRHITextureReference *)this->_padding_,(FRHITexture *)this->_padding_);
    pFVar1 = (FRHIResource *)this->_padding_;
    pFVar2 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar1 != pFVar2) {
      this->_padding_ = (longlong)pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    pFVar1 = (FRHIResource *)this->_padding_;
    pFVar2 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar1 != pFVar2) {
      this->_padding_ = (longlong)pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    return;
  }
  FStreamableTextureResource::InitRHI((FStreamableTextureResource *)this,param_1);
  return;
}

// IsProxy @ 1484786b0

bool __thiscall FTexture2DArrayResource::IsProxy(FTexture2DArrayResource *this)

{
  return this->ProxiedResource != (FTexture2DArrayResource *)0x0;
}

