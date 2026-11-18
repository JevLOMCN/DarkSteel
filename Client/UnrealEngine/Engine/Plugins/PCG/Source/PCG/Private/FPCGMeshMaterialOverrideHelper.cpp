// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// ~FPCGMeshMaterialOverrideHelper @ 149be95e0

void __thiscall
FPCGMeshMaterialOverrideHelper::~FPCGMeshMaterialOverrideHelper
          (FPCGMeshMaterialOverrideHelper *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MaterialOverrideAttributeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)
             (this->StaticMaterialOverrides).AllocatorInstance.Data,
             (this->StaticMaterialOverrides).ArrayNum);
  pFVar1 = (this->StaticMaterialOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)
             (this->WorkingMaterialOverrides).AllocatorInstance.Data,
             (this->WorkingMaterialOverrides).ArrayNum);
  pFVar1 = (this->WorkingMaterialOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
            ((TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
              *)(this->ValueKeyToOverrideMaterials).AllocatorInstance.Data,
             (this->ValueKeyToOverrideMaterials).ArrayNum);
  pFVar1 = (this->ValueKeyToOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetMaterialOverrides @ 149e5ad80

TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
FPCGMeshMaterialOverrideHelper::GetMaterialOverrides
          (FPCGMeshMaterialOverrideHelper *this,long64 param_1)

{
  short sVar1;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar7;
  FWeakObjectPtr *pFVar8;
  FSoftObjectPath *pFVar9;
  FUtf8String *pFVar10;
  FString *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FWeakObjectPtr *pFVar15;
  ForAnyElementType FVar16;
  int *piVar17;
  FWeakObjectPtr *pFVar18;
  size_t _Size;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  FNameEntryId FVar22;
  uint uVar23;
  FNameEntryId FVar24;
  uint uVar25;
  uint local_res18 [4];
  longlong local_198;
  TPersistentObjectPtr<FSoftObjectPath> local_190;
  longlong local_168;
  FSoftObjectPath local_160;
  undefined8 local_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  FWeakObjectPtr *local_128;
  uint local_120;
  FSoftObjectPath local_118;
  undefined8 local_f8 [2];
  FScriptContainerElement *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint *local_d8;
  TPersistentObjectPtr<FSoftObjectPath> *local_d0;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  TPersistentObjectPtr<FSoftObjectPath> local_a8;
  FSoftObjectPath local_80 [2];
  
  if ((this->bIsValid == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorBase.cpp"
                         ,0x82,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  if (this->bUseMaterialOverrideAttributes == false) {
    return &this->StaticMaterialOverrides;
  }
  pFVar19 = (this->WorkingMaterialOverrides).AllocatorInstance.Data;
  iVar6 = (this->WorkingMaterialOverrides).ArrayNum;
  pTVar7 = &this->WorkingMaterialOverrides;
  piVar17 = &(this->WorkingMaterialOverrides).ArrayMax;
  if ((this->WorkingMaterialOverrides).ArrayMax < 0) {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)pFVar19,iVar6);
    (this->WorkingMaterialOverrides).ArrayNum = 0;
    if (*piVar17 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar7->AllocatorInstance,0,piVar17);
    }
  }
  else {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)pFVar19,iVar6);
    (this->WorkingMaterialOverrides).ArrayNum = 0;
  }
  pFVar15 = (FWeakObjectPtr *)0x0;
  iVar6 = (this->MaterialAttributes).ArrayNum;
  uVar14 = 0;
  if (0 < iVar6) {
    local_168 = 0;
    local_198 = 0;
    pFVar8 = pFVar15;
    do {
      lVar4 = local_168;
      uVar20 = (uint)pFVar8;
      uVar21 = ~uVar20 >> 0x1f;
      uVar23 = uVar14;
      if ((int)uVar20 < iVar6) {
        uVar23 = uVar21;
      }
      if ((uVar23 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      this_00 = *(FPCGMetadataAttribute<FSoftObjectPath> **)
                 ((this->MaterialAttributes).AllocatorInstance.Data + lVar4 * 8);
      local_res18[0] =
           FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,param_1);
      uVar23 = uVar14;
      if ((int)uVar20 < (this->ValueKeyToOverrideMaterials).ArrayNum) {
        uVar23 = uVar21;
      }
      if ((uVar23 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar19 = (this->ValueKeyToOverrideMaterials).AllocatorInstance.Data + local_198;
      pFVar8 = pFVar15;
      if (*(int *)(pFVar19 + 8) != *(int *)(pFVar19 + 0x34)) {
        pFVar13 = pFVar19 + 0x38;
        if (*(FScriptContainerElement **)(pFVar19 + 0x40) != (FScriptContainerElement *)0x0) {
          pFVar13 = *(FScriptContainerElement **)(pFVar19 + 0x40);
        }
        iVar6 = *(int *)(pFVar13 + (ulonglong)(*(int *)(pFVar19 + 0x48) - 1U & local_res18[0]) * 4);
        if (iVar6 != -1) {
          do {
            pFVar8 = (FWeakObjectPtr *)((longlong)iVar6 * 0x38 + *(longlong *)pFVar19);
            if (pFVar8->ObjectIndex == local_res18[0]) break;
            iVar6 = pFVar8[6].ObjectIndex;
            pFVar8 = pFVar15;
          } while (iVar6 != -1);
        }
      }
      local_140 = 0;
      local_190.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar18 = pFVar8 + 1;
      if (pFVar8 == (FWeakObjectPtr *)0x0) {
        pFVar18 = pFVar15;
      }
      local_190.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_190.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_190.WeakPtr.ObjectIndex = 0;
      local_190.WeakPtr.ObjectSerialNumber = 0;
      local_190.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_190.ObjectID.AssetPath.AssetName.Number = 0;
      local_190.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_190.ObjectID.AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&local_190.ObjectID.SubPathString,0);
      local_f8[0] = 0;
      FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_190,(FObjectPtr)local_f8);
      if (pFVar18 == (FWeakObjectPtr *)0x0) {
        sVar1 = (short)this_00->_padding_;
        local_128 = (FWeakObjectPtr *)0x0;
        local_120 = 0;
        if (sVar1 == 0xd) {
          pFVar9 = FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this_00,local_80,local_res18[0])
          ;
          FVar22.Value = (pFVar9->AssetPath).PackageName.ComparisonIndex.Value;
          uVar23 = (pFVar9->AssetPath).PackageName.Number;
          FVar24.Value = (pFVar9->AssetPath).AssetName.ComparisonIndex.Value;
          uVar25 = (pFVar9->AssetPath).AssetName.Number;
          pFVar10 = &pFVar9->SubPathString;
          FVar16.Data = (FScriptContainerElement *)pFVar15;
          pFVar8 = pFVar15;
          if ((FUtf8String *)&local_128 != pFVar10) {
            FVar16.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_120 = (pFVar9->SubPathString).Data.ArrayNum;
            pFVar8 = (FWeakObjectPtr *)(ulonglong)local_120;
            (pFVar9->SubPathString).Data.ArrayNum = 0;
            (pFVar9->SubPathString).Data.ArrayMax = 0;
            local_128 = (FWeakObjectPtr *)FVar16.Data;
          }
          uVar12 = (uint)pFVar8;
          local_138 = FVar22.Value;
          uStack_134 = uVar23;
          uStack_130 = FVar24.Value;
          uStack_12c = uVar25;
          if (local_80[0].SubPathString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80[0].SubPathString.Data.AllocatorInstance.Data);
          }
LAB_149e5b100:
          local_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.AssetPath.PackageName.ComparisonIndex.Value = FVar22.Value;
          local_118.AssetPath.PackageName.Number = uVar23;
          local_118.AssetPath.AssetName.ComparisonIndex.Value = FVar24.Value;
          local_118.AssetPath.AssetName.Number = uVar25;
          local_118.SubPathString.Data.ArrayNum = uVar12;
          if (uVar12 == 0) {
            local_118.SubPathString.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar12,0,(ForAnyElementType *)&local_118.SubPathString,uVar12,
                       &local_118.SubPathString.Data.ArrayMax);
            memcpy(local_118.SubPathString.Data.AllocatorInstance.Data,FVar16.Data,
                   (longlong)(int)uVar12);
          }
          local_a8.WeakPtr.ObjectIndex = 0;
          local_a8.WeakPtr.ObjectSerialNumber = 0;
          FSoftObjectPath::FSoftObjectPath(&local_a8.ObjectID,&local_118);
          if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
          }
          TPersistentObjectPtr<FSoftObjectPath>::operator=(&local_190,&local_a8);
          if (local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
          }
          uVar23 = uVar14;
          if ((int)uVar20 < (this->ValueKeyToOverrideMaterials).ArrayNum) {
            uVar23 = uVar21;
          }
          if ((uVar23 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar7;
          }
          local_d8 = local_res18;
          local_d0 = &local_190;
          TSet<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,TSoftObjectPtr<UMaterialInterface>_const_&>_>
                    ((TSet<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                      *)((this->ValueKeyToOverrideMaterials).AllocatorInstance.Data + local_198),
                     (TPairInitializer<int_const_&,TSoftObjectPtr<UMaterialInterface>_const_&> *)
                     (local_res18 + 2),(bool *)&local_d8);
          if ((FWeakObjectPtr *)FVar16.Data != (FWeakObjectPtr *)0x0) {
            FMemory::Free(FVar16.Data);
          }
          goto LAB_149e5b21b;
        }
        if (sVar1 == 9) {
          pFVar11 = FPCGMetadataAttribute<FString>::GetValue
                              ((FPCGMetadataAttribute<FString> *)this_00,&local_b8,local_res18[0]);
          local_160.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_160.AssetPath.PackageName.Number = 0;
          local_160.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_160.AssetPath.AssetName.Number = 0;
          local_160.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.SubPathString.Data.ArrayNum = 0;
          local_160.SubPathString.Data.ArrayMax = 0;
          local_e8 = (pFVar11->Data).AllocatorInstance.Data;
          iVar6 = (pFVar11->Data).ArrayNum;
          uStack_e0 = iVar6 - 1;
          if (iVar6 == 0) {
            uStack_e0 = uVar14;
          }
          local_c8._12_4_ = uStack_dc;
          local_c8.Size = uStack_e0;
          local_c8.DataPtr = (wchar_t *)local_e8;
          FSoftObjectPath::SetPath(&local_160,&local_c8);
          FVar16.Data = local_160.SubPathString.Data.AllocatorInstance.Data;
          uVar12 = local_160.SubPathString.Data.ArrayNum;
          FVar22.Value = local_160.AssetPath.PackageName.ComparisonIndex.Value;
          uVar23 = local_160.AssetPath.PackageName.Number;
          FVar24.Value = local_160.AssetPath.AssetName.ComparisonIndex.Value;
          uVar25 = local_160.AssetPath.AssetName.Number;
          local_128 = (FWeakObjectPtr *)local_160.SubPathString.Data.AllocatorInstance.Data;
          local_160.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_120 = local_160.SubPathString.Data.ArrayNum;
          local_160.SubPathString.Data.ArrayNum = 0;
          local_160.SubPathString.Data.ArrayMax = 0;
          local_138 = local_160.AssetPath.PackageName.ComparisonIndex.Value;
          uStack_134 = local_160.AssetPath.PackageName.Number;
          uStack_130 = local_160.AssetPath.AssetName.ComparisonIndex.Value;
          uStack_12c = local_160.AssetPath.AssetName.Number;
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          goto LAB_149e5b100;
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5251069952877657957>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorBase.cpp"
                           ,0x9b,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar7;
        }
      }
      else {
        local_190.WeakPtr = *pFVar18;
        FSoftObjectPath::operator=(&local_190.ObjectID,(FSoftObjectPath *)(pFVar18 + 1));
LAB_149e5b21b:
        piVar17 = &(this->WorkingMaterialOverrides).ArrayMax;
        pTVar2 = (TPersistentObjectPtr<FSoftObjectPath> *)(pTVar7->AllocatorInstance).Data;
        if (((pTVar2 <= &local_190) && (&local_190 < pTVar2 + *piVar17)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar7;
        }
        iVar6 = (this->WorkingMaterialOverrides).ArrayNum;
        if (iVar6 == *piVar17) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&pTVar7->AllocatorInstance,piVar17);
        }
        FVar16.Data = local_190.ObjectID.SubPathString.Data.AllocatorInstance.Data;
        (this->WorkingMaterialOverrides).ArrayNum = iVar6 + 1;
        pFVar18 = (FWeakObjectPtr *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
        *pFVar18 = local_190.WeakPtr;
        pFVar8 = pFVar18 + 3;
        *(FName *)(pFVar18 + 1) = local_190.ObjectID.AssetPath.PackageName;
        *(FName *)(pFVar18 + 2) = local_190.ObjectID.AssetPath.AssetName;
        pFVar8->ObjectIndex = 0;
        pFVar8->ObjectSerialNumber = 0;
        _Size = (size_t)local_190.ObjectID.SubPathString.Data.ArrayNum;
        pFVar18[4].ObjectIndex = local_190.ObjectID.SubPathString.Data.ArrayNum;
        if (local_190.ObjectID.SubPathString.Data.ArrayNum == 0) {
          pFVar18[4].ObjectSerialNumber = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_190.ObjectID.SubPathString.Data.ArrayNum,0,
                     (ForAnyElementType *)pFVar8,local_190.ObjectID.SubPathString.Data.ArrayNum,
                     &pFVar18[4].ObjectSerialNumber);
          memcpy((void *)*pFVar8,FVar16.Data,_Size);
        }
      }
      if (local_190.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      local_168 = local_168 + 1;
      local_198 = local_198 + 0x50;
      pFVar8 = (FWeakObjectPtr *)(ulonglong)(uVar20 + 1);
      iVar6 = (this->MaterialAttributes).ArrayNum;
    } while ((int)(uVar20 + 1) < iVar6);
  }
  return pTVar7;
}

// Initialize @ 149e74eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGMeshMaterialOverrideHelper::Initialize
          (FPCGMeshMaterialOverrideHelper *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FText *pFVar10;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  FName *pFVar16;
  FName *pFVar17;
  uint uVar18;
  bool bVar19;
  uint local_res8 [2];
  FPCGMetadataAttributeBase *local_178 [2];
  FName local_168;
  FPCGMetadataDomainID local_160;
  FString local_148;
  FString local_138;
  FText local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FText local_e8;
  FText local_d8;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FName local_98;
  undefined1 auStack_90 [16];
  FPCGAttributeIdentifier local_78;
  FText local_58;
  FTextFormat local_48;
  
  bVar6 = false;
  bVar19 = false;
  local_res8[0] = 0;
  if (this->bUseMaterialOverrideAttributes == false) {
LAB_149e75558:
    this->bIsValid = true;
    return;
  }
  if (this->Metadata == (UPCGMetadata *)0x0) {
    if ((byte)LogPCG._0_1_ < 2) {
      return;
    }
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_128,L"PCGMeshSelectorBase",L"MetadataMissing",
                         L"Data has no metadata");
    FText::ToString(pFVar10);
    bVar19 = param_1 != (FPCGContext *)0x0;
    if (bVar19) {
      FPCGContext::GetTaskName(param_1,&local_138);
      FPCGContext::GetExecutionSourceName(param_1,&local_148);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar19) && (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if ((bVar19) && (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    return;
  }
  pFVar17 = (FName *)(this->MaterialOverrideAttributeNames).AllocatorInstance.Data;
  uVar2 = (this->MaterialOverrideAttributeNames).ArrayNum;
  uVar14 = (ulonglong)(int)uVar2;
  pFVar16 = pFVar17 + uVar14;
LAB_149e75010:
  do {
    if ((this->MaterialOverrideAttributeNames).ArrayNum != (int)uVar14) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar16) {
      uVar2 = (this->MaterialOverrideAttributeNames).ArrayNum;
      iVar8 = (this->ValueKeyToOverrideMaterials).ArrayNum;
      if (iVar8 < (int)uVar2) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x50,8,uVar2 - iVar8,
                           &(this->ValueKeyToOverrideMaterials).AllocatorInstance,
                           &(this->ValueKeyToOverrideMaterials).ArrayNum,
                           &(this->ValueKeyToOverrideMaterials).ArrayMax);
        DefaultConstructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
                  ((this->ValueKeyToOverrideMaterials).AllocatorInstance.Data +
                   (longlong)iVar9 * 0x50,uVar2 - iVar8);
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((int)uVar2 < iVar8) {
          uVar18 = iVar8 - uVar2;
          if (((int)(uVar2 | uVar18) < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar18 != 0) {
            TArray<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(&this->ValueKeyToOverrideMaterials,uVar2,uVar18);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,&(this->ValueKeyToOverrideMaterials).AllocatorInstance,
                       (this->ValueKeyToOverrideMaterials).ArrayNum,
                       &(this->ValueKeyToOverrideMaterials).ArrayMax);
          }
        }
      }
      uVar2 = (this->MaterialOverrideAttributeNames).ArrayNum;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((this->WorkingMaterialOverrides).ArrayMax < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar2,&(this->WorkingMaterialOverrides).AllocatorInstance,
                   (this->WorkingMaterialOverrides).ArrayNum,
                   &(this->WorkingMaterialOverrides).ArrayMax);
      }
      goto LAB_149e75558;
    }
    FVar3 = *pFVar17;
    local_160.Flag = PCGMetadataDomainID::Default.Flag;
    local_160._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_160.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_160.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_168 = FVar3;
    pTVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      *)&this->Metadata->MetadataDomains,&local_160);
    puVar15 = (undefined8 *)&pTVar11->field_0x10;
    if (pTVar11 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    if ((puVar15 == (undefined8 *)0x0) ||
       ((FPCGMetadataDomain *)*puVar15 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_160.DebugName,&local_118);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      bVar7 = FPCGMetadataDomain::HasAttribute((FPCGMetadataDomain *)*puVar15,FVar3);
      if (bVar7) {
        auStack_90._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
        auStack_90._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
        auStack_90[0] = PCGMetadataDomainID::Default.Flag;
        auStack_90._1_3_ = PCGMetadataDomainID::Default._1_3_;
        auStack_90._4_4_ = PCGMetadataDomainID::Default.CustomFlag;
        local_98 = *pFVar17;
        local_78.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_78.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_78.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_78.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_78.Name = local_98;
        local_178[0] = UPCGMetadata::GetConstAttribute(this->Metadata,&local_78);
        if ((local_178[0] == (FPCGMetadataAttributeBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaterialAttributeBase",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorBase.cpp"
                               ,0x61,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((0xfe < (ushort)local_178[0]->TypeId) || ((local_178[0]->TypeId - 9U & 0xfffb) != 0)) {
          if ((byte)LogPCG._0_1_ < 2) {
            return;
          }
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_a8,L"PCGMeshSelectorBase",L"AttributeInvalidType",
                               L"Material override attribute is not of valid type (FSoftObjectPath or FString)."
                              );
          FText::ToString(pFVar10);
          bVar19 = param_1 != (FPCGContext *)0x0;
          if (bVar19) {
            FPCGContext::GetTaskName(param_1,&local_b8);
            FPCGContext::GetExecutionSourceName(param_1,&local_c8);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar19) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if ((bVar19) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
            return;
          }
          return;
        }
        pFVar4 = (this->MaterialAttributes).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_178) &&
            ((FScriptContainerElement *)local_178 <
             pFVar4 + (longlong)(this->MaterialAttributes).ArrayMax * 8)) &&
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
        iVar8 = (this->MaterialAttributes).ArrayNum;
        piVar1 = &(this->MaterialAttributes).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        (this->MaterialAttributes).ArrayNum = iVar8 + 1;
        pFVar17 = pFVar17 + 1;
        *(FPCGMetadataAttributeBase **)
         ((this->MaterialAttributes).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_178[0];
        uVar14 = (ulonglong)uVar2;
        goto LAB_149e75010;
      }
    }
    if (2 < (byte)LogPCG._0_1_) {
      pFVar10 = FText::FromName(&local_58,pFVar17);
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_d8,L"PCGMeshSelectorBase",L"AttributeMissing",
                           L"Attribute \'{0}\' for material overrides is not present in the metadata"
                          );
      pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
      pFVar10 = FText::Format<FText>(&local_e8,pFVar13,pFVar10);
      FText::ToString(pFVar10);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_f8);
        bVar6 = true;
        bVar19 = true;
        FPCGContext::GetExecutionSourceName(param_1,&local_108);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar19) &&
         (bVar19 = false, local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
    }
    uVar14 = (ulonglong)uVar2;
    pFVar17 = pFVar17 + 1;
  } while( true );
}

// Initialize @ 149e75590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGMeshMaterialOverrideHelper::Initialize
          (FPCGMeshMaterialOverrideHelper *this,FPCGContext *param_1,bool param_2,
          TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,UPCGMetadata *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsInitialized != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorBase.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bUseMaterialOverrideAttributes = param_2;
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->StaticMaterialOverrides,param_3);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->MaterialOverrideAttributeNames,param_4);
  this->Metadata = param_5;
  Initialize(this,param_1);
  this->bIsInitialized = true;
  return;
}

// Initialize @ 149e75630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGMeshMaterialOverrideHelper::Initialize
          (FPCGMeshMaterialOverrideHelper *this,FPCGContext *param_1,bool param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,UPCGMetadata *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsInitialized != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MeshSelectors\\PCGMeshSelectorBase.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bUseMaterialOverrideAttributes = param_2;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->MaterialOverrideAttributeNames,param_3);
  this->Metadata = param_4;
  Initialize(this,param_1);
  this->bIsInitialized = true;
  return;
}

// Reset @ 149e85f80

void __thiscall FPCGMeshMaterialOverrideHelper::Reset(FPCGMeshMaterialOverrideHelper *this)

{
  int *piVar1;
  int iVar2;
  TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  
  (this->MaterialAttributes).ArrayNum = 0;
  if ((this->MaterialAttributes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->MaterialAttributes).ArrayMax);
  }
  piVar1 = &(this->ValueKeyToOverrideMaterials).ArrayMax;
  pTVar3 = (TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
            *)(this->ValueKeyToOverrideMaterials).AllocatorInstance.Data;
  iVar2 = (this->ValueKeyToOverrideMaterials).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
              (pTVar3,iVar2);
    (this->ValueKeyToOverrideMaterials).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->ValueKeyToOverrideMaterials).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
              (pTVar3,iVar2);
    (this->ValueKeyToOverrideMaterials).ArrayNum = 0;
  }
  piVar1 = &(this->WorkingMaterialOverrides).ArrayMax;
  pFVar4 = (this->WorkingMaterialOverrides).AllocatorInstance.Data;
  iVar2 = (this->WorkingMaterialOverrides).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)pFVar4,iVar2);
    (this->WorkingMaterialOverrides).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->WorkingMaterialOverrides).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)pFVar4,iVar2);
    (this->WorkingMaterialOverrides).ArrayNum = 0;
  }
  this->bIsInitialized = false;
  this->bIsValid = false;
  piVar1 = &(this->StaticMaterialOverrides).ArrayMax;
  this->bUseMaterialOverrideAttributes = false;
  pFVar4 = (this->StaticMaterialOverrides).AllocatorInstance.Data;
  iVar2 = (this->StaticMaterialOverrides).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)pFVar4,iVar2);
    (this->StaticMaterialOverrides).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->StaticMaterialOverrides).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)pFVar4,iVar2);
    (this->StaticMaterialOverrides).ArrayNum = 0;
  }
  (this->MaterialOverrideAttributeNames).ArrayNum = 0;
  if ((this->MaterialOverrideAttributeNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->MaterialOverrideAttributeNames).AllocatorInstance,0,
               &(this->MaterialOverrideAttributeNames).ArrayMax);
  }
  this->Metadata = (UPCGMetadata *)0x0;
  return;
}

