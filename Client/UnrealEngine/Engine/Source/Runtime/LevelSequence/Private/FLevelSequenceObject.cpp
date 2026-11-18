// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 2

// StaticStruct @ 146c44970

UScriptStruct * __cdecl FLevelSequenceObject::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceObject.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObject,(UObject *)pUVar1,
                         L"LevelSequenceObject");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceObject.OuterSingleton;
}

// GetObject @ 146c54e00

/* WARNING: Type propagation algorithm not settling */

UObject * __thiscall FLevelSequenceObject::GetObject(FLevelSequenceObject *this)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined4 local_res8 [2];
  int local_res10;
  FWeakObjectPtr local_res18;
  FName local_res20;
  undefined4 uStack_bc;
  undefined8 local_b8;
  FName local_b0;
  UObject *local_a8;
  FWeakObjectPtr *local_a0;
  FString local_98;
  FString local_88;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar14 = 0;
  iVar15 = 0;
  local_res8[0] = 0;
  if ((this->ComponentName).Data.ArrayNum < 2) {
    pUVar11 = TPersistentObjectPtr<FUniqueObjectGuid>::Get
                        ((TPersistentObjectPtr<FUniqueObjectGuid> *)this);
    return pUVar11;
  }
  this_00 = &this->CachedComponent;
  local_a0 = &this_00->WeakPtr;
  bVar8 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  uVar9 = 1;
  iVar16 = iVar14;
  if (bVar8) {
    pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar16 = 1;
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
    local_res20.Number = *(uint *)&pUVar11->field_0x1c;
    ::FName::ToString(&local_res20,&local_98);
    iVar18 = (this->ComponentName).Data.ArrayNum;
    if (local_98.Data.ArrayNum == iVar18) {
      if (1 < local_98.Data.ArrayNum) {
        iVar18 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_98.Data.AllocatorInstance.Data,
                            (wchar_t *)(this->ComponentName).Data.AllocatorInstance.Data);
        bVar8 = iVar18 == 0;
        goto LAB_146c54eaa;
      }
    }
    else {
      bVar8 = local_98.Data.ArrayNum + iVar18 == 1;
LAB_146c54eaa:
      if (!bVar8) goto LAB_146c54eb7;
    }
    bVar8 = true;
    iVar16 = 1;
  }
  else {
LAB_146c54eb7:
    bVar8 = false;
  }
  if ((iVar16 != 0) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  }
  else {
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_b8 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_b8);
    this_00->WeakPtr = local_res18;
    pUVar11 = TPersistentObjectPtr<FUniqueObjectGuid>::Get
                        ((TPersistentObjectPtr<FUniqueObjectGuid> *)this);
    if (pUVar11 != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_AActor_NoRegister();
      iVar16 = (int)pUVar12->_padding_;
      if (*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar16) {
        return pUVar11;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
          &pUVar12->_padding_) {
        return pUVar11;
      }
      pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)&pUVar11[0xe].field_0x18);
      iVar16 = *(int *)&(pTVar13->Elements).field_0x28;
      iVar18 = 0;
      puVar1 = &(pTVar13->Elements).field_0x10;
      iVar10 = iVar15;
      if (iVar16 != 0) {
        puVar20 = *(uint **)&(pTVar13->Elements).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar1;
        }
        uVar17 = *puVar20;
        iVar15 = iVar14;
        iVar18 = iVar14;
        while (uVar17 == 0) {
          iVar15 = iVar15 + 1;
          iVar18 = iVar18 + 0x20;
          iVar10 = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146c54fcd;
          uVar17 = puVar20[iVar15];
        }
        uVar9 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_res10 = (int)lVar5;
        iVar10 = local_res10 + -1 + iVar18;
        if (iVar16 < iVar10) {
          iVar10 = iVar16;
        }
      }
LAB_146c54fcd:
      uVar17 = *(uint *)&(pTVar13->Elements).field_0x28;
      TStack_70._padding_ = CONCAT44(uVar9,iVar15);
      uVar9 = uVar17 & 0xffffffe0;
      TStack_70.CurrentBitIndex = iVar10;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar17 >> 5;
      TStack_70._28_4_ = iVar10;
      TStack_70.BaseBitIndex = iVar18;
      uStack_50 = CONCAT44(uStack_bc,
                           *(int *)&(pTVar13->Elements).field_0x8 -
                           *(int *)&(pTVar13->Elements).field_0x34);
      local_78 = pTVar13;
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || (iVar16 < (int)uVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pUVar11 = (UObject *)(*pcVar6)();
        return pUVar11;
      }
      uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
      if (uVar17 != uVar3) {
        puVar4 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
        puVar19 = puVar1;
        if (puVar4 != (undefined1 *)0x0) {
          puVar19 = puVar4;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
        while (uVar17 == 0) {
          iVar15 = iVar15 + 1;
          uVar9 = uVar9 + 0x20;
          uVar17 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar15)
          goto LAB_146c550d0;
          uVar17 = *(uint *)(puVar19 + (longlong)iVar15 * 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar17 = (uVar9 - 1) + (int)lVar5;
        if ((int)uVar3 < (int)uVar17) {
          uVar17 = uVar3;
        }
      }
LAB_146c550d0:
      while( true ) {
        pTVar7 = local_78;
        if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
            (int)uStack_50) {
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_70.CurrentBitIndex == uVar17) &&
            (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar13)) break;
        pUVar11 = *(UObject **)
                   (*(longlong *)&pTVar7->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
        local_b0.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
        local_b0.Number = *(uint *)&pUVar11->field_0x1c;
        ::FName::ToString(&local_b0,&local_88);
        iVar15 = (this->ComponentName).Data.ArrayNum;
        if (local_88.Data.ArrayNum == iVar15) {
          if (local_88.Data.ArrayNum < 2) {
            bVar8 = true;
          }
          else {
            iVar15 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                                (wchar_t *)(this->ComponentName).Data.AllocatorInstance.Data);
            bVar8 = iVar15 == 0;
          }
        }
        else {
          bVar8 = local_88.Data.ArrayNum + iVar15 == 1;
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          local_a8 = pUVar11;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          FWeakObjectPtr::operator=(local_a0,(FObjectPtr)&local_a8);
          return pUVar11;
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
    }
    pUVar11 = (UObject *)0x0;
  }
  return pUVar11;
}

