// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 1488a20c0

UClass * __cdecl UTextureRenderTargetVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTargetVolume",
               &Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton,
               StaticRegisterNativesUTextureRenderTargetVolume,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTargetVolume>,
               InternalVTableHelperCtorCaller<UTextureRenderTargetVolume>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton;
}

// UTextureRenderTargetVolume @ 1488b1600

UTextureRenderTargetVolume * __thiscall
UTextureRenderTargetVolume::UTextureRenderTargetVolume
          (UTextureRenderTargetVolume *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureRenderTargetVolume @ 1488b1650

UTextureRenderTargetVolume * __thiscall
UTextureRenderTargetVolume::UTextureRenderTargetVolume
          (UTextureRenderTargetVolume *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0x12;
  (this->ClearColor).field0_0x0._s_0.R = 0.0;
  *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 4) = 0x3f800000;
  (this->ClearColor).field0_0x0._s_0.A = 1.0;
  puVar4 = &this->field_0x175;
  this->bHDR = '\x01';
  this->bForceLinearGamma = '\x01';
  this->bSupportsUAV = '\0';
  (this->OverrideFormat).Value = '\0';
  return this;
}

// ~UTextureRenderTargetVolume @ 1488b2c60

void __thiscall
UTextureRenderTargetVolume::~UTextureRenderTargetVolume(UTextureRenderTargetVolume *this)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CanConvertToTexture @ 1488ba710

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UTextureRenderTargetVolume::CanConvertToTexture
          (UTextureRenderTargetVolume *this,ETextureSourceFormat *param_1,EPixelFormat *param_2,
          FText *param_3)

{
  int iVar1;
  bool bVar2;
  EPixelFormat EVar3;
  ETextureSourceFormat EVar4;
  longlong *plVar5;
  UClass *pUVar6;
  longlong lVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FName local_res8;
  TArrayView<EPixelFormat_const_,int> local_108;
  TSharedPtr<FCulture,1> local_f8;
  TSharedPtr<FCulture,1> local_e8;
  TSharedPtr<FCulture,1> local_d8;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  EVar3 = (**(code **)(this->_padding_ + 0x3d0))();
  local_res8.ComparisonIndex.Value._0_3_ = 0x150a0d;
  local_108.DataPtr = (EPixelFormat *)&local_res8;
  local_108.ArrayNum = 3;
  EVar4 = UTextureRenderTarget::ValidateTextureFormatForConversionToTextureInternal
                    ((UTextureRenderTarget *)this,EVar3,&local_108,param_3);
  if (EVar4 == TSF_Invalid) {
    return false;
  }
  if (((0 < this->SizeX) && (0 < this->SizeY)) && (0 < this->SizeZ)) {
    *param_2 = EVar3;
    *param_1 = TSF_RGBA16F;
    return true;
  }
  if (param_3 == (FText *)0x0) {
    return false;
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))(this,&local_108);
  lVar7 = *plVar5;
  if ((lVar7 != 0) && (pUVar6 = Z_Construct_UClass_UTexture_NoRegister(), pUVar6 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = *plVar5;
      goto LAB_1488ba802;
    }
  }
  lVar7 = 0;
LAB_1488ba802:
  local_res8 = *(FName *)(lVar7 + 0x18);
  ::FName::ToString(&local_res8,&local_b8);
  pFVar8 = FText::FromString(&local_88,&local_b8);
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_c8);
  pFVar9 = FText::FromString(&local_78,&local_c8);
  local_d8.Object = (FCulture *)0x0;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar10 = FText::AsNumber(&local_68,this->SizeZ,(FNumberFormattingOptions *)0x0,&local_d8);
  local_e8.Object = (FCulture *)0x0;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar11 = FText::AsNumber(&local_58,this->SizeY,(FNumberFormattingOptions *)0x0,&local_e8);
  local_f8.Object = (FCulture *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar12 = FText::AsNumber(&local_48,this->SizeX,(FNumberFormattingOptions *)0x0,&local_f8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_98,L"TextureRenderTargetVolume",L"InvalidSizeForConversionToTexture",
                       L"Invalid size ({0},{1},{2}) for converting {3} to {4}");
  pFVar14 = FTextFormat::FTextFormat(&local_38,pFVar13,Default);
  pFVar8 = FText::Format<FText,FText,FText,FText,FText>
                     (&local_a8,pFVar14,pFVar12,pFVar11,pFVar10,pFVar9,pFVar8);
  FText::operator=(param_3,pFVar8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return false;
}

// ConstructTextureVolume @ 1488bb030

UVolumeTexture * __thiscall
UTextureRenderTargetVolume::ConstructTextureVolume
          (UTextureRenderTargetVolume *this,UObject *param_1,FString *param_2,EObjectFlags param_3,
          uint param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  return (UVolumeTexture *)0x0;
}

// CreateResource @ 1488bb8e0

FTextureResource * __thiscall
UTextureRenderTargetVolume::CreateResource(UTextureRenderTargetVolume *this)

{
  uint *puVar1;
  FTextureRenderTargetResource *this_00;
  
  if (this->bSupportsUAV != '\0') {
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | 2;
  }
  this_00 = ::operator_new(0xc0);
  if (this_00 != (FTextureRenderTargetResource *)0x0) {
    FTextureRenderTargetResource::FTextureRenderTargetResource(this_00);
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)&FTextureRenderTargetVolumeResource::_vftable__for__FTextureResource__;
    this_00->_padding_ =
         (longlong)&FTextureRenderTargetVolumeResource::_vftable__for__FRenderTarget__;
    this_00->_padding_ =
         (longlong)&FTextureRenderTargetVolumeResource::_vftable__for__FDeferredUpdateResource__;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    return (FTextureResource *)this_00;
  }
  return (FTextureResource *)0x0;
}

// GetDesc @ 1488c2760

FString * __thiscall
UTextureRenderTargetVolume::GetDesc
          (UTextureRenderTargetVolume *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x3d0))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"Render to Texture Volume %dx%dx%d[%s]");
  return __return_storage_ptr__;
}

// GetDisplayGamma @ 1488c2bf0

float __thiscall UTextureRenderTargetVolume::GetDisplayGamma(UTextureRenderTargetVolume *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)&this->_padding_;
  if ((((*(float *)&this->_padding_ <= __real_3a83126e) &&
       (cVar1 = (**(code **)(this->_padding_ + 0x3d0))(), fVar2 = __real_3f800000, cVar1 != '\r'))
      && (cVar1 != '\n')) && (this->bForceLinearGamma == '\0')) {
    return __real_400ccccd;
  }
  return fVar2;
}

// GetFormat @ 1488c3130

EPixelFormat __thiscall UTextureRenderTargetVolume::GetFormat(UTextureRenderTargetVolume *this)

{
  EPixelFormat EVar1;
  
  EVar1 = (this->OverrideFormat).Value;
  if (EVar1 == PF_Unknown) {
    EVar1 = this->bHDR << 3 | PF_B8G8R8A8;
  }
  return EVar1;
}

// GetMaterialType @ 1488c3510

EMaterialValueType __thiscall
UTextureRenderTargetVolume::GetMaterialType(UTextureRenderTargetVolume *this)

{
  return MCT_VolumeTexture;
}

// GetPrivateStaticClass @ 1488c4200

UClass * __cdecl UTextureRenderTargetVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTargetVolume",
               &Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton,
               StaticRegisterNativesUTextureRenderTargetVolume,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTargetVolume>,
               InternalVTableHelperCtorCaller<UTextureRenderTargetVolume>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton;
}

// GetRenderTargetTextureClass @ 1488c45f0

ETextureClass __thiscall
UTextureRenderTargetVolume::GetRenderTargetTextureClass(UTextureRenderTargetVolume *this)

{
  return Volume;
}

// GetResourceSizeEx @ 1488c4780

void __thiscall
UTextureRenderTargetVolume::GetResourceSizeEx
          (UTextureRenderTargetVolume *this,FResourceSizeEx *param_1)

{
  byte bVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  bVar1 = (**(code **)(this->_padding_ + 0x3d0))(this);
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,(longlong)
                     (((this->SizeY + -1 + GPixelFormats[bVar1].BlockSizeY) /
                      GPixelFormats[bVar1].BlockSizeY) *
                      ((this->SizeX + -1 + GPixelFormats[bVar1].BlockSizeX) /
                      GPixelFormats[bVar1].BlockSizeX) *
                      ((this->SizeZ + -1 + GPixelFormats[bVar1].BlockSizeZ) /
                      GPixelFormats[bVar1].BlockSizeZ) * GPixelFormats[bVar1].BlockBytes));
  return;
}

// GetSurfaceArraySize @ 1488c4f20

uint __thiscall UTextureRenderTargetVolume::GetSurfaceArraySize(UTextureRenderTargetVolume *this)

{
  return 0;
}

// GetSurfaceDepth @ 1488c4f50

float __thiscall UTextureRenderTargetVolume::GetSurfaceDepth(UTextureRenderTargetVolume *this)

{
  return (float)this->SizeZ;
}

// GetSurfaceHeight @ 1488c4fb0

float __thiscall UTextureRenderTargetVolume::GetSurfaceHeight(UTextureRenderTargetVolume *this)

{
  return (float)this->SizeY;
}

// GetSurfaceWidth @ 1488c5010

float __thiscall UTextureRenderTargetVolume::GetSurfaceWidth(UTextureRenderTargetVolume *this)

{
  return (float)this->SizeX;
}

// GetTextureUClass @ 1488c6590

TSubclassOf<UTexture> __thiscall
UTextureRenderTargetVolume::GetTextureUClass(UTextureRenderTargetVolume *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UVolumeTexture_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UTexture>)in_RDX.field0_0x0;
}

// Init @ 1488c7fd0

void __thiscall
UTextureRenderTargetVolume::Init
          (UTextureRenderTargetVolume *this,uint param_1,uint param_2,uint param_3,
          EPixelFormat param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSizeX > 0) && (InSizeY > 0) && (InSizeZ > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)param_4;
  if (param_1 % (uint)GPixelFormats[uVar3].BlockSizeX != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeX % GPixelFormats[InFormat].BlockSizeX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 % (uint)GPixelFormats[uVar3].BlockSizeY != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeY % GPixelFormats[InFormat].BlockSizeY)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3 % (uint)GPixelFormats[uVar3].BlockSizeZ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeZ % GPixelFormats[InFormat].BlockSizeZ)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->SizeZ = param_3;
  (this->OverrideFormat).Value = param_4;
                    /* WARNING: Could not recover jumptable at 0x0001488c8118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// InitAutoFormat @ 1488c83e0

void __thiscall
UTextureRenderTargetVolume::InitAutoFormat
          (UTextureRenderTargetVolume *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSizeX > 0) && (InSizeY > 0) && (InSizeZ > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x4f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
  if (param_1 % (uint)GPixelFormats[bVar3].BlockSizeX != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeX % GPixelFormats[GetFormat()].BlockSizeX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
  if (param_2 % (uint)GPixelFormats[bVar3].BlockSizeY != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeY % GPixelFormats[GetFormat()].BlockSizeY)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
  if (param_3 % (uint)GPixelFormats[bVar3].BlockSizeZ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeZ % GPixelFormats[GetFormat()].BlockSizeZ)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetVolume.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->SizeZ = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001488c8550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// IsSRGB @ 1488cd430

bool __thiscall UTextureRenderTargetVolume::IsSRGB(UTextureRenderTargetVolume *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x3e0))();
  return __real_38d1b717 <=
         (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// PostLoad @ 1488d1320

void __thiscall UTextureRenderTargetVolume::PostLoad(UTextureRenderTargetVolume *this)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  
  UObject::PostLoad((UObject *)this);
  bVar4 = UTexture::IsCookPlatformTilingDisabled((UTexture *)this,(ITargetPlatformSettings *)0x0);
  if (bVar4) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar4) {
    lVar3 = this->_padding_;
    if (lVar3 != 0) {
      pUVar5 = UTextureCube::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  return;
}

// StaticRegisterNativesUTextureRenderTargetVolume @ 1488e22c0

void __cdecl UTextureRenderTargetVolume::StaticRegisterNativesUTextureRenderTargetVolume(void)

{
  return;
}

// UpdateResourceImmediate @ 1488ebd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureRenderTargetVolume::UpdateResourceImmediate(UTextureRenderTargetVolume *this,bool param_1)

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
                  TFunctionRefCaller<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UTextureRenderTargetVolume::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTextureRenderTargetVolume::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate99>
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

