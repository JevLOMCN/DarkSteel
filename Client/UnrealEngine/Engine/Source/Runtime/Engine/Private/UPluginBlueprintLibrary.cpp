// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 148331ea0

UClass * __cdecl UPluginBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPluginBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PluginBlueprintLibrary",
               &Z_Registration_Info_UClass_UPluginBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUPluginBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPluginBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPluginBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPluginBlueprintLibrary.InnerSingleton;
}

// UPluginBlueprintLibrary @ 14834c860

UPluginBlueprintLibrary * __thiscall
UPluginBlueprintLibrary::UPluginBlueprintLibrary
          (UPluginBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPluginBlueprintLibrary__6B_;
  return this;
}

// UPluginBlueprintLibrary @ 14834c890

UPluginBlueprintLibrary * __thiscall
UPluginBlueprintLibrary::UPluginBlueprintLibrary
          (UPluginBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPluginBlueprintLibrary__6B_;
  return this;
}

// ~UPluginBlueprintLibrary @ 14834df40

void __thiscall UPluginBlueprintLibrary::~UPluginBlueprintLibrary(UPluginBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UPluginBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetAdditionalPluginSearchPaths @ 14837e0f0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UPluginBlueprintLibrary::GetAdditionalPluginSearchPaths
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  IPluginManager *pIVar12;
  longlong *plVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  longlong *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pIVar12 = IPluginManager::Get();
  plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x100))(pIVar12);
  iVar11 = (int)plVar13[5];
  uVar9 = 1;
  iVar16 = 0;
  iVar18 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
  iVar10 = iVar16;
  if (iVar11 != 0) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar1;
    }
    uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    iVar18 = 0;
    iVar16 = 0;
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14837e1ad;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar9 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar10 = local_res10 + -1 + iVar18;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_14837e1ad:
  uVar17 = *(uint *)(plVar13 + 5);
  TStack_70._padding_ = CONCAT44(uVar9,iVar16);
  uVar9 = uVar17 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar18;
  uStack_50 = CONCAT44(uStack_7c,(int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34));
  local_res20 = plVar13;
  TStack_70.Array = pTVar1;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar14;
  }
  plVar7 = local_res20;
  uVar4 = *(uint *)(plVar13 + 5);
  if (uVar17 != uVar4) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar16;
      uVar9 = uVar9 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14837e2c0;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar17 = local_res18 + -1 + uVar9;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14837e2c0:
  while( true ) {
    if ((int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34) != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar17) && (TStack_70.Array == pTVar1)) &&
       (plVar13 == plVar7)) break;
    pFVar2 = (FScriptContainerElement *)(*plVar13 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar14;
    }
    iVar11 = __return_storage_ptr__->ArrayNum;
    if (iVar11 == __return_storage_ptr__->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar11 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10),
                       (FString *)pFVar2);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetAdditionalProjectPluginSearchPaths @ 14837e3d0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UPluginBlueprintLibrary::GetAdditionalProjectPluginSearchPaths(void)

{
  IProjectManager *pIVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pIVar1 = IProjectManager::Get();
                    /* WARNING: Could not recover jumptable at 0x00014837e3ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
           (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,*(code **)((longlong)*pIVar1 + 0x98));
  return pTVar2;
}

// GetEnabledPluginNames @ 148380e80

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UPluginBlueprintLibrary::GetEnabledPluginNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IPluginManager *pIVar6;
  FScriptContainerElement *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  TSharedRef<IPlugin,1> *pTVar10;
  TSharedRef<IPlugin,1> *pTVar11;
  undefined1 local_res8 [8];
  TSharedRef<IPlugin,1> *local_28;
  ulonglong local_20;
  
  pIVar6 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,&local_28);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar9 = (int)local_20;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_20 & 0xffffffff);
  }
  if (0 < iVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar9 = (int)local_20;
  pTVar10 = local_28 + iVar9;
  pTVar11 = local_28;
  while( true ) {
    if ((int)local_20 != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar11 == pTVar10) break;
    pFVar7 = (FScriptContainerElement *)(**(code **)(*(longlong *)pTVar11->Object + 8))();
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)*piVar1 * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar7);
    pTVar11 = pTVar11 + 1;
  }
  DestructItems<TSharedRef<IPlugin,1>,int>(local_28,(int)local_20);
  if (local_28 != (TSharedRef<IPlugin,1> *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetPluginBaseDir @ 148386220

bool __cdecl UPluginBlueprintLibrary::GetPluginBaseDir(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  FString *pFVar7;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18 [2];
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_30 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_30 = 0;
  }
  local_38._0_4_ = SUB84(pFVar2,0);
  local_38._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  local_38 = pFVar2;
  iStack_20 = iStack_30;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_48,&local_28);
  if (local_48 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar7 = (FString *)(**(code **)(*local_48 + 0x20))(local_48,local_18);
    if (param_2 != pFVar7) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return bVar4;
}

// GetPluginContentDir @ 148386330

bool __cdecl UPluginBlueprintLibrary::GetPluginContentDir(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  FString *pFVar7;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18 [2];
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_30 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_30 = 0;
  }
  local_38._0_4_ = SUB84(pFVar2,0);
  local_38._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  local_38 = pFVar2;
  iStack_20 = iStack_30;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_48,&local_28);
  if (local_48 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar7 = (FString *)(**(code **)(*local_48 + 0x30))(local_48,local_18);
    if (param_2 != pFVar7) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return bVar4;
}

// GetPluginDescription @ 148386440

bool __cdecl UPluginBlueprintLibrary::GetPluginDescription(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  longlong lVar7;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(pFVar2,0);
  local_28._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pFVar2;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar7 = (**(code **)(*local_38 + 0xa0))();
    ::FString::operator=(param_2,(FString *)(lVar7 + 0x28));
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar4;
}

// GetPluginDescriptorFilePath @ 148386510

bool __cdecl UPluginBlueprintLibrary::GetPluginDescriptorFilePath(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  FString *pFVar7;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(pFVar2,0);
  local_28._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pFVar2;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar7 = (FString *)(**(code **)(*local_38 + 0x18))();
    ::FString::operator=(param_2,pFVar7);
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar4;
}

// GetPluginEditorCustomVirtualPath @ 1483865e0

bool __cdecl
UPluginBlueprintLibrary::GetPluginEditorCustomVirtualPath(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  longlong lVar7;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(pFVar2,0);
  local_28._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pFVar2;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar7 = (**(code **)(*local_38 + 0xa0))();
    ::FString::operator=(param_2,(FString *)(lVar7 + 0xa8));
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar4;
}

// GetPluginMountedAssetPath @ 1483866b0

bool __cdecl UPluginBlueprintLibrary::GetPluginMountedAssetPath(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  FString *pFVar7;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18 [2];
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_30 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_30 = 0;
  }
  local_38._0_4_ = SUB84(pFVar2,0);
  local_38._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  local_38 = pFVar2;
  iStack_20 = iStack_30;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_48,&local_28);
  if (local_48 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar7 = (FString *)(**(code **)(*local_48 + 0x38))(local_48,local_18);
    if (param_2 != pFVar7) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return bVar4;
}

// GetPluginNameForObjectPath @ 1483867c0

bool __cdecl
UPluginBlueprintLibrary::GetPluginNameForObjectPath(FSoftObjectPath *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IPluginManager *pIVar4;
  FString *pFVar5;
  FString local_28;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar4 = IPluginManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x78);
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    FTopLevelAssetPath::ToString(&param_1->AssetPath,&local_28);
  }
  (*pcVar1)(pIVar4,&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar5 = (FString *)(**(code **)(*local_18 + 8))();
    ::FString::operator=(param_2,pFVar5);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return bVar2;
}

// GetPluginVersion @ 1483868b0

bool __cdecl UPluginBlueprintLibrary::GetPluginVersion(FString *param_1,int *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  int *piVar7;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(pFVar2,0);
  local_28._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pFVar2;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    piVar7 = (int *)(**(code **)(*local_38 + 0xa0))();
    bVar4 = true;
    *param_2 = *piVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar4;
}

// GetPluginVersionName @ 148386980

bool __cdecl UPluginBlueprintLibrary::GetPluginVersionName(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IPluginManager *pIVar6;
  longlong lVar7;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar6 = IPluginManager::Get();
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iStack_20 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(pFVar2,0);
  local_28._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pFVar2;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar7 = (**(code **)(*local_38 + 0xa0))();
    ::FString::operator=(param_2,(FString *)(lVar7 + 8));
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar4;
}

// GetPrivateStaticClass @ 148387340

UClass * __cdecl UPluginBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPluginBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PluginBlueprintLibrary",
               &Z_Registration_Info_UClass_UPluginBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUPluginBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPluginBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPluginBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPluginBlueprintLibrary.InnerSingleton;
}

// IsPluginMounted @ 148392fc0

bool __cdecl UPluginBlueprintLibrary::IsPluginMounted(FString *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = GetPluginMountedAssetPath(param_1,&local_18);
  if (bVar1) {
    bVar1 = FPackageName::MountPointExists(&local_18);
  }
  else {
    bVar1 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// StaticRegisterNativesUPluginBlueprintLibrary @ 1483af780

void __cdecl UPluginBlueprintLibrary::StaticRegisterNativesUPluginBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UPluginBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAdditionalPluginSearchPaths @ 1483bf710

void __cdecl
UPluginBlueprintLibrary::execGetAdditionalPluginSearchPaths
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetAdditionalPluginSearchPaths(&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
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
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAdditionalProjectPluginSearchPaths @ 1483bf7b0

void __cdecl
UPluginBlueprintLibrary::execGetAdditionalProjectPluginSearchPaths
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  IProjectManager *pIVar4;
  undefined8 *puVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IProjectManager::Get();
  puVar5 = (undefined8 *)(**(code **)((longlong)*pIVar4 + 0x98))(pIVar4);
  if (param_3 != puVar5) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    iVar2 = *(int *)(puVar5 + 1);
    piVar1 = (int *)((longlong)param_3 + 0xc);
    pFVar3 = (FString *)*puVar5;
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,param_3,iVar2,piVar1);
    ConstructItems<FString,FString,int>(*(void **)param_3,pFVar3,iVar2);
  }
  return;
}

// execGetEnabledPluginNames @ 1483bfb20

void __cdecl
UPluginBlueprintLibrary::execGetEnabledPluginNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetEnabledPluginNames(&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
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
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetPluginBaseDir @ 1483c1af0

void __cdecl
UPluginBlueprintLibrary::execGetPluginBaseDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  void **ppvVar7;
  void **ppvVar8;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18 [2];
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  ppvVar8 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_38 = local_68;
  pvVar3 = local_38;
  iStack_30 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iStack_30 = 0;
  }
  local_38._0_4_ = SUB84(local_68,0);
  local_38._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  local_38 = pvVar3;
  iStack_20 = iStack_30;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_48,&local_28);
  if (local_48 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    uVar4 = 0;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppvVar7 = (void **)(**(code **)(*local_48 + 0x20))(local_48,local_18);
    if (ppvVar8 != ppvVar7) {
      if (*ppvVar8 != (void *)0x0) {
        FMemory::Free(*ppvVar8);
      }
      *ppvVar8 = *ppvVar7;
      *ppvVar7 = (void *)0x0;
      *(undefined4 *)(ppvVar8 + 1) = *(undefined4 *)(ppvVar7 + 1);
      *(undefined4 *)((longlong)ppvVar8 + 0xc) = *(undefined4 *)((longlong)ppvVar7 + 0xc);
      ppvVar7[1] = (void *)0x0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execGetPluginContentDir @ 1483c1ce0

void __cdecl
UPluginBlueprintLibrary::execGetPluginContentDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  void **ppvVar7;
  void **ppvVar8;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18 [2];
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  ppvVar8 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_38 = local_68;
  pvVar3 = local_38;
  iStack_30 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iStack_30 = 0;
  }
  local_38._0_4_ = SUB84(local_68,0);
  local_38._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  local_38 = pvVar3;
  iStack_20 = iStack_30;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_48,&local_28);
  if (local_48 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    uVar4 = 0;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppvVar7 = (void **)(**(code **)(*local_48 + 0x30))(local_48,local_18);
    if (ppvVar8 != ppvVar7) {
      if (*ppvVar8 != (void *)0x0) {
        FMemory::Free(*ppvVar8);
      }
      *ppvVar8 = *ppvVar7;
      *ppvVar7 = (void *)0x0;
      *(undefined4 *)(ppvVar8 + 1) = *(undefined4 *)(ppvVar7 + 1);
      *(undefined4 *)((longlong)ppvVar8 + 0xc) = *(undefined4 *)((longlong)ppvVar7 + 0xc);
      ppvVar7[1] = (void *)0x0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execGetPluginDescription @ 1483c1ed0

void __cdecl
UPluginBlueprintLibrary::execGetPluginDescription(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  longlong lVar7;
  FString *this;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_28 = local_58;
  pvVar3 = local_28;
  iStack_20 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(local_58,0);
  local_28._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pvVar3;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 0;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = (**(code **)(*local_38 + 0xa0))();
    ::FString::operator=(this,(FString *)(lVar7 + 0x28));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetPluginDescriptorFilePath @ 1483c2090

void __cdecl
UPluginBlueprintLibrary::execGetPluginDescriptorFilePath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  FString *pFVar7;
  FString *this;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_28 = local_58;
  pvVar3 = local_28;
  iStack_20 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(local_58,0);
  local_28._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pvVar3;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 0;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = (FString *)(**(code **)(*local_38 + 0x18))();
    ::FString::operator=(this,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetPluginEditorCustomVirtualPath @ 1483c2250

void __cdecl
UPluginBlueprintLibrary::execGetPluginEditorCustomVirtualPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  longlong lVar7;
  FString *this;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_28 = local_58;
  pvVar3 = local_28;
  iStack_20 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(local_58,0);
  local_28._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pvVar3;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 0;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = (**(code **)(*local_38 + 0xa0))();
    ::FString::operator=(this,(FString *)(lVar7 + 0xa8));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetPluginMountedAssetPath @ 1483c2410

void __cdecl
UPluginBlueprintLibrary::execGetPluginMountedAssetPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
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
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetPluginMountedAssetPath(&local_18,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPluginNameForObjectPath @ 1483c2520

void __cdecl
UPluginBlueprintLibrary::execGetPluginNameForObjectPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  IPluginManager *pIVar5;
  FString *pFVar6;
  FString *this;
  FTopLevelAssetPath *this_00;
  FString local_68;
  FString local_58;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FTopLevelAssetPath local_38;
  void *local_28;
  undefined8 local_20;
  
  local_38.PackageName.ComparisonIndex.Value = 0;
  local_38.PackageName.Number = 0;
  local_38.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetName.Number = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  this_00 = &local_38;
  if ((FTopLevelAssetPath *)param_2->MostRecentPropertyAddress != (FTopLevelAssetPath *)0x0) {
    this_00 = (FTopLevelAssetPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IPluginManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x78);
  if (this_00->PackageName == (FName)0x0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  else {
    FTopLevelAssetPath::ToString(this_00,&local_58);
  }
  (*pcVar2)(pIVar5,&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    uVar3 = 0;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (FString *)(**(code **)(*local_48 + 8))();
    ::FString::operator=(this,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    uVar3 = 1;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetPluginVersion @ 1483c2700

void __cdecl
UPluginBlueprintLibrary::execGetPluginVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  undefined4 *puVar7;
  uchar *puVar8;
  uchar local_res10 [8];
  void *local_48;
  undefined8 local_40;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar8 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_28 = local_48;
  pvVar3 = local_28;
  iStack_20 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(local_48,0);
  local_28._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pvVar3;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 0;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar7 = (undefined4 *)(**(code **)(*local_38 + 0xa0))();
    *(undefined4 *)puVar8 = *puVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetPluginVersionName @ 1483c28a0

void __cdecl
UPluginBlueprintLibrary::execGetPluginVersionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  undefined1 uVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  longlong lVar7;
  FString *this;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar6 = IPluginManager::Get();
  local_28 = local_58;
  pvVar3 = local_28;
  iStack_20 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iStack_20 = 0;
  }
  local_28._0_4_ = SUB84(local_58,0);
  local_28._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_c = uStack_1c;
  local_28 = pvVar3;
  iStack_10 = iStack_20;
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_38,&local_18);
  if (local_38 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 0;
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = (**(code **)(*local_38 + 0xa0))();
    ::FString::operator=(this,(FString *)(lVar7 + 8));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execIsPluginMounted @ 1483c2f70

void __cdecl
UPluginBlueprintLibrary::execIsPluginMounted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  IPluginManager *pIVar5;
  FString *pFVar6;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *local_18 [2];
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IPluginManager::Get();
  local_38 = local_58;
  pvVar3 = local_38;
  iStack_30 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iStack_30 = 0;
  }
  local_38._0_4_ = SUB84(local_58,0);
  local_38._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_1c = uStack_2c;
  local_38 = pvVar3;
  iStack_20 = iStack_30;
  (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,&local_48,&local_28);
  if (local_48 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (FString *)(**(code **)(*local_48 + 0x38))(local_48,local_18);
    if (&local_68 != pFVar6) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    bVar4 = FPackageName::MountPointExists(&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

