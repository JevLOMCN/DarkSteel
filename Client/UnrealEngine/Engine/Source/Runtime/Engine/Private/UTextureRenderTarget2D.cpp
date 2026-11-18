// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// GetRenderTargetTextureClass @ 14770a6c0

ETextureClass __thiscall
UTextureRenderTarget2D::GetRenderTargetTextureClass(UTextureRenderTarget2D *this)

{
  return TwoD;
}

// GetSurfaceArraySize @ 14770ab70

uint __thiscall UTextureRenderTarget2D::GetSurfaceArraySize(UTextureRenderTarget2D *this)

{
  return 0;
}

// GetSurfaceDepth @ 14770ab80

float __thiscall UTextureRenderTarget2D::GetSurfaceDepth(UTextureRenderTarget2D *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 14770ab90

float __thiscall UTextureRenderTarget2D::GetSurfaceHeight(UTextureRenderTarget2D *this)

{
  return (float)this->SizeY;
}

// GetSurfaceWidth @ 14770abb0

float __thiscall UTextureRenderTarget2D::GetSurfaceWidth(UTextureRenderTarget2D *this)

{
  return (float)this->SizeX;
}

// StaticClass @ 14772bd90

UClass * __cdecl UTextureRenderTarget2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget2D",
               &Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUTextureRenderTarget2D,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureRenderTarget2D>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget2D>,aFStackX_8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton;
}

// UTextureRenderTarget2D @ 1488b1220

UTextureRenderTarget2D * __thiscall
UTextureRenderTarget2D::UTextureRenderTarget2D(UTextureRenderTarget2D *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureRenderTarget2D @ 1488b1270

UTextureRenderTarget2D * __thiscall
UTextureRenderTarget2D::UTextureRenderTarget2D
          (UTextureRenderTarget2D *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  
  UTexture::UTexture((UTexture *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 & 0xfffffff8;
  this->bSupportsUAV = '\0';
  this->bAutoGenerateMips = '\0';
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0x12;
  this->SizeX = 1;
  *(undefined8 *)&this->SizeY = 1;
  (this->RenderTargetFormat).Value = '\x06';
  this->NumMips = 0;
  *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 4) = 0;
  (this->ClearColor).field0_0x0._s_0.A = 1.0;
  puVar4 = &this->field_0x172;
  this->bForceLinearGamma = '\x01';
  this->bHDR_DEPRECATED = '\x01';
  this->bNoFastClear = '\0';
  (this->MipsSamplerFilter).Value = *(uchar *)((longlong)&this->_padding_ + 1);
  this->MipsAddressV = '\x01';
  this->OverrideFormat = '\0';
  (this->MipsAddressU).Value = '\x01';
  return this;
}

// ~UTextureRenderTarget2D @ 1488b2b60

void __thiscall UTextureRenderTarget2D::~UTextureRenderTarget2D(UTextureRenderTarget2D *this)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// operator() @ 1488b4260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UTextureRenderTarget2D::ResizeTarget'::__l11::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  uint uVar2;
  FRenderResource *this_00;
  code *pcVar3;
  bool bVar4;
  
  this_00 = *(FRenderResource **)this;
  uVar1 = *(uint *)((longlong)this + 0x10);
  uVar2 = *(uint *)((longlong)this + 0xc);
  if (((this_00[6].OwnerName.Number != *(uint *)((longlong)this + 8)) ||
      (this_00[6].ResourceName.ComparisonIndex.Value != uVar2)) ||
     (this_00[6].ResourceName.Number != uVar1)) {
    this_00[6].OwnerName.Number = *(uint *)((longlong)this + 8);
    this_00[6].ResourceName.ComparisonIndex.Value = uVar2;
    this_00[6].ResourceName.Number = uVar1;
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FRenderResource::UpdateRHI(this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b430b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(longlong *)this + 0x70))
            ((undefined8 *)(*(longlong *)this + 0x70),param_1,1);
  return;
}

// CalcTextureMemorySizeEnum @ 1488b99b0

uint __thiscall
UTextureRenderTarget2D::CalcTextureMemorySizeEnum
          (UTextureRenderTarget2D *this,ETextureMipCount param_1)

{
  byte bVar1;
  undefined4 in_register_00000014;
  
  bVar1 = (**(code **)(this->_padding_ + 0x3d0))(this,CONCAT44(in_register_00000014,param_1));
  return ((this->SizeX + -1 + GPixelFormats[bVar1].BlockSizeX) / GPixelFormats[bVar1].BlockSizeX) *
         ((this->SizeY + -1 + GPixelFormats[bVar1].BlockSizeY) / GPixelFormats[bVar1].BlockSizeY) *
         GPixelFormats[bVar1].BlockBytes;
}

// CanConvertToTexture @ 1488b9ff0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UTextureRenderTarget2D::CanConvertToTexture
          (UTextureRenderTarget2D *this,ETextureSourceFormat *param_1,EPixelFormat *param_2,
          FText *param_3)

{
  int iVar1;
  bool bVar2;
  EPixelFormat EVar3;
  Type TVar4;
  ETextureSourceFormat EVar5;
  longlong *plVar6;
  UClass *pUVar7;
  longlong lVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FName local_res8;
  TSharedPtr<FCulture,1> local_d8;
  TSharedPtr<FCulture,1> local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [8];
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  FTextFormat local_30;
  
  EVar3 = (**(code **)(this->_padding_ + 0x3d0))();
  TVar4 = FImageCoreUtils::GetRawImageFormatForPixelFormat(EVar3);
  EVar5 = FImageCoreUtils::ConvertToTextureSourceFormat(TVar4);
  if (EVar5 == TSF_Invalid) {
    return false;
  }
  if ((0 < this->SizeX) && (0 < this->SizeY)) {
    *param_2 = EVar3;
    *param_1 = EVar5;
    return true;
  }
  if (param_3 == (FText *)0x0) {
    return false;
  }
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))(this,local_98);
  lVar8 = *plVar6;
  if ((lVar8 != 0) && (pUVar7 = Z_Construct_UClass_UTexture_NoRegister(), pUVar7 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar8 = *plVar6;
      goto LAB_1488ba0b5;
    }
  }
  lVar8 = 0;
LAB_1488ba0b5:
  local_res8 = *(FName *)(lVar8 + 0x18);
  ::FName::ToString(&local_res8,&local_a8);
  pFVar9 = FText::FromString(&local_70,&local_a8);
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_b8);
  pFVar10 = FText::FromString(&local_60,&local_b8);
  local_c8.Object = (FCulture *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar11 = FText::AsNumber(&local_50,this->SizeY,(FNumberFormattingOptions *)0x0,&local_c8);
  local_d8.Object = (FCulture *)0x0;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar12 = FText::AsNumber(&local_40,this->SizeX,(FNumberFormattingOptions *)0x0,&local_d8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_80,L"TextureRenderTarget2D",L"InvalidSizeForConversionToTexture",
                       L"Invalid size ({0},{1}) for converting {2} to {3}");
  pFVar14 = FTextFormat::FTextFormat(&local_30,pFVar13,Default);
  pFVar9 = FText::Format<FText,FText,FText,FText>(&local_90,pFVar14,pFVar12,pFVar11,pFVar10,pFVar9);
  FText::operator=(param_3,pFVar9);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return false;
}

// ConstructTexture2D @ 1488bb000

UTexture2D * __thiscall
UTextureRenderTarget2D::ConstructTexture2D
          (UTextureRenderTarget2D *this,UObject *param_1,FString *param_2,EObjectFlags param_3,
          uint param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  return (UTexture2D *)0x0;
}

// CreateResource @ 1488bb640

FTextureResource * __thiscall UTextureRenderTarget2D::CreateResource(UTextureRenderTarget2D *this)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  FTextureRenderTargetResource *this_00;
  uint uVar8;
  int iVar9;
  
  if (this->bSupportsUAV != 0) {
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (this->bAutoGenerateMips == '\0') {
    iVar9 = 1;
  }
  else {
    uVar8 = this->SizeY;
    if (this->SizeY < this->SizeX) {
      uVar8 = this->SizeX;
    }
    iVar3 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar9 = 0;
    if (uVar8 != 0) {
      iVar9 = iVar3;
    }
    iVar9 = iVar9 + 1;
  }
  this->NumMips = iVar9;
  this_00 = ::operator_new(0xe0);
  if (this_00 != (FTextureRenderTargetResource *)0x0) {
    FTextureRenderTargetResource::FTextureRenderTargetResource(this_00);
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)&FTextureRenderTarget2DResource::_vftable__for__FTextureResource__;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&FTextureRenderTarget2DResource::_vftable__for__FRenderTarget__;
    this_00[1]._padding_ = 0;
    this_00->_padding_ =
         (longlong)&FTextureRenderTarget2DResource::_vftable__for__FDeferredUpdateResource__;
    fVar4 = (this->ClearColor).field0_0x0._s_0.G;
    fVar5 = (this->ClearColor).field0_0x0._s_0.B;
    fVar6 = (this->ClearColor).field0_0x0._s_0.A;
    *(float *)&this_00[1]._padding_ = (this->ClearColor).field0_0x0._s_0.R;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = fVar4;
    *(float *)&this_00[1]._padding_ = fVar5;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = fVar6;
    uVar7 = (**(code **)(this->_padding_ + 0x3d0))(this);
    lVar2 = this_00[1]._padding_;
    *(undefined1 *)&this_00[1]._padding_ = uVar7;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = *(undefined4 *)(lVar2 + 0x158);
    *(undefined4 *)&this_00[1]._padding_ = *(undefined4 *)(lVar2 + 0x15c);
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = *(undefined4 *)(lVar2 + 0x17c);
    this_00[1]._padding_ = 0;
    return (FTextureResource *)this_00;
  }
  return (FTextureResource *)0x0;
}

// GetDesc @ 1488c2630

FString * __thiscall
UTextureRenderTarget2D::GetDesc(UTextureRenderTarget2D *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x3d0))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"Render to Texture %dx%d[%s]");
  return __return_storage_ptr__;
}

// GetDisplayGamma @ 1488c2a90

float __thiscall UTextureRenderTarget2D::GetDisplayGamma(UTextureRenderTarget2D *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)&this->_padding_;
  if (((*(float *)&this->_padding_ <= __real_3a83126e) &&
      (cVar1 = (**(code **)(this->_padding_ + 0x3d0))(), fVar2 = __real_3f800000,
      1 < (byte)(cVar1 - 9U))) && (this->bForceLinearGamma == 0)) {
    return __real_400ccccd;
  }
  return fVar2;
}

// GetFormat @ 1488c2ff0

EPixelFormat __thiscall UTextureRenderTarget2D::GetFormat(UTextureRenderTarget2D *this)

{
  byte bVar1;
  EPixelFormat EVar2;
  uint local_res8 [2];
  uint *local_res10 [3];
  
  EVar2 = (this->OverrideFormat).Value;
  if (EVar2 == PF_Unknown) {
    bVar1 = (this->RenderTargetFormat).Value;
    local_res8[0] = (uint)bVar1;
    switch(bVar1) {
    case 0:
      return PF_G8;
    case 1:
      return PF_R8G8;
    case 2:
    case 3:
      return PF_B8G8R8A8;
    case 4:
      return PF_R16F;
    case 5:
      return PF_G16R16F;
    case 6:
      return PF_FloatRGBA;
    case 7:
      return PF_R32_FLOAT;
    case 8:
      return PF_G32R32F;
    case 9:
      return PF_A32B32G32R32F;
    case 10:
      return PF_A2B10G10R10;
    default:
      local_res10[0] = local_res8;
      `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(local_res10);
      EVar2 = PF_Unknown;
    }
  }
  return EVar2;
}

// GetMaterialType @ 1488c34d0

EMaterialValueType __thiscall UTextureRenderTarget2D::GetMaterialType(UTextureRenderTarget2D *this)

{
  return MCT_Texture2D;
}

// GetPrivateStaticClass @ 1488c3f00

UClass * __cdecl UTextureRenderTarget2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget2D",
               &Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUTextureRenderTarget2D,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureRenderTarget2D>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget2D>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton;
}

// GetResourceSizeEx @ 1488c4600

void __thiscall
UTextureRenderTarget2D::GetResourceSizeEx(UTextureRenderTarget2D *this,FResourceSizeEx *param_1)

{
  int iVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  iVar1 = (**(code **)(this->_padding_ + 0x3b0))(this,1);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar1);
  return;
}

// GetSampleCount @ 1488c4820

ETextureRenderTargetSampleCount __thiscall
UTextureRenderTarget2D::GetSampleCount(UTextureRenderTarget2D *this)

{
  return RTSC_1;
}

// GetTextureFormatForConversionToTexture2D @ 1488c5170

ETextureSourceFormat __thiscall
UTextureRenderTarget2D::GetTextureFormatForConversionToTexture2D(UTextureRenderTarget2D *this)

{
  char cVar1;
  undefined1 local_res8 [8];
  ETextureSourceFormat local_res10 [6];
  
  local_res10[0] = TSF_Invalid;
  local_res8[0] = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x3b8))(this,local_res10,local_res8,0);
  if (cVar1 == '\0') {
    local_res10[0] = TSF_Invalid;
  }
  return local_res10[0];
}

// GetTextureUClass @ 1488c6490

TSubclassOf<UTexture> __thiscall
UTextureRenderTarget2D::GetTextureUClass(UTextureRenderTarget2D *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UTexture2D_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UTexture>)in_RDX.field0_0x0;
}

// InitAutoFormat @ 1488c8130

void __thiscall
UTextureRenderTarget2D::InitAutoFormat(UTextureRenderTarget2D *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSizeX > 0 && InSizeY > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2D.cpp"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
  this->SizeY = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001488c8197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// InitCustomFormat @ 1488c8560

void __thiscall
UTextureRenderTarget2D::InitCustomFormat
          (UTextureRenderTarget2D *this,uint param_1,uint param_2,EPixelFormat param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  UTextureRenderTarget2D *local_res8;
  UTextureRenderTarget2D *local_18 [2];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSizeX > 0 && InSizeY > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2D.cpp"
                       ,0x89,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FTextureRenderTargetResource::IsSupportedFormat(param_3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTextureRenderTargetResource::IsSupportedFormat(InOverrideFormat)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2D.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bForceLinearGamma = '\0';
  this->field_0x172 = this->field_0x172 | param_4;
  this->SizeX = param_1;
  this->SizeY = param_2;
  (this->OverrideFormat).Value = param_3;
  if (0x10000 < param_1) {
    local_res8 = this;
    bVar2 = `UTextureRenderTarget2D::InitCustomFormat'::__l17::<lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      this->SizeX = 1;
    }
  }
  if ((this->SizeY < 0) || (0x10000 < this->SizeY)) {
    local_18[0] = this;
    bVar2 = `UTextureRenderTarget2D::InitCustomFormat'::__l20::<lambda_2>::operator()(local_18);
    if (!bVar2) {
      this->SizeY = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488c8674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// IsSRGB @ 1488cd350

bool __thiscall UTextureRenderTarget2D::IsSRGB(UTextureRenderTarget2D *this)

{
  if ((this->OverrideFormat).Value == '\0') {
    return (this->RenderTargetFormat).Value == '\x03';
  }
  return (bool)(~this->bForceLinearGamma & 1);
}

// PostLoad @ 1488d1260

void __thiscall UTextureRenderTarget2D::PostLoad(UTextureRenderTarget2D *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = this->SizeX;
  iVar2 = this->SizeY;
  iVar4 = GTextureRenderTarget2DMaxSizeX;
  if (iVar1 < GTextureRenderTarget2DMaxSizeX) {
    iVar4 = iVar1;
  }
  this->SizeX = iVar4;
  iVar3 = GTextureRenderTarget2DMaxSizeY;
  if (iVar2 < GTextureRenderTarget2DMaxSizeY) {
    iVar3 = iVar2;
  }
  this->SizeY = iVar3;
  fVar8 = (float)iVar1;
  fVar7 = (float)iVar2;
  if (((float)iVar4 != fVar8) || ((float)iVar3 != fVar7)) {
    fVar6 = (float)iVar4 / fVar8;
    fVar5 = (float)iVar3 / fVar7;
    if (fVar6 < fVar5) {
      this->SizeY = (int)(fVar6 * fVar7);
      UTexture::PostLoad((UTexture *)this);
      return;
    }
    this->SizeX = (int)(fVar5 * fVar8);
  }
  UTexture::PostLoad((UTexture *)this);
  return;
}

// ResizeTarget @ 1488db1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureRenderTarget2D::ResizeTarget(UTextureRenderTarget2D *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  int iVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  int local_a8;
  FTextureResource *local_a0;
  int iStack_98;
  int iStack_94;
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
  if ((this->SizeX != param_1) || (this->SizeY != param_2)) {
    this->SizeX = param_1;
    this->SizeY = param_2;
    if (this->bAutoGenerateMips != '\0') {
      if ((int)param_2 < (int)param_1) {
        param_2 = param_1;
      }
      local_a8 = 0x1f;
      if (param_2 != 0) {
        for (; param_2 >> local_a8 == 0; local_a8 = local_a8 + -1) {
        }
      }
      iVar5 = 0;
      if (param_2 != 0) {
        iVar5 = local_a8;
      }
      this->NumMips = iVar5 + 1;
    }
    pFVar3 = UTexture::GetResource((UTexture *)this);
    if (pFVar3 == (FTextureResource *)0x0) {
      (**(code **)(this->_padding_ + 0x328))();
    }
    else {
      local_a0 = UTexture::GetResource((UTexture *)this);
      iStack_98 = this->SizeX;
      iStack_94 = this->SizeY;
      local_90 = this->NumMips;
      local_88[0] = (code *)0x0;
      local_60 = FMemory::Malloc(0x20,8);
      *local_60 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::`11'::<lambda_1>,1,1>
                           ::_vftable_;
      local_60[1] = (code *)local_a0;
      local_60[2] = (code *)CONCAT44(iStack_94,iStack_98);
      local_60[3] = (code *)CONCAT44(uStack_8c,local_90);
      if (local_60 + 1 != (code **)0x0) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UTextureRenderTarget2D::ResizeTarget'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTextureRenderTarget2D::ResizeTarget_::__l11::TSTR_ResizeRenderTarget192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UTextureRenderTarget2D::ResizeTarget'::__l11::TSTR_ResizeRenderTarget192>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar7 = (ulonglong)local_28;
        if (2 < uVar7) {
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
                      ::__l2::Destructors)[uVar7] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            ppcVar6 = (code **)(local_58 + 0x10);
            if (local_30 != (code **)0x0) {
              ppcVar6 = local_30;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        ppcVar6 = local_88 + 2;
        if (local_60 != (code **)0x0) {
          ppcVar6 = local_60;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
  }
  return;
}

// Serialize @ 1488dd630

void __thiscall UTextureRenderTarget2D::Serialize(UTextureRenderTarget2D *this,FArchive *param_1)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  UTexture::Serialize((UTexture *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if (iVar4 < 0x11) {
    (this->RenderTargetFormat).Value = this->field_0x172 & 4 | 2;
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  fVar2 = __real_400ccccd;
  if (iVar4 < 0x21) {
    cVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
    fVar5 = *(float *)&this->_padding_;
    if ((fVar5 <= __real_3a83126e) &&
       (((byte)(cVar3 - 9U) < 2 || (fVar5 = fVar2, this->bForceLinearGamma != 0)))) {
      fVar5 = __real_3f800000;
    }
    if (((this->RenderTargetFormat).Value == '\x02') &&
       (__real_38d1b717 <
        (float)((uint)(fVar5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      (this->RenderTargetFormat).Value = '\x03';
      pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  return;
}

// Serialize @ 1488dd730

void __thiscall
UTextureRenderTarget2D::Serialize(UTextureRenderTarget2D *this,FStructuredArchiveRecord param_1)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  FArchiveState *this_00;
  float fVar5;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UTexture::Serialize((UTexture *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FRenderingObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer(this_00,&FRenderingObjectVersion::GUID);
  if (iVar4 < 0x11) {
    (this->RenderTargetFormat).Value = this->field_0x172 & 4 | 2;
  }
  iVar4 = FArchiveState::CustomVer(this_00,&FRenderingObjectVersion::GUID);
  fVar2 = __real_400ccccd;
  if (iVar4 < 0x21) {
    cVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
    fVar5 = *(float *)&this->_padding_;
    if ((fVar5 <= __real_3a83126e) &&
       (((byte)(cVar3 - 9U) < 2 || (fVar5 = fVar2, this->bForceLinearGamma != 0)))) {
      fVar5 = __real_3f800000;
    }
    if (((this->RenderTargetFormat).Value == '\x02') &&
       (__real_38d1b717 <
        (float)((uint)(fVar5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      (this->RenderTargetFormat).Value = '\x03';
      pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  return;
}

// StaticRegisterNativesUTextureRenderTarget2D @ 1488e2280

void __cdecl UTextureRenderTarget2D::StaticRegisterNativesUTextureRenderTarget2D(void)

{
  return;
}

// UpdateResourceImmediate @ 1488eb860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureRenderTarget2D::UpdateResourceImmediate(UTextureRenderTarget2D *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FTextureResource *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FTextureResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if (pFVar3 != (FTextureResource *)0x0) {
    pFStack_70 = UTexture::GetResource((UTexture *)this);
    uStack_67 = auStack_b8._41_4_;
    uStack_63 = auStack_b8._45_2_;
    uStack_61 = auStack_b8[0x2f];
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UTextureRenderTarget2D::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTextureRenderTarget2D::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_38._1_4_ = uStack_67;
      local_38._0_1_ = local_68;
      local_38._5_2_ = uStack_63;
      local_38._7_1_ = uStack_61;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate212>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
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
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// UpdateTexture2D @ 1488ebfd0

void __thiscall
UTextureRenderTarget2D::UpdateTexture2D
          (UTextureRenderTarget2D *this,UTexture2D *param_1,ETextureSourceFormat param_2,
          uint param_3,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  return;
}

// UpdateTexture2D @ 1488ec070

void __thiscall
UTextureRenderTarget2D::UpdateTexture2D
          (UTextureRenderTarget2D *this,UTexture2D *param_1,ETextureSourceFormat param_2,
          uint param_3,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4,
          TDelegate<void___cdecl(UTexture2D_*),FDefaultDelegateUserPolicy> *param_5)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return;
}

// operator() @ 150533310

bool __thiscall
`UTextureRenderTarget2D::InitCustomFormat'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4037342337108541294>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4037342337108541294>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053338f;
    }
  }
  bVar2 = false;
LAB_15053338f:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505334c0

bool __thiscall
`UTextureRenderTarget2D::InitCustomFormat'::__l20::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4037342337108541289>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4037342337108541289>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053353f;
    }
  }
  bVar2 = false;
LAB_15053353f:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

