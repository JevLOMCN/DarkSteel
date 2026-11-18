// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13d660

UScriptStruct * __cdecl FRigVMDispatch_SelectInt32::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_SelectInt32.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_SelectInt32.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32,(UObject *)pUVar1,
                         L"RigVMDispatch_SelectInt32");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_SelectInt32.OuterSingleton;
}

// GetArgumentNameForOperandIndex @ 14a13d8f0

FName __thiscall
FRigVMDispatch_SelectInt32::GetArgumentNameForOperandIndex
          (FRigVMDispatch_SelectInt32 *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

{
  FString *pFVar1;
  FString *pFVar2;
  FLazyName *this_00;
  uint in_register_00000014;
  FName this_01;
  ForAnyElementType FVar3;
  FName local_58;
  FName local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((param_2 < 1) || ((int)param_3 + -1 <= param_2)) {
    this_00 = &ResultName;
    if (param_2 == 0) {
      this_00 = &IndexName;
    }
    FLazyName::Resolve(this_00);
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_48,param_2 + -1);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_58,(wchar_t *)FVar3.Data);
    FLazyName::Resolve(&ValuesName);
    pFVar1 = ::FName::ToString(&local_58,&local_18);
    pFVar2 = ::FName::ToString(&local_50,&local_28);
    RigVMStringUtils::JoinStrings(&local_38,pFVar2,pFVar1,L"_",(wchar_t *)0x0,(wchar_t *)0x0);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)this_01,(wchar_t *)FVar3.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return this_01;
    }
  }
  return this_01;
}

// GetArgumentInfos @ 14a13db90

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_SelectInt32::GetArgumentInfos
          (FRigVMDispatch_SelectInt32 *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_68;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_58;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar5 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_res8.ComparisonIndex.Value._0_2_ = 0x302;
        ArrayCategories.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,2,0,&ArrayCategories.AllocatorInstance,2,&ArrayCategories.ArrayMax);
        memcpy(ArrayCategories.AllocatorInstance.Data,&local_res8,2);
        atexit(`FRigVMDispatch_SelectInt32::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__ArrayCategories__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (*piVar5 < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        local_res8.ComparisonIndex.Value._0_2_ = 0x201;
        SingleCategories.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,2,0,&SingleCategories.AllocatorInstance,2,&SingleCategories.ArrayMax);
        memcpy(SingleCategories.AllocatorInstance.Data,&local_res8,2);
        atexit(`FRigVMDispatch_SelectInt32::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__SingleCategories__);
        _Init_thread_footer(&::_TSS1);
      }
    }
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::Int32.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::Int32.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&IndexName);
    local_68.Name = local_res8;
    local_68.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Input,
               &local_68);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_58._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_58._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ValuesName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
               &ArrayCategories,&local_58);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_58._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_58._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ResultName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Output,
               &SingleCategories,&local_58);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a13df20

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_SelectInt32::OnNewArgumentType
          (FRigVMDispatch_SelectInt32 *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FRigVMRegistry_NoLock *pFVar10;
  TRigVMTypeIndex *pTVar11;
  TRigVMTypeIndex *pTVar12;
  undefined1 *puVar13;
  uint uVar14;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar15;
  uint uVar16;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  FNameEntryId local_res10;
  uint uStackX_14;
  FName local_res18;
  TRigVMTypeIndex *local_res20;
  FName local_98;
  int local_90;
  FSparseArrayAllocationInfo local_88;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0;
  puVar13 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar13 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res18 = (FName)param_1;
  local_res20 = param_2;
  FLazyName::Resolve(&IndexName);
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar13,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar19 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar19 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar19 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar19 + (longlong)(iVar7 >> 5) * 4) &
         ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f));
  }
  else {
    iVar6 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar7 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    iVar1 = *(int *)((longlong)iVar6 * 0x1c + 4 + *(longlong *)__return_storage_ptr__);
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x1c + *(longlong *)__return_storage_ptr__) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_88,iVar6);
  pTVar15 = pTVar17;
  if (local_88.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(FName *)local_88.Pointer = local_98;
    *(FName *)((longlong)local_88.Pointer + 8) = RigVMTypeUtils::TypeIndex::Int32.Name;
    *(int *)((longlong)local_88.Pointer + 0x10) = RigVMTypeUtils::TypeIndex::Int32.Index;
    *(undefined4 *)((longlong)local_88.Pointer + 0x14) = 0xffffffff;
    pTVar15 = local_88.Pointer;
  }
  uVar2 = *(undefined8 *)&pTVar15->field_0x0;
  local_res10.Value = local_88.Index;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar8 = uVar8 + (int)((ulonglong)uVar2 >> 0x20);
  bVar5 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,uVar8,pTVar15,(int *)&local_res10,(bool *)0x0);
  if (bVar5) goto LAB_14a13e2d7;
  uVar16 = 1;
  uVar14 = *(int *)puVar13 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar14) {
    uVar20 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar14 < 1) || ((int)uVar16 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar8;
    *(uint *)&pTVar15->field_0x18 = uVar8;
    puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar13 = &__return_storage_ptr__->field_0x38;
    }
    uVar20 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar8;
    *(undefined4 *)(&pTVar15->field_0x0 + 0x14) = *(undefined4 *)(puVar13 + uVar20 * 4);
    *(uint *)(puVar13 + uVar20 * 4) = local_res10.Value;
    goto LAB_14a13e2d7;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar16;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar16 != 0) {
    uVar8 = uVar16;
    if (uVar16 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar8 = 0;
        goto LAB_14a13e10b;
      }
    }
    else {
LAB_14a13e10b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar8,4);
    }
    if (0 < (int)uVar16) {
      uVar20 = (ulonglong)uVar16;
      pTVar15 = pTVar17;
      do {
        puVar13 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar9 = (ulonglong)pTVar15 & (longlong)(int)uVar16 - 1U;
        pTVar15 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(&pTVar15->field_0x0 + 1);
        *(undefined4 *)(puVar13 + uVar9 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar8 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_88.Pointer = &__return_storage_ptr__->field_0x10;
    local_88.Index = 0;
    local_88._4_4_ = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar8 != 0) {
      puVar21 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar21 = local_88.Pointer;
      }
      uVar14 = *puVar21;
      pTVar15 = pTVar17;
      while (uVar14 == 0) {
        iVar6 = (int)pTVar17;
        uStack_70 = (int)pTVar15 + 0x20;
        pTVar15 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_70;
        local_88.Index = iVar6 + 1;
        pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_88.Index;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < local_88.Index)
        goto LAB_14a13e1fb;
        uVar14 = puVar21[(longlong)iVar6 + 1];
      }
      local_88._4_4_ = -uVar14 & uVar14;
      uVar20 = (ulonglong)(uint)local_88._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_74 = (int)lVar3 + -1 + uStack_70;
      pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_74;
      if ((int)uVar8 < (int)uStack_74) {
LAB_14a13e1fb:
        pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uVar8;
        uStack_74 = uVar8;
      }
    }
    local_78 = 0xffffffff;
    local_60._padding_ = CONCAT44(local_88._4_4_,local_88.Index);
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_68 = __return_storage_ptr__;
    local_60.Array = local_88.Pointer;
    if ((int)pTVar17 < (int)uVar8) {
      do {
        puVar18 = (undefined8 *)((longlong)(int)pTVar17 * 0x1c + *(longlong *)local_68);
        uVar2 = *puVar18;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                uVar8 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(puVar18 + 3) = uVar8;
        puVar13 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar20 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)((longlong)puVar18 + 0x14) = *(undefined4 *)(puVar13 + uVar20 * 4);
        *(int *)(puVar13 + uVar20 * 4) = (int)pTVar17;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_14a13e2d7:
  FLazyName::Resolve(&ValuesName);
  FVar4.Number = uStackX_14;
  FVar4.ComparisonIndex.Value = local_res10.Value;
  if (*(FName *)local_res18 == FVar4) {
    FLazyName::Resolve(&ValuesName);
    pTVar11 = local_res20;
    TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::Emplace<FName,TRigVMTypeIndex_const_&>
              ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)__return_storage_ptr__,&local_res18,local_res20);
    pFVar10 = FRigVMRegistryHandle::operator->(param_3);
    local_90 = pTVar11->Index;
    local_98 = pTVar11->Name;
    pTVar11 = (TRigVMTypeIndex *)
              (**(code **)(pFVar10->_padding_ + 0x150))(pFVar10,&local_88,&local_98);
    FLazyName::Resolve(&ResultName);
    TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::Emplace<FName,TRigVMTypeIndex>
              ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)__return_storage_ptr__,&local_res18,pTVar11);
  }
  else {
    pFVar10 = FRigVMRegistryHandle::operator->(param_3);
    pTVar11 = local_res20;
    local_90 = local_res20->Index;
    local_98 = local_res20->Name;
    pTVar12 = (TRigVMTypeIndex *)
              (**(code **)(pFVar10->_padding_ + 0x148))(pFVar10,&local_88,&local_98);
    FLazyName::Resolve(&ValuesName);
    TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::Emplace<FName,TRigVMTypeIndex>
              ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)__return_storage_ptr__,&local_res18,pTVar12);
    FLazyName::Resolve(&ResultName);
    TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::Emplace<FName,TRigVMTypeIndex_const_&>
              ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)__return_storage_ptr__,&local_res18,pTVar11);
  }
  return __return_storage_ptr__;
}

// IsSingleton @ 14a13e410

bool __thiscall FRigVMDispatch_SelectInt32::IsSingleton(FRigVMDispatch_SelectInt32 *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a13e420

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_SelectInt32::GetDispatchFunctionImpl
          (FRigVMDispatch_SelectInt32 *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19d440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMDispatch_SelectInt32::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar1;
  code *pcVar2;
  uchar *puVar3;
  uint uVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigVMExecuteContext *pFVar6;
  undefined8 uVar7;
  int *piVar8;
  uchar *puVar9;
  FRigVMMemoryHandle *pFVar10;
  FProperty *pFVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  FRigVMLogSettings local_res10;
  FRigVMExecuteContext *local_res20;
  FString local_28;
  
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::Last(param_2,0);
  if (pFVar5->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetTailProperty(pFVar5->PropertyPath);
  }
  iVar13 = param_2->ArrayNum + -2;
  if (iVar13 < 1) {
    pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
    ::FString::FString(&local_28,L"SelectInt32: No cases to select from.");
    local_res10.Severity = Error;
    local_res10.bLogOnce = true;
    pTVar1 = (pFVar6->RuntimeSettings).LogFunction.Object;
    if (pTVar1 == (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
                   *)0x0) {
      if (1 < (byte)LogRigVM._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      }
    }
    else {
      local_res20 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar1);
      pcVar2 = *(code **)pTVar1;
      plVar12 = (longlong *)&pTVar1->field_0x10;
      if (*(longlong **)&pTVar1->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&pTVar1->field_0x28;
      }
      uVar7 = (**(code **)(*plVar12 + 8))();
      (*pcVar2)(uVar7,&local_res10,&local_res20,&local_28);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
    if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
      piVar8 = (int *)pFVar5->Ptr;
    }
    else {
      piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
    }
    iVar14 = *piVar8;
    if ((iVar14 < 0) || (iVar13 <= iVar14)) {
      pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
      local_res10.Severity = Warning;
      local_res10.bLogOnce = true;
      ::FString::PrintfImpl
                (&local_28,
                 L"SelectInt32: Invalid index %d - num cases is %d. Falling back to index 0.");
      FRigVMExecuteContext::Log(pFVar6,&local_res10,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      iVar14 = 0;
    }
    pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,iVar14 + 1);
    if (pFVar5->LazyBranch != (FRigVMLazyBranch *)0x0) {
      uVar4 = FRigVMExtendedExecuteContext::GetSliceHash(param_1);
      FRigVMMemoryHandle::ComputeLazyValueIfNecessary(pFVar5,param_1,uVar4);
    }
    if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
      puVar9 = pFVar5->Ptr;
    }
    else {
      puVar9 = FRigVMPropertyPath::GetData_Internal
                         (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
    }
    pFVar10 = TArrayView<FRigVMMemoryHandle,int>::Last(param_2,0);
    puVar3 = pFVar10->Ptr;
    if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
      pFVar11 = pFVar5->Property;
    }
    else {
      pFVar11 = FRigVMPropertyPath::GetTailProperty(pFVar5->PropertyPath);
    }
    pFVar5 = TArrayView<FRigVMMemoryHandle,int>::Last(param_2,0);
    FRigVMDispatchFactory::CopyProperty(pFVar5->Property,puVar3,pFVar11,puVar9);
  }
  return;
}

