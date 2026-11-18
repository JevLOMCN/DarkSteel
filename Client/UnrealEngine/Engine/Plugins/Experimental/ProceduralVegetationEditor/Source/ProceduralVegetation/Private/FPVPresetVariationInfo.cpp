// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 3

// StaticStruct @ 14da56210

UScriptStruct * __cdecl FPVPresetVariationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVPresetVariationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVPresetVariationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVPresetVariationInfo,(UObject *)pUVar1,
                         L"PVPresetVariationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FPVPresetVariationInfo.OuterSingleton;
}

// ~FPVPresetVariationInfo @ 14da67960

void __thiscall FPVPresetVariationInfo::~FPVPresetVariationInfo(FPVPresetVariationInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->PlantProfiles).AllocatorInstance.Data,(this->PlantProfiles).ArrayNum)
  ;
  pFVar1 = (this->PlantProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->Materials).AllocatorInstance.Data,
             (this->Materials).ArrayNum);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->FoliageMeshes).AllocatorInstance.Data,
             (this->FoliageMeshes).ArrayNum);
  pFVar1 = (this->FoliageMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Fill @ 14da855a0

/* WARNING: Removing unreachable block (ram,0x00014da85b10) */

void __thiscall
FPVPresetVariationInfo::Fill
          (FPVPresetVariationInfo *this,FName param_1,FManagedArrayCollection *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FPVPresetVariationInfo *pFVar5;
  FManagedArrayCollection *pFVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  TManagedArray<FString> *pTVar12;
  int iVar13;
  size_t sVar14;
  TManagedArray<FString> *pTVar15;
  FString local_6f8;
  ForAnyElementType local_6e8;
  int local_6e0;
  int local_6dc;
  ForAnyElementType local_6d8;
  int local_6d0;
  int local_6cc;
  FSoftObjectPath local_6c8;
  FSoftObjectPath local_6a8;
  FPVPresetVariationInfo *local_688;
  FManagedArrayCollection *local_680;
  FScriptContainerElement *local_678;
  int iStack_670;
  undefined4 uStack_66c;
  FScriptContainerElement *local_668;
  int iStack_660;
  undefined4 uStack_65c;
  TStringView<wchar_t> local_658;
  TStringView<wchar_t> local_648;
  FPlantProfileFacade local_638;
  FName local_5e8;
  FName FStack_5e0;
  FName local_5c8;
  FName FStack_5c0;
  FFoliageFacade local_5a8;
  FBranchFacade local_328;
  
  this->Name = param_1;
  local_688 = this;
  local_680 = param_2;
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_5a8,param_2,0);
  iVar13 = 0;
  while( true ) {
    pTVar15 = (TManagedArray<FString> *)0x0;
    if (local_5a8.NamesAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        (local_5a8.NamesAttribute.ConstCollection,local_5a8.NamesAttribute.Group);
      pTVar12 = pTVar15;
    }
    else {
      iVar8 = (**(code **)(*(longlong *)local_5a8.NamesAttribute.ConstAttributeArray + 0x60))
                        (local_5a8.NamesAttribute.ConstAttributeArray);
      pTVar12 = local_5a8.NamesAttribute.ConstAttributeArray;
    }
    pFVar6 = local_680;
    if (iVar8 <= iVar13) break;
    if (((pTVar12 == (TManagedArray<FString> *)0x0) || (iVar13 < 0)) ||
       (iVar8 = (**(code **)(*(longlong *)local_5a8.NamesAttribute.ConstAttributeArray + 0x60))
                          (local_5a8.NamesAttribute.ConstAttributeArray), iVar8 <= iVar13)) {
      local_6e0 = 0;
LAB_14da856cf:
      local_6e8.Data = (FScriptContainerElement *)0x0;
      local_6dc = 0;
      iVar8 = 0;
    }
    else {
      pFVar9 = TManagedArrayAccessor<FString>::operator[](&local_5a8.NamesAttribute,iVar13);
      local_6e8.Data = (FScriptContainerElement *)0x0;
      local_6e0 = (pFVar9->Data).ArrayNum;
      lVar11 = (longlong)local_6e0;
      pFVar10 = (pFVar9->Data).AllocatorInstance.Data;
      if (local_6e0 == 0) goto LAB_14da856cf;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6e0,0,&local_6e8,local_6e0,&local_6dc);
      memcpy(local_6e8.Data,pFVar10,lVar11 * 2);
      iVar8 = local_6e0;
    }
    local_6c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_6c8.AssetPath.PackageName.Number = 0;
    local_6c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_6c8.AssetPath.AssetName.Number = 0;
    iStack_670 = iVar8 + -1;
    if (iVar8 == 0) {
      iStack_670 = 0;
    }
    local_6c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_658._12_4_ = uStack_66c;
    local_658.Size = iStack_670;
    local_6c8.SubPathString.Data.ArrayNum = 0;
    local_6c8.SubPathString.Data.ArrayMax = 0;
    local_678 = local_6e8.Data;
    local_658.DataPtr = (wchar_t *)local_6e8.Data;
    FSoftObjectPath::SetPath(&local_6c8,&local_658);
    iVar8 = (this->FoliageMeshes).ArrayNum;
    piVar1 = &(this->FoliageMeshes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->FoliageMeshes).AllocatorInstance,piVar1);
    }
    FVar4.Data = local_6c8.SubPathString.Data.AllocatorInstance.Data;
    (this->FoliageMeshes).ArrayNum = iVar8 + 1;
    local_6c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)iVar8;
    local_5e8 = local_6c8.AssetPath.PackageName;
    FStack_5e0 = local_6c8.AssetPath.AssetName;
    pFVar2 = (this->FoliageMeshes).AllocatorInstance.Data;
    iVar8 = local_6c8.SubPathString.Data.ArrayNum;
    sVar14 = (size_t)local_6c8.SubPathString.Data.ArrayNum;
    local_6c8.SubPathString.Data.ArrayNum = 0;
    local_6c8.SubPathString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar2 + lVar11 * 0x28) = 0;
    pFVar10 = pFVar2 + (lVar11 * 5 + 3) * 8;
    *(FName *)(pFVar2 + lVar11 * 0x28 + 8) = local_6c8.AssetPath.PackageName;
    ((FName *)(pFVar2 + lVar11 * 0x28 + 8))[1] = local_6c8.AssetPath.AssetName;
    *(FScriptContainerElement **)pFVar10 = (FScriptContainerElement *)0x0;
    *(int *)(pFVar10 + 8) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)(pFVar2 + lVar11 * 0x28 + 0x24) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar8,0,(ForAnyElementType *)pFVar10,iVar8,
                 (int *)(pFVar2 + lVar11 * 0x28 + 0x24));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar10,FVar4.Data,sVar14);
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    if (local_6c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_6e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data);
    }
    iVar13 = iVar13 + 1;
    this = local_688;
  }
  PV::Facades::FBranchFacade::FBranchFacade(&local_328,local_680);
  if ((local_328.TrunkMaterialPathAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) ||
     (iVar13 = (**(code **)(*(longlong *)local_328.TrunkMaterialPathAttribute.ConstAttributeArray +
                           0x60))(), iVar13 < 1)) {
    local_6d0 = 0;
    pTVar12 = pTVar15;
  }
  else {
    pFVar9 = TManagedArrayAccessor<FString>::operator[](&local_328.TrunkMaterialPathAttribute,0);
    local_6d8.Data = (FScriptContainerElement *)0x0;
    local_6d0 = (pFVar9->Data).ArrayNum;
    pTVar12 = (TManagedArray<FString> *)(longlong)local_6d0;
    pFVar10 = (pFVar9->Data).AllocatorInstance.Data;
    if (local_6d0 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6d0,0,&local_6d8,local_6d0,&local_6cc);
      memcpy(local_6d8.Data,pFVar10,(longlong)pTVar12 * 2);
      iVar13 = local_6d0;
      goto LAB_14da858a9;
    }
  }
  local_6d8.Data = (FScriptContainerElement *)0x0;
  iVar13 = (int)pTVar12;
  local_6cc = 0;
LAB_14da858a9:
  local_6a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_6a8.AssetPath.PackageName.Number = 0;
  local_6a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_6a8.AssetPath.AssetName.Number = 0;
  pTVar12 = (TManagedArray<FString> *)(ulonglong)(iVar13 - 1);
  if (iVar13 == 0) {
    pTVar12 = pTVar15;
  }
  local_6a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iStack_660 = (int)pTVar12;
  local_648._12_4_ = uStack_65c;
  local_648.Size = iStack_660;
  local_6a8.SubPathString.Data.ArrayNum = 0;
  local_6a8.SubPathString.Data.ArrayMax = 0;
  local_668 = local_6d8.Data;
  local_648.DataPtr = (wchar_t *)local_6d8.Data;
  FSoftObjectPath::SetPath(&local_6a8,&local_648);
  iVar13 = (this->Materials).ArrayNum;
  piVar1 = &(this->Materials).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(this->Materials).AllocatorInstance,piVar1);
  }
  FVar4.Data = local_6a8.SubPathString.Data.AllocatorInstance.Data;
  (this->Materials).ArrayNum = iVar13 + 1;
  local_6a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar11 = (longlong)iVar13;
  local_5c8 = local_6a8.AssetPath.PackageName;
  FStack_5c0 = local_6a8.AssetPath.AssetName;
  pFVar2 = (this->Materials).AllocatorInstance.Data;
  iVar13 = local_6a8.SubPathString.Data.ArrayNum;
  sVar14 = (size_t)local_6a8.SubPathString.Data.ArrayNum;
  local_6a8.SubPathString.Data.ArrayNum = 0;
  local_6a8.SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + lVar11 * 0x28) = 0;
  pFVar10 = pFVar2 + lVar11 * 0x28 + 0x18;
  *(FName *)(pFVar2 + lVar11 * 0x28 + 8) = local_6a8.AssetPath.PackageName;
  ((FName *)(pFVar2 + lVar11 * 0x28 + 8))[1] = local_6a8.AssetPath.AssetName;
  *(FScriptContainerElement **)pFVar10 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 8) = iVar13;
  if (iVar13 == 0) {
    *(int *)(pFVar10 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar13,0,(ForAnyElementType *)pFVar10,iVar13,(int *)(pFVar10 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar10,FVar4.Data,sVar14);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_6a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_6d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data);
  }
  PV::Facades::FPlantProfileFacade::FPlantProfileFacade(&local_638,pFVar6);
  if (local_638.ProfilePointsAttribute.ConstAttributeArray ==
      (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    iVar13 = FManagedArrayCollection::NumElements
                       (local_638.ProfilePointsAttribute.ConstCollection,
                        local_638.ProfilePointsAttribute.Group);
  }
  else {
    iVar13 = (**(code **)(*(longlong *)local_638.ProfilePointsAttribute.ConstAttributeArray + 0x60))
                       (local_638.ProfilePointsAttribute.ConstAttributeArray);
  }
  pFVar5 = local_688;
  if (0 < iVar13) {
    iVar13 = 0;
    while( true ) {
      if (local_638.ProfilePointsAttribute.ConstAttributeArray ==
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          (local_638.ProfilePointsAttribute.ConstCollection,
                           local_638.ProfilePointsAttribute.Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)local_638.ProfilePointsAttribute.ConstAttributeArray +
                            0x60))(local_638.ProfilePointsAttribute.ConstAttributeArray);
      }
      if (iVar8 <= iVar13) break;
      local_6f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6f8.Data.ArrayNum = 0;
      local_6f8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_6f8,iVar13);
      pFVar10 = (pFVar5->PlantProfiles).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_6f8) &&
          ((FScriptContainerElement *)&local_6f8 <
           pFVar10 + (longlong)(pFVar5->PlantProfiles).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (pFVar5->PlantProfiles).ArrayNum;
      piVar1 = &(pFVar5->PlantProfiles).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar5->PlantProfiles).AllocatorInstance,piVar1);
      }
      (pFVar5->PlantProfiles).ArrayNum = iVar8 + 1;
      pFVar10 = (pFVar5->PlantProfiles).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(FScriptContainerElement **)pFVar10 = local_6f8.Data.AllocatorInstance.Data;
      local_6f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar10 + 8) = local_6f8.Data.ArrayNum;
      *(int *)(pFVar10 + 0xc) = local_6f8.Data.ArrayMax;
      local_6f8.Data.ArrayNum = 0;
      local_6f8.Data.ArrayMax = 0;
      iVar13 = iVar13 + 1;
    }
  }
  FManagedArrayCollection::~FManagedArrayCollection(local_680);
  return;
}

