// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147e44280

UScriptStruct * __cdecl FLatentActionManager::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLatentActionManager.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLatentActionManager.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionManager,(UObject *)pUVar1,
                         L"LatentActionManager");
  }
  return Z_Registration_Info_UScriptStruct_FLatentActionManager.OuterSingleton;
}

// ~FLatentActionManager @ 147e57130

void __thiscall FLatentActionManager::~FLatentActionManager(FLatentActionManager *this)

{
  undefined1 *puVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  code *pcVar9;
  FLatentActionManager *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_10c;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FLatentActionManager *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar4 = *(int *)&(this->ObjectToActionListMap).field_0x28;
  iVar19 = 0;
  iVar22 = 0;
  puVar1 = &(this->ObjectToActionListMap).field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  if (iVar4 != 0) {
    puVar23 = *(uint **)&(this->ObjectToActionListMap).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar18 = *puVar23;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      iVar22 = iVar22 + 0x20;
      iVar19 = iVar19 + 1;
      iVar13 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_147e571de;
      uVar18 = puVar23[lVar15 + 1];
    }
    uVar12 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar13 = iVar22 + -1 + (int)lVar15;
    if (iVar4 < iVar13) {
      iVar13 = iVar4;
    }
  }
LAB_147e571de:
  uVar18 = *(uint *)&(this->ObjectToActionListMap).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar12,iVar19);
  TStack_90.CurrentBitIndex = iVar13;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar22;
  uStack_70 = CONCAT44(uStack_10c,
                       *(int *)&(this->ObjectToActionListMap).field_0x8 -
                       *(int *)&(this->ObjectToActionListMap).field_0x34);
  local_res20 = uVar18;
  local_98 = this;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar12 = *(uint *)&(this->ObjectToActionListMap).field_0x28;
  if (uVar18 != uVar12) {
    puVar20 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar12;
      local_res20 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_147e57300;
      uVar18 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar17;
    local_res20 = uVar18;
    if ((int)uVar12 < (int)uVar18) {
      uVar18 = uVar12;
      local_res20 = uVar12;
    }
  }
LAB_147e57300:
  do {
    pFVar10 = local_98;
    if (*(int *)&(local_98->ObjectToActionListMap).field_0x8 -
        *(int *)&(local_98->ObjectToActionListMap).field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar18) &&
        (TStack_90.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectToActionListMap).field_0x10)) &&
       (pFVar10 == this)) {
      DestructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int>
                ((TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>
                  *)(this->ActionsToRemoveMap).AllocatorInstance.Data,
                 (this->ActionsToRemoveMap).ArrayNum);
      pFVar7 = (this->ActionsToRemoveMap).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      *(undefined4 *)&(this->ObjectToActionListMap).field_0x48 = 0;
      pvVar8 = *(void **)&(this->ObjectToActionListMap).field_0x40;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
      return;
    }
    lVar15 = (longlong)TStack_90.CurrentBitIndex * 0x20 +
             *(longlong *)&pFVar10->ObjectToActionListMap;
    plVar5 = *(longlong **)(lVar15 + 8);
    if (plVar5 != (longlong *)0x0) {
      iVar4 = (int)plVar5[5];
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar5 + 2);
      iVar19 = 0;
      iVar22 = 0;
      uVar12 = 1;
      iVar14 = 0;
      if (iVar4 != 0) {
        pTVar21 = pTVar2;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
        }
        uVar18 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
        while (uVar18 == 0) {
          lVar16 = (longlong)iVar19;
          iVar22 = iVar22 + 0x20;
          iVar19 = iVar19 + 1;
          iVar14 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_147e573ce;
          uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uVar12 = -uVar18 & uVar18;
        uVar3 = (ulonglong)uVar12 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = iVar22 + -1 + (int)lVar16;
        if (iVar4 < iVar14) {
          iVar14 = iVar4;
        }
      }
LAB_147e573ce:
      uVar18 = *(uint *)(plVar5 + 5);
      uVar17 = uVar18 & 0xffffffe0;
      TStack_c0._padding_ = CONCAT44(uVar12,iVar19);
      TStack_c0.CurrentBitIndex = iVar14;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar18 >> 5;
      TStack_c0._28_4_ = iVar13;
      TStack_c0.BaseBitIndex = iVar22;
      uStack_a0 = CONCAT44(uStack_cc,(int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34));
      TStack_c0.Array = pTVar2;
      if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar12 = *(uint *)(plVar5 + 5);
      if (uVar18 != uVar12) {
        pTVar21 = pTVar2;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                 *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
        while (uVar18 == 0) {
          lVar16 = (longlong)iVar19;
          uVar17 = uVar17 + 0x20;
          iVar19 = iVar19 + 1;
          uVar18 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_147e574e0;
          uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar18 = (int)lVar16 + -1 + uVar17;
        if ((int)uVar12 < (int)uVar18) {
          uVar18 = uVar12;
        }
      }
LAB_147e574e0:
      while( true ) {
        if ((int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34) != (int)uStack_a0) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FPendingLatentAction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TStack_c0.CurrentBitIndex == uVar18) && (TStack_c0.Array == pTVar2)) break;
        puVar6 = *(undefined8 **)(*plVar5 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
        *(undefined8 *)(*plVar5 + (longlong)TStack_c0.CurrentBitIndex * 0x18 + 8) = 0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
      if ((*(longlong *)(lVar15 + 8) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
      ::Reset(*(TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
                **)(lVar15 + 8));
      uVar18 = local_res20;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// AddNewAction @ 147e5b070

void __thiscall
FLatentActionManager::AddNewAction
          (FLatentActionManager *this,UObject *param_1,int param_2,FPendingLatentAction *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FLatentActionManager::FObjectActions,1> *this_00;
  TPairInitializer<int_const_&,FPendingLatentAction_*_const_&> local_res8;
  int local_res18 [2];
  FPendingLatentAction *local_res20;
  UObject *local_38;
  TRawPtrProxy<FLatentActionManager::FObjectActions> local_30;
  int *local_28;
  FPendingLatentAction **local_20;
  
  local_res18[0] = param_2;
  local_res20 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.Value = (FPendingLatentAction **)0x0;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_38);
  this_00 = TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>_>
            ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
                      ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>_>
                        *)this,(uint)((ulonglong)local_res8.Value >> 0x20) ^ (uint)local_res8.Value,
                       (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8.Value);
  if (this_00->Object == (FObjectActions *)0x0) {
    local_30.Object = ::operator_new(0x58);
    if (local_30.Object != (FObjectActions *)0x0) {
      *(undefined8 *)&(local_30.Object)->ActionList = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x8 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x10 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x18 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x20 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x28 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x30 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x38 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x40 = 0;
      *(undefined8 *)&((local_30.Object)->ActionList).field_0x48 = 0;
      *(undefined8 *)&(local_30.Object)->bProcessedThisFrame = 0;
      *(undefined4 *)&((local_30.Object)->ActionList).field_0x2c = 0x80;
      *(undefined4 *)&((local_30.Object)->ActionList).field_0x30 = 0xffffffff;
    }
    TSharedPtr<FLatentActionManager::FObjectActions,1>::
    operator=<FLatentActionManager::FObjectActions>(this_00,&local_30);
    if (this_00->Object == (FObjectActions *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_28 = local_res18;
  local_20 = &local_res20;
  TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FPendingLatentAction_*_const_&>_>
            ((TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
              *)this_00->Object,&local_res8,(bool *)&local_28);
  TMulticastDelegate<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
  ::Broadcast(&LatentActionsChangedDelegate,param_1,ActionsAdded);
  return;
}

// BeginFrame @ 147e5e2e0

void __thiscall FLatentActionManager::BeginFrame(FLatentActionManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ObjectToActionListMap).field_0x28;
  puVar1 = &(this->ObjectToActionListMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ObjectToActionListMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147e5e37d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147e5e37d:
  uVar10 = *(uint *)&(this->ObjectToActionListMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ObjectToActionListMap).field_0x8 -
                       *(int *)&(this->ObjectToActionListMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ObjectToActionListMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147e5e480;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar10 = local_res18 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_147e5e480:
  while( true ) {
    if (*(int *)&(this->ObjectToActionListMap).field_0x8 -
        *(int *)&(this->ObjectToActionListMap).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
             *(longlong *)&this->ObjectToActionListMap);
    if ((lVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectActions",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                           ,0x61,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined1 *)(lVar8 + 0x50) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetActionsForObject @ 147e66d00

FObjectActions * __thiscall
FLatentActionManager::GetActionsForObject
          (FLatentActionManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1)

{
  FWeakObjectPtr FVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  FVar1 = param_1->WeakPtr;
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 !=
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ObjectToActionListMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (((ulonglong)FVar1 >> 0x20 ^ (ulonglong)FVar1 & 0xffffffff) &
                              (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) *
                              4);
    if (iVar3 != -1) {
      do {
        puVar4 = (undefined8 *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
        if (((int)*puVar4 == FVar1.ObjectIndex) &&
           ((int)((ulonglong)*puVar4 >> 0x20) == FVar1.ObjectSerialNumber)) {
          if (iVar3 == -1) {
            return (FObjectActions *)0x0;
          }
          puVar2 = puVar4 + 1;
          if (puVar4 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          if (puVar2 == (undefined8 *)0x0) {
            return (FObjectActions *)0x0;
          }
          return (FObjectActions *)*puVar2;
        }
        iVar3 = *(int *)(puVar4 + 3);
      } while (iVar3 != -1);
    }
  }
  return (FObjectActions *)0x0;
}

// GetNumActionsForObject @ 147e68cc0

int __thiscall
FLatentActionManager::GetNumActionsForObject
          (FLatentActionManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  FObjectActions *pFVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  pFVar1 = GetActionsForObject(this,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res10);
  if (pFVar1 != (FObjectActions *)0x0) {
    return *(int *)&(pFVar1->ActionList).field_0x8 - *(int *)&(pFVar1->ActionList).field_0x34;
  }
  return 0;
}

// ProcessLatentActions @ 147e72bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLatentActionManager::ProcessLatentActions
          (FLatentActionManager *this,UObject *param_1,float param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>
  *pTVar3;
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *pTVar4;
  TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
  *this_00;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TArray<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_RemoveLatentActions> FVar18;
  longlong *plVar19;
  UObject *pUVar20;
  undefined8 *puVar21;
  FThreadSafeStaticStat<FStat_STAT_TickLatentActions> FVar22;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  FName FVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  longlong lVar35;
  uint *puVar36;
  longlong *plVar37;
  int *piVar38;
  FName local_res20;
  undefined1 local_238 [4];
  uint local_234;
  FWeakObjectPtr local_230;
  longlong *local_228;
  int local_220;
  int local_21c;
  int local_218;
  FColor_u_0 local_210;
  uint local_20c;
  FColor_u_0 local_208;
  FColor_u_0 local_204;
  int *local_200;
  FName local_1f8;
  FName local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8 [2];
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
  *pTStack_190;
  FLatentActionManager *local_188;
  char local_180;
  char cStack_17f;
  FName local_178;
  FName local_168;
  int local_158;
  longlong local_150;
  TArray<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,TSizedDefaultAllocator<32>_>
  *local_148;
  UObject *local_140;
  LARGE_INTEGER local_138;
  FStatMessage local_130;
  TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  FDestructionSentinel local_c8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined4 local_4c;
  
  if ((this->ActionsToRemoveMap).ArrayNum != 0) {
    FVar18 = StatPtr_STAT_RemoveLatentActions;
    if (StatPtr_STAT_RemoveLatentActions ==
        (FThreadSafeStaticStat<FStat_STAT_RemoveLatentActions>)0x0) {
      pFVar17 = ::FName::FName(&local_b0,"STAT_RemoveLatentActions");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_RemoveLatentActions>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveLatentActions,*pFVar17,
                          L"Remove Latent Actions","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    FVar27 = *(FName *)FVar18;
    bVar8 = false;
    bVar7 = false;
    local_178.ComparisonIndex.Value = 0;
    local_178.Number = 0;
    bVar11 = false;
    bVar14 = false;
    if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_147e72d42:
      bVar8 = bVar11;
      bVar7 = bVar14;
      bVar14 = false;
      local_1d8 = local_178;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_210.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_210._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar8 = false;
        bVar7 = true;
        bVar11 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1e8.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
          local_1e8.Number = FVar27.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1e8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                     ,0xb1);
          bVar8 = true;
          bVar7 = true;
          bVar11 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147e72d42;
      local_1d8 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar14 = true;
    }
    local_148 = &this->ActionsToRemoveMap;
    local_234 = 0;
    piVar28 = &(this->ActionsToRemoveMap).ArrayNum;
    while( true ) {
      pTVar10 = local_148;
      uVar30 = local_234;
      plVar37 = (longlong *)0x0;
      if (((int)local_234 < 0) ||
         (piVar28 = &local_148->ArrayNum, local_200 = piVar28, local_148->ArrayNum <= (int)local_234
         )) break;
      uVar29 = ~local_234 >> 0x1f;
      local_20c = uVar29;
      if (((int)local_234 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar35 = (longlong)(int)uVar30;
      local_150 = lVar35 * 3;
      uVar1 = *(undefined8 *)((pTVar10->AllocatorInstance).Data + lVar35 * 0x18);
      uVar15 = (uint)uVar1;
      uVar34 = (uint)((ulonglong)uVar1 >> 0x20);
      if (*(int *)&(this->ObjectToActionListMap).field_0x8 !=
          *(int *)&(this->ObjectToActionListMap).field_0x34) {
        puVar33 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
        puVar32 = &(this->ObjectToActionListMap).field_0x38;
        if (puVar33 != (undefined1 *)0x0) {
          puVar32 = puVar33;
        }
        iVar16 = *(int *)(puVar32 +
                         (ulonglong)
                         (*(int *)&(this->ObjectToActionListMap).field_0x48 - 1U & (uVar15 ^ uVar34)
                         ) * 4);
        if (iVar16 != -1) {
          do {
            puVar24 = (undefined8 *)
                      ((longlong)iVar16 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
            if (((uint)*puVar24 == uVar15) && ((uint)((ulonglong)*puVar24 >> 0x20) == uVar34)) {
              if (iVar16 != -1) {
                plVar19 = puVar24 + 1;
                if (puVar24 == (undefined8 *)0x0) {
                  plVar19 = plVar37;
                }
                if (plVar19 != (longlong *)0x0) {
                  plVar37 = (longlong *)*plVar19;
                }
              }
              break;
            }
            iVar16 = *(int *)(puVar24 + 3);
          } while (iVar16 != -1);
        }
      }
      uVar15 = 0;
      if ((int)uVar30 < *piVar28) {
        uVar15 = uVar29;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->ActionsToRemoveMap).AllocatorInstance.Data;
      puVar24 = *(undefined8 **)(pFVar2 + lVar35 * 0x18 + 8);
      local_1e0 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar35 * 0x18 + 0x10);
      if (local_1e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_1e0->SharedReferenceCount = (atomic<int>)((int)local_1e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((puVar24 != (undefined8 *)0x0) && (plVar37 != (longlong *)0x0)) {
        iVar16 = *(int *)(puVar24 + 1);
        piVar28 = (int *)*puVar24;
        piVar38 = piVar28 + (longlong)iVar16 * 4;
LAB_147e72ed3:
        if (*(int *)(puVar24 + 1) != iVar16) {
          local_238[0] = 0;
          `TCheckedPointerIterator<TTuple<int,FPendingLatentAction_*>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_238);
        }
        if (piVar28 != piVar38) {
          local_220 = *piVar28;
          plVar19 = *(longlong **)(piVar28 + 2);
          local_21c = -1;
          local_228 = plVar37;
          if ((int)plVar37[9] == 0) {
            local_218 = -1;
LAB_147e7303c:
            piVar28 = piVar28 + 4;
          }
          else {
            plVar25 = plVar37 + 7;
            if ((longlong *)plVar37[8] != (longlong *)0x0) {
              plVar25 = (longlong *)plVar37[8];
            }
            local_218 = *(int *)((longlong)plVar25 +
                                ((longlong)(int)plVar37[9] - 1U & (longlong)local_220) * 4);
            local_21c = local_218;
            if (local_218 != -1) {
              do {
                local_218 = *(int *)(*plVar37 + 0x10 + (longlong)local_21c * 0x18);
                if (*(int *)(*plVar37 + (longlong)local_21c * 0x18) == local_220) break;
                local_21c = local_218;
              } while (local_218 != -1);
            }
            if (local_21c == -1) goto LAB_147e7303c;
            lVar35 = *plVar37;
            do {
              if (*(longlong **)(lVar35 + 8 + (longlong)local_21c * 0x18) == plVar19) {
                TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
                ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_228);
                if (plVar19 == (longlong *)0x0) goto LAB_147e7303c;
                (**(code **)(*plVar19 + 0x18))(plVar19);
                (**(code **)*plVar19)(plVar19,1);
                piVar28 = piVar28 + 4;
                goto LAB_147e72ed3;
              }
              local_21c = local_218;
              if (local_218 == -1) goto LAB_147e7303c;
              do {
                local_218 = *(int *)(lVar35 + 0x10 + (longlong)local_21c * 0x18);
                if (*(int *)(lVar35 + (longlong)local_21c * 0x18) == local_220) break;
                local_21c = local_218;
              } while (local_218 != -1);
            } while (local_21c != -1);
            piVar28 = piVar28 + 4;
          }
          goto LAB_147e72ed3;
        }
        uVar30 = 0;
        if ((int)local_234 < *local_200) {
          uVar30 = local_20c;
        }
        if ((uVar30 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((this->ActionsToRemoveMap).AllocatorInstance.Data +
                                      local_150 * 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &LatentActionsChangedDelegate,(FWriteAccessScope *)&local_c8);
        bVar11 = false;
        LatentActionsChangedDelegate._28_4_ = LatentActionsChangedDelegate._28_4_ + 1;
        uVar30 = LatentActionsChangedDelegate._16_4_ - 1;
        if (-1 < (int)uVar30) {
          lVar35 = (longlong)(int)uVar30 << 4;
          bVar11 = false;
          do {
            uVar29 = 0;
            if ((int)uVar30 < (int)LatentActionsChangedDelegate._16_4_) {
              uVar29 = ~uVar30 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((*(int *)(LatentActionsChangedDelegate._8_8_ + 8 + lVar35) == 0) ||
                (plVar37 = *(longlong **)(LatentActionsChangedDelegate._8_8_ + lVar35),
                plVar37 == (longlong *)0x0)) ||
               (cVar13 = (**(code **)(*plVar37 + 0x68))(plVar37,pUVar20), cVar13 == '\0')) {
              bVar11 = true;
            }
            lVar35 = lVar35 + -0x10;
            uVar30 = uVar30 - 1;
          } while (-1 < (int)uVar30);
        }
        LatentActionsChangedDelegate._28_4_ = LatentActionsChangedDelegate._28_4_ + -1;
        if (bVar11) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &LatentActionsChangedDelegate,false);
        }
        piVar28 = local_200;
        if (local_c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
          piVar28 = local_200;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e0)
      ;
      local_234 = local_234 + 1;
    }
    piVar38 = &local_148->ArrayMax;
    pTVar3 = (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>
              *)(local_148->AllocatorInstance).Data;
    if (local_148->ArrayMax < 0) {
      DestructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int>
                (pTVar3,*piVar28);
      iVar16 = *piVar38;
      *piVar28 = 0;
      if (iVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar10->AllocatorInstance,0,piVar38);
      }
    }
    else {
      DestructItems<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>_>,int>
                (pTVar3,*piVar28);
      *piVar28 = 0;
    }
    FVar27 = local_1d8;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar14) {
      FThreadStats::AddMessage(FVar27,CycleScopeEnd);
    }
  }
  puVar24 = (undefined8 *)0x0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    local_140 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_140);
    if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
        *(int *)&(this->ObjectToActionListMap).field_0x34) {
      return;
    }
    puVar33 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(this->ObjectToActionListMap).field_0x38;
    }
    iVar16 = *(int *)(puVar33 +
                     (((ulonglong)local_230 & 0xffffffff ^ (ulonglong)local_230 >> 0x20) &
                     (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4);
    if (iVar16 == -1) {
      return;
    }
    while( true ) {
      puVar26 = (undefined8 *)((longlong)iVar16 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
      if (((int)*puVar26 == local_230.ObjectIndex) &&
         ((int)((ulonglong)*puVar26 >> 0x20) == local_230.ObjectSerialNumber)) break;
      iVar16 = *(int *)(puVar26 + 3);
      if (iVar16 == -1) {
        return;
      }
    }
    if (iVar16 == -1) {
      return;
    }
    puVar21 = puVar26 + 1;
    if (puVar26 == (undefined8 *)0x0) {
      puVar21 = puVar24;
    }
    if (puVar21 == (undefined8 *)0x0) {
      return;
    }
    pTVar4 = (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
              *)*puVar21;
    if (pTVar4 == (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                   *)0x0) {
      return;
    }
    if (*(char *)(pTVar4 + 1) != '\0') {
      return;
    }
    FVar22 = StatPtr_STAT_TickLatentActions;
    if (StatPtr_STAT_TickLatentActions == (FThreadSafeStaticStat<FStat_STAT_TickLatentActions>)0x0)
    {
      pFVar17 = ::FName::FName(&local_a8,"STAT_TickLatentActions");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_TickLatentActions>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickLatentActions,*pFVar17,
                          L"Blueprint Latent Actions","STATGROUP_Game","STATCAT_Advanced",L"Game",
                          true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar27 = *(FName *)FVar22;
    bVar7 = false;
    bVar14 = false;
    local_1f8.ComparisonIndex.Value = 0;
    local_1f8.Number = 0;
    if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_208.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_208._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
        bVar7 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1d0.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
          local_1d0.Number = FVar27.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1d0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                     ,0xd0);
          bVar7 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_1f8 = FVar27;
        FThreadStats::AddMessage(FVar27,CycleScopeStart);
        puVar24 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffff);
        bVar8 = true;
        goto LAB_147e73495;
      }
    }
    bVar8 = false;
    FVar27 = local_1f8;
LAB_147e73495:
    TickLatentActionForObject(this,param_2,pTVar4,param_1);
    *(undefined1 *)(pTVar4 + 1) = 1;
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar8) {
      return;
    }
    if (FVar27 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return;
    }
    local_130.NameAndInfo.Index.Value = (uint)puVar24;
    local_130.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
    QueryPerformanceCounter(&local_138);
    local_130.StatData.Pad[4] = '\0';
    local_130.StatData.Pad[5] = '\0';
    local_130.StatData.Pad[6] = '\0';
    local_130.StatData.Pad[7] = '\0';
    local_130.StatData.Pad[0] = local_138.s.LowPart._0_1_;
    local_130.StatData.Pad[1] = local_138.s.LowPart._1_1_;
    local_130.StatData.Pad[2] = local_138.s.LowPart._2_1_;
    local_130.StatData.Pad[3] = local_138.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_01,&local_130);
    piVar28 = &this_01->ScopeCount;
    *piVar28 = *piVar28 + -1;
    if (*piVar28 == 0) {
      FThreadStats::Flush(this_01,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive == false) {
      return;
    }
    FThreadStats::FlushRawStats(this_01,false,false);
    return;
  }
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return;
  }
  FVar22 = StatPtr_STAT_TickLatentActions;
  if (StatPtr_STAT_TickLatentActions == (FThreadSafeStaticStat<FStat_STAT_TickLatentActions>)0x0) {
    pFVar17 = ::FName::FName(&local_a0,"STAT_TickLatentActions");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_TickLatentActions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickLatentActions,*pFVar17,
                        L"Blueprint Latent Actions","STATGROUP_Game","STATCAT_Advanced",L"Game",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  local_res20 = *(FName *)FVar22;
  bVar7 = false;
  bVar8 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar14 = false;
  bVar11 = false;
  if ((local_res20.ComparisonIndex.Value.Value != 0) ||
     (bVar12 = bVar7, bVar9 = bVar8, local_res20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_204.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_204._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar14 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8[0].ComparisonIndex.Value = local_res20.ComparisonIndex.Value.Value;
        local_1c8[0].Number = local_res20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_1c8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                   ,0xdc);
        bVar7 = true;
        bVar8 = true;
        bVar14 = true;
        bVar11 = true;
      }
    }
    bVar12 = bVar7;
    bVar9 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_res20,CycleScopeStart);
      bVar14 = true;
      bVar11 = true;
      goto LAB_147e736dc;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar14;
  bVar14 = false;
  bVar11 = false;
  local_res20 = local_168;
LAB_147e736dc:
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
              *)this);
  local_180 = '\0';
  cStack_17f = '\0';
  stack0xfffffffffffffe58 = local_98._16_16_;
  local_1b8 = (longlong *)local_98._0_8_;
  auStack_1b0._0_8_ = local_98._8_8_;
  local_198 = local_78;
  pTStack_190 = pTStack_70;
  uVar23 = local_98._24_8_ >> 0x20;
  uVar30 = local_98._28_4_;
  local_188 = this;
  if ((int)uVar30 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar37 = local_1b8;
      pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)(int)uVar23 * 0x20 + *local_1b8));
      this_00 = *(TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
                  **)((longlong)(int)uVar30 * 0x20 + 8 + *plVar37);
      if ((this_00 ==
           (TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
            *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ObjectActions",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                              ,0xe1,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pUVar20 == (UObject *)0x0) {
        iVar16 = *(int *)&(this_00->Elements).field_0x28;
        TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10;
        iStack_f0 = 0;
        local_d8 = 0;
        uStack_ec = 1;
        iStack_dc = 0;
        if (iVar16 != 0) {
          puVar5 = *(uint **)&(this_00->Elements).field_0x20;
          puVar36 = (uint *)TStack_118.Array;
          if (puVar5 != (uint *)0x0) {
            puVar36 = puVar5;
          }
          uStack_ec = *puVar36;
          while (uStack_ec == 0) {
            lVar35 = (longlong)iStack_f0;
            local_d8 = local_d8 + 0x20;
            iStack_f0 = iStack_f0 + 1;
            uStack_ec = 1;
            iStack_dc = iVar16;
            if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
            goto LAB_147e73890;
            uStack_ec = puVar36[lVar35 + 1];
          }
          uStack_ec = -uStack_ec & uStack_ec;
          uVar23 = (ulonglong)uStack_ec * 2 + 1;
          lVar35 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          local_158 = (int)lVar35;
          iStack_dc = local_d8 + -1 + local_158;
          if (iVar16 < iStack_dc) {
            iStack_dc = iVar16;
          }
        }
LAB_147e73890:
        uStack_e0 = 0xffffffff;
        uStack_d4 = local_4c;
        TStack_118._padding_ = CONCAT44(uStack_ec,iStack_f0);
        TStack_118.CurrentBitIndex = iStack_dc;
        TStack_118.UnvisitedBitMask = 0xffffffff;
        TStack_118._28_4_ = local_4c;
        TStack_118.BaseBitIndex = local_d8;
        local_120 = this_00;
        local_f8 = this_00;
        local_e8 = (undefined1 *)TStack_118.Array;
        iVar31 = iStack_dc;
        if (iStack_dc < iVar16) {
          do {
            plVar37 = *(longlong **)
                       (*(longlong *)&local_120->Elements + 8 + (longlong)iVar31 * 0x18);
            if (plVar37 != (longlong *)0x0) {
              (**(code **)(*plVar37 + 0x10))(plVar37);
              (**(code **)*plVar37)(plVar37,1);
            }
            TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
            iVar31 = TStack_118.CurrentBitIndex;
          } while (TStack_118.CurrentBitIndex < (TStack_118.Array)->NumBits);
        }
        TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
        ::Reset(this_00);
      }
      else if ((*(char *)&this_00[1].Elements == '\0') &&
              (0 < *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34)
              ) {
        TickLatentActionForObject
                  (this,param_2,
                   (TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                    *)this_00,pUVar20);
        if ((this_00 !=
             *(TSet<TTuple<int,FPendingLatentAction_*>,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>,FDefaultSetAllocator>
               **)((longlong)(int)uVar30 * 0x20 + 8 + *plVar37)) &&
           (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6115097899727585043>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                                ,0xed,"ObjectActions == ObjIt.Value().Get()"), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)&this_00[1].Elements = 1;
      }
      if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_190,uVar30);
        local_180 = '\x01';
      }
      uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
      uVar23 = (ulonglong)uStack_19c;
      uVar30 = uStack_19c;
    } while ((int)uStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
    bVar12 = bVar7;
    bVar14 = bVar11;
    bVar9 = bVar8;
    if ((local_180 != '\0') && (cStack_17f != '\0')) {
      uVar30 = *(int *)&(local_188->ObjectToActionListMap).field_0x8 -
               *(int *)&(local_188->ObjectToActionListMap).field_0x34;
      if (uVar30 < 4) {
        iVar16 = 1;
      }
      else {
        uVar23 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
        lVar35 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        iVar16 = 1 << ((byte)lVar35 & 0x1f);
      }
      if (((0 < (int)uVar30) && (*(int *)&(local_188->ObjectToActionListMap).field_0x48 < iVar16))
         || (iVar16 < *(int *)&(local_188->ObjectToActionListMap).field_0x48)) {
        *(int *)&(local_188->ObjectToActionListMap).field_0x48 = iVar16;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>_>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,1>,0>,FDefaultSetAllocator>
                  *)local_188);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_res20,CycleScopeEnd);
  }
  return;
}

// RemoveActionsForObject @ 147e79590

void __thiscall
FLatentActionManager::RemoveActionsForObject
          (FLatentActionManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FObjectActions *pFVar9;
  TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FSharedReferencer<1> FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint *puVar15;
  FWeakObjectPtr local_res10;
  int local_res18;
  TRawPtrProxy<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_> local_res20;
  TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1> local_c8;
  FObjectActions *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  FObjectActions *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_44;
  
  local_res10 = param_1.WeakPtr;
  pFVar9 = GetActionsForObject(this,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
  if (pFVar9 != (FObjectActions *)0x0) {
    pFVar14 = (this->ActionsToRemoveMap).AllocatorInstance.Data;
    pFVar4 = pFVar14 + (longlong)(this->ActionsToRemoveMap).ArrayNum * 0x18;
    if (pFVar14 != pFVar4) {
      do {
        if ((*(int *)pFVar14 == param_1.WeakPtr.ObjectIndex) &&
           (*(int *)(pFVar14 + 4) == local_res10.ObjectSerialNumber)) {
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            FVar12.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar14 + 0x10);
            local_c8.Object =
                 *(TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> **)
                  (pFVar14 + 8);
            local_c8.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
            if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar12.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_147e796af;
          }
          break;
        }
        pFVar14 = pFVar14 + 0x18;
      } while (pFVar14 != pFVar4);
    }
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c8.Object = (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0;
    pTVar10 = ::operator_new(0x10);
    local_res20.Object =
         (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar10 != (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
      local_res20.Object = pTVar10;
    }
    TSharedPtr<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,1>::
    operator=<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>
              (&local_c8,&local_res20);
    FVar12.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar8 = (this->ActionsToRemoveMap).ArrayNum;
    piVar1 = &(this->ActionsToRemoveMap).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->ActionsToRemoveMap).AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar8;
    (this->ActionsToRemoveMap).ArrayNum = iVar8 + 1;
    pFVar4 = (this->ActionsToRemoveMap).AllocatorInstance.Data;
    *(FWeakObjectPtr *)(pFVar4 + lVar11 * 0x18) = param_1.WeakPtr;
    *(TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> **)
     (pFVar4 + lVar11 * 0x18 + 8) = local_c8.Object;
    *(TReferenceControllerBase<1> **)(pFVar4 + lVar11 * 0x18 + 0x10) = FVar12.ReferenceController;
LAB_147e796af:
    pTVar10 = local_c8.Object;
    iVar8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((pTVar10 == (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar10 == (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = (pTVar10->ArrayNum - *(int *)&(pFVar9->ActionList).field_0x34) +
             *(int *)&(pFVar9->ActionList).field_0x8;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (pTVar10->ArrayMax < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar13,&pTVar10->AllocatorInstance,pTVar10->ArrayNum,&pTVar10->ArrayMax);
    }
    iVar3 = *(int *)&(pFVar9->ActionList).field_0x28;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar9->ActionList).field_0x10;
    uStack_84 = 1;
    local_70 = 0;
    iStack_74 = local_70;
    iStack_88 = iVar8;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(pFVar9->ActionList).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_b0.Array;
      }
      uVar13 = *puVar15;
      local_70 = iVar8;
      while (uVar13 == 0) {
        lVar11 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_147e797de;
        uVar13 = puVar15[lVar11 + 1];
      }
      uStack_84 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_84 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      iStack_74 = local_70 + -1 + local_res18;
      if (iVar3 < iStack_74) {
        iStack_74 = iVar3;
      }
    }
LAB_147e797de:
    uStack_78 = 0xffffffff;
    uStack_6c = local_44;
    TStack_b0._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._28_4_ = local_44;
    TStack_b0.BaseBitIndex = local_70;
    local_b8 = pFVar9;
    local_90 = pFVar9;
    local_80 = (undefined1 *)TStack_b0.Array;
    TStack_b0.CurrentBitIndex = iStack_74;
    if (iStack_74 < iVar3) {
      do {
        if ((pTVar10 ==
             (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (FScriptContainerElement *)
                 (*(longlong *)&local_b8->ActionList + (longlong)TStack_b0.CurrentBitIndex * 0x18);
        pFVar14 = (pTVar10->AllocatorInstance).Data;
        if (((pFVar14 <= pFVar4) && (pFVar4 < pFVar14 + (longlong)pTVar10->ArrayMax * 0x10)) &&
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
        iVar8 = pTVar10->ArrayNum;
        if (iVar8 == pTVar10->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
        }
        pTVar10->ArrayNum = iVar8 + 1;
        uVar6 = *(undefined8 *)(pFVar4 + 8);
        pFVar14 = (pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar14 = *(undefined8 *)pFVar4;
        *(undefined8 *)(pFVar14 + 8) = uVar6;
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        FVar12.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
  }
  return;
}

// TickLatentActionForObject @ 147e82400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLatentActionManager::TickLatentActionForObject
          (FLatentActionManager *this,float param_1,
          TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
          *param_2,UObject *param_3)

{
  FName *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  FPendingLatentAction *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  UObject *this_00;
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  UObject *this_01;
  UFunction *pUVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  ForElementType<TTuple<int,FPendingLatentAction_*>_> FVar15;
  uint uVar16;
  ForElementType<TTuple<int,FPendingLatentAction_*>_> FVar17;
  uint uVar18;
  uint uVar19;
  FName *this_02;
  undefined1 *puVar20;
  undefined1 auStackY_3d8 [32];
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386 [6];
  UObject *local_380;
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *local_378;
  int iStack_370;
  uint uStack_36c;
  undefined1 *local_368;
  undefined4 uStack_360;
  int iStack_35c;
  int local_358;
  int iStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  int local_348;
  int local_344;
  TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
  *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_338;
  undefined8 uStack_318;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FName local_2d8 [10];
  FName *local_288;
  int local_280;
  undefined4 local_27c;
  char local_278;
  float local_274;
  ForElementType<TTuple<int,FPendingLatentAction_*>_> local_268;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_5c = 0x20;
  local_268.SecondaryData = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0;
  puVar3 = &param_2->field_0x10;
  local_60 = 0;
  iVar9 = *(int *)&param_2->field_0x28;
  iStack_370 = 0;
  local_358 = 0;
  uStack_36c = 1;
  iStack_35c = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar3;
    }
    uVar18 = *puVar14;
    while (uVar18 == 0) {
      lVar11 = (longlong)iStack_370;
      local_358 = local_358 + 0x20;
      iStack_370 = iStack_370 + 1;
      iStack_35c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_370) goto LAB_147e824dd;
      uVar18 = puVar14[lVar11 + 1];
    }
    uStack_36c = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_36c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_348 = (int)lVar11;
    iStack_35c = local_358 + -1 + local_348;
    if (iVar9 < iStack_35c) {
      iStack_35c = iVar9;
    }
  }
LAB_147e824dd:
  uVar18 = *(uint *)&param_2->field_0x28;
  uVar16 = uVar18 & 0xffffffe0;
  iStack_350 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_360 = 0xffffffff;
  TStack_338._padding_ = CONCAT44(uStack_36c,iStack_370);
  TStack_338.CurrentBitIndex = iStack_35c;
  TStack_338.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar18 >> 5;
  TStack_338._28_4_ = iStack_35c;
  TStack_338.BaseBitIndex = local_358;
  uStack_318 = CONCAT44(uStack_34c,iStack_350);
  local_380 = param_3;
  local_378 = param_2;
  local_368 = puVar3;
  iStack_354 = iStack_35c;
  local_340 = param_2;
  TStack_338.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar18 < 0) || (iVar9 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&param_2->field_0x28;
  if (uVar18 != uVar19) {
    puVar20 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar13 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar18 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_147e825f0;
      uVar18 = *(uint *)(puVar20 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_344 = (int)lVar11;
    uVar18 = local_344 + -1 + uVar16;
    if ((int)uVar19 < (int)uVar18) {
      uVar18 = uVar19;
    }
  }
LAB_147e825f0:
  while( true ) {
    pTVar7 = local_340;
    if (*(int *)&local_340->field_0x8 - *(int *)&local_340->field_0x34 != (int)uStack_318) {
      local_388 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FPendingLatentAction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_388);
    }
    if (((TStack_338.CurrentBitIndex == uVar18) &&
        (TStack_338.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == param_2)
       ) break;
    FVar15 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)
             (*(longlong *)pTVar7 + (longlong)TStack_338.CurrentBitIndex * 0x18);
    FVar17 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)&local_268;
    if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
      FVar17 = local_268.SecondaryData;
    }
    if ((ulonglong)FVar17 <= (ulonglong)FVar15) {
      FVar17 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)&local_268;
      if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
        FVar17 = local_268.SecondaryData;
      }
      if (((ulonglong)FVar15 < (ulonglong)((longlong)local_5c * 0x10 + (longlong)FVar17)) &&
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
    }
    if (local_60 == local_5c) {
      local_60 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,FPendingLatentAction_*>_>_>
                           (0x810,&local_268,&local_5c);
    }
    uVar6 = *(undefined8 *)((longlong)FVar15 + 8);
    FVar17 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)&local_268;
    if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
      FVar17 = local_268.SecondaryData;
    }
    piVar12 = (int *)((longlong)FVar17 + (longlong)local_60 * 0x10);
    local_60 = local_60 + 1;
    *(undefined8 *)piVar12 = *(undefined8 *)FVar15;
    *(undefined8 *)(piVar12 + 2) = uVar6;
    TStack_338.UnvisitedBitMask = TStack_338.UnvisitedBitMask & ~TStack_338._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_338);
  }
  local_274 = param_1;
  local_288 = (FName *)0x0;
  local_280 = 0;
  local_278 = '\0';
  local_27c = 4;
  for (uVar18 = 0; (iVar9 = local_60, -1 < (int)uVar18 && ((int)uVar18 < local_60));
      uVar18 = uVar18 + 1) {
    uVar19 = ~uVar18 >> 0x1f;
    uVar16 = 0;
    if ((int)uVar18 < local_60) {
      uVar16 = uVar19;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)&local_268;
    if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
      FVar15 = local_268.SecondaryData;
    }
    local_278 = '\0';
    (**(code **)(**(longlong **)((uchar *)((longlong)FVar15 + 8) + (longlong)(int)uVar18 * 0x10) + 8
                ))(*(longlong **)((uchar *)((longlong)FVar15 + 8) + (longlong)(int)uVar18 * 0x10),
                   local_2d8);
    if (local_278 == '\0') {
      uVar16 = 0;
      if ((int)uVar18 < local_60) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar15 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)&local_268;
      if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
        FVar15 = local_268.SecondaryData;
      }
      iVar9 = ~uVar18 + local_60;
      piVar12 = (int *)((longlong)FVar15 + (longlong)(int)uVar18 * 0x10);
      if (iVar9 != 0) {
        memmove(piVar12,piVar12 + 4,(longlong)iVar9 << 4);
      }
      local_60 = local_60 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,FPendingLatentAction_*>_>_>
                (0x10,8,&local_268,local_60,&local_5c);
      uVar18 = uVar18 - 1;
    }
  }
  FVar15 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)&local_268;
  if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
    FVar15 = local_268.SecondaryData;
  }
  FVar17 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)
           ((longlong)local_60 * 0x10 + (longlong)FVar15);
  while( true ) {
    if (local_60 != iVar9) {
      local_387 = 0;
      `TCheckedPointerIterator<TTuple<int,FPendingLatentAction_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_387);
    }
    this_00 = local_380;
    if (FVar15 == FVar17) break;
    pFVar4 = *(FPendingLatentAction **)((longlong)FVar15 + 8);
    TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
    ::Remove(param_2,*(int *)FVar15,pFVar4);
    if (pFVar4 != (FPendingLatentAction *)0x0) {
      (**(code **)*pFVar4)(pFVar4,1);
    }
    FVar15 = (ForElementType<TTuple<int,FPendingLatentAction_*>_>)((longlong)FVar15 + 0x10);
  }
  if (0 < local_60) {
    TMulticastDelegate<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
    ::Broadcast(&LatentActionsChangedDelegate,local_380,ActionsRemoved);
  }
  iVar9 = local_280;
  this_02 = local_2d8;
  if (local_288 != (FName *)0x0) {
    this_02 = local_288;
  }
  pFVar1 = (FName *)((longlong)this_02 + (longlong)local_280 * 0x14);
LAB_147e82964:
  if (local_280 != iVar9) {
    local_386[0] = 0;
    `TCheckedPointerIterator<FLatentResponse::FExecutionInfo,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_386);
  }
  if (this_02 == pFVar1) {
    if (local_288 != (FName *)0x0) {
      FMemory::Free(local_288);
    }
    if (local_268.SecondaryData != (ForElementType<TTuple<int,FPendingLatentAction_*>_>)0x0) {
      FMemory::Free((void *)local_268.SecondaryData);
    }
    return;
  }
  if (this_02[1].ComparisonIndex.Value != 0xffffffff) {
    this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_02[1].Number);
    if (this_01 == (UObject *)0x0) {
      if (2 < (byte)LogScript._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
      }
      goto LAB_147e82ad3;
    }
    if ((this_01 != this_00) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CallbackTarget == InObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LatentActionManager.cpp"
                           ,0x14a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar10 = UObject::FindFunction(this_01,*this_02);
    if (pUVar10 != (UFunction *)0x0) {
      (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar10);
      this_02 = (FName *)&this_02[2].Number;
      goto LAB_147e82964;
    }
    if (2 < (byte)LogScript._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_2f0,(UObject *)0x0);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_300,(UObject *)0x0);
      ::FName::ToString(this_02,&local_310);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if (local_2f0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_147e82ad3;
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      this_02 = (FName *)&this_02[2].Number;
      goto LAB_147e82964;
    }
  }
LAB_147e82ad3:
  this_02 = (FName *)&this_02[2].Number;
  goto LAB_147e82964;
}

