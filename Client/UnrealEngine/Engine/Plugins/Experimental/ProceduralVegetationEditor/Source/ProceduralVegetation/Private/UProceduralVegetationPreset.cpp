// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 14

// StaticClass @ 14da565c0

UClass * __cdecl UProceduralVegetationPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralVegetationPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"ProceduralVegetationPreset",
               &Z_Registration_Info_UClass_UProceduralVegetationPreset.InnerSingleton,
               StaticRegisterNativesUProceduralVegetationPreset,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UProceduralVegetationPreset>,
               InternalVTableHelperCtorCaller<UProceduralVegetationPreset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralVegetationPreset.InnerSingleton;
}

// UProceduralVegetationPreset @ 14da67330

UProceduralVegetationPreset * __thiscall
UProceduralVegetationPreset::UProceduralVegetationPreset
          (UProceduralVegetationPreset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UProceduralVegetationPreset__6B_;
  (this->JsonDirectoryPath).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonDirectoryPath).Path.Data.ArrayNum = 0;
  (this->JsonDirectoryPath).Path.Data.ArrayMax = 0;
  this->bOverrideFolderPaths = false;
  (this->FoliageFolder).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageFolder).Path.Data.ArrayNum = 0;
  (this->FoliageFolder).Path.Data.ArrayMax = 0;
  (this->MaterialsFolder).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialsFolder).Path.Data.ArrayNum = 0;
  (this->MaterialsFolder).Path.Data.ArrayMax = 0;
  (this->TrunkMaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrunkMaterialName).Data.ArrayNum = 0;
  (this->TrunkMaterialName).Data.ArrayMax = 0;
  this->bCreateProfileDataAsset = false;
  (this->PlantProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlantProfileName).Data.ArrayNum = 0;
  (this->PlantProfileName).Data.ArrayMax = 0;
  *(undefined8 *)&this->Variants = 0;
  *(undefined8 *)&(this->Variants).field_0x8 = 0;
  *(undefined8 *)&(this->Variants).field_0x20 = 0;
  *(undefined4 *)&(this->Variants).field_0x28 = 0;
  *(undefined4 *)&(this->Variants).field_0x2c = 0x80;
  *(undefined4 *)&(this->Variants).field_0x34 = 0;
  *(undefined4 *)&(this->Variants).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Variants).field_0x40 = 0;
  *(undefined4 *)&(this->Variants).field_0x48 = 0;
  (this->PresetVariations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetVariations).ArrayNum = 0;
  (this->PresetVariations).ArrayMax = 0;
  return this;
}

// UProceduralVegetationPreset @ 14da673e0

UProceduralVegetationPreset * __thiscall
UProceduralVegetationPreset::UProceduralVegetationPreset(UProceduralVegetationPreset *this)

{
  FDirectoryPath *pFVar1;
  FDirectoryPath *pFVar2;
  FScriptContainerElement *pFVar3;
  FObjectInitializer *pFVar4;
  UPackage *pUVar5;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined4 local_20;
  
  pFVar4 = FObjectInitializer::Get();
  UDataAsset::UDataAsset((UDataAsset *)this,pFVar4);
  this->_padding_ = (longlong)&___7UProceduralVegetationPreset__6B_;
  pFVar1 = &this->FoliageFolder;
  (this->JsonDirectoryPath).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->MaterialsFolder;
  (this->JsonDirectoryPath).Path.Data.ArrayNum = 0;
  (this->JsonDirectoryPath).Path.Data.ArrayMax = 0;
  (pFVar1->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageFolder).Path.Data.ArrayNum = 0;
  (this->FoliageFolder).Path.Data.ArrayMax = 0;
  (pFVar2->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialsFolder).Path.Data.ArrayNum = 0;
  (this->MaterialsFolder).Path.Data.ArrayMax = 0;
  (this->TrunkMaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrunkMaterialName).Data.ArrayNum = 0;
  (this->TrunkMaterialName).Data.ArrayMax = 0;
  (this->PlantProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlantProfileName).Data.ArrayNum = 0;
  (this->PlantProfileName).Data.ArrayMax = 0;
  *(undefined8 *)&this->Variants = 0;
  *(undefined8 *)&(this->Variants).field_0x8 = 0;
  *(undefined8 *)&(this->Variants).field_0x20 = 0;
  this->bOverrideFolderPaths = false;
  this->bCreateProfileDataAsset = false;
  *(undefined4 *)&(this->Variants).field_0x28 = 0;
  *(undefined4 *)&(this->Variants).field_0x2c = 0x80;
  *(undefined4 *)&(this->Variants).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Variants).field_0x34 = 0;
  *(undefined8 *)&(this->Variants).field_0x40 = 0;
  *(undefined4 *)&(this->Variants).field_0x48 = 0;
  (this->PresetVariations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetVariations).ArrayNum = 0;
  (this->PresetVariations).ArrayMax = 0;
  pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  local_res8 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res8,(FString *)&local_38);
  FPackageName::GetLongPackagePath(&local_48,(FString *)&local_38);
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
  local_20 = 9;
  local_38.Size = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    local_38.Size = 0;
  }
  local_28 = L"Instances";
  FPaths::CombineInternal(&local_68,&local_38,2);
  if (&pFVar1->Path != &local_68) {
    pFVar3 = (pFVar1->Path).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Path).Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (this->FoliageFolder).Path.Data.ArrayNum = local_68.Data.ArrayNum;
    (this->FoliageFolder).Path.Data.ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
  local_20 = 9;
  local_38.Size = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    local_38.Size = 0;
  }
  local_28 = L"Materials";
  FPaths::CombineInternal(&local_58,&local_38,2);
  if (&pFVar2->Path != &local_58) {
    pFVar3 = (pFVar2->Path).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Path).Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (this->MaterialsFolder).Path.Data.ArrayNum = local_58.Data.ArrayNum;
    (this->MaterialsFolder).Path.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UProceduralVegetationPreset @ 14da67fb0

void __thiscall
UProceduralVegetationPreset::~UProceduralVegetationPreset(UProceduralVegetationPreset *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UProceduralVegetationPreset__6B_;
  DestructItems<FPVPresetVariationInfo,int>
            ((FPVPresetVariationInfo *)(this->PresetVariations).AllocatorInstance.Data,
             (this->PresetVariations).ArrayNum);
  pFVar1 = (this->PresetVariations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Variants).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Variants).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Variants);
  pFVar1 = (this->PlantProfileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrunkMaterialName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialsFolder).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FoliageFolder).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JsonDirectoryPath).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// CreateProfileDataAsset @ 14da7a0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UProceduralVegetationPreset::CreateProfileDataAsset(UProceduralVegetationPreset *this)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar6;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  bool bVar8;
  int iVar9;
  UPackage *pUVar10;
  FString *pFVar11;
  FName *pFVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  FString *this_00;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278 [4];
  uint local_274;
  FString local_270;
  ForAnyElementType local_260;
  undefined8 local_258;
  ForAnyElementType local_250;
  int local_248;
  int local_244;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_240;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  FString local_220;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int local_1dc;
  FName local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_1c8;
  UPackage *local_1c0;
  FString local_1b8;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FString local_178;
  TStringView<wchar_t> local_168;
  FScriptContainerElement *local_158;
  int local_150;
  FName local_148;
  FString local_140;
  FStringFormatArg local_130;
  FPlantProfileFacade local_108;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_248 = (this->PlantProfileName).Data.ArrayNum;
  lVar19 = (longlong)local_248;
  pFVar3 = (this->PlantProfileName).Data.AllocatorInstance.Data;
  local_250.Data = (FScriptContainerElement *)0x0;
  iVar23 = 0;
  if (local_248 == 0) {
    local_244 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_248,0,&local_250,local_248,&local_244);
    memcpy(local_250.Data,pFVar3,lVar19 * 2);
  }
  pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  local_1d8 = (FName)pUVar10->_padding_;
  ::FName::ToString(&local_1d8,&local_178);
  pFVar11 = FPackageName::GetLongPackagePath(&local_140,&local_178);
  local_168.DataPtr = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  iVar9 = (pFVar11->Data).ArrayNum;
  local_168.Size = iVar9 + -1;
  if (iVar9 == 0) {
    local_168.Size = iVar23;
  }
  local_158 = local_250.Data;
  local_150 = local_248 + -1;
  if (local_248 == 0) {
    local_150 = iVar23;
  }
  FPaths::CombineInternal(&local_1b8,&local_168,2);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_1b8.Data.ArrayNum != 0) {
    FVar16.Data = local_1b8.Data.AllocatorInstance.Data;
  }
  pUVar10 = CreatePackage((wchar_t *)FVar16.Data);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_248 != 0) {
    FVar16.Data = local_250.Data;
  }
  local_1c0 = pUVar10;
  pFVar12 = ::FName::FName(&local_148,(wchar_t *)FVar16.Data);
  FVar4 = *pFVar12;
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = UPlantProfileAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar13);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_Standalone|RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar10;
  local_b8._16_8_ = FVar4;
  pUVar14 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar17 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Variants).field_0x10;
  iVar9 = *(int *)&(this->Variants).field_0x28;
  pTVar26 = &this->Variants;
  uStack_204 = 1;
  local_1f0 = 0;
  iStack_1f4 = local_1f0;
  if (iVar9 != 0) {
    puVar25 = *(uint **)&(this->Variants).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar27;
    }
    uVar22 = *puVar25;
    local_1f0 = 0;
    iVar23 = 0;
    while (uVar22 == 0) {
      lVar19 = (longlong)iVar23;
      local_1f0 = local_1f0 + 0x20;
      iVar23 = iVar23 + 1;
      iStack_1f4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_14da7a33e;
      uVar22 = puVar25[lVar19 + 1];
    }
    uStack_204 = ~(uVar22 - 1) & uVar22;
    uVar1 = (ulonglong)uStack_204 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1e0 = (int)lVar19;
    iStack_1f4 = local_1f0 + -1 + local_1e0;
    if (iVar9 < iStack_1f4) {
      iStack_1f4 = iVar9;
    }
  }
LAB_14da7a33e:
  uVar22 = *(uint *)&(this->Variants).field_0x28;
  iStack_1e8 = *(int *)&(this->Variants).field_0x8 - *(int *)&(this->Variants).field_0x34;
  uVar21 = uVar22 & 0xffffffe0;
  uStack_1f8 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_204,iVar23);
  TStack_1a0.CurrentBitIndex = iStack_1f4;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar22 >> 5;
  TStack_1a0._28_4_ = iStack_1f4;
  TStack_1a0.BaseBitIndex = local_1f0;
  uStack_180 = CONCAT44(uStack_1e4,iStack_1e8);
  local_274 = uVar22;
  local_210 = pTVar26;
  iStack_208 = iVar23;
  local_200 = (undefined1 *)pTVar27;
  iStack_1ec = iStack_1f4;
  local_1d0 = pTVar27;
  local_1c8 = pTVar26;
  local_1a8 = pTVar26;
  TStack_1a0.Array = pTVar27;
  if ((((int)uVar22 < 0) || (iVar9 < (int)uVar22)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(this->Variants).field_0x28;
  if (uVar22 != uVar2) {
    puVar24 = *(undefined1 **)&(this->Variants).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = (undefined1 *)pTVar27;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar18 * 4);
    while (uVar22 == 0) {
      lVar19 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar22 = uVar2;
      local_274 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14da7a460;
      uVar22 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar1 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1dc = (int)lVar19;
    uVar22 = local_1dc + -1 + uVar21;
    local_274 = uVar22;
    if ((int)uVar2 < (int)uVar22) {
      uVar22 = uVar2;
      local_274 = uVar2;
    }
  }
LAB_14da7a460:
  do {
    pTVar6 = local_1a8;
    if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)uStack_180) {
      local_278[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar22) && (TStack_1a0.Array == pTVar27)) &&
       (pTVar6 == pTVar26)) {
      (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton + 0x2a8
                  ))(UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton,pUVar14);
      UPackage::SetDirtyFlag(local_1c0,true);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data);
      }
      return;
    }
    PV::Facades::FPlantProfileFacade::FPlantProfileFacade
              (&local_108,
               (FManagedArrayCollection *)
               (*(longlong *)pTVar6 + (longlong)TStack_1a0.CurrentBitIndex * 200 + 0x10));
    pTVar7 = local_108.ProfilePointsAttribute.ConstAttributeArray;
    iVar23 = 0;
    while( true ) {
      if (pTVar7 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar9 = FManagedArrayCollection::NumElements
                          (local_108.ProfilePointsAttribute.ConstCollection,
                           local_108.ProfilePointsAttribute.Group);
      }
      else {
        iVar9 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
      }
      if (iVar9 <= iVar23) break;
      local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Data.ArrayNum = 0;
      local_270.Data.ArrayMax = 0;
      local_260.Data = (FScriptContainerElement *)0x0;
      local_258 = 0;
      FStringFormatArg::FStringFormatArg(&local_130,iVar23);
      local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_240.AllocatorInstance,1,&local_240.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_240.AllocatorInstance.Data,&local_130,1);
      ::FString::FormatImpl(&local_220,L"Profile_{0}",&local_240);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      local_270.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
      local_270.Data.ArrayNum = local_220.Data.ArrayNum;
      local_270.Data.ArrayMax = local_220.Data.ArrayMax;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
      if ((FStringFormatArg *)local_240.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
      if (local_130.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.StringValue.Data.AllocatorInstance.Data);
      }
      if (((pTVar7 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
          (iVar23 < 0)) ||
         (iVar9 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7), iVar9 <= iVar23)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FPlantProfileFacade::GetProfilePoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyArray__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar15 = &::EmptyArray;
      }
      else {
        pTVar15 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                            (&local_108.ProfilePointsAttribute,iVar23);
      }
      local_230.Data = (FScriptContainerElement *)0x0;
      local_228 = pTVar15->ArrayNum;
      lVar19 = (longlong)local_228;
      pFVar3 = (pTVar15->AllocatorInstance).Data;
      if (local_228 == 0) {
        local_224 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_228,0,&local_230,local_228,&local_224);
        memcpy(local_230.Data,pFVar3,lVar19 << 2);
      }
      iVar9 = local_228;
      FVar16.Data = local_230.Data;
      local_258 = CONCAT44(local_258._4_4_,local_228);
      if ((local_228 == 0) && (local_258._4_4_ == 0)) {
        local_258 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_228,local_258._4_4_,&local_260,local_228,
                   (int *)((longlong)&local_258 + 4));
        if (iVar9 != 0) {
          memcpy(local_260.Data,FVar16.Data,(longlong)iVar9 << 2);
        }
      }
      if (((*(FString **)&pUVar14[1].field_0x8 <= &local_270) &&
          (&local_270 <
           *(FString **)&pUVar14[1].field_0x8 + (longlong)*(int *)&pUVar14[1].field_0x14 * 2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *(int *)&pUVar14[1].field_0x10;
      if (iVar9 == *(int *)&pUVar14[1].field_0x14) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)&pUVar14[1].field_0x8,
                           (int *)&pUVar14[1].field_0x14);
      }
      *(int *)&pUVar14[1].field_0x10 = iVar9 + 1;
      this_00 = (FString *)(*(longlong *)&pUVar14[1].field_0x8 + (longlong)iVar9 * 0x20);
      ::FString::FString(this_00,&local_270);
      FVar16.Data = local_260.Data;
      pFVar11 = this_00 + 1;
      piVar20 = &this_00[1].Data.ArrayMax;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar19 = (longlong)(int)local_258;
      this_00[1].Data.ArrayNum = (int)local_258;
      if ((int)local_258 == 0) {
        *piVar20 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_258,0,(ForAnyElementType *)pFVar11,(int)local_258,piVar20);
        memcpy((pFVar11->Data).AllocatorInstance.Data,FVar16.Data,lVar19 << 2);
      }
      if (local_230.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data);
      }
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      iVar23 = iVar23 + 1;
    }
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    pTVar26 = local_1c8;
    pTVar27 = local_1d0;
    uVar22 = local_274;
  } while( true );
}

// FillVariationInfo @ 14da8abc0

void __thiscall UProceduralVegetationPreset::FillVariationInfo(UProceduralVegetationPreset *this)

{
  TArray<FPVPresetVariationInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  FManagedArrayCollection *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  int iVar13;
  FName *pFVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  int *piVar20;
  undefined1 local_res8 [8];
  int local_res10;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_res18;
  FName local_res20;
  FPVPresetVariationInfo local_198;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FManagedArrayCollection local_100;
  
  pTVar1 = &this->PresetVariations;
  DestructItems<FPVPresetVariationInfo,int>
            ((FPVPresetVariationInfo *)(pTVar1->AllocatorInstance).Data,
             (this->PresetVariations).ArrayNum);
  (this->PresetVariations).ArrayNum = 0;
  if ((this->PresetVariations).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar1->AllocatorInstance,0,&(this->PresetVariations).ArrayMax);
  }
  puVar2 = &(this->Variants).field_0x10;
  iStack_158 = 0;
  iVar9 = *(int *)&(this->Variants).field_0x28;
  local_res18 = &this->Variants;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(this->Variants).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14da8acc1;
      uVar16 = puVar19[lVar12 + 1];
    }
    uStack_154 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_154 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iStack_144 = local_res10 + -1 + local_140;
    if (iVar9 < iStack_144) {
      iStack_144 = iVar9;
    }
  }
LAB_14da8acc1:
  iStack_138 = *(int *)&(this->Variants).field_0x8 - *(int *)&(this->Variants).field_0x34;
  uVar16 = *(uint *)&(this->Variants).field_0x28;
  uStack_148 = 0xffffffff;
  TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_128.CurrentBitIndex = iStack_144;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_128._28_4_ = iStack_144;
  TStack_128.BaseBitIndex = local_140;
  uStack_108 = CONCAT44(uStack_134,iStack_138);
  local_160 = local_res18;
  local_150 = puVar2;
  iStack_13c = iStack_144;
  local_130 = local_res18;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Variants).field_0x28;
  if (uVar16 != uVar4) {
    puVar18 = *(undefined1 **)&(this->Variants).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14da8adc0;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14da8adc0:
  while( true ) {
    pTVar7 = local_130;
    piVar20 = &(this->PresetVariations).ArrayMax;
    if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_128.CurrentBitIndex == uVar16) &&
        (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar7 == local_res18)) break;
    local_198.Name.ComparisonIndex.Value = 0;
    local_198.Name.Number = 0;
    puVar17 = (undefined8 *)((longlong)TStack_128.CurrentBitIndex * 200 + *(longlong *)pTVar7);
    local_198.FoliageMeshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.FoliageMeshes.ArrayNum = 0;
    local_198.FoliageMeshes.ArrayMax = 0;
    local_198.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Materials.ArrayNum = 0;
    local_198.Materials.ArrayMax = 0;
    local_198.PlantProfiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.PlantProfiles.ArrayNum = 0;
    local_198.PlantProfiles.ArrayMax = 0;
    pFVar10 = FManagedArrayCollection::FManagedArrayCollection
                        (&local_100,(FManagedArrayCollection *)(puVar17 + 2));
    iVar9 = *(int *)(puVar17 + 1) + -1;
    if (*(int *)(puVar17 + 1) == 0) {
      iVar9 = 0;
    }
    pFVar11 = ::FName::FName(&local_res20,iVar9,(wchar_t *)*puVar17,FNAME_Add);
    FPVPresetVariationInfo::Fill(&local_198,*pFVar11,pFVar10);
    iVar9 = (this->PresetVariations).ArrayNum;
    if (iVar9 == *piVar20) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,piVar20);
    }
    FVar6.Data = local_198.FoliageMeshes.AllocatorInstance.Data;
    pFVar14 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x38);
    (this->PresetVariations).ArrayNum = iVar9 + 1;
    *pFVar14 = local_198.Name;
    pFVar11 = pFVar14 + 1;
    pFVar11->ComparisonIndex = 0;
    pFVar11->Number = 0;
    iVar9 = local_198.FoliageMeshes.ArrayNum;
    pFVar14[2].ComparisonIndex.Value = local_198.FoliageMeshes.ArrayNum;
    if (local_198.FoliageMeshes.ArrayNum == 0) {
      pFVar14[2].Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_198.FoliageMeshes.ArrayNum,0,(ForAnyElementType *)pFVar11,
                 local_198.FoliageMeshes.ArrayNum,(int *)&pFVar14[2].Number);
      ConstructItems<TSoftObjectPtr<UObject>,TSoftObjectPtr<UObject>,int>
                ((void *)*pFVar11,(TSoftObjectPtr<UObject> *)FVar6.Data,iVar9);
    }
    FVar6.Data = local_198.Materials.AllocatorInstance.Data;
    pFVar14[3].ComparisonIndex = 0;
    pFVar14[3].Number = 0;
    iVar9 = local_198.Materials.ArrayNum;
    pFVar14[4].ComparisonIndex.Value = local_198.Materials.ArrayNum;
    if (local_198.Materials.ArrayNum == 0) {
      pFVar14[4].Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_198.Materials.ArrayNum,0,(ForAnyElementType *)(pFVar14 + 3),
                 local_198.Materials.ArrayNum,(int *)&pFVar14[4].Number);
      ConstructItems<TSoftObjectPtr<UObject>,TSoftObjectPtr<UObject>,int>
                ((void *)pFVar14[3],(TSoftObjectPtr<UObject> *)FVar6.Data,iVar9);
    }
    FVar6.Data = local_198.PlantProfiles.AllocatorInstance.Data;
    pFVar11 = pFVar14 + 5;
    pFVar11->ComparisonIndex = 0;
    pFVar11->Number = 0;
    iVar9 = local_198.PlantProfiles.ArrayNum;
    pFVar14[6].ComparisonIndex.Value = local_198.PlantProfiles.ArrayNum;
    if (local_198.PlantProfiles.ArrayNum == 0) {
      pFVar14[6].Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_198.PlantProfiles.ArrayNum,0,(ForAnyElementType *)pFVar11,
                 local_198.PlantProfiles.ArrayNum,(int *)&pFVar14[6].Number);
      ConstructItems<FString,FString,int>((void *)*pFVar11,(FString *)FVar6.Data,iVar9);
    }
    DestructItems<FString,int>
              ((FString *)local_198.PlantProfiles.AllocatorInstance.Data,
               local_198.PlantProfiles.ArrayNum);
    if (local_198.PlantProfiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.PlantProfiles.AllocatorInstance.Data);
    }
    DestructItems<TSoftObjectPtr<UObject>,int>
              ((TSoftObjectPtr<UObject> *)local_198.Materials.AllocatorInstance.Data,
               local_198.Materials.ArrayNum);
    if (local_198.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Materials.AllocatorInstance.Data);
    }
    DestructItems<TSoftObjectPtr<UObject>,int>
              ((TSoftObjectPtr<UObject> *)local_198.FoliageMeshes.AllocatorInstance.Data,
               local_198.FoliageMeshes.ArrayNum);
    if (local_198.FoliageMeshes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.FoliageMeshes.AllocatorInstance.Data);
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  return;
}

// GetPrivateStaticClass @ 14da99df0

UClass * __cdecl UProceduralVegetationPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralVegetationPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"ProceduralVegetationPreset",
               &Z_Registration_Info_UClass_UProceduralVegetationPreset.InnerSingleton,
               StaticRegisterNativesUProceduralVegetationPreset,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UProceduralVegetationPreset>,
               InternalVTableHelperCtorCaller<UProceduralVegetationPreset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralVegetationPreset.InnerSingleton;
}

// LoadFromVariantFiles @ 14da9b350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UProceduralVegetationPreset::LoadFromVariantFiles
          (UProceduralVegetationPreset *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  FString local_160;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_148 = 0;
  local_130 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14da9b40e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_144 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_144 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_120 = (int)lVar9;
    iStack_134 = local_130 + -1 + local_120;
    if (iVar4 < iStack_134) {
      iStack_134 = iVar4;
    }
  }
LAB_14da9b40e:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_128 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_138 = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_144,iStack_148);
  TStack_110.CurrentBitIndex = iStack_134;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_110._28_4_ = iStack_134;
  TStack_110.BaseBitIndex = local_130;
  uStack_f0 = CONCAT44(uStack_124,iStack_128);
  local_150 = param_1;
  local_140 = puVar1;
  iStack_12c = iStack_134;
  local_118 = param_1;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14da9b520;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14da9b520:
  while( true ) {
    pTVar7 = local_118;
    if (*(int *)&local_118->field_0x8 - *(int *)&local_118->field_0x34 != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_110.CurrentBitIndex == uVar12) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1)
       ) break;
    pFVar2 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_110.CurrentBitIndex * 0x28);
    if (4 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
    }
    FManagedArrayCollection::FManagedArrayCollection(&local_e8);
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = 0;
    local_160.Data.ArrayMax = 0;
    bVar8 = PV::LoadMegaPlantsJsonToCollection(&local_e8,pFVar2 + 1,&local_160);
    if (bVar8) {
      TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
      ::Emplace<FString_const_&,FManagedArrayCollection_const_&>
                ((TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
                  *)&this->Variants,pFVar2,&local_e8);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  return;
}

// PostLoad @ 14da9f350

void __thiscall UProceduralVegetationPreset::PostLoad(UProceduralVegetationPreset *this)

{
  UObject::PostLoad((UObject *)this);
  if ((this->PresetVariations).ArrayNum == 0) {
    FillVariationInfo(this);
    return;
  }
  return;
}

// ShowHideInternalProperties @ 14daa9840

void __cdecl UProceduralVegetationPreset::ShowHideInternalProperties(bool param_1)

{
  return;
}

// StaticRegisterNativesUProceduralVegetationPreset @ 14daa99e0

void __cdecl UProceduralVegetationPreset::StaticRegisterNativesUProceduralVegetationPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UProceduralVegetationPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateDataAsset @ 14daaad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UProceduralVegetationPreset::UpdateDataAsset(UProceduralVegetationPreset *this)

{
  undefined1 *puVar1;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar2;
  longlong lVar3;
  code *pcVar4;
  UProceduralVegetationPreset *this_00;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  IFileManager *pIVar9;
  ulonglong uVar10;
  FString *pFVar11;
  longlong lVar12;
  UPackage *this_01;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  TSharedPtr<FJsonObject,1> *pTVar16;
  uint uVar17;
  FScriptContainerElement *_Src;
  int iVar18;
  int iVar19;
  wchar_t *pwVar20;
  undefined1 *puVar21;
  uint *puVar22;
  FString *pFVar23;
  uint uVar24;
  FString *pFVar25;
  undefined1 auStackY_278 [32];
  undefined1 local_228;
  undefined1 local_227 [7];
  ForAnyElementType local_220;
  undefined8 local_218;
  FString local_210;
  TSharedPtr<FJsonObject,1> local_200;
  FString *local_1f0;
  ulonglong local_1e8;
  uint local_1e0;
  FString local_1d8;
  undefined8 local_1c8;
  int local_1c0;
  int local_1bc;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_1b8;
  UProceduralVegetationPreset *local_1b0;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSharedPtr<FJsonObject,1> local_148;
  TSharedPtr<FJsonObject,1> local_138;
  FString local_128;
  FString local_118 [2];
  undefined4 local_ec;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1b0 = this;
  if (4 < (byte)LogProceduralVegetation._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
  }
  if ((this->JsonDirectoryPath).Path.Data.ArrayNum < 2) {
    if (2 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
    }
  }
  else {
    pIVar9 = IFileManager::Get();
    local_1f0 = (FString *)0x0;
    local_1e8 = 0;
    if ((this->JsonDirectoryPath).Path.Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(this->JsonDirectoryPath).Path.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,&local_1f0,pwVar20);
    pTVar2 = &this->Variants;
    bVar6 = 1 < *(int *)&(this->Variants).field_0x48;
    local_1b8 = pTVar2;
    if (!bVar6) {
      TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
                        *)pTVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar2,0,*(int *)&(this->Variants).field_0x8);
    puVar1 = &(this->Variants).field_0xc;
    *(undefined4 *)&(this->Variants).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Variants).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Variants).field_0x34 = 0;
    iVar7 = *(int *)&(this->Variants).field_0x2c;
    *(undefined4 *)&(this->Variants).field_0x28 = 0;
    if ((iVar7 < 0) || (0x80 < iVar7)) {
      *(undefined4 *)&(this->Variants).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Variants).field_0x10,0);
    }
    local_1c8 = 1;
    if (bVar6) {
      *(undefined4 *)&(this->Variants).field_0x48 = 1;
      TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
                *)pTVar2);
    }
    uVar10 = (ulonglong)(int)(uint)local_1e8;
    local_218._0_4_ = 0;
    pFVar23 = local_1f0 + uVar10;
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218 = 0;
    local_1e0 = (uint)local_1e8;
    uVar14 = uVar10;
    pFVar25 = local_1f0;
    while( true ) {
      iVar7 = (int)local_218;
      if ((int)uVar10 != (int)uVar14) {
        local_228 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_228);
        iVar7 = (int)local_218;
      }
      uVar13 = 0;
      if (pFVar25 == pFVar23) break;
      iVar7 = (pFVar25->Data).ArrayNum;
      iVar19 = (this->JsonDirectoryPath).Path.Data.ArrayNum;
      iVar18 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar18 = 0;
      }
      local_210.Data.ArrayNum = iVar19;
      if ((iVar19 == 0) && (iVar18 != -1)) {
        _Src = (this->JsonDirectoryPath).Path.Data.AllocatorInstance.Data;
        iVar7 = iVar18 + 2;
LAB_14daaaf27:
        local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar7 != 0) goto LAB_14daaaf31;
        local_210.Data.ArrayMax = 0;
      }
      else {
        _Src = (this->JsonDirectoryPath).Path.Data.AllocatorInstance.Data;
        iVar7 = iVar18 + 1;
        if (iVar19 == 0) goto LAB_14daaaf27;
LAB_14daaaf31:
        local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar13 = iVar19 + iVar7;
        if ((int)uVar13 < iVar19) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar13,0,(ForAnyElementType *)&local_210,iVar19,&local_210.Data.ArrayMax);
        if (iVar19 != 0) {
          memcpy(local_210.Data.AllocatorInstance.Data,_Src,(longlong)iVar19 * 2);
        }
      }
      ::FString::PathAppend(&local_210,(wchar_t *)(pFVar25->Data).AllocatorInstance.Data,iVar18);
      FManagedArrayCollection::FManagedArrayCollection(&local_e8);
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      bVar6 = PV::LoadMegaPlantsJsonToCollection(&local_e8,&local_210,&local_1d8);
      if (bVar6) {
        if (4 < (byte)LogProceduralVegetation._0_1_) {
          FPaths::GetBaseFilename(&local_128,&local_210,true);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        pFVar11 = FPaths::GetBaseFilename(local_118,&local_210,true);
        TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
        ::Emplace<FString,FManagedArrayCollection_const_&>
                  ((TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
                    *)pTVar2,pFVar11,&local_e8);
        if (local_118[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118[0].Data.AllocatorInstance.Data);
        }
      }
      else {
        PV::LoadMetaFileIntoJsonObject(&local_200,&local_210,&local_1d8);
        if (local_200.Object != (FJsonObject *)0x0) {
          if (((local_220.Data <= &local_200) &&
              (&local_200 <
               (TSharedPtr<FJsonObject,1> *)(local_220.Data + (longlong)local_218._4_4_ * 0x10))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_218;
          if ((int)local_218 == local_218._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_220,(int *)((longlong)&local_218 + 4));
          }
          local_218 = CONCAT44(local_218._4_4_,iVar7 + 1);
          *(FJsonObject **)&local_220.Data[(longlong)iVar7 * 0x10].field_0x0 = local_200.Object;
          *(TReferenceControllerBase<1> **)(local_220.Data + (longlong)iVar7 * 0x10 + 8) =
               local_200.SharedReferenceCount.ReferenceController;
          if (local_200.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_200.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_200.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_200.SharedReferenceCount.ReferenceController);
      }
      if ((1 < local_1d8.Data.ArrayNum) && (2 < (byte)LogProceduralVegetation._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      uVar10 = local_1e8 & 0xffffffff;
      pFVar25 = pFVar25 + 1;
      uVar14 = (ulonglong)local_1e0;
    }
    puVar1 = &(this->Variants).field_0x10;
    uVar8 = *(uint *)&(this->Variants).field_0x28;
    uStack_18c = uVar13;
    uStack_1a0 = uVar13;
    local_188 = uVar13;
    if (uVar8 == 0) {
LAB_14daab230:
      uStack_19c = (uint)local_1c8;
    }
    else {
      puVar22 = *(uint **)&(this->Variants).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uStack_19c = *puVar22;
      while (uStack_19c == 0) {
        lVar15 = (longlong)(int)uStack_1a0;
        local_188 = local_188 + 0x20;
        uStack_1a0 = uStack_1a0 + 1;
        uStack_18c = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1a0)
        goto LAB_14daab230;
        uStack_19c = puVar22[lVar15 + 1];
      }
      uStack_19c = -uStack_19c & uStack_19c;
      uVar14 = (ulonglong)uStack_19c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_1c0 = (int)lVar15;
      uStack_18c = local_1c0 + -1 + local_188;
      if ((int)uVar8 < (int)uStack_18c) {
        uStack_18c = uVar8;
      }
    }
    local_1a8 = &this->Variants;
    uStack_184 = local_ec;
    iStack_180 = *(int *)&(this->Variants).field_0x8 - *(int *)&(this->Variants).field_0x34;
    uVar17 = *(uint *)&(this->Variants).field_0x28;
    uStack_190 = 0xffffffff;
    uVar24 = uVar17 & 0xffffffe0;
    TStack_170._padding_ = CONCAT44(uStack_19c,uStack_1a0);
    TStack_170.CurrentBitIndex = uStack_18c;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar17 >> 5;
    TStack_170._28_4_ = local_ec;
    TStack_170.BaseBitIndex = local_188;
    uStack_150 = CONCAT44(uStack_17c,iStack_180);
    local_198 = puVar1;
    local_178 = local_1a8;
    TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar17 < 0) || ((int)uVar8 < (int)uVar17)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (int)local_218;
    }
    pTVar2 = local_1b8;
    uVar8 = *(uint *)&(this->Variants).field_0x28;
    if (uVar17 != uVar8) {
      puVar21 = *(undefined1 **)&(this->Variants).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar19;
        uVar24 = uVar24 + 0x20;
        iVar19 = iVar19 + 1;
        uVar17 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14daab34f;
        uVar17 = *(uint *)(puVar21 + lVar15 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_1bc = (int)lVar15;
      uVar17 = local_1bc + -1 + uVar24;
      if ((int)uVar8 < (int)uVar17) {
        uVar17 = uVar8;
      }
    }
LAB_14daab34f:
    lVar15 = 0;
    while( true ) {
      pTVar5 = local_178;
      if (*(int *)(&local_178->field_0x0 + 8) - *(int *)(&local_178->field_0x0 + 0x34) !=
          (int)uStack_150) {
        local_227[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_227);
        iVar7 = (int)local_218;
      }
      this_00 = local_1b0;
      lVar12 = (longlong)TStack_170.CurrentBitIndex;
      if (((TStack_170.CurrentBitIndex == uVar17) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar5 == pTVar2)) break;
      lVar3 = *(longlong *)&pTVar5->field_0x0;
      if (((int)uVar13 < 0) || (iVar7 <= (int)uVar13)) {
        if ((0 < iVar7) && (iVar7 + -1 < (int)uVar13)) {
          if ((iVar7 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_138.Object = *(FJsonObject **)local_220.Data;
          local_138.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(local_220.Data + 8);
          if (local_138.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pTVar16 = &local_138;
          goto LAB_14daab484;
        }
      }
      else {
        uVar8 = 0;
        if ((int)uVar13 < iVar7) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_148.Object = *(FJsonObject **)(local_220.Data + lVar15);
        local_148.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(local_220.Data + lVar15 + 8);
        if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar16 = &local_148;
LAB_14daab484:
        PV::LoadMetaJsonToCollection
                  ((FManagedArrayCollection *)(lVar12 * 200 + lVar3 + 0x10),pTVar16);
      }
      uVar13 = uVar13 + 1;
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      lVar15 = lVar15 + 0x10;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
      iVar7 = (int)local_218;
    }
    if (local_1b0->bCreateProfileDataAsset != false) {
      CreateProfileDataAsset(local_1b0);
    }
    UpdateFoliageAndMaterialPath(this_00);
    FillVariationInfo(this_00);
    this_01 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
    UPackage::SetDirtyFlag(this_01,true);
    DestructItems<TSharedPtr<FJsonObject,1>,int>
              ((TSharedPtr<FJsonObject,1> *)local_220.Data,(int)local_218);
    if ((TSharedPtr<FJsonObject,1> *)local_220.Data != (TSharedPtr<FJsonObject,1> *)0x0) {
      FMemory::Free(local_220.Data);
    }
    DestructItems<FString,int>(local_1f0,(uint)local_1e8);
    if (local_1f0 != (FString *)0x0) {
      FMemory::Free(local_1f0);
    }
  }
  return;
}

// UpdateFoliageAndMaterialPath @ 14daab580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UProceduralVegetationPreset::UpdateFoliageAndMaterialPath(UProceduralVegetationPreset *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int *piVar7;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar8;
  TManagedArray<FString> *pTVar9;
  FManagedArrayCollection *this_00;
  bool bVar10;
  int iVar11;
  FString *pFVar12;
  size_t sVar13;
  byte bVar14;
  longlong lVar15;
  TManagedArray<FString> *pTVar16;
  uint uVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined8 local_res20;
  ForAnyElementType local_6e8;
  undefined8 local_6e0;
  FString local_6d8;
  int local_6c8;
  uint uStack_6c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6c0;
  uint local_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  undefined4 uStack_6ac;
  TBitArray<FDefaultBitArrayAllocator> *local_6a8;
  FString local_6a0;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_690;
  int iStack_688;
  uint uStack_684;
  undefined1 *local_680;
  undefined4 uStack_678;
  int iStack_674;
  int local_670;
  int iStack_66c;
  int iStack_668;
  undefined4 uStack_664;
  FString local_660;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_650;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_648;
  undefined8 uStack_628;
  FString local_620;
  TStringView<wchar_t> local_610;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  TStringView<wchar_t> local_5e0;
  FScriptContainerElement *local_5d0;
  int local_5c8;
  FFoliageFacade local_5b8;
  FBranchFacade local_338;
  
  puVar1 = &(this->Variants).field_0x10;
  iStack_688 = 0;
  iVar23 = *(int *)&(this->Variants).field_0x28;
  local_690 = &this->Variants;
  local_670 = 0;
  uStack_684 = 1;
  iStack_674 = 0;
  if (iVar23 != 0) {
    puVar21 = *(uint **)&(this->Variants).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar3 = *puVar21;
    while (uVar3 == 0) {
      lVar15 = (longlong)iStack_688;
      local_670 = local_670 + 0x20;
      iStack_688 = iStack_688 + 1;
      iStack_674 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_688) goto LAB_14daab630;
      uVar3 = puVar21[lVar15 + 1];
    }
    uStack_684 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_684 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iStack_674 = local_670 + -1 + local_res10;
    if (iVar23 < iStack_674) {
      iStack_674 = iVar23;
    }
  }
LAB_14daab630:
  uVar3 = *(uint *)&(this->Variants).field_0x28;
  bVar14 = (byte)uVar3 & 0x1f;
  iStack_668 = *(int *)&(this->Variants).field_0x8 - *(int *)&(this->Variants).field_0x34;
  uVar18 = uVar3 & 0xffffffe0;
  iVar22 = (int)uVar3 >> 5;
  uStack_6c4 = 1 << bVar14;
  uVar17 = -1 << bVar14;
  uStack_678 = 0xffffffff;
  TStack_648._padding_ = CONCAT44(uStack_684,iStack_688);
  TStack_648.CurrentBitIndex = iStack_674;
  TStack_648.UnvisitedBitMask = 0xffffffff;
  TStack_648._28_4_ = iStack_674;
  TStack_648.BaseBitIndex = local_670;
  uStack_628 = CONCAT44(uStack_664,iStack_668);
  local_6c8 = iVar22;
  pTStack_6c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_6b8 = uVar17;
  uStack_6b4 = uVar3;
  uStack_6b0 = uVar18;
  local_680 = puVar1;
  iStack_66c = iStack_674;
  local_650 = local_690;
  TStack_648.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar3 < 0) || (iVar23 < (int)uVar3)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Variants).field_0x28;
  if (uVar3 != uVar4) {
    puVar20 = *(undefined1 **)&(this->Variants).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar17 = uVar17 & *(uint *)(puVar20 + (longlong)iVar22 * 4);
    while (uVar17 == 0) {
      uStack_6b0 = uVar18 + 0x20;
      local_6c8 = iVar22 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_6c8)
      goto LAB_14daab773;
      uVar17 = *(uint *)(puVar20 + (longlong)iVar22 * 4 + 4);
      local_6b8 = 0xffffffff;
      uVar18 = uStack_6b0;
      iVar22 = local_6c8;
    }
    uStack_6c4 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_6c4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uStack_6b4 = local_res18 + -1 + uVar18;
    if ((int)uVar4 < (int)uStack_6b4) {
LAB_14daab773:
      uStack_6b4 = uVar4;
    }
  }
  uVar3 = uStack_6b4;
  local_610._12_4_ = uStack_6c4;
  local_610.Size = local_6c8;
  local_5f8 = CONCAT44(uStack_6b4,local_6b8);
  uStack_5f0 = CONCAT44(uStack_6ac,uStack_6b0);
  pTStack_600 = pTStack_6c0;
  local_6a8 = pTStack_6c0;
  do {
    pTVar8 = local_650;
    iVar23 = 0;
    if (*(int *)&local_650->field_0x8 - *(int *)&local_650->field_0x34 != (int)uStack_628) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_648.CurrentBitIndex == uVar3) && (TStack_648.Array == local_6a8)) &&
       (pTVar8 == &this->Variants)) {
      return;
    }
    lVar15 = *(longlong *)pTVar8 + (longlong)TStack_648.CurrentBitIndex * 200;
    PV::Facades::FFoliageFacade::FFoliageFacade
              (&local_5b8,(FManagedArrayCollection *)(lVar15 + 0x10),0);
    PV::Facades::FBranchFacade::FBranchFacade(&local_338,(FManagedArrayCollection *)(lVar15 + 0x10))
    ;
    pTVar9 = local_5b8.NamesAttribute.ConstAttributeArray;
    while( true ) {
      pTVar16 = (TManagedArray<FString> *)0x0;
      if (pTVar9 == (TManagedArray<FString> *)0x0) {
        iVar22 = FManagedArrayCollection::NumElements
                           (local_5b8.NamesAttribute.ConstCollection,local_5b8.NamesAttribute.Group)
        ;
      }
      else {
        iVar22 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
        pTVar16 = pTVar9;
      }
      if (iVar22 <= iVar23) break;
      if (((pTVar16 == (TManagedArray<FString> *)0x0) || (iVar23 < 0)) ||
         (iVar22 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9), iVar22 <= iVar23)) {
        local_6e8.Data = (FScriptContainerElement *)0x0;
        local_6e0 = 0;
LAB_14daab8fc:
        FVar19.Data = (FScriptContainerElement *)L"";
      }
      else {
        pFVar12 = TManagedArrayAccessor<FString>::operator[](&local_5b8.NamesAttribute,iVar23);
        local_6e8.Data = (FScriptContainerElement *)0x0;
        iVar22 = (pFVar12->Data).ArrayNum;
        pFVar5 = (pFVar12->Data).AllocatorInstance.Data;
        local_6e0 = CONCAT44(local_6e0._4_4_,iVar22);
        if (iVar22 == 0) {
          local_6e0 = 0;
          local_6e0._0_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar22,0,&local_6e8,iVar22,(int *)((longlong)&local_6e0 + 4));
          memcpy(local_6e8.Data,pFVar5,(longlong)iVar22 * 2);
        }
        FVar19.Data = local_6e8.Data;
        if ((int)local_6e0 == 0) goto LAB_14daab8fc;
      }
      if ((this->FoliageFolder).Path.Data.ArrayNum == 0) {
        local_610.DataPtr = L"";
      }
      else {
        local_610.DataPtr = (wchar_t *)(this->FoliageFolder).Path.Data.AllocatorInstance.Data;
      }
      iVar11 = 0;
      iVar22 = iVar11;
      if ((FScriptContainerElement *)local_610.DataPtr != (FScriptContainerElement *)0x0) {
        sVar13 = wcslen(local_610.DataPtr);
        iVar22 = (int)sVar13;
      }
      local_610.Size = iVar22;
      pTStack_600 = (TBitArray<FDefaultBitArrayAllocator> *)FVar19.Data;
      if ((TBitArray<FDefaultBitArrayAllocator> *)FVar19.Data !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        sVar13 = wcslen((wchar_t *)FVar19.Data);
        iVar11 = (int)sVar13;
      }
      local_5f8 = CONCAT44(local_5f8._4_4_,iVar11);
      FPaths::CombineInternal(&local_620,&local_610,2);
      if ((local_5b8.Collection == (FManagedArrayCollection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                              ,0x14d,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((((((pTVar9 != (TManagedArray<FString> *)0x0) &&
              (local_5b8.NameIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
             (local_5b8.BranchIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
            ((local_5b8.PivotPointsAttribute.ConstAttributeArray !=
              (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
             (local_5b8.UpVectorsAttribute.ConstAttributeArray !=
              (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) &&
           ((local_5b8.NormalVectorsAttribute.ConstAttributeArray !=
             (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
            ((local_5b8.ScalesAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0 &&
             (local_5b8.LengthFromRootAttribute.ConstAttributeArray != (TManagedArray<float> *)0x0))
            )))) && (local_5b8.FoliageIdsAttribute.ConstAttributeArray !=
                     (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
         ((local_5b8.ParentBoneIdsAttribute.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
          (bVar10 = TManagedArrayAccessor<FString>::IsValidIndex(&local_5b8.NamesAttribute,iVar23),
          bVar10)))) {
        TManagedArrayAccessor<FString>::ModifyAt(&local_5b8.NamesAttribute,iVar23,&local_620);
      }
      iVar22 = (this->TrunkMaterialName).Data.ArrayNum;
      if (iVar22 < 2) {
        if (2 < (byte)LogProceduralVegetation._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
        }
      }
      else {
        uVar17 = iVar22 + 1;
        local_6d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar5 = (this->TrunkMaterialName).Data.AllocatorInstance.Data;
        local_6d8.Data.ArrayNum = iVar22;
        if ((int)uVar17 < iVar22) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar17,0,(ForAnyElementType *)&local_6d8,iVar22,&local_6d8.Data.ArrayMax);
        memcpy(local_6d8.Data.AllocatorInstance.Data,pFVar5,(longlong)iVar22 * 2);
        ::FString::AppendChar(&local_6d8,L'.');
        ::FString::ConcatFF(&local_660,&local_6d8,&this->TrunkMaterialName);
        if ((this->MaterialsFolder).Path.Data.ArrayNum == 0) {
          local_5e0.DataPtr = L"";
        }
        else {
          local_5e0.DataPtr = (wchar_t *)(this->MaterialsFolder).Path.Data.AllocatorInstance.Data;
        }
        iVar22 = 0;
        if ((FScriptContainerElement *)local_5e0.DataPtr != (FScriptContainerElement *)0x0) {
          sVar13 = wcslen(local_5e0.DataPtr);
          iVar22 = (int)sVar13;
        }
        local_5d0 = local_660.Data.AllocatorInstance.Data;
        local_5c8 = local_660.Data.ArrayNum + -1;
        if (local_660.Data.ArrayNum == 0) {
          local_5c8 = 0;
        }
        local_5e0.Size = iVar22;
        FPaths::CombineInternal(&local_6a0,&local_5e0,2);
        if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_660.Data.AllocatorInstance.Data);
        }
        if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
        }
        if ((local_338.Collection == (FManagedArrayCollection *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsConst()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBranchFacade.cpp"
                                ,0x105,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = local_338.Collection;
        iVar22 = FManagedArrayCollection::NumElements
                           (local_338.Collection,PV::GroupNames::DetailsGroup);
        if (iVar22 == 0) {
          FManagedArrayCollection::AddElements(this_00,1,PV::GroupNames::DetailsGroup);
        }
        if (local_338.TrunkMaterialPathAttribute.ConstAttributeArray ==
            (TManagedArray<FString> *)0x0) {
          local_res20 = 0;
          TManagedArrayAccessor<FString>::Add
                    (&local_338.TrunkMaterialPathAttribute,MakePersistent,(FName)0x0);
        }
        if (((local_338.TrunkMaterialPathAttribute.AttributeArray == (TManagedArray<FString> *)0x0)
            || (local_338.TrunkMaterialPathAttribute.Collection == (FManagedArrayCollection *)0x0))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AttributeArray!=nullptr && !IsConst()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x74,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar16 = local_338.TrunkMaterialPathAttribute.AttributeArray;
        (local_338.TrunkMaterialPathAttribute.AttributeArray)->field_0x8 = 1;
        if ((*(int *)&(local_338.TrunkMaterialPathAttribute.AttributeArray)->field_0x18 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar19.Data = local_6a0.Data.AllocatorInstance.Data;
        pFVar12 = *(FString **)&pTVar16->field_0x10;
        if (pFVar12 != &local_6a0) {
          piVar7 = &(pFVar12->Data).ArrayMax;
          iVar22 = local_6a0.Data.ArrayNum;
          (pFVar12->Data).ArrayNum = iVar22;
          if ((iVar22 == 0) && (*piVar7 == 0)) {
            *piVar7 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar22,*piVar7,(ForAnyElementType *)pFVar12,iVar22,piVar7);
            if (iVar22 != 0) {
              memcpy((pFVar12->Data).AllocatorInstance.Data,FVar19.Data,(longlong)iVar22 * 2);
            }
          }
        }
        if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
        }
      }
      if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_620.Data.AllocatorInstance.Data);
      }
      if (local_6e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data);
      }
      iVar23 = iVar23 + 1;
    }
    TStack_648.UnvisitedBitMask = TStack_648.UnvisitedBitMask & ~TStack_648._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_648);
  } while( true );
}

// execUpdateDataAsset @ 14daae790

void __cdecl
UProceduralVegetationPreset::execUpdateDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateDataAsset((UProceduralVegetationPreset *)param_1);
  return;
}

