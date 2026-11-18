// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticStruct @ 14758acf0

UScriptStruct * __cdecl FPrimaryAssetTypeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo,(UObject *)pUVar1,
                         L"PrimaryAssetTypeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.OuterSingleton;
}

// FPrimaryAssetTypeInfo @ 1475a5260

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetTypeInfo * __thiscall
FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo
          (FPrimaryAssetTypeInfo *this,FPrimaryAssetTypeInfo *param_1)

{
  TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  FSoftObjectPath *pFVar8;
  EPrimaryAssetCookRule EVar9;
  undefined2 uVar10;
  
  this->PrimaryAssetType = param_1->PrimaryAssetType;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr =
       *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x8);
  pUVar6 = (param_1->AssetBaseClassLoaded).field0_0x0.DebugPtr;
  (this->AssetBaseClassLoaded).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar1 = &this->Directories;
  this->bHasBlueprintClasses = param_1->bHasBlueprintClasses;
  this->bIsEditorOnly = param_1->bIsEditorOnly;
  piVar2 = &(this->Directories).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Directories).ArrayNum;
  pFVar7 = (param_1->Directories).AllocatorInstance.Data;
  (this->Directories).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FDirectoryPath,FDirectoryPath,int>
              ((pTVar1->AllocatorInstance).Data,(FDirectoryPath *)pFVar7,iVar5);
  }
  pTVar3 = &this->SpecificAssets;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SpecificAssets).ArrayMax;
  iVar5 = (param_1->SpecificAssets).ArrayNum;
  pFVar8 = (FSoftObjectPath *)(param_1->SpecificAssets).AllocatorInstance.Data;
  (this->SpecificAssets).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar5);
  }
  iVar5 = (param_1->Rules).ChunkId;
  pTVar4 = &this->AssetScanPaths;
  (this->Rules).Priority = (param_1->Rules).Priority;
  (this->Rules).ChunkId = iVar5;
  EVar9 = (param_1->Rules).CookRule;
  uVar10 = *(undefined2 *)&(param_1->Rules).field_0xa;
  (this->Rules).bApplyRecursively = (param_1->Rules).bApplyRecursively;
  (this->Rules).CookRule = EVar9;
  *(undefined2 *)&(this->Rules).field_0xa = uVar10;
  piVar2 = &(this->AssetScanPaths).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->AssetScanPaths).ArrayNum;
  pFVar7 = (param_1->AssetScanPaths).AllocatorInstance.Data;
  (this->AssetScanPaths).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FString,FString,int>((pTVar4->AllocatorInstance).Data,(FString *)pFVar7,iVar5);
  }
  this->bIsDynamicAsset = param_1->bIsDynamicAsset;
  this->NumberOfAssets = param_1->NumberOfAssets;
  return this;
}

// FPrimaryAssetTypeInfo @ 1475a5400

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetTypeInfo * __thiscall
FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(FPrimaryAssetTypeInfo *this)

{
  undefined1 *this_00;
  UClass *pUVar1;
  UClass *local_res8;
  
  (this->PrimaryAssetType).ComparisonIndex = 0;
  (this->PrimaryAssetType).Number = 0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = &(this->AssetBaseClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FSoftObjectPtr::operator=(&(this->AssetBaseClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  (this->AssetBaseClassLoaded).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bHasBlueprintClasses = false;
  this->bIsEditorOnly = false;
  (this->Directories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Directories).ArrayNum = 0;
  (this->Directories).ArrayMax = 0;
  (this->SpecificAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecificAssets).ArrayNum = 0;
  (this->SpecificAssets).ArrayMax = 0;
  (this->AssetScanPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetScanPaths).ArrayNum = 0;
  (this->AssetScanPaths).ArrayMax = 0;
  this->bIsDynamicAsset = false;
  this->NumberOfAssets = 0;
  (this->Rules).Priority = -1;
  (this->Rules).ChunkId = -1;
  (this->Rules).bApplyRecursively = true;
  (this->Rules).CookRule = Unknown;
  return this;
}

// ~FPrimaryAssetTypeInfo @ 1475a9de0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(FPrimaryAssetTypeInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AssetScanPaths).AllocatorInstance.Data,
             (this->AssetScanPaths).ArrayNum);
  pFVar1 = (this->AssetScanPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->SpecificAssets).AllocatorInstance.Data,
             (this->SpecificAssets).ArrayNum);
  pFVar1 = (this->SpecificAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)(this->Directories).AllocatorInstance.Data,
             (this->Directories).ArrayNum);
  pFVar1 = (this->Directories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AssetBaseClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 1475ab190

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetTypeInfo * __thiscall
FPrimaryAssetTypeInfo::operator=(FPrimaryAssetTypeInfo *this,FPrimaryAssetTypeInfo *param_1)

{
  TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FSoftObjectPath *pFVar7;
  EPrimaryAssetCookRule EVar8;
  undefined2 uVar9;
  
  this->PrimaryAssetType = param_1->PrimaryAssetType;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr =
       *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->AssetBaseClassLoaded).field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->AssetBaseClassLoaded).field0_0x0 = (param_1->AssetBaseClassLoaded).field0_0x0;
  pTVar1 = &this->Directories;
  this->bHasBlueprintClasses = param_1->bHasBlueprintClasses;
  this->bIsEditorOnly = param_1->bIsEditorOnly;
  if (pTVar1 != &param_1->Directories) {
    DestructItems<FDirectoryPath,int>
              ((FDirectoryPath *)(pTVar1->AllocatorInstance).Data,(this->Directories).ArrayNum);
    iVar4 = (param_1->Directories).ArrayNum;
    piVar2 = &(this->Directories).ArrayMax;
    pFVar6 = (param_1->Directories).AllocatorInstance.Data;
    (this->Directories).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FDirectoryPath,FDirectoryPath,int>
                ((pTVar1->AllocatorInstance).Data,(FDirectoryPath *)pFVar6,iVar4);
    }
  }
  pTVar3 = &this->SpecificAssets;
  if (pTVar3 != &param_1->SpecificAssets) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(pTVar3->AllocatorInstance).Data,(this->SpecificAssets).ArrayNum);
    iVar4 = (param_1->SpecificAssets).ArrayNum;
    piVar2 = &(this->SpecificAssets).ArrayMax;
    pFVar7 = (FSoftObjectPath *)(param_1->SpecificAssets).AllocatorInstance.Data;
    (this->SpecificAssets).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar4);
    }
  }
  iVar4 = (param_1->Rules).ChunkId;
  (this->Rules).Priority = (param_1->Rules).Priority;
  (this->Rules).ChunkId = iVar4;
  EVar8 = (param_1->Rules).CookRule;
  uVar9 = *(undefined2 *)&(param_1->Rules).field_0xa;
  (this->Rules).bApplyRecursively = (param_1->Rules).bApplyRecursively;
  (this->Rules).CookRule = EVar8;
  *(undefined2 *)&(this->Rules).field_0xa = uVar9;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->AssetScanPaths,&param_1->AssetScanPaths);
  this->bIsDynamicAsset = param_1->bIsDynamicAsset;
  this->NumberOfAssets = param_1->NumberOfAssets;
  return this;
}

// CanModifyConfigData @ 1475b7030

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall FPrimaryAssetTypeInfo::CanModifyConfigData(FPrimaryAssetTypeInfo *this)

{
  return (this->AssetScanPaths).ArrayNum == 0;
}

// FillRuntimeData @ 1475c8250

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
FPrimaryAssetTypeInfo::FillRuntimeData(FPrimaryAssetTypeInfo *this,bool *param_1,bool *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FSoftObjectPath *pFVar7;
  FScriptContainerElement *pFVar8;
  FSoftObjectPath *this_00;
  FScriptContainerElement *pFVar9;
  FPrimaryAssetTypeInfo *local_res8;
  FString local_38;
  
  *param_2 = false;
  *param_1 = false;
  local_res8 = (FPrimaryAssetTypeInfo *)0x0;
  if (this->PrimaryAssetType == (FName)0x0) {
    return;
  }
  if ((*(longlong *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 == 0) &&
     (local_res8 = this,
     bVar2 = `FPrimaryAssetTypeInfo::FillRuntimeData'::__l6::<lambda_1>::operator()(&local_res8),
     !bVar2)) {
    return;
  }
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr = 0;
  pUVar4 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssetBaseClass);
  if (pUVar4 == (UClass *)0x0) {
LAB_1475c830d:
    pUVar4 = (UClass *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar5->_padding_)) ||
       (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 == (UClass *)0x0))
    goto LAB_1475c830d;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1475c830d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    (this->AssetBaseClassLoaded).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UClass *)0x0) {
      *param_2 = true;
      pUVar4 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssetBaseClass);
      if (pUVar4 == (UClass *)0x0) {
        if (*(longlong *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 != 0) {
          FSoftObjectPath::TryLoad
                    ((FSoftObjectPath *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8,
                     (FUObjectSerializeContext *)0x0);
          pUVar4 = (UClass *)
                   TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)&this->AssetBaseClass);
          goto LAB_1475c83c7;
        }
LAB_1475c841d:
        pUVar4 = (UClass *)0x0;
      }
      else {
LAB_1475c83c7:
        if (pUVar4 == (UClass *)0x0) goto LAB_1475c841d;
        pUVar5 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if (((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar5->_padding_)) ||
           (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 == (UClass *)0x0))
        goto LAB_1475c841d;
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1475c841d;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->AssetBaseClassLoaded).field0_0x0.DebugPtr = pUVar4;
      if ((pUVar4 == (UClass *)0x0) &&
         (local_res8 = this,
         bVar2 = `FPrimaryAssetTypeInfo::FillRuntimeData'::__l12::<lambda_2>::operator()
                           (&local_res8), !bVar2)) {
        *param_2 = false;
        return;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->AssetBaseClassLoaded).field0_0x0.DebugPtr = pUVar4;
  }
  this_00 = (FSoftObjectPath *)(this->SpecificAssets).AllocatorInstance.Data;
  iVar1 = (this->SpecificAssets).ArrayNum;
  pFVar7 = this_00 + iVar1;
  while( true ) {
    if ((this->SpecificAssets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar7) break;
    if ((this_00->AssetPath).PackageName != (FName)0x0) {
      pFVar6 = FSoftObjectPath::ToString(this_00,&local_38);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                (&this->AssetScanPaths,pFVar6);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    this_00 = this_00 + 1;
  }
  iVar1 = (this->Directories).ArrayNum;
  pFVar9 = (this->Directories).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Directories).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDirectoryPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar9 == pFVar8) break;
    if (1 < *(int *)(pFVar9 + 8)) {
      pFVar6 = UAssetManager::GetNormalizedPackagePath(&local_38,(FString *)pFVar9,false);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                (&this->AssetScanPaths,pFVar6);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  if (((this->PrimaryAssetType == (FName)0x0) ||
      ((this->AssetBaseClassLoaded).field0_0x0.DebugPtr == (UClass *)0x0)) ||
     (((this->AssetScanPaths).ArrayNum == 0 &&
      (0 < (this->SpecificAssets).ArrayNum + (this->Directories).ArrayNum)))) {
    local_res8 = this;
    bVar3 = `FPrimaryAssetTypeInfo::FillRuntimeData'::__l2::<lambda_3>::operator()(&local_res8);
    bVar2 = false;
    if (!bVar3) goto LAB_1475c84fc;
  }
  bVar2 = true;
LAB_1475c84fc:
  *param_1 = bVar2;
  return;
}

// HasValidConfigData @ 1475e0170

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall FPrimaryAssetTypeInfo::HasValidConfigData(FPrimaryAssetTypeInfo *this)

{
  if (this->PrimaryAssetType != (FName)0x0) {
    return *(longlong *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 != 0;
  }
  return false;
}

// HasValidRuntimeData @ 1475e0190

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall FPrimaryAssetTypeInfo::HasValidRuntimeData(FPrimaryAssetTypeInfo *this)

{
  if ((this->PrimaryAssetType != (FName)0x0) &&
     ((this->AssetBaseClassLoaded).field0_0x0.DebugPtr != (UClass *)0x0)) {
    if ((this->AssetScanPaths).ArrayNum == 0) {
      return (this->SpecificAssets).ArrayNum + (this->Directories).ArrayNum < 1;
    }
    return true;
  }
  return false;
}

// operator() @ 15050cd40

bool __thiscall `FPrimaryAssetTypeInfo::FillRuntimeData'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8679300195571204163>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8679300195571204163>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050cda7;
    }
  }
  bVar2 = false;
LAB_15050cda7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15050d160

bool __thiscall `FPrimaryAssetTypeInfo::FillRuntimeData'::__l12::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8679300195571204178>);
  if (bVar4) {
    ::FName::ToString(*(FName **)this,&local_18);
    FSoftObjectPath::ToString((FSoftObjectPath *)(*(longlong *)this + 0x10),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8679300195571204178>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050d1fe;
    }
  }
  bVar4 = false;
LAB_15050d1fe:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15050d250

bool __thiscall `FPrimaryAssetTypeInfo::FillRuntimeData'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8679300195571204201>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8679300195571204201>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050d2b7;
    }
  }
  bVar2 = false;
LAB_15050d2b7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

