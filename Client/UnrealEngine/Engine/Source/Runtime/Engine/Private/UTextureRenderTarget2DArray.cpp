// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 1488a0ec0

UClass * __cdecl UTextureRenderTarget2DArray::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget2DArray",
               &Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton,
               StaticRegisterNativesUTextureRenderTarget2DArray,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTarget2DArray>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget2DArray>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton;
}

// UTextureRenderTarget2DArray @ 1488b1350

UTextureRenderTarget2DArray * __thiscall
UTextureRenderTarget2DArray::UTextureRenderTarget2DArray
          (UTextureRenderTarget2DArray *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureRenderTarget2DArray @ 1488b13a0

UTextureRenderTarget2DArray * __thiscall
UTextureRenderTarget2DArray::UTextureRenderTarget2DArray
          (UTextureRenderTarget2DArray *this,FObjectInitializer *param_1)

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

// ~UTextureRenderTarget2DArray @ 1488b2ba0

void __thiscall
UTextureRenderTarget2DArray::~UTextureRenderTarget2DArray(UTextureRenderTarget2DArray *this)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CanConvertToTexture @ 1488ba210

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UTextureRenderTarget2DArray::CanConvertToTexture
          (UTextureRenderTarget2DArray *this,ETextureSourceFormat *param_1,EPixelFormat *param_2,
          FText *param_3)

{
  int iVar1;
  bool bVar2;
  EPixelFormat EVar3;
  EPixelFormat EVar4;
  ETextureSourceFormat EVar5;
  longlong *plVar6;
  UClass *pUVar7;
  longlong lVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
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
  local_108.DataPtr = (EPixelFormat *)&local_res8;
  local_res8.ComparisonIndex.Value = 0xa022803;
  local_108.ArrayNum = 4;
  EVar4 = (**(code **)(this->_padding_ + 0x3d0))(this);
  EVar5 = UTextureRenderTarget::ValidateTextureFormatForConversionToTextureInternal
                    ((UTextureRenderTarget *)this,EVar4,&local_108,param_3);
  if (EVar5 == TSF_Invalid) {
    return false;
  }
  if (((0 < this->SizeX) && (0 < this->SizeY)) && (0 < this->Slices)) {
    *param_2 = EVar3;
    *param_1 = EVar5;
    return true;
  }
  if (param_3 == (FText *)0x0) {
    return false;
  }
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))(this,&local_108);
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
      goto LAB_1488ba309;
    }
  }
  lVar8 = 0;
LAB_1488ba309:
  local_res8 = *(FName *)(lVar8 + 0x18);
  ::FName::ToString(&local_res8,&local_b8);
  pFVar9 = FText::FromString(&local_88,&local_b8);
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_c8);
  pFVar10 = FText::FromString(&local_78,&local_c8);
  local_d8.Object = (FCulture *)0x0;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar11 = FText::AsNumber(&local_68,this->Slices,(FNumberFormattingOptions *)0x0,&local_d8);
  local_e8.Object = (FCulture *)0x0;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar12 = FText::AsNumber(&local_58,this->SizeY,(FNumberFormattingOptions *)0x0,&local_e8);
  local_f8.Object = (FCulture *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar13 = FText::AsNumber(&local_48,this->SizeX,(FNumberFormattingOptions *)0x0,&local_f8);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_98,L"TextureRenderTarget2DArray",L"InvalidSizeForConversionToTexture",
                       L"Invalid size (({0},{1}), {2} slices) for converting {3} to {4}");
  pFVar15 = FTextFormat::FTextFormat(&local_38,pFVar14,Default);
  pFVar9 = FText::Format<FText,FText,FText,FText,FText>
                     (&local_a8,pFVar15,pFVar13,pFVar12,pFVar11,pFVar10,pFVar9);
  FText::operator=(param_3,pFVar9);
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

// ConstructTexture2DArray @ 1488bb010

UTexture2DArray * __thiscall
UTextureRenderTarget2DArray::ConstructTexture2DArray
          (UTextureRenderTarget2DArray *this,UObject *param_1,FString *param_2,EObjectFlags param_3,
          uint param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  return (UTexture2DArray *)0x0;
}

// CreateResource @ 1488bb760

FTextureResource * __thiscall
UTextureRenderTarget2DArray::CreateResource(UTextureRenderTarget2DArray *this)

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
         (longlong)&FTextureRenderTarget2DArrayResource::_vftable__for__FTextureResource__;
    this_00->_padding_ =
         (longlong)&FTextureRenderTarget2DArrayResource::_vftable__for__FRenderTarget__;
    this_00->_padding_ =
         (longlong)&FTextureRenderTarget2DArrayResource::_vftable__for__FDeferredUpdateResource__;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    return (FTextureResource *)this_00;
  }
  return (FTextureResource *)0x0;
}

// GetDesc @ 1488c26a0

FString * __thiscall
UTextureRenderTarget2DArray::GetDesc
          (UTextureRenderTarget2DArray *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x3d0))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"Render to Texture 2DArray %dx%d[%s]");
  return __return_storage_ptr__;
}

// GetDisplayGamma @ 1488c2af0

float __thiscall UTextureRenderTarget2DArray::GetDisplayGamma(UTextureRenderTarget2DArray *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)&this->_padding_;
  if (((*(float *)&this->_padding_ <= __real_3a83126e) &&
      (cVar1 = (**(code **)(this->_padding_ + 0x3d0))(), fVar2 = __real_3f800000,
      1 < (byte)(cVar1 - 9U))) && (this->bForceLinearGamma == '\0')) {
    return __real_400ccccd;
  }
  return fVar2;
}

// GetFormat @ 1488c30c0

EPixelFormat __thiscall UTextureRenderTarget2DArray::GetFormat(UTextureRenderTarget2DArray *this)

{
  EPixelFormat EVar1;
  
  EVar1 = (this->OverrideFormat).Value;
  if (EVar1 == PF_Unknown) {
    EVar1 = this->bHDR << 3 | PF_B8G8R8A8;
  }
  return EVar1;
}

// GetMaterialType @ 1488c34e0

EMaterialValueType __thiscall
UTextureRenderTarget2DArray::GetMaterialType(UTextureRenderTarget2DArray *this)

{
  return MCT_Texture2DArray;
}

// GetPrivateStaticClass @ 1488c3fc0

UClass * __cdecl UTextureRenderTarget2DArray::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget2DArray",
               &Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton,
               StaticRegisterNativesUTextureRenderTarget2DArray,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTarget2DArray>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget2DArray>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton;
}

// GetRenderTargetTextureClass @ 1488c45a0

ETextureClass __thiscall
UTextureRenderTarget2DArray::GetRenderTargetTextureClass(UTextureRenderTarget2DArray *this)

{
  return Array;
}

// GetResourceSizeEx @ 1488c4650

void __thiscall
UTextureRenderTarget2DArray::GetResourceSizeEx
          (UTextureRenderTarget2DArray *this,FResourceSizeEx *param_1)

{
  byte bVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  bVar1 = (**(code **)(this->_padding_ + 0x3d0))(this);
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,(longlong)GPixelFormats[bVar1].BlockBytes *
                     (((longlong)this->SizeY + -1 + (longlong)GPixelFormats[bVar1].BlockSizeY) /
                     (longlong)GPixelFormats[bVar1].BlockSizeY) *
                     (((longlong)this->SizeX + -1 + (longlong)GPixelFormats[bVar1].BlockSizeX) /
                     (longlong)GPixelFormats[bVar1].BlockSizeX) * (longlong)this->Slices);
  return;
}

// GetSurfaceArraySize @ 1488c4f00

uint __thiscall UTextureRenderTarget2DArray::GetSurfaceArraySize(UTextureRenderTarget2DArray *this)

{
  return this->Slices;
}

// GetSurfaceDepth @ 1488c4f30

float __thiscall UTextureRenderTarget2DArray::GetSurfaceDepth(UTextureRenderTarget2DArray *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 1488c4f70

float __thiscall UTextureRenderTarget2DArray::GetSurfaceHeight(UTextureRenderTarget2DArray *this)

{
  return (float)this->SizeY;
}

// GetSurfaceWidth @ 1488c4fd0

float __thiscall UTextureRenderTarget2DArray::GetSurfaceWidth(UTextureRenderTarget2DArray *this)

{
  return (float)this->SizeX;
}

// GetTextureUClass @ 1488c64d0

TSubclassOf<UTexture> __thiscall
UTextureRenderTarget2DArray::GetTextureUClass(UTextureRenderTarget2DArray *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UTexture2DArray_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UTexture>)in_RDX.field0_0x0;
}

// Init @ 1488c7db0

void __thiscall
UTextureRenderTarget2DArray::Init
          (UTextureRenderTarget2DArray *this,uint param_1,uint param_2,uint param_3,
          EPixelFormat param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSizeX > 0) && (InSizeY > 0) && (InSlices > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2DArray.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 % (uint)GPixelFormats[param_4].BlockSizeX != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeX % GPixelFormats[InFormat].BlockSizeX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2DArray.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 % (uint)GPixelFormats[param_4].BlockSizeY != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeY % GPixelFormats[InFormat].BlockSizeY)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2DArray.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->Slices = param_3;
  (this->OverrideFormat).Value = param_4;
                    /* WARNING: Could not recover jumptable at 0x0001488c7ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// InitAutoFormat @ 1488c81b0

void __thiscall
UTextureRenderTarget2DArray::InitAutoFormat
          (UTextureRenderTarget2DArray *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSizeX > 0) && (InSizeY > 0) && (InSlices > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2DArray.cpp"
                       ,0x50,L"");
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2DArray.cpp"
                       ,0x51,L"");
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget2DArray.cpp"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->Slices = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001488c82d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// IsSRGB @ 1488cd380

bool __thiscall UTextureRenderTarget2DArray::IsSRGB(UTextureRenderTarget2DArray *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x3e0))();
  return __real_38d1b717 <=
         (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// PostLoad @ 1488d1300

void __thiscall UTextureRenderTarget2DArray::PostLoad(UTextureRenderTarget2DArray *this)

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

// StaticRegisterNativesUTextureRenderTarget2DArray @ 1488e2290

void __cdecl UTextureRenderTarget2DArray::StaticRegisterNativesUTextureRenderTarget2DArray(void)

{
  return;
}

// UpdateResourceImmediate @ 1488eb9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureRenderTarget2DArray::UpdateResourceImmediate(UTextureRenderTarget2DArray *this,bool param_1)

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
                  TFunctionRefCaller<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTextureRenderTarget2DArray::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate99>
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

