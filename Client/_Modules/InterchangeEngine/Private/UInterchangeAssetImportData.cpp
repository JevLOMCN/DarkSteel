// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 39

// StaticClass @ 14e4cc720

UClass * __cdecl UInterchangeAssetImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeAssetImportData",
               &Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton,
               StaticRegisterNativesUInterchangeAssetImportData,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAssetImportData>,
               InternalVTableHelperCtorCaller<UInterchangeAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton;
}

// UInterchangeAssetImportData @ 14e4d81e0

UInterchangeAssetImportData * __thiscall
UInterchangeAssetImportData::UInterchangeAssetImportData
          (UInterchangeAssetImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAssetImportData__6B_;
  (this->SceneImportAsset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SceneImportAsset).AssetPath.PackageName.Number = 0;
  (this->SceneImportAsset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SceneImportAsset).AssetPath.AssetName.Number = 0;
  (this->SceneImportAsset).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SceneImportAsset).SubPathString.Data.ArrayNum = 0;
  (this->SceneImportAsset).SubPathString.Data.ArrayMax = 0;
  (this->NodeUniqueID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeUniqueID).Data.ArrayNum = 0;
  (this->NodeUniqueID).Data.ArrayMax = 0;
  (this->NodeContainer_DEPRECATED).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->Pipelines_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pipelines_DEPRECATED).ArrayNum = 0;
  (this->Pipelines_DEPRECATED).ArrayMax = 0;
  (this->TransientNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->TransientPipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientPipelines).ArrayNum = 0;
  (this->TransientPipelines).ArrayMax = 0;
  (this->TransientTranslatorSettings).field0_0x0.DebugPtr = (UInterchangeTranslatorSettings *)0x0;
  (this->CachedNodeContainer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedNodeContainer).ArrayNum = 0;
  (this->CachedNodeContainer).ArrayMax = 0;
  (this->CachedPipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPipelines).ArrayNum = 0;
  (this->CachedPipelines).ArrayMax = 0;
  (this->CachedCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCustomVersions).Versions.ArrayNum = 0;
  (this->CachedCustomVersions).Versions.ArrayMax = 0;
  *(undefined8 *)&this->CachedTranslatorSettings = 0;
  *(undefined8 *)&(this->CachedTranslatorSettings).field_0x8 = 0;
  *(undefined8 *)&(this->CachedTranslatorSettings).field_0x10 = 0;
  *(undefined8 *)&(this->CachedTranslatorSettings).field_0x18 = 0;
  return this;
}

// UInterchangeAssetImportData @ 14e4d8290

UInterchangeAssetImportData * __thiscall
UInterchangeAssetImportData::UInterchangeAssetImportData
          (UInterchangeAssetImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAssetImportData__6B_;
  (this->SceneImportAsset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SceneImportAsset).AssetPath.PackageName.Number = 0;
  (this->SceneImportAsset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SceneImportAsset).AssetPath.AssetName.Number = 0;
  (this->SceneImportAsset).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SceneImportAsset).SubPathString.Data.ArrayNum = 0;
  (this->SceneImportAsset).SubPathString.Data.ArrayMax = 0;
  (this->NodeUniqueID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeUniqueID).Data.ArrayNum = 0;
  (this->NodeUniqueID).Data.ArrayMax = 0;
  (this->NodeContainer_DEPRECATED).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->Pipelines_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pipelines_DEPRECATED).ArrayNum = 0;
  (this->Pipelines_DEPRECATED).ArrayMax = 0;
  (this->TransientNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->TransientPipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientPipelines).ArrayNum = 0;
  (this->TransientPipelines).ArrayMax = 0;
  (this->TransientTranslatorSettings).field0_0x0.DebugPtr = (UInterchangeTranslatorSettings *)0x0;
  (this->CachedNodeContainer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedNodeContainer).ArrayNum = 0;
  (this->CachedNodeContainer).ArrayMax = 0;
  (this->CachedPipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPipelines).ArrayNum = 0;
  (this->CachedPipelines).ArrayMax = 0;
  (this->CachedCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCustomVersions).Versions.ArrayNum = 0;
  (this->CachedCustomVersions).Versions.ArrayMax = 0;
  *(undefined8 *)&this->CachedTranslatorSettings = 0;
  *(undefined8 *)&(this->CachedTranslatorSettings).field_0x8 = 0;
  *(undefined8 *)&(this->CachedTranslatorSettings).field_0x10 = 0;
  *(undefined8 *)&(this->CachedTranslatorSettings).field_0x18 = 0;
  return this;
}

// ~UInterchangeAssetImportData @ 14e4daba0

void __thiscall
UInterchangeAssetImportData::~UInterchangeAssetImportData(UInterchangeAssetImportData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeAssetImportData__6B_;
  pvVar1 = *(void **)&(this->CachedTranslatorSettings).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->CachedTranslatorSettings != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedTranslatorSettings);
  }
  pFVar2 = (this->CachedCustomVersions).Versions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)(this->CachedPipelines).AllocatorInstance.Data,
             (this->CachedPipelines).ArrayNum);
  pFVar2 = (this->CachedPipelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CachedNodeContainer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TransientPipelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Pipelines_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NodeUniqueID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SceneImportAsset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// BackupSourceData @ 14e4e4a30

void __thiscall UInterchangeAssetImportData::BackupSourceData(UInterchangeAssetImportData *this)

{
  return;
}

// ClearBackupSourceData @ 14e4e61c0

void __thiscall
UInterchangeAssetImportData::ClearBackupSourceData(UInterchangeAssetImportData *this)

{
  return;
}

// GetFromObject @ 14e4f6490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAssetImportData * __cdecl UInterchangeAssetImportData::GetFromObject(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UInterchangeAssetImportData *pUVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)param_1,&local_18,true,RF_NoFlags,Borrowed);
    iVar4 = local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
    FVar6.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if (local_18.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      pUVar3 = *(UInterchangeAssetImportData **)FVar6.Data;
      if (pUVar3 != (UInterchangeAssetImportData *)0x0) {
        pUVar5 = StaticClass();
        iVar2 = (int)pUVar5->_padding_;
        if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          if (local_18.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pUVar3;
          }
          FMemory::Free(local_18.AllocatorInstance.Data);
          return pUVar3;
        }
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return (UInterchangeAssetImportData *)0x0;
}

// GetNodeContainer @ 14e4f6e40

UInterchangeBaseNodeContainer * __thiscall
UInterchangeAssetImportData::GetNodeContainer(UInterchangeAssetImportData *this)

{
  ProcessContainerCache(this);
  return (this->TransientNodeContainer).field0_0x0.DebugPtr;
}

// GetNumberOfPipelines @ 14e4f6e60

int __thiscall UInterchangeAssetImportData::GetNumberOfPipelines(UInterchangeAssetImportData *this)

{
  ProcessPipelinesCache(this);
  return (this->TransientPipelines).ArrayNum;
}

// GetPipelineClassPerName @ 14e4f73b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMap<FString,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>_> *
__cdecl UInterchangeAssetImportData::GetPipelineClassPerName
                  (TMap<FString,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>_>
                   *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UInterchangeManager *this;
  ulonglong uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined8 *puVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  UObjectBaseUtility *local_res8 [2];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_98;
  FString *local_88;
  UObjectBaseUtility **local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FString,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar6 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  this = UInterchangeManager::GetInterchangeManager();
  UInterchangeManager::FindPipelineCandidate(this,&local_98);
  iVar4 = local_98.ArrayNum;
  uVar9 = local_98.ArrayNum * 8;
  if (uVar9 <= (uint)(*(int *)&__return_storage_ptr__->field_0x8 -
                     *(int *)&__return_storage_ptr__->field_0x34)) goto LAB_14e4f7644;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar9);
  if (uVar9 < 4) {
    uVar9 = 1;
  }
  else {
    uVar7 = (ulonglong)((iVar4 & 0x1fffffffU) * 4 + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar9 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e4f7644;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar9;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar9 != 0) {
    uVar12 = uVar9;
    if (uVar9 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar12 = 0;
        goto LAB_14e4f74a1;
      }
    }
    else {
LAB_14e4f74a1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar12,4);
    }
    if (0 < (int)uVar9) {
      uVar13 = (ulonglong)uVar9;
      uVar7 = uVar6;
      do {
        puVar5 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar3 = uVar7 & (longlong)(int)uVar9 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(puVar5 + uVar3 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_78._8_8_ = &__return_storage_ptr__->field_0x10;
    local_78._4_4_ = 1;
    local_78._0_4_ = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar14 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar14 = (uint *)local_78._8_8_;
      }
      uVar12 = *puVar14;
      uVar7 = uVar6;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        iVar4 = (int)uVar6;
        local_78._0_4_ = iVar4 + 1;
        uVar6 = (ulonglong)(uint)local_78._0_4_;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78._0_4_)
        goto LAB_14e4f7597;
        uVar12 = puVar14[(longlong)iVar4 + 1];
      }
      local_78._4_4_ = -uVar12 & uVar12;
      uVar6 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_14e4f7597:
        uVar6 = (ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_ = CONCAT44(local_78._4_4_,local_78._0_4_);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = __return_storage_ptr__;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78._8_8_;
    if ((int)uVar6 < (int)uVar9) {
      do {
        puVar10 = (undefined8 *)((longlong)(int)uVar6 * 0x20 + *(longlong *)local_58);
        iVar4 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar4 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar8);
        uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar9;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar9;
        puVar5 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar7 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar5 + uVar7 * 4);
        *(int *)(puVar5 + uVar7 * 4) = (int)uVar6;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_14e4f7644:
  iVar4 = local_98.ArrayNum;
  pFVar1 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 8;
  FVar11.Data = local_98.AllocatorInstance.Data;
  while( true ) {
    if (local_98.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar11.Data == pFVar1) break;
    local_res8[0] = *(UObjectBaseUtility **)FVar11.Data;
    local_88 = UObjectBaseUtility::GetFullName
                         (local_res8[0],(FString *)local_78,(UObject *)0x0,None);
    local_80 = local_res8;
    TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,UClass_*_const_&>_>
              ((TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,
               (TPairInitializer<FString_&&,UClass_*_const_&> *)(local_res8 + 1),(bool *)&local_88);
    if ((void *)CONCAT44(local_78._4_4_,local_78._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_78._4_4_,local_78._0_4_));
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPipelines @ 14e4f7990

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeAssetImportData::GetPipelines
          (UInterchangeAssetImportData *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  ProcessPipelinesCache(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (this->TransientPipelines).AllocatorInstance.Data;
  iVar2 = (this->TransientPipelines).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TransientPipelines).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    lVar3 = *(longlong *)pFVar9;
    if (lVar3 != 0) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_28[0] = lVar3;
      if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_28[0];
    }
    pFVar9 = pFVar9 + 8;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e4f7ad0

UClass * __cdecl UInterchangeAssetImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeAssetImportData",
               &Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton,
               StaticRegisterNativesUInterchangeAssetImportData,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAssetImportData>,
               InternalVTableHelperCtorCaller<UInterchangeAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton;
}

// GetStoredFactoryNode @ 14e4f8b10

UInterchangeFactoryBaseNode * __thiscall
UInterchangeAssetImportData::GetStoredFactoryNode
          (UInterchangeAssetImportData *this,FString *param_1)

{
  UInterchangeBaseNodeContainer *this_00;
  UInterchangeFactoryBaseNode *pUVar1;
  
  ProcessContainerCache(this);
  this_00 = (this->TransientNodeContainer).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeBaseNodeContainer *)0x0) {
    pUVar1 = UInterchangeBaseNodeContainer::GetFactoryNode(this_00,param_1);
    return pUVar1;
  }
  return (UInterchangeFactoryBaseNode *)0x0;
}

// GetStoredNode @ 14e4f8b60

UInterchangeBaseNode * __thiscall
UInterchangeAssetImportData::GetStoredNode(UInterchangeAssetImportData *this,FString *param_1)

{
  UInterchangeBaseNodeContainer *this_00;
  UInterchangeBaseNode *pUVar1;
  
  ProcessContainerCache(this);
  this_00 = (this->TransientNodeContainer).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeBaseNodeContainer *)0x0) {
    pUVar1 = UInterchangeBaseNodeContainer::GetNode(this_00,param_1);
    return pUVar1;
  }
  return (UInterchangeBaseNode *)0x0;
}

// GetTranslatorSettings @ 14e4f9c60

UInterchangeTranslatorSettings * __thiscall
UInterchangeAssetImportData::GetTranslatorSettings(UInterchangeAssetImportData *this)

{
  ProcessTranslatorCache(this);
  return (this->TransientTranslatorSettings).field0_0x0.DebugPtr;
}

// PostLoad @ 14e4ff8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInterchangeAssetImportData::PostLoad(UInterchangeAssetImportData *this)

{
  UInterchangeBaseNodeContainer *this_00;
  char local_res8 [8];
  char *local_res10;
  undefined1 local_18 [16];
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->NodeContainer_DEPRECATED).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeBaseNodeContainer *)0x0) {
    local_res10 = local_res8;
    local_res8[0] = '\0';
    local_18._8_8_ = &local_res10;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UInterchangeAssetImportData::PostLoad'::__l5::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
         ::Call;
    UInterchangeBaseNodeContainer::IterateNodes
              (this_00,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)
                       local_18);
    if (local_res8[0] == '\0') {
      SetNodeContainer(this,(this->NodeContainer_DEPRECATED).field0_0x0.DebugPtr);
      (this->NodeContainer_DEPRECATED).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
    }
    else if (3 < (byte)LogInterchangeEngine._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this->_padding_,(FString *)local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
      if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
    }
  }
  if (0 < (this->Pipelines_DEPRECATED).ArrayNum) {
    SetPipelines(this,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->Pipelines_DEPRECATED);
    (this->Pipelines_DEPRECATED).ArrayNum = 0;
    if ((this->Pipelines_DEPRECATED).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Pipelines_DEPRECATED).AllocatorInstance,0,
                 &(this->Pipelines_DEPRECATED).ArrayMax);
    }
  }
  return;
}

// ProcessContainerCache @ 14e4ffa40

void __thiscall
UInterchangeAssetImportData::ProcessContainerCache(UInterchangeAssetImportData *this)

{
  longlong lVar1;
  UObject *pUVar2;
  UInterchangeBaseNodeContainer *this_00;
  FLargeMemoryReader local_c8;
  
  if (((this->TransientNodeContainer).field0_0x0.DebugPtr == (UInterchangeBaseNodeContainer *)0x0)
     && (lVar1 = (this->CachedNodeContainer).ArrayNum, 0 < lVar1)) {
    FLargeMemoryReader::FLargeMemoryReader
              (&local_c8,(uchar *)(this->CachedNodeContainer).AllocatorInstance.Data,lVar1,None,
               (FName)0x0);
    (**(code **)(local_c8._padding_ + 0x68))(&local_c8,&this->CachedCustomVersions);
    pUVar2 = GetTransientPackageAsObject();
    this_00 = NewObject<UInterchangeBaseNodeContainer>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->TransientNodeContainer).field0_0x0.DebugPtr = this_00;
    UInterchangeBaseNodeContainer::SerializeNodeContainerData(this_00,(FArchive *)&local_c8);
    FLargeMemoryReader::~FLargeMemoryReader(&local_c8);
  }
  if ((this->TransientNodeContainer).field0_0x0.DebugPtr == (UInterchangeBaseNodeContainer *)0x0) {
    ProcessDeprecatedData(this);
  }
  return;
}

// ProcessDeprecatedData @ 14e4ffb10

void __thiscall
UInterchangeAssetImportData::ProcessDeprecatedData(UInterchangeAssetImportData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UInterchangeBaseNodeContainer *pUVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  UObject *local_28 [2];
  
  if (((this->TransientNodeContainer).field0_0x0.DebugPtr == (UInterchangeBaseNodeContainer *)0x0)
     && (pUVar4 = (this->NodeContainer_DEPRECATED).field0_0x0.DebugPtr,
        pUVar4 != (UInterchangeBaseNodeContainer *)0x0)) {
    SetNodeContainer(this,pUVar4);
  }
  if ((this->TransientPipelines).ArrayNum == 0) {
    piVar1 = &(this->TransientPipelines).ArrayMax;
    (this->TransientPipelines).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->TransientPipelines).AllocatorInstance,0,piVar1);
    }
    pFVar10 = (this->Pipelines_DEPRECATED).AllocatorInstance.Data;
    iVar3 = (this->Pipelines_DEPRECATED).ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Pipelines_DEPRECATED).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      pUVar5 = *(UObject **)pFVar10;
      if (pUVar5 != (UObject *)0x0) {
        local_28[0] = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar6 = (this->TransientPipelines).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar6 + (longlong)*piVar1 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (this->TransientPipelines).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->TransientPipelines).AllocatorInstance,piVar1);
        }
        (this->TransientPipelines).ArrayNum = iVar9 + 1;
        *(UObject **)((this->TransientPipelines).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             local_28[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_28[0]);
        }
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// ProcessPipelinesCache @ 14e4ffce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall
UInterchangeAssetImportData::ProcessPipelinesCache(UInterchangeAssetImportData *this)

{
  int *piVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  FCoreRedirectObjectName *pFVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [8];
  FString local_f0;
  UObject *local_e0;
  uint local_d8;
  FCoreRedirectObjectName local_d0;
  FString local_b8;
  FCoreRedirectObjectName local_a8;
  TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((this->TransientPipelines).ArrayNum == 0) {
    iVar6 = (this->CachedPipelines).ArrayNum;
    if (iVar6 < 1) {
      ProcessDeprecatedData(this);
    }
    else {
      piVar1 = &(this->TransientPipelines).ArrayMax;
      (this->TransientPipelines).ArrayNum = 0;
      if (*piVar1 < iVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar6,&(this->TransientPipelines).AllocatorInstance,0,piVar1);
      }
      GetPipelineClassPerName
                ((TMap<FString,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>_>
                  *)&local_88);
      local_d8 = (this->CachedPipelines).ArrayNum;
      uVar7 = (ulonglong)(int)local_d8;
      pFVar13 = (this->CachedPipelines).AllocatorInstance.Data;
      pFVar12 = pFVar13 + uVar7 * 0x20;
      while( true ) {
        if ((this->CachedPipelines).ArrayNum != (int)uVar7) {
          local_f8[0] = 0;
          `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f8);
        }
        if (pFVar13 == pFVar12) break;
        local_f0.Data.ArrayNum = *(int *)(pFVar13 + 8);
        lVar11 = (longlong)local_f0.Data.ArrayNum;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)pFVar13;
        if (local_f0.Data.ArrayNum == 0) {
          local_f0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                     local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
          memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
        }
        lVar11 = 0;
        pFVar8 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_a8,&local_f0);
        FCoreRedirects::GetRedirectedName(&local_d0,Type_Class,pFVar8,None);
        if ((local_d0.ObjectName != (FName)0x0) || (local_d0.PackageName != (FName)0x0)) {
          pFVar9 = FCoreRedirectObjectName::ToString(&local_d0,&local_b8);
          if (&local_f0 != pFVar9) {
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            local_f0.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f0.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_f0.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar10.Data = local_f0.Data.AllocatorInstance.Data;
        }
        iVar6 = local_f0.Data.ArrayNum + -1;
        if (local_f0.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        iVar6 = TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(&local_88,uVar5,&local_f0);
        if (iVar6 == -1) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4103932115656113679>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeAssetImportData.cpp"
                             ,0x1f1,"ClassPerName.Contains(ClassFullName)");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->TransientPipelines).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&(this->TransientPipelines).AllocatorInstance,0,piVar1);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar6 = local_f0.Data.ArrayNum + -1;
        FVar10.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_f0.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar10.Data = (FScriptContainerElement *)L"";
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        iVar6 = TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(&local_88,uVar5,&local_f0);
        if (((iVar6 == -1) ||
            (lVar11 = (longlong)iVar6 * 0x20 + local_88.Elements._0_8_, lVar11 == 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_e0 = DeSerializePipeline((FString *)(pFVar13 + 0x10),*(UClass **)(lVar11 + 0x10));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_e0);
        }
        pFVar2 = (this->TransientPipelines).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->TransientPipelines).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->TransientPipelines).AllocatorInstance,piVar1);
        }
        (this->TransientPipelines).ArrayNum = iVar6 + 1;
        *(UObject **)((this->TransientPipelines).AllocatorInstance.Data + (longlong)iVar6 * 8) =
             local_e0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_e0);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        uVar7 = (ulonglong)local_d8;
        pFVar13 = pFVar13 + 0x20;
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
  }
  return;
}

// ProcessTranslatorCache @ 14e500110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall
UInterchangeAssetImportData::ProcessTranslatorCache(UInterchangeAssetImportData *this)

{
  UInterchangeTranslatorSettings *pUVar1;
  void *_Src;
  code *pcVar2;
  ForAnyElementType FVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  FCoreRedirectObjectName *pFVar11;
  FString *pFVar12;
  longlong lVar13;
  TObjectPtr<UInterchangeTranslatorSettings>_u_0 TVar14;
  TObjectPtr<UInterchangeTranslatorSettings>_u_0 TVar15;
  undefined1 auStackY_188 [32];
  FString local_148;
  TIterator local_138;
  UClass *local_120;
  EObjectFlags local_118;
  EInternalObjectFlags local_114;
  TObjectPtr<UInterchangeTranslatorSettings>_u_0 local_110;
  undefined8 local_108;
  undefined8 local_100;
  TPairInitializer<FString_&&,UClass_*_const_&> local_f8;
  TObjectPtr<UInterchangeTranslatorSettings>_u_0 *local_e8;
  FCoreRedirectObjectName local_e0;
  FString local_c0;
  FString local_b0;
  FCoreRedirectObjectName local_a0;
  TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = (this->TransientTranslatorSettings).field0_0x0.DebugPtr;
  TVar15.DebugPtr = (UInterchangeTranslatorSettings *)0x0;
  if ((pUVar1 != (UInterchangeTranslatorSettings *)0x0) &&
     ((UObjectBaseUtility::bGarbageEliminationEnabled ||
      ((*(uint *)&pUVar1->field_0x8 & 0x18000) != 0)))) {
    (this->TransientTranslatorSettings).field0_0x0.DebugPtr = (UInterchangeTranslatorSettings *)0x0;
  }
  if ((this->TransientTranslatorSettings).field0_0x0.DebugPtr !=
      (UInterchangeTranslatorSettings *)0x0) {
    return;
  }
  if (*(int *)&(this->CachedTranslatorSettings).field_0x8 < 2) {
    return;
  }
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  local_138.Index = -1;
  local_138.Array = &GUObjectArray;
  local_138.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_138);
  local_118 = RF_NoFlags;
  local_120 = pUVar8;
  local_114 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_114 = local_114 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  if ((pUVar8 == (UClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                         ,0x70,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&(local_138.Array)->ObjObjectsCritical);
  do {
    pFVar4 = local_138.CurrentObject;
    TVar14.DebugPtr = TVar15.DebugPtr;
    if (local_138.CurrentObject != (FUObjectItem *)0x0) {
      TVar14 = (TObjectPtr<UInterchangeTranslatorSettings>_u_0)
               ((local_138.CurrentObject)->field1_0x8).Object;
    }
    if (((local_118 & *(EObjectFlags *)&(TVar14.DebugPtr)->field_0x8) == RF_NoFlags) &&
       (pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(TVar14.DebugPtr)->field_0xc),
       (local_114 & (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)
       ) == Borrowed)) {
      pUVar10 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar8 == pUVar10) break;
      pUVar10 = (((TNonAccessTrackedObjectPtr<UClass> *)&(TVar14.DebugPtr)->field_0x10)->ObjectPtr).
                field0_0x0.DebugPtr;
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= (int)pUVar10->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar7 * 8) ==
          &pUVar8->_padding_)) break;
    }
    bVar5 = FUObjectArray::TIterator::Advance(&local_138);
    pUVar8 = local_120;
    pFVar4 = local_138.CurrentObject;
  } while (bVar5);
joined_r0x00014e5002c0:
  if (pFVar4 != (FUObjectItem *)0x0) {
    TVar14 = (TObjectPtr<UInterchangeTranslatorSettings>_u_0)(pFVar4->field1_0x8).Object;
    if ((UObjectBase *)TVar14.DebugPtr == (UObjectBase *)0x0) {
LAB_14e5002f2:
      local_110.DebugPtr = TVar15.DebugPtr;
    }
    else {
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      pUVar8 = (((TNonAccessTrackedObjectPtr<UClass> *)&(TVar14.DebugPtr)->field_0x10)->ObjectPtr).
               field0_0x0.DebugPtr;
      iVar7 = (int)pUVar10->_padding_;
      if (((int)pUVar8->_padding_ < iVar7) ||
         (local_110 = TVar14,
         (longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
         &pUVar10->_padding_)) goto LAB_14e5002f2;
    }
    pUVar8 = Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)&(((UObjectBase *)(local_110.DebugPtr + 1))->ClassPrivate).ObjectPtr.field0_0x0 <
           iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)&((UObjectBase *)(local_110.DebugPtr + 1))->ObjectFlags +
           (longlong)iVar7 * 8) != &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_f8.Value =
             (UClass **)
             UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)local_110.DebugPtr,&local_c0,(UObject *)0x0,None);
        local_e8 = &local_110;
        TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,UClass_*_const_&>_>
                  (&local_88,&local_f8,(bool *)&local_f8.Value);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_14e500370:
    do {
      do {
        bVar5 = FUObjectArray::TIterator::Advance(&local_138);
        pFVar4 = local_138.CurrentObject;
        if (!bVar5) goto joined_r0x00014e5002c0;
        TVar14.DebugPtr = TVar15.DebugPtr;
        if (local_138.CurrentObject != (FUObjectItem *)0x0) {
          TVar14 = (TObjectPtr<UInterchangeTranslatorSettings>_u_0)
                   ((local_138.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_118 & *(EObjectFlags *)&(TVar14.DebugPtr)->field_0x8) != RF_NoFlags);
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      if (local_120 != pUVar8) {
        pUVar8 = (((TNonAccessTrackedObjectPtr<UClass> *)&(TVar14.DebugPtr)->field_0x10)->ObjectPtr)
                 .field0_0x0.DebugPtr;
        iVar7 = (int)local_120->_padding_;
        if (((int)pUVar8->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
            &local_120->_padding_)) goto LAB_14e500370;
      }
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(TVar14.DebugPtr)->field_0xc);
    } while ((local_114 &
             (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
    goto joined_r0x00014e5002c0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&(local_138.Array)->ObjObjectsCritical);
  local_148.Data.ArrayNum = *(int *)&(this->CachedTranslatorSettings).field_0x8;
  lVar13 = (longlong)local_148.Data.ArrayNum;
  _Src = *(void **)&this->CachedTranslatorSettings;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_148.Data.ArrayNum == 0) {
    local_148.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_148,local_148.Data.ArrayNum
               ,&local_148.Data.ArrayMax);
    memcpy(local_148.Data.AllocatorInstance.Data,_Src,lVar13 * 2);
  }
  pFVar11 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_a0,&local_148);
  FCoreRedirects::GetRedirectedName(&local_e0,Type_Class,pFVar11,None);
  local_108 = 0;
  if ((local_e0.ObjectName != (FName)0x0) || (local_100 = 0, local_e0.PackageName != (FName)0x0)) {
    pFVar12 = FCoreRedirectObjectName::ToString(&local_e0,&local_b0);
    if (&local_148 != pFVar12) {
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      local_148.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = (pFVar12->Data).ArrayNum;
      local_148.Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = local_148.Data.ArrayNum + -1;
  FVar3.Data = local_148.Data.AllocatorInstance.Data;
  if (local_148.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
  iVar7 = TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&local_88,uVar6,&local_148);
  if (iVar7 == -1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4103932115656113710>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeAssetImportData.cpp"
                       ,0x1d2,"ClassPerName.Contains(ClassFullName)");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14e500630;
  }
  iVar7 = local_148.Data.ArrayNum + -1;
  FVar3.Data = local_148.Data.AllocatorInstance.Data;
  if (local_148.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
  iVar7 = TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&local_88,uVar6,&local_148);
  TVar14.DebugPtr = TVar15.DebugPtr;
  if (((iVar7 == -1) ||
      (TVar14.DebugPtr =
            (UInterchangeTranslatorSettings *)((longlong)iVar7 * 0x20 + local_88.Elements._0_8_),
      (UObjectBase *)TVar14.DebugPtr == (UObjectBase *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar14.DebugPtr =
       (UInterchangeTranslatorSettings *)
       DeSerializeTranslatorSettings
                 ((FString *)&(this->CachedTranslatorSettings).field_0x10,
                  (((TNonAccessTrackedObjectPtr<UClass> *)&(TVar14.DebugPtr)->field_0x10)->ObjectPtr
                  ).field0_0x0.DebugPtr);
  if ((UObjectBase *)TVar14.DebugPtr == (UObjectBase *)0x0) {
LAB_14e500603:
    TVar14.DebugPtr = TVar15.DebugPtr;
  }
  else {
    pUVar10 = Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();
    pUVar8 = (((TNonAccessTrackedObjectPtr<UClass> *)&(TVar14.DebugPtr)->field_0x10)->ObjectPtr).
             field0_0x0.DebugPtr;
    iVar7 = (int)pUVar10->_padding_;
    if (((int)pUVar8->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) != &pUVar10->_padding_
       )) goto LAB_14e500603;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObjectBase *)TVar14.DebugPtr != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar14.DebugPtr);
  }
  (this->TransientTranslatorSettings).field0_0x0.DebugPtr = (UInterchangeTranslatorSettings *)TVar14
  ;
  UObjectBase::AtomicallySetFlags((UObjectBase *)TVar14.DebugPtr,RF_Standalone);
LAB_14e500630:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// ReinstateBackupSourceData @ 14e502500

void __thiscall
UInterchangeAssetImportData::ReinstateBackupSourceData(UInterchangeAssetImportData *this)

{
  return;
}

// Serialize @ 14e506850

void __thiscall
UInterchangeAssetImportData::Serialize(UInterchangeAssetImportData *this,FArchive *param_1)

{
  int *piVar1;
  FCustomVersionContainer *pFVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  uchar *_Src_00;
  wchar_t *pwVar10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_128;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_118;
  TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> local_100;
  FLargeMemoryWriter local_e8;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FInterchangeCustomVersion::GUID);
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FInterchangeCustomVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    pFVar2 = &this->CachedCustomVersions;
    if (pFVar2 != (FCustomVersionContainer *)puVar9) {
      iVar3 = *(int *)(puVar9 + 1);
      piVar1 = &(this->CachedCustomVersions).Versions.ArrayMax;
      iVar4 = *piVar1;
      _Src = (void *)*puVar9;
      (this->CachedCustomVersions).Versions.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pFVar2->Versions).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x28);
        }
      }
    }
  }
  if (0 < iVar8) {
    if ((param_1->field_0x28 & 4) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&DebugContext,L"UInterchangeAssetImportData::Serialize");
        atexit(`UInterchangeAssetImportData::Serialize'::__l11::
               _dynamic_atexit_destructor_for__DebugContext__);
        _Init_thread_footer(&::_TSS0);
      }
      pwVar10 = L"";
      if (DebugContext.Data.ArrayNum != 0) {
        pwVar10 = (wchar_t *)DebugContext.Data.AllocatorInstance.Data;
      }
      FCurrentCustomVersions::Compare(&local_100,&(this->CachedCustomVersions).Versions,pwVar10);
      if (0 < local_100.ArrayNum) {
        ProcessContainerCache(this);
        ProcessPipelinesCache(this);
        if ((this->TransientNodeContainer).field0_0x0.DebugPtr !=
            (UInterchangeBaseNodeContainer *)0x0) {
          FLargeMemoryWriter::FLargeMemoryWriter(&local_e8,0,false,(wchar_t *)0x0);
          FArchive::UsingCustomVersion((FArchive *)&local_e8,&FInterchangeCustomVersion::GUID);
          UInterchangeBaseNodeContainer::SerializeNodeContainerData
                    ((this->TransientNodeContainer).field0_0x0.DebugPtr,(FArchive *)&local_e8);
          _Src_00 = FLargeMemoryWriter::GetData(&local_e8);
          local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_e8.Data.NumBytes < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(local_e8.Data.NumBytes);
          }
          if (((_Src_00 == (uchar *)0x0) && (local_e8.Data.NumBytes != 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ptr != nullptr || Count == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x2d3,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_e8.Data.NumBytes == 0) {
            local_118.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,local_e8.Data.NumBytes,0,&local_118.AllocatorInstance,
                       local_e8.Data.NumBytes,&local_118.ArrayMax);
            memcpy(local_118.AllocatorInstance.Data,_Src_00,local_e8.Data.NumBytes);
          }
          TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=
                    (&this->CachedNodeContainer,&local_118);
          if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.AllocatorInstance.Data);
          }
          FLargeMemoryWriter::~FLargeMemoryWriter(&local_e8);
        }
        iVar8 = (this->TransientPipelines).ArrayNum;
        pFVar5 = (this->TransientPipelines).AllocatorInstance.Data;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = iVar8;
        if (iVar8 == 0) {
          local_128.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,0,&local_128.AllocatorInstance,iVar8,&local_128.ArrayMax);
          ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                    (local_128.AllocatorInstance.Data,(TObjectPtr<UObject> *)pFVar5,iVar8);
        }
        SetPipelines(this,&local_128);
        if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
      }
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
              (param_1,&this->CachedNodeContainer);
    TArrayPrivateFriend::Serialize<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>
              (param_1,&this->CachedPipelines);
  }
  return;
}

// Serialize @ 14e506bd0

void __thiscall
UInterchangeAssetImportData::Serialize
          (UInterchangeAssetImportData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetNodeContainer @ 14e507d90

void __thiscall
UInterchangeAssetImportData::SetNodeContainer
          (UInterchangeAssetImportData *this,UInterchangeBaseNodeContainer *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  code *pcVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FCustomVersionContainer *pFVar6;
  uchar *_Src;
  ForAnyElementType local_f8;
  ulong64 local_f0;
  ulong64 uStack_e8;
  FCustomVersionContainer local_e0;
  FLargeMemoryWriter local_c8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UInterchangeBaseNodeContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TransientNodeContainer).field0_0x0.DebugPtr = param_1;
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    (this->CachedNodeContainer).ArrayNum = 0;
    if ((this->CachedNodeContainer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CachedNodeContainer).AllocatorInstance,0,
                 &(this->CachedNodeContainer).ArrayMax);
    }
  }
  else {
    FLargeMemoryWriter::FLargeMemoryWriter(&local_c8,0,false,(wchar_t *)0x0);
    pcVar2 = *(code **)(local_c8._padding_ + 0x68);
    pFVar6 = FCurrentCustomVersions::GetAll(&local_e0);
    (*pcVar2)(&local_c8,pFVar6);
    if (local_e0.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Versions.AllocatorInstance.Data);
    }
    UInterchangeBaseNodeContainer::SerializeNodeContainerData
              ((this->TransientNodeContainer).field0_0x0.DebugPtr,(FArchive *)&local_c8);
    uVar3 = local_c8.Data.NumBytes;
    _Src = FLargeMemoryWriter::GetData(&local_c8);
    local_f8.Data = (FScriptContainerElement *)0x0;
    if (local_c8.Data.NumBytes < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_c8.Data.NumBytes);
    }
    if (((_Src == (uchar *)0x0) && (local_c8.Data.NumBytes != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_f0 = uVar3;
    if (local_c8.Data.NumBytes != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,local_c8.Data.NumBytes,0,&local_f8,local_c8.Data.NumBytes,(long64 *)&uStack_e8)
      ;
      memcpy(local_f8.Data,_Src,local_c8.Data.NumBytes);
      uVar3 = uStack_e8;
    }
    uStack_e8 = uVar3;
    pTVar1 = &this->CachedNodeContainer;
    if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&local_f8) {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = local_f8.Data;
      (this->CachedNodeContainer).ArrayNum = local_f0;
      (this->CachedNodeContainer).ArrayMax = uStack_e8;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      uStack_e8 = 0;
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    FLargeMemoryWriter::~FLargeMemoryWriter(&local_c8);
  }
  return;
}

// SetPipelines @ 14e507fb0

void __thiscall
UInterchangeAssetImportData::SetPipelines
          (UInterchangeAssetImportData *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  TTuple<FString,FString> *pTVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  UObject *local_68;
  FString local_60;
  FString local_50;
  
  pTVar1 = &this->TransientPipelines;
  piVar2 = &(this->TransientPipelines).ArrayMax;
  (this->TransientPipelines).ArrayNum = 0;
  if ((this->TransientPipelines).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar12 = param_1->ArrayNum;
  pFVar15 = pFVar14 + (longlong)iVar12 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar15) break;
    pUVar5 = *(UObject **)pFVar14;
    if (pUVar5 != (UObject *)0x0) {
      local_68 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (pFVar6 <= (FScriptContainerElement *)&local_68) {
        if ((FScriptContainerElement *)&local_68 < pFVar6 + (longlong)*piVar2 * 8) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      iVar11 = (this->TransientPipelines).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->TransientPipelines).ArrayNum = iVar11 + 1;
      *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_68;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_68);
      }
    }
    pFVar14 = pFVar14 + 8;
  }
  uVar4 = (this->TransientPipelines).ArrayNum;
  pTVar3 = &this->CachedPipelines;
  if (-1 < (int)uVar4) {
    piVar2 = &(this->CachedPipelines).ArrayMax;
    pTVar7 = (TTuple<FString,FString> *)(pTVar3->AllocatorInstance).Data;
    iVar12 = (this->CachedPipelines).ArrayNum;
    if (*piVar2 < (int)uVar4) {
      DestructItems<TTuple<FString,FString>,int>(pTVar7,iVar12);
      (this->CachedPipelines).ArrayNum = 0;
      if (*piVar2 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar4,&pTVar3->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TTuple<FString,FString>,int>(pTVar7,iVar12);
      (this->CachedPipelines).ArrayNum = 0;
    }
    local_res8[0] = (this->TransientPipelines).ArrayNum;
    uVar13 = (ulonglong)(int)local_res8[0];
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    local_res18 = pFVar15 + uVar13 * 8;
    while( true ) {
      pFVar14 = local_res18;
      if ((this->TransientPipelines).ArrayNum != (int)uVar13) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar15 == pFVar14) break;
      pUVar5 = *(UObject **)pFVar15;
      if (pUVar5 != (UObject *)0x0) {
        SerializePipeline(&local_50,pUVar5);
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)&pUVar5->field_0x10,&local_60,(UObject *)0x0,None);
        iVar12 = (this->CachedPipelines).ArrayNum;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar3->AllocatorInstance,piVar2);
        }
        FVar9.Data = local_60.Data.AllocatorInstance.Data;
        pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x20;
        (this->CachedPipelines).ArrayNum = iVar12 + 1;
        *(undefined8 *)pFVar14 = 0;
        iVar12 = local_60.Data.ArrayNum;
        *(int *)(pFVar14 + 8) = iVar12;
        if (iVar12 == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,0,(ForAnyElementType *)pFVar14,iVar12,(int *)(pFVar14 + 0xc));
          memcpy(*(void **)pFVar14,FVar9.Data,(longlong)iVar12 * 2);
        }
        FVar9.Data = local_50.Data.AllocatorInstance.Data;
        pFVar6 = pFVar14 + 0x10;
        *(FScriptContainerElement **)pFVar6 = (FScriptContainerElement *)0x0;
        iVar12 = local_50.Data.ArrayNum;
        *(int *)(pFVar14 + 0x18) = iVar12;
        if (iVar12 == 0) {
          *(undefined4 *)(pFVar14 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,0,(ForAnyElementType *)pFVar6,iVar12,(int *)(pFVar14 + 0x1c));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar6,FVar9.Data,(longlong)iVar12 * 2);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      uVar13 = (ulonglong)local_res8[0];
      pFVar15 = pFVar15 + 8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// SetTranslatorSettings @ 14e508320

/* WARNING: Removing unreachable block (ram,0x00014e5083c0) */

void __thiscall
UInterchangeAssetImportData::SetTranslatorSettings
          (UInterchangeAssetImportData *this,UInterchangeTranslatorSettings *param_1)

{
  undefined1 *puVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TTuple<FString,FString> *pTVar4;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  ForAnyElementType local_28 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UInterchangeTranslatorSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TransientTranslatorSettings).field0_0x0.DebugPtr = param_1;
  UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Standalone);
  pTVar4 = &this->CachedTranslatorSettings;
  if (pTVar4 != (TTuple<FString,FString> *)local_38) {
    if (*(void **)pTVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar4);
    }
    *(undefined8 *)pTVar4 = 0;
    *(undefined8 *)&(this->CachedTranslatorSettings).field_0x8 = 0;
  }
  puVar1 = &(this->CachedTranslatorSettings).field_0x10;
  if ((ForAnyElementType *)puVar1 != local_28) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&(this->CachedTranslatorSettings).field_0x18 = 0;
  }
  if (param_1 != (UInterchangeTranslatorSettings *)0x0) {
    SerializeTranslatorSettings(&local_68,(UObject *)param_1);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)&param_1->field_0x10,&local_78,(UObject *)0x0,None);
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    iVar3 = local_78.Data.ArrayNum;
    local_50 = CONCAT44(local_50._4_4_,iVar3);
    if (iVar3 == 0) {
      local_50 = local_78.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_58,iVar3,(int *)((longlong)&local_50 + 4));
      memcpy(local_58.Data,FVar2.Data,(longlong)iVar3 * 2);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar3 = local_68.Data.ArrayNum;
    local_40 = CONCAT44(local_40._4_4_,iVar3);
    if (iVar3 == 0) {
      local_40 = local_68.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_48,iVar3,(int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,FVar2.Data,(longlong)iVar3 * 2);
    }
    if (pTVar4 != (TTuple<FString,FString> *)&local_58) {
      if (*(void **)pTVar4 != (void *)0x0) {
        FMemory::Free(*(void **)pTVar4);
      }
      *(FScriptContainerElement **)pTVar4 = local_58.Data;
      *(undefined4 *)&(this->CachedTranslatorSettings).field_0x8 = (undefined4)local_50;
      *(undefined4 *)&(this->CachedTranslatorSettings).field_0xc = local_50._4_4_;
      local_50 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
    }
    if ((ForAnyElementType *)puVar1 != &local_48) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_48.Data;
      *(undefined4 *)&(this->CachedTranslatorSettings).field_0x18 = (undefined4)local_40;
      local_48.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&(this->CachedTranslatorSettings).field_0x1c = local_40._4_4_;
      local_40 = 0;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUInterchangeAssetImportData @ 14e50a9b0

void __cdecl UInterchangeAssetImportData::StaticRegisterNativesUInterchangeAssetImportData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeAssetImportData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNodeContainer @ 14e50d120

void __cdecl
UInterchangeAssetImportData::execGetNodeContainer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ProcessContainerCache((UInterchangeAssetImportData *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x20;
  return;
}

// execGetNumberOfPipelines @ 14e50d170

void __cdecl
UInterchangeAssetImportData::execGetNumberOfPipelines
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ProcessPipelinesCache((UInterchangeAssetImportData *)param_1);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0x8;
  return;
}

// execGetPipelines @ 14e50d540

void __cdecl
UInterchangeAssetImportData::execGetPipelines(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetPipelines((UInterchangeAssetImportData *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetStoredFactoryNode @ 14e50d820

void __cdecl
UInterchangeAssetImportData::execGetStoredFactoryNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  FString local_18;
  
  pUVar2 = (UInterchangeFactoryBaseNode *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ProcessContainerCache((UInterchangeAssetImportData *)param_1);
  if (*(UInterchangeBaseNodeContainer **)&param_1[2].field_0x20 !=
      (UInterchangeBaseNodeContainer *)0x0) {
    pUVar2 = UInterchangeBaseNodeContainer::GetFactoryNode
                       (*(UInterchangeBaseNodeContainer **)&param_1[2].field_0x20,&local_18);
  }
  *(UInterchangeFactoryBaseNode **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStoredNode @ 14e50d8f0

void __cdecl
UInterchangeAssetImportData::execGetStoredNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *pUVar2;
  FString local_18;
  
  pUVar2 = (UInterchangeBaseNode *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ProcessContainerCache((UInterchangeAssetImportData *)param_1);
  if (*(UInterchangeBaseNodeContainer **)&param_1[2].field_0x20 !=
      (UInterchangeBaseNodeContainer *)0x0) {
    pUVar2 = UInterchangeBaseNodeContainer::GetNode
                       (*(UInterchangeBaseNodeContainer **)&param_1[2].field_0x20,&local_18);
  }
  *(UInterchangeBaseNode **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTranslatorSettings @ 14e50de10

void __cdecl
UInterchangeAssetImportData::execGetTranslatorSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ProcessTranslatorCache((UInterchangeAssetImportData *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x10;
  return;
}

// execScriptExtractDisplayLabels @ 14e50ee70

void __cdecl
UInterchangeAssetImportData::execScriptExtractDisplayLabels
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  DestructItems<FString,int>((FString *)0x0,0);
  return;
}

// execScriptExtractFilenames @ 14e50eee0

void __cdecl
UInterchangeAssetImportData::execScriptExtractFilenames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  DestructItems<FString,int>((FString *)0x0,0);
  return;
}

// execScriptGetFirstFilename @ 14e50ef50

void __cdecl
UInterchangeAssetImportData::execScriptGetFirstFilename
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execSetNodeContainer @ 14e5110a0

void __cdecl
UInterchangeAssetImportData::execSetNodeContainer(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  FCustomVersionContainer *pFVar7;
  uchar *_Src;
  UObject *local_res8;
  ForAnyElementType local_108;
  ulong64 local_100;
  long64 lStack_f8;
  FCustomVersionContainer local_f0;
  FLargeMemoryWriter local_d8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[2].field_0x20 = pUVar5;
  if (pUVar5 == (UObject *)0x0) {
    lVar4 = *(longlong *)(param_1 + 4);
    *(undefined8 *)&param_1[3].field_0x20 = 0;
    if (lVar4 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&param_1[3].field_0x18,0,(long64 *)(param_1 + 4));
    }
  }
  else {
    FLargeMemoryWriter::FLargeMemoryWriter(&local_d8,0,false,(wchar_t *)0x0);
    pcVar3 = *(code **)(local_d8._padding_ + 0x68);
    pFVar7 = FCurrentCustomVersions::GetAll(&local_f0);
    (*pcVar3)(&local_d8,pFVar7);
    if (local_f0.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Versions.AllocatorInstance.Data);
    }
    UInterchangeBaseNodeContainer::SerializeNodeContainerData
              (*(UInterchangeBaseNodeContainer **)&param_1[2].field_0x20,(FArchive *)&local_d8);
    _Src = FLargeMemoryWriter::GetData(&local_d8);
    local_108.Data = (FScriptContainerElement *)0x0;
    if (local_d8.Data.NumBytes < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_d8.Data.NumBytes);
    }
    if (((_Src == (uchar *)0x0) && (local_d8.Data.NumBytes != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_100 = local_d8.Data.NumBytes;
    if (local_d8.Data.NumBytes == 0) {
      lStack_f8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,local_d8.Data.NumBytes,0,&local_108,local_d8.Data.NumBytes,&lStack_f8);
      memcpy(local_108.Data,_Src,local_d8.Data.NumBytes);
    }
    puVar1 = &param_1[3].field_0x18;
    if ((ForAnyElementType *)puVar1 != &local_108) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_108.Data;
      *(ulong64 *)&param_1[3].field_0x20 = local_100;
      *(long64 *)(param_1 + 4) = lStack_f8;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0;
      lStack_f8 = 0;
    }
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    FLargeMemoryWriter::~FLargeMemoryWriter(&local_d8);
  }
  return;
}

// execSetPipelines @ 14e511310

void __cdecl
UInterchangeAssetImportData::execSetPipelines(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPipelines((UInterchangeAssetImportData *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetTranslatorSettings @ 14e5113c0

/* WARNING: Removing unreachable block (ram,0x00014e5114b4) */

void __cdecl
UInterchangeAssetImportData::execSetTranslatorSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObjectBase *this;
  ForAnyElementType FVar3;
  int iVar4;
  UObject *pUVar5;
  UObjectBase *local_res8;
  FString local_78;
  FString local_68;
  undefined1 local_58 [16];
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_28 [2];
  
  local_res8 = (UObjectBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(UObjectBase **)&param_1[3].field_0x10 = this;
  UObjectBase::AtomicallySetFlags(this,RF_Standalone);
  pUVar5 = param_1 + 5;
  if (pUVar5 != (UObject *)&stack0xffffffffffffffc8) {
    if (*(void **)pUVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pUVar5);
    }
    *(undefined8 *)pUVar5 = 0;
    *(undefined8 *)&param_1[5].field_0x8 = 0;
  }
  puVar1 = &param_1[5].field_0x10;
  if ((undefined8 *)puVar1 != local_28) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&param_1[5].field_0x18 = 0;
  }
  if (this != (UObjectBase *)0x0) {
    SerializeTranslatorSettings(&local_68,(UObject *)this);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr,&local_78,
               (UObject *)0x0,None);
    FVar3.Data = local_78.Data.AllocatorInstance.Data;
    local_58._0_8_ = (FScriptContainerElement *)0x0;
    iVar4 = local_78.Data.ArrayNum;
    local_58._8_4_ = iVar4;
    if (iVar4 == 0) {
      local_58._8_8_ = local_78.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)local_58,iVar4,(int *)(local_58 + 0xc));
      memcpy((void *)local_58._0_8_,FVar3.Data,(longlong)iVar4 * 2);
    }
    FVar3.Data = local_68.Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar4 = local_68.Data.ArrayNum;
    local_40 = CONCAT44(local_40._4_4_,iVar4);
    if (iVar4 == 0) {
      local_40 = local_68.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,&local_48,iVar4,(int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,FVar3.Data,(longlong)iVar4 * 2);
    }
    if (pUVar5 != (UObject *)local_58) {
      if (*(void **)pUVar5 != (void *)0x0) {
        FMemory::Free(*(void **)pUVar5);
      }
      *(undefined8 *)pUVar5 = local_58._0_8_;
      *(undefined4 *)&param_1[5].field_0x8 = local_58._8_4_;
      *(undefined4 *)&param_1[5].field_0xc = local_58._12_4_;
      local_58._8_8_ = 0;
      local_58._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((ForAnyElementType *)puVar1 != &local_48) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_48.Data;
      *(undefined4 *)&param_1[5].field_0x18 = (undefined4)local_40;
      local_48.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&param_1[5].field_0x1c = local_40._4_4_;
      local_40 = 0;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

