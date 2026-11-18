// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 14886c5f0

UClass * __cdecl UTextureCube::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCube",
               &Z_Registration_Info_UClass_UTextureCube.InnerSingleton,
               StaticRegisterNativesUTextureCube,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureCube>,InternalVTableHelperCtorCaller<UTextureCube>,
               local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCube.InnerSingleton;
}

// UTextureCube @ 14887e520

UTextureCube * __thiscall UTextureCube::UTextureCube(UTextureCube *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureCube @ 14887e570

UTextureCube * __thiscall UTextureCube::UTextureCube(UTextureCube *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UTexture::UTexture((UTexture *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->PrivatePlatformData = (FTexturePlatformData *)0x0;
  return this;
}

// ~UTextureCube @ 14887f060

void __thiscall UTextureCube::~UTextureCube(UTextureCube *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CalcTextureMemorySize @ 148883e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall UTextureCube::CalcTextureMemorySize(UTextureCube *this,int param_1)

{
  EPixelFormat EVar1;
  int iVar2;
  FTexturePlatformData *pFVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  uint local_1a8;
  uint local_1a4;
  undefined1 local_1a0 [8];
  uint *local_198;
  uint *local_190;
  FRHITextureDesc local_188;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FRHITextureDesc local_108;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FRHITextureDesc local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar3 = this->PrivatePlatformData;
  uVar6 = 0;
  if (pFVar3 != (FTexturePlatformData *)0x0) {
    local_1a8 = pFVar3->SizeX;
    local_1a4 = pFVar3->SizeY;
    iVar2 = (pFVar3->Mips).Array.ArrayNum;
    EVar1 = pFVar3->PixelFormat;
    if (local_1a8 != local_1a4) {
      local_198 = &local_1a8;
      local_190 = &local_1a4;
      `UTextureCube::CalcTextureMemorySize'::__l5::<lambda_1>::operator()(&local_198);
    }
    local_1b8 = iVar2 - param_1;
    if (local_1b8 < 0) {
      local_1b8 = 0;
    }
    CalcMipMapExtent((uint)local_1a0,local_1a8,(EPixelFormat)local_1a4,(uint)EVar1);
    local_188.Flags = None;
    local_188.ClearValue._0_8_ = 1;
    local_188.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_188.ClearValue.Value._4_8_ = 0;
    local_138 = &u_Temp;
    local_188.ClearValue.Value.Color[3] = 0.0;
    local_188.ExtData = 0;
    local_188.Depth = 1;
    local_188.ArraySize = 1;
    local_188.NumMips = '\x01';
    local_188.NumSamples = '\x01';
    local_188.Dimension = TextureCube;
    local_188.UAVFormat = PF_Unknown;
    local_188.FastVRAMPercentage = 0xff;
    local_188.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_188.AliasableFormats.ArrayNum = 0;
    local_188.AliasableFormats.ArrayMax = 1;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_188.Format = EVar1;
    FRHITextureDesc::FRHITextureDesc(&local_108,&local_188);
    local_b8 = local_138;
    local_b0 = (undefined4)local_130;
    local_ac = local_130._4_4_;
    local_a8 = local_128;
    local_a0 = local_120;
    local_98 = local_118;
    if (local_188.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_188.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_108.NumMips = (uchar)param_1;
    if (param_1 < 1) {
      local_108.NumMips = '\x01';
    }
    local_108.ExtData = (this->PrivatePlatformData->OptData).ExtData;
    FRHITextureDesc::FRHITextureDesc(&local_88,&local_108);
    if (local_108.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_108.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    bVar4 = FRHITextureDesc::Validate(&local_88,L"",false);
    if (bVar4) {
      puVar5 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                                 (GDynamicRHI,&local_198,&local_88,0);
      uVar6 = *puVar5;
    }
    if (local_88.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_88.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return uVar6;
}

// CalcTextureMemorySizeEnum @ 148884350

uint __thiscall UTextureCube::CalcTextureMemorySizeEnum(UTextureCube *this,ETextureMipCount param_1)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pFVar1 = this->PrivatePlatformData;
  if ((param_1 & ~TMC_AllMipsBiased) == TMC_ResidentMips) {
    iVar4 = 0;
    if (pFVar1 != (FTexturePlatformData *)0x0) {
      iVar4 = (pFVar1->Mips).Array.ArrayNum;
    }
    iVar3 = (**(code **)(this->_padding_ + 0x2f8))();
    uVar2 = CalcTextureMemorySize(this,iVar4 - iVar3);
    return uVar2;
  }
  if (pFVar1 != (FTexturePlatformData *)0x0) {
    uVar2 = CalcTextureMemorySize(this,(pFVar1->Mips).Array.ArrayNum);
    return uVar2;
  }
  uVar2 = CalcTextureMemorySize(this,0);
  return uVar2;
}

// CreateResource @ 148887fc0

FTextureResource * __thiscall UTextureCube::CreateResource(UTextureCube *this)

{
  FTextureCubeResource *pFVar1;
  
  if ((this->PrivatePlatformData != (FTexturePlatformData *)0x0) &&
     (0 < (this->PrivatePlatformData->Mips).Array.ArrayNum)) {
    pFVar1 = ::operator_new(0x358);
    if (pFVar1 != (FTextureCubeResource *)0x0) {
      pFVar1 = FTextureCubeResource::FTextureCubeResource(pFVar1,this);
      return (FTextureResource *)pFVar1;
    }
  }
  return (FTextureResource *)0x0;
}

// CreateTransient @ 1488885c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTextureCube * __cdecl
UTextureCube::CreateTransient(int param_1,int param_2,EPixelFormat param_3,FName param_4)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  FTexturePlatformData *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  UTextureCube *this;
  UTextureCube *pUVar13;
  UTextureCube *pUVar14;
  FTexture2DMipMap *this_00;
  UTextureCube *pUVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_128 [32];
  UTextureCube **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  UTextureCube *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar15 = (UTextureCube *)0x0;
  if ((((param_1 < 1) || (param_2 < 1)) || (param_1 % GPixelFormats[param_3].BlockSizeX != 0)) ||
     (param_2 % GPixelFormats[param_3].BlockSizeY != 0)) {
    if (2 < (byte)LogTexture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    }
  }
  else {
    pUVar11 = GetTransientPackage();
    if (param_4 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar11,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar12 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar12);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar11;
    local_c8._16_8_ = param_4;
    this = (UTextureCube *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar16 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    pUVar13 = ::operator_new(0x38);
    pUVar14 = pUVar15;
    if (pUVar13 != (UTextureCube *)0x0) {
      (((FDerivedData *)&pUVar13->_padding_)->CookedData).ChunkOffset = 0;
      *(uint *)&pUVar13->_padding_ = 0;
      *(EPixelFormat *)((longlong)&pUVar13->_padding_ + 4) = PF_Unknown;
      *(uint *)&pUVar13->_padding_ = 0;
      *(uint *)((longlong)&pUVar13->_padding_ + 4) = 0;
      (((TIndirectArray<FTexture2DMipMap,TSizedDefaultAllocator<32>_> *)&pUVar13->_padding_)->Array)
      .AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)&pUVar13->_padding_ = 0;
      pUVar13->_padding_ = 0;
      ((TRefCountPtr<FSharedImage_const_> *)&pUVar13->_padding_)->Reference = (FSharedImage *)0x0;
      pUVar14 = pUVar13;
    }
    SetPlatformData(this,(FTexturePlatformData *)pUVar14);
    this->PrivatePlatformData->SizeX = param_1;
    this->PrivatePlatformData->SizeY = param_2;
    puVar1 = &this->PrivatePlatformData->PackedData;
    *puVar1 = *puVar1 | 0x80000000;
    this->PrivatePlatformData->PackedData = this->PrivatePlatformData->PackedData & 0xe0000006 | 6;
    this->PrivatePlatformData->PixelFormat = param_3;
    pbVar3 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar3 = *pbVar3 | 2;
    iVar4 = GPixelFormats[param_3].BlockSizeX;
    iVar5 = GPixelFormats[param_3].BlockSizeY;
    this_00 = ::operator_new(0x50);
    if (this_00 != (FTexture2DMipMap *)0x0) {
      pUVar15 = (UTextureCube *)FTexture2DMipMap::FTexture2DMipMap(this_00,param_1,param_2,1);
    }
    pFVar6 = this->PrivatePlatformData;
    pFVar7 = (pFVar6->Mips).Array.AllocatorInstance.Data;
    local_d8[0] = pUVar15;
    if ((pFVar7 <= (FScriptContainerElement *)local_d8) &&
       (lVar17 = (longlong)(pFVar6->Mips).Array.ArrayMax,
       (FScriptContainerElement *)local_d8 < pFVar7 + lVar17 * 8)) {
      local_f0 = (longlong)(pFVar6->Mips).Array.ArrayNum;
      local_e8 = 8;
      local_108 = local_d8;
      local_100 = pFVar7;
      local_f8 = lVar17;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pUVar15 = (UTextureCube *)(*pcVar8)();
        return pUVar15;
      }
    }
    iVar10 = (pFVar6->Mips).Array.ArrayNum;
    piVar2 = &(pFVar6->Mips).Array.ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar6->Mips,piVar2);
    }
    (pFVar6->Mips).Array.ArrayNum = iVar10 + 1;
    *(UTextureCube **)((pFVar6->Mips).Array.AllocatorInstance.Data + (longlong)iVar10 * 8) =
         local_d8[0];
    FBulkData::Lock((FBulkData *)&pUVar15->_padding_,2);
    FBulkData::Realloc((FBulkData *)&pUVar15->_padding_,
                       (longlong)GPixelFormats[param_3].BlockBytes * (longlong)(param_2 / iVar5) *
                       (longlong)(param_1 / iVar4) * 6,1);
    FBulkData::Unlock((FBulkData *)&pUVar15->_padding_);
    pUVar15 = this;
  }
  return pUVar15;
}

// GetAssetRegistryTags @ 14888cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UTextureCube::GetAssetRegistryTags
          (UTextureCube *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UTextureCube *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UTextureCube **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UTextureCube **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UTextureCube **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 14888cc50

void __thiscall
UTextureCube::GetAssetRegistryTags(UTextureCube *this,FAssetRegistryTagsContext param_1)

{
  ForAnyElementType _Src;
  FName *pFVar1;
  FAssetRegistryTagsContext FVar2;
  EPixelFormat EVar3;
  FName local_res8;
  FAssetRegistryTag local_68;
  FString local_48;
  FAssetRegistryTag local_38;
  
  ::FString::PrintfImpl(&local_48,L"%dx%d");
  pFVar1 = ::FName::FName(&local_res8,"Dimensions");
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_68.Name = *pFVar1;
  local_68.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_68.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_68.Value,
               local_48.Data.ArrayNum,&local_68.Value.Data.ArrayMax);
    memcpy(local_68.Value.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2
          );
  }
  local_68.Type = TT_Dimensional;
  local_68.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_68);
  if (this->PrivatePlatformData == (FTexturePlatformData *)0x0) {
    EVar3 = PF_Unknown;
  }
  else {
    EVar3 = this->PrivatePlatformData->PixelFormat;
  }
  ::FString::FString((FString *)&local_68,GPixelFormats[EVar3].Name);
  pFVar1 = ::FName::FName(&local_res8,"Format");
  local_38.Name = *pFVar1;
  local_38.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_68.Name;
  local_38.Value.Data.ArrayNum = (int)local_68.Value.Data.AllocatorInstance.Data;
  local_38.Value.Data.ArrayMax = local_68.Value.Data.AllocatorInstance.Data._4_4_;
  local_68.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  local_38.Type = TT_Alphabetical;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_38);
  if (local_68.Name != (FName)0x0) {
    FMemory::Free((void *)local_68.Name);
  }
  FVar2.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetDesc @ 14888da70

FString * __thiscall UTextureCube::GetDesc(UTextureCube *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Cube: %dx%d [%s]");
  return __return_storage_ptr__;
}

// GetMaterialType @ 14888e010

EMaterialValueType __thiscall UTextureCube::GetMaterialType(UTextureCube *this)

{
  return MCT_TextureCube;
}

// GetMipData @ 14888e440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTextureCube::GetMipData(UTextureCube *this,int param_1,void **param_2)

{
  int iVar1;
  FTexturePlatformData *this_00;
  bool bVar2;
  FString *pFVar3;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  this_00 = this->PrivatePlatformData;
  pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  local_28.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  bVar2 = FTexturePlatformData::TryLoadMipsWithSizes
                    (this_00,param_1,param_2,(long64 *)0x0,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((!bVar2) && (2 < (byte)LogTexture._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNumMips @ 14888eb80

int __thiscall UTextureCube::GetNumMips(UTextureCube *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (this->PrivatePlatformData->Mips).Array.ArrayNum;
  }
  return 0;
}

// GetPixelFormat @ 14888f560

EPixelFormat __thiscall UTextureCube::GetPixelFormat(UTextureCube *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->PixelFormat;
  }
  return PF_Unknown;
}

// GetPlatformData @ 14888f6c0

FTexturePlatformData * __thiscall UTextureCube::GetPlatformData(UTextureCube *this)

{
  return this->PrivatePlatformData;
}

// GetPlatformData @ 14888f6d0

FTexturePlatformData * __thiscall UTextureCube::GetPlatformData(UTextureCube *this)

{
  return this->PrivatePlatformData;
}

// GetPrivateStaticClass @ 14888fce0

UClass * __cdecl UTextureCube::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCube",
               &Z_Registration_Info_UClass_UTextureCube.InnerSingleton,
               StaticRegisterNativesUTextureCube,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureCube>,InternalVTableHelperCtorCaller<UTextureCube>,
               local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCube.InnerSingleton;
}

// GetResourceSizeEx @ 148890660

void __thiscall UTextureCube::GetResourceSizeEx(UTextureCube *this,FResourceSizeEx *param_1)

{
  Type TVar1;
  uint uVar2;
  undefined8 uVar3;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  TVar1 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if (TVar1 == Exclusive) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  uVar2 = (**(code **)(this->_padding_ + 0x3b0))(this,uVar3);
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar2);
  return;
}

// GetRunningPlatformData @ 148890730

FTexturePlatformData ** __thiscall UTextureCube::GetRunningPlatformData(UTextureCube *this)

{
  return &this->PrivatePlatformData;
}

// GetSizeX @ 148890860

int __thiscall UTextureCube::GetSizeX(UTextureCube *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeX;
  }
  return 0;
}

// GetSizeY @ 148890990

int __thiscall UTextureCube::GetSizeY(UTextureCube *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeY;
  }
  return 0;
}

// GetSurfaceArraySize @ 148892ed0

uint __thiscall UTextureCube::GetSurfaceArraySize(UTextureCube *this)

{
  return 6;
}

// GetSurfaceDepth @ 148892f50

float __thiscall UTextureCube::GetSurfaceDepth(UTextureCube *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 148892fd0

float __thiscall UTextureCube::GetSurfaceHeight(UTextureCube *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (float)this->PrivatePlatformData->SizeY;
  }
  return 0.0;
}

// GetSurfaceWidth @ 148893090

float __thiscall UTextureCube::GetSurfaceWidth(UTextureCube *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (float)this->PrivatePlatformData->SizeX;
  }
  return 0.0;
}

// GetTextureClass @ 148893160

ETextureClass __thiscall UTextureCube::GetTextureClass(UTextureCube *this)

{
  return Cube;
}

// NeedsLoadForTargetPlatform @ 1488964e0

bool __thiscall
UTextureCube::NeedsLoadForTargetPlatform(UTextureCube *this,ITargetPlatform *param_1)

{
  FName *pFVar1;
  bool bVar2;
  FName *local_18;
  undefined8 local_10;
  
  if ((char)this->_padding_ != '\x0e') {
    return true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&EncodedHDR,L"EncodedHDR");
    _Init_thread_footer(&::_TSS0);
  }
  local_18 = (FName *)0x0;
  local_10 = 0;
  (**(code **)(*(longlong *)param_1 + 0xe8))(param_1,&local_18);
  pFVar1 = local_18;
  do {
    if (pFVar1 == local_18 + (int)local_10) {
      bVar2 = false;
LAB_148896563:
      if (local_18 != (FName *)0x0) {
        FMemory::Free(local_18);
      }
      return bVar2;
    }
    if (*pFVar1 == EncodedHDR) {
      bVar2 = true;
      goto LAB_148896563;
    }
    pFVar1 = pFVar1 + 1;
  } while( true );
}

// PostLoad @ 148896770

void __thiscall UTextureCube::PostLoad(UTextureCube *this)

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
      pUVar5 = StaticClass();
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

// Serialize @ 148898620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTextureCube::Serialize(UTextureCube *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTextureCube::Serialize(FArchive_&)_::_2_::FStat_STAT_TextureCube_Serialize>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res10;
  FStripDataFlags local_res18 [4];
  FName local_res20;
  FStatMessage local_48;
  
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_TextureCube_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTextureCube::Serialize(FArchive_&)_::_2_::FStat_STAT_TextureCube_Serialize>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res10.s,"STAT_TextureCube_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureCube_Serialize,*pFVar8,
                 L"UTextureCube::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_TextureCube_Serialize;
  if (StatPtr_STAT_TextureCube_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTextureCube::Serialize(FArchive_&)_::_2_::FStat_STAT_TextureCube_Serialize>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_TextureCube_Serialize");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTextureCube::Serialize(FArchive_&)_::_2_::FStat_STAT_TextureCube_Serialize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureCube_Serialize,*pFVar8,
                         L"UTextureCube::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                         L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar12 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar12 == 0)) {
LAB_1488987ae:
    bVar6 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCube.cpp"
                   ,0x85);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488987ae;
    local_res10.s.LowPart = FVar10.Value;
    local_res10.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar6 = true;
    FVar13.Value = FVar10.Value;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  FStripDataFlags::FStripDataFlags
            ((FStripDataFlags *)&local_res10.s,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  FStripDataFlags::FStripDataFlags(local_res18,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  bVar14 = SUB41(uVar12,0);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res10.s.LowPart = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10.s.LowPart = uVar12;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10);
    if (1 < local_res10.s.LowPart) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res10.s.LowPart;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1488988a2;
  }
  else {
    uVar3 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar14 = uVar3 != 0;
LAB_1488988a2:
  if ((bVar14 != false) ||
     ((*(longlong *)&param_1->field_0x68 != 0 &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)))) {
    UTexture::SerializeCookedPlatformData((UTexture *)this,param_1,true);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Serialize @ 148898a60

void __thiscall UTextureCube::Serialize(UTextureCube *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetPlatformData @ 14889b660

void __thiscall UTextureCube::SetPlatformData(UTextureCube *this,FTexturePlatformData *param_1)

{
  FTexturePlatformData *this_00;
  
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    UTexture::ReleaseResource((UTexture *)this);
    this_00 = this->PrivatePlatformData;
    if (this_00 != (FTexturePlatformData *)0x0) {
      FTexturePlatformData::~FTexturePlatformData(this_00);
      ::operator_delete(this_00,0x38);
    }
    this->PrivatePlatformData = param_1;
    return;
  }
  this->PrivatePlatformData = param_1;
  return;
}

// StaticRegisterNativesUTextureCube @ 14889bbe0

void __cdecl UTextureCube::StaticRegisterNativesUTextureCube(void)

{
  return;
}

// UpdateResourceWithParams @ 14889f540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureCube::UpdateResourceWithParams(UTextureCube *this,EUpdateResourceFlags param_1)

{
  byte bVar1;
  int iVar2;
  FTexturePlatformData *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  FString *pFVar10;
  FName *pFVar11;
  FRenderCommandList *pFVar12;
  FCommandList *pFVar13;
  FRenderCommandTag *pFVar14;
  wchar_t *pwVar15;
  byte bVar16;
  undefined ***pppuVar17;
  int iVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined1 auStackY_1f8 [32];
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  FLLMScope FStack_1ac;
  undefined4 auStack_1a8 [2];
  longlong lStack_1a0;
  int iStack_198;
  FMemScope FStack_190;
  longlong *plStack_188;
  UTextureCube *pUStack_180;
  uint *puStack_178;
  uint *puStack_170;
  undefined4 *puStack_168;
  int *piStack_160;
  int *piStack_158;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  FName FStack_138;
  FString FStack_130;
  code *apcStack_118 [2];
  undefined **ppuStack_108;
  UTextureCube *pUStack_100;
  longlong *plStack_f8;
  undefined ***pppuStack_f0;
  code *apcStack_e8 [2];
  undefined **ppuStack_d8;
  UTextureCube *pUStack_d0;
  longlong *plStack_c8;
  undefined ***pppuStack_c0;
  undefined1 auStack_b8 [16];
  undefined **ppuStack_a8;
  UTextureCube *pUStack_a0;
  longlong *plStack_98;
  undefined ***pppuStack_90;
  byte bStack_88;
  undefined1 auStack_78 [16];
  undefined **ppuStack_68;
  UTextureCube *pUStack_60;
  longlong *plStack_58;
  undefined ***pppuStack_50;
  byte bStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  UTexture::ReleaseResource((UTexture *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar15 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar15,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->_padding_ & 0x10) == 0)) {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x338))(this);
    if (GSkipInvalidDXTDimensions != 0) {
      if (plVar6 == (longlong *)0x0) {
        lStack_1a0 = 0;
      }
      else {
        lStack_1a0 = (**(code **)(*plVar6 + 0x88))(plVar6);
        if (lStack_1a0 != 0) {
          uStack_1b4 = *(uint *)(lStack_1a0 + 0x78);
          uStack_1b0 = *(uint *)(lStack_1a0 + 0x7c);
          auStack_1a8[0] = *(undefined4 *)(lStack_1a0 + 0x80);
          switch(*(undefined1 *)(lStack_1a0 + 0x94)) {
          case 5:
          case 6:
          case 7:
          case 0x17:
          case 0x27:
          case 0x37:
          case 0x38:
            if (((uStack_1b4 < 4) || ((uStack_1b4 & 3) != 0)) ||
               ((uStack_1b0 < 4 || ((uStack_1b0 & 3) != 0)))) {
              puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))(this);
              if (puVar7 == (undefined8 *)0x0) {
                iStack_1c0 = 0;
                iStack_1bc = 0;
                iStack_1b8 = 0;
                iStack_1c8 = 0;
                iStack_1c4 = 0;
              }
              else {
                this_00 = (FTexturePlatformData *)*puVar7;
                iStack_1c0 = 0;
                iStack_1bc = 0;
                iStack_1b8 = 0;
                iStack_1c8 = 0;
                iStack_1c4 = 0;
                if (this_00 != (FTexturePlatformData *)0x0) {
                  iStack_1c0 = (this_00->Mips).Array.ArrayNum;
                  bVar4 = UTexture::IsPossibleToStream((UTexture *)this);
                  iStack_1bc = FTexturePlatformData::GetNumNonStreamingMips(this_00,bVar4);
                  iStack_1b8 = FTexturePlatformData::GetNumNonOptionalMips(this_00);
                  iStack_1c8 = this_00->SizeX;
                  iStack_1c4 = this_00->SizeY;
                }
              }
              if (((uStack_1b0 | uStack_1b4) & 3) != 0) {
                plStack_188 = &lStack_1a0;
                puStack_178 = &uStack_1b4;
                puStack_170 = &uStack_1b0;
                puStack_168 = auStack_1a8;
                piStack_160 = &iStack_1c8;
                piStack_158 = &iStack_1c4;
                piStack_150 = &iStack_1c0;
                piStack_148 = &iStack_1bc;
                piStack_140 = &iStack_1b8;
                pUStack_180 = this;
                `UTexture::UpdateResourceWithParams'::__l17::<lambda_1>::operator()(&plStack_188);
              }
              (**(code **)*plVar6)(plVar6,1);
              return;
            }
          }
        }
      }
    }
    bVar4 = IsInActualRenderingThread();
    if (((bVar4) || (bVar4 = IsInRHIThread(), bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInActualRenderingThread() && !IsInRHIThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x192,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (plVar6 == (longlong *)0x0) {
      bVar4 = IsInActualRenderingThread();
      if (((bVar4) || (bVar4 = IsInRHIThread(), bVar4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsInActualRenderingThread() && !IsInRHIThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                             ,0x122,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->_padding_ = 0;
      ppuStack_d8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UTexture::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
      apcStack_e8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UTexture::SetResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
           ::Call;
      pppuStack_c0 = (undefined ***)0x0;
      pUStack_d0 = this;
      plStack_c8 = plVar6;
      pFVar12 = FRenderCommandList::GetInstanceTLS();
      if (pFVar12 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTexture::SetResource_::__l2::TSTR_SetResourceRenderThread297>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_e8);
      }
      else {
        pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
        auStack_78._0_8_ = apcStack_e8[0];
        pppuStack_50 = pppuStack_c0;
        ppuStack_68 = ppuStack_d8;
        pUStack_60 = pUStack_d0;
        plStack_58 = plStack_c8;
        apcStack_e8[0] = (code *)0x0;
        bStack_48 = 2;
        pFVar14 = (FRenderCommandTag *)
                  TRenderCommandTag<`UTexture::SetResource'::__l2::TSTR_SetResourceRenderThread297>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)auStack_78,pFVar14);
        uVar19 = (ulonglong)bStack_48;
        if ((2 < uVar19) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)auStack_78._0_8_ != (code *)0x0) {
            pppuVar17 = (undefined ***)(auStack_78 + 0x10);
            if (pppuStack_50 != (undefined ***)0x0) {
              pppuVar17 = pppuStack_50;
            }
            (*(code *)(*pppuVar17)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(auStack_78);
        }
      }
      if (apcStack_e8[0] != (code *)0x0) {
        pppuVar17 = &ppuStack_d8;
        if (pppuStack_c0 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_c0;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
    else {
      FLLMScope::FLLMScope(&FStack_1ac,Textures,false,None,Default,true);
      FMemScope::FMemScope(&FStack_190,Textures,true);
      lVar8 = (**(code **)(*plVar6 + 0x88))(plVar6);
      if (lVar8 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x68);
        this->_padding_ = lVar8;
        if (lVar8 != 0) {
          *(byte *)&this->_padding_ = (byte)lVar8 | 4;
        }
      }
      plVar9 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6);
      if (plVar9 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar9 + 0xd0))(plVar9);
        iStack_198 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iStack_198 == 0; iStack_198 = iStack_198 + -1) {
          }
        }
        bVar20 = 0;
        if (uVar5 != 0) {
          bVar20 = (byte)iStack_198;
        }
        uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
        bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
        bVar16 = 0x10;
        if (uVar5 < 0x10) {
          bVar16 = (byte)uVar5;
        }
        if (bVar1 < bVar16) {
          bVar16 = bVar1;
        }
        if (bVar20 < bVar16) {
          this->_padding_ = 0;
          *(byte *)((longlong)&this->_padding_ + 1) = bVar20;
          *(byte *)((longlong)&this->_padding_ + 5) = bVar20;
          *(byte *)((longlong)&this->_padding_ + 6) = bVar20;
          *(byte *)((longlong)&this->_padding_ + 2) = bVar16;
          *(byte *)((longlong)&this->_padding_ + 3) = bVar16;
          *(undefined1 *)&this->_padding_ = 7;
        }
      }
      this->_padding_ = (longlong)plVar6;
      pFVar10 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&FStack_130,(UObject *)0x0);
      iVar2 = (pFVar10->Data).ArrayNum;
      iVar18 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar18 = 0;
      }
      pFVar11 = ::FName::FName(&FStack_138,iVar18,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                               FNAME_Add);
      *(FName *)(plVar6 + 1) = *pFVar11;
      if (FStack_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_130.Data.AllocatorInstance.Data);
      }
      pppuStack_f0 = (undefined ***)0x0;
      ppuStack_108 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::`30'::<lambda_2>,1,0>
                      ::_vftable_;
      apcStack_118[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UTexture::UpdateResourceWithParams'::__l30::<lambda_2>,void,FRHICommandListImmediate_&>
           ::Call;
      pUStack_100 = this;
      plStack_f8 = plVar6;
      pFVar12 = FRenderCommandList::GetInstanceTLS();
      if (pFVar12 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTexture::UpdateResourceWithParams_::__l30::TSTR_SetTextureReference445>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_118);
      }
      else {
        pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
        auStack_b8._0_8_ = apcStack_118[0];
        pppuStack_90 = pppuStack_f0;
        ppuStack_a8 = ppuStack_108;
        pUStack_a0 = pUStack_100;
        plStack_98 = plStack_f8;
        apcStack_118[0] = (code *)0x0;
        bStack_88 = 2;
        pFVar14 = (FRenderCommandTag *)
                  TRenderCommandTag<`UTexture::UpdateResourceWithParams'::__l30::TSTR_SetTextureReference445>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)auStack_b8,pFVar14);
        uVar19 = (ulonglong)bStack_88;
        if ((2 < uVar19) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)auStack_b8._0_8_ != (code *)0x0) {
            pppuVar17 = (undefined ***)(auStack_b8 + 0x10);
            if (pppuStack_90 != (undefined ***)0x0) {
              pppuVar17 = pppuStack_90;
            }
            (*(code *)(*pppuVar17)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(auStack_b8);
        }
      }
      if (apcStack_118[0] != (code *)0x0) {
        pppuVar17 = &ppuStack_108;
        if (pppuStack_f0 != (undefined ***)0x0) {
          pppuVar17 = pppuStack_f0;
        }
        (*(code *)(*pppuVar17)[2])();
      }
      UStreamableRenderAsset::LinkStreaming((UStreamableRenderAsset *)this);
      FMemScope::~FMemScope(&FStack_190);
      FLLMScope::~FLLMScope(&FStack_1ac);
    }
  }
  return;
}

// operator() @ 1505326b0

bool __thiscall `UTextureCube::CalcTextureMemorySize'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5925481377146339576>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5925481377146339576>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

