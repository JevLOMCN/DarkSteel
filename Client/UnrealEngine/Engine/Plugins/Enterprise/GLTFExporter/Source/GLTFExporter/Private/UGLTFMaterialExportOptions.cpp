// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 10

// StaticClass @ 14e5b5440

UClass * __cdecl UGLTFMaterialExportOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFMaterialExportOptions",
               &Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton,
               StaticRegisterNativesUGLTFMaterialExportOptions,0x98,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGLTFMaterialExportOptions>,
               InternalVTableHelperCtorCaller<UGLTFMaterialExportOptions>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton;
}

// UGLTFMaterialExportOptions @ 14e5d36b0

UGLTFMaterialExportOptions * __thiscall
UGLTFMaterialExportOptions::UGLTFMaterialExportOptions
          (UGLTFMaterialExportOptions *this,FVTableHelper *param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFMaterialExportOptions__6B_;
  (this->Proxy).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Default).bOverrideSize = false;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->Default).Size.X = FGLTFMaterialBakeSize::Default.X;
  (this->Default).Size.Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->Default).Size.bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->Default).Size.field_0x9 = uVar2;
  (this->Default).bOverrideFilter = false;
  (this->Default).Filter = '\x02';
  (this->Default).bOverrideTiling = false;
  (this->Default).Tiling = '\0';
  *(undefined8 *)&this->Inputs = 0;
  *(undefined8 *)&(this->Inputs).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs).field_0x48 = 0;
  return this;
}

// UGLTFMaterialExportOptions @ 14e5d3730

UGLTFMaterialExportOptions * __thiscall
UGLTFMaterialExportOptions::UGLTFMaterialExportOptions
          (UGLTFMaterialExportOptions *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFMaterialExportOptions__6B_;
  (this->Proxy).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Default).bOverrideSize = false;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->Default).Size.X = FGLTFMaterialBakeSize::Default.X;
  (this->Default).Size.Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->Default).Size.bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->Default).Size.field_0x9 = uVar2;
  (this->Default).bOverrideFilter = false;
  (this->Default).Filter = '\x02';
  (this->Default).bOverrideTiling = false;
  (this->Default).Tiling = '\0';
  *(undefined8 *)&this->Inputs = 0;
  *(undefined8 *)&(this->Inputs).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs).field_0x48 = 0;
  return this;
}

// ~UGLTFMaterialExportOptions @ 14e5d7fe0

void __thiscall
UGLTFMaterialExportOptions::~UGLTFMaterialExportOptions(UGLTFMaterialExportOptions *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFMaterialExportOptions__6B_;
  *(undefined4 *)&(this->Inputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Inputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Inputs);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetBakeFilterForPropertyGroup @ 14e5f4a00

TextureFilter __cdecl
UGLTFMaterialExportOptions::GetBakeFilterForPropertyGroup
          (UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2,TextureFilter param_3)

{
  FGLTFOverrideMaterialBakeSettings *pFVar1;
  <lambda_1> local_res20;
  
  pFVar1 = GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeFilterForPropertyGroup_::__l3::<lambda_1>_>
                     (param_1,param_2,local_res20);
  if (pFVar1 != (FGLTFOverrideMaterialBakeSettings *)0x0) {
    return (TextureFilter)(pFVar1->Filter).Value;
  }
  return param_3;
}

// GetBakeSizeForPropertyGroup @ 14e5f4b20

FGLTFMaterialBakeSize * __cdecl
UGLTFMaterialExportOptions::GetBakeSizeForPropertyGroup
          (FGLTFMaterialBakeSize *__return_storage_ptr__,UMaterialInterface *param_1,
          EGLTFMaterialPropertyGroup param_2,FGLTFMaterialBakeSize *param_3)

{
  undefined4 uVar1;
  FGLTFOverrideMaterialBakeSettings *pFVar2;
  undefined8 uVar3;
  <lambda_1> local_res8;
  
  pFVar2 = GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeSizeForPropertyGroup_::__l3::<lambda_1>_>
                     (param_1,param_2,local_res8);
  if (pFVar2 == (FGLTFOverrideMaterialBakeSettings *)0x0) {
    uVar3._0_4_ = param_3->X;
    uVar3._4_4_ = param_3->Y;
    uVar1 = *(undefined4 *)&param_3->bAutoDetect;
  }
  else {
    uVar3._0_4_ = (pFVar2->Size).X;
    uVar3._4_4_ = (pFVar2->Size).Y;
    uVar1 = *(undefined4 *)&(pFVar2->Size).bAutoDetect;
  }
  __return_storage_ptr__->X = (int)uVar3;
  __return_storage_ptr__->Y = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->bAutoDetect = uVar1;
  return __return_storage_ptr__;
}

// GetBakeTilingForPropertyGroup @ 14e5f4c40

TextureAddress __cdecl
UGLTFMaterialExportOptions::GetBakeTilingForPropertyGroup
          (UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2,TextureAddress param_3)

{
  FGLTFOverrideMaterialBakeSettings *pFVar1;
  <lambda_1> local_res20;
  
  pFVar1 = GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeTilingForPropertyGroup_::__l3::<lambda_1>_>
                     (param_1,param_2,local_res20);
  if (pFVar1 != (FGLTFOverrideMaterialBakeSettings *)0x0) {
    return (TextureAddress)(pFVar1->Tiling).Value;
  }
  return param_3;
}

// GetPrivateStaticClass @ 14e5fc860

UClass * __cdecl UGLTFMaterialExportOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFMaterialExportOptions",
               &Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton,
               StaticRegisterNativesUGLTFMaterialExportOptions,0x98,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGLTFMaterialExportOptions>,
               InternalVTableHelperCtorCaller<UGLTFMaterialExportOptions>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFMaterialExportOptions.InnerSingleton;
}

// ResolveProxy @ 14e611c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

UMaterialInterface * __cdecl UGLTFMaterialExportOptions::ResolveProxy(UMaterialInterface *param_1)

{
  uint *puVar1;
  code *pcVar2;
  UMaterialInterface *pUVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong *puVar12;
  uint uVar13;
  byte bVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong *puVar19;
  undefined1 auStackY_118 [32];
  uint local_e8;
  uint uStack_e4;
  int iStack_d4;
  uint uStack_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  UClass *local_98;
  FSparseArrayAllocationInfo local_90;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_78;
  FScriptContainerElement local_40 [8];
  ForAnyElementType local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_1 == (UMaterialInterface *)0x0) {
    param_1 = (UMaterialInterface *)0x0;
  }
  else {
    puVar19 = (ulonglong *)0x0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_78.AllocationFlags.NumBits = 0;
    local_78.NumFreeIndices = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    local_78.AllocationFlags.MaxBits = 0x80;
    local_78.FirstFreeIndex = -1;
LAB_14e611cf0:
    pcVar2 = *(code **)(param_1->_padding_ + 0x18);
    local_98 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    lVar7 = (*pcVar2)(&param_1->_padding_);
    if (lVar7 != 0) {
      pUVar8 = StaticClass();
      iVar5 = (int)pUVar8->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar5 * 8)
           == &pUVar8->_padding_)) &&
         (pUVar3 = *(UMaterialInterface **)(lVar7 + 0x28), pUVar3 != (UMaterialInterface *)0x0)) {
        uVar4 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        if (local_78.Data.ArrayNum != local_78.NumFreeIndices) {
          FVar10.Data = local_40;
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            FVar10.Data = local_38.Data;
          }
          for (iVar5 = *(int *)(FVar10.Data +
                               (ulonglong)(local_30 - 1 & (uVar4 >> 0x10 ^ uVar4)) * 4); iVar5 != -1
              ; iVar5 = *(int *)(local_78.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8))
          {
            if (*(UMaterialInterface **)
                 (local_78.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) == pUVar3)
            goto LAB_14e612206;
          }
        }
        if (local_78.NumFreeIndices == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,1,(ForAnyElementType *)&local_78,&local_78.Data.ArrayNum,
                             &local_78.Data.ArrayMax);
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&local_78.AllocationFlags,1);
          FVar11 = (ForElementType<unsigned_int>)&local_78.AllocationFlags;
          if (local_78.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_78.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar14 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar14 = bVar14 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar11 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar14 & 0x1f));
          iVar6 = local_78.FirstFreeIndex;
        }
        else {
          local_78.NumFreeIndices = local_78.NumFreeIndices + -1;
          iVar6 = *(int *)(local_78.Data.AllocatorInstance.Data +
                          (longlong)local_78.FirstFreeIndex * 0x10 + 4);
          iVar5 = local_78.FirstFreeIndex;
          if (local_78.NumFreeIndices != 0) {
            *(undefined4 *)(local_78.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x10) =
                 0xffffffff;
          }
        }
        local_78.FirstFreeIndex = iVar6;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_78,&local_90,iVar5);
        puVar12 = puVar19;
        if (local_90.Pointer != (ulonglong *)0x0) {
          *(UMaterialInterface **)local_90.Pointer = pUVar3;
          *(undefined4 *)((longlong)local_90.Pointer + 8) = 0xffffffff;
          puVar12 = local_90.Pointer;
        }
        uVar17 = *puVar12;
        uVar16 = local_78.Data.ArrayNum - local_78.NumFreeIndices;
        uVar4 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = uVar4 >> 0x10 ^ uVar4;
        param_1 = pUVar3;
        if (uVar16 == 1) goto LAB_14e611f35;
        if (uVar16 != 0) goto code_r0x00014e611ef7;
        goto LAB_14e611f81;
      }
    }
LAB_14e612206:
    local_30 = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    iVar5 = local_78.Data.ArrayMax;
    local_78.Data._8_8_ = local_78.Data._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&local_78,0,&local_78.Data.ArrayMax);
    }
    local_78.NumFreeIndices = 0;
    local_78.AllocationFlags.NumBits = 0;
    local_78.FirstFreeIndex = -1;
    if (0x80 < (uint)local_78.AllocationFlags.MaxBits) {
      local_78.AllocationFlags.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78.AllocationFlags,0);
    }
    if (local_78.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return param_1;
code_r0x00014e611ef7:
  FVar10.Data = local_40;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FVar10.Data = local_38.Data;
  }
  for (iVar5 = *(int *)(FVar10.Data + (ulonglong)(local_30 - 1 & uVar4) * 4); iVar5 != -1;
      iVar5 = *(int *)(local_78.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8)) {
    if (*(ulonglong *)(local_78.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) == uVar17) {
      if (iVar5 != -1) {
        *(ulonglong *)(local_78.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) = uVar17;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(&local_78,local_90.Index,1);
        goto LAB_14e611cf0;
      }
      break;
    }
  }
LAB_14e611f35:
  if (uVar16 < 4) {
LAB_14e611f81:
    uVar13 = 1;
  }
  else {
    uVar17 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar13 <= (int)local_30)) {
    uVar4 = local_30 - 1 & uVar4;
    *(uint *)((longlong)puVar12 + 0xc) = uVar4;
    FVar10.Data = local_40;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FVar10.Data = local_38.Data;
    }
    lVar7 = (longlong)(int)(local_30 - 1 & uVar4);
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(FVar10.Data + lVar7 * 4);
    *(int *)(FVar10.Data + lVar7 * 4) = local_90.Index;
    goto LAB_14e611cf0;
  }
  local_30 = uVar13;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
  }
  if (uVar13 == 0) goto LAB_14e612027;
  uVar4 = uVar13;
  if (uVar13 < 2) {
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      uVar4 = 0;
      goto LAB_14e611fce;
    }
  }
  else {
LAB_14e611fce:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar4,4);
  }
  if (0 < (int)uVar13) {
    uVar17 = (ulonglong)uVar13;
    puVar12 = puVar19;
    do {
      FVar10.Data = local_40;
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_38.Data;
      }
      uVar9 = (ulonglong)puVar12 & (longlong)(int)uVar13 - 1U;
      puVar12 = (ulonglong *)((longlong)puVar12 + 1);
      *(undefined4 *)(FVar10.Data + uVar9 * 4) = 0xffffffff;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_14e612027:
  if (local_30 != 0) {
    local_c0.Array = &local_78.AllocationFlags;
    local_e8 = 0;
    uStack_e4 = 1;
    iStack_d4 = 0;
    uStack_d0 = 0;
    if (local_78.AllocationFlags.NumBits != 0) {
      FVar11 = (ForElementType<unsigned_int>)&local_78.AllocationFlags;
      if (local_78.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar4 = *(uint *)FVar11;
      puVar12 = puVar19;
      puVar15 = puVar19;
      while (uVar4 == 0) {
        uStack_d0 = (int)puVar15 + 0x20;
        puVar15 = (ulonglong *)(ulonglong)uStack_d0;
        iVar5 = (int)puVar12;
        local_e8 = iVar5 + 1;
        puVar12 = (ulonglong *)(ulonglong)local_e8;
        if ((int)((local_78.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                 local_78.AllocationFlags.NumBits + -1) >> 5 < (int)local_e8) {
          iStack_d4 = local_78.AllocationFlags.NumBits;
          goto LAB_14e6120e2;
        }
        uVar4 = *(uint *)((uchar *)((longlong)FVar11 + 4) + (longlong)iVar5 * 4);
      }
      uStack_e4 = -uVar4 & uVar4;
      uVar17 = (ulonglong)uStack_e4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_d4 = (int)lVar7 + -1 + uStack_d0;
      if (local_78.AllocationFlags.NumBits < iStack_d4) {
        iStack_d4 = local_78.AllocationFlags.NumBits;
      }
    }
LAB_14e6120e2:
    local_c0._padding_ = CONCAT44(uStack_e4,local_e8);
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0.CurrentBitIndex = iStack_d4;
    local_c0.BaseBitIndex = uStack_d0;
    if (iStack_d4 < local_78.AllocationFlags.NumBits) {
      do {
        pFVar18 = local_78.Data.AllocatorInstance.Data + (longlong)local_c0.CurrentBitIndex * 0x10;
        uVar4 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar18 >> 4)
                ) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & local_30 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar4;
        FVar10.Data = local_40;
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_38.Data;
        }
        lVar7 = (longlong)(int)(local_30 - 1 & uVar4);
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar10.Data + lVar7 * 4);
        *(int *)(FVar10.Data + lVar7 * 4) = local_c0.CurrentBitIndex;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
  goto LAB_14e611cf0;
}

// StaticRegisterNativesUGLTFMaterialExportOptions @ 14e614d30

void __cdecl UGLTFMaterialExportOptions::StaticRegisterNativesUGLTFMaterialExportOptions(void)

{
  return;
}

