// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 148aa97e0

UClass * __cdecl UWorldPartitionLevelStreamingPolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionLevelStreamingPolicy",
               &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton,
               StaticRegisterNativesUWorldPartitionLevelStreamingPolicy,0x568,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionLevelStreamingPolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingPolicy>,local_res8,
               UWorldPartitionStreamingPolicy::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton;
}

// UWorldPartitionLevelStreamingPolicy @ 148ab5340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartitionLevelStreamingPolicy * __thiscall
UWorldPartitionLevelStreamingPolicy::UWorldPartitionLevelStreamingPolicy
          (UWorldPartitionLevelStreamingPolicy *this,FVTableHelper *param_1)

{
  UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy
            ((UWorldPartitionStreamingPolicy *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingPolicy__6B_;
  (this->SourceWorldAssetPath).PackageName.ComparisonIndex = 0;
  (this->SourceWorldAssetPath).PackageName.Number = 0;
  (this->SourceWorldAssetPath).AssetName.ComparisonIndex = 0;
  (this->SourceWorldAssetPath).AssetName.Number = 0;
  *(undefined8 *)&this->SubObjectsToCellRemapping = 0;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x8 = 0;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x34 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x8 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x20 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x28 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x34 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x40 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  (this->ContainerResolver).MainContainerPackage.ComparisonIndex = 0;
  (this->ContainerResolver).MainContainerPackage.Number = 0;
  (this->ExternalStreamingObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalStreamingObjects).ArrayNum = 0;
  (this->ExternalStreamingObjects).ArrayMax = 0;
  *(undefined8 *)&this->SubObjectsToExternalStreamingObjectsRemapping = 0;
  *(undefined8 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x8 = 0;
  *(undefined8 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x34 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x48 = 0;
  return this;
}

// UWorldPartitionLevelStreamingPolicy @ 148ab5460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartitionLevelStreamingPolicy * __thiscall
UWorldPartitionLevelStreamingPolicy::UWorldPartitionLevelStreamingPolicy
          (UWorldPartitionLevelStreamingPolicy *this,FObjectInitializer *param_1)

{
  UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy
            ((UWorldPartitionStreamingPolicy *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingPolicy__6B_;
  (this->SourceWorldAssetPath).PackageName.ComparisonIndex = 0;
  (this->SourceWorldAssetPath).PackageName.Number = 0;
  (this->SourceWorldAssetPath).AssetName.ComparisonIndex = 0;
  (this->SourceWorldAssetPath).AssetName.Number = 0;
  *(undefined8 *)&this->SubObjectsToCellRemapping = 0;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x8 = 0;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x34 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x8 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x20 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x28 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x34 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x40 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  (this->ContainerResolver).MainContainerPackage.ComparisonIndex = 0;
  (this->ContainerResolver).MainContainerPackage.Number = 0;
  (this->ExternalStreamingObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalStreamingObjects).ArrayNum = 0;
  (this->ExternalStreamingObjects).ArrayMax = 0;
  *(undefined8 *)&this->SubObjectsToExternalStreamingObjectsRemapping = 0;
  *(undefined8 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x8 = 0;
  *(undefined8 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x34 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x48 = 0;
  return this;
}

// ~UWorldPartitionLevelStreamingPolicy @ 148ab7460

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
UWorldPartitionLevelStreamingPolicy::~UWorldPartitionLevelStreamingPolicy
          (UWorldPartitionLevelStreamingPolicy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingPolicy__6B_;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubObjectsToExternalStreamingObjectsRemapping);
  pFVar2 = (this->ExternalStreamingObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContainerResolver).Containers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainerResolver);
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubObjectsToCellRemapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubObjectsToCellRemapping);
  UWorldPartitionStreamingPolicy::~UWorldPartitionStreamingPolicy
            ((UWorldPartitionStreamingPolicy *)this);
  return;
}

// operator() @ 148ab8c50

void __thiscall
`UWorldPartitionLevelStreamingPolicy::DrawRuntimeCellsDetails'::__l2::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  UWorldPartitionRuntimeCell *local_res10 [3];
  
  local_res10[0] = param_1;
  cVar4 = (**(code **)(param_1->_padding_ + 0x350))(param_1);
  if (cVar4 != '\0') {
    lVar2 = *(longlong *)this;
    iVar6 = (**(code **)(local_res10[0]->_padding_ + 0x318))();
    pFVar7 = (ForAnyElementType *)(lVar2 + (longlong)iVar6 * 0x10);
    if ((pFVar7->Data <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar7[1].Data;
    piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,piVar1);
    }
    *(int *)&pFVar7[1].Data = iVar6 + 1;
    *(UWorldPartitionRuntimeCell **)(pFVar7->Data + (longlong)iVar6 * 8) = local_res10[0];
  }
  return;
}

// ConvertEditorPathToRuntimePath @ 148ac29c0

bool __thiscall
UWorldPartitionLevelStreamingPolicy::ConvertEditorPathToRuntimePath
          (UWorldPartitionLevelStreamingPolicy *this,FSoftObjectPath *param_1,
          FSoftObjectPath *param_2)

{
  UObjectBaseUtility *this_00;
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *this_01;
  FString *pFVar5;
  FName *this_02;
  FSoftObjectPath *pFVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  size_t _Size;
  FName FVar9;
  FName FVar10;
  UObject *local_res20;
  TStringOverload<FString> local_168;
  FString local_158;
  undefined1 local_148 [16];
  FString local_138;
  FTopLevelAssetPath local_128;
  FString local_118;
  FString local_108;
  FName local_f8;
  FName FStack_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  UObject *local_98;
  FString local_90;
  FSoftObjectPath local_80;
  FName local_60 [4];
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  this_01 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar4);
  UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  local_128.PackageName.ComparisonIndex.Value = 0;
  local_128.PackageName.Number = 0;
  local_128.AssetName.ComparisonIndex.Value = 0;
  local_128.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_128,this_01);
  local_e0 = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_e0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_f8 = (param_1->AssetPath).PackageName;
  FStack_f0 = (param_1->AssetPath).AssetName;
  _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e0,0,&local_e8,local_e0,&local_dc);
    memcpy(local_e8.Data,_Src,_Size);
  }
  if (((local_f8 != (this->SourceWorldAssetPath).PackageName) ||
      (FStack_f0 != (this->SourceWorldAssetPath).AssetName)) &&
     ((local_f8 != local_128.PackageName || (FStack_f0 != local_128.AssetName)))) {
    bVar1 = false;
    goto LAB_148ac2f5f;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  iVar2 = local_e0 + -1;
  if (local_e0 == 0) {
    iVar2 = 0;
  }
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize((FString *)local_148,(uchar *)local_e8.Data,iVar2);
  if (&local_138 != pFVar5) {
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_138.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_138.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((FName)local_148._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  ::FString::FString(&local_158,L".");
  bVar1 = ::FString::Split(&local_138,&local_158,&local_118,&local_a8);
  if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"PersistentLevel");
    if (iVar2 != 0) goto LAB_148ac2f39;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_98 = (UObject *)0x0;
    local_res20 = (UObject *)0x0;
    this_02 = FindCellNameForSubObject(this,&local_a8,true,&local_b8,&local_98,&local_res20);
    ::FString::ConcatFC(&local_158,&local_118,L".");
    ::FString::ConcatFF(&local_c8,&local_158,&local_b8);
    if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (this_02 == (FName *)0x0) {
      local_168.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_c8.Data.ArrayNum == 0) {
        local_168.String.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
                   local_c8.Data.ArrayNum,&local_168.String.Data.ArrayMax);
        memcpy(local_168.String.Data.AllocatorInstance.Data,FVar8.Data,
               (longlong)local_c8.Data.ArrayNum * 2);
      }
      local_148._0_4_ = local_128.PackageName.ComparisonIndex.Value;
      local_148._4_4_ = local_128.PackageName.Number;
      local_148._8_4_ = local_128.AssetName.ComparisonIndex.Value;
      local_148._12_4_ = local_128.AssetName.Number;
      pFVar6 = FSoftObjectPath::FSoftObjectPath
                         (&local_80,(FTopLevelAssetPath *)local_148,&local_168);
      FSoftObjectPath::operator=(param_2,pFVar6);
      FVar10 = (FName)local_80.SubPathString.Data.AllocatorInstance;
    }
    else {
      local_168.String.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_128.PackageName;
      ::FName::ToString((FName *)&local_168,&local_d8);
      local_168.String.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)&(this->SourceWorldAssetPath).PackageName;
      ::FName::ToString((FName *)&local_168,&local_108);
      iVar2 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      iVar3 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      FVar10 = FVar9;
      if (iVar3 < iVar2) {
        iVar2 = 0;
        if (local_108.Data.ArrayNum != 0) {
          iVar2 = local_108.Data.ArrayNum + -1;
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar8.Data = local_108.Data.AllocatorInstance.Data;
        }
        iVar2 = ::FString::Find(&local_d8,(wchar_t *)FVar8.Data,iVar2,IgnoreCase,FromStart,-1);
        if (iVar2 != -1) {
          pFVar7 = (FName *)::FString::Mid(&local_d8,(FString *)local_148,0,iVar2);
          if (local_60 != pFVar7) {
            FVar9 = *pFVar7;
            pFVar7->ComparisonIndex = 0;
            pFVar7->Number = 0;
            pFVar7[1].ComparisonIndex = 0;
            pFVar7[1].Number = 0;
          }
          if ((FName)local_148._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_148._0_8_);
          }
          iVar3 = local_108.Data.ArrayNum + -1 + iVar2;
          if (local_108.Data.ArrayNum == 0) {
            iVar3 = iVar2;
          }
          ::FString::RightChop(&local_d8,&local_158,iVar3);
          FVar10 = (FName)local_158.Data.AllocatorInstance;
        }
      }
      local_168.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_128.AssetName;
      ::FName::ToString((FName *)&local_168,(FString *)&local_80);
      ::FName::ToString(this_02,&local_90);
      ::FString::PrintfImpl(&local_158,L"%s%s/_Generated_/%s%s.%s:%s");
      local_148._8_4_ = local_158.Data.ArrayNum - 1;
      if (local_158.Data.ArrayNum == 0) {
        local_148._8_4_ = 0;
      }
      local_148._0_8_ = local_158.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(param_2,(TStringView<wchar_t> *)local_148);
      if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_80.AssetPath.PackageName != (FName)0x0) {
        FMemory::Free((void *)local_80.AssetPath.PackageName);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (FVar9 != (FName)0x0) {
        FMemory::Free((void *)FVar9);
      }
    }
    if (FVar10 != (FName)0x0) {
      FMemory::Free((void *)FVar10);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    bVar1 = true;
  }
  else {
LAB_148ac2f39:
    bVar1 = false;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_148ac2f5f:
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return bVar1;
}

// DrawRuntimeCellsDetails @ 148ac7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionLevelStreamingPolicy::DrawRuntimeCellsDetails
          (UWorldPartitionLevelStreamingPolicy *this,UCanvas *param_1,TVector2<double> *param_2)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  UWorld *pUVar9;
  longlong *plVar10;
  UWorldPartitionRuntimeCell *pUVar11;
  UClass *pUVar12;
  UFont *pUVar13;
  FString *pFVar14;
  longlong lVar15;
  UObjectBaseUtility *this_00;
  UPackage *pUVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ulonglong *puVar20;
  UCanvas *pUVar21;
  int *piVar22;
  EStreamingStatus EVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c7 [7];
  longlong *local_1c0;
  TVector2<double>_u_0 local_1b8;
  UWorldPartitionRuntimeCell *local_1a8;
  UCanvas *local_1a0;
  TVector2<double> *local_198;
  longlong *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FScriptContainerElement *local_158 [2];
  void *local_148 [2];
  FString local_138;
  longlong local_128;
  int local_120;
  undefined1 auStack_11c [116];
  ulonglong local_a8 [14];
  
  local_a8[2] = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_1a0 = param_1;
  local_198 = param_2;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId363,
               "UWorldPartitionLevelStreamingPolicy::DrawRuntimeCellsDetails",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingPolicy.cpp"
               ,0x16b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId363);
  }
  UWorldPartition::GetWorld((UWorldPartition *)this->_padding_);
  lVar17 = 9;
  lVar15 = (longlong)auStack_11c;
  EVar23 = LEVEL_Unloaded;
  do {
    *(undefined8 *)(lVar15 + 0xfffffffffffffff4) = 0;
    *(undefined8 *)(lVar15 + 0xfffffffffffffffc) = 0;
    lVar15 = lVar15 + 0x10;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  local_1c0 = &local_128;
  pUVar9 = UWorldPartition::GetWorld((UWorldPartition *)this->_padding_);
  pFVar19 = (pUVar9->StreamingLevels).AllocatorInstance.Data;
  iVar3 = (pUVar9->StreamingLevels).ArrayNum;
  pFVar2 = pFVar19 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pUVar9->StreamingLevels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1c7);
    }
    dVar8 = __real_403e000000000000;
    fVar7 = __real_40a00000;
    if (pFVar19 == pFVar2) break;
    plVar10 = (longlong *)(**(code **)(**(longlong **)pFVar19 + 0x2b0))();
    if ((plVar10 != (longlong *)0x0) &&
       (pUVar11 = (UWorldPartitionRuntimeCell *)(**(code **)(*plVar10 + 8))(plVar10),
       pUVar11 != (UWorldPartitionRuntimeCell *)0x0)) {
      pUVar12 = UWorldPartitionRuntimeCell::StaticClass();
      iVar4 = (int)pUVar12->_padding_;
      if ((iVar4 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar12->_padding_)) {
        local_1a8 = pUVar11;
        UE::Core::Private::Function::
        TFunctionRefCaller<`UWorldPartitionLevelStreamingPolicy::DrawRuntimeCellsDetails'::__l2::<lambda_1>,void,UWorldPartitionRuntimeCell_const_*>
        ::Call(&local_1c0,&local_1a8);
      }
    }
    pFVar19 = pFVar19 + 8;
  }
  piVar22 = &local_120;
  local_1c0 = (longlong *)((ulonglong)local_1c0 & 0xffffffff00000000);
  local_1b8._s_0.X = (local_198->field0_0x0)._s_0.X;
  local_1b8._s_0.Y = (local_198->field0_0x0)._s_0.Y;
  fVar27 = (float)local_1b8._s_0.Y;
  fVar26 = (float)(local_198->field0_0x0)._s_0.Y;
  do {
    if (0 < *piVar22) {
      ULevelStreaming::GetLevelStreamingStatusDisplayName(EVar23);
      ::FString::PrintfImpl(&local_188,L"%s (%d)");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_188.Data.ArrayNum != 0) {
        FVar18.Data = local_188.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_168,(wchar_t *)FVar18.Data);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      pUVar13 = UEngine::GetSmallFont();
      pUVar21 = local_1a0;
      FWorldPartitionDebugHelper::DrawText
                (local_1a0,&local_168,pUVar13,&FColor::Yellow,(TVector2<double> *)&local_1b8._s_0,
                 (float *)&local_1c0);
      uVar6 = (double)fVar27;
      if ((double)fVar27 <= local_1b8._s_0.Y) {
        uVar6 = local_1b8._s_0.Y;
      }
      if ((double)pUVar21->ClipY < local_1b8._s_0.Y + dVar8) {
        fVar27 = local_1c0._0_4_ + fVar7;
        local_1b8._s_0.Y = (double)fVar26;
        local_1c0 = (longlong *)((ulonglong)local_1c0 & 0xffffffff00000000);
        local_1b8._s_0.X = local_1b8._s_0.X + (double)fVar27;
      }
      ULevelStreaming::GetLevelStreamingStatusColor((EStreamingStatus)&local_1a8);
      plVar10 = *(longlong **)(piVar22 + -2);
      iVar3 = *piVar22;
      local_190 = plVar10 + iVar3;
      while( true ) {
        plVar5 = local_190;
        fVar27 = (float)(double)uVar6;
        if (*piVar22 != iVar3) {
          `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_1c7);
        }
        if (plVar10 == plVar5) break;
        plVar5 = (longlong *)*plVar10;
        if ((EVar23 - LEVEL_Loaded < 3) || (EVar23 == LEVEL_MakingInvisible)) {
          lVar15 = (**(code **)(*plVar5 + 0x2d8))(plVar5);
          if (lVar15 == 0) {
            fVar25 = 0.0;
          }
          else {
            this_00 = (UObjectBaseUtility *)(**(code **)(*plVar5 + 0x2d8))(plVar5);
            pUVar16 = UObjectBaseUtility::GetPackage(this_00);
            fVar25 = pUVar16->LoadTime;
          }
          pUVar13 = UEngine::GetTinyFont();
          FGenericPlatformTime::PrettyTime(&local_138,(double)fVar25);
          (**(code **)(plVar5[5] + 0x68))(plVar5 + 5,local_148);
          ::FString::PrintfImpl(&local_178,L"%s (%s)");
          pUVar21 = local_1a0;
          FWorldPartitionDebugHelper::DrawText
                    (local_1a0,&local_178,pUVar13,(FColor *)&local_1a8,
                     (TVector2<double> *)&local_1b8._s_0,(float *)&local_1c0);
          uVar6 = (double)fVar27;
          if ((double)fVar27 <= local_1b8._s_0.Y) {
            uVar6 = local_1b8._s_0.Y;
          }
          if ((double)pUVar21->ClipY < local_1b8._s_0.Y + dVar8) {
            fVar27 = local_1c0._0_4_ + fVar7;
            local_1b8._s_0.Y = (double)fVar26;
            local_1c0 = (longlong *)((ulonglong)local_1c0 & 0xffffffff00000000);
            local_1b8._s_0.X = local_1b8._s_0.X + (double)fVar27;
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          FVar18.Data = local_138.Data.AllocatorInstance.Data;
          if (local_148[0] != (void *)0x0) {
            FMemory::Free(local_148[0]);
            FVar18.Data = local_138.Data.AllocatorInstance.Data;
          }
        }
        else {
          pUVar13 = UEngine::GetTinyFont();
          pFVar14 = (FString *)(**(code **)(plVar5[5] + 0x68))(plVar5 + 5,local_158);
          FWorldPartitionDebugHelper::DrawText
                    (pUVar21,pFVar14,pUVar13,(FColor *)&local_1a8,
                     (TVector2<double> *)&local_1b8._s_0,(float *)&local_1c0);
          uVar6 = (double)fVar27;
          if ((double)fVar27 <= local_1b8._s_0.Y) {
            uVar6 = local_1b8._s_0.Y;
          }
          FVar18.Data = local_158[0];
          if ((double)pUVar21->ClipY < local_1b8._s_0.Y + dVar8) {
            fVar27 = local_1c0._0_4_ + fVar7;
            local_1b8._s_0.Y = (double)fVar26;
            local_1c0 = (longlong *)((ulonglong)local_1c0 & 0xffffffff00000000);
            local_1b8._s_0.X = local_1b8._s_0.X + (double)fVar27;
          }
        }
        if (FVar18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar18.Data);
        }
        plVar10 = plVar10 + 1;
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    EVar23 = EVar23 + LEVEL_UnloadedButStillAround;
    piVar22 = piVar22 + 4;
  } while ((int)EVar23 < 9);
  puVar20 = local_a8 + 2;
  lVar15 = 9;
  (local_198->field0_0x0)._s_0.Y = (double)fVar27;
  do {
    puVar1 = puVar20 + -2;
    puVar20 = puVar20 + -2;
    lVar15 = lVar15 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar15 != 0);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindCellNameForSubObject @ 148ac9c50

FName * __thiscall
UWorldPartitionLevelStreamingPolicy::FindCellNameForSubObject
          (UWorldPartitionLevelStreamingPolicy *this,FString *param_1,bool param_2,FString *param_3,
          UObject **param_4,UObject **param_5)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FName *pFVar5;
  FWeakObjectPtr *pFVar6;
  UObject *pUVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FWeakObjectPtr *this_00;
  UObject **ppUVar10;
  FName local_res8;
  FName local_res10;
  char local_res18;
  FString *local_res20;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  ppUVar10 = param_5;
  pFVar5 = (FName *)0x0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  *param_4 = (UObject *)0x0;
  *param_5 = (UObject *)0x0;
  local_90.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar9 = (longlong)local_90.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (local_90.Data.ArrayNum == 0) {
    local_90.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&local_90,local_90.Data.ArrayNum,
               &local_90.Data.ArrayMax);
    memcpy(local_90.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  ::FString::FString(local_60,L".");
  ::FString::Split(param_1,local_60,&local_90,&local_70);
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  ::FString::operator=(param_3,param_1);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar8.Data = local_90.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(&local_res8,(wchar_t *)FVar8.Data);
  pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->SubObjectsToCellRemapping,*pFVar4);
  if (pFVar4 == (FName *)0x0) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar8.Data = local_90.Data.AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res10,(wchar_t *)FVar8.Data);
    pFVar6 = &TMapBase<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>_>
              ::Find((TMapBase<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>_>
                      *)&this->SubObjectsToExternalStreamingObjectsRemapping,*pFVar4)->WeakPtr;
    if ((pFVar6 != (FWeakObjectPtr *)0x0) && (bVar3 = FWeakObjectPtr::IsValid(pFVar6), bVar3)) {
      pUVar7 = FWeakObjectPtr::Get(pFVar6);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_90.Data.ArrayNum != 0) {
        FVar8.Data = local_90.Data.AllocatorInstance.Data;
      }
      pFVar4 = ::FName::FName(&local_98,(wchar_t *)FVar8.Data);
      pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)&pUVar7[1].field_0x10,*pFVar4);
      ppUVar10 = param_5;
      if (pFVar4 != (FName *)0x0) {
        pUVar7 = (UObject *)
                 (**(code **)(*(longlong *)&pUVar7[1].field_0x8 + 0x28))(&pUVar7[1].field_0x8);
        *param_4 = pUVar7;
        pUVar7 = FWeakObjectPtr::Get(pFVar6);
        *param_5 = pUVar7;
        pFVar5 = pFVar4;
        goto LAB_148ac9ed9;
      }
    }
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_res18 != '\0') {
      bVar3 = FWorldPartitionRuntimeContainerResolver::ResolveContainerPath
                        (&this->ContainerResolver,param_1,&local_80);
      if (!bVar3) {
        this_00 = (FWeakObjectPtr *)(this->ExternalStreamingObjects).AllocatorInstance.Data;
        iVar1 = (this->ExternalStreamingObjects).ArrayNum;
        pFVar6 = this_00 + iVar1;
        do {
          if ((this->ExternalStreamingObjects).ArrayNum != iVar1) {
            `TCheckedPointerIterator<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&param_5);
          }
          if (this_00 == pFVar6) goto LAB_148ac9ecf;
          bVar3 = FWeakObjectPtr::IsValid(this_00);
          if (bVar3) {
            pUVar7 = FWeakObjectPtr::Get(this_00);
            bVar3 = FWorldPartitionRuntimeContainerResolver::ResolveContainerPath
                              ((FWorldPartitionRuntimeContainerResolver *)&pUVar7[3].field_0x10,
                               param_1,&local_80);
            if (bVar3) break;
          }
          this_00 = this_00 + 1;
        } while( true );
      }
      pFVar5 = FindCellNameForSubObject(this,&local_80,false,local_res20,param_4,ppUVar10);
    }
LAB_148ac9ecf:
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((this->_padding_ & 0x10) == 0) {
      pFVar5 = (FName *)this->_padding_;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3241921295901786207>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                         ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FName *)(*pcVar2)();
        return pFVar5;
      }
    }
    *ppUVar10 = (UObject *)pFVar5[6];
    pFVar5 = pFVar4;
  }
LAB_148ac9ed9:
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return pFVar5;
}

// ForEachActiveRuntimeCell @ 148aca000

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
UWorldPartitionLevelStreamingPolicy::ForEachActiveRuntimeCell
          (UWorldPartitionLevelStreamingPolicy *this,
          TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UWorld *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong local_res8;
  
  pUVar4 = UWorldPartition::GetWorld((UWorldPartition *)this->_padding_);
  pFVar8 = (pUVar4->StreamingLevels).AllocatorInstance.Data;
  iVar2 = (pUVar4->StreamingLevels).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar4->StreamingLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar8 == pFVar1) break;
    plVar5 = (longlong *)(**(code **)(**(longlong **)pFVar8 + 0x2b0))();
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
      if (lVar6 != 0) {
        pUVar7 = UWorldPartitionRuntimeCell::StaticClass();
        iVar3 = (int)pUVar7->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar7->_padding_)) {
          local_res8 = lVar6;
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 148acf430

UClass * __cdecl UWorldPartitionLevelStreamingPolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionLevelStreamingPolicy",
               &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton,
               StaticRegisterNativesUWorldPartitionLevelStreamingPolicy,0x568,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionLevelStreamingPolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingPolicy>,local_res8,
               UWorldPartitionStreamingPolicy::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton;
}

// GetResourceSizeEx @ 148ad0f80

void __thiscall
UWorldPartitionLevelStreamingPolicy::GetResourceSizeEx
          (UWorldPartitionLevelStreamingPolicy *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  uVar1 = *(uint *)&(this->SubObjectsToCellRemapping).field_0x48;
  if (uVar1 < 2) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->SubObjectsToCellRemapping).field_0x2c;
  iVar3 = *(int *)&(this->SubObjectsToCellRemapping).field_0xc;
  uVar4 = FWorldPartitionRuntimeContainerResolver::GetAllocatedSize(&this->ContainerResolver);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,lVar5 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x18 + uVar4
            );
  return;
}

// GetSubObject @ 148ad1a60

UObject * __thiscall
UWorldPartitionLevelStreamingPolicy::GetSubObject
          (UWorldPartitionLevelStreamingPolicy *this,wchar_t *param_1)

{
  FName *this_00;
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  int iVar6;
  bool bVar7;
  UObject *local_res18;
  UObject *local_res20;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId287,"UWorldPartitionLevelStreamingPolicy::GetSubObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingPolicy.cpp"
               ,0x11f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId287);
  }
  ::FString::FString((FString *)&local_48,param_1);
  UWorld::RemovePIEPrefix(&local_38,(FString *)&local_48,(int *)0x0);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pUVar5 = (UObject *)0x0;
  iVar6 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_res20 = (UObject *)0x0;
  local_res18 = (UObject *)0x0;
  this_00 = FindCellNameForSubObject(this,&local_38,true,&local_58,&local_res20,&local_res18);
  if (this_00 == (FName *)0x0) goto LAB_148ad1bfb;
  pFVar1 = ::FName::ToString(this_00,(FString *)&local_28);
  local_48.Size = 0;
  if ((pFVar1->Data).ArrayNum == 0) {
    local_48.DataPtr = L"";
LAB_148ad1b59:
    sVar2 = wcslen(local_48.DataPtr);
    local_48.Size = (int)sVar2;
  }
  else {
    local_48.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_148ad1b59;
  }
  pUVar4 = local_res18;
  pUVar3 = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
  pUVar4 = StaticFindObject(pUVar3,pUVar4,&local_48,None);
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (((pUVar4 == (UObject *)0x0) || (*(longlong *)&pUVar4[4].field_0x10 == 0)) ||
     (pUVar4 = *(UObject **)(*(longlong *)&pUVar4[4].field_0x10 + 0x1b0), pUVar5 = (UObject *)0x0,
     pUVar4 == (UObject *)0x0)) goto LAB_148ad1bfb;
  if (local_58.Data.ArrayNum == 0) {
    local_48.DataPtr = L"";
LAB_148ad1bcb:
    sVar2 = wcslen(local_48.DataPtr);
    iVar6 = (int)sVar2;
  }
  else {
    local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_148ad1bcb;
  }
  local_48.Size = iVar6;
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  local_28.DataPtr = local_48.DataPtr;
  local_28.Size = local_48.Size;
  local_28._12_4_ = local_48._12_4_;
  pUVar5 = StaticFindObject(pUVar3,pUVar4,&local_28,None);
LAB_148ad1bfb:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar5;
}

// InjectExternalStreamingObject @ 148ad2400

bool __thiscall
UWorldPartitionLevelStreamingPolicy::InjectExternalStreamingObject
          (UWorldPartitionLevelStreamingPolicy *this,
          URuntimeHashExternalStreamingObjectBase *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  FWeakObjectPtr *pFVar7;
  code *pcVar8;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  TPairInitializer<FName_const_&,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_&&>
  local_f8;
  URuntimeHashExternalStreamingObjectBase *local_e8;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined8 *local_80;
  FWeakObjectPtr *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_44;
  
  pTVar3 = &this->ExternalStreamingObjects;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_108.ObjectIndex = 0;
  local_108.ObjectSerialNumber = 0;
  local_f8.Value = (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *)param_1
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_f8.Value);
  pFVar7 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
  if (((pFVar7 <= &local_108) && (&local_108 < pFVar7 + (this->ExternalStreamingObjects).ArrayMax))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  iVar12 = (this->ExternalStreamingObjects).ArrayNum;
  piVar1 = &(this->ExternalStreamingObjects).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar3->AllocatorInstance,piVar1);
  }
  puVar2 = &(param_1->SubObjectsToCellRemapping).field_0x10;
  (this->ExternalStreamingObjects).ArrayNum = iVar12 + 1;
  local_e0 = &param_1->SubObjectsToCellRemapping;
  iStack_d8 = 0;
  uStack_d4 = 1;
  local_c0 = 0;
  *(FWeakObjectPtr *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_108;
  iVar12 = *(int *)&(param_1->SubObjectsToCellRemapping).field_0x28;
  iStack_c4 = iStack_d8;
  if (iVar12 != 0) {
    puVar17 = *(uint **)&(param_1->SubObjectsToCellRemapping).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    local_c0 = 0;
    iStack_d8 = 0;
    while (uVar14 == 0) {
      lVar13 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_148ad258f;
      uVar14 = puVar17[lVar13 + 1];
    }
    uStack_d4 = -uVar14 & uVar14;
    uVar5 = (ulonglong)uStack_d4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iStack_c4 = local_res20 + -1 + local_c0;
    if (iVar12 < iStack_c4) {
      iStack_c4 = iVar12;
    }
  }
LAB_148ad258f:
  uVar14 = *(uint *)&(param_1->SubObjectsToCellRemapping).field_0x28;
  uStack_bc = local_44;
  iStack_b8 = *(int *)&(param_1->SubObjectsToCellRemapping).field_0x8 -
              *(int *)&(param_1->SubObjectsToCellRemapping).field_0x34;
  uVar18 = uVar14 & 0xffffffe0;
  uStack_c8 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_a8._28_4_ = local_44;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_d0 = puVar2;
  local_b0 = local_e0;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar12 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar6 = *(uint *)&(param_1->SubObjectsToCellRemapping).field_0x28;
  if (uVar14 != uVar6) {
    puVar16 = *(undefined1 **)&(param_1->SubObjectsToCellRemapping).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148ad268b;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar14) {
      uVar14 = uVar6;
    }
  }
LAB_148ad268b:
  while( true ) {
    pTVar9 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_a8.CurrentBitIndex == uVar14) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar9 == &param_1->SubObjectsToCellRemapping)) break;
    puVar4 = (undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_a8.CurrentBitIndex * 0x18);
    local_70 = *puVar4;
    uStack_68 = puVar4[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_e8);
    local_80 = &local_70;
    local_78 = &local_100;
    TSet<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->SubObjectsToExternalStreamingObjectsRemapping,&local_f8,(bool *)&local_80);
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  return true;
}

// IsStreamingCompleted @ 148ad46b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWorldPartitionLevelStreamingPolicy::IsStreamingCompleted
          (UWorldPartitionLevelStreamingPolicy *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelStreaming *this_00;
  ULevel *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UWorld *this_01;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_01 == (UWorld *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingPolicy.cpp"
                       ,0x26,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  bVar5 = UWorld::IsGameWorld(this_01);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("World->IsGameWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingPolicy.cpp"
                       ,0x27,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  bVar5 = UWorldPartitionStreamingPolicy::IsStreamingCompleted
                    ((UWorldPartitionStreamingPolicy *)this,param_1);
  if (bVar5) {
    if (param_1 == (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar7 = (this_01->StreamingLevels).AllocatorInstance.Data;
      iVar2 = (this_01->StreamingLevels).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      do {
        if ((this_01->StreamingLevels).ArrayNum != iVar2) {
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar7 == pFVar1) break;
        this_00 = *(ULevelStreaming **)pFVar7;
        if (((this_00 != (ULevelStreaming *)0x0) &&
            (pUVar3 = (this_00->LoadedLevel).field0_0x0.DebugPtr, pUVar3 != (ULevel *)0x0)) &&
           (*(longlong *)&(pUVar3->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 != 0)) {
          bVar5 = ULevelStreaming::IsStreamingStatePending(this_00);
          if (bVar5) goto LAB_148ad47a8;
        }
        pFVar7 = pFVar7 + 8;
      } while( true );
    }
    bVar5 = true;
  }
  else {
LAB_148ad47a8:
    bVar5 = false;
  }
  return bVar5;
}

// RemoveExternalStreamingObject @ 148ad84d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UWorldPartitionLevelStreamingPolicy::RemoveExternalStreamingObject
          (UWorldPartitionLevelStreamingPolicy *this,
          URuntimeHashExternalStreamingObjectBase *param_1)

{
  FName *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UPackage *pUVar13;
  UObject *pUVar14;
  longlong lVar15;
  FWeakObjectPtr *pFVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  undefined4 local_res8 [2];
  int local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined4 uStack_dc;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  URuntimeHashExternalStreamingObjectBase *local_c0;
  FString local_b8;
  FString local_a8;
  FName local_98;
  FName FStack_90;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  
  local_res8[0] = 0;
  local_88 = &param_1->SubObjectsToCellRemapping;
  iVar12 = *(int *)&(param_1->SubObjectsToCellRemapping).field_0x28;
  bVar6 = false;
  bVar5 = false;
  iVar19 = 0;
  uVar10 = 1;
  iVar21 = 0;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar22 = *(uint **)&(param_1->SubObjectsToCellRemapping).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(param_1->SubObjectsToCellRemapping).field_0x10;
    }
    uVar18 = *puVar22;
    iVar19 = 0;
    iVar21 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_148ad8581;
      uVar18 = puVar22[lVar15 + 1];
    }
    uVar10 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar11 = iVar21 + -1 + local_res10;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_148ad8581:
  TStack_80.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SubObjectsToCellRemapping).field_0x10;
  uVar18 = *(uint *)&(param_1->SubObjectsToCellRemapping).field_0x28;
  uVar23 = uVar18 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar10,iVar19);
  TStack_80.CurrentBitIndex = iVar11;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_80._28_4_ = iVar11;
  TStack_80.BaseBitIndex = iVar21;
  uStack_60 = CONCAT44(uStack_dc,
                       *(int *)&(param_1->SubObjectsToCellRemapping).field_0x8 -
                       *(int *)&(param_1->SubObjectsToCellRemapping).field_0x34);
  if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&(param_1->SubObjectsToCellRemapping).field_0x28;
  if (uVar18 != uVar10) {
    puVar20 = *(undefined1 **)&(param_1->SubObjectsToCellRemapping).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(param_1->SubObjectsToCellRemapping).field_0x10;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_148ad868b;
      uVar18 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar23;
    if ((int)uVar10 < (int)uVar18) {
      uVar18 = uVar10;
    }
  }
LAB_148ad868b:
  do {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar18) &&
        (TStack_80.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SubObjectsToCellRemapping).field_0x10))
       && (pTVar7 == &param_1->SubObjectsToCellRemapping)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_c0 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_c0);
      TArray<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
      ::RemoveSwap(&this->ExternalStreamingObjects,
                   (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *)
                   &local_res20,Default);
      return true;
    }
    pFVar1 = (FName *)(*(longlong *)pTVar7 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    FVar4 = *pFVar1;
    FStack_90 = pFVar1[1];
    local_98 = FVar4;
    uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    if (*(int *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x8 !=
        *(int *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x34) {
      puVar20 = *(undefined1 **)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x40;
      puVar17 = &(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x38;
      if (puVar20 != (undefined1 *)0x0) {
        puVar17 = puVar20;
      }
      iVar12 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x48 -
                        1U & FVar4.Number + uVar10) * 4);
      if (iVar12 != -1) {
        do {
          lVar15 = *(longlong *)&this->SubObjectsToExternalStreamingObjectsRemapping +
                   (longlong)iVar12 * 0x18;
          if (*(FName *)(*(longlong *)&this->SubObjectsToExternalStreamingObjectsRemapping +
                        (longlong)iVar12 * 0x18) == FVar4) {
            pFVar16 = (FWeakObjectPtr *)(lVar15 + 8);
            if (lVar15 == 0) {
              pFVar16 = (FWeakObjectPtr *)0x0;
            }
            if (pFVar16 != (FWeakObjectPtr *)0x0) {
              local_res18 = *pFVar16;
              if ((4 < (byte)LogWorldPartition._0_1_) &&
                 (bVar8 = TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>::
                          UEOpEquals<URuntimeHashExternalStreamingObjectBase,bool>
                                    ((TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>
                                      *)&local_res18,param_1), !bVar8)) {
                pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
                if (pUVar13 != (UPackage *)0x0) {
                  pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
                  bVar6 = true;
                  local_d8 = (FName)pUVar13->_padding_;
                  ::FName::ToString(&local_d8,&local_a8);
                }
                bVar8 = FWeakObjectPtr::IsValid(&local_res18);
                if (bVar8) {
                  pUVar14 = FWeakObjectPtr::Get(&local_res18);
                  pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar14);
                  if (pUVar13 != (UPackage *)0x0) {
                    pUVar14 = FWeakObjectPtr::Get(&local_res18);
                    pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar14);
                    bVar5 = true;
                    local_d0 = (FName)pUVar13->_padding_;
                    ::FName::ToString(&local_d0,&local_b8);
                  }
                }
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
                if ((bVar5) &&
                   (bVar5 = false,
                   local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                if ((bVar6) &&
                   (bVar6 = false,
                   local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
              }
              FVar4 = local_98;
              local_c8 = local_98;
              if (*(int *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x8 !=
                  *(int *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x34) {
                uVar10 = ::GetTypeHash(local_98.ComparisonIndex.Value);
                TSet<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                     *)&this->SubObjectsToExternalStreamingObjectsRemapping,
                                    FVar4.Number + uVar10,&local_c8);
              }
              goto LAB_148ad8901;
            }
            break;
          }
          iVar12 = *(int *)(lVar15 + 0x10);
        } while (iVar12 != -1);
      }
    }
    if (4 < (byte)LogWorldPartition._0_1_) {
      ::FName::ToString(&local_98,&local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
LAB_148ad8901:
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// StaticRegisterNativesUWorldPartitionLevelStreamingPolicy @ 148adb870

void __cdecl
UWorldPartitionLevelStreamingPolicy::StaticRegisterNativesUWorldPartitionLevelStreamingPolicy(void)

{
  return;
}

