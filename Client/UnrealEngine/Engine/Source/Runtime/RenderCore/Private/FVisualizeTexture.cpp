// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 24

// ReleaseRHI @ 145ec0ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145ec0f8c) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeTexture::ReleaseRHI(FVisualizeTexture *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auStack_108 [40];
  undefined8 local_e0 [2];
  undefined8 local_d0 [2];
  undefined1 local_c0 [8];
  FCaptured local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  (this->Config).RGBMul = 1.0;
  (this->Config).AMul = 0.0;
  pFVar1 = &(this->Requested).ViewName;
  (this->Config).SingleChannel = -1;
  (this->Config).SingleChannelMul = 0.0;
  (this->Config).Flags = None;
  (this->Config).InputUVMapping = PictureInPicture;
  (this->Config).ShaderOp = Frac;
  (this->Config).MipIndex = 0;
  (this->Config).ArrayIndex = 0;
  (this->Requested).ViewUniqueId = 0;
  if (pFVar1 != (FString *)local_e0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Requested).ViewName.Data.ArrayNum = 0;
    (this->Requested).ViewName.Data.ArrayMax = 0;
  }
  pFVar1 = &(this->Requested).Name;
  if (pFVar1 != (FString *)local_d0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Requested).Name.Data.ArrayNum = 0;
    (this->Requested).Name.Data.ArrayMax = 0;
  }
  if (((TOptional<unsigned_int> *)local_c0 != &(this->Requested).Version) &&
     ((this->Requested).Version.bIsSet != false)) {
    (this->Requested).Version.bIsSet = false;
  }
  local_b8.Desc.Extent.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_b8.Desc.ClearValue._0_8_ = 1;
  local_b8.Desc.AliasableFormats.ArrayMax = 1;
  local_b8.Desc.DebugName = L"VisualizeTexture";
  local_b8.PooledRenderTarget.Reference = (IPooledRenderTarget *)0x0;
  local_b8.Texture = (FRDGTexture *)0x0;
  local_b8.Desc.ClearValue.Value._4_8_ = 0;
  local_b8.Desc.ClearValue.Value.Color[3] = 0.0;
  local_b8.Desc.Flags = None;
  local_b8.Desc.Format = PF_Unknown;
  local_b8.Desc.UAVFormat = PF_Unknown;
  local_b8.Desc.Depth = 0;
  local_b8.Desc.ArraySize = 1;
  local_b8.Desc.NumMips = '\0';
  local_b8.Desc.NumSamples = '\x01';
  local_b8.Desc.FastVRAMPercentage = 0xff;
  local_b8.Desc.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
  ;
  local_b8.Desc.AliasableFormats.ArrayNum = 0;
  local_b8.Desc.field13_0x58.PackedBits = '\0';
  local_b8.InputValueMapping = Color;
  local_b8.ViewUniqueId = 0;
  local_b8.ViewRects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ViewRects.ArrayNum = 0;
  local_b8.ViewRects.ArrayMax = 0;
  FCaptured::operator=(&this->Captured,&local_b8);
  if (local_b8.ViewRects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ViewRects.AllocatorInstance.Data);
  }
  if (local_b8.Desc.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_b8.Desc.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (local_b8.PooledRenderTarget.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_b8.PooledRenderTarget.Reference)->_padding_ + 0x38))();
  }
  return;
}

// ~FVisualizeTexture @ 145ec4950

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeTexture::~FVisualizeTexture(FVisualizeTexture *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<EPixelFormat> FVar3;
  IPooledRenderTarget *pIVar4;
  
  *(undefined4 *)&(this->VersionCountMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VersionCountMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VersionCountMap);
  *(undefined4 *)&(this->ViewDescriptionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewDescriptionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewDescriptionMap);
  pFVar2 = (this->Captured).ViewRects.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->Captured).Desc.AliasableFormats.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pIVar4 = (this->Captured).PooledRenderTarget.Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pFVar2 = (this->Requested).Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Requested).ViewName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FamilyViewRects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (((this->DisplayResourcesParam).bIsSet != false) &&
     (pvVar1 = *(void **)&(this->DisplayResourcesParam).TypedValue, pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 145ec4e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FVisualizeTexture::CreateContentCapturePass'::__l20::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  FRDGResource *this_00;
  code *pcVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_58;
  TIntRect<int>_u_0 local_48;
  void *local_38 [3];
  uint local_20;
  
  local_38[0] = *(void **)((longlong)this + 0x10);
  local_38[1] = *(void **)((longlong)this + 0x18);
  local_48._8_4_ = *(int *)((longlong)this + 8);
  this_00 = *(FRDGResource **)this;
  uVar1 = *(uint *)((longlong)this + 0x28);
  uVar6 = *(undefined8 *)((longlong)this + 0x20);
  local_48._12_4_ = *(undefined4 *)((longlong)this + 0xc);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FRDGResource::ValidateRHIAccess(this_00);
  local_38[2] = (void *)uVar6;
  local_20 = uVar1;
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,(FRHITexture *)this_00->ResourceRHI,(TIntRect<int> *)&local_48._s_0,&local_58,
             (FReadSurfaceDataFlags *)local_38);
  if (local_58.ArrayNum == 0) {
    if (1 < (byte)LogRendererCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    }
  }
  else {
    pIVar3 = IFileManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar3 + 0x60);
    pFVar4 = FPaths::ScreenShotDir((FString *)local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(pIVar3,pwVar8);
    if (local_38[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0]);
    }
    pTVar5 = &FPaths::ScreenShotDir((FString *)local_38)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_48._s_0,pTVar5,
               0x12 - (uint)(pTVar5->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_48._s_0,L"VisualizeTexture",0x10);
    if (local_38[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0]);
    }
    iVar7 = local_58.ArrayNum / *(int *)((longlong)this + 0xc);
    pIVar3 = IFileManager::Get();
    uVar6 = L"";
    if (local_48._8_4_ != 0) {
      uVar6 = local_48._s_0.Min.field0_0x0;
    }
    FFileHelper::CreateBitmap
              ((wchar_t *)uVar6,iVar7,*(int *)((longlong)this + 0xc),
               (FColor *)local_58.AllocatorInstance.Data,(TIntRect<int> *)0x0,pIVar3,(FString *)0x0,
               false,All);
    if (3 < (byte)LogRendererCore._0_1_) {
      FPaths::ScreenShotDir((FString *)local_38);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
      if (local_38[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    if ((TIntPoint<int>_u_0)local_48._s_0.Min.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_48._s_0.Min.field0_0x0);
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// AddVisualizeTextureAlphaPass @ 145ec5600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGTexture * __cdecl
FVisualizeTexture::AddVisualizeTextureAlphaPass
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGTexture *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  FConfig local_38;
  
  if (param_3 == (FRDGTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                       ,0x47d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_38.AMul = 0.0;
  local_38.SingleChannelMul = 1.0;
  local_38.Flags = None;
  local_38.InputUVMapping = PictureInPicture;
  local_38.ShaderOp = Frac;
  local_38.MipIndex = 0;
  local_38.ArrayIndex = 0;
  local_38.SingleChannel = 3;
  local_38.RGBMul = 0.0;
  pFVar3 = AddVisualizeTexturePass(param_1,param_2,param_3,&local_38,Color,0);
  return pFVar3;
}

// AddVisualizeTexturePass @ 145ec56b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGTexture * __cdecl
FVisualizeTexture::AddVisualizeTexturePass
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGTexture *param_3,FConfig *param_4,
          EInputValueMapping param_5,uint param_6)

{
  undefined1 *puVar1;
  float fVar2;
  char cVar3;
  ushort uVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  TIntPoint<int>_u_0_s_0 TVar6;
  TIntPoint<int>_u_0_s_0 TVar7;
  code *pcVar8;
  TRefCountPtr<FRHISamplerState> TVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  uint uVar12;
  FRDGTexture *pFVar13;
  FParameters *pFVar14;
  FRDGTextureSRV *pFVar15;
  FShaderType *pFVar16;
  FName this;
  FRDGEventName *pFVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  FGlobalShaderMap *pFVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auStackY_2a8 [32];
  TIntPoint<int>_u_0_s_0 local_248;
  FString local_228;
  int local_218;
  uint local_214;
  FGlobalShaderMap *local_210;
  FRDGTextureSRVDesc local_208;
  FRDGTextureSRVDesc local_1f0;
  FRDGTextureSRVDesc local_1d8;
  int local_1c0;
  int iStack_1bc;
  FRenderTargetBinding local_1b8;
  TIntRect<int>_u_0 local_1a0;
  FConfig *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  undefined1 local_148 [8];
  FString local_140;
  TShaderRefBase<FVisualizeTexturePS,FShaderMapPointerTable> local_128;
  FRDGEventName local_118;
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar23 = 0;
  local_214 = param_6;
  local_210 = param_2;
  local_190 = param_4;
  if ((param_3 == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputTexture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                          ,0x2d6,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FRDGTexture *)(*pcVar8)();
    return pFVar13;
  }
  if (((*(uint *)&param_3->Desc >> 0x13 & 1) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!EnumHasAnyFlags(InputTexture->Desc.Flags, ETextureCreateFlags::CPUReadback)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                          ,0x2d7,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FRDGTexture *)(*pcVar8)();
    return pFVar13;
  }
  fVar27 = __real_3f800000;
  TVar5.X = *(int *)&(param_3->Desc).field_0x24;
  TVar5.Y = *(int *)&(param_3->Desc).field_0x28;
  TVar6 = (param_3->VisualizeTextureExtent).field0_0x0._s_0;
  iVar20 = TVar5.Y;
  iVar18 = TVar5.X;
  local_248 = TVar5;
  if ((0 < TVar6.X) && (iVar22 = TVar6.Y, 0 < iVar22)) {
    TVar7 = TVar5;
    if (TVar6.X < TVar5.X) {
      TVar7 = TVar6;
    }
    if (iVar22 < TVar5.Y) {
      iVar20 = iVar22;
    }
    local_248.Y = iVar20;
    local_248.X = TVar7.X;
    iVar18 = TVar7.X;
  }
  cVar3 = (param_3->Desc).field_0x32;
  if ((cVar3 == '\x03') || (cVar3 == '\x04')) {
    if (GVisualizeTexture._52_4_ == 2) {
      iVar18 = iVar18 * 4;
      iVar20 = iVar20 * 3;
      TVar5.X = TVar5.X * 4;
      local_248.Y = iVar20;
      local_248.X = iVar18;
      TVar5.Y = TVar5.Y * 3;
    }
    else {
      iVar18 = iVar18 * 2;
      TVar5.X = TVar5.X * 2;
      local_248.X = iVar18;
    }
  }
  GVisualizeTexture._288_4_ = local_248.X;
  GVisualizeTexture._292_4_ = local_248.Y;
  local_218 = 1;
  if (1 < iVar18) {
    local_218 = iVar18;
  }
  local_f8._8_4_ = 1;
  iVar18 = 1;
  if (1 < iVar20) {
    iVar18 = iVar20;
  }
  local_f8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_ac = 1;
  local_f8._40_4_ = iVar18;
  local_f8._36_4_ = local_218;
  local_f8._0_8_ = 9;
  local_f8._12_4_ = 0x3f800000;
  local_f8._16_8_ = 0x3f800000;
  local_f8._24_4_ = 0x3f800000;
  local_f8._32_4_ = 0;
  local_f8._44_4_ = 0x10001;
  local_f8._48_4_ = 0x2000101;
  local_f8._52_2_ = 0xff00;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_1c0 = local_218;
  iStack_1bc = iVar18;
  pFVar13 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_f8,(wchar_t *)param_3->_padding_,None);
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  cVar3 = (param_3->Desc).field_0x32;
  if ((cVar3 == '\0') || (cVar3 == '\x01')) {
    if ((byte)(param_3->Desc).field_0x31 < 2) {
      cVar3 = (param_3->Desc).field_0x33;
      if (cVar3 == '\v') {
        iVar23 = 6;
      }
      else if (cVar3 == '9') {
        iVar23 = 7;
      }
      else {
        iVar23 = 2;
        if (cVar3 == '\x1c') {
          iVar23 = 8;
        }
      }
    }
    else {
      iVar23 = 5;
    }
  }
  else if (cVar3 != '\x03') {
    if (cVar3 == '\x04') {
      iVar23 = 4;
    }
    else {
      if ((cVar3 != '\x02') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Desc.IsTexture3D()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                              ,0x2c2,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FRDGTexture *)(*pcVar8)();
        return pFVar13;
      }
      iVar23 = 3;
    }
  }
  pFVar14 = FRDGAllocator::Alloc<FVisualizeTexturePS::FParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  uVar4 = *(ushort *)&(param_3->Desc).field_0x2c;
  (pFVar14->TextureExtent).field0_0x0._s_0.X = (float)TVar5.X;
  (pFVar14->TextureExtent).field0_0x0._s_0.Y = (float)TVar5.Y;
  (pFVar14->TextureExtent).field0_0x0._s_0.Z = (float)uVar4;
  auVar25._0_8_ = (double)FApp::CurrentTime * __real_3fd0000000000000;
  lVar19 = (longlong)auVar25._0_8_;
  if ((lVar19 != -0x8000000000000000) && ((double)lVar19 != auVar25._0_8_)) {
    auVar25._8_8_ = auVar25._0_8_;
    uVar12 = movmskpd(0,auVar25);
    auVar25._0_8_ = (double)(longlong)(lVar19 - (ulonglong)(uVar12 & 1));
  }
  fVar26 = fVar27;
  if (__real_3d800000 <=
      (float)((double)FApp::CurrentTime * __real_3fd0000000000000 - auVar25._0_8_)) {
    fVar26 = 0.0;
  }
  fVar2 = param_4->SingleChannelMul;
  (pFVar14->VisualizeParam).Elements[0].field0_0x0._s_0.X = param_4->RGBMul;
  (pFVar14->VisualizeParam).Elements[0].field0_0x0._s_0.Y = fVar2;
  (pFVar14->VisualizeParam).Elements[0].field0_0x0._s_0.Z = 0.0;
  (pFVar14->VisualizeParam).Elements[0].field0_0x0._s_0.W = 0.9999;
  pTVar10 = CVarAllowBlinking.Ref;
  uVar12 = param_4->MipIndex;
  uVar24 = param_4->ArrayIndex;
  if (param_4->ShaderOp != Saturate) {
    fVar27 = 0.0;
  }
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FRDGTexture *)(*pcVar8)();
    return pFVar13;
  }
  if (pTVar10->ShadowedValue[1] == 0) {
    fVar26 = 0.0;
  }
  puVar1 = &(param_3->Desc).field_0x2e;
  (pFVar14->VisualizeParam).Elements[1].field0_0x0._s_0.X = fVar26;
  (pFVar14->VisualizeParam).Elements[1].field0_0x0._s_0.Y = fVar27;
  (pFVar14->VisualizeParam).Elements[1].field0_0x0._s_0.Z = (float)uVar24;
  (pFVar14->VisualizeParam).Elements[1].field0_0x0._s_0.W = (float)uVar12;
  TVar5.X = param_4->SingleChannel;
  (pFVar14->VisualizeParam).Elements[2].field0_0x0._s_0.X = (float)(int)param_5;
  (pFVar14->VisualizeParam).Elements[2].field0_0x0._s_0.Y = 0.0;
  (pFVar14->VisualizeParam).Elements[2].field0_0x0._s_0.Z = (float)TVar5.X;
  (pFVar14->VisualizeParam).Elements[2].field0_0x0._s_0.W = 1.0;
  TVar9 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
          ::StaticResource.StateRHI;
  cVar3 = (param_3->Desc).field_0x32;
  if (cVar3 == '\x01') {
    uVar12 = *(ushort *)puVar1 - 1;
    if ((int)param_4->ArrayIndex < (int)(*(ushort *)puVar1 - 1)) {
      uVar12 = param_4->ArrayIndex;
    }
    uVar24 = 0;
    if (0 < (int)uVar12) {
      uVar24 = uVar12;
    }
    if ((((int)uVar24 < 0) || ((int)(uint)*(ushort *)puVar1 <= (int)uVar24)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("SliceIndex >= 0 && SliceIndex < Texture->Desc.ArraySize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                            ,0x30e,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FRDGTexture *)(*pcVar8)();
      return pFVar13;
    }
    local_208._padding_._2_1_ = (param_3->Desc).field_0x30;
    local_208._padding_._0_2_ = 0;
    local_208._padding_._3_1_ = 0;
    local_208._6_4_ = 1;
    local_208._padding_._4_2_ = (undefined2)uVar24;
    local_208._padding_._2_1_ = 1;
    local_208.Texture = param_3;
    pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_208);
  }
  else {
    local_1f0._padding_._2_1_ = (param_3->Desc).field_0x30;
    local_1f0._padding_._0_2_ = 0;
    local_1f0._padding_._3_1_ = 0;
    local_1f0._padding_._4_4_ = 0;
    local_1f0._padding_._0_1_ = 0;
    local_1f0._padding_._2_1_ = 0;
    if (cVar3 == '\x04') {
      local_1f0._padding_._4_4_ = (uint)*(ushort *)puVar1 << 0x10;
    }
    local_1f0.Texture = param_3;
    pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_1f0);
  }
  pFVar14->VisualizeTexture2D = pFVar15;
  pFVar14->VisualizeTexture2DSampler = TVar9.Reference;
  pFVar14->VisualizeTexture3D = pFVar15;
  pFVar14->VisualizeTexture3DSampler = TVar9.Reference;
  pFVar14->VisualizeTextureCube = pFVar15;
  pFVar14->VisualizeTextureCubeSampler = TVar9.Reference;
  pFVar14->VisualizeTextureCubeArray = pFVar15;
  pFVar14->VisualizeTextureCubeArraySampler = TVar9.Reference;
  if (iVar23 == 6) {
    local_1d8._padding_._1_1_ = 0;
    local_1d8._padding_._4_4_ = 0;
    local_1d8._padding_._0_1_ = 0;
    local_1d8._padding_._2_1_ = 0;
    local_1d8._padding_._2_1_ = (param_3->Desc).field_0x30;
    cVar3 = (param_3->Desc).field_0x32;
    local_1d8._padding_._3_1_ = 0;
    if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
      local_1d8._padding_._4_4_ = (uint)*(ushort *)puVar1 << 0x10;
    }
    local_1d8._padding_._0_1_ = 0x2c;
    local_1d8.Texture = param_3;
    pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_1d8);
    pFVar14->VisualizeDepthStencil = pFVar15;
  }
  local_1b8.ResolveTexture = (FRDGTexture *)0x0;
  pFVar14->VisualizeTexture2DMS = param_3;
  pFVar14->VisualizeUINT8Texture2D = param_3;
  local_1b8.LoadAction = EClear;
  local_1b8.MipIndex = '\0';
  local_1b8.ArraySlice = -1;
  local_1b8.Texture = pFVar13;
  bVar11 = FRenderTargetBinding::Validate(&local_1b8);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FRDGTexture *)(*pcVar8)();
    return pFVar13;
  }
  (pFVar14->RenderTargets).Output.Elements[0].Texture = local_1b8.Texture;
  (pFVar14->RenderTargets).Output.Elements[0].ResolveTexture = local_1b8.ResolveTexture;
  (pFVar14->RenderTargets).Output.Elements[0].LoadAction = local_1b8.LoadAction;
  (pFVar14->RenderTargets).Output.Elements[0].MipIndex = local_1b8.MipIndex;
  (pFVar14->RenderTargets).Output.Elements[0].ArraySlice = local_1b8.ArraySlice;
  *(undefined4 *)&(pFVar14->RenderTargets).Output.Elements[0].field_0x14 = local_1b8._20_4_;
  pFVar16 = (FShaderType *)FVisualizeTexturePS::GetStaticType();
  pFVar21 = local_210;
  FGlobalShaderMap::GetShader(local_210,&local_158,pFVar16,iVar23);
  if (local_158.ShaderContent == (FShader *)0x0) {
    this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_148);
    ::FName::ToString((FName *)this,&local_140);
    FVisualizeTexturePS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    pFVar21 = local_210;
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FRDGTexture *)(*pcVar8)();
      return pFVar13;
    }
  }
  FVisualizeTexturePS::GetStaticType();
  local_128.ShaderContent = (FVisualizeTexturePS *)local_158.ShaderContent;
  local_128.ShaderMap = local_158.ShaderMap;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  if (*(char *)((longlong)&param_1->_padding_ + 6) != '\0') {
    if ((param_3->Desc).field_0x32 == '\x02') {
      ::FString::PrintfImpl(&local_188,L"x%d CapturedSlice=%d");
      iVar23 = local_188.Data.ArrayNum + -1;
      if (local_188.Data.ArrayNum == 0) {
        iVar23 = 0;
      }
      ::FString::AppendChars(&local_228,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar23);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    cVar3 = (param_3->Desc).field_0x32;
    if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
      ::FString::PrintfImpl(&local_178,L" ArraySize=%d CapturedSlice=%d");
      iVar23 = local_178.Data.ArrayNum + -1;
      if (local_178.Data.ArrayNum == 0) {
        iVar23 = 0;
      }
      ::FString::AppendChars(&local_228,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar23);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)(param_3->Desc).field_0x30) {
      ::FString::PrintfImpl(&local_168,L" Mips=%d CapturedMip=%d");
      iVar23 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar23 = 0;
      }
      ::FString::AppendChars(&local_228,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar23);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
  }
  local_1a0._8_4_ = local_218;
  local_1a0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_1a0._12_4_ = iVar18;
  pFVar17 = FRDGEventName::FRDGEventName(&local_118,L"VisualizeTextureCapture(%s@%d %s %dx%d%s)");
  FPixelShaderUtils::AddFullscreenPass<FVisualizeTexturePS>
            (param_1,pFVar21,pFVar17,&local_128,pFVar14,(TIntRect<int> *)&local_1a0._s_0,
             (FRHIBlendState *)0x0,(FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
  if (local_118.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return pFVar13;
}

// AddVisualizeTexturePass @ 145ec5fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __cdecl
FVisualizeTexture::AddVisualizeTexturePass
          (FRDGBuilder *param_1,FGlobalShaderMap *param_2,FRDGTexture *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  EInputValueMapping EVar4;
  FConfig local_38;
  
  if (param_3 == (FRDGTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                       ,0x45f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  EVar4 = Color;
  if ((param_3->Desc).field_0x33 == '\f') {
    EVar4 = Shadow;
  }
  else if ((*(byte *)&param_3->Desc & 4) != 0) {
    EVar4 = Depth;
  }
  local_38.SingleChannelMul = 0.0;
  local_38.Flags = None;
  local_38.MipIndex = 0;
  local_38.ArrayIndex = 0;
  local_38.RGBMul = 1.0;
  local_38.AMul = 0.0;
  local_38.SingleChannel = -1;
  local_38.InputUVMapping = PictureInPicture;
  local_38.ShaderOp = Frac;
  pFVar3 = AddVisualizeTexturePass(param_1,param_2,param_3,&local_38,EVar4,0);
  return pFVar3;
}

// BeginFrameRenderThread @ 145ec6090

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeTexture::BeginFrameRenderThread(FVisualizeTexture *this)

{
  this->bAnyViewRendered = false;
  this->bIsRequestedView = false;
  this->bFoundRequestedView = false;
  return;
}

// BeginViewRenderThread @ 145ec60b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVisualizeTexture::BeginViewRenderThread
          (FVisualizeTexture *this,Type param_1,int param_2,wchar_t *param_3,bool param_4)

{
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *pTVar1;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *this_00;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 in_register_00000084;
  TKeyInitializer<int_const_&> *pTVar7;
  bool bVar8;
  undefined1 auStackY_128 [32];
  uint local_f8 [2];
  int local_f0 [2];
  uint *local_e8 [2];
  FCaptured local_d8;
  ulonglong local_48;
  
  pTVar7 = (TKeyInitializer<int_const_&> *)CONCAT44(in_register_00000084,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((this->State != Inactive) && (param_2 != 0)) {
    this->FeatureLevel = param_1;
    bVar8 = false;
    local_f8[0] = param_2;
    if (this->bAnyViewRendered == false) {
      pTVar1 = &this->ViewDescriptionMap;
      bVar2 = 1 < *(int *)&(this->ViewDescriptionMap).field_0x48;
      if (!bVar2) {
        TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                        *)pTVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar1,0,*(int *)&(this->ViewDescriptionMap).field_0x8);
      puVar6 = &(this->ViewDescriptionMap).field_0xc;
      *(undefined4 *)&(this->ViewDescriptionMap).field_0x8 = 0;
      if (*(int *)puVar6 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)pTVar1,0,(int *)puVar6);
      }
      *(undefined4 *)&(this->ViewDescriptionMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ViewDescriptionMap).field_0x34 = 0;
      iVar3 = *(int *)&(this->ViewDescriptionMap).field_0x2c;
      *(undefined4 *)&(this->ViewDescriptionMap).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->ViewDescriptionMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ViewDescriptionMap).field_0x10,0)
        ;
      }
      if (bVar2) {
        *(undefined4 *)&(this->ViewDescriptionMap).field_0x48 = 1;
        TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
        Rehash((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)pTVar1);
      }
      pTVar7 = (TKeyInitializer<int_const_&> *)(ulonglong)local_f8[0];
      this->bAnyViewRendered = true;
    }
    pTVar1 = &this->ViewDescriptionMap;
    if (*(int *)&(this->ViewDescriptionMap).field_0x8 !=
        *(int *)&(this->ViewDescriptionMap).field_0x34) {
      puVar6 = *(undefined1 **)&(this->ViewDescriptionMap).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ViewDescriptionMap).field_0x38;
      }
      iVar3 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->ViewDescriptionMap).field_0x48 - 1) &
                                (ulonglong)pTVar7 & 0xffffffff) * 4);
      if (iVar3 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&pTVar1->field_0x0);
          if (*piVar5 == (int)pTVar7) {
            if (piVar5 != (int *)0x0) goto LAB_145ec623b;
            break;
          }
          iVar3 = piVar5[6];
        } while (iVar3 != -1);
      }
    }
    local_e8[0] = local_f8;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)pTVar1,(uint)local_f0,pTVar7,(bool *)local_e8);
    piVar5 = (int *)((longlong)local_f0[0] * 0x20 + *(longlong *)&pTVar1->field_0x0);
LAB_145ec623b:
    ::FString::operator=((FString *)(piVar5 + 2),param_3);
    iVar3 = (this->Requested).ViewName.Data.ArrayNum;
    if (iVar3 < 2) {
      bVar8 = (this->Requested).ViewUniqueId == local_f8[0];
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(this->Requested).ViewName.Data.AllocatorInstance.Data,param_3,
                         (longlong)iVar3 - 1);
      if ((iVar4 == 0) && ((param_3[(longlong)iVar3 + -1] & 0xffdfU) == 0)) {
        bVar8 = true;
      }
    }
    if (bVar8) {
      this->bIsRequestedView = true;
      this->bFoundRequestedView = true;
    }
    else if (this->bFoundRequestedView == false) {
      this->bIsRequestedView = !param_4;
    }
    if (this->bIsRequestedView != false) {
      this_00 = &this->VersionCountMap;
      bVar8 = 1 < *(int *)&(this->VersionCountMap).field_0x48;
      if (!bVar8) {
        TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->VersionCountMap).field_0x8);
      puVar6 = &(this->VersionCountMap).field_0xc;
      *(undefined4 *)&(this->VersionCountMap).field_0x8 = 0;
      if (*(int *)puVar6 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar6);
      }
      *(undefined4 *)&(this->VersionCountMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->VersionCountMap).field_0x34 = 0;
      iVar3 = *(int *)&(this->VersionCountMap).field_0x2c;
      *(undefined4 *)&(this->VersionCountMap).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->VersionCountMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VersionCountMap).field_0x10,0);
      }
      if (bVar8) {
        *(undefined4 *)&(this->VersionCountMap).field_0x48 = 1;
        TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      local_d8.Desc.Extent.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      local_d8.Desc.ClearValue._0_8_ = 1;
      local_d8.Desc.DebugName = L"VisualizeTexture";
      local_d8.PooledRenderTarget.Reference = (IPooledRenderTarget *)0x0;
      local_d8.Texture = (FRDGTexture *)0x0;
      local_d8.Desc.ClearValue.Value._4_8_ = 0;
      local_d8.Desc.ClearValue.Value.Color[3] = 0.0;
      local_d8.Desc.Flags = None;
      local_d8.Desc.Format = PF_Unknown;
      local_d8.Desc.UAVFormat = PF_Unknown;
      local_d8.Desc.Depth = 0;
      local_d8.Desc.ArraySize = 1;
      local_d8.Desc.NumMips = '\0';
      local_d8.Desc.NumSamples = '\x01';
      local_d8.Desc.FastVRAMPercentage = 0xff;
      local_d8.Desc.AliasableFormats.AllocatorInstance.SecondaryData =
           (ForElementType<EPixelFormat>)0x0;
      local_d8.Desc.AliasableFormats.ArrayNum = 0;
      local_d8.Desc.AliasableFormats.ArrayMax = 1;
      local_d8.Desc.field13_0x58.PackedBits = '\0';
      local_d8.InputValueMapping = Color;
      local_d8.ViewUniqueId = 0;
      local_d8.ViewRects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ViewRects.ArrayNum = 0;
      local_d8.ViewRects.ArrayMax = 0;
      FCaptured::operator=(&this->Captured,&local_d8);
      if (local_d8.ViewRects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.ViewRects.AllocatorInstance.Data);
      }
      if (local_d8.Desc.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_d8.Desc.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      if (local_d8.PooledRenderTarget.Reference != (IPooledRenderTarget *)0x0) {
        (**(code **)((local_d8.PooledRenderTarget.Reference)->_padding_ + 0x38))();
      }
      (this->Captured).ViewUniqueId = local_f8[0];
    }
  }
  return;
}

// CreateContentCapturePass @ 145ec6710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVisualizeTexture::CreateContentCapturePass
          (FVisualizeTexture *this,FRDGBuilder *param_1,FRDGTexture *param_2,uint param_3)

{
  int *piVar1;
  EFlags EVar2;
  undefined8 uVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FGlobalShaderMap *pFVar10;
  FRDGTexture *pFVar11;
  FPooledRenderTargetDesc *pFVar12;
  FRDGEventName *pFVar13;
  undefined8 *puVar14;
  byte bVar15;
  undefined8 *puVar16;
  EInputValueMapping EVar17;
  undefined1 auStackY_1a8 [32];
  int iStack_154;
  undefined8 *local_150;
  int local_148;
  undefined8 local_140;
  uint uStack_138;
  undefined4 uStack_134;
  byte local_130;
  byte bStack_12f;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  <lambda_1> local_120;
  FRDGTextureAccess local_e8;
  FRDGEventName local_d0;
  FPooledRenderTargetDesc local_b8;
  ulonglong local_58;
  
  if (param_2 != (FRDGTexture *)0x0) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    uVar3 = *(undefined8 *)&(param_2->Desc).field_0x24;
    if ((*(ulonglong *)&param_2->Desc >> 0x13 & 1) == 0) {
      if ((param_2->Desc).field_0x33 == '\f') {
        EVar17 = Shadow;
      }
      else {
        EVar17 = Color;
        if ((*(ulonglong *)&param_2->Desc & 4) != 0) {
          EVar17 = Depth;
        }
      }
      pFVar10 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)this->FeatureLevel]);
      pFVar11 = AddVisualizeTexturePass(param_1,pFVar10,param_2,&this->Config,EVar17,param_3);
      iVar9 = (int)uVar3;
      local_148 = 1;
      if (1 < iVar9) {
        local_148 = iVar9;
      }
      iStack_154 = (int)((ulonglong)uVar3 >> 0x20);
      iVar9 = 1;
      if (1 < iStack_154) {
        iVar9 = iStack_154;
      }
      pFVar12 = ::Translate(&local_b8,(FRHITextureDesc *)&param_2->Desc);
      FPooledRenderTargetDesc::operator=(&(this->Captured).Desc,pFVar12);
      if (local_b8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      puVar16 = (undefined8 *)0x0;
      (this->Captured).Desc.DebugName = (wchar_t *)param_2->_padding_;
      pIVar4 = (this->Captured).PooledRenderTarget.Reference;
      if (pIVar4 != (IPooledRenderTarget *)0x0) {
        (this->Captured).PooledRenderTarget.Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar4->_padding_ + 0x38))();
      }
      (this->Captured).Texture = pFVar11;
      (this->Captured).InputValueMapping = EVar17;
      TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>::operator=
                (&(this->Captured).ViewRects,&this->FamilyViewRects);
      FRDGBuilder::QueueTextureExtraction(param_1,pFVar11,&(this->Captured).PooledRenderTarget,None)
      ;
      EVar2 = (this->Config).Flags;
      if ((EVar2 & (SaveBitmapAsStencil|SaveBitmap)) != None) {
        bStack_12f = (byte)(this->Config).MipIndex;
        iVar8 = local_148 >> (bStack_12f & 0x1f);
        local_140 = 6;
        iVar6 = local_148;
        if (iVar8 < local_148) {
          iVar6 = iVar8;
        }
        uStack_134 = 0x467a0000;
        uStack_138 = uStack_138 & 0xffffff00;
        local_120.ReadDataFlags.MaxDepthRange = 16000.0;
        local_120.ReadDataFlags._8_4_ = uStack_138;
        iVar8 = iVar9 >> (bStack_12f & 0x1f);
        uStack_12c = 0;
        uStack_128 = 0;
        if (iVar8 < iVar9) {
          iVar9 = iVar8;
        }
        local_120.ReadDataFlags.GPUIndex = 0;
        bVar15 = (byte)(EVar2 >> 1);
        local_130 = bVar15 & 1;
        local_120.ReadDataFlags._16_8_ =
             ZEXT48(CONCAT22(uStack_12e,CONCAT11(bStack_12f,bVar15)) & 0xffffff01);
        local_120.Extent.field0_0x0._s_0.X = 0;
        if (0 < iVar6) {
          local_120.Extent.field0_0x0._s_0.X = iVar6;
        }
        local_120.ReadDataFlags.CubeFace = CubeFace_MAX;
        local_120.ReadDataFlags.CompressionMode = RCM_UNorm;
        local_120.Extent.field0_0x0._s_0.Y = 0;
        if (0 < iVar9) {
          local_120.Extent.field0_0x0._s_0.Y = iVar9;
        }
        local_120.DebugName = (this->Captured).Desc.DebugName;
        local_120.OutputTexture = pFVar11;
        pFVar13 = FRDGEventName::FRDGEventName(&local_d0,1,L"SaveBitmap");
        puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
        if (puVar14 == (undefined8 *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                             ,0x61,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          puVar14[2] = 0;
          *puVar14 = &___7__TObject_VFReadbackTextureParameters___FRDGAllocator__6B_;
          *(undefined4 *)(puVar14 + 3) = 0;
          *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
          puVar16 = puVar14;
        }
        local_150 = puVar16;
        if ((((undefined8 **)param_1->_padding_ <= &local_150) &&
            (&local_150 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        *(int *)&param_1->_padding_ = iVar9 + 1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_150;
        FRDGTextureAccess::FRDGTextureAccess(&local_e8,pFVar11,CopySrc);
        puVar16[2] = local_e8.Texture;
        *(FRDGTextureSubresourceRange *)(puVar16 + 3) = local_e8.SubresourceRange;
        puVar16[4] = local_e8._16_8_;
        FRDGBuilder::
        AddPass<FReadbackTextureParameters,_FVisualizeTexture::CreateContentCapturePass_::__l20::<lambda_1>_>
                  (param_1,pFVar13,(FReadbackTextureParameters *)(puVar16 + 2),Readback,&local_120);
        if (local_d0.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// DebugLogOnCrash @ 145ec6ac0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeTexture::DebugLogOnCrash(FVisualizeTexture *this)

{
  void *local_28 [2];
  bool local_18;
  
  DisplayPoolResourceListToLog(this,Size);
  local_18 = false;
  DisplayResourceListToLog(this,(TOptional<FWildcardString> *)local_28);
  if ((local_18 != false) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
    return;
  }
  return;
}

// DisplayHelp @ 145ec6b10

void __cdecl FVisualizeTexture::DisplayHelp(FOutputDevice *param_1)

{
  FOutputDevice::Log(param_1,L"VisualizeTexture/Vis <RDGResourceNameWildcard>:");
  FOutputDevice::Log(param_1,L"  Lists all RDG resource names with wildcard filtering.");
  FOutputDevice::Log(param_1,L"");
  FOutputDevice::Log(param_1,
                     L"VisualizeTexture/Vis <RDGResourceName>[@<Version>] [<Mode>] [PIP/UV0/UV1/UV2] [BMP] [FRAC/SAT] [FULL]:"
                    );
  FOutputDevice::Log(param_1,
                     L"  RDGResourceName = Name of the resource set when creating it with RDG.");
  FOutputDevice::Log(param_1,L"  Version = Integer to specify a specific intermediate version.");
  FOutputDevice::Log(param_1,L"  Mode (examples):");
  FOutputDevice::Log(param_1,L"    RGB      = RGB in range 0..1 (default)");
  FOutputDevice::Log(param_1,L"    *8       = RGB * 8");
  FOutputDevice::Log(param_1,L"    A        = alpha channel in range 0..1");
  FOutputDevice::Log(param_1,L"    R        = red channel in range 0..1");
  FOutputDevice::Log(param_1,L"    G        = green channel in range 0..1");
  FOutputDevice::Log(param_1,L"    B        = blue channel in range 0..1");
  FOutputDevice::Log(param_1,L"    A*16     = Alpha * 16");
  FOutputDevice::Log(param_1,L"    RGB/2    = RGB / 2");
  FOutputDevice::Log(param_1,L"  SubResource:");
  FOutputDevice::Log(param_1,L"    MIP5     = Mip level 5 (0 is default)");
  FOutputDevice::Log(param_1,L"    INDEX5   = Array Element 5 (0 is default)");
  FOutputDevice::Log(param_1,L"  InputMapping:");
  FOutputDevice::Log(param_1,
                     L"    PIP      = like UV1 but as picture in picture with normal rendering  (default)"
                    );
  FOutputDevice::Log(param_1,L"    UV0      = UV in left top");
  FOutputDevice::Log(param_1,L"    UV1      = full texture");
  FOutputDevice::Log(param_1,L"    UV2      = pixel perfect centered");
  FOutputDevice::Log(param_1,L"  Flags:");
  FOutputDevice::Log(param_1,
                     L"    BMP      = save out bitmap to the screenshots folder (not on console, normalized)"
                    );
  FOutputDevice::Log(param_1,
                     L"    STENCIL  = Stencil normally displayed in alpha channel of depth.  This option is used for BMP to get a stencil only BMP."
                    );
  FOutputDevice::Log(param_1,L"    FRAC     = use frac() in shader (default)");
  FOutputDevice::Log(param_1,L"    SAT      = use saturate() in shader");
  FOutputDevice::Log(param_1,L"");
  FOutputDevice::Log(param_1,L"VisualizeTexture/Vis 0");
  FOutputDevice::Log(param_1,L"  Stops visualizing a resource.");
  FOutputDevice::Log(param_1,L"");
  FOutputDevice::Log(param_1,L"VisualizeTexture/Vis pool [BYNAME/BYSIZE]:");
  FOutputDevice::Log(param_1,L"  Shows list of all resources in the pool.");
  FOutputDevice::Log(param_1,L"  BYNAME   = sort pool list by name");
  FOutputDevice::Log(param_1,L"  BYSIZE   = show pool list by size");
  FOutputDevice::Log(param_1,L"");
  FOutputDevice::Log(param_1,L"VisualizeTexture/Vis view=[ID/NAME]");
  FOutputDevice::Log(param_1,
                     L"  Unique ID or name of view to visualize textures from, \"view=?\" to dump list of available views"
                    );
  FOutputDevice::Log(param_1,L"");
  return;
}

// DisplayPoolResourceListToLog @ 145ec6d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualizeTexture::DisplayPoolResourceListToLog(FVisualizeTexture *this,ESortBy param_1)

{
  FScriptContainerElement *this_00;
  code *pcVar1;
  ETextureCreateFlags EVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FPooledRenderTarget *this_01;
  ForElementType<EPixelFormat> _Dst;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  ForElementType<EPixelFormat> _Src;
  size_t _Size;
  uint uVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_1b8 [32];
  FIdentityFunctor local_168 [8];
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  FSortedLines local_150;
  FString local_138;
  FString local_128;
  uint local_118;
  uint local_114;
  uint local_110 [2];
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  uint local_b8 [2];
  FString local_b0;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  ETextureCreateFlags local_78;
  EPixelFormat local_70;
  EPixelFormat local_6f;
  TIntPoint<int>_u_0 local_6c;
  ushort local_64;
  ushort local_62;
  uchar local_60;
  byte local_5f;
  uchar local_5e;
  ForElementType<EPixelFormat> local_58;
  int local_48;
  int local_44;
  FPooledRenderTargetDesc_u_88 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar8 = 0;
  local_154 = 0;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  local_118 = GRenderTargetPool._64_4_;
  if (GRenderTargetPool._64_4_ != 0) {
    do {
      FVar9.Data = (FScriptContainerElement *)0x0;
      this_01 = FRenderTargetPool::GetElementById((FRenderTargetPool *)&GRenderTargetPool,uVar8);
      if (this_01 != (FPooledRenderTarget *)0x0) {
        local_98 = (this_01->Desc).DebugName;
        local_90 = *(undefined8 *)&(this_01->Desc).ClearValue;
        uStack_88 = *(undefined8 *)((longlong)&(this_01->Desc).ClearValue.Value + 4);
        local_80 = (this_01->Desc).ClearValue.Value.Color[3];
        local_78 = (this_01->Desc).Flags;
        local_70 = (this_01->Desc).Format;
        local_6f = (this_01->Desc).UAVFormat;
        local_6c = (this_01->Desc).Extent.field0_0x0;
        local_64 = (this_01->Desc).Depth;
        local_62 = (this_01->Desc).ArraySize;
        local_60 = (this_01->Desc).NumMips;
        local_5f = (this_01->Desc).NumSamples;
        local_5e = (this_01->Desc).FastVRAMPercentage;
        local_58.SecondaryData = (ForElementType<EPixelFormat>)0x0;
        _Src = (this_01->Desc).AliasableFormats.AllocatorInstance.SecondaryData;
        local_48 = (this_01->Desc).AliasableFormats.ArrayNum;
        _Size = (size_t)local_48;
        if (_Src == (ForElementType<EPixelFormat>)0x0) {
          _Src = (ForElementType<EPixelFormat>)&(this_01->Desc).AliasableFormats;
        }
        if (local_48 == 0) {
          local_44 = 1;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                    (1,1,local_48,0,&local_58,local_48,&local_44);
          _Dst = (ForElementType<EPixelFormat>)&local_58;
          if (local_58.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
            _Dst = local_58.SecondaryData;
          }
          memcpy((void *)_Dst,(void *)_Src,_Size);
        }
        local_40 = (this_01->Desc).field13_0x58;
        uVar4 = FPooledRenderTarget::ComputeMemorySize(this_01);
        if (this_01->UnusedForNFrames != 0) {
          ::FString::PrintfImpl(&local_d8,L" unused(%d)");
          FVar9.Data = local_d8.Data.AllocatorInstance.Data;
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
        }
        local_150.Line.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.Line.Data.ArrayNum = 0;
        local_150.Line.Data.ArrayMax = 0;
        local_150.SortIndex = uVar8;
        local_150.PoolIndex = uVar8;
        GetPixelFormatString(local_70);
        ::FString::FString(&local_138,L"");
        EVar2 = local_78;
        if ((local_78 & RenderTargetable) != None) {
          ::FString::AppendChars(&local_138,L" RT",3);
        }
        if ((EVar2 & SRGB) != None) {
          ::FString::AppendChars(&local_138,L" sRGB",5);
        }
        if (1 < local_5f) {
          ::FString::PrintfImpl(&local_b0,L" %dxMSAA");
          iVar5 = local_b0.Data.ArrayNum + -1;
          if (local_b0.Data.ArrayNum == 0) {
            iVar5 = 0;
          }
          ::FString::AppendChars(&local_138,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar5);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        if ((EVar2 >> 0x11 & 1) != 0) {
          ::FString::AppendChars(&local_138,L" UAV",4);
        }
        if ((EVar2 >> 0x15 & 1) != 0) {
          ::FString::AppendChars(&local_138,L" VRam",5);
        }
        FVar6.Data = (FScriptContainerElement *)0x0;
        if ((local_40.PackedBits & 1) != 0) {
          ::FString::PrintfImpl(&local_c8,L"[%d]");
          FVar6.Data = local_c8.Data.AllocatorInstance.Data;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
        }
        if (local_6c._0_4_ == 0) {
LAB_145ec7139:
          if ((local_40.PackedBits & 2) == 0) {
            ::FString::FString(&local_128,L"(INVALID)");
          }
          else {
code_r0x000145ec7154:
            ::FString::PrintfImpl(&local_128,L"(Cube%s %d %s%s)");
          }
        }
        else {
          if (((local_6c._4_4_ == 0) || (local_64 != 0)) || ((local_40.PackedBits & 2) != 0)) {
            if (((local_6c._0_4_ == 0) || (local_6c._4_4_ == 0)) || (local_64 == 0))
            goto LAB_145ec7139;
            if ((local_40.PackedBits & 2) == 0) {
              ::FString::PrintfImpl(&local_128,L"(3D%s %dx%dx%d %s%s)");
              goto LAB_145ec7187;
            }
            goto code_r0x000145ec7154;
          }
          ::FString::PrintfImpl(&local_128,L"(2D%s %dx%d %s%s)");
        }
LAB_145ec7187:
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (param_1 == Index) {
          iVar5 = 1 - local_128.Data.ArrayNum;
          if (local_128.Data.ArrayNum == 0) {
            iVar5 = 0;
          }
          uVar4 = iVar5 + 0x24;
          if ((int)uVar4 < 0) {
            uVar4 = 0;
          }
          if (uVar4 != 0) {
            uVar7 = (ulonglong)uVar4;
            do {
              ::FString::AppendChar(&local_128,L' ');
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          ::FString::PrintfImpl(&local_e8,L"%s %s %d KB%s");
          if (local_150.Line.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Line.Data.AllocatorInstance.Data);
          }
          local_150.Line.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
          local_150.Line.Data.ArrayNum = local_e8.Data.ArrayNum;
          local_150.Line.Data.ArrayMax = local_e8.Data.ArrayMax;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else if (param_1 == Name) {
          ::FString::PrintfImpl(&local_f8,L"%s %s %d KB%s");
          if (local_150.Line.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Line.Data.AllocatorInstance.Data);
          }
          local_150.Line.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          local_150.Line.Data.ArrayNum = local_f8.Data.ArrayNum;
          local_150.Line.Data.ArrayMax = local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150.SortIndex = 0;
        }
        else if (param_1 == Size) {
          ::FString::PrintfImpl(&local_108,L"%d KB %s %s%s");
          if (local_150.Line.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Line.Data.AllocatorInstance.Data);
          }
          local_150.Line.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
          local_150.SortIndex = -(uVar4 + 0x3ff >> 10);
          local_150.Line.Data.ArrayNum = local_108.Data.ArrayNum;
          local_150.Line.Data.ArrayMax = local_108.Data.ArrayMax;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                             ,0x1cc,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (((local_160.Data <= &local_150) &&
            (&local_150 < (FSortedLines *)(local_160.Data + (longlong)local_154 * 0x18))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_158 == local_154) {
          local_158 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_160,&local_154);
        }
        this_00 = local_160.Data + (longlong)local_158 * 0x18;
        local_158 = local_158 + 1;
        ::FString::FString((FString *)this_00,&local_150.Line);
        *(int *)(this_00 + 0x10) = local_150.SortIndex;
        *(uint *)(this_00 + 0x14) = local_150.PoolIndex;
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_150.Line.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Line.Data.AllocatorInstance.Data);
        }
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
        if (local_58.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_58.SecondaryData);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_118);
  }
  uVar8 = 0;
  AlgoImpl::
  IntroSortInternal<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int,FIdentityFunctor,TDereferenceWrapper<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,TLess<void>_>_>
            ((FSortedLines *)local_160.Data,local_158,local_168[0],(TLess<void> *)local_168);
  iVar5 = local_158;
  if (0 < local_158) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar5) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar5 = local_158, bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (4 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        iVar5 = local_158;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
  }
  if (4 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  FRenderTargetPool::GetStats((FRenderTargetPool *)&GRenderTargetPool,local_b8,&local_114,local_110)
  ;
  if ((4 < (byte)LogConsoleResponse._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
     4 < (byte)LogConsoleResponse._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  DestructItems<_FVisualizeTexture::DisplayPoolResourceListToLog_::__l2::FSortedLines,int>
            ((FSortedLines *)local_160.Data,local_158);
  if ((FSortedLines *)local_160.Data != (FSortedLines *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return;
}

// DisplayResourceListToLog @ 145ec7660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualizeTexture::DisplayResourceListToLog
          (FVisualizeTexture *this,TOptional<FWildcardString> *param_1)

{
  undefined1 *puVar1;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *pTVar2;
  code *pcVar3;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  int iVar11;
  TOptional<FWildcardString> *this_00;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_128;
  undefined8 local_120;
  undefined1 local_118;
  FIdentityFunctor local_117 [7];
  FString local_110;
  FString local_100;
  undefined4 local_f0;
  int local_e8;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  FString local_a8;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  int local_58 [6];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->State == Inactive) {
    this_00 = &this->DisplayResourcesParam;
    this->State = DisplayResources;
    if (param_1 != this_00) {
      bVar5 = (this->DisplayResourcesParam).bIsSet;
      if (param_1->bIsSet == false) {
        if (bVar5 != false) {
          if (*(void **)&this_00->TypedValue != (void *)0x0) {
            FMemory::Free(*(void **)&this_00->TypedValue);
          }
          (this->DisplayResourcesParam).bIsSet = false;
        }
      }
      else {
        if ((bVar5 != false) && (*(void **)&this_00->TypedValue != (void *)0x0)) {
          FMemory::Free(*(void **)&this_00->TypedValue);
        }
        ::FString::FString((FString *)this_00,(FString *)param_1);
        (this->DisplayResourcesParam).bIsSet = true;
      }
    }
    return;
  }
  if (4 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  uVar16 = *(int *)&(this->VersionCountMap).field_0x8 - *(int *)&(this->VersionCountMap).field_0x34;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  iVar17 = 0;
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&local_128,0,(int *)((longlong)&local_120 + 4));
  }
  puVar1 = &(this->VersionCountMap).field_0x10;
  iVar6 = *(int *)&(this->VersionCountMap).field_0x28;
  pTVar2 = &this->VersionCountMap;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = local_c0;
  if (iVar6 != 0) {
    puVar21 = *(uint **)&(this->VersionCountMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    local_c0 = 0;
    iVar17 = 0;
    while (uVar16 == 0) {
      lVar8 = (longlong)iVar17;
      local_c0 = local_c0 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_c4 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145ec77fe;
      uVar16 = puVar21[lVar8 + 1];
    }
    uStack_d4 = -uVar16 & uVar16;
    uVar19 = (ulonglong)uStack_d4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b0 = (int)lVar8;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar6 < iStack_c4) {
      iStack_c4 = iVar6;
    }
  }
LAB_145ec77fe:
  uVar16 = *(uint *)&(this->VersionCountMap).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  iStack_b8 = *(int *)&(this->VersionCountMap).field_0x8 -
              *(int *)&(this->VersionCountMap).field_0x34;
  uStack_c8 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_d4,iVar17);
  TStack_90.CurrentBitIndex = iStack_c4;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar16 >> 5;
  TStack_90._28_4_ = iStack_c4;
  TStack_90.BaseBitIndex = local_c0;
  uStack_70 = CONCAT44(uStack_b4,iStack_b8);
  local_e0 = pTVar2;
  iStack_d8 = iVar17;
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar6 < (int)uVar16)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)&(this->VersionCountMap).field_0x28;
  if (uVar16 != uVar7) {
    puVar18 = *(undefined1 **)&(this->VersionCountMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar11 * 4);
    while (uVar16 == 0) {
      lVar8 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar16 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ec7900;
      uVar16 = *(uint *)(puVar18 + lVar8 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_ac = (int)lVar8;
    uVar16 = local_ac + -1 + uVar14;
    if ((int)uVar7 < (int)uVar16) {
      uVar16 = uVar7;
    }
  }
LAB_145ec7900:
  do {
    pTVar4 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_118 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_118);
    }
    if (((TStack_90.CurrentBitIndex == uVar16) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == pTVar2))
    {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_128.Data,(int)local_120,local_117[0],(TLess<void> *)local_117);
      uVar19 = (ulonglong)(int)local_120;
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      iVar6 = (int)((int)local_120 + 7 + ((int)local_120 + 7 >> 0x1f & 7U)) >> 3;
      iVar17 = 5;
      if (iVar6 < 5) {
        iVar17 = iVar6;
      }
      local_e8 = 1;
      if (1 < iVar17) {
        local_e8 = iVar17;
      }
      local_58[4] = 0;
      iVar17 = ((int)local_120 + -1 + local_e8) / local_e8;
      uVar16 = 0;
      uVar20 = uVar19;
      if (0 < (int)local_120) {
        lVar8 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar16 < (int)uVar20) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(local_128.Data + lVar8 + 8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(local_128.Data + lVar8);
          }
          ::FString::FString(&local_68,pwVar9);
          iVar6 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          if (iVar6 < local_58[(longlong)(int)uVar16 / (longlong)iVar17 & 0xffffffff]) {
            iVar6 = local_58[(longlong)(int)uVar16 / (longlong)iVar17 & 0xffffffff];
          }
          local_58[(longlong)(int)uVar16 / (longlong)iVar17 & 0xffffffff] = iVar6;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          uVar20 = local_120 & 0xffffffff;
          uVar16 = uVar16 + 1;
          lVar8 = lVar8 + 0x10;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      iVar6 = (int)uVar20;
      uVar16 = 0;
      pFVar13 = (FScriptContainerElement *)0x0;
      if (0 < iVar17) {
        lVar8 = (longlong)local_e8;
        do {
          local_110.Data.ArrayNum = 0;
          local_110.Data.ArrayMax = 0;
          uVar19 = (ulonglong)pFVar13 & 0xffffffff;
          pFVar15 = pFVar13;
          uVar14 = uVar16;
          local_110.Data.AllocatorInstance.Data = pFVar13;
          if (0 < lVar8) {
            do {
              if ((int)uVar20 <= (int)uVar14) break;
              uVar7 = (uint)pFVar13;
              if ((int)uVar14 < (int)uVar20) {
                uVar7 = ~uVar14 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)(local_128.Data + (longlong)(int)uVar14 * 0x10 + 8) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)(local_128.Data + (longlong)(int)uVar14 * 0x10);
              }
              ::FString::FString(&local_a8,pwVar9);
              uVar7 = local_110.Data.ArrayNum - 1;
              if (local_110.Data.ArrayNum == 0) {
                uVar7 = (uint)pFVar13;
              }
              uVar7 = (int)uVar19 - uVar7;
              if ((int)uVar7 < 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SpaceCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                                   ,0x22c,L"");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else if (0 < (int)uVar7) {
                pFVar13 = (FScriptContainerElement *)(ulonglong)uVar7;
                do {
                  ::FString::AppendChar(&local_110,L' ');
                  pFVar13 = pFVar13 + -1;
                } while (pFVar13 != (FScriptContainerElement *)0x0);
              }
              iVar6 = local_a8.Data.ArrayNum + -1;
              if (local_a8.Data.ArrayNum == 0) {
                iVar6 = (int)pFVar13;
              }
              ::FString::AppendChars
                        (&local_110,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar6);
              uVar19 = (ulonglong)(uint)((int)uVar19 + 1 + local_58[(longlong)pFVar15]);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              uVar20 = local_120 & 0xffffffff;
              pFVar15 = pFVar15 + 1;
              uVar14 = uVar14 + iVar17;
            } while ((longlong)pFVar15 < lVar8);
          }
          if (4 < (byte)LogConsoleResponse._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse)
            ;
            uVar20 = local_120 & 0xffffffff;
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
            uVar20 = local_120 & 0xffffffff;
          }
          iVar6 = (int)uVar20;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < iVar17);
      }
      if (4 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        iVar6 = (int)local_120;
      }
      DestructItems<FString,int>((FString *)local_128.Data,iVar6);
      if (local_128.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_128.Data);
      return;
    }
    pFVar12 = (FString *)(*(longlong *)pTVar4 + (longlong)TStack_90.CurrentBitIndex * 0x20);
    ::FString::FString(&local_100,pFVar12);
    local_f0 = *(undefined4 *)&pFVar12[1].Data.AllocatorInstance.Data;
    if (param_1->bIsSet == false) {
LAB_145ec798e:
      if (((local_128.Data <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 < local_128.Data + (longlong)local_120._4_4_ * 0x10
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar17 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      FVar10.Data = local_100.Data.AllocatorInstance.Data;
      pFVar13 = local_128.Data + (longlong)iVar17 * 0x10;
      local_120 = CONCAT44(local_120._4_4_,iVar17 + 1);
      *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
      lVar8 = (longlong)local_100.Data.ArrayNum;
      *(int *)(pFVar13 + 8) = local_100.Data.ArrayNum;
      if (local_100.Data.ArrayNum == 0) {
        *(int *)(pFVar13 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,
                   local_100.Data.ArrayNum,(int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar13,FVar10.Data,lVar8 * 2);
      }
    }
    else {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_100.Data.ArrayNum != 0) {
        FVar10.Data = local_100.Data.AllocatorInstance.Data;
      }
      if (*(int *)&(param_1->TypedValue).field_0x8 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)&param_1->TypedValue;
      }
      bVar5 = FWildcardString::IsMatch(pwVar9,(wchar_t *)FVar10.Data);
      if (bVar5) goto LAB_145ec798e;
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// DisplayViewListToLog @ 145ec7e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVisualizeTexture::DisplayViewListToLog(FVisualizeTexture *this)

{
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined1 auStackY_158 [32];
  FIdentityFunctor local_108 [8];
  ForAnyElementType local_100;
  undefined8 local_f8;
  int local_f0;
  int local_ec;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (this->State == Inactive) {
    this->State = DisplayViews;
  }
  else {
    local_f8._0_4_ = 0;
    iVar11 = 0;
    pTVar1 = &this->ViewDescriptionMap;
    local_100.Data = (FScriptContainerElement *)0x0;
    uVar6 = *(int *)&(this->ViewDescriptionMap).field_0x8 -
            *(int *)&(this->ViewDescriptionMap).field_0x34;
    local_f8 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&local_100,0,(int *)((longlong)&local_f8 + 4));
    }
    iVar7 = *(int *)&(this->ViewDescriptionMap).field_0x28;
    local_d8 = &(this->ViewDescriptionMap).field_0x10;
    uStack_dc = 1;
    local_c8 = 0;
    iStack_cc = iVar11;
    if (iVar7 != 0) {
      puVar9 = *(uint **)&(this->ViewDescriptionMap).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_d8;
      }
      uVar6 = *puVar9;
      local_c8 = 0;
      iVar11 = 0;
      while (uVar6 == 0) {
        lVar8 = (longlong)iVar11;
        local_c8 = local_c8 + 0x20;
        iVar11 = iVar11 + 1;
        iStack_cc = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ec7f4f;
        uVar6 = puVar9[lVar8 + 1];
      }
      uStack_dc = -uVar6 & uVar6;
      uVar3 = (ulonglong)uStack_dc * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_ec = (int)lVar8;
      iStack_cc = local_c8 + -1 + local_ec;
      if (iVar7 < iStack_cc) {
        iStack_cc = iVar7;
      }
    }
LAB_145ec7f4f:
    TStack_b0._padding_ = CONCAT44(uStack_dc,iVar11);
    uStack_d0 = 0xffffffff;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._28_4_ = iStack_cc;
    TStack_b0.BaseBitIndex = local_c8;
    iVar7 = (int)local_f8;
    local_e8 = pTVar1;
    iStack_e0 = iVar11;
    iStack_c4 = iStack_cc;
    local_b8 = pTVar1;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
    TStack_b0.CurrentBitIndex = iStack_cc;
    if (iStack_cc < *(int *)&(this->ViewDescriptionMap).field_0x28) {
      while( true ) {
        local_f0 = TStack_b0.CurrentBitIndex;
        if ((local_100.Data <= (FScriptContainerElement *)&local_f0) &&
           ((FScriptContainerElement *)&local_f0 < local_100.Data + (longlong)local_f8._4_4_ * 4)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_f8;
        }
        if (iVar7 == local_f8._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_100,(int *)((longlong)&local_f8 + 4));
        }
        local_f8 = CONCAT44(local_f8._4_4_,iVar7 + 1);
        *(int *)(local_100.Data + (longlong)iVar7 * 4) = local_f0;
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        if ((TStack_b0.Array)->NumBits <= TStack_b0.CurrentBitIndex) break;
        iVar7 = (int)local_f8;
      }
    }
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
               *)pTVar1);
    AlgoImpl::
    IntroSortInternal<FSetElementId,int,FIdentityFunctor,TDereferenceWrapper<FSetElementId,_FVisualizeTexture::DisplayViewListToLog_::__l2::<lambda_1>_>_>
              ((FSetElementId *)local_100.Data,(int)local_f8,local_108[0],(<lambda_1> *)local_88);
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar11 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    if (4 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    iVar11 = (int)local_f8;
    pFVar2 = local_100.Data + (longlong)(int)local_f8 * 4;
    FVar10.Data = local_100.Data;
    while( true ) {
      if ((int)local_f8 != iVar11) {
        `TCheckedPointerIterator<FSetElementId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      if (FVar10.Data == pFVar2) break;
      if (4 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
      FVar10.Data = FVar10.Data + 4;
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
  }
  return;
}

// EndFrameRenderThread @ 145ec8330

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeTexture::EndFrameRenderThread(FVisualizeTexture *this)

{
  void *pvVar1;
  
  if (this->bAnyViewRendered != false) {
    if (this->State == DisplayResources) {
      DisplayResourceListToLog(this,&this->DisplayResourcesParam);
      if ((this->DisplayResourcesParam).bIsSet != false) {
        pvVar1 = *(void **)&(this->DisplayResourcesParam).TypedValue;
        if (pvVar1 != (void *)0x0) {
          FMemory::Free(pvVar1);
        }
        (this->DisplayResourcesParam).bIsSet = false;
      }
      this->State = TrackResources;
      return;
    }
    if (this->State == DisplayViews) {
      DisplayViewListToLog(this);
      this->State = TrackResources;
    }
  }
  return;
}

// EndViewRenderThread @ 145ec83a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeTexture::EndViewRenderThread(FVisualizeTexture *this)

{
  int *piVar1;
  
  if (this->bIsRequestedView != false) {
    this->bIsRequestedView = false;
    piVar1 = &(this->FamilyViewRects).ArrayMax;
    (this->FamilyViewRects).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->FamilyViewRects).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// GetTextureInfos_GameThread @ 145ec9b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVisualizeTexture::GetTextureInfos_GameThread
          (FVisualizeTexture *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  ETextureCreateFlags EVar3;
  bool bVar4;
  int iVar5;
  FPooledRenderTarget *this_00;
  ForElementType<EPixelFormat> _Dst;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<EPixelFormat> _Src;
  size_t _Size;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_138 [32];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  ETextureCreateFlags local_78;
  EPixelFormat local_70;
  EPixelFormat local_6f;
  TIntPoint<int>_u_0 local_6c;
  ushort local_64;
  ushort local_62;
  uchar local_60;
  byte local_5f;
  uchar local_5e;
  ForElementType<EPixelFormat> local_58;
  int local_48;
  int local_44;
  FPooledRenderTargetDesc_u_88 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                         ,0x130,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FlushRenderingCommands();
  uVar2 = GRenderTargetPool._64_4_;
  pFVar9 = (FScriptContainerElement *)0x0;
  if (GRenderTargetPool._64_4_ != 0) {
    do {
      this_00 = FRenderTargetPool::GetElementById
                          ((FRenderTargetPool *)&GRenderTargetPool,(uint)pFVar9);
      if (this_00 != (FPooledRenderTarget *)0x0) {
        local_98 = (this_00->Desc).DebugName;
        local_90 = *(undefined8 *)&(this_00->Desc).ClearValue;
        uStack_88 = *(undefined8 *)((longlong)&(this_00->Desc).ClearValue.Value + 4);
        local_80 = (this_00->Desc).ClearValue.Value.Color[3];
        local_78 = (this_00->Desc).Flags;
        local_70 = (this_00->Desc).Format;
        local_6f = (this_00->Desc).UAVFormat;
        local_6c = (this_00->Desc).Extent.field0_0x0;
        local_64 = (this_00->Desc).Depth;
        local_62 = (this_00->Desc).ArraySize;
        local_60 = (this_00->Desc).NumMips;
        local_5f = (this_00->Desc).NumSamples;
        local_5e = (this_00->Desc).FastVRAMPercentage;
        local_58.SecondaryData = (ForElementType<EPixelFormat>)0x0;
        _Src = (this_00->Desc).AliasableFormats.AllocatorInstance.SecondaryData;
        local_48 = (this_00->Desc).AliasableFormats.ArrayNum;
        _Size = (size_t)local_48;
        if (_Src == (ForElementType<EPixelFormat>)0x0) {
          _Src = (ForElementType<EPixelFormat>)&(this_00->Desc).AliasableFormats;
        }
        if (local_48 == 0) {
          local_44 = 1;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                    (1,1,local_48,0,&local_58,local_48,&local_44);
          _Dst = (ForElementType<EPixelFormat>)&local_58;
          if (local_58.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
            _Dst = local_58.SecondaryData;
          }
          memcpy((void *)_Dst,(void *)_Src,_Size);
        }
        local_40 = (this_00->Desc).field13_0x58;
        FPooledRenderTarget::ComputeMemorySize(this_00);
        GetPixelFormatString(local_70);
        ::FString::FString(&local_e8,L"");
        EVar3 = local_78;
        if ((local_78 & RenderTargetable) != None) {
          ::FString::AppendChars(&local_e8,L" RT",3);
        }
        if ((EVar3 & SRGB) != None) {
          ::FString::AppendChars(&local_e8,L" sRGB",5);
        }
        if (1 < local_5f) {
          ::FString::PrintfImpl(&local_a8,L" %dxMSAA");
          iVar5 = local_a8.Data.ArrayNum + -1;
          if (local_a8.Data.ArrayNum == 0) {
            iVar5 = 0;
          }
          ::FString::AppendChars(&local_e8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar5);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        if ((EVar3 >> 0x11 & 1) != 0) {
          ::FString::AppendChars(&local_e8,L" UAV",4);
        }
        if ((EVar3 >> 0x15 & 1) != 0) {
          ::FString::AppendChars(&local_e8,L" VRam",5);
        }
        FVar6.Data = (FScriptContainerElement *)0x0;
        if ((local_40.PackedBits & 1) != 0) {
          ::FString::PrintfImpl(&local_b8,L"[%d]");
          FVar6.Data = local_b8.Data.AllocatorInstance.Data;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_6c._0_4_ == 0) {
LAB_145ec9f10:
          if ((local_40.PackedBits & 2) == 0) {
            ::FString::FString(&local_d8,L"(INVALID)");
          }
          else {
code_r0x000145ec9f2d:
            ::FString::PrintfImpl(&local_d8,L"(Cube%s %d %s%s)");
          }
        }
        else {
          if (((local_6c._4_4_ == 0) || (local_64 != 0)) || ((local_40.PackedBits & 2) != 0)) {
            if (((local_6c._0_4_ == 0) || (local_6c._4_4_ == 0)) || (local_64 == 0))
            goto LAB_145ec9f10;
            if ((local_40.PackedBits & 2) == 0) {
              ::FString::PrintfImpl(&local_d8,L"(3D%s %dx%dx%d %s%s)");
              goto LAB_145ec9f62;
            }
            goto code_r0x000145ec9f2d;
          }
          ::FString::PrintfImpl(&local_d8,L"(2D%s %dx%d %s%s)");
        }
LAB_145ec9f62:
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_c8,L"%s %d %s %d");
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        FVar6.Data = local_c8.Data.AllocatorInstance.Data;
        pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        param_1->ArrayNum = iVar5 + 1;
        *(undefined8 *)&pFVar7->field_0x0 = 0;
        iVar5 = local_c8.Data.ArrayNum;
        *(int *)&pFVar7[8].field_0x0 = iVar5;
        if (iVar5 == 0) {
          *(int *)(pFVar7 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar5,0,(ForAnyElementType *)pFVar7,iVar5,(int *)(pFVar7 + 0xc));
          memcpy(*(void **)&pFVar7->field_0x0,FVar6.Data,(longlong)iVar5 * 2);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_58.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_58.SecondaryData);
        }
      }
      uVar8 = (uint)pFVar9 + 1;
      pFVar9 = (FScriptContainerElement *)(ulonglong)uVar8;
    } while (uVar8 < (uint)uVar2);
  }
  return;
}

// GetVersionCount @ 145eca2f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall FVisualizeTexture::GetVersionCount(FVisualizeTexture *this,wchar_t *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ForAnyElementType FVar4;
  uint *puVar5;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
  iVar3 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->VersionCountMap,uVar1,&local_18);
  puVar2 = (uint *)0x0;
  if (iVar3 != -1) {
    puVar2 = (uint *)((longlong)iVar3 * 0x20 + *(longlong *)&this->VersionCountMap);
  }
  puVar5 = puVar2 + 4;
  if (puVar2 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  return *puVar5;
}

// ParseCommands @ 145eca7e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVisualizeTexture::ParseCommands(FVisualizeTexture *this,wchar_t *param_1,FOutputDevice *param_2)

{
  EFlags *pEVar1;
  FString *pFVar2;
  TOptional<unsigned_int> *pTVar3;
  int *piVar4;
  wchar_t wVar5;
  code *pcVar6;
  float fVar7;
  FOutputDevice *pFVar8;
  bool bVar9;
  int iVar10;
  ESortBy EVar11;
  ESortBy EVar12;
  ESortBy EVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  ESortBy EVar18;
  ESortBy EVar19;
  ESortBy EVar20;
  ESortBy EVar21;
  FScriptContainerElement *pFVar22;
  ESortBy EVar23;
  ESortBy EVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  char cVar27;
  double dVar28;
  float fVar29;
  wchar_t *local_res10;
  FOutputDevice *local_res18;
  undefined4 local_res20;
  FString local_268;
  FScriptContainerElement *local_258;
  FString local_248;
  FString local_238;
  wchar_t *local_228;
  uint local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  int local_1c0;
  ESortBy local_1bc;
  bool local_1b8;
  uint local_1b0 [2];
  uint local_1a8 [2];
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  void *local_a0 [2];
  bool local_90;
  undefined1 local_88 [8];
  ForAnyElementType local_80 [8];
  
  pFVar22 = (FScriptContainerElement *)0x0;
  EVar20 = Index;
  EVar21 = Index;
  cVar27 = '\0';
  local_res20 = 0;
  EVar13 = Index;
  local_258 = (FScriptContainerElement *)0x0;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  local_1b8 = false;
  local_res10 = param_1;
  local_res18 = param_2;
  FParse::Token(&local_248,&local_res10,false);
  EVar24 = Index;
  EVar23 = Index;
  EVar11 = EVar21;
  EVar12 = EVar21;
  if (local_248.Data.ArrayNum < 2) goto LAB_145ecad12;
  iVar10 = iswdigit(*(wchar_t *)local_248.Data.AllocatorInstance.Data);
  EVar12 = EVar13;
  if (iVar10 != 0) {
    EVar11 = Name;
    goto LAB_145ecad12;
  }
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar25.Data = local_248.Data.AllocatorInstance.Data;
  }
  iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"help");
  if (iVar10 == 0) {
    EVar11 = Size|Name;
    goto LAB_145ecad12;
  }
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar25.Data = local_248.Data.AllocatorInstance.Data;
  }
  iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"pool");
  if (iVar10 == 0) {
    EVar11 = 4;
    goto LAB_145ecad12;
  }
  bVar9 = ::FString::StartsWith(&local_248,L"view=",5,IgnoreCase);
  if (bVar9) {
    EVar11 = local_248.Data.ArrayNum - Name;
    if (local_248.Data.ArrayNum == 0) {
      EVar11 = EVar23;
    }
    if (EVar11 == 5) {
      EVar11 = 7;
    }
    else {
      if (((int)EVar11 < 6) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(wchar_t *)(local_248.Data.AllocatorInstance.Data + 10) == L'?') {
        EVar11 = 6;
      }
      else {
        EVar11 = 7;
        EVar12 = local_248.Data.ArrayNum - Name;
        if (local_248.Data.ArrayNum == 0) {
          EVar12 = EVar23;
        }
        if (((int)EVar12 < 6) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        EVar12 = wcstoul((wchar_t *)(local_248.Data.AllocatorInstance.Data + 10),&local_228,0);
        EVar18 = local_248.Data.ArrayNum - Name;
        if (local_248.Data.ArrayNum == 0) {
          EVar18 = EVar23;
        }
        if (((int)EVar18 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        EVar19 = local_248.Data.ArrayNum - Name;
        EVar18 = EVar19;
        if (local_248.Data.ArrayNum == 0) {
          EVar18 = EVar23;
        }
        if ((longlong)local_228 - (longlong)local_248.Data.AllocatorInstance.Data >> 1 !=
            (longlong)(int)EVar18) {
          EVar13 = local_248.Data.ArrayNum - 6;
          if (local_248.Data.ArrayNum == 0) {
            EVar13 = 0xfffffffb;
            EVar19 = Index;
          }
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            FVar25.Data = local_248.Data.AllocatorInstance.Data;
          }
          EVar12 = EVar19;
          if ((int)EVar13 < (int)EVar19) {
            EVar12 = EVar13;
          }
          EVar13 = EVar24;
          if (0 < (int)EVar12) {
            EVar13 = EVar12;
          }
          ::FString::FString(&local_1d8,
                             (wchar_t *)
                             (FVar25.Data + ((longlong)(int)EVar19 - (longlong)(int)EVar13) * 2));
          EVar13 = local_1d8.Data.ArrayNum;
          local_258 = local_1d8.Data.AllocatorInstance.Data;
          local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.Data.ArrayNum = 0;
          local_1d8.Data.ArrayMax = 0;
          EVar12 = EVar23;
        }
      }
    }
    goto LAB_145ecad12;
  }
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar25.Data = local_248.Data.AllocatorInstance.Data;
  }
  wVar5 = *(wchar_t *)FVar25.Data;
  while ((wVar5 != L'\0' && (wVar5 != L'@'))) {
    pFVar17 = FVar25.Data + 2;
    FVar25.Data = FVar25.Data + 2;
    wVar5 = *(wchar_t *)pFVar17;
  }
  if (*(wchar_t *)FVar25.Data == L'@') {
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_248.Data.ArrayNum != 0) {
      FVar16.Data = local_248.Data.AllocatorInstance.Data;
    }
    EVar11 = (ESortBy)((longlong)FVar25.Data - (longlong)FVar16.Data >> 1);
    if (local_248.Data.ArrayNum == 0) {
      EVar18 = EVar24;
      if ((int)EVar11 < 0) {
        EVar18 = EVar11;
      }
      EVar11 = EVar20;
      if (0 < (int)EVar18) {
        EVar11 = EVar18;
      }
LAB_145ecab3d:
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    else {
      EVar18 = local_248.Data.ArrayNum - Name;
      if ((int)EVar11 < (int)(local_248.Data.ArrayNum - Name)) {
        EVar18 = EVar11;
      }
      EVar11 = Index;
      if (0 < (int)EVar18) {
        EVar11 = EVar18;
      }
      FVar16.Data = local_248.Data.AllocatorInstance.Data;
      if (local_248.Data.ArrayNum == 0) goto LAB_145ecab3d;
    }
    ::FString::ConstructFromPtrSize(&local_1e8,(wchar_t *)FVar16.Data,EVar11);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    local_238.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
    local_238.Data.ArrayNum = local_1e8.Data.ArrayNum;
    local_238.Data.ArrayMax = local_1e8.Data.ArrayMax;
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220 = _wtoi((wchar_t *)(FVar25.Data + 2));
    cVar27 = '\x01';
    local_res20 = CONCAT31(local_res20._1_3_,1);
  }
  else {
    EVar11 = local_248.Data.ArrayNum - Name;
    if (local_248.Data.ArrayNum == 0) {
      EVar11 = EVar24;
    }
    ::FString::AssignRange(&local_238,(wchar_t *)local_248.Data.AllocatorInstance.Data,EVar11);
  }
  iVar14 = ::FString::Find(&local_238,L"*",1,IgnoreCase,FromStart,-1);
  FVar25.Data = local_238.Data.AllocatorInstance.Data;
  iVar10 = local_238.Data.ArrayNum;
  if (iVar14 == -1) {
    pFVar2 = &(this->Requested).Name;
    EVar11 = Size;
    uVar15 = local_1b0[0];
    if (cVar27 != '\0') {
      uVar15 = local_220;
    }
    if (pFVar2 != &local_238) {
      lVar26 = (longlong)local_238.Data.ArrayNum;
      piVar4 = &(this->Requested).Name.Data.ArrayMax;
      iVar14 = *piVar4;
      local_268.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
      (this->Requested).Name.Data.ArrayNum = local_238.Data.ArrayNum;
      if ((local_238.Data.ArrayNum == 0) && (iVar14 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_238.Data.ArrayNum,iVar14,(ForAnyElementType *)pFVar2,
                   local_238.Data.ArrayNum,piVar4);
        if (iVar10 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,local_268.Data.AllocatorInstance.Data,
                 lVar26 * 2);
        }
      }
      cVar27 = (char)local_res20;
    }
    pTVar3 = &(this->Requested).Version;
    if ((TOptional<unsigned_int> *)local_1b0 != pTVar3) {
      if (cVar27 == '\0') {
        EVar13 = EVar24;
        if ((this->Requested).Version.bIsSet != false) {
          (this->Requested).Version.bIsSet = false;
        }
      }
      else {
        pTVar3->TypedValue = uVar15;
        (this->Requested).Version.bIsSet = true;
      }
    }
  }
  else {
    lVar26 = (longlong)local_238.Data.ArrayNum;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210._0_4_ = local_238.Data.ArrayNum;
    local_1c8 = pFVar22;
    local_1c0 = local_238.Data.ArrayNum;
    local_1bc = EVar24;
    if (local_238.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_238.Data.ArrayNum,0,&local_218,local_238.Data.ArrayNum,
                 (int *)((longlong)&local_210 + 4));
      memcpy(local_218.Data,FVar25.Data,lVar26 * 2);
      local_1c8 = local_218.Data;
      local_1c0 = (int)local_210;
      local_1bc = local_210._4_4_;
    }
    EVar11 = 5;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210 = 0;
    local_1b8 = true;
  }
LAB_145ecad12:
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  FVar25.Data = local_238.Data.AllocatorInstance.Data;
  pFVar17 = local_258;
  if (EVar11 == Index) {
    DisplayHelp(local_res18);
    local_90 = false;
    DisplayResourceListToLog(this,(TOptional<FWildcardString> *)local_a0);
    pFVar17 = local_258;
    if ((local_90 != false) && (local_a0[0] != (void *)0x0)) {
      FMemory::Free(local_a0[0]);
      pFVar17 = local_258;
    }
  }
  else if (EVar11 == (Size|Name)) {
    DisplayHelp(local_res18);
    pFVar17 = local_258;
  }
  else if (EVar11 == Name) {
    pFVar2 = &(this->Requested).Name;
    if (pFVar2 != (FString *)local_80) {
      iVar10 = (this->Requested).Name.Data.ArrayMax;
      piVar4 = &(this->Requested).Name.Data.ArrayMax;
      (this->Requested).Name.Data.ArrayNum = 0;
      if (iVar10 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,iVar10,(ForAnyElementType *)pFVar2,0,piVar4);
      }
    }
    pFVar17 = local_258;
    if (((TOptional<unsigned_int> *)local_88 != &(this->Requested).Version) &&
       ((this->Requested).Version.bIsSet != false)) {
      (this->Requested).Version.bIsSet = false;
    }
  }
  else if (EVar11 == Size) {
    cVar27 = (char)local_res20;
    pFVar2 = &(this->Requested).Name;
    (this->Config).RGBMul = 1.0;
    (this->Config).AMul = 0.0;
    (this->Config).SingleChannel = -1;
    uVar15 = local_1a8[0];
    if ((char)local_res20 != '\0') {
      uVar15 = local_220;
    }
    (this->Config).SingleChannelMul = 0.0;
    (this->Config).Flags = None;
    (this->Config).InputUVMapping = PictureInPicture;
    (this->Config).ShaderOp = Frac;
    (this->Config).MipIndex = 0;
    (this->Config).ArrayIndex = 0;
    if (pFVar2 != &local_238) {
      iVar14 = local_238.Data.ArrayNum;
      lVar26 = (longlong)local_238.Data.ArrayNum;
      piVar4 = &(this->Requested).Name.Data.ArrayMax;
      iVar10 = *piVar4;
      (this->Requested).Name.Data.ArrayNum = local_238.Data.ArrayNum;
      if ((local_238.Data.ArrayNum == 0) && (iVar10 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_238.Data.ArrayNum,iVar10,(ForAnyElementType *)pFVar2,
                   local_238.Data.ArrayNum,piVar4);
        if (iVar14 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,FVar25.Data,lVar26 * 2);
        }
      }
    }
    pTVar3 = &(this->Requested).Version;
    if ((TOptional<unsigned_int> *)local_1a8 != pTVar3) {
      if (cVar27 == '\0') {
        if ((this->Requested).Version.bIsSet != false) {
          (this->Requested).Version.bIsSet = false;
        }
      }
      else {
        pTVar3->TypedValue = uVar15;
        (this->Requested).Version.bIsSet = true;
      }
    }
    FParse::Token(&local_268,&local_res10,false);
    pFVar8 = local_res18;
    fVar7 = __real_3f800000;
    while (1 < local_268.Data.ArrayNum) {
      pFVar17 = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        pFVar17 = local_268.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar17,L"uv0");
      if (iVar10 == 0) {
        (this->Config).InputUVMapping = LeftTop;
      }
      else {
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_268.Data.ArrayNum != 0) {
          FVar25.Data = local_268.Data.AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"uv1");
        if (iVar10 == 0) {
          (this->Config).InputUVMapping = Whole;
        }
        else {
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_268.Data.ArrayNum != 0) {
            FVar25.Data = local_268.Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"uv2");
          if (iVar10 == 0) {
            (this->Config).InputUVMapping = PixelPerfectCenter;
          }
          else {
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_268.Data.ArrayNum != 0) {
              FVar25.Data = local_268.Data.AllocatorInstance.Data;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"pip");
            if (iVar10 == 0) {
              (this->Config).InputUVMapping = PictureInPicture;
            }
            else {
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_268.Data.ArrayNum != 0) {
                FVar25.Data = local_268.Data.AllocatorInstance.Data;
              }
              iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"bmp");
              if (iVar10 == 0) {
                pEVar1 = &(this->Config).Flags;
                *pEVar1 = *pEVar1 | SaveBitmap;
              }
              else {
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_268.Data.ArrayNum != 0) {
                  FVar25.Data = local_268.Data.AllocatorInstance.Data;
                }
                iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"stencil");
                if (iVar10 == 0) {
                  pEVar1 = &(this->Config).Flags;
                  *pEVar1 = *pEVar1 | SaveBitmapAsStencil;
                }
                else {
                  FVar25.Data = (FScriptContainerElement *)L"";
                  if (local_268.Data.ArrayNum != 0) {
                    FVar25.Data = local_268.Data.AllocatorInstance.Data;
                  }
                  iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"frac");
                  if (iVar10 == 0) {
                    (this->Config).ShaderOp = Frac;
                  }
                  else {
                    FVar25.Data = (FScriptContainerElement *)L"";
                    if (local_268.Data.ArrayNum != 0) {
                      FVar25.Data = local_268.Data.AllocatorInstance.Data;
                    }
                    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"sat");
                    if (iVar10 == 0) {
                      (this->Config).ShaderOp = Saturate;
                    }
                    else {
                      EVar20 = local_268.Data.ArrayNum - Name;
                      if (local_268.Data.ArrayNum == 0) {
                        EVar20 = EVar24;
                      }
                      if (3 < (int)EVar20) {
                        EVar20 = Size|Name;
                      }
                      EVar13 = EVar24;
                      if (0 < (int)EVar20) {
                        EVar13 = EVar20;
                      }
                      FVar25.Data = (FScriptContainerElement *)L"";
                      if (local_268.Data.ArrayNum != 0) {
                        FVar25.Data = local_268.Data.AllocatorInstance.Data;
                      }
                      ::FString::ConstructFromPtrSize(&local_1a0,(wchar_t *)FVar25.Data,EVar13);
                      FVar25.Data = (FScriptContainerElement *)L"";
                      if (local_1a0.Data.ArrayNum != 0) {
                        FVar25.Data = local_1a0.Data.AllocatorInstance.Data;
                      }
                      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"mip");
                      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                      }
                      if (iVar10 == 0) {
                        EVar20 = local_268.Data.ArrayNum - 4;
                        EVar13 = local_268.Data.ArrayNum - Name;
                        if (local_268.Data.ArrayNum == 0) {
                          EVar20 = ~Size;
                          EVar13 = EVar21;
                        }
                        EVar11 = EVar13;
                        if ((int)EVar20 < (int)EVar13) {
                          EVar11 = EVar20;
                        }
                        EVar20 = EVar24;
                        if (0 < (int)EVar11) {
                          EVar20 = EVar11;
                        }
                        ::FString::RemoveAt(&local_268,0,EVar13 - EVar20,No);
                        FVar25.Data = (FScriptContainerElement *)L"";
                        if (local_268.Data.ArrayNum != 0) {
                          FVar25.Data = local_268.Data.AllocatorInstance.Data;
                        }
                        uVar15 = _wtoi((wchar_t *)FVar25.Data);
                        (this->Config).MipIndex = uVar15;
                      }
                      else {
                        EVar20 = local_268.Data.ArrayNum - Name;
                        if (local_268.Data.ArrayNum == 0) {
                          EVar20 = EVar23;
                        }
                        if (5 < (int)EVar20) {
                          EVar20 = 5;
                        }
                        EVar13 = EVar23;
                        if (0 < (int)EVar20) {
                          EVar13 = EVar20;
                        }
                        FVar25.Data = (FScriptContainerElement *)L"";
                        if (local_268.Data.ArrayNum != 0) {
                          FVar25.Data = local_268.Data.AllocatorInstance.Data;
                        }
                        ::FString::ConstructFromPtrSize(&local_190,(wchar_t *)FVar25.Data,EVar13);
                        FVar25.Data = (FScriptContainerElement *)L"";
                        if (local_190.Data.ArrayNum != 0) {
                          FVar25.Data = local_190.Data.AllocatorInstance.Data;
                        }
                        iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"index");
                        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_190.Data.AllocatorInstance.Data);
                        }
                        if (iVar10 == 0) {
                          EVar13 = local_268.Data.ArrayNum - Name;
                          EVar20 = local_268.Data.ArrayNum - 6;
                          if (local_268.Data.ArrayNum == 0) {
                            EVar13 = EVar21;
                            EVar20 = 0xfffffffb;
                          }
                          EVar11 = EVar13;
                          if ((int)EVar20 < (int)EVar13) {
                            EVar11 = EVar20;
                          }
                          EVar20 = EVar24;
                          if (0 < (int)EVar11) {
                            EVar20 = EVar11;
                          }
                          ::FString::RemoveAt(&local_268,0,EVar13 - EVar20,No);
                          FVar25.Data = (FScriptContainerElement *)L"";
                          if (local_268.Data.ArrayNum != 0) {
                            FVar25.Data = local_268.Data.AllocatorInstance.Data;
                          }
                          uVar15 = _wtoi((wchar_t *)FVar25.Data);
                          (this->Config).ArrayIndex = uVar15;
                        }
                        else {
                          EVar20 = local_268.Data.ArrayNum - Name;
                          if (local_268.Data.ArrayNum == 0) {
                            EVar20 = EVar24;
                          }
                          if (3 < (int)EVar20) {
                            EVar20 = Size|Name;
                          }
                          EVar13 = EVar24;
                          if (0 < (int)EVar20) {
                            EVar13 = EVar20;
                          }
                          FVar25.Data = (FScriptContainerElement *)L"";
                          if (local_268.Data.ArrayNum != 0) {
                            FVar25.Data = local_268.Data.AllocatorInstance.Data;
                          }
                          ::FString::ConstructFromPtrSize(&local_120,(wchar_t *)FVar25.Data,EVar13);
                          FVar25.Data = (FScriptContainerElement *)L"";
                          if (local_120.Data.ArrayNum != 0) {
                            FVar25.Data = local_120.Data.AllocatorInstance.Data;
                          }
                          iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"rgb");
                          if (iVar10 == 0) {
LAB_145ecb49c:
                            bVar9 = true;
                          }
                          else {
                            uVar15 = (uint)pFVar22;
                            pFVar22 = (FScriptContainerElement *)(ulonglong)(uVar15 | 2);
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar24;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar24;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_130,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_130.Data.ArrayNum != 0) {
                              FVar25.Data = local_130.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"a");
                            if (iVar10 == 0) goto LAB_145ecb49c;
                            pFVar22 = (FScriptContainerElement *)(ulonglong)(uVar15 | 6);
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar24;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar24;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_140,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_140.Data.ArrayNum != 0) {
                              FVar25.Data = local_140.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"r");
                            if (iVar10 == 0) goto LAB_145ecb49c;
                            pFVar22 = (FScriptContainerElement *)(ulonglong)(uVar15 | 0xe);
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar24;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar24;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_150,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_150.Data.ArrayNum != 0) {
                              FVar25.Data = local_150.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"g");
                            if (iVar10 == 0) goto LAB_145ecb49c;
                            pFVar22 = (FScriptContainerElement *)(ulonglong)(uVar15 | 0x1e);
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar24;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar24;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_160,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_160.Data.ArrayNum != 0) {
                              FVar25.Data = local_160.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"b");
                            if (iVar10 == 0) goto LAB_145ecb49c;
                            pFVar22 = (FScriptContainerElement *)(ulonglong)(uVar15 | 0x3e);
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar23;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar24;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_170,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_170.Data.ArrayNum != 0) {
                              FVar25.Data = local_170.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"*");
                            if (iVar10 == 0) goto LAB_145ecb49c;
                            pFVar22 = (FScriptContainerElement *)0x7e;
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar23;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar23;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_180,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_180.Data.ArrayNum != 0) {
                              FVar25.Data = local_180.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"/");
                            if (iVar10 == 0) goto LAB_145ecb49c;
                            bVar9 = false;
                          }
                          if ((((ulonglong)pFVar22 & 0x40) != 0) &&
                             (pFVar22 = (FScriptContainerElement *)
                                        (ulonglong)((uint)pFVar22 & 0xffffffbf),
                             local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_180.Data.AllocatorInstance.Data);
                          }
                          if ((((ulonglong)pFVar22 & 0x20) != 0) &&
                             (pFVar22 = (FScriptContainerElement *)
                                        (ulonglong)((uint)pFVar22 & 0xffffffdf),
                             local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_170.Data.AllocatorInstance.Data);
                          }
                          if ((((ulonglong)pFVar22 & 0x10) != 0) &&
                             (pFVar22 = (FScriptContainerElement *)
                                        (ulonglong)((uint)pFVar22 & 0xffffffef),
                             local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_160.Data.AllocatorInstance.Data);
                          }
                          if ((((ulonglong)pFVar22 & 8) != 0) &&
                             (pFVar22 = (FScriptContainerElement *)
                                        (ulonglong)((uint)pFVar22 & 0xfffffff7),
                             local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_150.Data.AllocatorInstance.Data);
                          }
                          if ((((ulonglong)pFVar22 & 4) != 0) &&
                             (pFVar22 = (FScriptContainerElement *)
                                        (ulonglong)((uint)pFVar22 & 0xfffffffb),
                             local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_140.Data.AllocatorInstance.Data);
                          }
                          uVar15 = (uint)pFVar22;
                          if ((((ulonglong)pFVar22 & 2) != 0) &&
                             (uVar15 = uVar15 & 0xfffffffd,
                             local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             )) {
                            FMemory::Free(local_130.Data.AllocatorInstance.Data);
                          }
                          pFVar22 = (FScriptContainerElement *)(ulonglong)uVar15;
                          if (local_120.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_120.Data.AllocatorInstance.Data);
                          }
                          if (bVar9) {
                            (this->Config).SingleChannel = -1;
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar23;
                            }
                            if (3 < (int)EVar20) {
                              EVar20 = Size|Name;
                            }
                            EVar13 = EVar23;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize
                                      (&local_110,(wchar_t *)FVar25.Data,EVar13);
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_110.Data.ArrayNum != 0) {
                              FVar25.Data = local_110.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"rgb")
                            ;
                            if (local_110.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_110.Data.AllocatorInstance.Data);
                            }
                            if (iVar10 == 0) {
                              EVar13 = local_268.Data.ArrayNum - Name;
                              EVar20 = local_268.Data.ArrayNum - 4;
                              if (local_268.Data.ArrayNum == 0) {
                                EVar13 = EVar21;
                                EVar20 = ~Size;
                              }
                              EVar11 = EVar13;
                              if ((int)EVar20 < (int)EVar13) {
                                EVar11 = EVar20;
                              }
                              EVar20 = EVar23;
                              if (0 < (int)EVar11) {
                                EVar20 = EVar11;
                              }
                              ::FString::RemoveAt(&local_268,0,EVar13 - EVar20,No);
                            }
                            else {
                              EVar20 = local_268.Data.ArrayNum - Name;
                              if (local_268.Data.ArrayNum == 0) {
                                EVar20 = EVar23;
                              }
                              if (1 < (int)EVar20) {
                                EVar20 = Name;
                              }
                              EVar13 = EVar23;
                              if (0 < (int)EVar20) {
                                EVar13 = EVar20;
                              }
                              FVar25.Data = (FScriptContainerElement *)L"";
                              if (local_268.Data.ArrayNum != 0) {
                                FVar25.Data = local_268.Data.AllocatorInstance.Data;
                              }
                              ::FString::ConstructFromPtrSize
                                        (&local_100,(wchar_t *)FVar25.Data,EVar13);
                              FVar25.Data = (FScriptContainerElement *)L"";
                              if (local_100.Data.ArrayNum != 0) {
                                FVar25.Data = local_100.Data.AllocatorInstance.Data;
                              }
                              iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"r")
                              ;
                              if (local_100.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_100.Data.AllocatorInstance.Data);
                              }
                              if (iVar10 == 0) {
                                (this->Config).SingleChannel = 0;
                              }
                              else {
                                EVar20 = local_268.Data.ArrayNum - Name;
                                if (local_268.Data.ArrayNum == 0) {
                                  EVar20 = EVar23;
                                }
                                if (1 < (int)EVar20) {
                                  EVar20 = Name;
                                }
                                EVar13 = EVar23;
                                if (0 < (int)EVar20) {
                                  EVar13 = EVar20;
                                }
                                FVar25.Data = (FScriptContainerElement *)L"";
                                if (local_268.Data.ArrayNum != 0) {
                                  FVar25.Data = local_268.Data.AllocatorInstance.Data;
                                }
                                ::FString::ConstructFromPtrSize
                                          (&local_f0,(wchar_t *)FVar25.Data,EVar13);
                                FVar25.Data = (FScriptContainerElement *)L"";
                                if (local_f0.Data.ArrayNum != 0) {
                                  FVar25.Data = local_f0.Data.AllocatorInstance.Data;
                                }
                                iVar10 = FGenericPlatformStricmp::Stricmp
                                                   ((wchar_t *)FVar25.Data,L"g");
                                if (local_f0.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                                }
                                if (iVar10 == 0) {
                                  (this->Config).SingleChannel = 1;
                                }
                                else {
                                  EVar20 = local_268.Data.ArrayNum - Name;
                                  if (local_268.Data.ArrayNum == 0) {
                                    EVar20 = EVar23;
                                  }
                                  if (1 < (int)EVar20) {
                                    EVar20 = Name;
                                  }
                                  EVar13 = EVar23;
                                  if (0 < (int)EVar20) {
                                    EVar13 = EVar20;
                                  }
                                  FVar25.Data = (FScriptContainerElement *)L"";
                                  if (local_268.Data.ArrayNum != 0) {
                                    FVar25.Data = local_268.Data.AllocatorInstance.Data;
                                  }
                                  ::FString::ConstructFromPtrSize
                                            (&local_e0,(wchar_t *)FVar25.Data,EVar13);
                                  FVar25.Data = (FScriptContainerElement *)L"";
                                  if (local_e0.Data.ArrayNum != 0) {
                                    FVar25.Data = local_e0.Data.AllocatorInstance.Data;
                                  }
                                  iVar10 = FGenericPlatformStricmp::Stricmp
                                                     ((wchar_t *)FVar25.Data,L"b");
                                  if (local_e0.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                                  }
                                  if (iVar10 == 0) {
                                    (this->Config).SingleChannel = 2;
                                  }
                                  else {
                                    EVar20 = local_268.Data.ArrayNum - Name;
                                    if (local_268.Data.ArrayNum == 0) {
                                      EVar20 = EVar23;
                                    }
                                    if (1 < (int)EVar20) {
                                      EVar20 = Name;
                                    }
                                    EVar13 = EVar23;
                                    if (0 < (int)EVar20) {
                                      EVar13 = EVar20;
                                    }
                                    FVar25.Data = (FScriptContainerElement *)L"";
                                    if (local_268.Data.ArrayNum != 0) {
                                      FVar25.Data = local_268.Data.AllocatorInstance.Data;
                                    }
                                    ::FString::ConstructFromPtrSize
                                              (&local_d0,(wchar_t *)FVar25.Data,EVar13);
                                    FVar25.Data = (FScriptContainerElement *)L"";
                                    if (local_d0.Data.ArrayNum != 0) {
                                      FVar25.Data = local_d0.Data.AllocatorInstance.Data;
                                    }
                                    iVar10 = FGenericPlatformStricmp::Stricmp
                                                       ((wchar_t *)FVar25.Data,L"a");
                                    if (local_d0.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                                    }
                                    if (iVar10 == 0) {
                                      (this->Config).SingleChannel = 3;
                                    }
                                  }
                                }
                              }
                            }
                            if (-1 < (this->Config).SingleChannel) {
                              EVar20 = local_268.Data.ArrayNum - Size;
                              EVar13 = local_268.Data.ArrayNum - Name;
                              if (local_268.Data.ArrayNum == 0) {
                                EVar20 = ~Index;
                                EVar13 = EVar21;
                              }
                              EVar11 = EVar13;
                              if ((int)EVar20 < (int)EVar13) {
                                EVar11 = EVar20;
                              }
                              EVar20 = EVar23;
                              if (0 < (int)EVar11) {
                                EVar20 = EVar11;
                              }
                              ::FString::RemoveAt(&local_268,0,EVar13 - EVar20,No);
                              (this->Config).SingleChannelMul = 1.0;
                              (this->Config).RGBMul = 0.0;
                            }
                            EVar20 = local_268.Data.ArrayNum - Name;
                            if (local_268.Data.ArrayNum == 0) {
                              EVar20 = EVar23;
                            }
                            if (1 < (int)EVar20) {
                              EVar20 = Name;
                            }
                            EVar13 = EVar23;
                            if (0 < (int)EVar20) {
                              EVar13 = EVar20;
                            }
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_268.Data.ArrayNum != 0) {
                              FVar25.Data = local_268.Data.AllocatorInstance.Data;
                            }
                            ::FString::ConstructFromPtrSize(&local_c0,(wchar_t *)FVar25.Data,EVar13)
                            ;
                            FVar25.Data = (FScriptContainerElement *)L"";
                            if (local_c0.Data.ArrayNum != 0) {
                              FVar25.Data = local_c0.Data.AllocatorInstance.Data;
                            }
                            iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"*");
                            if (local_c0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                            }
                            if (iVar10 == 0) {
                              EVar20 = local_268.Data.ArrayNum - Size;
                              EVar13 = local_268.Data.ArrayNum - Name;
                              if (local_268.Data.ArrayNum == 0) {
                                EVar20 = ~Index;
                                EVar13 = EVar21;
                              }
                              EVar11 = EVar13;
                              if ((int)EVar20 < (int)EVar13) {
                                EVar11 = EVar20;
                              }
                              EVar20 = EVar23;
                              if (0 < (int)EVar11) {
                                EVar20 = EVar11;
                              }
                              ::FString::RemoveAt(&local_268,0,EVar13 - EVar20,No);
                              FVar25.Data = (FScriptContainerElement *)L"";
                              if (local_268.Data.ArrayNum != 0) {
                                FVar25.Data = local_268.Data.AllocatorInstance.Data;
                              }
                              dVar28 = _wtof((wchar_t *)FVar25.Data);
                              fVar29 = (float)dVar28;
                            }
                            else {
                              EVar20 = local_268.Data.ArrayNum - Name;
                              if (local_268.Data.ArrayNum == 0) {
                                EVar20 = EVar23;
                              }
                              if (1 < (int)EVar20) {
                                EVar20 = Name;
                              }
                              EVar13 = Index;
                              if (0 < (int)EVar20) {
                                EVar13 = EVar20;
                              }
                              FVar25.Data = (FScriptContainerElement *)L"";
                              if (local_268.Data.ArrayNum != 0) {
                                FVar25.Data = local_268.Data.AllocatorInstance.Data;
                              }
                              ::FString::ConstructFromPtrSize
                                        (&local_b0,(wchar_t *)FVar25.Data,EVar13);
                              FVar25.Data = (FScriptContainerElement *)L"";
                              if (local_b0.Data.ArrayNum != 0) {
                                FVar25.Data = local_b0.Data.AllocatorInstance.Data;
                              }
                              iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"/")
                              ;
                              if (local_b0.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                              }
                              fVar29 = fVar7;
                              if (iVar10 == 0) {
                                EVar20 = local_268.Data.ArrayNum - Size;
                                EVar13 = local_268.Data.ArrayNum - Name;
                                if (local_268.Data.ArrayNum == 0) {
                                  EVar20 = ~Index;
                                  EVar13 = EVar21;
                                }
                                EVar11 = EVar13;
                                if ((int)EVar20 < (int)EVar13) {
                                  EVar11 = EVar20;
                                }
                                EVar20 = EVar23;
                                if (0 < (int)EVar11) {
                                  EVar20 = EVar11;
                                }
                                ::FString::RemoveAt(&local_268,0,EVar13 - EVar20,No);
                                FVar25.Data = (FScriptContainerElement *)L"";
                                if (local_268.Data.ArrayNum != 0) {
                                  FVar25.Data = local_268.Data.AllocatorInstance.Data;
                                }
                                dVar28 = _wtof((wchar_t *)FVar25.Data);
                                fVar29 = fVar7 / (float)dVar28;
                              }
                            }
                            (this->Config).RGBMul = fVar29 * (this->Config).RGBMul;
                            (this->Config).SingleChannelMul =
                                 fVar29 * (this->Config).SingleChannelMul;
                            (this->Config).AMul = fVar29 * (this->Config).AMul;
                          }
                          else {
                            FOutputDevice::LogfImpl
                                      (pFVar8,L"Error: parameter \"%s\" not recognized");
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      FParse::Token(&local_268,&local_res10,false);
    }
    pFVar17 = local_258;
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
      pFVar17 = local_258;
    }
  }
  else if (EVar11 == 4) {
    FParse::Token(&local_208,&local_res10,false);
    pFVar8 = local_res18;
    while (1 < local_208.Data.ArrayNum) {
      pFVar17 = (FScriptContainerElement *)L"";
      if (local_208.Data.ArrayNum != 0) {
        pFVar17 = local_208.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar17,L"byname");
      if (iVar10 == 0) {
        pFVar22 = (FScriptContainerElement *)&DAT_00000001;
      }
      else {
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_208.Data.ArrayNum != 0) {
          FVar25.Data = local_208.Data.AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"bysize");
        if (iVar10 == 0) {
          pFVar22 = (FScriptContainerElement *)&DAT_00000002;
        }
        else {
          FOutputDevice::LogfImpl(pFVar8,L"Error: parameter \"%s\" not recognized");
        }
      }
      EVar20 = (ESortBy)pFVar22;
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      FParse::Token(&local_208,&local_res10,false);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    DisplayPoolResourceListToLog(this,EVar20);
    pFVar17 = local_258;
  }
  else if (EVar11 == 5) {
    FParse::Token(&local_1f8,&local_res10,false);
    pFVar8 = local_res18;
    iVar10 = local_1f8.Data.ArrayNum;
    while (1 < iVar10) {
      FOutputDevice::LogfImpl(pFVar8,L"Error: parameter \"%s\" not recognized");
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      FParse::Token(&local_1f8,&local_res10,false);
      iVar10 = local_1f8.Data.ArrayNum;
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    DisplayResourceListToLog(this,(TOptional<FWildcardString> *)&local_1c8);
    pFVar17 = local_258;
  }
  else if (EVar11 == 6) {
    DisplayViewListToLog(this);
    pFVar17 = local_258;
  }
  else if (EVar11 == 7) {
    (this->Requested).ViewUniqueId = EVar12;
    EVar20 = EVar13 - Name;
    if (EVar13 == Index) {
      EVar20 = EVar21;
    }
    ::FString::AssignRange(&(this->Requested).ViewName,(wchar_t *)local_258,EVar20);
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                       ,0x11b,L"");
    pFVar17 = local_258;
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->State == Inactive) {
    this->State = TrackResources;
  }
  if ((local_1b8 != false) && (local_1c8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1c8);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  return;
}

// SetCheckPoint @ 145ecc250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisualizeTexture::SetCheckPoint
          (FVisualizeTexture *this,FRDGBuilder *param_1,IPooledRenderTarget *param_2)

{
  uint *puVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  FRDGTexture *pFVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int local_res18 [2];
  TRefCountPtr<IPooledRenderTarget> local_res20;
  FString *local_48;
  uint local_40 [2];
  FString local_38;
  
  bVar4 = IsInRenderingThread();
  pwVar11 = L"";
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\VisualizeTexture.cpp"
                         ,0x431,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 != (IPooledRenderTarget *)0x0) &&
     (puVar7 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x10))(param_2),
     (*(byte *)(puVar7 + 4) & 8) != 0)) {
    bVar4 = false;
    pwVar2 = (wchar_t *)*puVar7;
    ::FString::FString(&local_38,pwVar2);
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayNum = 0;
    }
    else {
      local_38.Data.ArrayNum = local_38.Data.ArrayNum + -1;
      pwVar11 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(local_38.Data.ArrayNum,pwVar11);
    iVar6 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->VersionCountMap,uVar5,&local_38);
    if ((iVar6 == -1) ||
       (lVar10 = (longlong)iVar6 * 0x20 + *(longlong *)&this->VersionCountMap, lVar10 == 0)) {
      local_48 = &local_38;
      TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->VersionCountMap,(uint)local_res18,
                 (TKeyInitializer<FString_&&> *)(ulonglong)uVar5,(bool *)&local_48);
      lVar10 = (longlong)local_res18[0] * 0x20 + *(longlong *)&this->VersionCountMap;
    }
    puVar1 = (uint *)(lVar10 + 0x10);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar5 = local_40[0];
    if ((((1 < (this->Requested).Name.Data.ArrayNum) &&
         (iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(this->Requested).Name.Data.AllocatorInstance.Data,pwVar2),
         uVar5 = local_40[0], iVar6 == 0)) &&
        (((this->Requested).Version.bIsSet == false ||
         (puVar8 = TOptional<unsigned_int>::GetValue(&(this->Requested).Version),
         uVar5 = local_40[0], *puVar1 == *puVar8)))) && (uVar5 = local_40[0], puVar1 != local_40)) {
      bVar4 = true;
      uVar5 = *puVar1;
    }
    *puVar1 = *puVar1 + 1;
    if (bVar4) {
      local_res20.Reference = param_2;
      (**(code **)(param_2->_padding_ + 0x30))(param_2);
      pFVar9 = FRDGBuilder::RegisterExternalTexture(param_1,&local_res20,None);
      if (local_res20.Reference != (IPooledRenderTarget *)0x0) {
        (**(code **)((local_res20.Reference)->_padding_ + 0x38))();
      }
      CreateContentCapturePass(this,param_1,pFVar9,uVar5);
    }
  }
  return;
}

// SetCheckPoint @ 145ecc440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FVisualizeTexture::SetCheckPoint
          (FVisualizeTexture *this,FRHICommandListImmediate *param_1,IPooledRenderTarget *param_2)

{
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  local_808.EventFormat = L"";
  local_808.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_808.FormattedEventName.Data.ArrayNum = 0;
  local_808.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_808,None,GMaxRHIShaderPlatform);
  SetCheckPoint(this,&local_7e8,param_2);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

// SetSceneTextures @ 145ecc6d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVisualizeTexture::SetSceneTextures
          (FVisualizeTexture *this,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TIntPoint<int> param_2,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  int iStackX_1c;
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  iStackX_1c = param_2.field0_0x0._4_4_;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRDGTexture_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    iVar4 = param_2.field0_0x0._0_4_;
    if (param_2.field0_0x0._0_4_ < *(int *)(lVar3 + 0x150)) {
      iVar4 = *(int *)(lVar3 + 0x150);
    }
    *(int *)(lVar3 + 0x150) = iVar4;
    iVar4 = iStackX_1c;
    if (iStackX_1c < *(int *)(lVar3 + 0x154)) {
      iVar4 = *(int *)(lVar3 + 0x154);
    }
    pFVar5 = pFVar5 + 8;
    *(int *)(lVar3 + 0x154) = iVar4;
  }
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>::operator=
            (&this->FamilyViewRects,param_3);
  return;
}

// ShouldCapture @ 145ecc770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TOptional<unsigned_int> __thiscall
FVisualizeTexture::ShouldCapture(FVisualizeTexture *this,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined4 in_register_00000084;
  int local_res8 [2];
  FString *local_res10;
  FString local_38;
  
  *(undefined1 *)(param_1 + 2) = 0;
  ::FString::FString(&local_38,(wchar_t *)CONCAT44(in_register_00000084,param_2));
  if (local_38.Data.ArrayNum == 0) {
    pwVar5 = L"";
    local_38.Data.ArrayNum = 0;
  }
  else {
    local_38.Data.ArrayNum = local_38.Data.ArrayNum + -1;
    pwVar5 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(local_38.Data.ArrayNum,pwVar5);
  iVar2 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->VersionCountMap,uVar1,&local_38);
  if ((iVar2 == -1) ||
     (lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this->VersionCountMap, lVar4 == 0)) {
    local_res10 = &local_38;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->VersionCountMap,(uint)local_res8,
               (TKeyInitializer<FString_&&> *)(ulonglong)uVar1,(bool *)&local_res10);
    lVar4 = (longlong)local_res8[0] * 0x20 + *(longlong *)&this->VersionCountMap;
  }
  pwVar5 = (wchar_t *)(lVar4 + 0x10);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (1 < (this->Requested).Name.Data.ArrayNum) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Requested).Name.Data.AllocatorInstance.Data,
                       (wchar_t *)CONCAT44(in_register_00000084,param_2));
    if (iVar2 == 0) {
      if ((this->Requested).Version.bIsSet != false) {
        puVar3 = TOptional<unsigned_int>::GetValue(&(this->Requested).Version);
        if (*(uint *)pwVar5 != *puVar3) goto LAB_145ecc877;
      }
      if (pwVar5 != param_1) {
        *(uint *)param_1 = *(uint *)pwVar5;
        *(undefined1 *)(param_1 + 2) = 1;
      }
    }
  }
LAB_145ecc877:
  *(uint *)pwVar5 = *(uint *)pwVar5 + 1;
  return (TOptional<unsigned_int>)param_1;
}

// Visualize @ 145ecd270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVisualizeTexture::Visualize
          (FVisualizeTexture *this,FString *param_1,TOptional<unsigned_int> param_2)

{
  TOptional<unsigned_int> *pTVar1;
  
  ::FString::operator=(&(this->Requested).Name,param_1);
  pTVar1 = &(this->Requested).Version;
  if (param_2 != (TOptional<unsigned_int>)pTVar1) {
    if (*(char *)((longlong)param_2 + 4) != '\0') {
      pTVar1->TypedValue = *(uint *)param_2;
      (this->Requested).Version.bIsSet = true;
      return;
    }
    if ((this->Requested).Version.bIsSet != false) {
      (this->Requested).Version.bIsSet = false;
    }
  }
  return;
}

