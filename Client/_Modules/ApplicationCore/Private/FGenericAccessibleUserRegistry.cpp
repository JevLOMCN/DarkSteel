// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 8

// ~FGenericAccessibleUserRegistry @ 1423c6840

void __thiscall
FGenericAccessibleUserRegistry::~FGenericAccessibleUserRegistry
          (FGenericAccessibleUserRegistry *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UsersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UsersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UsersMap);
  return;
}

// GetAllUsers @ 1423dd880

TArray<TSharedRef<FGenericAccessibleUser,1>,TSizedDefaultAllocator<32>_> * __thiscall
FGenericAccessibleUserRegistry::GetAllUsers
          (FGenericAccessibleUserRegistry *this,
          TArray<TSharedRef<FGenericAccessibleUser,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  TMap<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
  *pTVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  TArray<TSharedRef<FGenericAccessibleUser,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
  *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar16 = *(int *)&(this->UsersMap).field_0x8 - *(int *)&(this->UsersMap).field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar5 = *(int *)&(this->UsersMap).field_0x28;
  puVar3 = &(this->UsersMap).field_0x10;
  pTVar4 = &this->UsersMap;
  uVar16 = 1;
  iVar17 = 0;
  iVar10 = iVar14;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->UsersMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar3;
    }
    uVar20 = *puVar19;
    iVar17 = 0;
    iVar14 = 0;
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1423dd96d;
      uVar20 = puVar19[lVar12 + 1];
    }
    uVar16 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar10 = local_res10 + -1 + iVar17;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_1423dd96d:
  TStack_70._padding_ = CONCAT44(uVar16,iVar14);
  uVar16 = *(uint *)&(this->UsersMap).field_0x28;
  uVar20 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->UsersMap).field_0x8 - *(int *)&(this->UsersMap).field_0x34);
  local_res20 = pTVar4;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArray<TSharedRef<FGenericAccessibleUser,1>,TSizedDefaultAllocator<32>_> *)
              (*pcVar7)();
    return pTVar11;
  }
  pTVar8 = local_res20;
  uVar6 = *(uint *)&(this->UsersMap).field_0x28;
  if (uVar16 != uVar6) {
    puVar18 = *(undefined1 **)&(this->UsersMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar3;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1423dda80;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar16 = local_res18 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_1423dda80:
  while( true ) {
    if (*(int *)&(this->UsersMap).field_0x8 - *(int *)&(this->UsersMap).field_0x34 != (int)uStack_50
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar4 == pTVar8))
    break;
    pFVar15 = (FScriptContainerElement *)
              (*(longlong *)pTVar4 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x20);
    pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar13 <= pFVar15) && (pFVar15 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TArray<TSharedRef<FGenericAccessibleUser,1>,TSizedDefaultAllocator<32>_> *)
                (*pcVar7)();
      return pTVar11;
    }
    iVar14 = __return_storage_ptr__->ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar14 + 1;
    pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
    *(undefined8 *)pFVar13 = *(undefined8 *)pFVar15;
    lVar12 = *(longlong *)(pFVar15 + 8);
    *(longlong *)(pFVar13 + 8) = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetNumberofUsers @ 1423e0b90

int __thiscall
FGenericAccessibleUserRegistry::GetNumberofUsers(FGenericAccessibleUserRegistry *this)

{
  return *(int *)&(this->UsersMap).field_0x8 - *(int *)&(this->UsersMap).field_0x34;
}

// GetUser @ 1423e4bb0

TSharedPtr<FGenericAccessibleUser,1> * __thiscall
FGenericAccessibleUserRegistry::GetUser
          (FGenericAccessibleUserRegistry *this,
          TSharedPtr<FGenericAccessibleUser,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FGenericAccessibleUser,1> *pTVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (*(int *)&(this->UsersMap).field_0x8 != *(int *)&(this->UsersMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->UsersMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->UsersMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->UsersMap).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->UsersMap;
      do {
        if (*(int *)((longlong)iVar5 * 0x20 + lVar1) == param_1) {
          if (iVar5 != -1) {
            pTVar3 = TMapBase<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
                     ::FindChecked((TMapBase<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
                                    *)&this->UsersMap,param_1);
            __return_storage_ptr__->Object = pTVar3->Object;
            pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
            if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar1);
      } while (iVar5 != -1);
    }
  }
  __return_storage_ptr__->Object = (FGenericAccessibleUser *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsUserRegistered @ 1423eb430

bool __thiscall
FGenericAccessibleUserRegistry::IsUserRegistered(FGenericAccessibleUserRegistry *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->UsersMap).field_0x8 != *(int *)&(this->UsersMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->UsersMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->UsersMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(*(int *)&(this->UsersMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->UsersMap) == param_1)
        goto LAB_1423eb47c;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->UsersMap);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1423eb47c:
  return iVar1 != -1;
}

// RegisterUser @ 1423fee10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericAccessibleUserRegistry::RegisterUser
          (FGenericAccessibleUserRegistry *this,TSharedRef<FGenericAccessibleUser,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_res8 [2];
  TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&> local_res10;
  uint *local_18;
  TSharedRef<FGenericAccessibleUser,1> *local_10;
  
  local_res8[0] = param_1->Object->UserIndex;
  if (*(int *)&(this->UsersMap).field_0x8 != *(int *)&(this->UsersMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->UsersMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->UsersMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->UsersMap).field_0x48 - 1U & local_res8[0])
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->UsersMap).field_0x0;
      do {
        if (*(uint *)((longlong)iVar2 * 0x20 + lVar1) == local_res8[0]) {
          if (5 < (byte)LogAccessibility._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
          }
          return false;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  local_18 = local_res8;
  local_10 = param_1;
  TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&>_>
            ((TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
              *)&this->UsersMap,&local_res10,(bool *)&local_18);
  (**(code **)(param_1->Object->_padding_ + 8))();
  return true;
}

// UnregisterAllUsers @ 14240b0a0

void __thiscall
FGenericAccessibleUserRegistry::UnregisterAllUsers(FGenericAccessibleUserRegistry *this)

{
  undefined1 *puVar1;
  TMap<int,TSharedRef<FGenericAccessibleUser,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->UsersMap).field_0x28;
  puVar1 = &(this->UsersMap).field_0x10;
  this_00 = &this->UsersMap;
  iVar10 = 0;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->UsersMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    iVar12 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14240b14d;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14240b14d:
  uVar9 = *(uint *)&(this->UsersMap).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->UsersMap).field_0x8 - *(int *)&(this->UsersMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->UsersMap).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->UsersMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14240b250;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14240b250:
  while( true ) {
    if (*(int *)&(this->UsersMap).field_0x8 - *(int *)&(this->UsersMap).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                   *(longlong *)&this_00->field_0x0) + 0x10))();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->UsersMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->UsersMap).field_0x8);
  puVar1 = &(this->UsersMap).field_0xc;
  *(undefined4 *)&(this->UsersMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->UsersMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsersMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->UsersMap).field_0x2c;
  *(undefined4 *)&(this->UsersMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->UsersMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UsersMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->UsersMap).field_0x48 = 1;
    TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// UnregisterUser @ 14240b990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericAccessibleUserRegistry::UnregisterUser(FGenericAccessibleUserRegistry *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int local_res10 [6];
  
  if (*(int *)&(this->UsersMap).field_0x8 != *(int *)&(this->UsersMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->UsersMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->UsersMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->UsersMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->UsersMap).field_0x0);
        if (*piVar3 == param_1) {
          piVar2 = piVar3 + 2;
          if (piVar3 == (int *)0x0) {
            piVar2 = (int *)0x0;
          }
          if (piVar2 != (int *)0x0) {
            (**(code **)(**(longlong **)piVar2 + 0x10))();
            if (*(int *)&(this->UsersMap).field_0x8 != *(int *)&(this->UsersMap).field_0x34) {
              local_res10[0] = param_1;
              TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>((TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
                                 *)&this->UsersMap,param_1,local_res10);
            }
            return true;
          }
          break;
        }
        iVar1 = piVar3[6];
      } while (iVar1 != -1);
    }
  }
  if (5 < (byte)LogAccessibility._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
  }
  return false;
}

