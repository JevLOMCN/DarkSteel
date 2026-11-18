// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148998170

UClass * __cdecl UVirtualTexturePoolConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTexturePoolConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTexturePoolConfig",
               &Z_Registration_Info_UClass_UVirtualTexturePoolConfig.InnerSingleton,
               StaticRegisterNativesUVirtualTexturePoolConfig,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UVirtualTexturePoolConfig>,
               InternalVTableHelperCtorCaller<UVirtualTexturePoolConfig>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTexturePoolConfig.InnerSingleton;
}

// UVirtualTexturePoolConfig @ 1489b7290

UVirtualTexturePoolConfig * __thiscall
UVirtualTexturePoolConfig::UVirtualTexturePoolConfig
          (UVirtualTexturePoolConfig *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultSizeInMegabyte = 0x40;
  this->_padding_ = (longlong)&___7UVirtualTexturePoolConfig__6B_;
  (this->Pools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pools).ArrayNum = 0;
  (this->Pools).ArrayMax = 0;
  (this->TransientPools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientPools).ArrayNum = 0;
  (this->TransientPools).ArrayMax = 0;
  this->bPoolAutoGrowInEditor = true;
  return this;
}

// UVirtualTexturePoolConfig @ 1489b72e0

UVirtualTexturePoolConfig * __thiscall
UVirtualTexturePoolConfig::UVirtualTexturePoolConfig
          (UVirtualTexturePoolConfig *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultSizeInMegabyte = 0x40;
  this->_padding_ = (longlong)&___7UVirtualTexturePoolConfig__6B_;
  (this->Pools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pools).ArrayNum = 0;
  (this->Pools).ArrayMax = 0;
  (this->TransientPools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientPools).ArrayNum = 0;
  (this->TransientPools).ArrayMax = 0;
  this->bPoolAutoGrowInEditor = true;
  return this;
}

// ~UVirtualTexturePoolConfig @ 1489baa70

void __thiscall
UVirtualTexturePoolConfig::~UVirtualTexturePoolConfig(UVirtualTexturePoolConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVirtualTexturePoolConfig__6B_;
  DestructItems<FVirtualTextureSpacePoolConfig,int>
            ((FVirtualTextureSpacePoolConfig *)(this->TransientPools).AllocatorInstance.Data,
             (this->TransientPools).ArrayNum);
  pFVar1 = (this->TransientPools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVirtualTextureSpacePoolConfig,int>
            ((FVirtualTextureSpacePoolConfig *)(this->Pools).AllocatorInstance.Data,
             (this->Pools).ArrayNum);
  pFVar1 = (this->Pools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// AddOrModifyTransientPoolConfig @ 1489c6040

bool __thiscall
UVirtualTexturePoolConfig::AddOrModifyTransientPoolConfig
          (UVirtualTexturePoolConfig *this,FVirtualTextureSpacePoolConfig *param_1)

{
  TArray<FVirtualTextureSpacePoolConfig,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FVirtualTextureSpacePoolConfig *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  pTVar1 = &this->TransientPools;
  uVar9 = (this->TransientPools).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9 * 0x30;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->TransientPools).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar8 = (param_1->Formats).ArrayNum;
      pFVar10 = (pTVar1->AllocatorInstance).Data + lVar11;
      if ((((iVar8 == *(int *)(pFVar10 + 8)) &&
           (bVar5 = CompareItems<TEnumAsByte<enum_EPixelFormat>,int>
                              ((TEnumAsByte<EPixelFormat> *)
                               (param_1->Formats).AllocatorInstance.Data,
                               *(TEnumAsByte<EPixelFormat> **)pFVar10,iVar8), bVar5)) &&
          (param_1->MaxTileSize == *(int *)(pFVar10 + 0x14))) &&
         (param_1->MinTileSize == *(int *)(pFVar10 + 0x10))) {
        if (*(int *)(pFVar10 + 0x18) != param_1->SizeInMegabyte) {
          *(int *)(pFVar10 + 0x18) = param_1->SizeInMegabyte;
          FVirtualTexturePoolVersion::Increment_GameThread(&GVirtualTexturePoolVersion);
          return true;
        }
        return false;
      }
      lVar11 = lVar11 + -0x30;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  FVirtualTexturePoolVersion::Increment_GameThread(&GVirtualTexturePoolVersion);
  pFVar3 = (FVirtualTextureSpacePoolConfig *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->TransientPools).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (this->TransientPools).ArrayNum;
  piVar2 = &(this->TransientPools).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
    (this->TransientPools).ArrayNum = iVar8;
  }
  (this->TransientPools).ArrayNum = iVar8 + 1;
  FVirtualTextureSpacePoolConfig::FVirtualTextureSpacePoolConfig
            ((FVirtualTextureSpacePoolConfig *)
             ((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x30),param_1);
  return true;
}

// FindPoolConfig @ 1489e26b0

void __thiscall
UVirtualTexturePoolConfig::FindPoolConfig
          (UVirtualTexturePoolConfig *this,TEnumAsByte<EPixelFormat> *param_1,int param_2,
          int param_3,FVirtualTextureSpacePoolConfig *param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FVirtualTextureSpacePoolConfig *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  FVirtualTextureSpacePoolConfig local_70;
  
  local_70.SizeInMegabyte = this->DefaultSizeInMegabyte;
  uVar11 = (this->TransientPools).ArrayNum - 1;
  local_70.Formats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Formats.ArrayNum = 0;
  local_70.Formats.ArrayMax = 0;
  local_70.MinTileSize = 0;
  local_70.MaxTileSize = 0;
  local_70.MinScaledSizeInMegabyte = 0;
  local_70.MaxScaledSizeInMegabyte = 0;
  local_70.bEnableResidencyMipMapBias = true;
  local_70.ResidencyMipMapBiasGroup = 0;
  local_70.bAllowSizeScale = true;
  bVar12 = false;
  if (-1 < (int)uVar11) {
    lVar8 = (longlong)(int)uVar11 * 0x30;
    do {
      uVar5 = 0;
      if ((int)uVar11 < (this->TransientPools).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = 0;
      pFVar6 = (FVirtualTextureSpacePoolConfig *)
               ((this->TransientPools).AllocatorInstance.Data + lVar8);
      if ((pFVar6->MinTileSize <= param_3) &&
         (((pFVar6->MaxTileSize == 0 || (param_3 <= pFVar6->MaxTileSize)) &&
          (param_2 == (pFVar6->Formats).ArrayNum)))) {
        bVar3 = true;
        uVar10 = uVar7;
        if (param_2 < 1) goto LAB_1489e2a37;
        do {
          if (!bVar3) goto LAB_1489e2852;
          uVar9 = (uint)uVar10;
          uVar5 = 0;
          if ((int)uVar9 < (pFVar6->Formats).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((FScriptContainerElement)param_1[uVar7].Value !=
              (pFVar6->Formats).AllocatorInstance.Data[uVar7]) {
            bVar3 = false;
          }
          uVar7 = uVar7 + 1;
          uVar10 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < param_2);
        if (bVar3) goto LAB_1489e2a37;
      }
LAB_1489e2852:
      lVar8 = lVar8 + -0x30;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  uVar11 = (this->Pools).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar8 = (longlong)(int)uVar11 * 0x30;
    do {
      uVar5 = 0;
      if ((int)uVar11 < (this->Pools).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = 0;
      pFVar6 = (FVirtualTextureSpacePoolConfig *)((this->Pools).AllocatorInstance.Data + lVar8);
      if ((pFVar6->MinTileSize <= param_3) &&
         (((pFVar6->MaxTileSize == 0 || (param_3 <= pFVar6->MaxTileSize)) &&
          (param_2 == (pFVar6->Formats).ArrayNum)))) {
        bVar3 = true;
        uVar10 = uVar7;
        if (param_2 < 1) goto LAB_1489e2a37;
        do {
          if (!bVar3) goto LAB_1489e2992;
          uVar9 = (uint)uVar10;
          uVar5 = 0;
          if ((int)uVar9 < (pFVar6->Formats).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((FScriptContainerElement)param_1[uVar7].Value !=
              (pFVar6->Formats).AllocatorInstance.Data[uVar7]) {
            bVar3 = false;
          }
          uVar7 = uVar7 + 1;
          uVar10 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < param_2);
        if (bVar3) goto LAB_1489e2a37;
      }
LAB_1489e2992:
      if (((!bVar12) && ((pFVar6->Formats).ArrayNum == 0)) && (0 < pFVar6->SizeInMegabyte)) {
        if (&local_70 != pFVar6) {
          iVar2 = local_70.Formats.ArrayMax;
          bVar12 = local_70.Formats.ArrayMax == 0;
          local_70.Formats._8_8_ = (ulonglong)(uint)local_70.Formats.ArrayMax << 0x20;
          if (bVar12) {
            local_70.Formats.ArrayNum = 0;
            local_70.Formats.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,iVar2,(ForAnyElementType *)&local_70,0,&local_70.Formats.ArrayMax);
          }
        }
        local_70.MinTileSize = pFVar6->MinTileSize;
        local_70.MaxTileSize = pFVar6->MaxTileSize;
        local_70.SizeInMegabyte = pFVar6->SizeInMegabyte;
        local_70.bEnableResidencyMipMapBias = pFVar6->bEnableResidencyMipMapBias;
        local_70.ResidencyMipMapBiasGroup = pFVar6->ResidencyMipMapBiasGroup;
        local_70.bAllowSizeScale = pFVar6->bAllowSizeScale;
        local_70.MinScaledSizeInMegabyte = pFVar6->MinScaledSizeInMegabyte;
        local_70.MaxScaledSizeInMegabyte = pFVar6->MaxScaledSizeInMegabyte;
        bVar12 = true;
      }
      lVar8 = lVar8 + -0x30;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  pFVar6 = &local_70;
LAB_1489e2a37:
  FVirtualTextureSpacePoolConfig::operator=(param_4,pFVar6);
  if (local_70.Formats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Formats.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 1489ec170

UClass * __cdecl UVirtualTexturePoolConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTexturePoolConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTexturePoolConfig",
               &Z_Registration_Info_UClass_UVirtualTexturePoolConfig.InnerSingleton,
               StaticRegisterNativesUVirtualTexturePoolConfig,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UVirtualTexturePoolConfig>,
               InternalVTableHelperCtorCaller<UVirtualTexturePoolConfig>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTexturePoolConfig.InnerSingleton;
}

// StaticRegisterNativesUVirtualTexturePoolConfig @ 148a188c0

void __cdecl UVirtualTexturePoolConfig::StaticRegisterNativesUVirtualTexturePoolConfig(void)

{
  return;
}

