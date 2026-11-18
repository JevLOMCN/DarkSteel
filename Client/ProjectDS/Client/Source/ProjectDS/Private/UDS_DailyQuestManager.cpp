// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b47a300

UClass * __cdecl UDS_DailyQuestManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DailyQuestManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DailyQuestManager",
               &Z_Registration_Info_UClass_UDS_DailyQuestManager.InnerSingleton,
               StaticRegisterNativesUDS_DailyQuestManager,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DailyQuestManager>,
               InternalVTableHelperCtorCaller<UDS_DailyQuestManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DailyQuestManager.InnerSingleton;
}

// UDS_DailyQuestManager @ 14b47d640

UDS_DailyQuestManager * __thiscall
UDS_DailyQuestManager::UDS_DailyQuestManager(UDS_DailyQuestManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DailyQuestManager__6B_;
  *(undefined8 *)&this->SuggestDailyQuestMap = 0;
  *(undefined8 *)&(this->SuggestDailyQuestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SuggestDailyQuestMap).field_0x20 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x34 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SuggestDailyQuestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x48 = 0;
  this->DailyQuestCompleteCount = 0;
  this->MaxDailyQuestComplete = 0;
  this->TargetStuffBaseTableID = 0;
  *(undefined8 *)&this->OnUpdateDailyQuestDataDelegate = 0;
  *(undefined8 *)&(this->OnUpdateDailyQuestDataDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateDailyQuestDataDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateDailyQuestDataDelegate).field_0x18 = 2;
  return this;
}

// UDS_DailyQuestManager @ 14b47d6c0

UDS_DailyQuestManager * __thiscall
UDS_DailyQuestManager::UDS_DailyQuestManager
          (UDS_DailyQuestManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DailyQuestManager__6B_;
  *(undefined8 *)&this->SuggestDailyQuestMap = 0;
  *(undefined8 *)&(this->SuggestDailyQuestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SuggestDailyQuestMap).field_0x20 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x34 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SuggestDailyQuestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x48 = 0;
  this->DailyQuestCompleteCount = 0;
  this->MaxDailyQuestComplete = 0;
  this->TargetStuffBaseTableID = 0;
  *(undefined8 *)&this->OnUpdateDailyQuestDataDelegate = 0;
  *(undefined8 *)&(this->OnUpdateDailyQuestDataDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateDailyQuestDataDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateDailyQuestDataDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_DailyQuestManager @ 14b47de80

void __thiscall UDS_DailyQuestManager::~UDS_DailyQuestManager(UDS_DailyQuestManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_DailyQuestManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateDailyQuestDataDelegate).field_0x8,
             *(int *)&(this->OnUpdateDailyQuestDataDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateDailyQuestDataDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateDailyQuestDataDelegate);
  *(undefined4 *)&(this->SuggestDailyQuestMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SuggestDailyQuestMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SuggestDailyQuestMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b47f230

UClass * __cdecl UDS_DailyQuestManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DailyQuestManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DailyQuestManager",
               &Z_Registration_Info_UClass_UDS_DailyQuestManager.InnerSingleton,
               StaticRegisterNativesUDS_DailyQuestManager,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DailyQuestManager>,
               InternalVTableHelperCtorCaller<UDS_DailyQuestManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DailyQuestManager.InnerSingleton;
}

// StaticRegisterNativesUDS_DailyQuestManager @ 14b47f5e0

void __cdecl UDS_DailyQuestManager::StaticRegisterNativesUDS_DailyQuestManager(void)

{
  return;
}

// AddSuggestDailyQuestMap @ 14ba94840

void __thiscall
UDS_DailyQuestManager::AddSuggestDailyQuestMap
          (UDS_DailyQuestManager *this,int param_1,DailyQuestInfo param_2)

{
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  DailyQuestInfo *pDVar1;
  code *pcVar2;
  DailyQuestInfo DVar3;
  bool bVar4;
  int iVar5;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  TPairInitializer<int_const_&,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  DailyQuestInfo local_res18 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> **local_48;
  ForAnyElementType *local_40;
  
  this_00 = &this->SuggestDailyQuestMap;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  if (*(int *)&(this->SuggestDailyQuestMap).field_0x8 !=
      *(int *)&(this->SuggestDailyQuestMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SuggestDailyQuestMap).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SuggestDailyQuestMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar5 != -1) {
      do {
        if (*(int *)((longlong)iVar5 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1) {
          uVar9 = 0;
          pTVar6 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,param_1);
          if (0 < pTVar6->ArrayNum) {
            lVar10 = 0;
            do {
              pTVar6 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                       ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                      *)this_00,(int)local_res8.Value);
              uVar7 = 0;
              if ((int)uVar9 < pTVar6->ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              DVar3 = local_res18[0];
              if (*(int *)((pTVar6->AllocatorInstance).Data + lVar10) == local_res18[0].QuestID) {
                pTVar6 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                         ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                        *)this_00,(int)local_res8.Value);
                uVar7 = 0;
                if ((int)uVar9 < pTVar6->ArrayNum) {
                  uVar7 = ~uVar9 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(DailyQuestInfo *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar9 * 8) =
                     DVar3;
                return;
              }
              uVar9 = uVar9 + 1;
              lVar10 = lVar10 + 8;
              pTVar6 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                       ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                      *)this_00,(int)local_res8.Value);
            } while ((int)uVar9 < pTVar6->ArrayNum);
          }
          pTVar6 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,(int)local_res8.Value);
          pDVar1 = (DailyQuestInfo *)(pTVar6->AllocatorInstance).Data;
          if (((pDVar1 <= local_res18) && (local_res18 < pDVar1 + pTVar6->ArrayMax)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = pTVar6->ArrayNum;
          if (iVar5 == pTVar6->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          pTVar6->ArrayNum = iVar5 + 1;
          *(DailyQuestInfo *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               local_res18[0];
          return;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar5 != -1);
    }
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_58,(int *)((longlong)&local_50 + 4));
  local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
  *(DailyQuestInfo *)(local_58.Data + (longlong)iVar5 * 8) = local_res18[0];
  local_48 = &local_res8.Value;
  local_40 = &local_58;
  TSet<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_const_&>_>
            ((TSet<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_48);
  if (local_58.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_58.Data);
  return;
}

// Created @ 14ba9d530

void __thiscall UDS_DailyQuestManager::Created(UDS_DailyQuestManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// DailyQuestCompleteCountReset @ 14ba9dc40

void __thiscall UDS_DailyQuestManager::DailyQuestCompleteCountReset(UDS_DailyQuestManager *this)

{
  this->DailyQuestCompleteCount = 0;
  return;
}

// DailyQuestCompleteCountRise @ 14ba9dc60

void __thiscall UDS_DailyQuestManager::DailyQuestCompleteCountRise(UDS_DailyQuestManager *this)

{
  return;
}

// Destroyed @ 14ba9e610

void __thiscall UDS_DailyQuestManager::Destroyed(UDS_DailyQuestManager *this)

{
  return;
}

// GetDailyQuestCompleteCount @ 14baa60f0

int __thiscall UDS_DailyQuestManager::GetDailyQuestCompleteCount(UDS_DailyQuestManager *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  undefined8 uVar5;
  code *pcVar6;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar9 = *(int *)&(this->SuggestDailyQuestMap).field_0x28;
  puVar1 = &(this->SuggestDailyQuestMap).field_0x10;
  iVar14 = 0;
  pTVar20 = &this->SuggestDailyQuestMap;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(this->SuggestDailyQuestMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iStack_a8) goto LAB_14baa619d;
      uVar16 = puVar18[lVar10 + 1];
    }
    uStack_a4 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_res18;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_14baa619d:
  iStack_88 = *(int *)&(this->SuggestDailyQuestMap).field_0x8 -
              *(int *)&(this->SuggestDailyQuestMap).field_0x34;
  uVar16 = *(uint *)&(this->SuggestDailyQuestMap).field_0x28;
  uStack_98 = 0xffffffff;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_res20 = pTVar20;
  local_b0 = pTVar20;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = pTVar20;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  uVar4 = *(uint *)&(this->SuggestDailyQuestMap).field_0x28;
  iVar9 = 0;
  if (uVar16 != uVar4) {
    puVar11 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar12 * 4);
    while (iVar9 = iVar14, uVar16 == 0) {
      lVar10 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar12) goto LAB_14baa62a0;
      uVar16 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14baa62a0:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar20))
    break;
    lVar10 = (longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)pTVar7;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = *(int *)(lVar10 + 0x10);
    lVar17 = (longlong)local_b8;
    _Src = *(void **)(lVar10 + 8);
    if (local_b8 == 0) {
      local_b4 = 0;
      iVar14 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_b8,0,&local_c0,local_b8,&local_b4);
      memcpy(local_c0.Data,_Src,lVar17 << 3);
      iVar14 = local_b8;
    }
    pFVar2 = local_c0.Data + (longlong)iVar14 * 8;
    FVar13.Data = local_c0.Data;
    iVar12 = iVar14;
    while( true ) {
      iVar15 = iVar9;
      if (iVar12 != iVar14) {
        `TCheckedPointerIterator<DailyQuestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
        iVar12 = local_b8;
      }
      if (FVar13.Data == pFVar2) break;
      uVar5 = *(undefined8 *)FVar13.Data;
      FVar13.Data = FVar13.Data + 8;
      iVar9 = iVar15 + 1;
      if ((char)((ulonglong)uVar5 >> 0x20) != '\x01') {
        iVar9 = iVar15;
      }
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    pTVar20 = local_res20;
    iVar9 = iVar15;
  }
  return iVar9;
}

// GetInst @ 14baab620

UDS_DailyQuestManager * __cdecl UDS_DailyQuestManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_DailyQuestManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_DailyQuestManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_DailyQuestManager_NoRegister();
  pUVar3 = (UDS_DailyQuestManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_DailyQuestManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_DailyQuestManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_DailyQuestManager *)0x0;
}

// GetQuestConditionSortOrder @ 14baaf610

EDS_QuestConditionSortOrder __thiscall
UDS_DailyQuestManager::GetQuestConditionSortOrder
          (UDS_DailyQuestManager *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  EDS_QuestConditionType EVar2;
  int iVar3;
  UDS_QuestManager *this_00;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  EDS_QuestConditionSortOrder EVar7;
  undefined1 local_res20 [8];
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    return Traced;
  }
  EVar2 = UDS_QuestManager::GetQuestConditionType(this_00,param_2,0);
  EVar7 = Traced;
  if (*(int *)&(this->SuggestDailyQuestMap).field_0x8 !=
      *(int *)&(this->SuggestDailyQuestMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SuggestDailyQuestMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->SuggestDailyQuestMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar3 != -1) {
      do {
        if (*(int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->SuggestDailyQuestMap) == param_1)
        {
          pTVar4 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->SuggestDailyQuestMap,param_1);
          pFVar6 = (pTVar4->AllocatorInstance).Data;
          iVar3 = pTVar4->ArrayNum;
          pFVar1 = pFVar6 + (longlong)iVar3 * 8;
          goto LAB_14baaf6d6;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->SuggestDailyQuestMap);
      } while (iVar3 != -1);
    }
  }
LAB_14baaf6a4:
  if (EVar2 == AbleComplete) {
    EVar7 = AbleCompleted;
  }
  else if (EVar2 == AbleAccept) {
    EVar7 = AbleAccept;
  }
  else if (EVar2 == InProgress) {
    EVar7 = InProgress;
  }
  else if (EVar2 == NotAbleAccept) {
    EVar7 = NotAbleAccept;
  }
  return EVar7;
LAB_14baaf6d6:
  if (pTVar4->ArrayNum != iVar3) {
    `TCheckedPointerIterator<DailyQuestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res20);
  }
  if (pFVar6 == pFVar1) goto LAB_14baaf6a4;
  if ((int)*(undefined8 *)pFVar6 == param_2) goto LAB_14baaf6f9;
  pFVar6 = pFVar6 + 8;
  goto LAB_14baaf6d6;
LAB_14baaf6f9:
  if ((char)((ulonglong)*(undefined8 *)pFVar6 >> 0x20) == '\x01') {
    return Completed;
  }
  goto LAB_14baaf6a4;
}

// GetSuggestDailyQuestDataArray @ 14bab0630

TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_DailyQuestManager::GetSuggestDailyQuestDataArray
          (UDS_DailyQuestManager *this,
          TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_res8 [8];
  int local_res18 [4];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  UDS_DailyQuestManager *local_28;
  int *local_20;
  
  if (*(int *)&(this->SuggestDailyQuestMap).field_0x8 !=
      *(int *)&(this->SuggestDailyQuestMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SuggestDailyQuestMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SuggestDailyQuestMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->SuggestDailyQuestMap) == param_1)
        {
          local_res18[0] = param_1;
          pTVar2 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->SuggestDailyQuestMap,param_1);
          local_38.Data = (FScriptContainerElement *)0x0;
          local_30 = pTVar2->ArrayNum;
          lVar3 = (longlong)local_30;
          _Src = (pTVar2->AllocatorInstance).Data;
          if (local_30 == 0) {
            local_2c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_30,0,&local_38,local_30,&local_2c);
            memcpy(local_38.Data,_Src,lVar3 << 3);
          }
          local_res8[0] = 0;
          AlgoImpl::
          IntroSortInternal<DailyQuestInfo,int,FIdentityFunctor,TDereferenceWrapper<DailyQuestInfo,_UDS_DailyQuestManager::GetSuggestDailyQuestDataArray_::__l5::<lambda_1>_>_>
                    ((DailyQuestInfo *)local_38.Data,local_30,local_res18[0]._0_1_,
                     (<lambda_1> *)local_res8);
          local_20 = local_res18;
          local_28 = this;
          AlgoImpl::
          IntroSortInternal<DailyQuestInfo,int,FIdentityFunctor,TDereferenceWrapper<DailyQuestInfo,_UDS_DailyQuestManager::GetSuggestDailyQuestDataArray_::__l5::<lambda_2>_>_>
                    ((DailyQuestInfo *)local_38.Data,local_30,local_res18[0]._0_1_,
                     (<lambda_2> *)&local_28);
          (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
          __return_storage_ptr__->ArrayNum = local_30;
          __return_storage_ptr__->ArrayMax = local_2c;
          return __return_storage_ptr__;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->SuggestDailyQuestMap);
      } while (iVar1 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSuggestID @ 14bab07a0

int __thiscall UDS_DailyQuestManager::GetSuggestID(UDS_DailyQuestManager *this,int param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar8 = *(int *)&(this->SuggestDailyQuestMap).field_0x28;
  puVar1 = &(this->SuggestDailyQuestMap).field_0x10;
  iStack_98 = 0;
  pTVar18 = &this->SuggestDailyQuestMap;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->SuggestDailyQuestMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14bab084e;
      uVar14 = puVar17[lVar9 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_84 = local_80 + -1 + local_res20;
    if (iVar8 < iStack_84) {
      iStack_84 = iVar8;
    }
  }
LAB_14bab084e:
  uVar14 = *(uint *)&(this->SuggestDailyQuestMap).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_78 = *(int *)&(this->SuggestDailyQuestMap).field_0x8 -
              *(int *)&(this->SuggestDailyQuestMap).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar18;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar18;
  local_68 = pTVar18;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  uVar4 = *(uint *)&(this->SuggestDailyQuestMap).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bab0950;
      uVar14 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (int)lVar9 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14bab0950:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar18))
    break;
    piVar10 = (int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
    iVar8 = *piVar10;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = piVar10[4];
    lVar9 = (longlong)local_a8;
    _Src = *(void **)(piVar10 + 2);
    if (local_a8 == 0) {
      local_a4 = 0;
      iVar11 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_a8,0,&local_b0,local_a8,&local_a4);
      memcpy(local_b0.Data,_Src,lVar9 << 3);
      iVar11 = local_a8;
    }
    pFVar2 = local_b0.Data + (longlong)iVar11 * 8;
    FVar12.Data = local_b0.Data;
    iVar15 = iVar11;
    while( true ) {
      if (iVar15 != iVar11) {
        `TCheckedPointerIterator<DailyQuestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        iVar15 = local_a8;
      }
      if (FVar12.Data == pFVar2) break;
      if (*(int *)FVar12.Data == param_1) {
        if (local_b0.Data == (FScriptContainerElement *)0x0) {
          return iVar8;
        }
        FMemory::Free(local_b0.Data);
        return iVar8;
      }
      FVar12.Data = FVar12.Data + 8;
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    pTVar18 = local_70;
  }
  return 0;
}

// Init @ 14bab3cd0

void __thiscall UDS_DailyQuestManager::Init(UDS_DailyQuestManager *this)

{
  int iVar1;
  
  iVar1 = DS_CommonDataHelper::DailyQuestComplete();
  this->MaxDailyQuestComplete = iVar1;
  return;
}

// IsDailySuggestCountOver @ 14bab7870

bool __thiscall UDS_DailyQuestManager::IsDailySuggestCountOver(UDS_DailyQuestManager *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&(this->SuggestDailyQuestMap).field_0x8;
  iVar2 = *(int *)&(this->SuggestDailyQuestMap).field_0x34;
  iVar3 = DS_CommonDataHelper::DailyQuestSuggestZone();
  return iVar3 <= iVar1 - iVar2;
}

// IsQuestComplete @ 14baba5d0

bool __thiscall
UDS_DailyQuestManager::IsQuestComplete(UDS_DailyQuestManager *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  undefined1 local_res10 [8];
  
  if (*(int *)&(this->SuggestDailyQuestMap).field_0x8 !=
      *(int *)&(this->SuggestDailyQuestMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SuggestDailyQuestMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->SuggestDailyQuestMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->SuggestDailyQuestMap;
      do {
        if (*(int *)((longlong)iVar3 * 0x20 + lVar2) == param_1) {
          pTVar4 = TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->SuggestDailyQuestMap,param_1);
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          iVar3 = pTVar4->ArrayNum;
          pFVar1 = pFVar5 + (longlong)iVar3 * 8;
          while( true ) {
            if (pTVar4->ArrayNum != iVar3) {
              `TCheckedPointerIterator<DailyQuestInfo,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pFVar5 == pFVar1) break;
            if ((int)*(undefined8 *)pFVar5 == param_2) {
              return (bool)(char)((ulonglong)*(undefined8 *)pFVar5 >> 0x20);
            }
            pFVar5 = pFVar5 + 8;
          }
          return false;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsSuggestQuestBoard @ 14babad00

bool __thiscall UDS_DailyQuestManager::IsSuggestQuestBoard(UDS_DailyQuestManager *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->SuggestDailyQuestMap).field_0x8 !=
      *(int *)&(this->SuggestDailyQuestMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->SuggestDailyQuestMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->SuggestDailyQuestMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->SuggestDailyQuestMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->SuggestDailyQuestMap) == param_1)
        {
          return true;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->SuggestDailyQuestMap);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// Reset @ 14bac9770

void __thiscall UDS_DailyQuestManager::Reset(UDS_DailyQuestManager *this)

{
  TSet<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->SuggestDailyQuestMap);
  return;
}

