// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148702f70

UClass * __cdecl UAnimatedSparseVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimatedSparseVolumeTexture",
               &Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUAnimatedSparseVolumeTexture,0xb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimatedSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTexture>,local_res8,
               UStreamableSparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton;
}

// UAnimatedSparseVolumeTexture @ 148712cd0

UAnimatedSparseVolumeTexture * __thiscall
UAnimatedSparseVolumeTexture::UAnimatedSparseVolumeTexture
          (UAnimatedSparseVolumeTexture *this,FVTableHelper *param_1)

{
  UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
            ((UStreamableSparseVolumeTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__USparseVolumeTexture__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  return this;
}

// UAnimatedSparseVolumeTexture @ 148712d10

UAnimatedSparseVolumeTexture * __thiscall
UAnimatedSparseVolumeTexture::UAnimatedSparseVolumeTexture
          (UAnimatedSparseVolumeTexture *this,FObjectInitializer *param_1)

{
  UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
            ((UStreamableSparseVolumeTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__USparseVolumeTexture__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  return this;
}

// ~UAnimatedSparseVolumeTexture @ 148714b50

void __thiscall
UAnimatedSparseVolumeTexture::~UAnimatedSparseVolumeTexture(UAnimatedSparseVolumeTexture *this)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14873e5e0

UClass * __cdecl UAnimatedSparseVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimatedSparseVolumeTexture",
               &Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUAnimatedSparseVolumeTexture,0xb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimatedSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTexture>,local_res8,
               UStreamableSparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton;
}

// GetTextureRenderResources @ 148740610

FTextureRenderResources * __thiscall
UAnimatedSparseVolumeTexture::GetTextureRenderResources(UAnimatedSparseVolumeTexture *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FTextureRenderResources *pFVar4;
  uint uVar5;
  
  uVar1 = this->PreviewFrameIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)this->_padding_)) {
    uVar5 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTextureRenderResources *)(*pcVar2)();
        return pFVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000148740691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar4 = (FTextureRenderResources *)
             (**(code **)(**(longlong **)(this->_padding_ + (longlong)(int)uVar1 * 8) + 0x310))();
    return pFVar4;
  }
  return (FTextureRenderResources *)0x0;
}

// StaticRegisterNativesUAnimatedSparseVolumeTexture @ 14875d0e0

void __cdecl UAnimatedSparseVolumeTexture::StaticRegisterNativesUAnimatedSparseVolumeTexture(void)

{
  return;
}

