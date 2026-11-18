// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetTags
// Functions: 21

// StaticClass @ 14f00f7d0

UClass * __cdecl UAssetTagsSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetTags",L"AssetTagsSubsystem",
               &Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton,
               StaticRegisterNativesUAssetTagsSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAssetTagsSubsystem>,
               InternalVTableHelperCtorCaller<UAssetTagsSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton;
}

// UAssetTagsSubsystem @ 14f010390

UAssetTagsSubsystem * __thiscall
UAssetTagsSubsystem::UAssetTagsSubsystem(UAssetTagsSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UAssetTagsSubsystem__6B_;
  return this;
}

// UAssetTagsSubsystem @ 14f0103c0

UAssetTagsSubsystem * __thiscall UAssetTagsSubsystem::UAssetTagsSubsystem(UAssetTagsSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)this = &___7UAssetTagsSubsystem__6B_;
  return this;
}

// ~UAssetTagsSubsystem @ 14f0103f0

void __thiscall UAssetTagsSubsystem::~UAssetTagsSubsystem(UAssetTagsSubsystem *this)

{
  *(undefined ***)this = &___7UAssetTagsSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 14f010410

bool __thiscall
`UAssetTagsSubsystem::GetCollections'::__l3::<lambda_1>::operator()
          (void *this,FName param_1,
          TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)> *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  FName local_res10;
  FName local_38;
  FString local_30;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_res10 = param_1;
  ::FName::ToString(&local_res10,*(FString **)this);
  iVar9 = *(int *)(*(undefined8 **)this + 1);
  iVar7 = iVar9 + -1;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  if (iVar9 == 0) {
    iVar7 = 0;
  }
  local_18 = (wchar_t *)*puVar2;
  uStack_10 = puVar2[1];
  iVar9 = (int)puVar2[1];
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  iVar10 = 0;
  if (0 < iVar7) {
    iVar10 = iVar7;
  }
  if (iVar9 == iVar10) {
    if ((iVar9 != 0) && (iVar10 != 0)) {
      iVar7 = iVar10;
      if (iVar9 < iVar10) {
        iVar7 = iVar9;
      }
      iVar7 = FGenericPlatformStricmp::Strnicmp
                        (local_18,(wchar_t *)**(undefined8 **)this,(longlong)iVar7);
      if (iVar7 != 0) {
        return true;
      }
    }
    if (iVar9 == iVar10) {
      ::FString::RightChop
                (*(FString **)this,&local_30,*(int *)(*(longlong *)((longlong)this + 8) + 8));
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_30.Data.ArrayNum != 0) {
        FVar8.Data = local_30.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_38,(wchar_t *)FVar8.Data);
      if ((((FName *)pFVar3->Data <= &local_38) &&
          (&local_38 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
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
      iVar7 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar7 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar7 * 8) = local_38;
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// CollectionExists @ 14f010620

bool __thiscall UAssetTagsSubsystem::CollectionExists(UAssetTagsSubsystem *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  undefined1 uVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  FVar2 = AssetRegistryConstants::ModuleName;
  local_res10 = param_1;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
  ::FName::ToString(&local_res10,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  pcVar1 = *(code **)(*plVar5 + 1000);
  pFVar6 = ::FName::FName(&local_res18,(wchar_t *)FVar7.Data);
  uVar3 = (*pcVar1)(plVar5,*pFVar6);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// GetAssetsInCollection @ 14f010720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TArray<FAssetData,TSizedDefaultAllocator<32>_> * __thiscall
UAssetTagsSubsystem::GetAssetsInCollection
          (UAssetTagsSubsystem *this,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  FName FVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FModuleManager *this_01;
  IModuleInterface *pIVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  FName *pFVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  FName local_res18;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1f8 [8];
  FSparseArrayAllocationInfo local_1f0;
  undefined4 local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  FName local_1cc;
  FString local_1c0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  FSoftObjectPath *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  ulonglong local_38;
  
  this_00 = &local_138.AllocationFlags;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar12 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar2 = AssetRegistryConstants::ModuleName;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  this_01 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this_01,FVar2);
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  ::FName::ToString(&local_res18,(FString *)&local_1f0);
  ::FString::PrintfImpl(&local_1c0,L"%s%s");
  if ((void *)CONCAT44(local_1f0._4_4_,local_1f0.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_1f0._4_4_,local_1f0.Index));
  }
  local_188 = (void *)0x0;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Data.ArrayNum != 0) {
    FVar11.Data = local_1c0.Data.AllocatorInstance.Data;
  }
  local_180 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168 = (FSoftObjectPath *)0x0;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_138.AllocationFlags.NumBits = 0;
  local_138.AllocationFlags.MaxBits = 0x80;
  local_138.FirstFreeIndex = -1;
  local_138.NumFreeIndices = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  local_d8.MaxBits = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_46 = 1;
  ::FName::FName(&local_1cc,(wchar_t *)FVar11.Data);
  if (local_138.NumFreeIndices == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)&local_138,&local_138.Data.ArrayNum,
                       &local_138.Data.ArrayMax);
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
    FVar17 = (ForElementType<unsigned_int>)this_00;
    if (local_138.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_138.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar7 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar7;
    puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x1f));
    iVar6 = local_138.FirstFreeIndex;
  }
  else {
    local_138.NumFreeIndices = local_138.NumFreeIndices + -1;
    iVar6 = *(int *)(local_138.Data.AllocatorInstance.Data +
                    (longlong)local_138.FirstFreeIndex * 0x20 + 4);
    iVar5 = local_138.FirstFreeIndex;
    if (local_138.NumFreeIndices != 0) {
      *(undefined4 *)(local_138.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  local_138.FirstFreeIndex = iVar6;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_138,&local_1f0,iVar5);
  pFVar15 = pFVar12;
  if (local_1f0.Pointer != (FName *)0x0) {
    *(FName *)local_1f0.Pointer = local_1cc;
    ((FName *)((longlong)local_1f0.Pointer + 8))->ComparisonIndex = 0;
    ((FName *)((longlong)local_1f0.Pointer + 8))->Number = 0;
    (((FName *)((longlong)local_1f0.Pointer + 0x10))->ComparisonIndex).Value = 0;
    *(undefined8 *)&((FName *)((longlong)local_1f0.Pointer + 0x10))->Number = 0xffffffffffffffff;
    pFVar15 = local_1f0.Pointer;
  }
  FVar2 = *pFVar15;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar13 = local_138.Data.ArrayNum - local_138.NumFreeIndices;
  uVar14 = 1;
  if (3 < uVar13) {
    uVar18 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar14 <= (int)local_f0)) {
    uVar7 = local_f0 - 1 & FVar2.Number + uVar7;
    pFVar15[3].Number = uVar7;
    FVar11.Data = local_100;
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FVar11.Data = local_f8.Data;
    }
    uVar18 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar7;
    pFVar15[3].ComparisonIndex.Value = *(uint *)(FVar11.Data + uVar18 * 4);
    *(int *)(FVar11.Data + uVar18 * 4) = local_1f0.Index;
    goto LAB_14f010c15;
  }
  local_f0 = uVar14;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
  }
  if (uVar14 != 0) {
    uVar7 = uVar14;
    if (uVar14 < 2) {
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14f010a3c;
      }
    }
    else {
LAB_14f010a3c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar7,4);
    }
    if (0 < (int)uVar14) {
      uVar18 = (ulonglong)uVar14;
      pFVar15 = pFVar12;
      do {
        FVar11.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_f8.Data;
        }
        uVar10 = (ulonglong)pFVar15 & (longlong)(int)uVar14 - 1U;
        pFVar15 = (FName *)(((ForElementType<unsigned_int> *)&pFVar15->ComparisonIndex)->InlineData
                           + 1);
        *(undefined4 *)(FVar11.Data + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_f0 != 0) {
    local_1f0.Index = 0;
    local_1f0._4_4_ = 1;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    if (local_138.AllocationFlags.NumBits != 0) {
      FVar17 = (ForElementType<unsigned_int>)this_00;
      if (local_138.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_138.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar7 = *(uint *)FVar17;
      pFVar15 = pFVar12;
      while (uVar7 == 0) {
        uStack_1d8 = (int)pFVar15 + 0x20;
        pFVar15 = (FName *)(ulonglong)uStack_1d8;
        iVar5 = (int)pFVar12;
        local_1f0.Index = iVar5 + 1;
        pFVar12 = (FName *)(ulonglong)(uint)local_1f0.Index;
        if ((int)((local_138.AllocationFlags.NumBits - 1U) +
                 ((int)(local_138.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            local_1f0.Index) goto LAB_14f010b3d;
        uVar7 = *(uint *)((uchar *)((longlong)FVar17 + 4) + (longlong)iVar5 * 4);
      }
      local_1f0._4_4_ = -uVar7 & uVar7;
      uVar18 = (ulonglong)(uint)local_1f0._4_4_ * 2 + 1;
      lVar4 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_1dc = (uStack_1d8 - 1) + (int)lVar4;
      pFVar12 = (FName *)(ulonglong)uStack_1dc;
      if (local_138.AllocationFlags.NumBits < (int)uStack_1dc) {
LAB_14f010b3d:
        pFVar12 = (FName *)(ulonglong)(uint)local_138.AllocationFlags.NumBits;
        uStack_1dc = local_138.AllocationFlags.NumBits;
      }
    }
    local_1e0 = 0xffffffff;
    local_1b0 = &local_138;
    local_1a8._padding_ = CONCAT44(local_1f0._4_4_,local_1f0.Index);
    local_1a8.CurrentBitIndex = uStack_1dc;
    local_1a8.UnvisitedBitMask = 0xffffffff;
    local_1a8._28_4_ = uStack_1d4;
    local_1a8.BaseBitIndex = uStack_1d8;
    local_1f0.Pointer = this_00;
    local_1a8.Array = this_00;
    if ((int)pFVar12 < local_138.AllocationFlags.NumBits) {
      do {
        pFVar16 = (local_1b0->Data).AllocatorInstance.Data + (longlong)(int)pFVar12 * 0x20;
        uVar3 = *(undefined8 *)pFVar16;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = local_f0 - 1 & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(pFVar16 + 0x1c) = uVar7;
        FVar11.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_f8.Data;
        }
        uVar18 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pFVar16 + 0x18) = *(undefined4 *)(FVar11.Data + uVar18 * 4);
        *(int *)(FVar11.Data + uVar18 * 4) = (int)pFVar12;
        local_1a8.UnvisitedBitMask = local_1a8.UnvisitedBitMask & ~local_1a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
        pFVar12 = (FName *)(ulonglong)(uint)local_1a8.CurrentBitIndex;
      } while (local_1a8.CurrentBitIndex < (local_1a8.Array)->NumBits);
    }
  }
LAB_14f010c15:
  (**(code **)(*plVar9 + 0x50))(plVar9,&local_188,__return_storage_ptr__,1);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar18 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  uVar18 = local_e0 >> 0x20;
  local_e0 = local_e0 & 0xffffffff00000000;
  if ((int)uVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_d8.NumBits = 0;
  if (0x80 < (uint)local_d8.MaxBits) {
    local_d8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)&local_138,0);
  if (local_138.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_138.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  DestructItems<FSoftObjectPath,int>(local_168,(int)local_160);
  if (local_168 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  AlgoImpl::
  IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,TLess<void>_>_>
            ((FAssetData *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_1f8[0],(TLess<void> *)local_1f8);
  return __return_storage_ptr__;
}

// GetCollections @ 14f010e60

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAssetTagsSubsystem::GetCollections
          (UAssetTagsSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  FModuleManager *this_00;
  IModuleInterface *pIVar2;
  longlong *plVar3;
  FIdentityFunctor local_res10 [8];
  void *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  code *local_38;
  void ***local_30;
  void **local_28;
  wchar_t **local_20;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar1 = AssetRegistryConstants::ModuleName;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
  local_40 = 3;
  local_58 = (void *)0x0;
  local_48 = L"CL_";
  local_28 = &local_58;
  local_50 = 0;
  local_20 = &local_48;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetTagsSubsystem::GetCollections'::__l3::<lambda_1>,bool,FName,TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)>_>
             ::Call;
  local_18 = __return_storage_ptr__;
  (**(code **)(*plVar3 + 0x410))(plVar3,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_res10[0],(FNameLexicalLess *)local_res10);
  return __return_storage_ptr__;
}

// GetCollectionsContainingAsset @ 14f010f50

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAssetTagsSubsystem::GetCollectionsContainingAsset
          (UAssetTagsSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  FString *pFVar2;
  FName local_res18 [2];
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  local_res18[0] = param_1;
  pFVar2 = ::FName::ToString(local_res18,&local_38);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_48.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_48);
  K2_GetCollectionsContainingAsset(this,__return_storage_ptr__,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCollectionsContainingAssetData @ 14f011000

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAssetTagsSubsystem::GetCollectionsContainingAssetData
          (UAssetTagsSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FAssetData *param_1)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath local_28;
  
  pFVar1 = FAssetData::GetSoftObjectPath(param_1,&local_28);
  K2_GetCollectionsContainingAsset(this,__return_storage_ptr__,pFVar1);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCollectionsContainingAssetPtr @ 14f011050

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAssetTagsSubsystem::GetCollectionsContainingAssetPtr
          (UAssetTagsSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1)

{
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_1);
  K2_GetCollectionsContainingAsset(this,__return_storage_ptr__,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0110c0

UClass * __cdecl UAssetTagsSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetTags",L"AssetTagsSubsystem",
               &Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton,
               StaticRegisterNativesUAssetTagsSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAssetTagsSubsystem>,
               InternalVTableHelperCtorCaller<UAssetTagsSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton;
}

// K2_GetCollectionsContainingAsset @ 14f011180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAssetTagsSubsystem::K2_GetCollectionsContainingAsset
          (UAssetTagsSubsystem *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FSoftObjectPath *param_1
          )

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FNumberedPair *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  FName *local_138;
  FName *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  FIdentityFunctor local_108 [4];
  FName local_104;
  FName local_f8;
  ulonglong uStack_f0;
  FName local_e8;
  FValueId local_e0;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  ulonglong uStack_b0;
  FNumberedPair local_a8;
  longlong local_98 [2];
  longlong local_88;
  FAssetDataTagMapSharedView_u_0 local_60 [2];
  TReferenceControllerBase<1> *local_50;
  void *local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar14 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar4 = AssetRegistryConstants::ModuleName;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  local_138 = (FName *)CONCAT71(local_138._1_7_,1);
  (**(code **)(*plVar8 + 0x78))(plVar8,local_98,param_1,1);
  if ((local_98[0] != 0) && (local_88 != 0)) {
    plVar8 = (longlong *)
             CONCAT44(local_60[0].Fixed.PairBegin,
                      CONCAT22(local_60[0].Fixed.Num,(undefined2)local_60[0].Bits));
    if (((undefined2)local_60[0].Bits & 1) == 0) {
      if (plVar8 == (longlong *)0x0) goto LAB_14f011409;
      uVar12 = *(uint *)(plVar8 + 1);
    }
    else {
      uVar12 = (uint)(ushort)local_60[0]._2_2_;
    }
    if (uVar12 != 0) {
      while( true ) {
        if (plVar8 == (longlong *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("View.Bits != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                             ,0x1a6,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          plVar8 = (longlong *)
                   CONCAT44(local_60[0].Fixed.PairBegin,
                            CONCAT22(local_60[0].Fixed.Num,(undefined2)local_60[0].Bits));
        }
        if (((ulonglong)plVar8 & 1) == 0) {
          uStack_f0 = *plVar8 + (uVar14 * 3 + 1) * 8;
          local_f8 = *(FName *)(*plVar8 + uVar14 * 0x18);
        }
        else {
          pFVar10 = FixedTagPrivate::FMapHandle::At(&local_60[0].Fixed,&local_a8,(uint)uVar14);
          local_f8 = pFVar10->Key;
          local_e0 = pFVar10->Value;
          uStack_f0 = (((ulonglong)plVar8 & 0xffff) >> 2) << 0x20 | (ulonglong)(uint)local_e0 |
                      0x8000000000000000;
          local_e8 = local_f8;
        }
        uStack_b0 = uStack_f0;
        local_b8 = local_f8;
        ::FName::ToString(&local_b8,&local_c8);
        bVar5 = ::FString::StartsWith(&local_c8,L"CL_",3,IgnoreCase);
        if (bVar5) {
          ::FString::RightChop(&local_c8,&local_d8,3);
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar11.Data = local_d8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_104,(wchar_t *)FVar11.Data);
          pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= &local_104) && (&local_104 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
            local_120 = (longlong)__return_storage_ptr__->ArrayNum;
            local_118 = 8;
            local_138 = &local_104;
            local_130 = pFVar1;
            local_128 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(FName *)(pFVar2 + (longlong)iVar6 * 8) = local_104;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if (uVar13 == uVar12) break;
        plVar8 = (longlong *)
                 CONCAT44(local_60[0].Fixed.PairBegin,
                          CONCAT22(local_60[0].Fixed.Num,(undefined2)local_60[0].Bits));
      }
    }
  }
LAB_14f011409:
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_60[0].Fixed);
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_108[0],(FNameLexicalLess *)local_108);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAssetTagsSubsystem @ 14f011480

void __cdecl UAssetTagsSubsystem::StaticRegisterNativesUAssetTagsSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UAssetTagsSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCollectionExists @ 14f011580

void __cdecl
UAssetTagsSubsystem::execCollectionExists(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined1 uVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  longlong *plVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = AssetRegistryConstants::ModuleName;
  local_res18 = local_res10;
  this = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this,FVar3);
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
  ::FName::ToString(&local_res18,&local_28);
  ::FString::PrintfImpl(&local_38,L"%s%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  pcVar2 = *(code **)(*plVar6 + 1000);
  pFVar7 = ::FName::FName(&local_res20,(wchar_t *)FVar8.Data);
  uVar4 = (*pcVar2)(plVar6,*pFVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  return;
}

// execGetAssetsInCollection @ 14f0116c0

void __cdecl
UAssetTagsSubsystem::execGetAssetsInCollection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetAssetsInCollection((UAssetTagsSubsystem *)param_1,&local_18,local_res10);
  if (param_3 != pTVar2) {
    DestructItems<FAssetData,int>(*(FAssetData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FAssetData,int>((FAssetData *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAssetData *)local_18.AllocatorInstance.Data != (FAssetData *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCollections @ 14f0117c0

void __cdecl UAssetTagsSubsystem::execGetCollections(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  longlong *plVar3;
  FIdentityFunctor local_res10 [8];
  FName *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  code *local_38;
  void ***local_30;
  void **local_28;
  wchar_t **local_20;
  FName **local_18;
  
  local_68 = (FName *)0x0;
  local_60 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = AssetRegistryConstants::ModuleName;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this,FVar1);
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
  local_40 = 3;
  local_58 = (void *)0x0;
  local_48 = L"CL_";
  local_28 = &local_58;
  local_50 = 0;
  local_20 = &local_48;
  local_18 = &local_68;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetTagsSubsystem::GetCollections'::__l3::<lambda_1>,bool,FName,TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)>_>
             ::Call;
  (**(code **)(*plVar3 + 0x410))(plVar3,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            (local_68,(int)local_60,local_res10[0],(FNameLexicalLess *)local_res10);
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FName **)param_3 = local_68;
    *(int *)((longlong)param_3 + 8) = (int)local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = (FName *)0x0;
  }
  if (local_68 != (FName *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execGetCollectionsContainingAsset @ 14f011900

void __cdecl
UAssetTagsSubsystem::execGetCollectionsContainingAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FString *pFVar3;
  FName local_res10;
  FName local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FSoftObjectPath local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  pFVar3 = ::FName::ToString(&local_res18,&local_48);
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  local_58.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_58.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_58.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_38,&local_58);
  K2_GetCollectionsContainingAsset((UAssetTagsSubsystem *)param_1,&local_68,&local_38);
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetCollectionsContainingAssetData @ 14f011a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetTagsSubsystem::execGetCollectionsContainingAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSoftObjectPath *pFVar2;
  FAssetData *this;
  undefined1 auStack_d8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_b8;
  FSoftObjectPath local_a8;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88.ChunkArrayRegistryHandle.Index = -1;
  local_88.PackageName.ComparisonIndex.Value = 0;
  local_88.PackageName.Number = 0;
  local_88.PackagePath.ComparisonIndex.Value = 0;
  local_88.PackagePath.Number = 0;
  local_88.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetName.Number = 0;
  local_88.AssetClass.ComparisonIndex.Value = 0;
  local_88.AssetClass.Number = 0;
  local_88.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetClassPath.PackageName.Number = 0;
  local_88.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetClassPath.AssetName.Number = 0;
  local_88.PackageFlags = 0;
  local_88.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_88.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_88.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_88.ChunkIDs.ArrayNum = 0;
  local_88.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAssetData::GetSoftObjectPath(this,&local_a8);
  K2_GetCollectionsContainingAsset((UAssetTagsSubsystem *)param_1,&local_b8,pFVar2);
  if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_b8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_b8.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_b8.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_b8.ArrayMax;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execGetCollectionsContainingAssetPtr @ 14f011be0

void __cdecl
UAssetTagsSubsystem::execGetCollectionsContainingAssetPtr
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FSoftObjectPath local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,local_res10);
  K2_GetCollectionsContainingAsset((UAssetTagsSubsystem *)param_1,&local_38,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.ArrayMax;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execK2_GetCollectionsContainingAsset @ 14f011d00

void __cdecl
UAssetTagsSubsystem::execK2_GetCollectionsContainingAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FSoftObjectPath *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar3 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = K2_GetCollectionsContainingAsset((UAssetTagsSubsystem *)param_1,&local_38,pFVar3);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

