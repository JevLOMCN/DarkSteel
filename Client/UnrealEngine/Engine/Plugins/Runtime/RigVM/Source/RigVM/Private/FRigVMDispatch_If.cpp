// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1272c0

UScriptStruct * __cdecl FRigVMDispatch_If::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_If.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_If.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_If,(UObject *)pUVar1,
                         L"RigVMDispatch_If");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_If.OuterSingleton;
}

// GetArgumentNameForOperandIndex @ 14a1273e0

FName __thiscall
FRigVMDispatch_If::GetArgumentNameForOperandIndex
          (FRigVMDispatch_If *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

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
      ArgumentNames[0] = ConditionName;
      ArgumentNames[1] = TrueName;
      ArgumentNames[2] = FalseName;
      ArgumentNames[3] = ResultName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_If.cpp"
                       ,0x11,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a1274e0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_If::GetArgumentInfos(FRigVMDispatch_If *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_68;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_58;
  
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
        atexit(`FRigVMDispatch_If::GetArgumentInfos'::__l5::
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
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ConditionName);
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
    FLazyName::Resolve(&TrueName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
               &ValueCategories,&local_58);
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
    FLazyName::Resolve(&FalseName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
               &ValueCategories,&local_58);
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
               &ValueCategories,&local_58);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a127850

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_If::OnNewArgumentType
          (FRigVMDispatch_If *this,
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
  undefined1 *puVar10;
  uint uVar11;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar12;
  uint uVar13;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  FName local_res10 [2];
  FName local_res20;
  undefined8 local_88;
  FSparseArrayAllocationInfo local_80;
  undefined4 local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0;
  puVar10 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res20 = (FName)param_2;
  FLazyName::Resolve(&ConditionName);
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar10,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar16 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar16 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) &
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
                   *)__return_storage_ptr__,&local_80,iVar6);
  pTVar12 = pTVar14;
  if (local_80.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(undefined8 *)local_80.Pointer = local_88;
    *(FName *)((longlong)local_80.Pointer + 8) = RigVMTypeUtils::TypeIndex::Bool.Name;
    *(int *)((longlong)local_80.Pointer + 0x10) = RigVMTypeUtils::TypeIndex::Bool.Index;
    *(undefined4 *)((longlong)local_80.Pointer + 0x14) = 0xffffffff;
    pTVar12 = local_80.Pointer;
  }
  uVar2 = *(undefined8 *)&pTVar12->field_0x0;
  local_res10[0].ComparisonIndex.Value = local_80.Index;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar8 = uVar8 + (int)((ulonglong)uVar2 >> 0x20);
  bVar5 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,uVar8,pTVar12,(int *)local_res10,(bool *)0x0);
  if (bVar5) goto LAB_14a127c07;
  uVar13 = 1;
  uVar11 = *(int *)puVar10 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar11) {
    uVar17 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar13 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar8;
    *(uint *)&pTVar12->field_0x18 = uVar8;
    puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &__return_storage_ptr__->field_0x38;
    }
    uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar8;
    *(undefined4 *)(&pTVar12->field_0x0 + 0x14) = *(undefined4 *)(puVar10 + uVar17 * 4);
    *(uint *)(puVar10 + uVar17 * 4) = local_res10[0].ComparisonIndex.Value;
    goto LAB_14a127c07;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar13;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar13 != 0) {
    uVar8 = uVar13;
    if (uVar13 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar8 = 0;
        goto LAB_14a127a34;
      }
    }
    else {
LAB_14a127a34:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar8,4);
    }
    if (0 < (int)uVar13) {
      uVar17 = (ulonglong)uVar13;
      pTVar12 = pTVar14;
      do {
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar9 = (ulonglong)pTVar12 & (longlong)(int)uVar13 - 1U;
        pTVar12 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(&pTVar12->field_0x0 + 1);
        *(undefined4 *)(puVar10 + uVar9 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar8 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_80.Pointer = &__return_storage_ptr__->field_0x10;
    local_80.Index = 0;
    local_80._4_4_ = 1;
    uStack_6c = 0;
    uStack_68 = 0;
    if (uVar8 != 0) {
      puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar18 = local_80.Pointer;
      }
      uVar11 = *puVar18;
      pTVar12 = pTVar14;
      while (uVar11 == 0) {
        iVar6 = (int)pTVar14;
        uStack_68 = (int)pTVar12 + 0x20;
        pTVar12 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_68;
        local_80.Index = iVar6 + 1;
        pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_80.Index;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < local_80.Index)
        goto LAB_14a127b2b;
        uVar11 = puVar18[(longlong)iVar6 + 1];
      }
      local_80._4_4_ = -uVar11 & uVar11;
      uVar17 = (ulonglong)(uint)local_80._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_6c = (int)lVar3 + -1 + uStack_68;
      pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_6c;
      if ((int)uVar8 < (int)uStack_6c) {
LAB_14a127b2b:
        pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uVar8;
        uStack_6c = uVar8;
      }
    }
    local_70 = 0xffffffff;
    local_58._padding_ = CONCAT44(local_80._4_4_,local_80.Index);
    local_58.CurrentBitIndex = uStack_6c;
    local_58.UnvisitedBitMask = 0xffffffff;
    local_58._28_4_ = uStack_64;
    local_58.BaseBitIndex = uStack_68;
    local_60 = __return_storage_ptr__;
    local_58.Array = local_80.Pointer;
    if ((int)pTVar14 < (int)uVar8) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)pTVar14 * 0x1c + *(longlong *)local_60);
        uVar2 = *puVar15;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                uVar8 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(puVar15 + 3) = uVar8;
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)((longlong)puVar15 + 0x14) = *(undefined4 *)(puVar10 + uVar17 * 4);
        *(int *)(puVar10 + uVar17 * 4) = (int)pTVar14;
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
        pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_58.CurrentBitIndex;
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
  }
LAB_14a127c07:
  FLazyName::Resolve(&TrueName);
  FVar4 = local_res20;
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,local_res10,(TRigVMTypeIndex *)local_res20);
  FLazyName::Resolve(&FalseName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,&local_res20,(TRigVMTypeIndex *)FVar4);
  FLazyName::Resolve(&ResultName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,&local_res20,(TRigVMTypeIndex *)FVar4);
  return __return_storage_ptr__;
}

// IsSingleton @ 14a127d60

bool __thiscall FRigVMDispatch_If::IsSingleton(FRigVMDispatch_If *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a127da0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_If::GetDispatchFunctionImpl
          (FRigVMDispatch_If *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19d0c0

void __cdecl
FRigVMDispatch_If::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *this;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  FProperty *pFVar8;
  
  iVar1 = param_2->ArrayNum;
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
  this = param_2->DataPtr[1].PropertyPath;
  if (this != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetTailProperty(this);
  }
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2 - (uint)(*puVar6 != '\0'));
  if (pFVar7->LazyBranch != (FRigVMLazyBranch *)0x0) {
    uVar5 = FRigVMExtendedExecuteContext::GetSliceHash(param_1);
    FRigVMMemoryHandle::ComputeLazyValueIfNecessary(pFVar7,param_1,uVar5);
  }
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 4) {
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
  puVar2 = param_2->DataPtr[3].Ptr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = pFVar7->Property;
  }
  else {
    pFVar8 = FRigVMPropertyPath::GetTailProperty(pFVar7->PropertyPath);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  FRigVMDispatchFactory::CopyProperty(pFVar7->Property,puVar2,pFVar8,puVar6);
  return;
}

