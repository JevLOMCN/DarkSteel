// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 148875460

UClass * __cdecl UTexture2DDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DDynamic",
               &Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton,
               StaticRegisterNativesUTexture2DDynamic,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTexture2DDynamic>,
               InternalVTableHelperCtorCaller<UTexture2DDynamic>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton;
}

// UTexture2DDynamic @ 14887e1b0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UTexture2DDynamic * __thiscall
UTexture2DDynamic::UTexture2DDynamic(UTexture2DDynamic *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTexture2DDynamic @ 14887e200

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UTexture2DDynamic * __thiscall
UTexture2DDynamic::UTexture2DDynamic(UTexture2DDynamic *this,FObjectInitializer *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->Format).Value = '\x02';
  this->SamplerAddressMode = AM_Wrap;
  return this;
}

// ~UTexture2DDynamic @ 14887ef40

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall UTexture2DDynamic::~UTexture2DDynamic(UTexture2DDynamic *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// Create @ 148884fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2DDynamic * __cdecl
UTexture2DDynamic::Create(int param_1,int param_2,FTexture2DDynamicCreateInfo *param_3)

{
  EPixelFormat EVar1;
  bool bVar2;
  undefined1 uVar3;
  FName FVar4;
  FName FVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UTexture2DDynamic *pUVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  EVar1 = param_3->Format;
  if ((param_1 < 1) || (param_2 < 1)) {
    if (2 < (byte)LogTexture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    }
    pUVar8 = (UTexture2DDynamic *)0x0;
  }
  else {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar6 = GetTransientPackage();
    FVar4 = local_b8;
    if (local_b8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    FVar5 = local_b8;
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_b8.ComparisonIndex = FVar4.ComparisonIndex.Value;
    local_b8.Number = FVar4.Number;
    local_a8._16_4_ = local_b8.ComparisonIndex.Value;
    local_a8._20_4_ = local_b8.Number;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_b8 = FVar5;
    local_a8._8_8_ = pUVar6;
    pUVar8 = (UTexture2DDynamic *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar8 != (UTexture2DDynamic *)0x0) {
      *(char *)((longlong)&pUVar8->_padding_ + 1) = (char)param_3->Filter;
      pUVar8->SamplerAddressMode = param_3->SamplerAddressMode;
      bVar9 = *(byte *)((longlong)&pUVar8->_padding_ + 6);
      bVar2 = param_3->bSRGB;
      *(undefined1 *)&pUVar8->_padding_ = 0;
      bVar9 = (bVar9 ^ bVar2) & 1 ^ bVar9;
      *(byte *)((longlong)&pUVar8->_padding_ + 6) = bVar9;
      bVar10 = bVar9 & 0xfd;
      if (param_3->bIsResolveTarget == false) {
        bVar10 = bVar9 | 2;
      }
      *(byte *)((longlong)&pUVar8->_padding_ + 6) = bVar10;
      bVar2 = param_3->bIsResolveTarget;
      uVar3 = pUVar8->field_0x159;
      pUVar8->SizeX = param_1;
      pUVar8->SizeY = param_2;
      (pUVar8->Format).Value = EVar1;
      pUVar8->NumMips = 1;
      pUVar8->field_0x159 = (pUVar8->bIsResolveTarget ^ bVar2) & 1 ^ uVar3;
      (**(code **)(pUVar8->_padding_ + 0x328))(pUVar8);
    }
  }
  return pUVar8;
}

// Create @ 1488851c0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UTexture2DDynamic * __cdecl UTexture2DDynamic::Create(int param_1,int param_2,EPixelFormat param_3)

{
  UTexture2DDynamic *pUVar1;
  FTexture2DDynamicCreateInfo local_18 [2];
  
  local_18[0].bIsResolveTarget = false;
  local_18[0].bSRGB = true;
  local_18[0].Filter = TF_Default;
  local_18[0].SamplerAddressMode = AM_Wrap;
  local_18[0].Format = param_3;
  pUVar1 = Create(param_1,param_2,local_18);
  return pUVar1;
}

// Create @ 1488851f0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UTexture2DDynamic * __cdecl
UTexture2DDynamic::Create(int param_1,int param_2,EPixelFormat param_3,bool param_4)

{
  UTexture2DDynamic *pUVar1;
  FTexture2DDynamicCreateInfo local_18 [2];
  
  local_18[0].bSRGB = true;
  local_18[0].Filter = TF_Default;
  local_18[0].SamplerAddressMode = AM_Wrap;
  local_18[0].Format = param_3;
  local_18[0].bIsResolveTarget = param_4;
  pUVar1 = Create(param_1,param_2,local_18);
  return pUVar1;
}

// CreateResource @ 148887ed0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

FTextureResource * __thiscall UTexture2DDynamic::CreateResource(UTexture2DDynamic *this)

{
  FTextureResource *this_00;
  
  this_00 = ::operator_new(0x70);
  if (this_00 != (FTextureResource *)0x0) {
    FTexture::FTexture((FTexture *)this_00);
    (this_00->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    this_00->_padding_ = (longlong)&___7FTexture2DDynamicResource__6B_;
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = 0;
    return this_00;
  }
  return (FTextureResource *)0x0;
}

// GetMaterialType @ 14888dfc0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

EMaterialValueType __thiscall UTexture2DDynamic::GetMaterialType(UTexture2DDynamic *this)

{
  return MCT_Texture2D;
}

// GetPrivateStaticClass @ 14888faa0

UClass * __cdecl UTexture2DDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DDynamic",
               &Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton,
               StaticRegisterNativesUTexture2DDynamic,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTexture2DDynamic>,
               InternalVTableHelperCtorCaller<UTexture2DDynamic>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DDynamic.InnerSingleton;
}

// GetSurfaceArraySize @ 148892e90

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

uint __thiscall UTexture2DDynamic::GetSurfaceArraySize(UTexture2DDynamic *this)

{
  return 0;
}

// GetSurfaceDepth @ 148892f00

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

float __thiscall UTexture2DDynamic::GetSurfaceDepth(UTexture2DDynamic *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 148892f70

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

float __thiscall UTexture2DDynamic::GetSurfaceHeight(UTexture2DDynamic *this)

{
  return (float)this->SizeY;
}

// GetSurfaceWidth @ 148893030

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

float __thiscall UTexture2DDynamic::GetSurfaceWidth(UTexture2DDynamic *this)

{
  return (float)this->SizeX;
}

// GetTextureClass @ 148893120

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

ETextureClass __thiscall UTexture2DDynamic::GetTextureClass(UTexture2DDynamic *this)

{
  return TwoDDynamic;
}

// Init @ 148893a30

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UTexture2DDynamic::Init
          (UTexture2DDynamic *this,int param_1,int param_2,EPixelFormat param_3,bool param_4)

{
  this->bIsResolveTarget = '\0';
  this->field_0x159 = this->field_0x159 | param_4;
  this->SizeX = param_1;
  this->SizeY = param_2;
  (this->Format).Value = param_3;
  this->NumMips = 1;
                    /* WARNING: Could not recover jumptable at 0x000148893a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))();
  return;
}

// StaticRegisterNativesUTexture2DDynamic @ 14889bb80

void __cdecl UTexture2DDynamic::StaticRegisterNativesUTexture2DDynamic(void)

{
  return;
}

