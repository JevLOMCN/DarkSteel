// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 11

// StaticClass @ 145ef1d50

UClass * __cdecl ULandscapeMaterialInstanceConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMaterialInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMaterialInstanceConstant",
               &Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.InnerSingleton,
               StaticRegisterNativesULandscapeMaterialInstanceConstant,0x300,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeMaterialInstanceConstant>,
               InternalVTableHelperCtorCaller<ULandscapeMaterialInstanceConstant>,local_res8,
               UMaterialInstanceConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.InnerSingleton;
}

// ULandscapeMaterialInstanceConstant @ 145ef3bb0

ULandscapeMaterialInstanceConstant * __thiscall
ULandscapeMaterialInstanceConstant::ULandscapeMaterialInstanceConstant
          (ULandscapeMaterialInstanceConstant *this,FVTableHelper *param_1)

{
  UMaterialInstanceConstant::UMaterialInstanceConstant((UMaterialInstanceConstant *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->TextureStreamingInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureStreamingInfo).ArrayNum = 0;
  (this->TextureStreamingInfo).ArrayMax = 0;
  return this;
}

// ~ULandscapeMaterialInstanceConstant @ 145ef4320

void __thiscall
ULandscapeMaterialInstanceConstant::~ULandscapeMaterialInstanceConstant
          (ULandscapeMaterialInstanceConstant *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->TextureStreamingInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialInstanceConstant::~UMaterialInstanceConstant((UMaterialInstanceConstant *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5950

UClass * __cdecl ULandscapeMaterialInstanceConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMaterialInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMaterialInstanceConstant",
               &Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.InnerSingleton,
               StaticRegisterNativesULandscapeMaterialInstanceConstant,0x300,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeMaterialInstanceConstant>,
               InternalVTableHelperCtorCaller<ULandscapeMaterialInstanceConstant>,local_res8,
               UMaterialInstanceConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.InnerSingleton;
}

// StaticRegisterNativesULandscapeMaterialInstanceConstant @ 145ef6080

void __cdecl
ULandscapeMaterialInstanceConstant::StaticRegisterNativesULandscapeMaterialInstanceConstant(void)

{
  return;
}

// ULandscapeMaterialInstanceConstant @ 145f7bc50

ULandscapeMaterialInstanceConstant * __thiscall
ULandscapeMaterialInstanceConstant::ULandscapeMaterialInstanceConstant
          (ULandscapeMaterialInstanceConstant *this,FObjectInitializer *param_1)

{
  UMaterialInstanceConstant::UMaterialInstanceConstant((UMaterialInstanceConstant *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->bIsLayerThumbnail = 0;
  (this->TextureStreamingInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureStreamingInfo).ArrayNum = 0;
  (this->TextureStreamingInfo).ArrayMax = 0;
  return this;
}

// AllocatePermutationResource @ 145f81750

FMaterialResource * __thiscall
ULandscapeMaterialInstanceConstant::AllocatePermutationResource
          (ULandscapeMaterialInstanceConstant *this)

{
  FMaterialResource *this_00;
  
  this_00 = ::operator_new(0x168);
  if (this_00 != (FMaterialResource *)0x0) {
    FMaterialResource::FMaterialResource(this_00);
    this_00->_padding_ = (longlong)&___7FLandscapeMaterialResource__6B_;
    *(byte *)&this_00[1]._padding_ = this->bIsLayerThumbnail;
    *(byte *)((longlong)&this_00[1]._padding_ + 1) = this->bMobile;
    *(byte *)((longlong)&this_00[1]._padding_ + 2) = this->bEditorToolUsage;
    return this_00;
  }
  return (FMaterialResource *)0x0;
}

// GetLandscapeTexelFactor @ 145f92c60

float __thiscall
ULandscapeMaterialInstanceConstant::GetLandscapeTexelFactor
          (ULandscapeMaterialInstanceConstant *this,FName *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->TextureStreamingInfo).ArrayNum;
  pFVar3 = (FName *)(this->TextureStreamingInfo).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar3 + (longlong)iVar2 * 0xc);
  while( true ) {
    if ((this->TextureStreamingInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FLandscapeMaterialTextureStreamingInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == *param_1) {
      return (float)pFVar3[1].ComparisonIndex.Value;
    }
    pFVar3 = (FName *)&pFVar3[1].Number;
  }
  return __real_3f800000;
}

// HasOverridenBaseProperties @ 145f96d00

bool __thiscall
ULandscapeMaterialInstanceConstant::HasOverridenBaseProperties
          (ULandscapeMaterialInstanceConstant *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      return true;
    }
  }
  bVar3 = UMaterialInstance::HasOverridenBaseProperties((UMaterialInstance *)this);
  return bVar3;
}

// PostLoad @ 145f9beb0

void __thiscall
ULandscapeMaterialInstanceConstant::PostLoad(ULandscapeMaterialInstanceConstant *this)

{
  FLLMScope aFStackX_10 [2];
  FMemScope aFStackX_18 [2];
  
  FLLMScope::FLLMScope(aFStackX_10,Materials,false,None,Default,true);
  FMemScope::FMemScope(aFStackX_18,Materials,true);
  UMaterialInstance::PostLoad((UMaterialInstance *)this);
  FMemScope::~FMemScope(aFStackX_18);
  FLLMScope::~FLLMScope(aFStackX_10);
  return;
}

// WritesToRuntimeVirtualTexture @ 145fa9110

bool __thiscall
ULandscapeMaterialInstanceConstant::WritesToRuntimeVirtualTexture
          (ULandscapeMaterialInstanceConstant *this)

{
  bool bVar1;
  
  if (this->bIsLayerThumbnail == 0) {
    bVar1 = UMaterialInstance::WritesToRuntimeVirtualTexture((UMaterialInstance *)this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

