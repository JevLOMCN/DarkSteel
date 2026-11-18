// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 13

// CreateRenderTarget @ 14e5ef5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureRenderTarget2D * __cdecl
FGLTFTextureUtilities::CreateRenderTarget(TIntPoint<int> *param_1,bool param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTextureRenderTarget2D *this;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (UTextureRenderTarget2D *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UTextureRenderTarget2D::InitCustomFormat
            (this,(param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y,
             param_2 * '\b' + PF_B8G8R8A8,true);
  *(undefined4 *)&this->_padding_ = 0x400ccccd;
  return this;
}

// DrawTexture @ 14e5f0c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FGLTFTextureUtilities::DrawTexture(UTextureRenderTarget2D *param_1,UTexture2D *param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  char cVar2;
  FTextureRenderTargetResource *pFVar3;
  FRenderTarget *pFVar4;
  FTextureResource *pFVar5;
  undefined **ppuVar6;
  FRenderTarget *pFVar7;
  FRenderTarget *pFVar8;
  undefined1 auStackY_238 [32];
  FGameTime local_200;
  FCanvasTileItem local_1e8;
  FCanvas local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar3 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_1)
  ;
  pFVar7 = (FRenderTarget *)0x0;
  pFVar8 = (FRenderTarget *)&pFVar3->_padding_;
  if (pFVar3 == (FTextureRenderTargetResource *)0x0) {
    pFVar8 = pFVar7;
  }
  if (pFVar8 == (FRenderTarget *)0x0) {
    return false;
  }
  cVar2 = (char)param_2->_padding_;
  if (cVar2 == '\x01') {
    pFVar4 = ::operator_new(0x10);
    if (pFVar4 == (FRenderTarget *)0x0) goto LAB_14e5f0c98;
    ppuVar6 = &___7FGLTFNormalMapPreview__6B_;
  }
  else {
    if ((((cVar2 != '\x06') && (cVar2 != '\n')) && (cVar2 != '\f')) ||
       (pFVar4 = ::operator_new(0x10), pFVar7 = (FRenderTarget *)0x0, pFVar4 == (FRenderTarget *)0x0
       )) goto LAB_14e5f0c98;
    ppuVar6 = &___7FGLTFSimpleTexture2DPreview__6B_;
  }
  pFVar4->_padding_ = (longlong)ppuVar6;
  (pFVar4->RenderTargetTextureRHI).Reference = (FRHITexture *)&DAT_00000001;
  pFVar7 = pFVar4;
LAB_14e5f0c98:
  local_200.DeltaRealTimeSeconds = 0.0;
  local_200.DeltaWorldTimeSeconds = 0.0;
  local_200.RealTimeSeconds = 0.0;
  local_200.WorldTimeSeconds = 0.0;
  FCanvas::FCanvas(&local_138,pFVar8,(FHitProxyConsumer *)0x0,&local_200,GMaxRHIFeatureLevel,
                   __real_3f800000);
  pFVar5 = UTexture::GetResource((UTexture *)param_2);
  FCanvasTileItem::FCanvasTileItem
            (&local_1e8,&UE::Math::TVector2<double>::ZeroVector,(FTexture *)pFVar5,
             &FLinearColor::White);
  local_1e8._padding_ = (longlong)pFVar7;
  FCanvasTileItem::Draw(&local_1e8,&local_138);
  FCanvas::Flush_GameThread(&local_138,false);
  FlushRenderingCommands();
  FCanvas::SetRenderTarget_GameThread(&local_138,(FRenderTarget *)0x0);
  FlushRenderingCommands();
  local_1e8._padding_ = (longlong)&___7FCanvasItem__6B_;
  FCanvas::~FCanvas(&local_138);
  if (pFVar7 != (FRenderTarget *)0x0) {
    pTVar1 = &pFVar7->RenderTargetTextureRHI;
    *(int *)&pTVar1->Reference = *(int *)&pTVar1->Reference + -1;
    if (*(int *)&pTVar1->Reference == 0) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return true;
}

// FlipGreenChannel @ 14e5f2400

void __cdecl
FGLTFTextureUtilities::FlipGreenChannel(TArray<FColor,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FColor,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3[1] = (FScriptContainerElement)~(byte)pFVar3[1];
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// FullyLoad @ 14e5f2520

void __cdecl FGLTFTextureUtilities::FullyLoad(UTexture *param_1)

{
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)param_1,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)param_1,false,false);
  return;
}

// GetDefaultFilter @ 14e5f5cd0

TextureFilter __cdecl FGLTFTextureUtilities::GetDefaultFilter(TextureGroup param_1)

{
  ETextureSamplerFilter EVar1;
  UDeviceProfileManager *this;
  UDeviceProfile *this_00;
  UTextureLODSettings *this_01;
  FTextureLODGroup *pFVar2;
  
  this = UDeviceProfileManager::Get(false);
  this_00 = UDeviceProfileManager::GetActiveProfile(this);
  this_01 = UDeviceProfile::GetTextureLODSettings(this_00);
  pFVar2 = UTextureLODSettings::GetTextureLODGroup(this_01,param_1);
  EVar1 = pFVar2->Filter;
  if (EVar1 == Point) {
    return TF_Nearest;
  }
  if (EVar1 != Bilinear) {
    if (((EVar1 != Trilinear) && (EVar1 != AnisotropicPoint)) && (EVar1 != AnisotropicLinear)) {
      return TF_MAX;
    }
    return TF_Trilinear;
  }
  return TF_Bilinear;
}

// GetInGameSize @ 14e5f6510

TIntPoint<int> __cdecl FGLTFTextureUtilities::GetInGameSize(UTexture *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  UTexture2D *in_RDX;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (float)(**(code **)(in_RDX->_padding_ + 0x368))();
  fVar1 = __real_bf000000;
  fVar8 = __real_bf000000 - (fVar7 + fVar7);
  fVar7 = (float)(**(code **)(in_RDX->_padding_ + 0x370))();
  pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if (((*(int *)(in_RDX->_padding_ + 0x38) < iVar3) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(in_RDX->_padding_ + 0x30) + (longlong)iVar3 * 8)
       != &pUVar5->_padding_)) || (in_RDX == (UTexture2D *)0x0)) {
    bVar2 = (**(code **)(in_RDX->_padding_ + 0x2f8))();
  }
  else {
    iVar3 = UTexture2D::GetNumMipsAllowed(in_RDX,true);
    iVar4 = UTexture2D::GetNumMips(in_RDX);
    bVar2 = (char)iVar4 - (char)iVar3;
  }
  iVar6 = -((int)ROUND(fVar8) >> 1) >> (bVar2 & 0x1f);
  iVar4 = -((int)ROUND(fVar1 - (fVar7 + fVar7)) >> 1) >> (bVar2 & 0x1f);
  iVar3 = 1;
  if (1 < iVar6) {
    iVar3 = iVar6;
  }
  *(int *)&param_1->_padding_ = iVar3;
  iVar3 = 1;
  if (1 < iVar4) {
    iVar3 = iVar4;
  }
  *(int *)((longlong)&param_1->_padding_ + 4) = iVar3;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetMipBias @ 14e5f7a70

int __cdecl FGLTFTextureUtilities::GetMipBias(UTexture *param_1)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  
  if (param_1 != (UTexture *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      iVar1 = UTexture2D::GetNumMipsAllowed((UTexture2D *)param_1,true);
      iVar2 = UTexture2D::GetNumMips((UTexture2D *)param_1);
      return iVar2 - iVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014e5f7ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  return iVar1;
}

// Is2D @ 14e601720

bool __cdecl FGLTFTextureUtilities::Is2D(UTexture *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      return false;
    }
  }
  return true;
}

// IsAlphaless @ 14e601790

bool __cdecl FGLTFTextureUtilities::IsAlphaless(EPixelFormat param_1)

{
  switch(param_1) {
  case PF_DXT1:
  case PF_FloatRGB:
  case PF_BC5:
  case PF_FloatR11G11B10:
  case PF_R5G6B5_UNORM:
  case PF_BC4:
  case PF_ATC_RGB:
  case PF_ETC1:
  case PF_ETC2_RGB:
    return true;
  default:
    return false;
  }
}

// IsCubemap @ 14e601880

bool __cdecl FGLTFTextureUtilities::IsCubemap(UTexture *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UTextureCube_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      return false;
    }
  }
  return true;
}

// IsHDR @ 14e601ac0

bool __cdecl FGLTFTextureUtilities::IsHDR(UTexture *param_1)

{
  uchar uVar1;
  
  uVar1 = (param_1->CompressionSettings).Value;
  if ((uVar1 - 6 & 0xfb) != 0) {
    return uVar1 == '\f';
  }
  return true;
}

// ReadPixels @ 14e609b40

bool __cdecl
FGLTFTextureUtilities::ReadPixels
          (UTextureRenderTarget2D *param_1,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 uVar1;
  FTextureResource *pFVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  undefined4 local_10;
  
  pFVar2 = UTexture::GetResource((UTexture *)param_1);
  if (pFVar2 == (FTextureResource *)0x0) {
    return false;
  }
  local_48 = 6;
  uStack_40 = uStack_40 & 0xffffff00;
  local_38 = 0;
  uStack_34 = 0;
  local_18 = (ulonglong)uStack_36 << 0x10;
  local_58 = 0;
  uStack_50 = 0;
  local_10 = 0;
  uStack_3c = 0x467a0000;
  local_28 = 6;
  uStack_24 = 0;
  uStack_20 = uStack_40;
  uStack_1c = 0x467a0000;
  uVar1 = (**(code **)(pFVar2[1]._padding_ + 0x60))(pFVar2 + 1,param_2,&local_28,&local_58);
  return (bool)uVar1;
}

// TransformColorSpace @ 14e614f50

void __cdecl
FGLTFTextureUtilities::TransformColorSpace
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  FLinearColor_u_0 local_78 [6];
  
  fVar6 = __real_437f0000;
  fVar5 = __real_3b808081;
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  if (param_2 != param_3) {
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    if (param_3) {
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FColor,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar7 == pFVar1) break;
        local_78[0]._0_4_ = (float)(byte)pFVar7[2] * fVar5;
        local_78[0]._4_4_ = (float)(byte)pFVar7[1] * fVar5;
        local_78[0]._8_4_ = (float)(byte)*pFVar7 * fVar5;
        local_78[0]._12_4_ = (float)(byte)pFVar7[3] * fVar5;
        FLinearColor::ToFColorSRGB((FLinearColor *)&local_78[0]._s_0);
        *(undefined4 *)pFVar7 = local_res18;
        pFVar7 = pFVar7 + 4;
      }
    }
    else {
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FColor,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar7 == pFVar1) break;
        fVar8 = FLinearColor::sRGBToLinearTable[(byte)*pFVar7];
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (fVar3 <= fVar8) {
          fVar8 = fVar3;
        }
        fVar9 = FLinearColor::sRGBToLinearTable[(byte)pFVar7[1]];
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        if (fVar3 <= fVar9) {
          fVar9 = fVar3;
        }
        fVar10 = FLinearColor::sRGBToLinearTable[(byte)pFVar7[2]];
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if (fVar3 <= fVar10) {
          fVar10 = fVar3;
        }
        fVar11 = (float)(byte)pFVar7[3] * fVar5;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        if (fVar3 <= fVar11) {
          fVar11 = fVar3;
        }
        local_res18 = CONCAT13((char)(int)(fVar11 * fVar6 + fVar4),
                               CONCAT12((char)(int)(fVar10 * fVar6 + fVar4),
                                        CONCAT11((char)(int)(fVar9 * fVar6 + fVar4),
                                                 (char)(int)(fVar8 * fVar6 + fVar4))));
        *(undefined4 *)pFVar7 = local_res18;
        pFVar7 = pFVar7 + 4;
      }
    }
  }
  return;
}

