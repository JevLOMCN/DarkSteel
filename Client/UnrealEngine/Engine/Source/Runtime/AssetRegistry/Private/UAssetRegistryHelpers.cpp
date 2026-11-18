// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 51

// StaticClass @ 142ab04d0

UClass * __cdecl UAssetRegistryHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistryHelpers",
               &Z_Registration_Info_UClass_UAssetRegistryHelpers.InnerSingleton,
               StaticRegisterNativesUAssetRegistryHelpers,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetRegistryHelpers>,
               InternalVTableHelperCtorCaller<UAssetRegistryHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryHelpers.InnerSingleton;
}

// UAssetRegistryHelpers @ 142ad7f00

UAssetRegistryHelpers * __thiscall
UAssetRegistryHelpers::UAssetRegistryHelpers(UAssetRegistryHelpers *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAssetRegistryHelpers__6B_;
  return this;
}

// UAssetRegistryHelpers @ 142ad7f30

UAssetRegistryHelpers * __thiscall
UAssetRegistryHelpers::UAssetRegistryHelpers
          (UAssetRegistryHelpers *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAssetRegistryHelpers__6B_;
  return this;
}

// ~UAssetRegistryHelpers @ 142adb060

void __thiscall UAssetRegistryHelpers::~UAssetRegistryHelpers(UAssetRegistryHelpers *this)

{
  *(undefined ***)this = &___7UAssetRegistryHelpers__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 142adee00

bool __thiscall
`UAssetRegistryHelpers::GetBlueprintAssets'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  int *piVar1;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *pTVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  pTVar2 = *(TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> **)
            ((longlong)this + 8);
  if ((*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) &&
     (bVar5 = UAssetRegistryHelpers::IsAssetDataBlueprintOfClassSet(param_1,pTVar2), !bVar5)) {
    return true;
  }
  pFVar3 = *(ForAnyElementType **)this;
  if ((((FAssetData *)pFVar3->Data <= param_1) &&
      (param_1 < (FAssetData *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
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
                      (0x868,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar3->Data + (longlong)iVar7 * 0x68),param_1);
  return true;
}

// operator() @ 142ae06f0

bool __thiscall
`UAssetRegistryHelpers::SortByAssetName'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1,FAssetData *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FName::ToString(&param_2->AssetName,&local_18);
  pFVar3 = ::FName::ToString(&param_1->AssetName,&local_28);
  pwVar4 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// CreateAssetData @ 142aee0c0

FAssetData * __cdecl
UAssetRegistryHelpers::CreateAssetData
          (FAssetData *__return_storage_ptr__,UObject *param_1,bool param_2)

{
  char cVar1;
  
  if (param_1 != (UObject *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
    if (cVar1 != '\0') {
      FAssetData::FAssetData(__return_storage_ptr__,param_1,(uint)param_2 * 2);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
  (__return_storage_ptr__->PackagePath).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClass).Number = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
  __return_storage_ptr__->PackageFlags = 0;
  (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
  return __return_storage_ptr__;
}

// FSortingPredicate_DelegateWrapper @ 142af43d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UAssetRegistryHelpers::FSortingPredicate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FAssetData *param_2,
          FAssetData *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *this;
  UFunction *pUVar4;
  undefined1 auStack_138 [32];
  FDestructionSentinel local_118;
  undefined1 local_100 [104];
  FAssetData FStack_98;
  char local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_100._48_4_ = -1;
  local_100._0_4_ = 0;
  local_100._4_4_ = 0;
  local_100._8_4_ = 0;
  local_100._12_4_ = 0;
  local_100._16_4_ = 0;
  local_100._20_4_ = 0;
  local_100._24_4_ = 0;
  local_100._28_4_ = 0;
  local_100._32_4_ = 0;
  local_100._36_4_ = 0;
  local_100._40_4_ = 0;
  local_100._44_4_ = 0;
  local_100._52_4_ = 0;
  local_100._56_8_ = (FAssetDataTagMap *)0x0;
  local_100._64_8_ = (FAssetBundleData *)0x0;
  local_100._72_8_ = (TReferenceControllerBase<1> *)0x0;
  local_100._88_8_ = (ForElementType<int>)0x0;
  local_100._96_4_ = 0;
  FStack_98.PackageName.Number = 0;
  FStack_98.PackagePath.ComparisonIndex.Value = 0;
  FStack_98.PackagePath.Number = 0;
  FStack_98.AssetName.ComparisonIndex.Value = 0;
  FStack_98.AssetName.Number = 0;
  FStack_98.AssetClass.ComparisonIndex.Value = 0;
  FStack_98.AssetClass.Number = 0;
  FStack_98.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  FStack_98.AssetClassPath.PackageName.Number = 0;
  FStack_98.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  FStack_98.AssetClassPath.AssetName.Number = 0;
  FStack_98.PackageFlags = 0;
  FStack_98.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  FStack_98.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  FStack_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_98.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  FStack_98.ChunkIDs.ArrayNum = 0;
  local_30 = '\0';
  stack0xffffffffffffff64 = 2;
  FStack_98.ChunkArrayRegistryHandle.Index = -1;
  FStack_98.ChunkIDs.ArrayMax = 2;
  FAssetData::operator=((FAssetData *)local_100,param_2);
  FAssetData::operator=(&FStack_98,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_118);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar4 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar4,local_100);
  bVar2 = local_30 != '\0';
  if (FStack_98.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FStack_98.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&FStack_98.TagsAndValues);
  if ((ForElementType<int>)local_100._88_8_ != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_100._88_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_100._72_8_);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)(local_100 + 0x38));
  return bVar2;
}

// FindAssetNativeClass @ 142af60e0

/* WARNING: Removing unreachable block (ram,0x000142af6184) */
/* WARNING: Removing unreachable block (ram,0x000142af61e0) */

UClass * __cdecl UAssetRegistryHelpers::FindAssetNativeClass(FAssetData *param_1)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  UClass *pUVar4;
  FName *pFVar5;
  FName local_28;
  FName FStack_20;
  FTopLevelAssetPath local_18;
  
  pUVar4 = FAssetData::GetClass(param_1,No);
  pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (pUVar4 == (UClass *)0x0) {
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UClass *)(*pcVar1)();
      return pUVar4;
    }
    local_28 = (param_1->AssetClassPath).PackageName;
    FStack_20 = (param_1->AssetClassPath).AssetName;
    (**(code **)((longlong)*pIVar2 + 0x138))(pIVar2,&local_28);
    for (pFVar5 = (FName *)0x0; pFVar5 != (FName *)0x0; pFVar5 = pFVar5 + 2) {
      local_28 = *pFVar5;
      FStack_20 = pFVar5[1];
      pUVar4 = Z_Construct_UClass_UClass_NoRegister();
      local_18.PackageName = local_28;
      local_18.AssetName = FStack_20;
      pUVar4 = (UClass *)StaticFindObject(pUVar4,&local_18,None);
      if (pUVar4 != (UClass *)0x0) break;
    }
    if (pUVar4 == (UClass *)0x0) {
      return (UClass *)0x0;
    }
  }
  do {
    if ((pUVar4->ClassFlags & CLASS_Native) != CLASS_None) {
      return pUVar4;
    }
    pUVar4 = (UClass *)pUVar4->_padding_;
  } while (pUVar4 != (UClass *)0x0);
  return (UClass *)0x0;
}

// FindReferencersOfAssetOfClass @ 142af8020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::FindReferencersOfAssetOfClass
          (FAssetIdentifier *param_1,TArrayView<UClass_*_const,int> *param_2,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *this;
  undefined8 *puVar3;
  bool bVar4;
  ulonglong uVar5;
  ForElementType<int> _Dst;
  ulonglong uVar6;
  ForElementType<int> *pFVar7;
  longlong lVar8;
  IAssetRegistry *pIVar9;
  ForElementType<int> _Src;
  undefined8 *puVar10;
  FAssetData *pFVar11;
  undefined1 auStackY_158 [32];
  undefined1 local_118;
  undefined1 local_117 [7];
  FAssetData *local_110;
  undefined8 local_108;
  uint local_100;
  undefined8 *local_f8;
  ulonglong local_f0;
  undefined8 *local_e8;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_e0;
  undefined8 *local_d8;
  IAssetRegistry *local_d0;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FAssetData local_a8;
  ulonglong local_40;
  
  pIVar9 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_d0 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_e0 = param_3;
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_ac = 1;
  local_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_c8 = 0;
  (**(code **)((longlong)*pIVar9 + 0x100))(pIVar9,param_1,&local_f8);
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  uVar5 = (ulonglong)(int)(uint)local_f0;
  local_d8 = local_f8 + uVar5 * 4;
  local_100 = (uint)local_f0;
  uVar6 = uVar5;
  puVar10 = local_f8;
  do {
    puVar3 = local_d8;
    local_e8 = puVar10;
    if ((int)uVar5 != (int)uVar6) {
      `TCheckedPointerIterator<FAssetIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_118);
    }
    if (puVar10 == puVar3) {
      if (local_f8 != (undefined8 *)0x0) {
        FMemory::Free(local_f8);
      }
      return;
    }
    uStack_c4 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_c0 = *(undefined4 *)(puVar10 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar10 + 0xc);
    local_b8 = (void *)puVar10[2];
    uStack_b0 = *(undefined4 *)(puVar10 + 3);
    uStack_ac = *(undefined4 *)((longlong)puVar10 + 0x1c);
    local_c8 = (undefined2)*(undefined4 *)puVar10;
    uStack_c6 = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
    local_110 = (FAssetData *)0x0;
    local_108 = 0;
    (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,*puVar10,&local_110);
    this = local_e0;
    iVar2 = (int)local_108;
    pFVar11 = local_110 + (int)local_108;
    pFVar7 = &(local_110->ChunkIDs).AllocatorInstance.SecondaryData;
    while( true ) {
      if ((int)local_108 != iVar2) {
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_117);
      }
      if ((FAssetData *)(pFVar7 + -0xb) == pFVar11) break;
      local_a8.PackageName = ((FAssetData *)(pFVar7 + -0xb))->PackageName;
      local_a8.AssetClassPath.PackageName = *(FName *)(pFVar7 + -7);
      local_a8.AssetClassPath.AssetName = *(FName *)(pFVar7 + -6);
      local_a8.PackagePath = *(FName *)(pFVar7 + -10);
      local_a8.AssetName = *(FName *)(pFVar7 + -9);
      local_a8.AssetClass = *(FName *)(pFVar7 + -8);
      local_a8.ChunkArrayRegistryHandle.Index = *(int *)(pFVar7 + -5);
      local_a8.PackageFlags = *(uint *)&pFVar7[-5].field_0x4;
      FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                (&local_a8.TagsAndValues,(FAssetDataTagMapSharedView *)(pFVar7 + -4));
      local_a8.TaggedAssetBundles.Object = *(FAssetBundleData **)(pFVar7 + -3);
      local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar7 + -2);
      if ((ForElementType<int>)local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController
          != (ForElementType<int>)0x0) {
        LOCK();
        *(int *)((longlong)local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController + 8)
             = *(int *)((longlong)
                        local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController + 8) +
               1;
        UNLOCK();
      }
      local_a8.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_a8.ChunkIDs.ArrayNum = *(int *)(pFVar7 + 1);
      lVar8 = (longlong)local_a8.ChunkIDs.ArrayNum;
      _Src = *pFVar7;
      if (*pFVar7 == (ForElementType<int>)0x0) {
        _Src = (ForElementType<int>)(pFVar7 + -1);
      }
      if (local_a8.ChunkIDs.ArrayNum == 0) {
        local_a8.ChunkIDs.ArrayMax = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,local_a8.ChunkIDs.ArrayNum,0,&local_a8.ChunkIDs.AllocatorInstance,
                   local_a8.ChunkIDs.ArrayNum,&local_a8.ChunkIDs.ArrayMax);
        _Dst = (ForElementType<int>)&local_a8.ChunkIDs;
        if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          _Dst = local_a8.ChunkIDs.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)_Src,lVar8 << 2);
      }
      if (param_2->ArrayNum < 1) {
LAB_142af8260:
        TArray<FAssetData,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FAssetData_const_&>
                  (this,&local_a8);
      }
      else {
        bVar4 = Algo::
                NoneOf<TArrayView<UClass_*_const,int>,_UAssetRegistryHelpers::FindReferencersOfAssetOfClass_::__l14::<lambda_1>_>
                          (param_2,&local_a8);
        if (!bVar4) goto LAB_142af8260;
      }
      if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
      pFVar7 = pFVar7 + 0xd;
    }
    DestructItems<FAssetData,int>(local_110,(int)local_108);
    puVar10 = local_e8;
    if (local_110 != (FAssetData *)0x0) {
      FMemory::Free(local_110);
    }
    uVar5 = local_f0 & 0xffffffff;
    puVar10 = puVar10 + 4;
    uVar6 = (ulonglong)local_100;
    pIVar9 = local_d0;
  } while( true );
}

// FindReferencersOfAssetOfClass @ 142af8310

void __cdecl
UAssetRegistryHelpers::FindReferencersOfAssetOfClass
          (UObject *param_1,TArrayView<UClass_*_const,int> *param_2,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_3)

{
  UPackage *pUVar1;
  TArrayView<UClass_*_const,int> local_38;
  FAssetIdentifier local_28;
  
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.PackageName = (FName)pUVar1->_padding_;
  local_28.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_28.PrimaryAssetType.Name.Number = 0;
  local_28.ObjectName.ComparisonIndex.Value = 0;
  local_28.ObjectName.Number = 0;
  local_28.ValueName.ComparisonIndex.Value = 0;
  local_28.ValueName.Number = 0;
  FindReferencersOfAssetOfClass(&local_28,&local_38,param_3);
  return;
}

// FixupRedirectedAssetPath @ 142af8980

void __cdecl UAssetRegistryHelpers::FixupRedirectedAssetPath(FSoftObjectPath *param_1)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FSoftObjectPath local_108;
  FSoftObjectPath local_e8;
  TStringOverload<FUtf8String> local_c8;
  FTopLevelAssetPath local_b8;
  FString local_a8;
  FUtf8String local_98;
  FTopLevelAssetPath local_88 [2];
  FName local_68 [2];
  FName local_58 [2];
  FName local_48 [2];
  undefined1 local_38 [16];
  void *local_28;
  
  if ((param_1->AssetPath).PackageName != (FName)0x0) {
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
    local_68[0].ComparisonIndex.Value = 0;
    local_68[0].Number = 0;
    FSoftObjectPath::FixupCoreRedirects(param_1);
    pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_b8.PackageName = (param_1->AssetPath).PackageName;
    local_b8.AssetName = (param_1->AssetPath).AssetName;
    local_108.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_108.AssetPath.PackageName.Number = 0;
    local_108.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_108.AssetPath.AssetName.Number = 0;
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x130);
    local_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.SubPathString.Data.ArrayNum = 0;
    local_108.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_108,&local_b8);
    pFVar4 = (FName *)(*pcVar1)(pIVar2,local_38,&local_108);
    local_b8.PackageName = *pFVar4;
    local_b8.AssetName = pFVar4[1];
    pFVar5 = pFVar4 + 2;
    FVar7 = FVar8;
    if (local_68 != pFVar5) {
      FVar7 = *pFVar5;
      pFVar5->ComparisonIndex = 0;
      pFVar5->Number = 0;
      pFVar4[3].ComparisonIndex = 0;
      pFVar4[3].Number = 0;
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
    }
    iVar10 = (param_1->SubPathString).Data.ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    pFVar4 = (FName *)::FString::ConstructFromPtrSize
                                (&local_a8,
                                 (uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,iVar9
                                );
    uVar11 = 0;
    FVar6 = FVar8;
    uVar12 = uVar11;
    if (local_58 != pFVar4) {
      FVar6 = *pFVar4;
      pFVar4->ComparisonIndex = 0;
      pFVar4->Number = 0;
      uVar12 = pFVar4[1].ComparisonIndex.Value;
      pFVar4[1].ComparisonIndex = 0;
      pFVar4[1].Number = 0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_e8.AssetPath.PackageName.Number = 0;
    local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_e8.AssetPath.AssetName.Number = 0;
    local_88[0].PackageName = local_b8.PackageName;
    local_88[0].AssetName = local_b8.AssetName;
    iVar10 = uVar12 - 1;
    if (uVar12 == 0) {
      iVar10 = 0;
    }
    local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.SubPathString.Data.ArrayNum = 0;
    local_e8.SubPathString.Data.ArrayMax = 0;
    pFVar4 = (FName *)FUtf8String::ConstructFromPtrSize(&local_98,(wchar_t *)FVar6,iVar10);
    local_c8.String.Data.ArrayMax = uVar11;
    if (local_48 != pFVar4) {
      FVar8 = *pFVar4;
      pFVar4->ComparisonIndex = 0;
      pFVar4->Number = 0;
      uVar11 = pFVar4[1].ComparisonIndex.Value;
      local_c8.String.Data.ArrayMax = pFVar4[1].Number;
      pFVar4[1].ComparisonIndex = 0;
      pFVar4[1].Number = 0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_c8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar8;
    local_c8.String.Data.ArrayNum = uVar11;
    FSoftObjectPath::SetPath(&local_e8,local_88,&local_c8);
    if (FVar6 != (FName)0x0) {
      FMemory::Free((void *)FVar6);
    }
    FSoftObjectPath::operator=(param_1,&local_e8);
    if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (FVar7 != (FName)0x0) {
      FMemory::Free((void *)FVar7);
    }
  }
  return;
}

// FixupRedirectedAssetPath @ 142af8bc0

void __cdecl UAssetRegistryHelpers::FixupRedirectedAssetPath(FName *param_1)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  IAssetRegistry *pIVar4;
  bool bVar5;
  FString *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  wchar_t *pwVar15;
  FName local_res8;
  FSoftObjectPath local_188;
  FSoftObjectPath local_168;
  FSoftObjectPath local_148;
  TStringOverload<FUtf8String> local_128;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TStringView<wchar_t> local_108;
  FString local_f8;
  FTopLevelAssetPath local_e8;
  FString local_d8;
  FUtf8String local_c8;
  FTopLevelAssetPath local_b8;
  FString local_a8 [2];
  FName local_88 [2];
  FName local_78 [2];
  FName local_68 [2];
  undefined1 local_58 [16];
  void *local_48;
  
  if (*param_1 != (FName)0x0) {
    pFVar6 = ::FName::ToString(param_1,&local_f8);
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
    local_188.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_188.AssetPath.PackageName.Number = 0;
    local_188.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_188.AssetPath.AssetName.Number = 0;
    local_188.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.SubPathString.Data.ArrayNum = 0;
    local_188.SubPathString.Data.ArrayMax = 0;
    local_118 = (pFVar6->Data).AllocatorInstance.Data;
    iVar13 = (pFVar6->Data).ArrayNum;
    iStack_110 = iVar13 + -1;
    if (iVar13 == 0) {
      iStack_110 = 0;
    }
    local_108._12_4_ = uStack_10c;
    local_108.Size = iStack_110;
    local_108.DataPtr = (wchar_t *)local_118;
    FSoftObjectPath::SetPath(&local_188,&local_108);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    pwVar15 = L"";
    if (local_188.AssetPath.PackageName != (FName)0x0) {
      local_88[0].ComparisonIndex.Value = 0;
      local_88[0].Number = 0;
      FSoftObjectPath::FixupCoreRedirects(&local_188);
      pIVar4 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
      if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0)
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                                ,0x111,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_148.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_148.AssetPath.PackageName.Number = 0;
      local_148.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_148.AssetPath.AssetName.Number = 0;
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x130);
      local_e8.PackageName = local_188.AssetPath.PackageName;
      local_e8.AssetName = local_188.AssetPath.AssetName;
      local_148.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.SubPathString.Data.ArrayNum = 0;
      local_148.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_148,&local_e8);
      pFVar7 = (FName *)(*pcVar1)(pIVar4,local_58,&local_148);
      FVar2 = *pFVar7;
      FVar3 = pFVar7[1];
      pFVar8 = pFVar7 + 2;
      FVar10 = FVar11;
      if (local_88 != pFVar8) {
        FVar10 = *pFVar8;
        pFVar8->ComparisonIndex = 0;
        pFVar8->Number = 0;
        pFVar7[3].ComparisonIndex = 0;
        pFVar7[3].Number = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_148.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar14 = 0;
      uVar12 = local_188.SubPathString.Data.ArrayNum - 1;
      if (local_188.SubPathString.Data.ArrayNum == 0) {
        uVar12 = uVar14;
      }
      pFVar7 = (FName *)::FString::ConstructFromPtrSize
                                  (&local_d8,
                                   (uchar *)local_188.SubPathString.Data.AllocatorInstance.Data,
                                   uVar12);
      FVar9 = FVar11;
      uVar12 = uVar14;
      if (local_78 != pFVar7) {
        FVar9 = *pFVar7;
        pFVar7->ComparisonIndex = 0;
        pFVar7->Number = 0;
        uVar12 = pFVar7[1].ComparisonIndex.Value;
        pFVar7[1].ComparisonIndex = 0;
        pFVar7[1].Number = 0;
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_168.AssetPath.PackageName.Number = 0;
      local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_168.AssetPath.AssetName.Number = 0;
      iVar13 = uVar12 - 1;
      if (uVar12 == 0) {
        iVar13 = 0;
      }
      local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.SubPathString.Data.ArrayNum = 0;
      local_168.SubPathString.Data.ArrayMax = 0;
      local_b8.PackageName = FVar2;
      local_b8.AssetName = FVar3;
      pFVar7 = (FName *)FUtf8String::ConstructFromPtrSize(&local_c8,(wchar_t *)FVar9,iVar13);
      local_128.String.Data.ArrayMax = uVar14;
      if (local_68 != pFVar7) {
        FVar11 = *pFVar7;
        pFVar7->ComparisonIndex = 0;
        pFVar7->Number = 0;
        uVar14 = pFVar7[1].ComparisonIndex.Value;
        local_128.String.Data.ArrayMax = pFVar7[1].Number;
        pFVar7[1].ComparisonIndex = 0;
        pFVar7[1].Number = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_128.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
      local_128.String.Data.ArrayNum = uVar14;
      FSoftObjectPath::SetPath(&local_168,&local_b8,&local_128);
      if (FVar9 != (FName)0x0) {
        FMemory::Free((void *)FVar9);
      }
      local_188.AssetPath.PackageName = local_168.AssetPath.PackageName;
      local_188.AssetPath.AssetName = local_168.AssetPath.AssetName;
      if (local_188.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.SubPathString.Data.AllocatorInstance.Data);
      }
      local_188.SubPathString.Data.AllocatorInstance.Data =
           local_168.SubPathString.Data.AllocatorInstance.Data;
      local_188.SubPathString.Data.ArrayNum = local_168.SubPathString.Data.ArrayNum;
      local_188.SubPathString.Data.ArrayMax = local_168.SubPathString.Data.ArrayMax;
      if (FVar10 != (FName)0x0) {
        FMemory::Free((void *)FVar10);
      }
    }
    pFVar6 = FSoftObjectPath::ToString(&local_188,local_a8);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_res8,pwVar15);
    *param_1 = *pFVar7;
    if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
    }
    if (local_188.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetAsset @ 142afbc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * __cdecl UAssetRegistryHelpers::GetAsset(FAssetData *param_1)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ForElementType<FSetElementId> local_70;
  ulonglong local_60;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_58;
  
  local_70.InlineData[0] = '\0';
  local_70.InlineData[1] = '\0';
  local_70.InlineData[2] = '\0';
  local_70.InlineData[3] = '\0';
  local_70._padding_ = 0;
  local_a8._16_8_ = 0;
  uStack_90 = 0;
  local_80 = ___xmm_00000000ffffffff0000008000000000;
  uStack_78 = _UNK_150631d98;
  local_60 = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&local_58,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a8);
  pUVar3 = FAssetData::FastGetAsset(param_1,true,&local_58);
  local_60 = local_60 & 0xffffffff00000000;
  if (local_70.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  iVar1 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  uVar2 = local_80._4_4_;
  uStack_78 = 0xffffffff;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_80 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return pUVar3;
}

// GetAssetRegistry @ 142afbe20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TScriptInterface<IAssetRegistry> * __cdecl
UAssetRegistryHelpers::GetAssetRegistry(TScriptInterface<IAssetRegistry> *__return_storage_ptr__)

{
  UAssetRegistryImpl *pUVar1;
  longlong *plVar2;
  
  pUVar1 = UAssetRegistryImpl::Get();
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAssetRegistryImpl *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UAssetRegistryImpl **)__return_storage_ptr__ = pUVar1;
  plVar2 = &pUVar1->_padding_;
  if (pUVar1 == (UAssetRegistryImpl *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  *(longlong **)&__return_storage_ptr__->field_0x8 = plVar2;
  return __return_storage_ptr__;
}

// GetBlueprintAssets @ 142afc640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAssetRegistryHelpers::GetBlueprintAssets
          (FARFilter *param_1,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  IAssetRegistry *pIVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FName *pFVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  undefined1 auStackY_328 [32];
  FTopLevelAssetPath local_2d8;
  uint local_2c8;
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c0;
  undefined4 local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  FScriptContainerElement *local_2a8;
  int local_2a0;
  int local_29c;
  undefined4 local_298;
  int local_294;
  FTopLevelAssetPath local_290;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  FName local_258;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_250;
  code *local_248;
  FName *local_240;
  FName local_238;
  FName local_230;
  void *local_228;
  undefined8 local_220;
  TBitArray<FDefaultBitArrayAllocator> local_218;
  undefined4 local_1f8;
  int local_1f4;
  undefined1 local_1f0 [8];
  ForAnyElementType local_1e8;
  uint local_1e0;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  TBitArray<FDefaultBitArrayAllocator> local_1c8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  void *local_198;
  ulonglong local_190;
  FARFilter local_188;
  ulonglong local_38;
  
  pIVar7 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_290.AssetName = (FName)param_2;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FARFilter::FARFilter(&local_188,param_1);
  if ((1 < (byte)LogCore._0_1_) && ((param_1->ClassNames).ArrayNum != 0)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  uVar14 = 0;
  local_188.ClassNames.ArrayNum = 0;
  if (local_188.ClassNames.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_188.ClassNames.AllocatorInstance,0,&local_188.ClassNames.ArrayMax);
  }
  FVar21.Data = local_188.ClassPaths.AllocatorInstance.Data;
  iVar10 = local_188.ClassPaths.ArrayNum;
  lVar20 = (longlong)local_188.ClassPaths.ArrayNum;
  local_2a8 = local_188.ClassPaths.AllocatorInstance.Data;
  local_2a0 = local_188.ClassPaths.ArrayNum;
  local_188.ClassPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_29c = local_188.ClassPaths.ArrayMax;
  local_188.ClassPaths.ArrayNum = 0;
  local_188.ClassPaths.ArrayMax = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_218.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_218.NumBits = 0;
  local_218.MaxBits = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  if (local_188.bRecursiveClasses != false) {
    local_1a0 = 0;
    local_1c8.AllocatorInstance.InlineData[0] = '\0';
    local_1c8.AllocatorInstance.InlineData[1] = '\0';
    local_1c8.AllocatorInstance.InlineData[2] = '\0';
    local_1c8.AllocatorInstance.InlineData[3] = '\0';
    local_1c8.AllocatorInstance.InlineData[4] = '\0';
    local_1c8.AllocatorInstance.InlineData[5] = '\0';
    local_1c8.AllocatorInstance.InlineData[6] = '\0';
    local_1c8.AllocatorInstance.InlineData[7] = '\0';
    local_1c8.AllocatorInstance.InlineData[8] = '\0';
    local_1c8.AllocatorInstance.InlineData[9] = '\0';
    local_1c8.AllocatorInstance.InlineData[10] = '\0';
    local_1c8.AllocatorInstance.InlineData[0xb] = '\0';
    local_1c8.AllocatorInstance.InlineData[0xc] = '\0';
    local_1c8.AllocatorInstance.InlineData[0xd] = '\0';
    local_1c8.AllocatorInstance.InlineData[0xe] = '\0';
    local_1c8.AllocatorInstance.InlineData[0xf] = '\0';
    local_190 = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_1c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_1c8.NumBits = 0;
    local_1c8.MaxBits = 0x80;
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_198 = (void *)0x0;
    (**(code **)((longlong)*pIVar7 + 0x140))
              (pIVar7,&local_2a8,&local_1d8,
               (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                *)&local_228);
    local_190 = local_190 & 0xffffffff00000000;
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    uVar14 = local_1d0 >> 0x20;
    local_1d0 = local_1d0 & 0xffffffff00000000;
    if ((int)uVar14 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_1d8,0,(int *)((longlong)&local_1d0 + 4));
    }
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_1c8.NumBits = 0;
    if (0x80 < (uint)local_1c8.MaxBits) {
      local_1c8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1c8,0);
    }
    if (local_1c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1c8.AllocatorInstance.SecondaryData);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    goto LAB_142afcb5c;
  }
  if ((iVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = ((int)local_220 - local_1f4) + iVar10;
  if ((uint)((int)local_220 - local_1f4) < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_228,uVar15);
    if (uVar15 < 4) {
      uVar15 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_298 = (undefined4)lVar5;
      uVar15 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((local_1e0 == 0) || ((int)local_1e0 < (int)uVar15)) {
      local_1e0 = uVar15;
      if ((ForElementType<FSetElementId>)local_1e8.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,0,4);
      }
      if (uVar15 != 0) {
        uVar9 = uVar15;
        if (uVar15 < 2) {
          if ((ForElementType<FSetElementId>)local_1e8.Data != (ForElementType<FSetElementId>)0x0) {
            uVar9 = 0;
            goto LAB_142afc92a;
          }
        }
        else {
LAB_142afc92a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,uVar9,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar18 = (ulonglong)uVar15;
          uVar17 = uVar14;
          do {
            FVar13.Data = (FScriptContainerElement *)local_1f0;
            if ((ForElementType<FSetElementId>)local_1e8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar13.Data = local_1e8.Data;
            }
            uVar11 = uVar17 & (longlong)(int)uVar15 - 1U;
            uVar17 = uVar17 + 1;
            *(undefined4 *)((longlong)FVar13.Data + uVar11 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_1e0 != 0) {
        pTStack_2c0 = &local_218;
        local_2c8 = 0;
        uStack_2c4 = 1;
        uStack_2b4 = 0;
        uStack_2b0 = 0;
        if (local_218.NumBits != 0) {
          FVar19 = (ForElementType<unsigned_int>)&local_218;
          if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_218.AllocatorInstance.SecondaryData;
          }
          uVar15 = *(uint *)FVar19;
          uVar17 = uVar14;
          while (uVar15 == 0) {
            uStack_2b0 = (int)uVar17 + 0x20;
            uVar17 = (ulonglong)uStack_2b0;
            iVar10 = (int)uVar14;
            local_2c8 = iVar10 + 1;
            uVar14 = (ulonglong)local_2c8;
            if ((int)((local_218.NumBits - 1U) + ((int)(local_218.NumBits - 1U) >> 0x1f & 0x1fU)) >>
                5 < (int)local_2c8) goto LAB_142afca42;
            uVar15 = *(uint *)((uchar *)((longlong)FVar19 + 4) + (longlong)iVar10 * 4);
          }
          uStack_2c4 = -uVar15 & uVar15;
          uVar14 = (ulonglong)uStack_2c4 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_294 = (int)lVar5;
          uStack_2b4 = local_294 + -1 + uStack_2b0;
          uVar14 = (ulonglong)uStack_2b4;
          if (local_218.NumBits < (int)uStack_2b4) {
LAB_142afca42:
            uVar14 = (ulonglong)(uint)local_218.NumBits;
            uStack_2b4 = local_218.NumBits;
          }
        }
        local_2b8 = 0xffffffff;
        local_278._padding_ = CONCAT44(uStack_2c4,local_2c8);
        local_278.CurrentBitIndex = uStack_2b4;
        local_278.UnvisitedBitMask = 0xffffffff;
        local_278._28_4_ = uStack_2ac;
        local_278.BaseBitIndex = uStack_2b0;
        local_280 = (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                     *)&local_228;
        local_278.Array = pTStack_2c0;
        if ((int)uVar14 < local_218.NumBits) {
          do {
            iVar10 = (int)uVar14;
            uVar2 = *(undefined8 *)(*(longlong *)&local_280->Elements + 8 + (longlong)iVar10 * 0x18)
            ;
            puVar1 = (undefined8 *)(*(longlong *)&local_280->Elements + (longlong)iVar10 * 0x18);
            uVar15 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar3 = *puVar1;
            uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar9 = uVar9 + (int)((ulonglong)uVar3 >> 0x20);
            uVar15 = ((uVar9 >> 2) + uVar15 + (int)((ulonglong)uVar2 >> 0x20) +
                      uVar9 * 0x40 + -0x61c88647 ^ uVar9) & local_1e0 - 1;
            *(uint *)((longlong)puVar1 + 0x14) = uVar15;
            FVar13.Data = (FScriptContainerElement *)local_1f0;
            if ((ForElementType<FSetElementId>)local_1e8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar13.Data = local_1e8.Data;
            }
            uVar14 = (longlong)(int)local_1e0 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar13.Data + uVar14 * 4);
            *(int *)((longlong)FVar13.Data + uVar14 * 4) = iVar10;
            local_278.UnvisitedBitMask = local_278.UnvisitedBitMask & ~local_278._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_278);
            uVar14 = (ulonglong)(uint)local_278.CurrentBitIndex;
            param_2 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)local_290.AssetName;
          } while (local_278.CurrentBitIndex < (local_278.Array)->NumBits);
        }
      }
    }
  }
  pFVar16 = FVar21.Data + lVar20 * 0x10;
  for (; FVar21.Data != pFVar16; FVar21.Data = FVar21.Data + 0x10) {
    TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
    Emplace<FTopLevelAssetPath_const_&>
              ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                *)&local_228,&local_290,(bool *)FVar21.Data);
  }
LAB_142afcb5c:
  iVar10 = local_188.ClassPaths.ArrayMax;
  local_188.ClassPaths._8_8_ = (ulonglong)(uint)local_188.ClassPaths.ArrayMax << 0x20;
  if (iVar10 < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,1,&local_188.ClassPaths.AllocatorInstance,0,&local_188.ClassPaths.ArrayMax);
  }
  pFVar12 = ::FName::FName(&local_238,L"BlueprintCore");
  FVar4 = *pFVar12;
  pFVar12 = ::FName::FName(&local_230,L"/Script/Engine");
  local_2d8.PackageName.ComparisonIndex.Value = 0;
  local_2d8.PackageName.Number = 0;
  local_2d8.AssetName.ComparisonIndex.Value = 0;
  local_2d8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_2d8,*pFVar12,FVar4);
  if (((local_188.ClassPaths.AllocatorInstance.Data <= &local_2d8) &&
      (&local_2d8 <
       (FTopLevelAssetPath *)
       (local_188.ClassPaths.AllocatorInstance.Data + (longlong)local_188.ClassPaths.ArrayMax * 0x10
       ))) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = local_188.ClassPaths.ArrayNum;
  if (local_188.ClassPaths.ArrayNum == local_188.ClassPaths.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_188.ClassPaths.AllocatorInstance,&local_188.ClassPaths.ArrayMax
                       );
  }
  local_188.ClassPaths.ArrayNum = iVar10 + 1;
  pFVar16 = local_188.ClassPaths.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
  *(uint *)pFVar16 = local_2d8.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar16 + 4) = local_2d8.PackageName.Number;
  *(uint *)(pFVar16 + 8) = local_2d8.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar16 + 0xc) = local_2d8.AssetName.Number;
  local_188.bRecursiveClasses = true;
  local_240 = &local_258;
  local_248 = UE::Core::Private::Function::
              TFunctionRefCaller<`UAssetRegistryHelpers::GetBlueprintAssets'::__l2::<lambda_1>,bool,FAssetData_const_&>
              ::Call;
  local_258 = (FName)param_2;
  local_250 = (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *
              )&local_228;
  (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,&local_188,&local_248,0);
  local_1e0 = 0;
  if ((ForElementType<FSetElementId>)local_1e8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  bVar8 = local_220._4_4_ != 0;
  local_220 = (ulonglong)local_220._4_4_ << 0x20;
  if (bVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&local_228,0,(int *)((longlong)&local_220 + 4));
  }
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_218.NumBits = 0;
  if (0x80 < (uint)local_218.MaxBits) {
    local_218.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_218,0);
  }
  if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_218.AllocatorInstance.SecondaryData);
  }
  if (local_228 != (void *)0x0) {
    FMemory::Free(local_228);
  }
  if (local_2a8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8);
  }
  FARFilter::~FARFilter(&local_188);
  return;
}

// GetClass @ 142afd7c0

UClass * __cdecl UAssetRegistryHelpers::GetClass(FAssetData *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = FAssetData::GetClass(param_1,No);
  return pUVar1;
}

// GetDerivedClassAssetData @ 142afdd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::GetDerivedClassAssetData
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  IAssetRegistry *pIVar4;
  FName FVar5;
  longlong *plVar6;
  bool bVar7;
  FString *this;
  FName *pFVar8;
  FUtf8String *pFVar9;
  FAssetData *pFVar10;
  byte bVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  undefined1 auStackY_3a8 [32];
  undefined1 local_378 [8];
  FString local_370;
  FName local_360;
  FTopLevelAssetPath local_358;
  FTopLevelAssetPath local_348;
  FSoftObjectPath local_338;
  FSoftObjectPath local_318;
  int local_2f8;
  FName local_2f4;
  TStringOverload<FUtf8String> local_2e8;
  TStringOverload<FUtf8String> local_2d8;
  longlong *local_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  FName *local_268;
  FString *local_260;
  FName local_258;
  FName local_250;
  FString local_248;
  FUtf8String local_238;
  FTopLevelAssetPath local_228;
  FUtf8String local_218;
  FTopLevelAssetPath local_208;
  FUtf8String local_1f8;
  FUtf8String local_1e8 [2];
  undefined4 local_1bc;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  void *local_178;
  undefined4 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  void *local_128;
  ulonglong local_120;
  FAssetData local_118;
  undefined1 local_b0 [56];
  FAssetDataTagMapSharedView local_78 [2];
  TReferenceControllerBase<1> *local_68;
  void *local_58;
  ulonglong local_48;
  
  pIVar4 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                         ,0x111,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18c = 0x80;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_198 = (uint *)0x0;
  uVar19 = 0;
  local_190 = 0;
  local_184 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_188 = 0xffffffff;
  local_158.AllocatorInstance.InlineData[0] = '\0';
  local_158.AllocatorInstance.InlineData[1] = '\0';
  local_158.AllocatorInstance.InlineData[2] = '\0';
  local_158.AllocatorInstance.InlineData[3] = '\0';
  local_158.AllocatorInstance.InlineData[4] = '\0';
  local_158.AllocatorInstance.InlineData[5] = '\0';
  local_158.AllocatorInstance.InlineData[6] = '\0';
  local_158.AllocatorInstance.InlineData[7] = '\0';
  local_158.AllocatorInstance.InlineData[8] = '\0';
  local_158.AllocatorInstance.InlineData[9] = '\0';
  local_158.AllocatorInstance.InlineData[10] = '\0';
  local_158.AllocatorInstance.InlineData[0xb] = '\0';
  local_158.AllocatorInstance.InlineData[0xc] = '\0';
  local_158.AllocatorInstance.InlineData[0xd] = '\0';
  local_158.AllocatorInstance.InlineData[0xe] = '\0';
  local_158.AllocatorInstance.InlineData[0xf] = '\0';
  local_130 = 0;
  local_120 = 0;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_158.NumBits = 0;
  local_158.MaxBits = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (void *)0x0;
  (**(code **)((longlong)*pIVar4 + 0x140))(pIVar4,param_1,&local_168,local_1b8);
  local_120 = local_120 & 0xffffffff00000000;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  uVar1 = local_160 >> 0x20;
  local_160 = local_160 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_158.NumBits = 0;
  if (0x80 < (uint)local_158.MaxBits) {
    local_158.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,0);
  }
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  uVar18 = local_1b8._8_4_ - local_184;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (param_2->ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,uVar18,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
  }
  uVar18 = local_190;
  local_2a8 = 0;
  uStack_2bc = 1;
  uStack_2ac = local_2a8;
  if (local_190 != 0) {
    puVar20 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar20 = local_198;
    }
    uVar16 = *puVar20;
    local_2a8 = 0;
    uVar19 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)uVar19;
      local_2a8 = local_2a8 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_2ac = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_142afdfc0;
      uVar16 = puVar20[lVar12 + 1];
    }
    uStack_2bc = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_2bc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_2f8 = (int)lVar12;
    uStack_2ac = (local_2a8 - 1) + local_2f8;
    if ((int)local_190 < (int)uStack_2ac) {
      uStack_2ac = local_190;
    }
  }
LAB_142afdfc0:
  iStack_2a0 = local_1b8._8_4_ - local_184;
  local_2c8 = (longlong *)local_1b8;
  local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
  uStack_2b0 = 0xffffffff;
  TStack_290.CurrentBitIndex = uStack_2ac;
  TStack_290.UnvisitedBitMask = 0xffffffff;
  uVar16 = local_190 & 0xffffffe0;
  TStack_290._padding_ = CONCAT44(uStack_2bc,uVar19);
  uStack_2a4 = local_1bc;
  iVar14 = (int)local_190 >> 5;
  TStack_290._28_4_ = local_1bc;
  TStack_290.BaseBitIndex = local_2a8;
  uStack_270 = CONCAT44(uStack_29c,iStack_2a0);
  bVar11 = (byte)local_190;
  uStack_2c0 = uVar19;
  local_298 = local_2c8;
  TStack_290.Array = local_2b8;
  if (((int)local_190 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar18 != local_190) {
    puVar20 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar20 = local_198;
    }
    uVar19 = -1 << (bVar11 & 0x1f) & puVar20[iVar14];
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_142afe0d0;
      uVar19 = puVar20[lVar12 + 1];
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar18 = (int)lVar12 + -1 + uVar16;
    if ((int)local_190 < (int)uVar18) {
      uVar18 = local_190;
    }
  }
LAB_142afe0d0:
  do {
    plVar6 = local_298;
    if ((int)local_298[1] - *(int *)((longlong)local_298 + 0x34) != (int)uStack_270) {
      `TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_378);
    }
    lVar12 = (longlong)TStack_290.CurrentBitIndex;
    if (((TStack_290.CurrentBitIndex == uVar18) &&
        (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
       (plVar6 == (longlong *)local_1b8)) {
      local_170 = 0;
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1b8);
      return;
    }
    lVar2 = *plVar6;
    local_360 = *(FName *)(lVar2 + lVar12 * 0x18);
    this = ::FName::ToString(&local_360,&local_248);
    bVar7 = ::FString::StartsWith(this,L"/Script/",8,IgnoreCase);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_2f4 = *(FName *)(lVar2 + lVar12 * 0x18 + 8);
      ::FName::ToString(&local_2f4,&local_370);
      bVar7 = ::FString::StartsWith(&local_370,L"SKEL_",5,IgnoreCase);
      if (!bVar7) {
        bVar7 = ::FString::EndsWith(&local_370,L"_C",2,IgnoreCase);
        if (bVar7) {
          ::FString::RemoveFromEnd(&local_370,L"_C",2,IgnoreCase);
        }
        FVar5 = local_360;
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_370.Data.ArrayNum != 0) {
          FVar13.Data = local_370.Data.AllocatorInstance.Data;
        }
        pcVar3 = *(code **)((longlong)*pIVar4 + 0x78);
        pFVar8 = ::FName::FName(&local_258,(wchar_t *)FVar13.Data);
        pFVar15 = (FScriptContainerElement *)0x0;
        local_358.PackageName.ComparisonIndex.Value = 0;
        local_358.PackageName.Number = 0;
        local_358.AssetName.ComparisonIndex.Value = 0;
        local_358.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_358,FVar5,*pFVar8);
        local_228.PackageName = local_358.PackageName;
        local_228.AssetName = local_358.AssetName;
        local_338.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_338.AssetPath.PackageName.Number = 0;
        local_338.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_338.AssetPath.AssetName.Number = 0;
        local_338.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_338.SubPathString.Data.ArrayNum = 0;
        local_338.SubPathString.Data.ArrayMax = 0;
        pFVar9 = FUtf8String::ConstructFromPtrSize(&local_238,(wchar_t *)0x0,0);
        iVar14 = 0;
        pFVar17 = pFVar15;
        if (&local_1f8 != pFVar9) {
          pFVar15 = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar14 = (pFVar9->Data).ArrayNum;
          pFVar17 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar9->Data).ArrayMax;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
        }
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        local_2e8.String.Data.ArrayMax = (int)pFVar17;
        local_2e8.String.Data.AllocatorInstance.Data = pFVar15;
        local_2e8.String.Data.ArrayNum = iVar14;
        FSoftObjectPath::SetPath(&local_338,&local_228,&local_2e8);
        (*pcVar3)(pIVar4,&local_118,&local_338,0);
        if (local_338.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_118.PackageName == (FName)0x0) {
          ::FString::AppendChars(&local_370,L"_C",2);
          FVar5 = local_360;
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_370.Data.ArrayNum != 0) {
            FVar13.Data = local_370.Data.AllocatorInstance.Data;
          }
          pcVar3 = *(code **)((longlong)*pIVar4 + 0x78);
          pFVar8 = ::FName::FName(&local_250,(wchar_t *)FVar13.Data);
          pFVar15 = (FScriptContainerElement *)0x0;
          local_348.PackageName.ComparisonIndex.Value = 0;
          local_348.PackageName.Number = 0;
          local_348.AssetName.ComparisonIndex.Value = 0;
          local_348.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_348,FVar5,*pFVar8);
          local_208.PackageName = local_348.PackageName;
          local_208.AssetName = local_348.AssetName;
          local_318.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_318.AssetPath.PackageName.Number = 0;
          local_318.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_318.AssetPath.AssetName.Number = 0;
          local_318.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.SubPathString.Data.ArrayNum = 0;
          local_318.SubPathString.Data.ArrayMax = 0;
          pFVar9 = FUtf8String::ConstructFromPtrSize(&local_218,(wchar_t *)0x0,0);
          iVar14 = 0;
          pFVar17 = pFVar15;
          if (local_1e8 != pFVar9) {
            pFVar15 = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar14 = (pFVar9->Data).ArrayNum;
            pFVar17 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          local_2d8.String.Data.ArrayMax = (int)pFVar17;
          local_2d8.String.Data.AllocatorInstance.Data = pFVar15;
          local_2d8.String.Data.ArrayNum = iVar14;
          FSoftObjectPath::SetPath(&local_318,&local_208,&local_2d8);
          pFVar10 = (FAssetData *)(*pcVar3)(pIVar4,local_b0,&local_318,0);
          FAssetData::operator=(&local_118,pFVar10);
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68);
          FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_78);
          if (local_318.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_318.SubPathString.Data.AllocatorInstance.Data);
          }
          if (local_118.PackageName != (FName)0x0) goto LAB_142afe43d;
          local_268 = &local_360;
          local_260 = &local_370;
          `UAssetRegistryHelpers::GetDerivedClassAssetData'::__l18::<lambda_1>::operator()
                    (&local_268);
          if (local_118.PackageName != (FName)0x0) goto LAB_142afe43d;
        }
        else {
LAB_142afe43d:
          iVar14 = param_2->ArrayNum;
          if (iVar14 == param_2->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar14 + 1;
          FAssetData::FAssetData
                    ((FAssetData *)((param_2->AllocatorInstance).Data + (longlong)iVar14 * 0x68),
                     &local_118);
        }
        if (local_118.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_118.ChunkIDs.AllocatorInstance.SecondaryData);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_118.TagsAndValues);
      }
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
    }
    TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
  } while( true );
}

// GetExportTextName @ 142afe800

FString * __cdecl
UAssetRegistryHelpers::GetExportTextName(FString *__return_storage_ptr__,FAssetData *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reset(__return_storage_ptr__,0);
  pFVar2 = FTopLevelAssetPath::ToString(&param_1->AssetClassPath,&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(__return_storage_ptr__,L'\'');
  FAssetData::AppendObjectPath(param_1,__return_storage_ptr__);
  ::FString::AppendChar(__return_storage_ptr__,L'\'');
  return __return_storage_ptr__;
}

// GetFullName @ 142afece0

FString * __cdecl
UAssetRegistryHelpers::GetFullName(FString *__return_storage_ptr__,FAssetData *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reset(__return_storage_ptr__,0);
  pFVar2 = FTopLevelAssetPath::ToString(&param_1->AssetClassPath,&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(__return_storage_ptr__,L' ');
  FAssetData::AppendObjectPath(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 142b00470

UClass * __cdecl UAssetRegistryHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistryHelpers",
               &Z_Registration_Info_UClass_UAssetRegistryHelpers.InnerSingleton,
               StaticRegisterNativesUAssetRegistryHelpers,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetRegistryHelpers>,
               InternalVTableHelperCtorCaller<UAssetRegistryHelpers>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryHelpers.InnerSingleton;
}

// GetTagValue @ 142b007f0

bool __cdecl UAssetRegistryHelpers::GetTagValue(FAssetData *param_1,FName *param_2,FString *param_3)

{
  FAssetDataTagMapSharedView *this;
  FScriptContainerElement *pFVar1;
  FValueId *pFVar2;
  FString *pFVar3;
  FAssetTagValueRef_u_0 local_res8;
  FString local_18;
  
  this = &param_1->TagsAndValues;
  if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
    if ((this->field0_0x0).Loose == (FAssetDataTagMap *)0x0) {
      return false;
    }
    local_res8.Loose =
         TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                   ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                    (this->field0_0x0).Loose,*param_2);
  }
  else {
    pFVar2 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)this,*param_2);
    if (pFVar2 == (FValueId *)0x0) {
      local_res8.Loose = (FString *)0x0;
    }
    else {
      local_res8.Bits =
           ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar2;
    }
  }
  if (local_res8.Loose == (FString *)0x0) {
    return false;
  }
  pFVar3 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res8.Fixed,&local_18);
  if (param_3 != pFVar3) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (param_3->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// IsAssetDataBlueprintOfClassSet @ 142b03f30

bool __cdecl
UAssetRegistryHelpers::IsAssetDataBlueprintOfClassSet
          (FAssetData *param_1,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_2)

{
  FAssetDataTagMapSharedView *this;
  FName FVar1;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FValueId *pFVar12;
  FString *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  ForAnyElementType FVar17;
  int iVar18;
  FTopLevelAssetPath *pFVar19;
  undefined4 local_res8 [2];
  FAssetTagValueRef_u_0 local_res18;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FTopLevelAssetPath local_e8;
  FTopLevelAssetPath local_d8;
  FString local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  
  this = &param_1->TagsAndValues;
  local_res8[0] = 0;
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    if ((this->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
      local_res18.Loose =
           TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                      (this->field0_0x0).Loose,FBlueprintTags::ParentClassPath);
      goto LAB_142b03fad;
    }
    local_res18.Loose = (FString *)0x0;
  }
  else {
    pFVar12 = FixedTagPrivate::FMapHandle::FindValue
                        ((FMapHandle *)this,FBlueprintTags::ParentClassPath);
    if (pFVar12 == (FValueId *)0x0) {
      local_res18.Loose = (FString *)0x0;
    }
    else {
      local_res18.Bits =
           ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar12;
    }
LAB_142b03fad:
    if (local_res18.Loose != (FString *)0x0) {
      pFVar13 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res18.Fixed,&local_88);
      bVar6 = true;
      bVar7 = false;
      goto LAB_142b03fde;
    }
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar13 = &local_b8;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  bVar6 = false;
  bVar7 = true;
LAB_142b03fde:
  local_c8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_c8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  if ((bVar7) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (1 < local_c8.Data.ArrayNum) {
    pFVar13 = FPackageName::ExportTextPathToObjectPath(&local_68,&local_c8);
    local_d8.PackageName.ComparisonIndex.Value = 0;
    local_d8.PackageName.Number = 0;
    local_d8.AssetName.ComparisonIndex.Value = 0;
    local_d8.AssetName.Number = 0;
    local_a8 = (pFVar13->Data).AllocatorInstance.Data;
    iVar9 = (pFVar13->Data).ArrayNum;
    iStack_a0 = iVar9 + -1;
    if (iVar9 == 0) {
      iStack_a0 = 0;
    }
    local_78._12_4_ = uStack_9c;
    local_78.Size = iStack_a0;
    local_78.DataPtr = (wchar_t *)local_a8;
    FTopLevelAssetPath::TrySetPath(&local_d8,&local_78);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_f8,(int *)((longlong)&local_f0 + 4));
    local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
    *(FName *)(local_f8.Data + (longlong)iVar9 * 0x10) = local_d8.PackageName;
    ((FName *)(local_f8.Data + (longlong)iVar9 * 0x10))[1] = local_d8.AssetName;
    pFVar13 = FTopLevelAssetPath::ToString(&local_d8,&local_38);
    pFVar13 = FLinkerLoad::FindNewPathNameForClass(&local_48,pFVar13,false);
    local_e8.PackageName.ComparisonIndex.Value = 0;
    local_e8.PackageName.Number = 0;
    local_e8.AssetName.ComparisonIndex.Value = 0;
    local_e8.AssetName.Number = 0;
    local_98 = (pFVar13->Data).AllocatorInstance.Data;
    iVar9 = (pFVar13->Data).ArrayNum;
    iStack_90 = iVar9 + -1;
    if (iVar9 == 0) {
      iStack_90 = 0;
    }
    local_58._12_4_ = uStack_8c;
    local_58.Size = iStack_90;
    local_58.DataPtr = (wchar_t *)local_98;
    FTopLevelAssetPath::TrySetPath(&local_e8,&local_58);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_e8.PackageName != (FName)0x0) {
      if (((local_f8.Data <= &local_e8) &&
          (&local_e8 < (FTopLevelAssetPath *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x10))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
      *(FName *)(local_f8.Data + (longlong)iVar9 * 0x10) = local_e8.PackageName;
      ((FName *)(local_f8.Data + (longlong)iVar9 * 0x10))[1] = local_e8.AssetName;
    }
    iVar9 = (int)local_f0;
    uVar14 = (ulonglong)(int)local_f0;
    pFVar19 = (FTopLevelAssetPath *)(local_f8.Data + uVar14 * 0x10);
    FVar17.Data = local_f8.Data;
    while( true ) {
      if ((int)uVar14 != iVar9) {
        `TCheckedPointerIterator<FTopLevelAssetPath,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FTopLevelAssetPath *)FVar17.Data == pFVar19) break;
      FVar1 = ((FTopLevelAssetPath *)FVar17.Data)->AssetName;
      uVar10 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      FVar2 = ((FTopLevelAssetPath *)FVar17.Data)->PackageName;
      uVar11 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      uVar11 = uVar11 + FVar2.Number;
      if (*(int *)&(param_2->Elements).field_0x8 == *(int *)&(param_2->Elements).field_0x34) {
LAB_142b042d6:
        uVar14 = local_f0 & 0xffffffff;
        FVar17.Data = FVar17.Data + 0x10;
      }
      else {
        FVar3 = (param_2->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar3;
        }
        iVar18 = *(int *)((longlong)FVar16 +
                         (ulonglong)
                         (param_2->HashSize - 1U &
                         (uVar11 * 0x40 + -0x61c88647 + uVar10 + FVar1.Number + (uVar11 >> 2) ^
                         uVar11)) * 4);
        if (iVar18 == -1) goto LAB_142b042d6;
        lVar4 = *(longlong *)&param_2->Elements;
        do {
          lVar15 = (longlong)iVar18;
          if ((*(FName *)(lVar4 + lVar15 * 0x18) == ((FTopLevelAssetPath *)FVar17.Data)->PackageName
              ) && (*(FName *)(lVar4 + 8 + lVar15 * 0x18) ==
                    ((FTopLevelAssetPath *)FVar17.Data)->AssetName)) {
            if (iVar18 == -1) goto LAB_142b042d6;
            if ((FTopLevelAssetPath *)local_f8.Data != (FTopLevelAssetPath *)0x0) {
              FMemory::Free(local_f8.Data);
            }
            bVar7 = true;
            goto LAB_142b04307;
          }
          iVar18 = *(int *)(lVar4 + 0x10 + lVar15 * 0x18);
        } while (iVar18 != -1);
        uVar14 = local_f0 & 0xffffffff;
        FVar17.Data = FVar17.Data + 0x10;
      }
    }
    if ((FTopLevelAssetPath *)local_f8.Data != (FTopLevelAssetPath *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  bVar7 = false;
LAB_142b04307:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// IsAssetLoaded @ 142b04350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl UAssetRegistryHelpers::IsAssetLoaded(FAssetData *param_1)

{
  UObject *pUVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_58;
  
  local_58.Elements._16_8_ = 0;
  local_58.Elements._24_8_ = 0;
  local_58.Hash.InlineData[0] = '\0';
  local_58.Hash.InlineData[1] = '\0';
  local_58.Hash.InlineData[2] = '\0';
  local_58.Hash.InlineData[3] = '\0';
  local_58.Hash._padding_ = 0;
  local_58.HashSize = 0;
  local_58._76_4_ = 0;
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar1 = FAssetData::FastGetAsset(param_1,false,&local_58);
  return pUVar1 != (UObject *)0x0;
}

// IsRedirector @ 142b05680

bool __cdecl UAssetRegistryHelpers::IsRedirector(FAssetData *param_1)

{
  bool bVar1;
  FTopLevelAssetPath local_18;
  
  local_18.PackageName = (param_1->AssetClassPath).PackageName;
  local_18.AssetName = (param_1->AssetClassPath).AssetName;
  bVar1 = FAssetData::IsRedirectorClassName(&local_18);
  return bVar1;
}

// IsUAsset @ 142b05950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UAssetRegistryHelpers::IsUAsset(FAssetData *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_10d8 [32];
  TStringView<wchar_t> TStack_10b8;
  TStringBuilderBase<wchar_t> TStack_10a8;
  wchar_t awStack_1088 [1035];
  wchar_t awStack_872 [5];
  TStringBuilderBase<wchar_t> TStack_868;
  wchar_t awStack_848 [1035];
  wchar_t awStack_32 [5];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_10d8;
  if ((param_1->PackageName != (FName)0x0) && (param_1->AssetName != (FName)0x0)) {
    TStack_868.Base = awStack_848;
    TStack_868.CurPos = awStack_848;
    TStack_868.End = awStack_32;
    TStack_868.bIsDynamic = false;
    TStack_868.bIsExternal = false;
    ::FName::ToString(&param_1->AssetName,&TStack_868);
    TStack_10a8.Base = awStack_1088;
    TStack_10a8.bIsDynamic = false;
    TStack_10a8.bIsExternal = false;
    TStack_10a8.CurPos = awStack_1088;
    TStack_10a8.End = awStack_872;
    ::FName::ToString(&param_1->PackageName,&TStack_10a8);
    pwVar2 = TStack_868.Base;
    pwVar1 = TStack_10a8.Base;
    lVar8 = (longlong)TStack_868.CurPos - (longlong)TStack_868.Base;
    iVar7 = (int)((longlong)TStack_10a8.CurPos - (longlong)TStack_10a8.Base >> 1);
    TStack_10b8.Size = iVar7;
    TStack_10b8.DataPtr = TStack_10a8.Base;
    iVar3 = UE::String::FindLastChar(&TStack_10b8,L'/',CaseSensitive);
    iVar4 = iVar3 + 1;
    iVar5 = 0x7fffffff;
    if (iVar4 < 0) {
      iVar5 = iVar3 + -0x80000000;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar7 < iVar4) {
      iVar4 = iVar7;
    }
    iVar3 = iVar7 - iVar4;
    if (iVar5 < iVar7 - iVar4) {
      iVar3 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    iVar3 = (int)(lVar8 >> 1);
    if (((iVar5 == iVar3) &&
        (((iVar5 == 0 || (iVar3 == 0)) ||
         (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar1 + iVar4,pwVar2,(longlong)iVar3),
         iVar4 == 0)))) && (iVar5 == iVar3)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_10a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_868);
    return bVar6;
  }
  return false;
}

// IsValid @ 142b05970

bool __cdecl UAssetRegistryHelpers::IsValid(FAssetData *param_1)

{
  if ((param_1->PackageName != (FName)0x0) && (param_1->AssetName != (FName)0x0)) {
    return true;
  }
  return false;
}

// SetFilterTagsAndValues @ 142b1e730

FARFilter * __cdecl
UAssetRegistryHelpers::SetFilterTagsAndValues
          (FARFilter *__return_storage_ptr__,FARFilter *param_1,
          TArray<FTagAndValue,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FARFilter *pFVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  TOptional<FString>_u_0 local_28;
  
  FARFilter::FARFilter(__return_storage_ptr__,param_1);
  iVar2 = param_2->ArrayNum;
  pFVar6 = (FName *)(param_2->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 3;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTagAndValue_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    ::FString::FString(&local_28.TypedValue,(FString *)(pFVar6 + 1));
    if (local_28.TypedValue.Data.ArrayMax == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FARFilter *)(*pcVar3)();
        return pFVar5;
      }
    }
    TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
    ::Emplace<FName_const_&,TOptional<FString>_>
              ((TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
                *)&__return_storage_ptr__->TagsAndValues,pFVar6,
               (TOptional<FString> *)&local_28.TypedValue);
    if ((local_28.TypedValue.Data.ArrayMax != -1) &&
       (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 3;
  }
  return __return_storage_ptr__;
}

// SortByAssetName @ 142b22a70

void __cdecl
UAssetRegistryHelpers::SortByAssetName
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,EAssetRegistrySortOrder param_2)

{
  code *pcVar1;
  bool bVar2;
  FIdentityFunctor local_res10 [8];
  FIdentityFunctor *local_res18 [2];
  
  if (param_2 == Ascending) {
    AlgoImpl::
    IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UAssetRegistryHelpers::SortByAssetName_::__l2::<lambda_1>_>_>
              ((FAssetData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10[0],
               (<lambda_1> *)local_res10);
  }
  else {
    if (param_2 == Descending) {
      local_res18[0] = local_res10;
      AlgoImpl::
      IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UE::AssetRegistry::SortAssets<_UAssetRegistryHelpers::SortByAssetName_::__l2::<lambda_1>_>_::__l4::<lambda_1>_>_>
                ((FAssetData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10[0],
                 (<lambda_1> *)local_res18);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryHelpers.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SortByPredicate @ 142b22b00

void __cdecl
UAssetRegistryHelpers::SortByPredicate
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,FSortingPredicate *param_2,
          EAssetRegistrySortOrder param_3)

{
  FName FVar1;
  code *pcVar2;
  FIdentityFunctor FVar3;
  bool bVar4;
  UObject *this;
  UFunction *pUVar5;
  FSortingPredicate *local_res10 [2];
  FSortingPredicate **local_res20;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
  if (*(longlong *)&param_2->field_0x10 != 0) {
    this = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_2->field_0x8);
    if (this != (UObject *)0x0) {
      FVar1.ComparisonIndex.Value = *(uint *)&param_2->field_0x10;
      FVar1.Number = *(uint *)&param_2->field_0x14;
      pUVar5 = UObject::FindFunction(this,FVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (pUVar5 != (UFunction *)0x0) {
        local_res10[0]._0_1_ = SUB81(param_2,0);
        local_res10[0] = param_2;
        if (param_3 == Ascending) {
          FVar3 = local_res10[0]._0_1_;
          AlgoImpl::
          IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UAssetRegistryHelpers::SortByPredicate_::__l5::<lambda_1>_>_>
                    ((FAssetData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,FVar3,
                     (<lambda_1> *)local_res10);
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)param_2);
          return;
        }
        if (param_3 == Descending) {
          local_res20 = local_res10;
          FVar3 = local_res10[0]._0_1_;
          AlgoImpl::
          IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UE::AssetRegistry::SortAssets<_UAssetRegistryHelpers::SortByPredicate_::__l5::<lambda_1>_>_::__l4::<lambda_1>_>_>
                    ((FAssetData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,FVar3,
                     (<lambda_1> *)&local_res20);
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)param_2);
          return;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryHelpers.cpp"
                           ,0x23,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto LAB_142b22c0a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_142b22c0a:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// StaticRegisterNativesUAssetRegistryHelpers @ 142b22e60

void __cdecl UAssetRegistryHelpers::StaticRegisterNativesUAssetRegistryHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UAssetRegistryHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToSoftObjectPath @ 142b26a90

FSoftObjectPath * __cdecl
UAssetRegistryHelpers::ToSoftObjectPath(FSoftObjectPath *__return_storage_ptr__,FAssetData *param_1)

{
  FAssetData::GetSoftObjectPath(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// execCreateAssetData @ 142b2f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::execCreateAssetData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  UObject *local_90;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pUVar2 = local_90;
  bVar4 = local_98[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_90 != (UObject *)0x0) {
    cVar3 = (**(code **)(*(longlong *)local_90 + 0x1c0))(local_90);
    if (cVar3 != '\0') {
      FAssetData::FAssetData(&local_88,pUVar2,(uint)bVar4 * 2);
      goto LAB_142b2f691;
    }
  }
  local_88.PackageName.ComparisonIndex.Value = 0;
  local_88.PackageName.Number = 0;
  local_88.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_88.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
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
  local_88.ChunkArrayRegistryHandle.Index = -1;
  local_88.PackageFlags = 0;
  local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_88.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_88.ChunkIDs.ArrayNum = 0;
  local_88.ChunkIDs.ArrayMax = 2;
LAB_142b2f691:
  FAssetData::operator=(param_3,&local_88);
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execFindAssetNativeClass @ 142b2f6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::execFindAssetNativeClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  IAssetRegistry *pIVar5;
  int iVar6;
  bool bVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  FAssetData *this;
  FName *pFVar10;
  FName *pFVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  FName *local_e0;
  ulonglong local_d8;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  FTopLevelAssetPath local_b8;
  FAssetData local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a8.PackageName.ComparisonIndex.Value = 0;
  local_a8.PackageName.Number = 0;
  local_a8.PackagePath.ComparisonIndex.Value = 0;
  local_a8.PackagePath.Number = 0;
  local_a8.AssetName.ComparisonIndex.Value = 0;
  local_a8.AssetName.Number = 0;
  local_a8.AssetClass.ComparisonIndex.Value = 0;
  local_a8.AssetClass.Number = 0;
  local_a8.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_a8.AssetClassPath.PackageName.Number = 0;
  local_a8.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_a8.AssetClassPath.AssetName.Number = 0;
  local_a8.ChunkArrayRegistryHandle.Index = -1;
  local_a8.PackageFlags = 0;
  local_a8.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_a8.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_a8.ChunkIDs.ArrayNum = 0;
  local_a8.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  this = &local_a8;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = FAssetData::GetClass(this,No);
  pIVar5 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (pUVar8 == (UClass *)0x0) {
    if ((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                           ,0x111,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c8 = (this->AssetClassPath).PackageName.ComparisonIndex.Value;
    uStack_c4 = (this->AssetClassPath).PackageName.Number;
    uStack_c0 = (this->AssetClassPath).AssetName.ComparisonIndex.Value;
    uStack_bc = (this->AssetClassPath).AssetName.Number;
    local_e0 = (FName *)0x0;
    local_d8 = 0;
    (**(code **)((longlong)*pIVar5 + 0x138))(pIVar5,&local_c8);
    iVar6 = (int)local_d8;
    uVar9 = (ulonglong)(int)local_d8;
    pFVar10 = local_e0 + uVar9 * 2;
    pFVar11 = local_e0;
    while( true ) {
      if ((int)uVar9 != iVar6) {
        `TCheckedPointerIterator<FTopLevelAssetPath,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (pFVar11 == pFVar10) break;
      FVar3 = *pFVar11;
      FVar4 = pFVar11[1];
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      local_b8.PackageName = FVar3;
      local_b8.AssetName = FVar4;
      pUVar8 = (UClass *)StaticFindObject(pUVar8,&local_b8,None);
      if (pUVar8 != (UClass *)0x0) break;
      uVar9 = local_d8 & 0xffffffff;
      pFVar11 = pFVar11 + 2;
    }
    if (local_e0 != (FName *)0x0) {
      FMemory::Free(local_e0);
    }
    if (pUVar8 == (UClass *)0x0) goto LAB_142b2f8d2;
  }
  do {
    if ((pUVar8->ClassFlags & CLASS_Native) != CLASS_None) break;
    pUVar8 = (UClass *)pUVar8->_padding_;
  } while (pUVar8 != (UClass *)0x0);
LAB_142b2f8d2:
  *(UClass **)param_3 = pUVar8;
  if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
  return;
}

// execGetAsset @ 142b2f930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UAssetRegistryHelpers::execGetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  FAssetData *this;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [24];
  undefined8 uStack_110;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ForElementType<FSetElementId> local_f0;
  ulonglong local_e0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d8;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
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
  local_f0.InlineData[0] = '\0';
  local_f0.InlineData[1] = '\0';
  local_f0.InlineData[2] = '\0';
  local_f0.InlineData[3] = '\0';
  local_f0._padding_ = 0;
  local_e0 = 0;
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_f0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.Elements._0_8_ = 0;
  local_128._16_8_ = 0;
  uStack_110 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_100 = ___xmm_00000000ffffffff0000008000000000;
  uStack_f8 = _UNK_150631d98;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d8.Elements._48_8_ = _UNK_150631d98;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&local_d8,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_128);
  pUVar4 = FAssetData::FastGetAsset(this,true,&local_d8);
  local_e0 = local_e0 & 0xffffffff00000000;
  if (local_f0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f0.SecondaryData);
  }
  iVar2 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  uVar3 = local_100._4_4_;
  uStack_f8 = 0xffffffff;
  local_100 = (ulonglong)local_100._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_100 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  *(UObject **)param_3 = pUVar4;
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execGetAssetRegistry @ 142b2fb50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UAssetRegistryHelpers::execGetAssetRegistry(UObject *param_1,FFrame *param_2,void *param_3)

{
  UAssetRegistryImpl *pUVar1;
  longlong *plVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UAssetRegistryImpl::Get();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAssetRegistryImpl *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  plVar2 = &pUVar1->_padding_;
  if (pUVar1 == (UAssetRegistryImpl *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAssetRegistryImpl *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UAssetRegistryImpl **)param_3 = pUVar1;
  *(longlong **)((longlong)param_3 + 8) = plVar2;
  return;
}

// execGetBlueprintAssets @ 142b2fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::execGetBlueprintAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  FARFilter *pFVar3;
  undefined1 auStack_198 [32];
  TArray<FAssetData,TSizedDefaultAllocator<32>_> local_178;
  FARFilter local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  FARFilter::FARFilter(&local_168);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  pFVar3 = &local_168;
  if ((FARFilter *)param_2->MostRecentPropertyAddress != (FARFilter *)0x0) {
    pFVar3 = (FARFilter *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pTVar2 = &local_178;
  if ((TArray<FAssetData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetBlueprintAssets(pFVar3,pTVar2);
  DestructItems<FAssetData,int>((FAssetData *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((FAssetData *)local_178.AllocatorInstance.Data != (FAssetData *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  FARFilter::~FARFilter(&local_168);
  return;
}

// execGetClass @ 142b2fd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAssetRegistryHelpers::execGetClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  FAssetData *this;
  undefined1 auStack_a8 [32];
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
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
  pUVar2 = FAssetData::GetClass(this,No);
  *(UClass **)param_3 = pUVar2;
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execGetDerivedClassAssetData @ 142b2fe50

void __cdecl
UAssetRegistryHelpers::execGetDerivedClassAssetData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> local_28;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> local_18;
  
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
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
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
  pTVar2 = &local_28;
  if ((TArray<FAssetData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetDerivedClassAssetData(pTVar3,pTVar2);
  DestructItems<FAssetData,int>((FAssetData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FAssetData *)local_28.AllocatorInstance.Data != (FAssetData *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetExportTextName @ 142b2ff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::execGetExportTextName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FString *pFVar3;
  int iVar4;
  FAssetData *this;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FString local_98;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::Reset(&local_a8,0);
  pFVar3 = FTopLevelAssetPath::ToString(&this->AssetClassPath,&local_98);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_a8,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(&local_a8,L'\'');
  FAssetData::AppendObjectPath(this,&local_a8);
  ::FString::AppendChar(&local_a8,L'\'');
  if (param_3 != &local_a8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_a8.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_a8.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execGetFullName @ 142b30140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAssetRegistryHelpers::execGetFullName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FString *pFVar3;
  int iVar4;
  FAssetData *this;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FString local_98;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::Reset(&local_a8,0);
  pFVar3 = FTopLevelAssetPath::ToString(&this->AssetClassPath,&local_98);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_a8,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(&local_a8,L' ');
  FAssetData::AppendObjectPath(this,&local_a8);
  if (param_3 != &local_a8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_a8.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_a8.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execGetTagValue @ 142b30300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAssetRegistryHelpers::execGetTagValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 uVar5;
  FValueId *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  uchar *puVar10;
  undefined1 auStack_f8 [32];
  FName local_d8;
  FString local_d0;
  FAssetTagValueRef_u_0 local_c0;
  FString local_b8;
  uchar local_a8 [56];
  FAssetDataTagMapSharedView_u_0 local_70;
  undefined8 uStack_68;
  TReferenceControllerBase<1> *local_60;
  void *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a8[0x30] = 0xff;
  local_a8[0x31] = 0xff;
  local_a8[0x32] = 0xff;
  local_a8[0x33] = 0xff;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_a8[0x34] = '\0';
  local_a8[0x35] = '\0';
  local_a8[0x36] = '\0';
  local_a8[0x37] = '\0';
  local_70.Loose = (FAssetDataTagMap *)0x0;
  uStack_68 = 0;
  local_60 = (TReferenceControllerBase<1> *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_44 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar10 = local_a8;
  if (puVar2 != (uchar *)0x0) {
    puVar10 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  pFVar9 = &local_d8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar9 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  pFVar8 = &local_d0;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar8 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((puVar10[0x38] & 1) == 0) {
    if (*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)(puVar10 + 0x38) !=
        (TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)0x0) {
      local_c0.Loose =
           TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     (*(TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> **)
                       (puVar10 + 0x38),*pFVar9);
      goto LAB_142b304b9;
    }
  }
  else {
    pFVar6 = FixedTagPrivate::FMapHandle::FindValue((FMapHandle *)(puVar10 + 0x38),*pFVar9);
    if (pFVar6 == (FValueId *)0x0) {
      local_c0.Loose = (FString *)0x0;
    }
    else {
      local_c0.Bits =
           ((ulonglong)*(ushort *)(puVar10 + 0x38) & 0xfffffffffffffffc | 0xfffffffe00000000) <<
           0x1e | (ulonglong)(uint)*pFVar6;
    }
LAB_142b304b9:
    if (local_c0.Loose != (FString *)0x0) {
      pFVar7 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_c0.Fixed,&local_b8);
      if (pFVar8 != pFVar7) {
        pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar8->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (pFVar8->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      uVar5 = 1;
      goto LAB_142b3050d;
    }
  }
  uVar5 = 0;
LAB_142b3050d:
  *(undefined1 *)param_3 = uVar5;
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_70.Fixed);
  return;
}

// execIsAssetLoaded @ 142b30570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UAssetRegistryHelpers::execIsAssetLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FAssetData *this;
  undefined1 auStack_f8 [32];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d8;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
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
  local_d8.Hash.InlineData[0] = '\0';
  local_d8.Hash.InlineData[1] = '\0';
  local_d8.Hash.InlineData[2] = '\0';
  local_d8.Hash.InlineData[3] = '\0';
  local_d8.Hash._padding_ = 0;
  local_d8.HashSize = 0;
  local_d8._76_4_ = 0;
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.Elements._16_8_ = 0;
  local_d8.Elements._24_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d8.Elements._48_8_ = _UNK_150631d98;
  pUVar2 = FAssetData::FastGetAsset(this,false,&local_d8);
  *(bool *)param_3 = pUVar2 != (UObject *)0x0;
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execIsRedirector @ 142b306c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAssetRegistryHelpers::execIsRedirector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  undefined1 auStack_b8 [32];
  FTopLevelAssetPath local_98;
  uchar local_88 [56];
  FAssetDataTagMapSharedView_u_0 local_50;
  undefined8 uStack_48;
  TReferenceControllerBase<1> *local_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88[0x30] = 0xff;
  local_88[0x31] = 0xff;
  local_88[0x32] = 0xff;
  local_88[0x33] = 0xff;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_50.Loose = (FAssetDataTagMap *)0x0;
  uStack_48 = 0;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_24 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar3 = local_88;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98.PackageName = *(FName *)(puVar3 + 0x20);
  local_98.AssetName = *(FName *)(puVar3 + 0x28);
  bVar2 = FAssetData::IsRedirectorClassName(&local_98);
  *(bool *)param_3 = bVar2;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_50.Fixed);
  return;
}

// execIsUAsset @ 142b307e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAssetRegistryHelpers::execIsUAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FAssetData *this;
  undefined1 auStack_a8 [32];
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
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
  bVar2 = FAssetData::IsUAsset(this);
  *(bool *)param_3 = bVar2;
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// execIsValid @ 142b308f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAssetRegistryHelpers::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong local_88 [6];
  undefined4 local_58;
  undefined4 local_54;
  FAssetDataTagMapSharedView_u_0 local_50;
  undefined8 uStack_48;
  TReferenceControllerBase<1> *local_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58 = 0xffffffff;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_54 = 0;
  local_50.Loose = (FAssetDataTagMap *)0x0;
  uStack_48 = 0;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_24 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  plVar3 = local_88;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar3 == 0) || (plVar3[2] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_50.Fixed);
  return;
}

// execSetFilterTagsAndValues @ 142b30a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::execSetFilterTagsAndValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  FTagAndValue *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTagAndValue *pFVar6;
  FTagAndValue **ppFVar7;
  FARFilter *pFVar8;
  undefined1 auStack_328 [32];
  undefined1 local_308 [8];
  FTagAndValue *local_300;
  undefined8 local_2f8;
  TOptional<FString>_u_0 local_2f0;
  FARFilter local_2d8;
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_328;
  FARFilter::FARFilter(&local_2d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d8);
  }
  local_300 = (FTagAndValue *)0x0;
  local_2f8 = 0;
  pFVar8 = &local_2d8;
  if ((FARFilter *)param_2->MostRecentPropertyAddress != (FARFilter *)0x0) {
    pFVar8 = (FARFilter *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_300,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_300);
  }
  ppFVar7 = &local_300;
  if ((FTagAndValue **)param_2->MostRecentPropertyAddress != (FTagAndValue **)0x0) {
    ppFVar7 = (FTagAndValue **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FARFilter::FARFilter(&local_188,pFVar8);
  iVar2 = *(int *)(ppFVar7 + 1);
  pFVar6 = *ppFVar7;
  pFVar1 = pFVar6 + iVar2;
  while( true ) {
    if (*(int *)(ppFVar7 + 1) != iVar2) {
      local_308[0] = 0;
      `TCheckedPointerIterator<FTagAndValue_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_308);
    }
    if (pFVar6 == pFVar1) break;
    ::FString::FString(&local_2f0.TypedValue,&pFVar6->Value);
    if (local_2f0.TypedValue.Data.ArrayMax == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
    ::Emplace<FName_const_&,TOptional<FString>_>
              ((TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
                *)&local_188.TagsAndValues,&pFVar6->Tag,(TOptional<FString> *)&local_2f0.TypedValue)
    ;
    if ((local_2f0.TypedValue.Data.ArrayMax != -1) &&
       (local_2f0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_2f0.TypedValue.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 1;
  }
  FARFilter::operator=(param_3,&local_188);
  FARFilter::~FARFilter(&local_188);
  DestructItems<FTagAndValue,int>(local_300,(int)local_2f8);
  if (local_300 != (FTagAndValue *)0x0) {
    FMemory::Free(local_300);
  }
  FARFilter::~FARFilter(&local_2d8);
  return;
}

// execSortByAssetName @ 142b30c20

void __cdecl
UAssetRegistryHelpers::execSortByAssetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAssetData **ppFVar4;
  char local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 *local_28;
  FAssetData *local_20;
  undefined8 local_18;
  
  local_20 = (FAssetData *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_res10[0] = '\0';
  ppFVar4 = &local_20;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar4 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\0') {
    AlgoImpl::
    IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UAssetRegistryHelpers::SortByAssetName_::__l2::<lambda_1>_>_>
              (*ppFVar4,*(int *)(ppFVar4 + 1),(FIdentityFunctor)0x0,(<lambda_1> *)local_res20);
  }
  else if (local_res10[0] == '\x01') {
    local_28 = local_res20;
    AlgoImpl::
    IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UE::AssetRegistry::SortAssets<_UAssetRegistryHelpers::SortByAssetName_::__l2::<lambda_1>_>_::__l4::<lambda_1>_>_>
              (*ppFVar4,*(int *)(ppFVar4 + 1),(FIdentityFunctor)0x1,(<lambda_1> *)&local_28);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryHelpers.cpp"
                       ,0x23,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<FAssetData,int>(local_20,(int)local_18);
  if (local_20 != (FAssetData *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execSortByPredicate @ 142b30d80

void __cdecl
UAssetRegistryHelpers::execSortByPredicate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FIdentityFunctor FVar4;
  bool bVar5;
  UObject *this;
  UFunction *pUVar6;
  FAssetData **ppFVar7;
  FIdentityFunctor local_res10 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_res20;
  FAssetData *local_a8;
  undefined8 local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  FWeakObjectPtr local_78;
  FName local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **local_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = (FAssetData *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.ObjectIndex = 0;
  local_90.ObjectSerialNumber = 0;
  ppFVar7 = &local_a8;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar7 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = (FIdentityFunctor)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar4 = local_res10[0];
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_48);
  local_78 = local_90;
  local_70 = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_80,&local_60);
  if (local_70 != (FName)0x0) {
    this = FWeakObjectPtr::Get(&local_78);
    if (this != (UObject *)0x0) {
      pUVar6 = UObject::FindFunction(this,local_70);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      if (pUVar6 != (UFunction *)0x0) {
        local_res20 = &local_80;
        if (FVar4 == (FIdentityFunctor)0x0) {
          AlgoImpl::
          IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UAssetRegistryHelpers::SortByPredicate_::__l5::<lambda_1>_>_>
                    (*ppFVar7,*(int *)(ppFVar7 + 1),local_res10[0],(<lambda_1> *)&local_res20);
        }
        else if (FVar4 == (FIdentityFunctor)0x1) {
          local_68 = &local_res20;
          AlgoImpl::
          IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,_UE::AssetRegistry::SortAssets<_UAssetRegistryHelpers::SortByPredicate_::__l5::<lambda_1>_>_::__l4::<lambda_1>_>_>
                    (*ppFVar7,*(int *)(ppFVar7 + 1),local_res10[0],(<lambda_1> *)&local_68);
        }
        else {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryHelpers.cpp"
                             ,0x23,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      goto LAB_142b30f5e;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
LAB_142b30f5e:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  DestructItems<FAssetData,int>(local_a8,(int)local_a0);
  if (local_a8 != (FAssetData *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execToSoftObjectPath @ 142b30fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetRegistryHelpers::execToSoftObjectPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  FAssetData *this;
  undefined1 auStack_c8 [32];
  FSoftObjectPath local_a8;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAssetData::GetSoftObjectPath(this,&local_a8);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x10);
  *(FName *)param_3 = local_a8.AssetPath.PackageName;
  *(FName *)((longlong)param_3 + 8) = local_a8.AssetPath.AssetName;
  if ((FUtf8String *)puVar1 != &local_a8.SubPathString) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_a8.SubPathString.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x18) = local_a8.SubPathString.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x1c) = local_a8.SubPathString.Data.ArrayMax;
    local_a8.SubPathString.Data.ArrayNum = 0;
    local_a8.SubPathString.Data.ArrayMax = 0;
    local_a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

// operator() @ 150497450

bool __thiscall
`UAssetRegistryHelpers::GetDerivedClassAssetData'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3623211690528603829>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3623211690528603829>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504974df;
    }
  }
  bVar2 = false;
LAB_1504974df:
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

