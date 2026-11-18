// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// GetTextureClass @ 14770af00

ETextureClass __thiscall UTextureRenderTarget::GetTextureClass(UTextureRenderTarget *this)

{
  return RenderTarget;
}

// StaticClass @ 1488a2d40

UClass * __cdecl UTextureRenderTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget",
               &Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton,
               StaticRegisterNativesUTextureRenderTarget,0x158,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTarget>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget>,local_res8,UTexture::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton;
}

// UTextureRenderTarget @ 1488b1440

UTextureRenderTarget * __thiscall
UTextureRenderTarget::UTextureRenderTarget(UTextureRenderTarget *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureRenderTarget @ 1488b1490

UTextureRenderTarget * __thiscall
UTextureRenderTarget::UTextureRenderTarget(UTextureRenderTarget *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  UTexture::UTexture((UTexture *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  this->bNeedsTwoCopies = 0;
  this->bTargetArraySlicesIndependently = 0;
  this->bCanCreateUAV = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->TargetGamma = 0.0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0x12;
  return this;
}

// ~UTextureRenderTarget @ 1488b2be0

void __thiscall UTextureRenderTarget::~UTextureRenderTarget(UTextureRenderTarget *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CanConvertToTexture @ 1488ba4a0

bool __thiscall UTextureRenderTarget::CanConvertToTexture(UTextureRenderTarget *this,FText *param_1)

{
  undefined1 uVar1;
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  
  uVar1 = (**(code **)(this->_padding_ + 0x3b8))(this,local_res18,local_res8,param_1);
  return (bool)uVar1;
}

// CanConvertToTexture @ 1488ba4d0

bool __thiscall
UTextureRenderTarget::CanConvertToTexture
          (UTextureRenderTarget *this,ETextureSourceFormat *param_1,EPixelFormat *param_2,
          FText *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureRenderTarget.h"
             ,0x41,L"Pure virtual not implemented (%s)");
  return false;
}

// CreateResource @ 1488bb800

FTextureResource * __thiscall UTextureRenderTarget::CreateResource(UTextureRenderTarget *this)

{
  return (FTextureResource *)0x0;
}

// GameThread_GetRenderTargetResource @ 1488c0460

FTextureRenderTargetResource * __thiscall
UTextureRenderTarget::GameThread_GetRenderTargetResource(UTextureRenderTarget *this)

{
  code *pcVar1;
  bool bVar2;
  FTextureRenderTargetResource *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextureRenderTargetResource *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = (FTextureRenderTargetResource *)UTexture::GetResource((UTexture *)this);
  return pFVar3;
}

// GetDefaultDisplayGamma @ 1488c2620

float __cdecl UTextureRenderTarget::GetDefaultDisplayGamma(void)

{
  return __real_400ccccd;
}

// GetDisplayGamma @ 1488c2b50

float __thiscall UTextureRenderTarget::GetDisplayGamma(UTextureRenderTarget *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureRenderTarget.h"
             ,0x53,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetFormat @ 1488c30e0

EPixelFormat __thiscall UTextureRenderTarget::GetFormat(UTextureRenderTarget *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureRenderTarget.h"
             ,0x51,L"Pure virtual not implemented (%s)");
  return PF_Unknown;
}

// GetMaterialType @ 1488c34f0

EMaterialValueType __thiscall UTextureRenderTarget::GetMaterialType(UTextureRenderTarget *this)

{
  return MCT_Texture;
}

// GetPrivateStaticClass @ 1488c4080

UClass * __cdecl UTextureRenderTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget",
               &Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton,
               StaticRegisterNativesUTextureRenderTarget,0x158,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTarget>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget>,local_res8,UTexture::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton;
}

// GetReadPixelsFormat @ 1488c44b0

Type __cdecl UTextureRenderTarget::GetReadPixelsFormat(EPixelFormat param_1,bool param_2)

{
  Type TVar1;
  Type TVar2;
  
  if ((!param_2) && (param_1 != PF_FloatRGBA)) {
    TVar1 = FImageCoreUtils::GetRawImageFormatForPixelFormat(param_1);
    if (TVar1 != BGRA8) {
      TVar2 = BGRA8;
      if (TVar1 != G8) {
        TVar2 = RGBA32F;
      }
      return TVar2;
    }
    return BGRA8;
  }
  return RGBA16F;
}

// GetRenderTargetResource @ 1488c4500

FTextureRenderTargetResource * __thiscall
UTextureRenderTarget::GetRenderTargetResource(UTextureRenderTarget *this)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FTextureRenderTargetResource *pFVar4;
  
  bVar2 = IsInRenderingThread();
  if (bVar2) goto LAB_1488c455c;
  bVar2 = IsInParallelRenderingThread();
  if (bVar2) {
    pFVar3 = UTexture::GetResource((UTexture *)this);
    if (pFVar3 == (FTextureResource *)0x0) goto LAB_1488c455c;
    pFVar3 = UTexture::GetResource((UTexture *)this);
    if ((int)pFVar3->_padding_ != -1) goto LAB_1488c455c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsInRenderingThread() || (IsInParallelRenderingThread() && (!GetResource() || GetResource()->IsInitialized()))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget.cpp"
                     ,0x2b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTextureRenderTargetResource *)(*pcVar1)();
    return pFVar4;
  }
LAB_1488c455c:
  pFVar3 = UTexture::GetResource((UTexture *)this);
  if (pFVar3 != (FTextureResource *)0x0) {
    pFVar3 = UTexture::GetResource((UTexture *)this);
    if ((int)pFVar3->_padding_ != -1) {
      pFVar4 = (FTextureRenderTargetResource *)UTexture::GetResource((UTexture *)this);
      return pFVar4;
    }
  }
  return (FTextureRenderTargetResource *)0x0;
}

// GetRenderTargetTextureClass @ 1488c45b0

ETextureClass __thiscall
UTextureRenderTarget::GetRenderTargetTextureClass(UTextureRenderTarget *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureRenderTarget.h"
             ,0x4f,L"Pure virtual not implemented (%s)");
  return Invalid;
}

// GetTextureUClass @ 1488c6510

TSubclassOf<UTexture> __thiscall UTextureRenderTarget::GetTextureUClass(UTextureRenderTarget *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureRenderTarget.h"
             ,0x4d,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UTexture>)in_RDX.field0_0x0;
}

// IsSRGB @ 1488cd3c0

bool __thiscall UTextureRenderTarget::IsSRGB(UTextureRenderTarget *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureRenderTarget.h"
             ,0x52,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUTextureRenderTarget @ 1488e22a0

void __cdecl UTextureRenderTarget::StaticRegisterNativesUTextureRenderTarget(void)

{
  return;
}

// ValidateTextureFormatForConversionToTextureInternal @ 1488ec150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETextureSourceFormat __thiscall
UTextureRenderTarget::ValidateTextureFormatForConversionToTextureInternal
          (UTextureRenderTarget *this,EPixelFormat param_1,
          TArrayView<EPixelFormat_const_,int> *param_2,FText *param_3)

{
  uint uVar1;
  EPixelFormat *pEVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  ETextureSourceFormat EVar7;
  EPixelFormat *pEVar8;
  size_t sVar9;
  FText *pFVar10;
  ulonglong *puVar11;
  UClass *pUVar12;
  FText *pFVar13;
  FText *pFVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  int iVar20;
  ulonglong uVar21;
  EPixelFormat *pEVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  undefined1 local_res18 [8];
  FText *local_res20;
  ForAnyElementType local_118;
  uint local_110;
  uint local_10c;
  wchar_t *local_108;
  FString local_100;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  undefined1 local_c0 [8];
  FText local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res20 = param_3;
  if (param_2->ArrayNum != 0) {
    pEVar22 = param_2->DataPtr;
    pEVar2 = pEVar22 + param_2->ArrayNum;
    pEVar8 = pEVar22;
    while( true ) {
      if (pEVar8 == pEVar2) {
        if (param_3 != (FText *)0x0) {
          uVar24 = 0;
          local_110 = 0;
          local_118.Data = (FScriptContainerElement *)0x0;
          local_10c = 0;
          uVar21 = uVar24;
          if (pEVar22 != pEVar2) {
            do {
              local_108 = GetPixelFormatString(*pEVar22);
              if (((local_118.Data <= (FScriptContainerElement *)&local_108) &&
                  ((FScriptContainerElement *)&local_108 <
                   local_118.Data + (longlong)(int)local_10c * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              if (local_110 == local_10c) {
                local_110 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_118,(int *)&local_10c);
              }
              uVar1 = local_110 + 1;
              pEVar22 = pEVar22 + 1;
              *(wchar_t **)(local_118.Data + (longlong)(int)local_110 * 8) = local_108;
              local_110 = uVar1;
            } while (pEVar22 != pEVar2);
            uVar21 = (ulonglong)uVar1;
          }
          iVar20 = (int)uVar21;
          bVar5 = true;
          local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.Data.ArrayNum = 0;
          local_100.Data.ArrayMax = 0;
          pFVar3 = local_118.Data + (longlong)iVar20 * 8;
          FVar23.Data = local_118.Data;
          while( true ) {
            if ((int)uVar21 != iVar20) {
              `TCheckedPointerIterator<wchar_t_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (FVar23.Data == pFVar3) break;
            if (bVar5) {
              bVar5 = false;
            }
            else {
              ::FString::AppendChars(&local_100,L",",1);
            }
            sVar9 = wcslen(*(wchar_t **)FVar23.Data);
            ::FString::AppendChars(&local_100,*(wchar_t **)FVar23.Data,(int)sVar9);
            uVar21 = (ulonglong)local_110;
            FVar23.Data = FVar23.Data + 8;
          }
          pFVar10 = FText::FromString(&local_88,&local_100);
          puVar11 = (ulonglong *)(**(code **)(this->_padding_ + 0x3c0))(this,local_c0);
          uVar21 = *puVar11;
          if ((uVar21 != 0) &&
             (pUVar12 = Z_Construct_UClass_UTexture_NoRegister(), pUVar12 != (UClass *)0x0)) {
            iVar20 = (int)pUVar12->_padding_;
            if ((*(int *)(uVar21 + 0x38) < iVar20) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(uVar21 + 0x30) + (longlong)iVar20 * 8) !=
                &pUVar12->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uVar24 = *puVar11;
            }
          }
          local_f0 = *(FName *)(uVar24 + 0x18);
          ::FName::ToString(&local_f0,&local_d0);
          pFVar13 = FText::FromString(&local_78,&local_d0);
          local_e8 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_e8,&local_e0);
          pFVar14 = FText::FromString(&local_68,&local_e0);
          pwVar15 = GetPixelFormatString(param_1);
          pFVar16 = ::FString::FString(&local_98,pwVar15);
          pFVar17 = FText::FromString(&local_58,pFVar16);
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_a8,L"TextureRenderTarget",
                               L"UnsupportedFormatForConversionToTexture",
                               L"Unsupported format ({0}) for converting {1} to {2}. Supported formats are: {3}"
                              );
          pFVar19 = FTextFormat::FTextFormat(&local_48,pFVar18,Default);
          pFVar10 = FText::Format<FText,FText,FText,FText>
                              (&local_b8,pFVar19,pFVar17,pFVar14,pFVar13,pFVar10);
          FText::operator=(local_res20,pFVar10);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data);
          }
        }
        return TSF_Invalid;
      }
      if (*pEVar8 == param_1) break;
      pEVar8 = pEVar8 + 1;
    }
  }
  TVar6 = FImageCoreUtils::GetRawImageFormatForPixelFormat(param_1);
  EVar7 = FImageCoreUtils::ConvertToTextureSourceFormat(TVar6);
  return EVar7;
}

