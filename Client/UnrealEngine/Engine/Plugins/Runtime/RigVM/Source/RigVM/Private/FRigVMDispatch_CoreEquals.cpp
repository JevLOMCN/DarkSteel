// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 18

// StaticStruct @ 14a172960

UScriptStruct * __cdecl FRigVMDispatch_CoreEquals::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals,(UObject *)pUVar1,
                         L"RigVMDispatch_CoreEquals");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreEquals.OuterSingleton;
}

// GetArgumentNameForOperandIndex @ 14a1729e0

FName __thiscall
FRigVMDispatch_CoreEquals::GetArgumentNameForOperandIndex
          (FRigVMDispatch_CoreEquals *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ArgumentNames[0] = AName;
      ArgumentNames[1] = BName;
      ArgumentNames[2] = ResultName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a172ad0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_CoreEquals::GetArgumentInfos
          (FRigVMDispatch_CoreEquals *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_58;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_48;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_res8.ComparisonIndex.Value._0_2_ = 0x201;
        ValueCategories.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,2,0,&ValueCategories.AllocatorInstance,2,&ValueCategories.ArrayMax);
        memcpy(ValueCategories.AllocatorInstance.Data,&local_res8,2);
        atexit(`FRigVMDispatch_CoreEquals::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__ValueCategories__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_48._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_48._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&AName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
               &ValueCategories,&local_48);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_48._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_48._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&BName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
               &ValueCategories,&local_48);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ResultName);
    local_58.Name = local_res8;
    local_58.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Output,
               &local_58);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a172d40

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_CoreEquals::OnNewArgumentType
          (FRigVMDispatch_CoreEquals *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar16;
  uint *puVar17;
  FName local_res10 [2];
  undefined8 local_res20;
  FSparseArrayAllocationInfo local_88;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  pTVar16 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0;
  puVar9 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar9 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FLazyName::Resolve(&AName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,local_res10,param_2);
  FLazyName::Resolve(&BName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,local_res10,param_2);
  FLazyName::Resolve(&ResultName);
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar9,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar7 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar7;
    puVar14 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar14 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar14 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar6 >> 5) * 4) &
         ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x1f));
  }
  else {
    iVar5 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar6 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    iVar1 = *(int *)((longlong)iVar5 * 0x1c + 4 + *(longlong *)__return_storage_ptr__);
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x1c + *(longlong *)__return_storage_ptr__) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_88,iVar5);
  pTVar11 = pTVar16;
  if (local_88.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(undefined8 *)local_88.Pointer = local_res20;
    *(FName *)((longlong)local_88.Pointer + 8) = RigVMTypeUtils::TypeIndex::Bool.Name;
    *(int *)((longlong)local_88.Pointer + 0x10) = RigVMTypeUtils::TypeIndex::Bool.Index;
    *(undefined4 *)((longlong)local_88.Pointer + 0x14) = 0xffffffff;
    pTVar11 = local_88.Pointer;
  }
  uVar2 = *(undefined8 *)pTVar11;
  local_res10[0].ComparisonIndex.Value = local_88.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar7 = uVar7 + (int)((ulonglong)uVar2 >> 0x20);
  bVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,uVar7,pTVar11,(int *)local_res10,(bool *)0x0);
  if (bVar4) {
    return __return_storage_ptr__;
  }
  uVar12 = 1;
  uVar10 = *(int *)puVar9 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar10) {
    uVar15 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar12 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar7;
    *(uint *)&pTVar11->field_0x18 = uVar7;
    puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &__return_storage_ptr__->field_0x38;
    }
    uVar15 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
    *(undefined4 *)&pTVar11->field_0x14 = *(undefined4 *)(puVar9 + uVar15 * 4);
    *(uint *)(puVar9 + uVar15 * 4) = local_res10[0].ComparisonIndex.Value;
    return __return_storage_ptr__;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar12;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar12 == 0) goto LAB_14a172fb5;
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar7 = 0;
      goto LAB_14a172f61;
    }
  }
  else {
LAB_14a172f61:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar7,4);
  }
  if (0 < (int)uVar12) {
    uVar15 = (ulonglong)uVar12;
    pTVar11 = pTVar16;
    do {
      puVar9 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      uVar8 = (ulonglong)pTVar11 & (longlong)(int)uVar12 - 1U;
      pTVar11 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)&pTVar11->field_0x1;
      *(undefined4 *)(puVar9 + uVar8 * 4) = 0xffffffff;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
LAB_14a172fb5:
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar7 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_88.Pointer = &__return_storage_ptr__->field_0x10;
    local_88.Index = 0;
    local_88._4_4_ = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar7 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = local_88.Pointer;
      }
      uVar10 = *puVar17;
      pTVar11 = pTVar16;
      while (uVar10 == 0) {
        iVar5 = (int)pTVar11;
        uStack_70 = (int)pTVar16 + 0x20;
        pTVar16 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_70;
        local_88.Index = iVar5 + 1;
        pTVar11 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_88.Index;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_88.Index)
        goto LAB_14a17305d;
        uVar10 = puVar17[(longlong)iVar5 + 1];
      }
      local_88._4_4_ = -uVar10 & uVar10;
      uVar15 = (ulonglong)(uint)local_88._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_74 = (int)lVar3 + -1 + uStack_70;
      pTVar16 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_74;
      if ((int)uVar7 < (int)uStack_74) {
LAB_14a17305d:
        pTVar16 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uVar7;
        uStack_74 = uVar7;
      }
    }
    local_78 = 0xffffffff;
    local_60._padding_._0_4_ = local_88.Index;
    local_60._padding_._4_4_ = local_88._4_4_;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60.CurrentBitIndex = uStack_74;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_68 = __return_storage_ptr__;
    local_60.Array = local_88.Pointer;
    if ((int)pTVar16 < (int)uVar7) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)pTVar16 * 0x1c + *(longlong *)local_68);
        uVar2 = *puVar13;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                uVar7 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(puVar13 + 3) = uVar7;
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar15 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)((longlong)puVar13 + 0x14) = *(undefined4 *)(puVar9 + uVar15 * 4);
        *(int *)(puVar9 + uVar15 * 4) = (int)pTVar16;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        pTVar16 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a173170

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_CoreEquals::GetDispatchFunctionImpl
          (FRigVMDispatch_CoreEquals *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  bool bVar2;
  TTuple<FName,TRigVMTypeIndex> *pTVar3;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var4;
  code *pcVar5;
  FRigVMRegistry_NoLock *pFVar6;
  UScriptStruct *pUVar7;
  FString *pFVar8;
  TRigVMTypeIndex *pTVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FName local_res10;
  FName local_res20;
  FName local_138;
  FName local_130;
  UScriptStruct *local_128;
  FName local_120;
  UScriptStruct *local_118;
  FName local_110;
  UScriptStruct *local_108;
  FName local_100;
  UScriptStruct *local_f8;
  FName local_f0;
  UScriptStruct *local_e8;
  undefined1 local_e0 [8];
  int local_d8;
  undefined1 local_d4 [8];
  int local_cc;
  undefined1 local_c8 [8];
  int local_c0;
  undefined1 local_bc [8];
  int local_b4;
  undefined1 local_b0 [8];
  int local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined8 local_50;
  TRigVMTypeIndex local_40 [2];
  
  FLazyName::Resolve(&AName);
  pTVar3 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,local_res10);
  pwVar11 = L"";
  if ((pTVar3 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar2)) {
    pcVar5 = (code *)swi(3);
    p_Var4 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar5)();
    return p_Var4;
  }
  local_50 = *(undefined8 *)&pTVar3->field_0x8;
  iVar1 = *(int *)&pTVar3->field_0x10;
  FLazyName::Resolve(&BName);
  pTVar3 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,local_res20);
  if ((pTVar3 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar2)) {
    pcVar5 = (code *)swi(3);
    p_Var4 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar5)();
    return p_Var4;
  }
  if ((iVar1 != *(int *)&pTVar3->field_0x10) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex == InTypes.FindChecked(BName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                         ,0x30,L""), bVar2)) {
    pcVar5 = (code *)swi(3);
    p_Var4 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar5)();
    return p_Var4;
  }
  FLazyName::Resolve(&ResultName);
  pTVar3 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,local_138);
  if ((pTVar3 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar2)) {
    pcVar5 = (code *)swi(3);
    p_Var4 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar5)();
    return p_Var4;
  }
  if ((*(int *)&pTVar3->field_0x10 != RigVMTypeUtils::TypeIndex::Bool.Index) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTypes.FindChecked(ResultName) == RigVMTypeUtils::TypeIndex::Bool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                         ,0x31,L""), bVar2)) {
    pcVar5 = (code *)swi(3);
    p_Var4 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar5)();
    return p_Var4;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    pcVar5 = Equals<float>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::Double.Index) {
    pcVar5 = Equals<double>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    pcVar5 = Equals<int>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::FName.Index) {
    pcVar5 = NameEquals;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::FString.Index) {
    pcVar5 = StringEquals;
  }
  else {
    pFVar6 = FRigVMRegistryHandle::operator->(param_2);
    pUVar7 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_a0,pUVar7);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_130,pwVar10);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    local_128 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (**(code **)(pFVar6->_padding_ + 0xe0))(pFVar6,local_e0,&local_130);
    if (iVar1 == local_d8) {
      pcVar5 = MathTypeEquals<UE::Math::TVector<double>_>;
    }
    else {
      pFVar6 = FRigVMRegistryHandle::operator->(param_2);
      pUVar7 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_90,pUVar7);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_120,pwVar10);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      local_118 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (**(code **)(pFVar6->_padding_ + 0xe0))(pFVar6,local_d4,&local_120);
      if (iVar1 == local_cc) {
        pcVar5 = MathTypeEquals<UE::Math::TVector2<double>_>;
      }
      else {
        pFVar6 = FRigVMRegistryHandle::operator->(param_2);
        pUVar7 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
        pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_80,pUVar7);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_110,pwVar10);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        local_108 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        (**(code **)(pFVar6->_padding_ + 0xe0))(pFVar6,local_c8,&local_110);
        if (iVar1 == local_c0) {
          pcVar5 = MathTypeEquals<UE::Math::TRotator<double>_>;
        }
        else {
          pFVar6 = FRigVMRegistryHandle::operator->(param_2);
          pUVar7 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
          pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_70,pUVar7);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_100,pwVar10);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          local_f8 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (**(code **)(pFVar6->_padding_ + 0xe0))(pFVar6,local_bc,&local_100);
          if (iVar1 == local_b4) {
            pcVar5 = MathTypeEquals<UE::Math::TQuat<double>_>;
          }
          else {
            pFVar6 = FRigVMRegistryHandle::operator->(param_2);
            pUVar7 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
            pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_60,pUVar7);
            if ((pFVar8->Data).ArrayNum != 0) {
              pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
            }
            ::FName::FName(&local_f0,pwVar11);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            local_e8 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar7 != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            (**(code **)(pFVar6->_padding_ + 0xe0))(pFVar6,local_b0);
            if (iVar1 == local_a8) {
              pcVar5 = MathTypeEquals<UE::Math::TTransform<double>_>;
            }
            else {
              pFVar6 = FRigVMRegistryHandle::operator->(param_2);
              pTVar9 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>
                                 (pFVar6,local_40,false);
              pcVar5 = Execute;
              if (iVar1 == pTVar9->Index) {
                pcVar5 = MathTypeEquals<FLinearColor>;
              }
            }
          }
        }
      }
    }
  }
  return pcVar5;
}

// Equals<int> @ 14a182c10

void __cdecl
FRigVMDispatch_CoreEquals::Equals<int>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(byte *)(pFVar7->_padding_ + 0x18) & 0x80) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x2a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(byte *)(pFVar7->_padding_ + 0x18) & 0x80) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[1].IsType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x2b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x2c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar8 = (int *)pFVar3->Ptr;
  }
  else {
    piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar9 = (int *)pFVar3[1].Ptr;
  }
  else {
    piVar9 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = param_2->DataPtr[2].Ptr;
  bVar6 = AdaptResult(*piVar8 == *piVar9,param_1);
  *puVar4 = bVar6;
  return;
}

// Equals<float> @ 14a182f00

void __cdecl
FRigVMDispatch_CoreEquals::Equals<float>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  float *pfVar8;
  float *pfVar9;
  
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 8 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[0].IsType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                         ,0x2a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 8 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[1].IsType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                         ,0x2b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[2].IsBool()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                         ,0x2c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar3->Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if ((iVar1 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if ((iVar1 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar4 = param_2->DataPtr[2].Ptr;
  bVar6 = AdaptResult(*pfVar9 == *pfVar8,param_1);
  *puVar4 = bVar6;
  return;
}

// Equals<double> @ 14a183200

void __cdecl
FRigVMDispatch_CoreEquals::Equals<double>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  double *pdVar8;
  double *pdVar9;
  
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x100000000) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[0].IsType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                         ,0x2a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x100000000) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[1].IsType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                         ,0x2b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[2].IsBool()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                         ,0x2c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar8 = (double *)pFVar3->Ptr;
  }
  else {
    pdVar8 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if ((iVar1 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar9 = (double *)pFVar3[1].Ptr;
  }
  else {
    pdVar9 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if ((iVar1 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar4 = param_2->DataPtr[2].Ptr;
  bVar6 = AdaptResult(*pdVar9 == *pdVar8,param_1);
  *puVar4 = bVar6;
  return;
}

// MathTypeEquals<UE::Math::TQuat<double>_> @ 14a189010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRigVMDispatch_CoreEquals::MathTypeEquals<UE::Math::TQuat<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMPropertyPath *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  UScriptStruct *pUVar13;
  FProperty *pFVar14;
  double *pdVar15;
  double *pdVar16;
  FRigVMMemoryHandle *pFVar17;
  uchar *puVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  if (param_2->ArrayNum < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  pUVar13 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  pFVar1 = pFVar17->PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar14 = pFVar17->Property;
  }
  else {
    pFVar14 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((pFVar14 == (FProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a1890bd:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Handles[0].IsType<T>()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                        ,0x4c,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar14[1]._padding_ == (UScriptStruct *)0x0) {
      bVar11 = pUVar13 == (UScriptStruct *)0x0;
    }
    else {
      bVar11 = (UScriptStruct *)pFVar14[1]._padding_ == pUVar13;
    }
    if (!bVar11) goto LAB_14a1890bd;
  }
  if (param_2->ArrayNum < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  pUVar13 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  pFVar1 = pFVar17[1].PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar14 = pFVar17[1].Property;
  }
  else {
    pFVar14 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((pFVar14 == (FProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a18916d:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Handles[1].IsType<T>()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                        ,0x4d,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar14[1]._padding_ == (UScriptStruct *)0x0) {
      bVar11 = pUVar13 == (UScriptStruct *)0x0;
    }
    else {
      bVar11 = (UScriptStruct *)pFVar14[1]._padding_ == pUVar13;
    }
    if (!bVar11) goto LAB_14a18916d;
  }
  if (param_2->ArrayNum < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr[2].PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar14 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar14 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Handles[2].IsBool()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                        ,0x4e,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar15 = (double *)pFVar17->Ptr;
  }
  else {
    pdVar15 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar17->PropertyPath,pFVar17->Ptr,pFVar17->Property);
  }
  if (iVar19 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar16 = (double *)pFVar17[1].Ptr;
  }
  else {
    pdVar16 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar17[1].PropertyPath,pFVar17[1].Ptr,pFVar17[1].Property);
  }
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar18 = FRigVMMemoryHandle::GetData_Internal(pFVar17,false,-1);
  dVar9 = pdVar16[2] + pdVar15[2];
  dVar10 = pdVar16[3] + pdVar15[3];
  dVar22 = pdVar15[2] - pdVar16[2];
  dVar23 = pdVar15[3] - pdVar16[3];
  dVar7 = *pdVar16 + *pdVar15;
  dVar8 = pdVar16[1] + pdVar15[1];
  dVar24 = *pdVar15 - *pdVar16;
  dVar25 = pdVar15[1] - pdVar16[1];
  lVar21 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar23,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar21;
  auVar3._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
  iVar19 = movmskpd((int)pFVar17,auVar3);
  lVar21 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar25,0) & _UNK_15061cc88));
  auVar4._8_4_ = (int)lVar21;
  auVar4._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
  uVar12 = movmskpd((int)puVar18,auVar4);
  uVar20 = iVar19 << 2 | uVar12;
  if (uVar20 != 0) {
    lVar21 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar21;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar5._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    uVar20 = movmskpd(uVar20,auVar5);
    lVar21 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar21;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar6._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar19 = movmskpd(uVar12,auVar6);
    if ((uVar20 & 0x3fffffff) != 0 || iVar19 != 0) {
      bVar11 = false;
      goto LAB_14a18937b;
    }
  }
  bVar11 = true;
LAB_14a18937b:
  bVar11 = AdaptResult(bVar11,param_1);
  *puVar18 = bVar11;
  return;
}

// MathTypeEquals<UE::Math::TRotator<double>_> @ 14a1893b0

void __cdecl
FRigVMDispatch_CoreEquals::MathTypeEquals<UE::Math::TRotator<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FProperty *pFVar6;
  TRotator<double> *this;
  TRotator<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  
  if (param_2->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  pFVar2 = pFVar8->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar8->Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 == (FProperty *)0x0) || ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a189453:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (!bVar4) goto LAB_14a189453;
  }
  if (param_2->ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  pFVar2 = pFVar8[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar8[1].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (bVar4) goto LAB_14a189529;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handles[1].IsType<T>()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                     ,0x4d,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a189529:
  if (param_2->ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TRotator<double> *)pFVar8->Ptr;
  }
  else {
    this = (TRotator<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TRotator<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar7 = (TRotator<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  bVar4 = UE::Math::TRotator<double>::Equals(this,pTVar7,__real_3f1a36e2e0000000);
  bVar4 = AdaptResult(bVar4,param_1);
  *puVar9 = bVar4;
  return;
}

// MathTypeEquals<UE::Math::TTransform<double>_> @ 14a1896d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRigVMDispatch_CoreEquals::MathTypeEquals<UE::Math::TTransform<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMPropertyPath *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  UScriptStruct *pUVar17;
  FProperty *pFVar18;
  double *pdVar19;
  double *pdVar20;
  FRigVMMemoryHandle *pFVar21;
  uchar *puVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  if (param_2->ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar21 = param_2->DataPtr;
  pUVar17 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  pFVar1 = pFVar21->PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar18 = pFVar21->Property;
  }
  else {
    pFVar18 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a18976b:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Handles[0].IsType<T>()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                        ,0x4c,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar18[1]._padding_ == (UScriptStruct *)0x0) {
      bVar15 = pUVar17 == (UScriptStruct *)0x0;
    }
    else {
      bVar15 = (UScriptStruct *)pFVar18[1]._padding_ == pUVar17;
    }
    if (!bVar15) goto LAB_14a18976b;
  }
  if (param_2->ArrayNum < 2) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar21 = param_2->DataPtr;
  pUVar17 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  pFVar1 = pFVar21[1].PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar18 = pFVar21[1].Property;
  }
  else {
    pFVar18 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a18981b:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Handles[1].IsType<T>()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                        ,0x4d,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar18[1]._padding_ == (UScriptStruct *)0x0) {
      bVar15 = pUVar17 == (UScriptStruct *)0x0;
    }
    else {
      bVar15 = (UScriptStruct *)pFVar18[1]._padding_ == pUVar17;
    }
    if (!bVar15) goto LAB_14a18981b;
  }
  if (param_2->ArrayNum < 3) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr[2].PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar18 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar18 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Handles[2].IsBool()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                        ,0x4e,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar16 = param_2->ArrayNum;
  if (iVar16 < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar21 = param_2->DataPtr;
  if (pFVar21->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar19 = (double *)pFVar21->Ptr;
  }
  else {
    pdVar19 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar21->PropertyPath,pFVar21->Ptr,pFVar21->Property);
  }
  if (iVar16 < 2) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar21 = param_2->DataPtr;
  if (pFVar21[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar20 = (double *)pFVar21[1].Ptr;
  }
  else {
    pdVar20 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar21[1].PropertyPath,pFVar21[1].Ptr,pFVar21[1].Property);
  }
  pFVar21 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar22 = FRigVMMemoryHandle::GetData_Internal(pFVar21,false,-1);
  lVar26 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(pdVar19[7] - pdVar20[7]) >> 0x20) & _UNK_15061cc8c,
                             SUB84(pdVar19[7] - pdVar20[7],0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar26;
  auVar3._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)(pdVar19[6] - pdVar20[6]) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(pdVar19[6] - pdVar20[6],0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  uVar23 = movmskpd((int)pFVar21,auVar3);
  lVar26 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)(pdVar19[5] - pdVar20[5]) >> 0x20) & _UNK_15061cc8c,
                             SUB84(pdVar19[5] - pdVar20[5],0) & _UNK_15061cc88));
  auVar8._8_4_ = (int)lVar26;
  auVar8._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)(pdVar19[4] - pdVar20[4]) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(pdVar19[4] - pdVar20[4],0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  iVar16 = movmskpd((int)puVar22,auVar8);
  if ((uVar23 & 0x3fffffff) == 0 && iVar16 == 0) {
    dVar27 = pdVar19[2] - pdVar20[2];
    dVar28 = pdVar19[3] - pdVar20[3];
    dVar13 = pdVar19[2] + pdVar20[2];
    dVar14 = pdVar19[3] + pdVar20[3];
    dVar29 = *pdVar19 - *pdVar20;
    dVar30 = pdVar19[1] - pdVar20[1];
    dVar11 = *pdVar19 + *pdVar20;
    dVar12 = pdVar19[1] + pdVar20[1];
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar28,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar26;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar24 = movmskpd(0,auVar4);
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar30,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar26;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar23 = movmskpd(iVar16,auVar5);
    uVar25 = iVar24 << 2 | uVar23;
    if (uVar25 != 0) {
      lVar26 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar14,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar26;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar13,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar25 = movmskpd(uVar25,auVar6);
      lVar26 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar12,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar26;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar11,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar9);
      if ((uVar25 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_14a189aad;
    }
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(pdVar19[0xb] - pdVar20[0xb]) >> 0x20) &
                               _UNK_15061cc8c,SUB84(pdVar19[0xb] - pdVar20[0xb],0) & _UNK_15061cc88)
              );
    auVar7._8_4_ = (int)lVar26;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)(pdVar19[10] - pdVar20[10]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(pdVar19[10] - pdVar20[10],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar25 = movmskpd(0,auVar7);
    lVar26 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(pdVar19[9] - pdVar20[9]) >> 0x20) & _UNK_15061cc8c
                               ,SUB84(pdVar19[9] - pdVar20[9],0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar26;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)(pdVar19[8] - pdVar20[8]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(pdVar19[8] - pdVar20[8],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar16 = movmskpd(uVar23,auVar10);
    if ((uVar25 & 0x3fffffff) == 0 && iVar16 == 0) {
      bVar15 = true;
      goto LAB_14a189aaf;
    }
  }
LAB_14a189aad:
  bVar15 = false;
LAB_14a189aaf:
  bVar15 = AdaptResult(bVar15,param_1);
  *puVar22 = bVar15;
  return;
}

// MathTypeEquals<UE::Math::TVector2<double>_> @ 14a189ae0

void __cdecl
FRigVMDispatch_CoreEquals::MathTypeEquals<UE::Math::TVector2<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FProperty *pFVar6;
  double *pdVar7;
  double *pdVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  
  if (param_2->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  pUVar5 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  pFVar2 = pFVar9->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar9->Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 == (FProperty *)0x0) || ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a189b83:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (!bVar4) goto LAB_14a189b83;
  }
  if (param_2->ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  pUVar5 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  pFVar2 = pFVar9[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar9[1].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (bVar4) goto LAB_14a189c59;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handles[1].IsType<T>()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                     ,0x4d,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a189c59:
  if (param_2->ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar9->Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar8 = (double *)pFVar9[1].Ptr;
  }
  else {
    pdVar8 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(*pdVar7 - *pdVar8) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(*pdVar7 - *pdVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
     || (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)(pdVar7[1] - pdVar8[1]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(pdVar7[1] - pdVar8[1],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar4 = AdaptResult(bVar4,param_1);
  *puVar10 = bVar4;
  return;
}

// MathTypeEquals<UE::Math::TVector<double>_> @ 14a189e20

void __cdecl
FRigVMDispatch_CoreEquals::MathTypeEquals<UE::Math::TVector<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FProperty *pFVar6;
  double *pdVar7;
  double *pdVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  
  if (param_2->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  pFVar2 = pFVar9->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar9->Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 == (FProperty *)0x0) || ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a189ec3:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (!bVar4) goto LAB_14a189ec3;
  }
  if (param_2->ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  pFVar2 = pFVar9[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar9[1].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (bVar4) goto LAB_14a189f99;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handles[1].IsType<T>()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                     ,0x4d,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a189f99:
  if (param_2->ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar9->Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar8 = (double *)pFVar9[1].Ptr;
  }
  else {
    pdVar8 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(*pdVar7 - *pdVar8) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(*pdVar7 - *pdVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      || (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)(pdVar7[1] - pdVar8[1]) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(pdVar7[1] - pdVar8[1],0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(pdVar7[2] - pdVar8[2]) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(pdVar7[2] - pdVar8[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                      ))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar4 = AdaptResult(bVar4,param_1);
  *puVar10 = bVar4;
  return;
}

// MathTypeEquals<FLinearColor> @ 14a18a180

void __cdecl
FRigVMDispatch_CoreEquals::MathTypeEquals<FLinearColor>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FProperty *pFVar6;
  float *pfVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  
  if (param_2->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  pUVar5 = TBaseStructure<FLinearColor>::Get();
  pFVar2 = pFVar9->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar9->Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 == (FProperty *)0x0) || ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14a18a223:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (!bVar4) goto LAB_14a18a223;
  }
  if (param_2->ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  pUVar5 = TBaseStructure<FLinearColor>::Get();
  pFVar2 = pFVar9[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = pFVar9[1].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    if ((UScriptStruct *)pFVar6[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar5 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)pFVar6[1]._padding_ == pUVar5;
    }
    if (bVar4) goto LAB_14a18a2f9;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handles[1].IsType<T>()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                     ,0x4d,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a18a2f9:
  if (param_2->ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar9->Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  if ((((__real_38d1b717 <=
         (float)((uint)(*pfVar7 - *pfVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_38d1b717 <=
        (float)((uint)(pfVar7[1] - pfVar8[1]) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
      (__real_38d1b717 <=
       (float)((uint)(pfVar7[2] - pfVar8[2]) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_38d1b717 <=
      (float)((uint)(pfVar7[3] - pfVar8[3]) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar4 = AdaptResult(bVar4,param_1);
  *puVar10 = bVar4;
  return;
}

// AdaptResult @ 14a194010

bool __cdecl
FRigVMDispatch_CoreEquals::AdaptResult(bool param_1,FRigVMExtendedExecuteContext *param_2)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals,(UObject *)pUVar1,
                         L"RigVMDispatch_CoreNotEquals");
  }
  if (param_2->Factory->FactoryScriptStruct ==
      Z_Registration_Info_UScriptStruct_FRigVMDispatch_CoreNotEquals.OuterSingleton) {
    param_1 = !param_1;
  }
  return param_1;
}

// Execute @ 14a19cd90

void __cdecl
FRigVMDispatch_CoreEquals::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FProperty *pFVar8;
  FProperty *pFVar9;
  uchar *puVar10;
  uchar *puVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar8 = param_2->DataPtr->Property;
  }
  else {
    pFVar8 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar9 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar9 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (pFVar8 == (FProperty *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyA",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                       ,0x70,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pFVar9 == (FProperty *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                       ,0x71,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  cVar7 = (**(code **)(pFVar8->_padding_ + 0x1a0))(pFVar8,pFVar9);
  if (cVar7 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyA->SameType(PropertyB)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                       ,0x72,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar9 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar9 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Core.cpp"
                       ,0x73,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar10 = pFVar3->Ptr;
  }
  else {
    puVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar11 = pFVar3[1].Ptr;
  }
  else {
    puVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = param_2->DataPtr[2].Ptr;
  bVar6 = (bool)(**(code **)(pFVar8->_padding_ + 0xb8))(pFVar8,puVar10,puVar11,0);
  *puVar4 = bVar6;
  bVar6 = AdaptResult(bVar6,param_1);
  *puVar4 = bVar6;
  return;
}

// NameEquals @ 14a1b19c0

void __cdecl
FRigVMDispatch_CoreEquals::NameEquals
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xd & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<FName>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x35,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xd & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[1].IsType<FName>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x36,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[2].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x37,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar8 = (int *)pFVar3->Ptr;
  }
  else {
    piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar9 = (int *)pFVar3[1].Ptr;
  }
  else {
    piVar9 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = param_2->DataPtr[2].Ptr;
  if ((*piVar8 == *piVar9) && (piVar8[1] == piVar9[1])) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  bVar6 = AdaptResult(bVar6,param_1);
  *puVar4 = bVar6;
  return;
}

// StringEquals @ 14a1eaa40

void __cdecl
FRigVMDispatch_CoreEquals::StringEquals
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMPropertyPath *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FProperty *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  
  if (param_2->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr->PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xe & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsType<FString>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x40,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr[1].PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xe & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[1].IsType<FString>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x41,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = param_2->DataPtr[2].PropertyPath;
  if (pFVar1 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar1);
  }
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[2].IsBool()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMFunctions\\RigVMDispatch_Core.h"
                       ,0x42,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar2->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar6 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar2[1].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar6 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = param_2->DataPtr[2].Ptr;
  iVar6 = *(int *)(puVar8 + 8);
  if (iVar6 == *(int *)(puVar9 + 8)) {
    if (iVar6 < 2) {
      bVar5 = true;
    }
    else {
      iVar6 = wcscmp(*(wchar_t **)puVar8,*(wchar_t **)puVar9);
      bVar5 = iVar6 == 0;
    }
  }
  else {
    bVar5 = iVar6 + *(int *)(puVar9 + 8) == 1;
  }
  bVar5 = AdaptResult(bVar5,param_1);
  *puVar3 = bVar5;
  return;
}

