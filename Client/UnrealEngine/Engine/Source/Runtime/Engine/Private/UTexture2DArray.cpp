// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 41

// StaticClass @ 147335470

UClass * __cdecl UTexture2DArray::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DArray",
               &Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton,
               StaticRegisterNativesUTexture2DArray,0x160,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UTexture2DArray>,InternalVTableHelperCtorCaller<UTexture2DArray>
               ,local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton;
}

// UTexture2DArray @ 147340c20

UTexture2DArray * __thiscall
UTexture2DArray::UTexture2DArray(UTexture2DArray *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTexture2DArray @ 147340c70

UTexture2DArray * __thiscall
UTexture2DArray::UTexture2DArray(UTexture2DArray *this,FObjectInitializer *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->PrivatePlatformData = (FTexturePlatformData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~UTexture2DArray @ 147342210

void __thiscall UTexture2DArray::~UTexture2DArray(UTexture2DArray *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// CalcCumulativeLODSize @ 1473467d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall UTexture2DArray::CalcCumulativeLODSize(UTexture2DArray *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  FTexturePlatformData *pFVar3;
  EPixelFormat EVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 auStack_1d8 [32];
  uint uStack_1b8;
  TIntPoint<int>_u_0 aTStack_1a8 [2];
  FRHITextureDesc FStack_198;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  FRHITextureDesc FStack_118;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [16];
  FRHITextureDesc FStack_88;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar3 = this->PrivatePlatformData;
  if (pFVar3 == (FTexturePlatformData *)0x0) {
    EVar4 = PF_Unknown;
  }
  else {
    EVar4 = pFVar3->PixelFormat;
  }
  uVar8 = 0;
  uVar6 = uVar8;
  if (((GPixelFormats[EVar4].Supported != 0) && (pFVar3 != (FTexturePlatformData *)0x0)) &&
     (EVar4 = pFVar3->PixelFormat, uVar6 = 0, EVar4 != PF_Unknown)) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 6);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
    uStack_1b8 = (pFVar3->Mips).Array.ArrayNum - param_1;
    if ((int)uStack_1b8 < 0) {
      uStack_1b8 = uVar8;
    }
    CalcMipMapExtent((uint)aTStack_1a8,pFVar3->SizeX,(EPixelFormat)pFVar3->SizeY,(uint)EVar4);
    if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
      uVar8 = this->PrivatePlatformData->PackedData & 0x1fffffff;
    }
    FStack_198.ArraySize = (ushort)uVar8;
    FStack_198.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    FStack_198.Flags = None;
    FStack_198.ClearValue._0_8_ = 1;
    puStack_148 = &u_Temp;
    FStack_198.Extent.field0_0x0 = aTStack_1a8[0];
    FStack_198.ClearValue.Value._4_8_ = 0;
    FStack_198.ClearValue.Value.Color[3] = 0.0;
    FStack_198.ExtData = 0;
    FStack_198.Depth = 1;
    FStack_198.NumMips = '\x01';
    FStack_198.NumSamples = '\x01';
    FStack_198.Dimension = Texture2DArray;
    FStack_198.UAVFormat = PF_Unknown;
    FStack_198.FastVRAMPercentage = 0xff;
    FStack_198.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    FStack_198.AliasableFormats.ArrayNum = 0;
    FStack_198.AliasableFormats.ArrayMax = 1;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    FStack_198.Format = EVar4;
    FRHITextureDesc::FRHITextureDesc(&FStack_118,&FStack_198);
    puStack_c8 = puStack_148;
    uStack_c0 = (undefined4)uStack_140;
    uStack_bc = uStack_140._4_4_;
    uStack_b8 = uStack_138;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    if (FStack_198.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FStack_198.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    FStack_118.NumMips = (uchar)param_1;
    if (param_1 < 1) {
      FStack_118.NumMips = '\x01';
    }
    FStack_118.ExtData = (this->PrivatePlatformData->OptData).ExtData;
    FStack_118.Flags =
         (((ulonglong)(~(uint)(bVar2 >> 1) & 1) << 0xf | (ulonglong)(bVar1 & 2)) * 2 |
         (ulonglong)(bVar1 & 1)) << 4;
    FRHITextureDesc::FRHITextureDesc(&FStack_88,&FStack_118);
    if (FStack_118.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FStack_118.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    bVar5 = FRHITextureDesc::Validate(&FStack_88,L"",false);
    if (bVar5) {
      puVar7 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                                 (GDynamicRHI,auStack_98,&FStack_88,0);
      uVar6 = *puVar7;
    }
    if (FStack_88.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FStack_88.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return uVar6;
}

// CalcTextureMemorySize @ 1473467e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall UTexture2DArray::CalcTextureMemorySize(UTexture2DArray *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  FTexturePlatformData *pFVar3;
  EPixelFormat EVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  TIntPoint<int>_u_0 local_1a8 [2];
  FRHITextureDesc local_198;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FRHITextureDesc local_118;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  FRHITextureDesc local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar3 = this->PrivatePlatformData;
  if (pFVar3 == (FTexturePlatformData *)0x0) {
    EVar4 = PF_Unknown;
  }
  else {
    EVar4 = pFVar3->PixelFormat;
  }
  uVar8 = 0;
  uVar6 = uVar8;
  if (((GPixelFormats[EVar4].Supported != 0) && (pFVar3 != (FTexturePlatformData *)0x0)) &&
     (EVar4 = pFVar3->PixelFormat, uVar6 = 0, EVar4 != PF_Unknown)) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 6);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
    local_1b8 = (pFVar3->Mips).Array.ArrayNum - param_1;
    if ((int)local_1b8 < 0) {
      local_1b8 = uVar8;
    }
    CalcMipMapExtent((uint)local_1a8,pFVar3->SizeX,(EPixelFormat)pFVar3->SizeY,(uint)EVar4);
    if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
      uVar8 = this->PrivatePlatformData->PackedData & 0x1fffffff;
    }
    local_198.ArraySize = (ushort)uVar8;
    local_198.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_198.Flags = None;
    local_198.ClearValue._0_8_ = 1;
    local_148 = &u_Temp;
    local_198.Extent.field0_0x0 = local_1a8[0];
    local_198.ClearValue.Value._4_8_ = 0;
    local_198.ClearValue.Value.Color[3] = 0.0;
    local_198.ExtData = 0;
    local_198.Depth = 1;
    local_198.NumMips = '\x01';
    local_198.NumSamples = '\x01';
    local_198.Dimension = Texture2DArray;
    local_198.UAVFormat = PF_Unknown;
    local_198.FastVRAMPercentage = 0xff;
    local_198.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_198.AliasableFormats.ArrayNum = 0;
    local_198.AliasableFormats.ArrayMax = 1;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_198.Format = EVar4;
    FRHITextureDesc::FRHITextureDesc(&local_118,&local_198);
    local_c8 = local_148;
    local_c0 = (undefined4)local_140;
    local_bc = local_140._4_4_;
    local_b8 = local_138;
    local_b0 = local_130;
    local_a8 = local_128;
    if (local_198.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_198.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_118.NumMips = (uchar)param_1;
    if (param_1 < 1) {
      local_118.NumMips = '\x01';
    }
    local_118.ExtData = (this->PrivatePlatformData->OptData).ExtData;
    local_118.Flags =
         (((ulonglong)(~(uint)(bVar2 >> 1) & 1) << 0xf | (ulonglong)(bVar1 & 2)) * 2 |
         (ulonglong)(bVar1 & 1)) << 4;
    FRHITextureDesc::FRHITextureDesc(&local_88,&local_118);
    if (local_118.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_118.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    bVar5 = FRHITextureDesc::Validate(&local_88,L"",false);
    if (bVar5) {
      puVar7 = (uint *)(**(code **)(GDynamicRHI->_padding_ + 0x178))
                                 (GDynamicRHI,local_98,&local_88,0);
      uVar6 = *puVar7;
    }
    if (local_88.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_88.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return uVar6;
}

// CalcTextureMemorySizeEnum @ 147346a60

uint __thiscall
UTexture2DArray::CalcTextureMemorySizeEnum(UTexture2DArray *this,ETextureMipCount param_1)

{
  FTexturePlatformData *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FTextureResource *pFVar5;
  longlong lVar6;
  
  if (param_1 != TMC_ResidentMips) {
    pFVar1 = this->PrivatePlatformData;
    if (param_1 != TMC_AllMipsBiased) {
      if (pFVar1 != (FTexturePlatformData *)0x0) {
        uVar2 = CalcTextureMemorySize(this,(pFVar1->Mips).Array.ArrayNum);
        return uVar2;
      }
      uVar2 = CalcTextureMemorySize(this,0);
      return uVar2;
    }
    if (pFVar1 != (FTexturePlatformData *)0x0) {
      iVar4 = (pFVar1->Mips).Array.ArrayNum;
      iVar3 = (**(code **)(this->_padding_ + 0x2f8))();
      uVar2 = CalcTextureMemorySize(this,iVar4 - iVar3);
      return uVar2;
    }
    iVar4 = (**(code **)(this->_padding_ + 0x2f8))();
    uVar2 = CalcTextureMemorySize(this,-iVar4);
    return uVar2;
  }
  pFVar5 = UTexture::GetResource((UTexture *)this);
  if (pFVar5 != (FTextureResource *)0x0) {
    if (this->_padding_ != 0) {
      uVar2 = CalcTextureMemorySize(this,(uint)((ulonglong)this->_padding_ >> 0x28) & 0xff);
      return uVar2;
    }
    pFVar5 = UTexture::GetResource((UTexture *)this);
    if ((longlong *)pFVar5->_padding_ != (longlong *)0x0) {
      lVar6 = (**(code **)(*(longlong *)pFVar5->_padding_ + 0x20))();
      uVar2 = CalcTextureMemorySize(this,(uint)*(byte *)(lVar6 + 0x30));
      return uVar2;
    }
  }
  uVar2 = CalcTextureMemorySize(this,0);
  return uVar2;
}

// CreateResource @ 147349780

/* WARNING: Enum "Type": Some values do not have unique names */

FTextureResource * __thiscall UTexture2DArray::CreateResource(UTexture2DArray *this)

{
  int iVar1;
  FTexturePlatformData *pFVar2;
  FTexture2DArrayResource *pFVar3;
  FStreamableRenderResourceState FVar4;
  FString local_18;
  
  pFVar2 = this->PrivatePlatformData;
  if (pFVar2 != (FTexturePlatformData *)0x0) {
    iVar1 = (pFVar2->Mips).Array.ArrayNum;
    if ((0 < iVar1) && (GPixelFormats[pFVar2->PixelFormat].Supported != 0)) {
      pFVar3 = ::operator_new(0x150);
      if (pFVar3 == (FTexture2DArrayResource *)0x0) {
        return (FTextureResource *)0x0;
      }
      FVar4 = UTexture::GetResourcePostInitState
                        ((UTexture *)this,(FTexturePlatformData *)&stack0x00000008,
                         SUB81(this->PrivatePlatformData,0),(uint)GSupportsTexture2DArrayStreaming,0
                         ,false);
      pFVar3 = FTexture2DArrayResource::FTexture2DArrayResource
                         (pFVar3,this,(FStreamableRenderResourceState *)FVar4.field0_0x0);
      return (FTextureResource *)pFVar3;
    }
    if (iVar1 != 0) {
      if (GPixelFormats[pFVar2->PixelFormat].Supported != 0) {
        return (FTextureResource *)0x0;
      }
      if ((byte)LogTexture._0_1_ < 3) {
        return (FTextureResource *)0x0;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      goto LAB_1473498b6;
    }
  }
  if ((byte)LogTexture._0_1_ < 3) {
    return (FTextureResource *)0x0;
  }
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
LAB_1473498b6:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FTextureResource *)0x0;
}

// CreateTransient @ 1473498e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2DArray * __cdecl
UTexture2DArray::CreateTransient
          (int param_1,int param_2,int param_3,EPixelFormat param_4,FName param_5)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UPackage *pUVar10;
  UClass *pUVar11;
  UTexture2DArray *pUVar12;
  FTexturePlatformData *this;
  FTexturePlatformData *pFVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  FBulkData *this_00;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 *local_e8 [2];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((((param_1 < 1) || (param_2 < 1)) || (param_3 < 1)) ||
     ((param_1 % GPixelFormats[param_4].BlockSizeX != 0 ||
      (param_2 % GPixelFormats[param_4].BlockSizeY != 0)))) {
    if (2 < (byte)LogTexture._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    }
    pUVar12 = (UTexture2DArray *)0x0;
  }
  else {
    pUVar10 = GetTransientPackage();
    if (param_5 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar10,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar11 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar11);
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._16_8_ = param_5;
    local_d8._24_4_ = RF_Transient;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._8_8_ = pUVar10;
    pUVar12 = (UTexture2DArray *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar15 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    this = ::operator_new(0x38);
    pFVar13 = (FTexturePlatformData *)0x0;
    if (this != (FTexturePlatformData *)0x0) {
      pFVar13 = FTexturePlatformData::FTexturePlatformData(this);
    }
    SetPlatformData(pUVar12,pFVar13);
    pUVar12->PrivatePlatformData->SizeX = param_1;
    pUVar12->PrivatePlatformData->SizeY = param_2;
    puVar1 = &pUVar12->PrivatePlatformData->PackedData;
    *puVar1 = *puVar1 ^ (pUVar12->PrivatePlatformData->PackedData ^ param_3) & 0x1fffffff;
    pUVar12->PrivatePlatformData->PixelFormat = param_4;
    pbVar3 = (byte *)((longlong)&pUVar12->_padding_ + 4);
    *pbVar3 = *pbVar3 | 2;
    iVar4 = GPixelFormats[param_4].BlockSizeX;
    iVar5 = GPixelFormats[param_4].BlockSizeY;
    puVar14 = ::operator_new(0x50);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      *(undefined4 *)((longlong)puVar14 + 0x2d) = 0xffffffff;
      *(undefined1 *)((longlong)puVar14 + 0x31) = 0xff;
      puVar14[7] = FIoChunkId::InvalidChunkId.Id._0_8_;
      *(undefined4 *)(puVar14 + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
      *(short *)(puVar14 + 9) = (short)param_1;
      *(short *)((longlong)puVar14 + 0x4a) = (short)param_2;
      *(short *)((longlong)puVar14 + 0x4c) = (short)param_3;
      if (((0xffff < (uint)param_1) || (0xffff < (uint)param_2)) || (0xffff < (uint)param_3)) {
        local_110 = (FScriptContainerElement *)CONCAT44(local_110._4_4_,param_3);
        local_118 = (undefined8 **)CONCAT44(local_118._4_4_,param_2);
        UE::Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
                   ,0x42,L"texture mip size doesn\'t fit in 16 bits! %ux%ux%u");
      }
    }
    pFVar13 = pUVar12->PrivatePlatformData;
    pFVar6 = (pFVar13->Mips).Array.AllocatorInstance.Data;
    local_e8[0] = puVar14;
    if ((pFVar6 <= (FScriptContainerElement *)local_e8) &&
       (lVar16 = (longlong)(pFVar13->Mips).Array.ArrayMax,
       (FScriptContainerElement *)local_e8 < pFVar6 + lVar16 * 8)) {
      local_100 = (longlong)(pFVar13->Mips).Array.ArrayNum;
      local_f8 = 8;
      local_118 = local_e8;
      local_110 = pFVar6;
      local_108 = lVar16;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pUVar12 = (UTexture2DArray *)(*pcVar7)();
        return pUVar12;
      }
    }
    iVar9 = (pFVar13->Mips).Array.ArrayNum;
    piVar2 = &(pFVar13->Mips).Array.ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pFVar13->Mips,piVar2);
    }
    pFVar6 = (pFVar13->Mips).Array.AllocatorInstance.Data;
    this_00 = (FBulkData *)(puVar14 + 4);
    (pFVar13->Mips).Array.ArrayNum = iVar9 + 1;
    *(undefined8 **)(pFVar6 + (longlong)iVar9 * 8) = local_e8[0];
    FBulkData::Lock(this_00,2);
    FBulkData::Realloc(this_00,(longlong)GPixelFormats[param_4].BlockBytes * (longlong)param_3 *
                               (longlong)(param_2 / iVar5) * (longlong)(param_1 / iVar4),1);
    FBulkData::Unlock(this_00);
  }
  return pUVar12;
}

// GetArraySize @ 14734e0c0

int __thiscall UTexture2DArray::GetArraySize(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->PackedData & 0x1fffffff;
  }
  return 0;
}

// GetAssetRegistryTags @ 14734e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UTexture2DArray::GetAssetRegistryTags
          (UTexture2DArray *this,
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
  UTexture2DArray *pUStack_180;
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
    if (*(UTexture2DArray **)pFVar11->InlineData == this) {
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
  *(UTexture2DArray **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
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
    if (*(UTexture2DArray **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
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

// GetAssetRegistryTags @ 14734e0f0

void __thiscall
UTexture2DArray::GetAssetRegistryTags(UTexture2DArray *this,FAssetRegistryTagsContext param_1)

{
  ForAnyElementType _Src;
  FName *pFVar1;
  FAssetRegistryTagsContext FVar2;
  EPixelFormat EVar3;
  FName local_res8;
  FAssetRegistryTag local_68;
  FString local_48;
  FAssetRegistryTag local_38;
  
  ::FString::PrintfImpl(&local_48,L"%dx%d*%d");
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

// GetDesc @ 14734ee60

FString * __thiscall UTexture2DArray::GetDesc(UTexture2DArray *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Array: %dx%d*%d [%s]");
  return __return_storage_ptr__;
}

// GetMaterialType @ 14734f820

EMaterialValueType __thiscall UTexture2DArray::GetMaterialType(UTexture2DArray *this)

{
  return MCT_Texture2DArray;
}

// GetNumMips @ 14734f8a0

int __thiscall UTexture2DArray::GetNumMips(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (this->PrivatePlatformData->Mips).Array.ArrayNum;
  }
  return 0;
}

// GetNumResidentMips @ 14734f8c0

int __thiscall UTexture2DArray::GetNumResidentMips(UTexture2DArray *this)

{
  FTextureResource *pFVar1;
  longlong lVar2;
  
  pFVar1 = UTexture::GetResource((UTexture *)this);
  if (pFVar1 != (FTextureResource *)0x0) {
    if (this->_padding_ != 0) {
      return (uint)((ulonglong)this->_padding_ >> 0x28) & 0xff;
    }
    pFVar1 = UTexture::GetResource((UTexture *)this);
    if ((longlong *)pFVar1->_padding_ != (longlong *)0x0) {
      lVar2 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))();
      return (int)*(byte *)(lVar2 + 0x30);
    }
  }
  return 0;
}

// GetPixelFormat @ 14734fb30

EPixelFormat __thiscall UTexture2DArray::GetPixelFormat(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->PixelFormat;
  }
  return PF_Unknown;
}

// GetPlatformData @ 14734fb50

FTexturePlatformData * __thiscall UTexture2DArray::GetPlatformData(UTexture2DArray *this)

{
  return this->PrivatePlatformData;
}

// GetPlatformData @ 14734fb60

FTexturePlatformData * __thiscall UTexture2DArray::GetPlatformData(UTexture2DArray *this)

{
  return this->PrivatePlatformData;
}

// GetPrivateStaticClass @ 14734feb0

UClass * __cdecl UTexture2DArray::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2DArray",
               &Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton,
               StaticRegisterNativesUTexture2DArray,0x160,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UTexture2DArray>,InternalVTableHelperCtorCaller<UTexture2DArray>
               ,local_res8,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2DArray.InnerSingleton;
}

// GetResourceSizeEx @ 1473507f0

void __thiscall UTexture2DArray::GetResourceSizeEx(UTexture2DArray *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  uVar1 = (**(code **)(this->_padding_ + 0x3b0))(this,0);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(ulonglong)uVar1);
  return;
}

// GetRunningPlatformData @ 1473508e0

FTexturePlatformData ** __thiscall UTexture2DArray::GetRunningPlatformData(UTexture2DArray *this)

{
  return &this->PrivatePlatformData;
}

// GetSizeX @ 1473508f0

int __thiscall UTexture2DArray::GetSizeX(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeX;
  }
  return 0;
}

// GetSizeY @ 147350910

int __thiscall UTexture2DArray::GetSizeY(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->SizeY;
  }
  return 0;
}

// GetSurfaceArraySize @ 147350b50

uint __thiscall UTexture2DArray::GetSurfaceArraySize(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return this->PrivatePlatformData->PackedData & 0x1fffffff;
  }
  return 0;
}

// GetSurfaceDepth @ 147350b70

float __thiscall UTexture2DArray::GetSurfaceDepth(UTexture2DArray *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 147350b80

float __thiscall UTexture2DArray::GetSurfaceHeight(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (float)this->PrivatePlatformData->SizeY;
  }
  return 0.0;
}

// GetSurfaceWidth @ 147350bb0

float __thiscall UTexture2DArray::GetSurfaceWidth(UTexture2DArray *this)

{
  if (this->PrivatePlatformData != (FTexturePlatformData *)0x0) {
    return (float)this->PrivatePlatformData->SizeX;
  }
  return 0.0;
}

// GetTextureAddressX @ 147350c60

TextureAddress __thiscall UTexture2DArray::GetTextureAddressX(UTexture2DArray *this)

{
  return (TextureAddress)(this->AddressX).Value;
}

// GetTextureAddressY @ 147350c70

TextureAddress __thiscall UTexture2DArray::GetTextureAddressY(UTexture2DArray *this)

{
  return (TextureAddress)(this->AddressY).Value;
}

// GetTextureAddressZ @ 147350c80

TextureAddress __thiscall UTexture2DArray::GetTextureAddressZ(UTexture2DArray *this)

{
  return (TextureAddress)(this->AddressZ).Value;
}

// GetTextureClass @ 147350c90

ETextureClass __thiscall UTexture2DArray::GetTextureClass(UTexture2DArray *this)

{
  return Array;
}

// PostLoad @ 147353120

void __thiscall UTexture2DArray::PostLoad(UTexture2DArray *this)

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

// Serialize @ 147356660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTexture2DArray::Serialize(UTexture2DArray *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTexture2DArray::Serialize(FArchive_&)_::_2_::FStat_STAT_Texture2DArray_Serialize>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  bool bVar14;
  FStripDataFlags local_res10 [4];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Texture2DArray_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTexture2DArray::Serialize(FArchive_&)_::_2_::FStat_STAT_Texture2DArray_Serialize>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res18.s,"STAT_Texture2DArray_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture2DArray_Serialize,*pFVar8,
                 L"UTexture2DArray::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_Texture2DArray_Serialize;
  if (StatPtr_STAT_Texture2DArray_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTexture2DArray::Serialize(FArchive_&)_::_2_::FStat_STAT_Texture2DArray_Serialize>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_Texture2DArray_Serialize");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UTexture2DArray::Serialize(FArchive_&)_::_2_::FStat_STAT_Texture2DArray_Serialize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture2DArray_Serialize,*pFVar8
                         ,L"UTexture2DArray::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                         L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar12 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar12 == 0)) {
LAB_1473567ee:
    bVar6 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar10.Value;
        local_res18.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture2DArray.cpp"
                   ,0x204);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1473567ee;
    local_res18.s.LowPart = FVar10.Value;
    local_res18.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar6 = true;
    FVar13.Value = FVar10.Value;
  }
  UTexture::Serialize((UTexture *)this,param_1);
  FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
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
    local_res18.s.LowPart = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18.s.LowPart = uVar12;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18);
    if (1 < local_res18.s.LowPart) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res18.s.LowPart;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1473568a2;
  }
  else {
    uVar3 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar14 = uVar3 != 0;
LAB_1473568a2:
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
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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

// Serialize @ 147356a60

void __thiscall UTexture2DArray::Serialize(UTexture2DArray *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetPlatformData @ 147357d70

void __thiscall
UTexture2DArray::SetPlatformData(UTexture2DArray *this,FTexturePlatformData *param_1)

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

// StaticRegisterNativesUTexture2DArray @ 147358890

void __cdecl UTexture2DArray::StaticRegisterNativesUTexture2DArray(void)

{
  return;
}

// StreamIn @ 147358a60

bool __thiscall UTexture2DArray::StreamIn(UTexture2DArray *this,int param_1,bool param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  FTextureResource *pFVar10;
  FTextureStreamIn *pFVar11;
  UClass *pUVar12;
  FTexture2DArrayMipAllocator_Reallocate *this_00;
  FTextureStreamIn *pFVar13;
  FTexture2DMipDataProvider_IO *this_01;
  FTextureStreamIn *pFVar14;
  FTextureStreamIn *this_02;
  FTextureStreamIn *pFVar15;
  byte bVar16;
  longlong *plVar17;
  undefined1 local_res20 [8];
  
  pFVar10 = UTexture::GetResource((UTexture *)this);
  pFVar15 = (FTextureStreamIn *)0x0;
  pFVar11 = pFVar15;
  if (pFVar10 != (FTextureResource *)0x0) {
    pFVar10 = UTexture::GetResource((UTexture *)this);
    pFVar11 = (FTextureStreamIn *)(**(code **)(pFVar10->_padding_ + 0x78))(pFVar10);
  }
  bVar8 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if ((((!bVar8) && (bVar2 = (byte)this->_padding_, (bVar2 & 1) != 0)) &&
      (bVar3 = *(byte *)((longlong)&this->_padding_ + 5), (int)(uint)bVar3 < param_1)) &&
     ((bVar16 = *(byte *)((longlong)&this->_padding_ + 3), bVar3 < bVar16 &&
      (*(byte *)((longlong)&this->_padding_ + 6) == bVar3)))) {
    if (param_1 < (int)(uint)bVar16) {
      bVar16 = (byte)param_1;
    }
    *(byte *)((longlong)&this->_padding_ + 6) = bVar16;
    *(byte *)&this->_padding_ = bVar2 | 8;
    if (pFVar11 != (FTextureStreamIn *)0x0) {
      plVar17 = (longlong *)this->_padding_;
      iVar4 = (int)this->_padding_;
      plVar1 = plVar17 + iVar4;
      pFVar11 = pFVar15;
      while( true ) {
        if ((int)this->_padding_ != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UAssetUserData>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (plVar17 == plVar1) break;
        plVar6 = (longlong *)*plVar17;
        if (plVar6 != (longlong *)0x0) {
          pUVar12 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
          iVar5 = (int)pUVar12->_padding_;
          if (((iVar5 <= *(int *)(plVar6[2] + 0x38)) &&
              ((longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar5 * 8)
               == &pUVar12->_padding_)) &&
             (pFVar11 = (FTextureStreamIn *)(**(code **)(*plVar6 + 0x2d0))(plVar6,this),
             pFVar11 != (FTextureStreamIn *)0x0)) break;
        }
        plVar17 = plVar17 + 1;
      }
      this_00 = ::operator_new(0x138);
      pFVar13 = pFVar15;
      if (this_00 != (FTexture2DArrayMipAllocator_Reallocate *)0x0) {
        pFVar13 = (FTextureStreamIn *)
                  FTexture2DArrayMipAllocator_Reallocate::FTexture2DArrayMipAllocator_Reallocate
                            (this_00,(UTexture *)this);
      }
      this_01 = ::operator_new(0x160);
      pFVar14 = pFVar15;
      if (this_01 != (FTexture2DMipDataProvider_IO *)0x0) {
        pFVar14 = (FTextureStreamIn *)
                  FTexture2DMipDataProvider_IO::FTexture2DMipDataProvider_IO
                            (this_01,(UTexture *)this,param_2);
      }
      this_02 = ::operator_new(0x440);
      if (this_02 != (FTextureStreamIn *)0x0) {
        pFVar15 = FTextureStreamIn::FTextureStreamIn
                            (this_02,(UTexture *)this,(FTextureMipAllocator *)pFVar13,
                             (FTextureMipDataProvider *)pFVar11,(FTextureMipDataProvider *)pFVar14);
      }
      pFVar11 = (FTextureStreamIn *)this->_padding_;
      if (pFVar11 != pFVar15) {
        this->_padding_ = (longlong)pFVar15;
        if (pFVar15 != (FTextureStreamIn *)0x0) {
          LOCK();
          ((FThreadSafeCounter *)&pFVar15->field_0x64)->Counter =
               ((FThreadSafeCounter *)&pFVar15->field_0x64)->Counter + 1;
          UNLOCK();
        }
        if (pFVar11 != (FTextureStreamIn *)0x0) {
          FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar11);
        }
      }
      return *(char *)(this->_padding_ + 0x5c) == '\0';
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3712639111564098910>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture2DArray.cpp"
                       ,0x2a2,"Texture2DArrayResource");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  return false;
}

// StreamOut @ 147358c70

bool __thiscall UTexture2DArray::StreamOut(UTexture2DArray *this,int param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FTextureResource *pFVar7;
  FTexture2DArrayMipAllocator_Reallocate *pFVar8;
  FTexture2DArrayMipAllocator_Reallocate *this_00;
  FTextureStreamOut *this_01;
  FTexture2DArrayMipAllocator_Reallocate *pFVar9;
  byte bVar10;
  
  pFVar7 = UTexture::GetResource((UTexture *)this);
  pFVar9 = (FTexture2DArrayMipAllocator_Reallocate *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FTextureResource *)0x0) {
    pFVar7 = UTexture::GetResource((UTexture *)this);
    pFVar8 = (FTexture2DArrayMipAllocator_Reallocate *)
             (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7);
  }
  bVar5 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if ((((!bVar5) && (bVar2 = (byte)this->_padding_, (bVar2 & 1) != 0)) &&
      (bVar3 = *(byte *)((longlong)&this->_padding_ + 5), param_1 < (int)(uint)bVar3)) &&
     ((bVar10 = *(byte *)((longlong)&this->_padding_ + 1), bVar10 < bVar3 &&
      (*(byte *)((longlong)&this->_padding_ + 6) == bVar3)))) {
    if ((int)(uint)bVar10 < param_1) {
      bVar10 = (byte)param_1;
    }
    *(byte *)((longlong)&this->_padding_ + 6) = bVar10;
    *(byte *)&this->_padding_ = bVar2 | 8;
    if (pFVar8 != (FTexture2DArrayMipAllocator_Reallocate *)0x0) {
      this_00 = ::operator_new(0x138);
      pFVar8 = pFVar9;
      if (this_00 != (FTexture2DArrayMipAllocator_Reallocate *)0x0) {
        pFVar8 = FTexture2DArrayMipAllocator_Reallocate::FTexture2DArrayMipAllocator_Reallocate
                           (this_00,(UTexture *)this);
      }
      this_01 = ::operator_new(0x130);
      if (this_01 != (FTextureStreamOut *)0x0) {
        pFVar9 = (FTexture2DArrayMipAllocator_Reallocate *)
                 FTextureStreamOut::FTextureStreamOut
                           (this_01,(UTexture *)this,(FTextureMipAllocator *)pFVar8);
      }
      pFVar8 = (FTexture2DArrayMipAllocator_Reallocate *)this->_padding_;
      if (pFVar8 != pFVar9) {
        this->_padding_ = (longlong)pFVar9;
        if (pFVar9 != (FTexture2DArrayMipAllocator_Reallocate *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)(pFVar9->StreamedMipData).AllocatorInstance.InlineData + 0x3c);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        if (pFVar8 != (FTexture2DArrayMipAllocator_Reallocate *)0x0) {
          FRenderAssetUpdate::Release((FRenderAssetUpdate *)pFVar8);
        }
      }
      return *(char *)(this->_padding_ + 0x5c) == '\0';
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3712639111564098922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture2DArray.cpp"
                       ,0x296,"Texture2DArrayResource");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return false;
}

// UpdateResourceWithParams @ 14735d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTexture2DArray::UpdateResourceWithParams(UTexture2DArray *this,EUpdateResourceFlags param_1)

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
  UTexture2DArray *pUStack_180;
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
  UTexture2DArray *pUStack_100;
  longlong *plStack_f8;
  undefined ***pppuStack_f0;
  code *apcStack_e8 [2];
  undefined **ppuStack_d8;
  UTexture2DArray *pUStack_d0;
  longlong *plStack_c8;
  undefined ***pppuStack_c0;
  undefined1 auStack_b8 [16];
  undefined **ppuStack_a8;
  UTexture2DArray *pUStack_a0;
  longlong *plStack_98;
  undefined ***pppuStack_90;
  byte bStack_88;
  undefined1 auStack_78 [16];
  undefined **ppuStack_68;
  UTexture2DArray *pUStack_60;
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

// GetMipData @ 14888e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014888e3a4) */
/* WARNING: Removing unreachable block (ram,0x00014888e3bb) */
/* WARNING: Removing unreachable block (ram,0x00014888e3e7) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTexture2DArray::GetMipData
          (UTexture2DArray *this,int param_1,
          TArray<FUniqueBuffer,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  uint uVar1;
  void *pvVar2;
  ForElementType<FUniqueBuffer> FVar3;
  code *pcVar4;
  FUniqueBuffer FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FTexturePlatformData *this_00;
  FString *pFVar9;
  FBufferOwner *pFVar10;
  FBufferOwner *pFVar11;
  ForElementType<FUniqueBuffer> FVar12;
  int iVar13;
  FBufferOwner *pFVar14;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198;
  FUniqueBuffer local_190;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TStringView<wchar_t> local_178;
  FString local_168;
  FString local_158;
  void *local_148 [16];
  ulong64 local_c8 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = GetPlatformData(this);
  uVar1 = (this_00->OptData).NumMipsInTail;
  iVar13 = uVar1 - 1;
  if ((int)uVar1 < 1) {
    iVar13 = 0;
  }
  iVar13 = ((this_00->Mips).Array.ArrayNum - iVar13) - param_1;
  if ((0xf < iVar13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputMipCount <= MAX_TEXTURE_MIP_COUNT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                         ,0xd98,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_148[0xe] = (void *)0x0;
  local_148[0] = (void *)0x0;
  local_148[1] = (void *)0x0;
  local_148[2] = (void *)0x0;
  local_148[3] = (void *)0x0;
  local_148[4] = (void *)0x0;
  local_148[5] = (void *)0x0;
  local_148[6] = (void *)0x0;
  local_148[7] = (void *)0x0;
  local_148[8] = (void *)0x0;
  local_148[9] = (void *)0x0;
  local_148[10] = (void *)0x0;
  local_148[0xb] = (void *)0x0;
  local_148[0xc] = (void *)0x0;
  local_148[0xd] = (void *)0x0;
  pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_168,(UObject *)0x0);
  local_188 = (pFVar9->Data).AllocatorInstance.Data;
  iVar8 = (pFVar9->Data).ArrayNum;
  iStack_180 = iVar8 + -1;
  if (iVar8 == 0) {
    iStack_180 = 0;
  }
  local_178._12_4_ = uStack_17c;
  local_178.Size = iStack_180;
  local_178.DataPtr = (wchar_t *)local_188;
  bVar6 = FTexturePlatformData::TryLoadMipsWithSizes
                    (this_00,param_1,local_148,(long64 *)local_c8,&local_178);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pFVar14 = (FBufferOwner *)0x0;
    if (0 < iVar13) {
      do {
        pvVar2 = local_148[(longlong)pFVar14];
        pFVar10 = ::operator_new(0x28);
        pFVar11 = (FBufferOwner *)0x0;
        if (pFVar10 != (FBufferOwner *)0x0) {
          pFVar10->Data = pvVar2;
          pFVar10->Size = local_c8[(longlong)pFVar14];
          pFVar10->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
          pFVar10->_padding_ =
               (longlong)
               &UE::SharedBuffer::Private::
                TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`UTexture2DArray::GetMipData'::`32'::<lambda_1>,0>'::`2'::<lambda_1>_>
                ::_vftable_;
          *(undefined1 *)&pFVar10[1]._padding_ = local_198;
          LOCK();
          pFVar10->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((ulonglong)pFVar10->ReferenceCountsAndFlags | 0x4000000000000000);
          UNLOCK();
          LOCK();
          pFVar10->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((ulonglong)pFVar10->ReferenceCountsAndFlags | 0x1000000000000000);
          UNLOCK();
          pFVar11 = pFVar10;
        }
        FUniqueBuffer::FUniqueBuffer(&local_190,pFVar11);
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FUniqueBuffer>_>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        FVar5.Owner.Owner = local_190.Owner.Owner;
        param_2->ArrayNum = iVar8 + 1;
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<FUniqueBuffer>)param_2;
        if (FVar3 != (ForElementType<FUniqueBuffer>)0x0) {
          FVar12 = FVar3;
        }
        local_190.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
        ((longlong)FVar12 + (longlong)iVar8 * 8))->Owner = (FBufferOwner *)FVar5.Owner.Owner;
        pFVar14 = (FBufferOwner *)((longlong)&pFVar14->_padding_ + 1);
      } while ((longlong)pFVar14 < (longlong)iVar13);
    }
    bVar6 = true;
  }
  else {
    if (2 < (byte)LogTexture._0_1_) {
      GetPixelFormat(this);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_158,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    bVar6 = false;
  }
  return bVar6;
}

