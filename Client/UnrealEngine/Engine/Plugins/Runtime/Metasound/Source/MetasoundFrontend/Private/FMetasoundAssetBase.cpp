// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 27

// operator() @ 14ada0e10

TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
* __thiscall
`FMetasoundAssetBase::AddingReferenceCausesLoop'::__l2::<lambda_1>::operator()
          (void *this,
          TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,FMetasoundAssetBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
  *pTVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 *this_00;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined8 *local_res18;
  undefined8 *local_a8;
  ulonglong local_a0;
  FSparseArrayAllocationInfo local_98;
  int local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  puVar1 = &(__return_storage_ptr__->Elements).field_0x8;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if ((FMetasoundAssetBase *)**(longlong **)this == param_1) {
    **(undefined1 **)((longlong)this + 8) = 1;
  }
  else {
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    if ((Metasound::Frontend::AssetManagerPrivate::Instance.Ptr == (IMetaSoundAssetManager *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetManagerPrivate::Instance.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                            ,0x123,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
                 *)(*pcVar7)();
      return pTVar15;
    }
    cVar12 = (**(code **)((longlong)*Metasound::Frontend::AssetManagerPrivate::Instance.Ptr + 0xa8))
                       (Metasound::Frontend::AssetManagerPrivate::Instance.Ptr,param_1,&local_a8);
    if ((cVar12 == '\0') &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5402432335624797497>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                            ,0x2c7,
                            "IMetaSoundAssetManager::GetChecked().TryLoadReferencedAssets(ChildAsset, ChildRefs)"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
                 *)(*pcVar7)();
      return pTVar15;
    }
    iVar9 = (int)local_a0;
    uVar19 = (ulonglong)(int)local_a0;
    local_res18 = local_a8 + uVar19;
    puVar27 = local_a8;
    while( true ) {
      puVar8 = local_res18;
      if ((int)uVar19 != iVar9) {
        `TCheckedPointerIterator<FMetasoundAssetBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar27 == puVar8) break;
      iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar3 = *puVar27;
      if (iVar14 == 0) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1,
                            (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          this_00 = puVar4;
        }
        bVar17 = (byte)iVar14 & 0x1f;
        if (iVar14 < 0) {
          iVar14 = iVar14 + 0x1f;
          bVar17 = bVar17 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar14 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar14 >> 5) * 4) & ~(1 << (bVar17 & 0x1f));
      }
      else {
        iVar13 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        lVar22 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar2 = *(int *)(lVar22 + 4 + (longlong)iVar13 * 0x10);
        iVar14 = iVar14 + -1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar2;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar14;
        if (iVar14 != 0) {
          *(undefined4 *)(lVar22 + (longlong)iVar2 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_98,iVar13);
      pvVar10 = local_98.Pointer;
      if (local_98.Pointer != (TSparseSetElement<FMetasoundAssetBase_const_*> *)0x0) {
        *(undefined8 *)local_98.Pointer = uVar3;
        *(undefined4 *)((longlong)local_98.Pointer + 8) = 0xffffffff;
      }
      local_res10[0] = local_98.Index;
      uVar18 = ((uint)(*(ulonglong *)local_98.Pointer >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)local_98.Pointer >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      bVar11 = TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
               ::TryReplaceExisting
                         (__return_storage_ptr__,uVar18,local_98.Pointer,local_res10,(bool *)0x0);
      if (bVar11) {
LAB_14ada12c6:
        uVar19 = local_a0 & 0xffffffff;
        puVar27 = puVar27 + 1;
      }
      else {
        uVar23 = 1;
        uVar21 = *(int *)puVar1 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar21) {
          uVar19 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar23 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((int)uVar21 < 1) || ((int)uVar23 <= __return_storage_ptr__->HashSize)) {
          uVar18 = __return_storage_ptr__->HashSize - 1U & uVar18;
          *(uint *)((longlong)pvVar10 + 0xc) = uVar18;
          FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar20 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = FVar5;
          }
          uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
          *(undefined4 *)((longlong)pvVar10 + 8) = *(undefined4 *)((longlong)FVar20 + uVar19 * 4);
          *(int *)((longlong)FVar20 + uVar19 * 4) = local_res10[0];
          goto LAB_14ada12c6;
        }
        __return_storage_ptr__->HashSize = uVar23;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar23 != 0) {
          uVar18 = uVar23;
          if (uVar23 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar18 = 0;
              goto LAB_14ada10b6;
            }
          }
          else {
LAB_14ada10b6:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar18,4
                      );
          }
          if (0 < (int)uVar23) {
            uVar24 = (ulonglong)uVar23;
            uVar19 = 0;
            do {
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar20 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar20 = FVar5;
              }
              uVar16 = uVar19 & (longlong)(int)uVar23 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)((longlong)FVar20 + uVar16 * 4) = 0xffffffff;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize == 0) goto LAB_14ada12c6;
        iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        puStack_80 = &(__return_storage_ptr__->Elements).field_0x10;
        uStack_84 = 1;
        local_88 = 0;
        iStack_74 = 0;
        iStack_70 = 0;
        local_68 = __return_storage_ptr__;
        local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
        if (iVar14 == 0) {
LAB_14ada11d5:
          local_78 = 0xffffffff;
          local_60._padding_ = CONCAT44(uStack_84,local_88);
          local_60.CurrentBitIndex = iStack_74;
          local_60.UnvisitedBitMask = 0xffffffff;
          local_60._28_4_ = uStack_6c;
          local_60.BaseBitIndex = iStack_70;
          iVar13 = iStack_74;
          if (iStack_74 < iVar14) {
            do {
              puVar26 = (ulonglong *)((longlong)iVar13 * 0x10 + *(longlong *)&local_68->Elements);
              uVar18 = ((uint)(*puVar26 >> 0x14) & 0xffff ^ (uint)(*puVar26 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              uVar18 = (uVar18 >> 0x10 ^ uVar18) & __return_storage_ptr__->HashSize - 1U;
              *(uint *)((longlong)puVar26 + 0xc) = uVar18;
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar20 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar20 = FVar5;
              }
              uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
              *(undefined4 *)(puVar26 + 1) = *(undefined4 *)((longlong)FVar20 + uVar19 * 4);
              *(int *)((longlong)FVar20 + uVar19 * 4) = iVar13;
              local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
              iVar13 = local_60.CurrentBitIndex;
            } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
          }
          goto LAB_14ada12c6;
        }
        puVar6 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
        puVar25 = (uint *)puStack_80;
        if (puVar6 != (uint *)0x0) {
          puVar25 = puVar6;
        }
        uVar18 = *puVar25;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar18 == 0) {
          iStack_70 = iStack_70 + 0x20;
          lVar22 = (longlong)local_88;
          local_88 = local_88 + 1;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88)
          goto LAB_14ada11a9;
          uVar18 = puVar25[lVar22 + 1];
        }
        uStack_84 = -uVar18 & uVar18;
        uVar19 = (ulonglong)uStack_84 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iStack_74 = (int)lVar22 + -1 + iStack_70;
        if (iStack_74 <= iVar14) goto LAB_14ada11d5;
LAB_14ada11a9:
        local_78 = 0xffffffff;
        local_60._padding_ = CONCAT44(uStack_84,local_88);
        uVar19 = local_a0 & 0xffffffff;
        puVar27 = puVar27 + 1;
        local_60.CurrentBitIndex = iVar14;
        local_60.UnvisitedBitMask = 0xffffffff;
        local_60._28_4_ = uStack_6c;
        local_60.BaseBitIndex = iStack_70;
        iStack_74 = iVar14;
      }
    }
    if (local_a8 != (undefined8 *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14ada19f0

TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
* __thiscall
`FMetasoundAssetBase::IsReferencedAsset'::__l2::<lambda_1>::operator()
          (void *this,
          TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,FMetasoundAssetBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
  *pTVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 *this_00;
  ulonglong uVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined8 *local_res18;
  undefined8 *local_a8;
  ulonglong local_a0;
  FSparseArrayAllocationInfo local_98;
  int local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  puVar1 = &(__return_storage_ptr__->Elements).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (param_1 == *(FMetasoundAssetBase **)this) {
    **(undefined1 **)((longlong)this + 8) = 1;
  }
  else {
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    if ((Metasound::Frontend::AssetManagerPrivate::Instance.Ptr == (IMetaSoundAssetManager *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetManagerPrivate::Instance.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                            ,0x123,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
                 *)(*pcVar7)();
      return pTVar15;
    }
    cVar12 = (**(code **)((longlong)*Metasound::Frontend::AssetManagerPrivate::Instance.Ptr + 0xa8))
                       (Metasound::Frontend::AssetManagerPrivate::Instance.Ptr,param_1,&local_a8);
    if ((cVar12 == '\0') &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5402432335624797521>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                            ,0x2af,
                            "IMetaSoundAssetManager::GetChecked().TryLoadReferencedAssets(ChildAsset, ChildRefs)"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
                 *)(*pcVar7)();
      return pTVar15;
    }
    iVar9 = (int)local_a0;
    uVar19 = (ulonglong)(int)local_a0;
    local_res18 = local_a8 + uVar19;
    puVar27 = local_a8;
    while( true ) {
      puVar8 = local_res18;
      if ((int)uVar19 != iVar9) {
        `TCheckedPointerIterator<FMetasoundAssetBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar27 == puVar8) break;
      iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar3 = *puVar27;
      if (iVar14 == 0) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1,
                            (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          this_00 = puVar4;
        }
        bVar17 = (byte)iVar14 & 0x1f;
        if (iVar14 < 0) {
          iVar14 = iVar14 + 0x1f;
          bVar17 = bVar17 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar14 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar14 >> 5) * 4) & ~(1 << (bVar17 & 0x1f));
      }
      else {
        iVar13 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        lVar22 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar2 = *(int *)(lVar22 + 4 + (longlong)iVar13 * 0x10);
        iVar14 = iVar14 + -1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar2;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar14;
        if (iVar14 != 0) {
          *(undefined4 *)(lVar22 + (longlong)iVar2 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_98,iVar13);
      pvVar10 = local_98.Pointer;
      if (local_98.Pointer != (TSparseSetElement<FMetasoundAssetBase_const_*> *)0x0) {
        *(undefined8 *)local_98.Pointer = uVar3;
        *(undefined4 *)((longlong)local_98.Pointer + 8) = 0xffffffff;
      }
      local_res10[0] = local_98.Index;
      uVar18 = ((uint)(*(ulonglong *)local_98.Pointer >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)local_98.Pointer >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      bVar11 = TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
               ::TryReplaceExisting
                         (__return_storage_ptr__,uVar18,local_98.Pointer,local_res10,(bool *)0x0);
      if (bVar11) {
LAB_14ada1ea6:
        uVar19 = local_a0 & 0xffffffff;
        puVar27 = puVar27 + 1;
      }
      else {
        uVar23 = 1;
        uVar21 = *(int *)puVar1 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar21) {
          uVar19 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar23 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((int)uVar21 < 1) || ((int)uVar23 <= __return_storage_ptr__->HashSize)) {
          uVar18 = __return_storage_ptr__->HashSize - 1U & uVar18;
          *(uint *)((longlong)pvVar10 + 0xc) = uVar18;
          FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar20 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = FVar5;
          }
          uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
          *(undefined4 *)((longlong)pvVar10 + 8) = *(undefined4 *)((longlong)FVar20 + uVar19 * 4);
          *(int *)((longlong)FVar20 + uVar19 * 4) = local_res10[0];
          goto LAB_14ada1ea6;
        }
        __return_storage_ptr__->HashSize = uVar23;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar23 != 0) {
          uVar18 = uVar23;
          if (uVar23 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar18 = 0;
              goto LAB_14ada1c96;
            }
          }
          else {
LAB_14ada1c96:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar18,4
                      );
          }
          if (0 < (int)uVar23) {
            uVar24 = (ulonglong)uVar23;
            uVar19 = 0;
            do {
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar20 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar20 = FVar5;
              }
              uVar16 = uVar19 & (longlong)(int)uVar23 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)((longlong)FVar20 + uVar16 * 4) = 0xffffffff;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize == 0) goto LAB_14ada1ea6;
        iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        puStack_80 = &(__return_storage_ptr__->Elements).field_0x10;
        uStack_84 = 1;
        local_88 = 0;
        iStack_74 = 0;
        iStack_70 = 0;
        local_68 = __return_storage_ptr__;
        local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
        if (iVar14 == 0) {
LAB_14ada1db5:
          local_78 = 0xffffffff;
          local_60._padding_ = CONCAT44(uStack_84,local_88);
          local_60.CurrentBitIndex = iStack_74;
          local_60.UnvisitedBitMask = 0xffffffff;
          local_60._28_4_ = uStack_6c;
          local_60.BaseBitIndex = iStack_70;
          iVar13 = iStack_74;
          if (iStack_74 < iVar14) {
            do {
              puVar26 = (ulonglong *)((longlong)iVar13 * 0x10 + *(longlong *)&local_68->Elements);
              uVar18 = ((uint)(*puVar26 >> 0x14) & 0xffff ^ (uint)(*puVar26 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              uVar18 = (uVar18 >> 0x10 ^ uVar18) & __return_storage_ptr__->HashSize - 1U;
              *(uint *)((longlong)puVar26 + 0xc) = uVar18;
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar20 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar20 = FVar5;
              }
              uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
              *(undefined4 *)(puVar26 + 1) = *(undefined4 *)((longlong)FVar20 + uVar19 * 4);
              *(int *)((longlong)FVar20 + uVar19 * 4) = iVar13;
              local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
              iVar13 = local_60.CurrentBitIndex;
            } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
          }
          goto LAB_14ada1ea6;
        }
        puVar6 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
        puVar25 = (uint *)puStack_80;
        if (puVar6 != (uint *)0x0) {
          puVar25 = puVar6;
        }
        uVar18 = *puVar25;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar18 == 0) {
          iStack_70 = iStack_70 + 0x20;
          lVar22 = (longlong)local_88;
          local_88 = local_88 + 1;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88)
          goto LAB_14ada1d89;
          uVar18 = puVar25[lVar22 + 1];
        }
        uStack_84 = -uVar18 & uVar18;
        uVar19 = (ulonglong)uStack_84 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iStack_74 = (int)lVar22 + -1 + iStack_70;
        if (iStack_74 <= iVar14) goto LAB_14ada1db5;
LAB_14ada1d89:
        local_78 = 0xffffffff;
        local_60._padding_ = CONCAT44(uStack_84,local_88);
        uVar19 = local_a0 & 0xffffffff;
        puVar27 = puVar27 + 1;
        local_60.CurrentBitIndex = iVar14;
        local_60.UnvisitedBitMask = 0xffffffff;
        local_60._28_4_ = uStack_6c;
        local_60.BaseBitIndex = iStack_70;
        iStack_74 = iVar14;
      }
    }
    if (local_a8 != (undefined8 *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return __return_storage_ptr__;
}

// AddingReferenceCausesLoop @ 14ada61b0

bool __thiscall
FMetasoundAssetBase::AddingReferenceCausesLoop
          (FMetasoundAssetBase *this,FMetasoundAssetBase *param_1)

{
  undefined1 local_res8 [16];
  FMetasoundAssetBase *local_res18 [2];
  FMetasoundAssetBase **local_28;
  undefined1 *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = local_res18;
  local_res8[0] = 0;
  local_20 = local_res8;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetasoundAssetBase::AddingReferenceCausesLoop'::__l2::<lambda_1>,TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>,FMetasoundAssetBase_const_&>
             ::Call;
  local_res18[0] = this;
  Metasound::Frontend::AssetBasePrivate::DepthFirstTraversal
            (param_1,(TFunctionRef<TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>___cdecl(FMetasoundAssetBase_const_&)>
                      *)&local_18);
  return (bool)local_res8[0];
}

// CreateProxyData @ 14adb1680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IProxyData,1> * __thiscall
FMetasoundAssetBase::CreateProxyData
          (FMetasoundAssetBase *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  TSharedPtr<FMetasoundAssetProxy,1> *pTVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  UObjectBaseUtility *pUVar12;
  FName this_00;
  UClass *pUVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *pTVar16;
  TSharedPtr<Audio::IProxyData,1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  FMetasoundAssetProxy *pFVar20;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  int local_190;
  FString local_188;
  FString local_178;
  FMetasoundAssetProxy *local_168;
  FSharedReferencer<1> FStack_160;
  longlong local_158;
  FSharedReferencer<1> FStack_150;
  longlong local_148;
  FSharedReferencer<1> FStack_140;
  FString local_138;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar11 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey);
  if (!bVar11) {
    if (1 < (byte)LogMetaSound._0_1_) {
      pUVar12 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
      if (pUVar12 == (UObjectBaseUtility *)0x0) {
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
      }
      else {
        UObjectBaseUtility::GetPathName(pUVar12,&local_188,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IProxyData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = (FName)(**(code **)(this->_padding_ + 0x50))(this);
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  local_198 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (FName)0x0)) {
    pTVar14 = pTVar19;
    if (this_00 == (FName)0x0) goto LAB_14adb1794;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pUVar13 = UMetaSoundDocumentInterface::StaticClass();
  pTVar14 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar13);
LAB_14adb1794:
  pFVar20 = (this->Proxy).Object;
  pTVar1 = &this->Proxy;
  if ((pFVar20 != (FMetasoundAssetProxy *)0x0) &&
     (((((((pFVar20->GraphRegistryKey).NodeKey.Type != (this->GraphRegistryKey).NodeKey.Type ||
          ((pFVar20->GraphRegistryKey).NodeKey.ClassName.Namespace !=
           (this->GraphRegistryKey).NodeKey.ClassName.Namespace)) ||
         ((pFVar20->GraphRegistryKey).NodeKey.ClassName.Name !=
          (this->GraphRegistryKey).NodeKey.ClassName.Name)) ||
        (((pFVar20->GraphRegistryKey).NodeKey.ClassName.Variant !=
          (this->GraphRegistryKey).NodeKey.ClassName.Variant ||
         ((pFVar20->GraphRegistryKey).NodeKey.Version.Major !=
          (this->GraphRegistryKey).NodeKey.Version.Major)))) ||
       (((pFVar20->GraphRegistryKey).NodeKey.Version.Minor !=
         (this->GraphRegistryKey).NodeKey.Version.Minor ||
        (((pFVar20->GraphRegistryKey).AssetPath.PackageName !=
          (this->GraphRegistryKey).AssetPath.PackageName ||
         ((pFVar20->GraphRegistryKey).AssetPath.AssetName !=
          (this->GraphRegistryKey).AssetPath.AssetName)))))) ||
      ((pFVar20->GraphRegistryKey).ObjectID != (this->GraphRegistryKey).ObjectID)))) {
    local_158 = 0;
    FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FMetasoundAssetProxy,1> *)&local_158) {
      pTVar1->Object = (FMetasoundAssetProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Proxy).SharedReferenceCount,&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
  }
  pFVar20 = pTVar1->Object;
  if (pFVar20 != (FMetasoundAssetProxy *)0x0) {
    local_190 = *(int *)&(pFVar20->Interfaces).Elements.field_0x8 -
                *(int *)&(pFVar20->Interfaces).Elements.field_0x34;
    pTVar18 = pTVar14;
    if (local_198 == (FName)0x0) {
      pTVar18 = pTVar19;
    }
    lVar15 = (**(code **)(pTVar18->_padding_ + 0x18))();
    pTVar16 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
              ::Union(&pFVar20->Interfaces,&local_98,
                      (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                       *)(lVar15 + 0x20));
    iVar3 = *(int *)&(pTVar16->Elements).field_0x8;
    iVar4 = *(int *)&(pTVar16->Elements).field_0x34;
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    if (local_190 != iVar3 - iVar4) {
      local_148 = 0;
      FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FMetasoundAssetProxy,1> *)&local_148) {
        pTVar1->Object = (FMetasoundAssetProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Proxy).SharedReferenceCount,&FStack_140);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_140.ReferenceController);
    }
  }
  if (pTVar1->Object == (FMetasoundAssetProxy *)0x0) {
    bVar11 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey);
    if (bVar11) {
      local_128._0_8_ = (FScriptContainerElement *)0x0;
      if (local_198 == (FName)0x0) {
        pTVar14 = pTVar19;
      }
      local_128._8_8_ = 0;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_fc = 0x80;
      local_f8 = 0xffffffff;
      local_f4 = 0;
      local_e8 = (ForElementType<FSetElementId>)0x0;
      local_e0 = 0;
      local_d8 = CONCAT31(local_d8._1_3_,10);
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 1;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      local_ac = 0;
      uStack_a8 = 0;
      local_a4 = 0xffffffff;
      lVar15 = (**(code **)(pTVar14->_padding_ + 0x18))(pTVar14);
      TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
      ::operator=((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                   *)local_128,
                  (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                   *)(lVar15 + 0x20));
      uVar6._0_1_ = (this->GraphRegistryKey).NodeKey.Type;
      uVar6._1_3_ = *(undefined3 *)&(this->GraphRegistryKey).NodeKey.field_0x1;
      uVar6._4_4_ = (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex;
      uVar2 = *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number;
      uVar7 = *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Name.Number;
      uVar8 = *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Variant.Number;
      local_d8 = (undefined4)uVar6;
      uStack_d0 = (undefined4)uVar2;
      uStack_cc = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar9 = *(undefined8 *)&(this->GraphRegistryKey).NodeKey.Version.Minor;
      uVar10 = *(undefined8 *)&(this->GraphRegistryKey).AssetPath.PackageName.Number;
      uStack_c8 = (undefined4)uVar7;
      uStack_c4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_c0 = (undefined4)uVar8;
      uStack_bc = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar2 = *(undefined8 *)&(this->GraphRegistryKey).AssetPath.AssetName.Number;
      uStack_b8 = (undefined4)uVar9;
      uStack_b4 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_b0 = (undefined4)uVar10;
      local_ac = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_a8 = (undefined4)uVar2;
      local_a4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_d4 = uVar6._4_4_;
      pTVar14 = ::operator_new(0xa8);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        local_168 = ___xmm_00000000000000000000000000000010;
        pFVar20 = (FMetasoundAssetProxy *)&DAT_00000010;
        FStack_160.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFMetasoundAssetProxy___00_SharedPointerInternals__6B_
        ;
        Audio::TProxyData<FMetasoundAssetProxy>::TProxyData<FMetasoundAssetProxy>
                  ((TProxyData<FMetasoundAssetProxy> *)(pTVar14 + 1));
        pTVar14[1]._padding_ = (longlong)&___7FMetasoundAssetProxy__6B_;
        *(undefined8 *)
         &((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
            *)(pTVar14 + 2))->Elements = 0;
        pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar14[4]._padding_ = 0;
        pTVar14[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[4].WeakReferenceCount = (atomic<int>)0x80;
        *(undefined4 *)&pTVar14[5]._padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pTVar14[5]._padding_ + 4) = 0;
        pTVar14[6]._padding_ = 0;
        pTVar14[6].SharedReferenceCount = (atomic<int>)0x0;
        *(undefined1 *)&pTVar14[7]._padding_ = 10;
        *(undefined8 *)((longlong)&pTVar14[7]._padding_ + 4) = 0;
        *(undefined8 *)&pTVar14[7].WeakReferenceCount = 0;
        *(undefined8 *)((longlong)&pTVar14[8]._padding_ + 4) = 0;
        *(undefined8 *)&pTVar14[8].WeakReferenceCount = 1;
        *(undefined8 *)((longlong)&pTVar14[9]._padding_ + 4) = 0;
        *(undefined8 *)&pTVar14[9].WeakReferenceCount = 0;
        *(undefined4 *)((longlong)&pTVar14[10]._padding_ + 4) = 0xffffffff;
        TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
        ::operator=((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                     *)(pTVar14 + 2),
                    (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                     *)local_128);
        pFVar20 = (FMetasoundAssetProxy *)(pTVar14 + 1);
        pTVar14[7]._padding_ = CONCAT44(uStack_d4,local_d8);
        pTVar14[7].SharedReferenceCount = (atomic<int>)uStack_d0;
        pTVar14[7].WeakReferenceCount = (atomic<int>)uStack_cc;
        pTVar14[8]._padding_ = CONCAT44(uStack_c4,uStack_c8);
        pTVar14[8].SharedReferenceCount = (atomic<int>)uStack_c0;
        pTVar14[8].WeakReferenceCount = (atomic<int>)uStack_bc;
        pTVar14[9]._padding_ = CONCAT44(uStack_b4,uStack_b8);
        pTVar14[9].SharedReferenceCount = (atomic<int>)uStack_b0;
        pTVar14[9].WeakReferenceCount = (atomic<int>)local_ac;
        pTVar14[10]._padding_ = CONCAT44(local_a4,uStack_a8);
        if ((pFVar20 == (FMetasoundAssetProxy *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar17 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar5)();
          return pTVar17;
        }
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        FStack_160.ReferenceController = pTVar14;
        pTVar19 = pTVar14;
        local_168 = pFVar20;
      }
      if (pTVar1 != (TSharedPtr<FMetasoundAssetProxy,1> *)&local_168) {
        pTVar1->Object = pFVar20;
        local_168 = (FMetasoundAssetProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Proxy).SharedReferenceCount,&FStack_160);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_160.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      iVar3 = SUB84(local_128._8_8_,4);
      local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
      }
      local_f8 = 0xffffffff;
      local_f4 = 0;
      local_100 = 0;
      if (0x80 < local_fc) {
        local_fc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
      }
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_128._0_8_;
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_128._0_8_;
      }
    }
    else {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5402432335624797902>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                          ,0x132,"Key.IsValid()");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar5)();
        return pTVar17;
      }
      lVar15 = (**(code **)(this->_padding_ + 0x50))(this);
      if ((lVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Owner",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                              ,0x13c,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar5)();
        return pTVar17;
      }
      lVar15 = *(longlong *)(lVar15 + 0x10);
      if ((lVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Class",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                              ,0x13e,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar17 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar5)();
        return pTVar17;
      }
      local_198 = *(FName *)(lVar15 + 0x18);
      ::FName::ToString(&local_198,&local_138);
      if (1 < (byte)LogMetaSound._0_1_) {
        pUVar12 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
        if (pUVar12 == (UObjectBaseUtility *)0x0) {
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
        }
        else {
          UObjectBaseUtility::GetPathName(pUVar12,&local_178,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = (IProxyData *)pTVar1->Object;
  pTVar19 = (this->Proxy).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar19;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetConstDocumentChecked @ 14adbd4e0

FMetasoundFrontendDocument * __thiscall
FMetasoundAssetBase::GetConstDocumentChecked(FMetasoundAssetBase *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  FMetasoundFrontendDocument *pFVar3;
  UClass *pUVar4;
  longlong *plVar5;
  
  this_00 = (UObject *)(**(code **)(this->_padding_ + 0x48))();
  if (this_00 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                       ,0x332,L"");
    plVar5 = (longlong *)0x0;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendDocument *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
    }
    pUVar4 = UMetaSoundDocumentInterface::StaticClass();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar4);
  }
  if (this_00 == (UObject *)0x0) {
    plVar5 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014adbd561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FMetasoundFrontendDocument *)
           (**(code **)(*plVar5 + 0x18))(plVar5,*(code **)(*plVar5 + 0x18));
  return pFVar3;
}

// GetDocumentChecked @ 14adbe880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMetasoundFrontendDocument * __thiscall
FMetasoundAssetBase::GetDocumentChecked(FMetasoundAssetBase *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FMetasoundFrontendDocument *pFVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x58))(this,local_58);
  UE::Core::Private::Function::CheckCallable((void *)plVar3[2]);
  pcVar1 = (code *)plVar3[2];
  plVar6 = plVar3 + 4;
  if ((longlong *)plVar3[7] != (longlong *)0x0) {
    plVar6 = (longlong *)plVar3[7];
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  pFVar5 = (FMetasoundFrontendDocument *)(*pcVar1)(uVar4);
  *plVar3 = (longlong)pFVar5;
  if (local_48 != 0) {
    plVar6 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar6 = local_20;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pFVar5 == (FMetasoundFrontendDocument *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != Document",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                       ,0x33d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendDocument *)(*pcVar1)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// GetDocumentHandle @ 14adbe950

TSharedRef<Metasound::Frontend::IDocumentController,1> * __thiscall
FMetasoundAssetBase::GetDocumentHandle
          (FMetasoundAssetBase *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__)

{
  FDocumentAccessPtr *pFVar1;
  undefined1 local_48 [64];
  
  pFVar1 = (FDocumentAccessPtr *)(**(code **)(this->_padding_ + 0x58))(this,local_48);
  Metasound::Frontend::IDocumentController::CreateDocumentHandle(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetDocumentHandle @ 14adbe980

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __thiscall
FMetasoundAssetBase::GetDocumentHandle
          (FMetasoundAssetBase *this,
          TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__)

{
  FConstDocumentAccessPtr *pFVar1;
  undefined1 local_48 [64];
  
  pFVar1 = (FConstDocumentAccessPtr *)(**(code **)(this->_padding_ + 0x60))(this,local_48);
  Metasound::Frontend::IDocumentController::CreateDocumentHandle(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetGraphRegistryKey @ 14adbefc0

FGraphClassRegistryKey * __thiscall
FMetasoundAssetBase::GetGraphRegistryKey(FMetasoundAssetBase *this)

{
  return &this->GraphRegistryKey;
}

// GetInterfaceToVersion @ 14adbf890

/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundFrontendInterface * __thiscall
FMetasoundAssetBase::GetInterfaceToVersion
          (FMetasoundAssetBase *this,FMetasoundFrontendInterface *__return_storage_ptr__,
          FMetasoundFrontendVersion *param_1)

{
  char cVar1;
  ISearchEngine *pIVar2;
  UObjectBaseUtility *this_00;
  int iVar3;
  FString local_98;
  FString local_88;
  FMetasoundFrontendClassInput *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  FName local_38;
  FMetasoundFrontendVersionNumber FStack_30;
  FScriptContainerElement *local_28;
  undefined8 local_20;
  
  FStack_30.Major = 1;
  FStack_30.Minor = 0;
  local_78 = (FMetasoundFrontendClassInput *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_28 = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pIVar2 = Metasound::Frontend::ISearchEngine::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x20))();
  if (cVar1 == '\0') {
    if (2 < (byte)LogMetaSound._0_1_) {
      this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
      if (this_00 == (UObjectBaseUtility *)0x0) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
      }
      else {
        UObjectBaseUtility::GetPathName(this_00,&local_98,(UObject *)0x0);
      }
      FMetasoundFrontendVersion::ToString(param_1,&local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (((local_38 != param_1->Name) || (FStack_30.Major != (param_1->Number).Major)) ||
          (FStack_30.Minor != (param_1->Number).Minor)) {
    iVar3 = 0;
    __return_storage_ptr__->_padding_ = (longlong)local_78;
    *(int *)&__return_storage_ptr__->_padding_ = (int)local_70;
    *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_70._4_4_;
    __return_storage_ptr__->_padding_ = (longlong)local_68;
    *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)local_60;
    *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_60._4_4_;
    __return_storage_ptr__->_padding_ = (longlong)local_58;
    *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)local_50;
    *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_50._4_4_;
    __return_storage_ptr__->_padding_ = local_48;
    __return_storage_ptr__->_padding_ = lStack_40;
    local_78 = (FMetasoundFrontendClassInput *)0x0;
    (__return_storage_ptr__->Metadata).Version.Name = local_38;
    (__return_storage_ptr__->Metadata).Version.Number = FStack_30;
    (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data = local_28;
    (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = (int)local_20;
    (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_28 = (FScriptContainerElement *)0x0;
    goto LAB_14adbfab6;
  }
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayNum = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.ArrayMax = 0;
  (__return_storage_ptr__->Metadata).UClassOptions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Metadata).Version.Number.Major = 1;
  (__return_storage_ptr__->Metadata).Version.Number.Minor = 0;
  (__return_storage_ptr__->Metadata).Version.Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Metadata).Version.Name.Number = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  if (local_28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  iVar3 = (int)local_70;
LAB_14adbfab6:
  DestructItems<FMetasoundFrontendClassInput,int>(local_78,iVar3);
  if (local_78 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_78);
  }
  return __return_storage_ptr__;
}

// GetOwningAssetName @ 14adc2420

FString * __thiscall
FMetasoundAssetBase::GetOwningAssetName(FMetasoundAssetBase *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility *this_00;
  
  this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))();
  if (this_00 != (UObjectBaseUtility *)0x0) {
    UObjectBaseUtility::GetPathName(this_00,__return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRootGraphHandle @ 14adc2ab0

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
FMetasoundAssetBase::GetRootGraphHandle
          (FMetasoundAssetBase *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_98;
  FDocumentAccessPtr local_88;
  undefined1 local_48 [64];
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_48);
  local_88._56_8_ = 0;
  local_88._0_8_ = *puVar1;
  local_88._16_8_ = puVar1[2];
  if (local_88._16_8_ != 0) {
    puVar2 = puVar1 + 4;
    if ((undefined8 *)puVar1[7] != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar1[7];
    }
    (**(code **)*puVar2)(puVar2,&local_88.field_0x20);
  }
  Metasound::Frontend::FDocumentController::CreateDocumentHandle(&local_98,&local_88);
  if (puVar1[2] != 0) {
    plVar3 = puVar1 + 4;
    if ((longlong *)puVar1[7] != (longlong *)0x0) {
      plVar3 = (longlong *)puVar1[7];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (**(code **)(*(longlong *)local_98.Object + 0x100))(local_98.Object,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetRootGraphHandle @ 14adc2b70

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
FMetasoundAssetBase::GetRootGraphHandle
          (FMetasoundAssetBase *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> local_98;
  FConstDocumentAccessPtr local_88;
  undefined1 local_48 [64];
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this,local_48);
  local_88._56_8_ = 0;
  local_88._0_8_ = *puVar1;
  local_88._16_8_ = puVar1[2];
  if (local_88._16_8_ != 0) {
    puVar2 = puVar1 + 4;
    if ((undefined8 *)puVar1[7] != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar1[7];
    }
    (**(code **)*puVar2)(puVar2,&local_88.field_0x20);
  }
  Metasound::Frontend::FDocumentController::CreateDocumentHandle(&local_98,&local_88);
  if (puVar1[2] != 0) {
    plVar3 = puVar1 + 4;
    if ((longlong *)puVar1[7] != (longlong *)0x0) {
      plVar3 = (longlong *)puVar1[7];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (**(code **)(*(longlong *)local_98.Object + 0xf8))(local_98.Object,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ImportFromJSON @ 14adc4140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FMetasoundAssetBase::ImportFromJSON(FMetasoundAssetBase *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  FMetasoundFrontendDocument *pFVar8;
  UObjectBaseUtility *this_00;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSoundAssetBase::ImportFromJSON");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId769,"MetaSoundAssetBase::ImportFromJSON",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
               ,0x301);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId769);
  }
  puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_78);
  UE::Core::Private::Function::CheckCallable((void *)puVar6[2]);
  pcVar1 = (code *)puVar6[2];
  plVar9 = puVar6 + 4;
  if ((longlong *)puVar6[7] != (longlong *)0x0) {
    plVar9 = (longlong *)puVar6[7];
  }
  uVar7 = (**(code **)(*plVar9 + 8))(plVar9);
  pFVar8 = (FMetasoundFrontendDocument *)(*pcVar1)(uVar7);
  *puVar6 = pFVar8;
  if (local_68 != 0) {
    plVar9 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (pFVar8 == (FMetasoundFrontendDocument *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5402432335624797433>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                       ,0x307,"nullptr != Document");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else {
    bVar3 = Metasound::Frontend::ImportJSONToMetasound(param_1,pFVar8);
    if (bVar3) {
      this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x50))(this);
      if ((this_00 == (UObjectBaseUtility *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwningAsset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                             ,0x30e,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      bVar5 = UObjectBaseUtility::MarkPackageDirty(this_00);
      if ((!bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5402432335624797425>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                             ,0x30f,"OwningAsset->MarkPackageDirty()"), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar3;
}

// ImportFromJSONAsset @ 14adc4340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FMetasoundAssetBase::ImportFromJSONAsset(FMetasoundAssetBase *this,FString *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  FMetasoundFrontendDocument *pFVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  UObjectBaseUtility *this_00;
  longlong *plVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined1 auStackY_d8 [32];
  TJsonStructDeserializerBackend<char> local_a8;
  FMetasoundFrontendDocument *local_78 [2];
  code *local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSoundAssetBase::ImportFromJSONAsset");
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId793,"MetaSoundAssetBase::ImportFromJSONAsset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
               ,0x319);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId793);
  }
  (**(code **)(this->_padding_ + 0x58))(this,local_78);
  UE::Core::Private::Function::CheckCallable(local_68);
  pcVar2 = local_68;
  plVar10 = local_58;
  if (local_40 != (longlong *)0x0) {
    plVar10 = local_40;
  }
  uVar6 = (**(code **)(*plVar10 + 8))();
  pFVar7 = (FMetasoundFrontendDocument *)(*pcVar2)(uVar6);
  local_78[0] = pFVar7;
  if (pFVar7 != (FMetasoundFrontendDocument *)0x0) {
    pIVar8 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar9 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,pwVar11,0);
    if (pFVar9 != (FArchive *)0x0) {
      Metasound::TJsonStructDeserializerBackend<char>::TJsonStructDeserializerBackend<char>
                (&local_a8,pFVar9);
      bVar3 = FStructDeserializer::Deserialize<FMetasoundFrontendDocument>
                        (pFVar7,(IStructDeserializerBackend *)&local_a8);
      (**(code **)(*(longlong *)pFVar9 + 0x210))(pFVar9);
      if ((bVar3) && ((pFVar9->field_0x29 & 2) == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.JsonReader.SharedReferenceCount.ReferenceController);
      if (local_a8.LastIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.LastIdentifier.Data.AllocatorInstance.Data);
      }
      local_a8._padding_ = (longlong)&___7IStructDeserializerBackend__6B_;
      (*(code *)**(undefined8 **)pFVar9)(pFVar9);
      if (bVar3 != false) {
        this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x50))(this);
        if ((this_00 == (UObjectBaseUtility *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("OwningAsset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                               ,0x326,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = UObjectBaseUtility::MarkPackageDirty(this_00);
        if ((!bVar4) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5402432335624797401>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                               ,0x327,"OwningAsset->MarkPackageDirty()"), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      goto LAB_14adc4541;
    }
  }
  bVar3 = false;
LAB_14adc4541:
  if (local_68 != (code *)0x0) {
    plVar10 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar10 = local_40;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar3;
}

// IsInterfaceDeclared @ 14adc7330

bool __thiscall
FMetasoundAssetBase::IsInterfaceDeclared
          (FMetasoundAssetBase *this,FMetasoundFrontendVersion *param_1)

{
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  UObject *this_00;
  UClass *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  
  this_00 = (UObject *)(**(code **)(this->_padding_ + 0x48))();
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    if (this_00 == (UObject *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocInterface.GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                         ,0x24a,L"");
      plVar9 = (longlong *)0x0;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      goto LAB_14adc73b9;
    }
  }
  else {
    UE::GC::MarkAsReachable(this_00);
  }
  pUVar8 = UMetaSoundDocumentInterface::StaticClass();
  plVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar8);
LAB_14adc73b9:
  if (this_00 == (UObject *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar10 = (**(code **)(*plVar9 + 0x18))(plVar9);
  uVar1 = (param_1->Number).Major;
  iVar7 = (param_1->Number).Minor;
  FVar2 = param_1->Name;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar2.Number;
  iVar7 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVersion>
                    ((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                      *)(lVar10 + 0x20),
                     (uVar6 >> 2) +
                     uVar6 * 0x40 +
                     (iVar7 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) + 0x9e3779b9 ^
                     uVar6,param_1);
  return iVar7 != -1;
}

// IsReferencedAsset @ 14adc7850

bool __thiscall
FMetasoundAssetBase::IsReferencedAsset(FMetasoundAssetBase *this,FMetasoundAssetBase *param_1)

{
  undefined1 local_res10 [24];
  FMetasoundAssetBase *local_28;
  undefined1 *local_20;
  code *local_18;
  FMetasoundAssetBase **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_res10[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMetasoundAssetBase::IsReferencedAsset'::__l2::<lambda_1>,TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>,FMetasoundAssetBase_const_&>
             ::Call;
  local_28 = param_1;
  Metasound::Frontend::AssetBasePrivate::DepthFirstTraversal
            (this,(TFunctionRef<TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>___cdecl(FMetasoundAssetBase_const_&)>
                   *)&local_18);
  return (bool)local_res10[0];
}

// IsRegistered @ 14adc7980

bool __thiscall FMetasoundAssetBase::IsRegistered(FMetasoundAssetBase *this)

{
  bool bVar1;
  
  bVar1 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey);
  return bVar1;
}

// MarkMetasoundDocumentDirty @ 14adc8be0

bool __thiscall FMetasoundAssetBase::MarkMetasoundDocumentDirty(FMetasoundAssetBase *this)

{
  bool bVar1;
  UObjectBaseUtility *this_00;
  
  this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))();
  if (this_00 != (UObjectBaseUtility *)0x0) {
    bVar1 = UObjectBaseUtility::MarkPackageDirty(this_00);
    return bVar1;
  }
  return false;
}

// OnNotifyBeginDestroy @ 14adc98b0

void __thiscall FMetasoundAssetBase::OnNotifyBeginDestroy(FMetasoundAssetBase *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FNodeClassRegistry *pFVar4;
  
  lVar3 = (**(code **)(this->_padding_ + 0x50))();
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwningAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = Metasound::CanEverExecuteGraph(false);
  if (bVar2) {
    UnregisterGraphWithFrontend(this);
  }
  else {
    bVar2 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey);
    if (bVar2) {
      pFVar4 = Metasound::Frontend::FNodeClassRegistry::Get();
      (**(code **)(*(longlong *)pFVar4 + 0x38))(pFVar4,&this->GraphRegistryKey);
      (this->GraphRegistryKey).NodeKey.Type = Invalid;
      *(undefined3 *)&(this->GraphRegistryKey).NodeKey.field_0x1 = 0;
      (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = 0;
      *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = 0;
      *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Name.Number = 0;
      *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = 0x100000000;
      *(undefined8 *)&(this->GraphRegistryKey).NodeKey.Version.Minor = 0;
      *(undefined8 *)&(this->GraphRegistryKey).AssetPath.PackageName.Number = 0;
      *(undefined8 *)&(this->GraphRegistryKey).AssetPath.AssetName.Number = 0xffffffff00000000;
    }
  }
  if (Metasound::Frontend::AssetManagerPrivate::Instance.Ptr != (IMetaSoundAssetManager *)0x0) {
    (**(code **)((longlong)*Metasound::Frontend::AssetManagerPrivate::Instance.Ptr + 200))
              (Metasound::Frontend::AssetManagerPrivate::Instance.Ptr,lVar3);
  }
  return;
}

// RegisterAssetDependencies @ 14adcc230

void __thiscall
FMetasoundAssetBase::RegisterAssetDependencies
          (FMetasoundAssetBase *this,FMetaSoundAssetRegistrationOptions *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_28 [2];
  
  (**(code **)(this->_padding_ + 0x28))(this,local_28);
  iVar4 = (int)local_28[1];
  plVar1 = local_28[0] + iVar4;
  plVar5 = local_28[0];
  do {
    if ((int)local_28[1] != iVar4) {
      `TCheckedPointerIterator<FMetasoundAssetBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar5 == plVar1) {
      if (local_28[0] != (longlong *)0x0) {
        FMemory::Free(local_28[0]);
      }
      return;
    }
    plVar2 = (longlong *)*plVar5;
    if (param_1->bForceReregister == false) {
      bVar3 = Metasound::Frontend::FGraphClassRegistryKey::IsValid
                        ((FGraphClassRegistryKey *)(plVar2 + 1));
      if (!bVar3) goto LAB_14adcc298;
    }
    else {
LAB_14adcc298:
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}

// TryUpdateInterfaceFromVersion @ 14add2aa0

bool __thiscall
FMetasoundAssetBase::TryUpdateInterfaceFromVersion
          (FMetasoundAssetBase *this,FMetasoundFrontendVersion *param_1,
          FMetaSoundFrontendDocumentBuilder *param_2)

{
  bool bVar1;
  FMetasoundFrontendInterface *local_res20;
  TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendInterface local_68;
  
  GetInterfaceToVersion(this,&local_68,param_1);
  if (((local_68.Metadata.Version.Number.Major == InvalidVersion.Number.Major) &&
      (local_68.Metadata.Version.Number.Minor == InvalidVersion.Number.Minor)) ||
     (local_68.Metadata.Version.Name == InvalidVersion.Name)) {
    bVar1 = false;
  }
  else {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    Metasound::Frontend::AssetBasePrivate::GetUpdatePathForDocument
              (param_1,&local_68.Metadata.Version,&local_78);
    bVar1 = Metasound::Frontend::AssetBasePrivate::UpdateDocumentInterface
                      (&local_78,param_1,param_2);
    if (!bVar1) {
      local_res20 = &local_68;
      `FMetasoundAssetBase::TryUpdateInterfaceFromVersion'::__l5::<lambda_1>::operator()
                (&local_res20);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  if (local_68.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_68._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_68._padding_);
  }
  if ((void *)local_68._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_68._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_68._padding_,(int)local_68._padding_);
  if ((FMetasoundFrontendClassInput *)local_68._padding_ != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)local_68._padding_);
  }
  return bVar1;
}

// UnregisterGraphWithFrontend @ 14add3100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMetasoundAssetBase::UnregisterGraphWithFrontend(FMetasoundAssetBase *this)

{
  FGraphClassRegistryKey *this_00;
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  UObject *this_01;
  FNodeClassRegistry *this_02;
  UClass *pUVar4;
  UObjectBaseUtility *this_03;
  bool bVar5;
  FString local_98;
  UObject *local_88;
  void *local_80;
  FString local_78;
  undefined1 local_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"MetaSoundAssetBase::UnregisterGraphWithFrontend");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,"MetaSoundAssetBase::UnregisterGraphWithFrontend",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                         ,0x234,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = Metasound::CanEverExecuteGraph(false);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::CanEverExecuteGraph()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                         ,0x235,
                         L"If execution is not supported, UnregisterNode must be called directly to avoid async attempt at destroying runtime graph that does not exist."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->GraphRegistryKey;
  bVar3 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(this_00);
  if (bVar3) {
    this_01 = (UObject *)(**(code **)(this->_padding_ + 0x50))(this);
    if (this_01 == (UObject *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5402432335624797638>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                         ,0x23a,"OwningAsset");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_02 = Metasound::Frontend::FNodeClassRegistry::Get();
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_01);
      }
      local_88 = this_01;
      pUVar4 = UMetaSoundDocumentInterface::StaticClass();
      local_80 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar4);
      bVar3 = Metasound::Frontend::FNodeClassRegistry::UnregisterGraph
                        (this_02,this_00,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_88)
      ;
      if ((!bVar3) && (5 < (byte)LogMetaSound._0_1_)) {
        this_03 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
        if (this_03 == (UObjectBaseUtility *)0x0) {
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
        }
        else {
          UObjectBaseUtility::GetPathName(this_03,&local_98,(UObject *)0x0);
        }
        Metasound::Frontend::FGraphClassRegistryKey::ToString(this_00,&local_78);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_4c = 1;
    uStack_48 = 0;
    local_3c = 0;
    uStack_38 = 0;
    uStack_67 = 0;
    uStack_65 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    local_68 = 10;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    (this_00->NodeKey).Type = Invalid;
    *(undefined3 *)&(this_00->NodeKey).field_0x1 = 0;
    (this_00->NodeKey).ClassName.Namespace.ComparisonIndex = 0;
    *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = 0;
    local_34 = 0xffffffff;
    *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Name.Number = 0;
    *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = 0x100000000;
    *(undefined8 *)&(this->GraphRegistryKey).NodeKey.Version.Minor = 0;
    *(undefined8 *)&(this->GraphRegistryKey).AssetPath.PackageName.Number = 0;
    *(undefined8 *)&(this->GraphRegistryKey).AssetPath.AssetName.Number = 0xffffffff00000000;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// UpdateAndRegisterForExecution @ 14add3ee0

void __thiscall FMetasoundAssetBase::UpdateAndRegisterForExecution(FMetasoundAssetBase *this)

{
  code *pcVar1;
  FGuid FVar2;
  FGuid FVar3;
  bool bVar4;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FGuid local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_28[0] = 0x10101;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  local_48 = Metasound::Frontend::DefaultPageID;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_58,1,&local_4c);
  iStack_18 = local_50;
  local_38._0_4_ = local_48.A;
  local_38._4_4_ = local_48.B;
  uStack_30._0_4_ = local_48.C;
  uStack_30._4_4_ = local_48.D;
  *(undefined8 *)local_58.Data = local_48._0_8_;
  *(undefined8 *)(local_58.Data + 8) = local_48._8_8_;
  local_48._0_8_ = local_58.Data;
  if (local_50 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2 = local_48;
  local_48.C = iStack_18;
  FVar3 = local_48;
  local_48.A = FVar2.A;
  local_48.B = FVar2.B;
  local_20 = local_48.A;
  uStack_1c = local_48.B;
  uStack_14 = local_48.D;
  local_48 = FVar3;
  (**(code **)(this->_padding_ + 0x18))(this,local_28);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// UpdateAndRegisterForExecution @ 14add3fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMetasoundAssetBase::UpdateAndRegisterForExecution
          (FMetasoundAssetBase *this,FMetaSoundAssetRegistrationOptions *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined3 uVar6;
  FNameEntryId FVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  UObjectBaseUtility *pUVar11;
  UObject *this_00;
  FNodeClassRegistry *this_01;
  UClass *pUVar12;
  void *pvVar13;
  FGraphClassRegistryKey *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  char local_res20;
  FString local_158;
  FString local_148;
  FString local_138;
  longlong *local_128 [2];
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  UObject *local_e8;
  void *local_e0;
  FString local_d8;
  FString local_c8;
  TArrayView<FGuid_const_,int> local_b8;
  undefined1 local_a8 [32];
  FGraphClassRegistryKey local_88;
  
  bVar9 = IsInGameThread();
  if (!bVar9) {
    pUVar11 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
    if (pUVar11 == (UObjectBaseUtility *)0x0) {
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
    }
    else {
      UObjectBaseUtility::GetPathName(pUVar11,&local_158,(UObject *)0x0);
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                       ,0x158,L"MetaSound %s graph can only be registered on the GameThread");
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar9 = Metasound::CanEverExecuteGraph(false);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::CanEverExecuteGraph()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                         ,0x159,
                         L"Cannot generate proxies/runtime graph when graph execution is not enabled."
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"MetaSoundAssetBase::UpdateAndRegisterForExecution");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId347,"MetaSoundAssetBase::UpdateAndRegisterForExecution",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
               ,0x15b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId347);
  }
  bVar18 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_res20 = bVar18;
  pUVar11 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
  if (pUVar11 == (UObjectBaseUtility *)0x0) {
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
  }
  else {
    UObjectBaseUtility::GetPathName(pUVar11,&local_148,(UObject *)0x0);
  }
  ::FString::PrintfImpl(&local_108,L"MetaSoundAssetBase::UpdateAndRegisterForExecution  asset %s");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar16.Data = local_108.Data.AllocatorInstance.Data;
  }
  if (bVar18) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,(wchar_t *)FVar16.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pUVar11 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x48))(this);
  if (pUVar11 == (UObjectBaseUtility *)0x0) {
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
  }
  else {
    UObjectBaseUtility::GetPathName(pUVar11,&local_138,(UObject *)0x0);
  }
  ::FString::PrintfImpl(&local_f8,L"MetaSoundAssetBase::UpdateAndRegisterForExecution  asset %s");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar16.Data = local_f8.Data.AllocatorInstance.Data;
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar16.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
               ,0x15c);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((param_1->bForceReregister == false) &&
     (bVar10 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey), bVar10
     )) goto LAB_14add44ee;
  if (param_1->bRegisterDependencies != false) {
    (**(code **)(this->_padding_ + 0x28))(this,local_128);
    iVar15 = (int)local_128[1];
    plVar1 = local_128[0] + iVar15;
    plVar17 = local_128[0];
    while( true ) {
      if ((int)local_128[1] != iVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMetasoundAssetBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar17 == plVar1) break;
      plVar2 = (longlong *)*plVar17;
      if ((param_1->bForceReregister != false) ||
         (bVar10 = Metasound::Frontend::FGraphClassRegistryKey::IsValid
                             ((FGraphClassRegistryKey *)(plVar2 + 1)), !bVar10)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      }
      plVar17 = plVar17 + 1;
    }
    if (local_128[0] != (longlong *)0x0) {
      FMemory::Free(local_128[0]);
    }
  }
  pvVar13 = (void *)0x0;
  this_00 = (UObject *)(**(code **)(this->_padding_ + 0x50))(this);
  if ((this_00 == (UObject *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                          ,0x173,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((Metasound::Frontend::AssetManagerPrivate::Instance.Ptr == (IMetaSoundAssetManager *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AssetManagerPrivate::Instance.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                          ,0x123,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)((longlong)*Metasound::Frontend::AssetManagerPrivate::Instance.Ptr + 0x18))
            (Metasound::Frontend::AssetManagerPrivate::Instance.Ptr,local_a8,this_00);
  this_01 = Metasound::Frontend::FNodeClassRegistry::Get();
  local_b8.DataPtr._0_4_ = *(undefined4 *)&(param_1->PageOrder).DataPtr;
  local_b8.DataPtr._4_4_ = *(undefined4 *)((longlong)&(param_1->PageOrder).DataPtr + 4);
  local_b8.ArrayNum = (param_1->PageOrder).ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&(param_1->PageOrder).field_0xc;
  local_e8 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    if (this_00 != (UObject *)0x0) goto LAB_14add43c7;
  }
  else {
    UE::GC::MarkAsReachable(this_00);
LAB_14add43c7:
    pUVar12 = UMetaSoundDocumentInterface::StaticClass();
    pvVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar12);
  }
  local_e0 = pvVar13;
  pFVar14 = Metasound::Frontend::FNodeClassRegistry::RegisterGraph
                      (this_01,&local_88,(TScriptInterface<IMetaSoundDocumentInterface> *)&local_e8,
                       &local_b8);
  uVar6 = *(undefined3 *)&(pFVar14->NodeKey).field_0x1;
  FVar7.Value = (pFVar14->NodeKey).ClassName.Namespace.ComparisonIndex.Value;
  uVar5 = *(undefined8 *)&(pFVar14->NodeKey).ClassName.Namespace.Number;
  (this->GraphRegistryKey).NodeKey.Type = (pFVar14->NodeKey).Type;
  *(undefined3 *)&(this->GraphRegistryKey).NodeKey.field_0x1 = uVar6;
  (this->GraphRegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = (FNameEntryId)FVar7.Value;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Namespace.Number = uVar5;
  uVar5 = *(undefined8 *)&(pFVar14->NodeKey).ClassName.Variant.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Name.Number =
       *(undefined8 *)&(pFVar14->NodeKey).ClassName.Name.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.ClassName.Variant.Number = uVar5;
  uVar5 = *(undefined8 *)&(pFVar14->AssetPath).PackageName.Number;
  *(undefined8 *)&(this->GraphRegistryKey).NodeKey.Version.Minor =
       *(undefined8 *)&(pFVar14->NodeKey).Version.Minor;
  *(undefined8 *)&(this->GraphRegistryKey).AssetPath.PackageName.Number = uVar5;
  *(undefined8 *)&(this->GraphRegistryKey).AssetPath.AssetName.Number =
       *(undefined8 *)&(pFVar14->AssetPath).AssetName.Number;
  bVar10 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&this->GraphRegistryKey);
  if (!bVar10) {
    lVar3 = *(longlong *)&this_00->field_0x10;
    if ((lVar3 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Class",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetBase.cpp"
                            ,0x1a8,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_118 = *(FName *)(lVar3 + 0x18);
    ::FName::ToString(&local_118,&local_c8);
    local_110.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
    local_110.Number = *(uint *)&this_00->field_0x1c;
    ::FName::ToString(&local_110,&local_d8);
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
LAB_14add44ee:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_res20 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// VersionDependencies @ 14add4950

bool __thiscall
FMetasoundAssetBase::VersionDependencies
          (FMetasoundAssetBase *this,FMetaSoundFrontendDocumentBuilder *param_1,bool param_2)

{
  return false;
}

// operator() @ 15055d0d0

bool __thiscall
`FMetasoundAssetBase::TryUpdateInterfaceFromVersion'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5402432335624797291>);
  if (bVar2) {
    FMetasoundFrontendVersion::ToString
              ((FMetasoundFrontendVersion *)(*(longlong *)this + 0x40),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5402432335624797291>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055d13b;
    }
  }
  bVar2 = false;
LAB_15055d13b:
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

