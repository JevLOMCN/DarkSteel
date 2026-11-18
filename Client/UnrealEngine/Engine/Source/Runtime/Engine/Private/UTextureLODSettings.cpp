// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 147b16ea0

UClass * __cdecl UTextureLODSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLODSettings",
               &Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton,
               StaticRegisterNativesUTextureLODSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"DeviceProfiles",InternalConstructor<UTextureLODSettings>,
               InternalVTableHelperCtorCaller<UTextureLODSettings>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton;
}

// UTextureLODSettings @ 1488b10f0

UTextureLODSettings * __thiscall
UTextureLODSettings::UTextureLODSettings(UTextureLODSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTextureLODSettings__6B_;
  (this->TextureLODGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureLODGroups).ArrayNum = 0;
  (this->TextureLODGroups).ArrayMax = 0;
  return this;
}

// UTextureLODSettings @ 1488b1130

UTextureLODSettings * __thiscall
UTextureLODSettings::UTextureLODSettings(UTextureLODSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTextureLODSettings__6B_;
  (this->TextureLODGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureLODGroups).ArrayNum = 0;
  (this->TextureLODGroups).ArrayMax = 0;
  return this;
}

// ~UTextureLODSettings @ 1488b2ae0

void __thiscall UTextureLODSettings::~UTextureLODSettings(UTextureLODSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTextureLODSettings__6B_;
  pFVar1 = (this->TextureLODGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateLODBias @ 1488b9a80

int __thiscall
UTextureLODSettings::CalculateLODBias
          (UTextureLODSettings *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,TextureMipGenSettings param_7,bool param_8)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FString local_28;
  
  if ((this->TextureLODGroups).ArrayNum <= param_4) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODGroup < TextureLODGroups.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                       ,0xb2,
                       L"A texture had passed a bad LODGroup to UTextureLODSettings::CalculateLODBias (%d, out of %d groups). This code does not have the texture name. The LODSettings object is \'%s\'"
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  uVar7 = 0;
  if (param_4 < (this->TextureLODGroups).ArrayNum) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar2 = (this->TextureLODGroups).AllocatorInstance.Data;
  if (param_7 == TMGS_FromTextureGroup) {
    param_7 = (TextureMipGenSettings)(byte)pFVar2[(longlong)param_4 * 0x60 + 2];
  }
  if ((param_8) || (param_7 != TMGS_NoMipmaps)) {
    iVar6 = param_2;
    if (0 < param_3) {
      iVar6 = param_3;
      if (param_1 < param_3) {
        iVar6 = param_1;
      }
      param_1 = iVar6;
      iVar6 = param_3;
      if (param_2 < param_3) {
        iVar6 = param_2;
      }
    }
    iVar6 = FImageCoreUtils::GetMipCountFromDimensions(param_1,iVar6,0,false);
    if (param_8) {
      param_6 = 0;
    }
    iVar6 = iVar6 + -1;
    if (param_4 == 0x10) {
      param_6 = param_6 + GUITextureLODBias;
    }
    iVar8 = 1;
    if (*(int *)(pFVar2 + (longlong)param_4 * 0x60 + 0x1c) != 0) {
      iVar8 = *(int *)(pFVar2 + (longlong)param_4 * 0x60 + 0x1c);
    }
    uVar1 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar8 = (int)lVar3;
    iVar9 = 1;
    if (*(int *)(pFVar2 + (longlong)param_4 * 0x60 + 0x20) != 0) {
      iVar9 = *(int *)(pFVar2 + (longlong)param_4 * 0x60 + 0x20);
    }
    uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar9 = (int)lVar3;
    if (param_8) {
      iVar8 = 0;
      iVar9 = iVar6;
      if (0 < *(int *)(pFVar2 + (longlong)param_4 * 0x60 + 0x2c)) {
        uVar1 = (ulonglong)(*(int *)(pFVar2 + (longlong)param_4 * 0x60 + 0x2c) - 1) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar9 = (int)lVar3;
      }
    }
    if (iVar6 - param_6 < iVar9) {
      iVar9 = iVar6 - param_6;
    }
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    iVar9 = iVar6;
    if (iVar8 < iVar6) {
      iVar9 = iVar8;
    }
    iVar8 = 0;
    if (0 < iVar9) {
      iVar8 = iVar9;
    }
    iVar6 = iVar6 - iVar8;
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}

// CalculateLODBias @ 1488b9c90

int __thiscall
UTextureLODSettings::CalculateLODBias(UTextureLODSettings *this,UTexture *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 == (UTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                       ,0xa0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  fVar4 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1);
  fVar5 = (float)(**(code **)(param_1->_padding_ + 0x370))(param_1);
  bVar2 = (bool)(**(code **)(param_1->_padding_ + 0x348))(param_1);
  if (param_2) {
    iVar3 = (int)param_1->_padding_;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = CalculateLODBias(this,(int)ROUND(fVar4 + fVar4 + __real_3f000000) >> 1,
                           (int)ROUND(fVar5 + fVar5 + __real_3f000000) >> 1,0,
                           (uint)(param_1->LODGroup).Value,param_1->LODBias,iVar3,TMGS_MAX,bVar2);
  return iVar3;
}

// CalculateNumOptionalMips @ 1488b9d90

int __thiscall
UTextureLODSettings::CalculateNumOptionalMips
          (UTextureLODSettings *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          TextureMipGenSettings param_6)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("FPlatformProperties::RequiresCookedData() == false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                     ,0x101,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar7 = 0;
  if (param_1 < (this->TextureLODGroups).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pFVar2 = (this->TextureLODGroups).AllocatorInstance.Data;
  if (param_6 == TMGS_FromTextureGroup) {
    param_6 = (TextureMipGenSettings)(byte)pFVar2[(longlong)param_1 * 0x60 + 2];
  }
  if (param_6 == TMGS_NoMipmaps) {
    return 0;
  }
  iVar6 = 1;
  if (*(int *)(pFVar2 + (longlong)param_1 * 0x60 + 0x34) != 0) {
    iVar6 = *(int *)(pFVar2 + (longlong)param_1 * 0x60 + 0x34);
  }
  uVar1 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar8 = (int)lVar3 + 1;
  iVar6 = param_4;
  if (iVar8 < param_4) {
    iVar6 = iVar8;
  }
  iVar6 = (*(int *)(pFVar2 + (longlong)param_1 * 0x60 + 0x30) - iVar6) + param_4;
  if (iVar6 < param_5) {
    param_5 = iVar6;
  }
  return param_5;
}

// GetMipLoadOptions @ 1488c35d0

ETextureMipLoadOptions __thiscall
UTextureLODSettings::GetMipLoadOptions(UTextureLODSettings *this,UTexture *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ETextureMipLoadOptions EVar4;
  FScriptContainerElement FVar5;
  
  if (param_1 == (UTexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                       ,0x1be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  FVar5 = (FScriptContainerElement)param_1->MipLoadOptions;
  if (FVar5 == (FScriptContainerElement)0x0) {
    bVar1 = (param_1->LODGroup).Value;
    if ((this->TextureLODGroups).ArrayNum <= (int)(uint)bVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    FVar5 = (this->TextureLODGroups).AllocatorInstance.Data[(ulonglong)bVar1 * 0x60 + 3];
  }
  return (ETextureMipLoadOptions)FVar5;
}

// GetPrivateStaticClass @ 1488c3d90

UClass * __cdecl UTextureLODSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLODSettings",
               &Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton,
               StaticRegisterNativesUTextureLODSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"DeviceProfiles",InternalConstructor<UTextureLODSettings>,
               InternalVTableHelperCtorCaller<UTextureLODSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton;
}

// GetSamplerFilter @ 1488c4830

ETextureSamplerFilter __thiscall
UTextureLODSettings::GetSamplerFilter(UTextureLODSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ETextureSamplerFilter EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->TextureLODGroups).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (ETextureSamplerFilter)
         (this->TextureLODGroups).AllocatorInstance.Data[(longlong)param_1 * 0x60 + 1];
}

// GetSamplerFilter @ 1488c48b0

ETextureSamplerFilter __thiscall
UTextureLODSettings::GetSamplerFilter(UTextureLODSettings *this,UTexture *param_1)

{
  uchar uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ETextureSamplerFilter EVar5;
  
  uVar1 = (param_1->Filter).Value;
  if (uVar1 == '\0') {
    return Point;
  }
  if (uVar1 != '\x01') {
    if (uVar1 == '\x02') {
      return Trilinear;
    }
    bVar2 = (param_1->LODGroup).Value;
    if ((this->TextureLODGroups).ArrayNum <= (int)(uint)bVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    return (ETextureSamplerFilter)
           (this->TextureLODGroups).AllocatorInstance.Data[(ulonglong)bVar2 * 0x60 + 1];
  }
  return Bilinear;
}

// GetTextureGroupNames @ 1488c51b0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UTextureLODSettings::GetTextureGroupNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0x52,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_World");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_WorldNormalMap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_WorldSpecular");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Character");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_CharacterNormalMap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_CharacterSpecular");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Weapon");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_WeaponNormalMap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_WeaponSpecular");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Vehicle");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_VehicleNormalMap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_VehicleSpecular");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Cinematic");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Effects");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_EffectsNotFiltered");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Skybox");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_UI");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Lightmap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_RenderTarget");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_MobileFlattened");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_ProcBuilding_Face");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_ProcBuilding_LightMap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Shadowmap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_ColorLookupTable");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Terrain_Heightmap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Terrain_Weightmap");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Bokeh");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_IESLightProfile");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Pixels2D");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_HierarchicalLOD");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Impostor");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_ImpostorNormalDepth");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_8BitData");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_16BitData");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project01");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project02");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project03");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project04");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project05");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project06");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project07");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project08");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project09");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project10");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project11");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project12");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project13");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project14");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project15");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project16");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project17");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project18");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project19");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project20");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project21");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project22");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project23");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project24");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project25");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project26");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project27");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project28");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project29");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project30");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project31");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project32");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project33");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project34");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project35");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project36");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project37");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project38");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project39");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project40");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project41");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project42");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project43");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project44");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project45");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project46");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)(pFVar2 + (longlong)iVar5 * 0x10),L"TEXTUREGROUP_Project47");
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                     L"TEXTUREGROUP_Project48");
  if (__return_storage_ptr__->ArrayNum != 0x52) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureGroupNames.Num() == TEXTUREGROUP_MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                       ,0x94,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetTextureLODGroup @ 1488c6290

FTextureLODGroup * __thiscall
UTextureLODSettings::GetTextureLODGroup(UTextureLODSettings *this,TextureGroup param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTextureLODGroup *pFVar4;
  
  if (TEXTUREGROUP_Project48 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupIndex >= 0 && GroupIndex < TEXTUREGROUP_MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTextureLODGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->TextureLODGroups).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTextureLODGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FTextureLODGroup *)
         ((this->TextureLODGroups).AllocatorInstance.Data + (longlong)(int)param_1 * 0x60);
}

// GetTextureLODGroup @ 1488c6330

FTextureLODGroup * __thiscall
UTextureLODSettings::GetTextureLODGroup(UTextureLODSettings *this,TextureGroup param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTextureLODGroup *pFVar4;
  
  if (TEXTUREGROUP_Project48 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupIndex >= 0 && GroupIndex < TEXTUREGROUP_MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureLODSettings.cpp"
                       ,0x129,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTextureLODGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->TextureLODGroups).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTextureLODGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FTextureLODGroup *)
         ((this->TextureLODGroups).AllocatorInstance.Data + (longlong)(int)param_1 * 0x60);
}

// GetTextureMipGenSettings @ 1488c63d0

TextureMipGenSettings __thiscall
UTextureLODSettings::GetTextureMipGenSettings(UTextureLODSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TextureMipGenSettings TVar4;
  
  uVar3 = 0;
  if (param_1 < (this->TextureLODGroups).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (*pcVar1)();
      return TVar4;
    }
  }
  return (TextureMipGenSettings)
         (byte)(this->TextureLODGroups).AllocatorInstance.Data[(longlong)param_1 * 0x60 + 2];
}

// SetPreviewTextureGroupRedirect @ 1488df0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UTextureLODSettings::SetPreviewTextureGroupRedirect
          (UTextureLODSettings *this,UTextureLODSettings *param_1)

{
  int iVar1;
  code *pcVar2;
  FUObjectItem *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FUObjectItem *pFVar6;
  UClass *pUVar7;
  UObjectBase *pUVar8;
  TIterator local_38;
  UClass *local_20;
  EObjectFlags local_18;
  EInternalObjectFlags local_14;
  
  if (this->PreviewTextureGroupRedirect != param_1) {
    this->PreviewTextureGroupRedirect = param_1;
    pUVar5 = Z_Construct_UClass_UTexture_NoRegister();
    local_38.Index = -1;
    local_38.Array = &GUObjectArray;
    local_38.CurrentObject = (FUObjectItem *)0x0;
    FUObjectArray::TIterator::Advance(&local_38);
    local_18 = RF_NoFlags;
    local_20 = pUVar5;
    local_14 = UE::GetAsyncLoadingInternalFlagsExclusion();
    local_14 = local_14 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
    if ((pUVar5 == (UClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Class",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                           ,0x70,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&(local_38.Array)->ObjObjectsCritical);
    do {
      pFVar3 = local_38.CurrentObject;
      if (local_38.CurrentObject == (FUObjectItem *)0x0) {
        pUVar8 = (UObjectBase *)0x0;
      }
      else {
        pUVar8 = ((local_38.CurrentObject)->field1_0x8).Object;
      }
      if (((local_18 & pUVar8->ObjectFlags) == RF_NoFlags) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar8->InternalIndex),
         (local_14 &
         (EInternalObjectFlags)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed)) {
        pUVar7 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar5 == pUVar7) break;
        pUVar7 = (pUVar8->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= (int)pUVar7->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) break;
      }
      bVar4 = FUObjectArray::TIterator::Advance(&local_38);
      pUVar5 = local_20;
      pFVar3 = local_38.CurrentObject;
    } while (bVar4);
joined_r0x0001488df1ea:
    if (pFVar3 != (FUObjectItem *)0x0) {
      pUVar8 = (pFVar3->field1_0x8).Object;
      if (pUVar8 == (UObjectBase *)0x0) {
LAB_1488df21c:
        pUVar8 = (UObjectBase *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_UTexture_NoRegister();
        pUVar5 = (pUVar8->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) goto LAB_1488df21c;
      }
      pUVar7 = UTextureRenderTarget::StaticClass();
      pUVar5 = (pUVar8->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        (**(code **)(pUVar8->_padding_ + 0x328))(pUVar8);
      }
LAB_1488df250:
      do {
        do {
          bVar4 = FUObjectArray::TIterator::Advance(&local_38);
          pFVar3 = local_38.CurrentObject;
          if (!bVar4) goto joined_r0x0001488df1ea;
          if (local_38.CurrentObject == (FUObjectItem *)0x0) {
            pUVar8 = (UObjectBase *)0x0;
          }
          else {
            pUVar8 = ((local_38.CurrentObject)->field1_0x8).Object;
          }
        } while ((local_18 & pUVar8->ObjectFlags) != RF_NoFlags);
        pUVar5 = Z_Construct_UClass_UObject_NoRegister();
        if (local_20 != pUVar5) {
          pUVar5 = (pUVar8->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar1 = (int)local_20->_padding_;
          if (((int)pUVar5->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
              &local_20->_padding_)) goto LAB_1488df250;
        }
        pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar8->InternalIndex);
      } while ((local_14 &
               (EInternalObjectFlags)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x0001488df1ea;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&(local_38.Array)->ObjObjectsCritical);
  }
  return;
}

// SetupLODGroup @ 1488e0140

void __thiscall UTextureLODSettings::SetupLODGroup(UTextureLODSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->TextureLODGroups).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTextureLODGroup::SetupGroup
            ((FTextureLODGroup *)
             ((this->TextureLODGroups).AllocatorInstance.Data + (longlong)param_1 * 0x60));
  return;
}

// StaticRegisterNativesUTextureLODSettings @ 1488e2260

void __cdecl UTextureLODSettings::StaticRegisterNativesUTextureLODSettings(void)

{
  return;
}

