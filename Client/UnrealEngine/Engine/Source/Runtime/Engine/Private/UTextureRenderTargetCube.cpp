// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 1488a12a0

UClass * __cdecl UTextureRenderTargetCube::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTargetCube",
               &Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton,
               StaticRegisterNativesUTextureRenderTargetCube,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureRenderTargetCube>,
               InternalVTableHelperCtorCaller<UTextureRenderTargetCube>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton;
}

// UTextureRenderTargetCube @ 1488b1500

UTextureRenderTargetCube * __thiscall
UTextureRenderTargetCube::UTextureRenderTargetCube
          (UTextureRenderTargetCube *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureRenderTargetCube @ 1488b1550

UTextureRenderTargetCube * __thiscall
UTextureRenderTargetCube::UTextureRenderTargetCube
          (UTextureRenderTargetCube *this,FObjectInitializer *param_1)

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
  puVar4 = &this->field_0x16d;
  this->bHDR = '\x01';
  this->bAutoGenerateMips = '\0';
  this->bForceLinearGamma = '\x01';
  this->bSupportsUAV = '\0';
  (this->MipsSamplerFilter).Value = *(uchar *)((longlong)&this->_padding_ + 1);
  (this->OverrideFormat).Value = '\0';
  this->NumMips = 0;
  return this;
}

// ~UTextureRenderTargetCube @ 1488b2c20

void __thiscall UTextureRenderTargetCube::~UTextureRenderTargetCube(UTextureRenderTargetCube *this)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CanConvertToTexture @ 1488ba500

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UTextureRenderTargetCube::CanConvertToTexture
          (UTextureRenderTargetCube *this,ETextureSourceFormat *param_1,EPixelFormat *param_2,
          FText *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  EPixelFormat EVar4;
  Type TVar5;
  ETextureSourceFormat EVar6;
  longlong *plVar7;
  UClass *pUVar8;
  longlong lVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FName local_res8;
  TSharedPtr<FCulture,1> local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  FTextFormat local_30;
  
  EVar4 = (**(code **)(this->_padding_ + 0x3d0))();
  TVar5 = FImageCoreUtils::GetRawImageFormatForPixelFormat(EVar4);
  EVar6 = FImageCoreUtils::ConvertToTextureSourceFormat(TVar5);
  if (EVar6 == TSF_Invalid) {
    return false;
  }
  uVar1 = this->SizeX;
  if ((0 < (int)uVar1) && ((uVar1 & uVar1 - 1) == 0)) {
    *param_2 = EVar4;
    *param_1 = EVar6;
    return true;
  }
  if (param_3 == (FText *)0x0) {
    return false;
  }
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x3c0))(this,local_88);
  lVar9 = *plVar7;
  if ((lVar9 != 0) && (pUVar8 = Z_Construct_UClass_UTexture_NoRegister(), pUVar8 != (UClass *)0x0))
  {
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar9 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar9 = *plVar7;
      goto LAB_1488ba5ba;
    }
  }
  lVar9 = 0;
LAB_1488ba5ba:
  local_res8 = *(FName *)(lVar9 + 0x18);
  ::FName::ToString(&local_res8,&local_98);
  pFVar10 = FText::FromString(&local_60,&local_98);
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_a8);
  pFVar11 = FText::FromString(&local_50,&local_a8);
  local_b8.Object = (FCulture *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar12 = FText::AsNumber(&local_40,this->SizeX,(FNumberFormattingOptions *)0x0,&local_b8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_70,L"TextureRenderTargetCube",L"InvalidSizeForConversionToTexture",
                       L"Invalid size ({0},{0}) for converting {1} to {2}. Needs to be a power of 2."
                      );
  pFVar14 = FTextFormat::FTextFormat(&local_30,pFVar13,Default);
  pFVar10 = FText::Format<FText,FText,FText>(&local_80,pFVar14,pFVar12,pFVar11,pFVar10);
  FText::operator=(param_3,pFVar10);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return false;
}

// ConstructTextureCube @ 1488bb020

UTextureCube * __thiscall
UTextureRenderTargetCube::ConstructTextureCube
          (UTextureRenderTargetCube *this,UObject *param_1,FString *param_2,EObjectFlags param_3,
          uint param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  return (UTextureCube *)0x0;
}

// CreateResource @ 1488bb810

FTextureResource * __thiscall
UTextureRenderTargetCube::CreateResource(UTextureRenderTargetCube *this)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  FTextureRenderTargetResource *this_00;
  int iVar4;
  bool bVar5;
  
  if (this->bSupportsUAV != '\0') {
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (this->bAutoGenerateMips == '\0') {
    iVar4 = 1;
  }
  else {
    iVar2 = 0x1f;
    bVar5 = this->SizeX != 0;
    if (bVar5) {
      for (; (uint)this->SizeX >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar4 = 0;
    if (bVar5) {
      iVar4 = iVar2;
    }
    iVar4 = iVar4 + 1;
  }
  this->NumMips = iVar4;
  this_00 = ::operator_new(0xd0);
  if (this_00 != (FTextureRenderTargetResource *)0x0) {
    FTextureRenderTargetResource::FTextureRenderTargetResource(this_00);
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)&FTextureRenderTargetCubeResource::_vftable__for__FTextureResource__;
    this_00->_padding_ = (longlong)&FTextureRenderTargetCubeResource::_vftable__for__FRenderTarget__
    ;
    this_00->_padding_ =
         (longlong)&FTextureRenderTargetCubeResource::_vftable__for__FDeferredUpdateResource__;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    return (FTextureResource *)this_00;
  }
  return (FTextureResource *)0x0;
}

// GetDesc @ 1488c2700

FString * __thiscall
UTextureRenderTargetCube::GetDesc(UTextureRenderTargetCube *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x3d0))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"Render to Texture Cube %dx%d[%s]");
  return __return_storage_ptr__;
}

// GetDisplayGamma @ 1488c2b90

float __thiscall UTextureRenderTargetCube::GetDisplayGamma(UTextureRenderTargetCube *this)

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

// GetFormat @ 1488c3110

EPixelFormat __thiscall UTextureRenderTargetCube::GetFormat(UTextureRenderTargetCube *this)

{
  EPixelFormat EVar1;
  
  EVar1 = (this->OverrideFormat).Value;
  if (EVar1 == PF_Unknown) {
    EVar1 = this->bHDR << 3 | PF_B8G8R8A8;
  }
  return EVar1;
}

// GetMaterialType @ 1488c3500

EMaterialValueType __thiscall
UTextureRenderTargetCube::GetMaterialType(UTextureRenderTargetCube *this)

{
  return MCT_TextureCube;
}

// GetPrivateStaticClass @ 1488c4140

UClass * __cdecl UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTargetCube",
               &Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton,
               StaticRegisterNativesUTextureRenderTargetCube,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureRenderTargetCube>,
               InternalVTableHelperCtorCaller<UTextureRenderTargetCube>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton;
}

// GetRenderTargetTextureClass @ 1488c45e0

ETextureClass __thiscall
UTextureRenderTargetCube::GetRenderTargetTextureClass(UTextureRenderTargetCube *this)

{
  return Cube;
}

// GetResourceSizeEx @ 1488c46f0

void __thiscall
UTextureRenderTargetCube::GetResourceSizeEx(UTextureRenderTargetCube *this,FResourceSizeEx *param_1)

{
  byte bVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  bVar1 = (**(code **)(this->_padding_ + 0x3d0))(this);
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,(longlong)
                     (((this->SizeX + -1 + GPixelFormats[bVar1].BlockSizeY) /
                      GPixelFormats[bVar1].BlockSizeY) *
                      ((this->SizeX + -1 + GPixelFormats[bVar1].BlockSizeX) /
                      GPixelFormats[bVar1].BlockSizeX) * GPixelFormats[bVar1].BlockBytes * 6));
  return;
}

// GetSurfaceArraySize @ 1488c4f10

uint __thiscall UTextureRenderTargetCube::GetSurfaceArraySize(UTextureRenderTargetCube *this)

{
  return 6;
}

// GetSurfaceDepth @ 1488c4f40

float __thiscall UTextureRenderTargetCube::GetSurfaceDepth(UTextureRenderTargetCube *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 1488c4f90

float __thiscall UTextureRenderTargetCube::GetSurfaceHeight(UTextureRenderTargetCube *this)

{
  return (float)this->SizeX;
}

// GetSurfaceWidth @ 1488c4ff0

float __thiscall UTextureRenderTargetCube::GetSurfaceWidth(UTextureRenderTargetCube *this)

{
  return (float)this->SizeX;
}

// GetTextureUClass @ 1488c6550

TSubclassOf<UTexture> __thiscall
UTextureRenderTargetCube::GetTextureUClass(UTextureRenderTargetCube *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UTextureCube_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UTexture>)in_RDX.field0_0x0;
}

// Init @ 1488c7ee0

void __thiscall
UTextureRenderTargetCube::Init(UTextureRenderTargetCube *this,uint param_1,EPixelFormat param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSizeX > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetCube.cpp"
                       ,0x4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 % (uint)GPixelFormats[param_2].BlockSizeX != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(InSizeX % GPixelFormats[InFormat].BlockSizeX)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetCube.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FTextureRenderTargetResource::IsSupportedFormat(param_2);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTextureRenderTargetResource::IsSupportedFormat(InFormat)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetCube.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
  (this->OverrideFormat).Value = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001488c7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// InitAutoFormat @ 1488c82f0

void __thiscall
UTextureRenderTargetCube::InitAutoFormat(UTextureRenderTargetCube *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  EPixelFormat EVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSizeX > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetCube.cpp"
                       ,0x5c,L"");
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetCube.cpp"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar4 = (**(code **)(this->_padding_ + 0x3d0))(this);
  bVar2 = FTextureRenderTargetResource::IsSupportedFormat(EVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTextureRenderTargetResource::IsSupportedFormat(GetFormat())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTargetCube.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SizeX = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001488c83cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// IsSRGB @ 1488cd3f0

bool __thiscall UTextureRenderTargetCube::IsSRGB(UTextureRenderTargetCube *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x3e0))();
  return __real_38d1b717 <=
         (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// PostLoad @ 1488d1310

void __thiscall UTextureRenderTargetCube::PostLoad(UTextureRenderTargetCube *this)

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

// StaticRegisterNativesUTextureRenderTargetCube @ 1488e22b0

void __cdecl UTextureRenderTargetCube::StaticRegisterNativesUTextureRenderTargetCube(void)

{
  return;
}

// UpdateResourceImmediate @ 1488ebb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureRenderTargetCube::UpdateResourceImmediate(UTextureRenderTargetCube *this,bool param_1)

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
                  TFunctionRefCaller<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UTextureRenderTargetCube::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTextureRenderTargetCube::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate108>
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

