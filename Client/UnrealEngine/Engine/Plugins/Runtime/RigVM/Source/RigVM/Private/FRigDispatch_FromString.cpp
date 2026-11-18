// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// StaticStruct @ 14a12f660

UScriptStruct * __cdecl FRigDispatch_FromString::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_FromString.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigDispatch_FromString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_FromString,(UObject *)pUVar1,
                         L"RigDispatch_FromString");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_FromString.OuterSingleton;
}

// GetArgumentInfos @ 14a12f6a0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_FromString::GetArgumentInfos
          (FRigDispatch_FromString *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
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
        atexit(`FRigDispatch_FromString::GetArgumentInfos'::__l5::
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
    iVar3 = RigVMTypeUtils::TypeIndex::FString.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::FString.Name;
    lVar2 = *(longlong *)puVar1;
    pFVar5 = ::FName::FName(&local_res18,L"String");
    local_58.Name = local_res8;
    local_58.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Input,
               &local_58);
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
    pFVar5 = ::FName::FName(&local_res8,L"Result");
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Output,
               &ValueCategories,&local_48);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a12f8a0

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigDispatch_FromString::OnNewArgumentType
          (FRigDispatch_FromString *this,
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
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  FName local_res10 [2];
  TRigVMTypeIndex *local_res20;
  FName local_88;
  FSparseArrayAllocationInfo local_80;
  undefined4 local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  pTVar13 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0;
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
  local_res20 = param_2;
  ::FName::FName(&local_88,L"String");
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar9,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar7 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar7;
    puVar15 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar15 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar15 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar15 + (longlong)(iVar6 >> 5) * 4) &
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
                   *)__return_storage_ptr__,&local_80,iVar5);
  pTVar11 = pTVar13;
  if (local_80.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(FName *)local_80.Pointer = local_88;
    *(FName *)((longlong)local_80.Pointer + 8) = RigVMTypeUtils::TypeIndex::FString.Name;
    *(int *)((longlong)local_80.Pointer + 0x10) = RigVMTypeUtils::TypeIndex::FString.Index;
    *(undefined4 *)((longlong)local_80.Pointer + 0x14) = 0xffffffff;
    pTVar11 = local_80.Pointer;
  }
  uVar2 = *(undefined8 *)&pTVar11->field_0x0;
  local_res10[0].ComparisonIndex.Value = local_80.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar7 = uVar7 + (int)((ulonglong)uVar2 >> 0x20);
  bVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,uVar7,pTVar11,(int *)local_res10,(bool *)0x0);
  if (bVar4) goto LAB_14a12fc57;
  uVar12 = 1;
  uVar10 = *(int *)puVar9 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar10) {
    uVar16 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
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
    uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
    *(undefined4 *)(&pTVar11->field_0x0 + 0x14) = *(undefined4 *)(puVar9 + uVar16 * 4);
    *(uint *)(puVar9 + uVar16 * 4) = local_res10[0].ComparisonIndex.Value;
    goto LAB_14a12fc57;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar12;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar12 != 0) {
    uVar7 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar7 = 0;
        goto LAB_14a12fa84;
      }
    }
    else {
LAB_14a12fa84:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar7,4);
    }
    if (0 < (int)uVar12) {
      uVar16 = (ulonglong)uVar12;
      pTVar11 = pTVar13;
      do {
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar8 = (ulonglong)pTVar11 & (longlong)(int)uVar12 - 1U;
        pTVar11 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(&pTVar11->field_0x0 + 1);
        *(undefined4 *)(puVar9 + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar7 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_80.Pointer = &__return_storage_ptr__->field_0x10;
    local_80.Index = 0;
    local_80._4_4_ = 1;
    uStack_6c = 0;
    uStack_68 = 0;
    if (uVar7 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = local_80.Pointer;
      }
      uVar10 = *puVar17;
      pTVar11 = pTVar13;
      while (uVar10 == 0) {
        iVar5 = (int)pTVar13;
        uStack_68 = (int)pTVar11 + 0x20;
        pTVar11 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_68;
        local_80.Index = iVar5 + 1;
        pTVar13 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_80.Index;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_80.Index)
        goto LAB_14a12fb7b;
        uVar10 = puVar17[(longlong)iVar5 + 1];
      }
      local_80._4_4_ = -uVar10 & uVar10;
      uVar16 = (ulonglong)(uint)local_80._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_6c = (int)lVar3 + -1 + uStack_68;
      pTVar13 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_6c;
      if ((int)uVar7 < (int)uStack_6c) {
LAB_14a12fb7b:
        pTVar13 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uVar7;
        uStack_6c = uVar7;
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
    if ((int)pTVar13 < (int)uVar7) {
      do {
        puVar14 = (undefined8 *)((longlong)(int)pTVar13 * 0x1c + *(longlong *)local_60);
        uVar2 = *puVar14;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                uVar7 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(puVar14 + 3) = uVar7;
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)(puVar9 + uVar16 * 4);
        *(int *)(puVar9 + uVar16 * 4) = (int)pTVar13;
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
        pTVar13 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_58.CurrentBitIndex;
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
  }
LAB_14a12fc57:
  ::FName::FName(local_res10,L"Result");
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,local_res10,local_res20);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a12fca0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_FromString::GetDispatchFunctionImpl
          (FRigDispatch_FromString *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  bool bVar1;
  FName *pFVar2;
  TTuple<FName,TRigVMTypeIndex> *pTVar3;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var4;
  code *pcVar5;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,L"Result");
  pTVar3 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar2);
  if (pTVar3 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar1) {
      pcVar5 = (code *)swi(3);
      p_Var4 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar5)();
      return p_Var4;
    }
  }
  if (*(int *)&pTVar3->field_0x10 == RigVMTypeUtils::TypeIndex::FName.Index) {
    return `FRigDispatch_FromString::GetDispatchFunctionImpl'::__l5::<lambda_1>::
           <lambda_invoker_cdecl>;
  }
  pcVar5 = Execute;
  if (*(int *)&pTVar3->field_0x10 == RigVMTypeUtils::TypeIndex::FString.Index) {
    pcVar5 = `FRigDispatch_FromString::GetDispatchFunctionImpl'::__l8::<lambda_2>::
             <lambda_invoker_cdecl>;
  }
  return pcVar5;
}

// <lambda_invoker_cdecl> @ 14a182130

void __cdecl
`FRigDispatch_FromString::GetDispatchFunctionImpl'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  undefined1 local_res10 [24];
  TArrayView<FRigVMPredicateBranch,int> local_28;
  TArrayView<FRigVMMemoryHandle,int> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  operator()(local_res10,param_1,&local_18,&local_28);
  return;
}

// <lambda_invoker_cdecl> @ 14a1821b0

void __cdecl
`FRigDispatch_FromString::GetDispatchFunctionImpl'::__l8::<lambda_2>::<lambda_invoker_cdecl>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  undefined1 local_res10 [24];
  TArrayView<FRigVMPredicateBranch,int> local_28;
  TArrayView<FRigVMMemoryHandle,int> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  operator()(local_res10,param_1,&local_18,&local_28);
  return;
}

// operator() @ 14a1928a0

void __thiscall
`FRigDispatch_FromString::GetDispatchFunctionImpl'::__l5::<lambda_1>::operator()
          (void *this,FRigVMExtendedExecuteContext *param_1,
          TArrayView<FRigVMMemoryHandle,int> *param_2,TArrayView<FRigVMPredicateBranch,int> *param_3
          )

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *pFVar7;
  uchar *puVar8;
  wchar_t *pwVar9;
  FName local_res18;
  
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
  pwVar9 = L"";
  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xe & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x159,L"");
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
                      ("Handles[1].IsName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x15a,L"");
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
    puVar8 = pFVar3->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
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
  pFVar4 = (FName *)param_2->DataPtr[1].Ptr;
  if (*(int *)(puVar8 + 8) != 0) {
    pwVar9 = *(wchar_t **)puVar8;
  }
  ::FName::FName(&local_res18,pwVar9);
  *pFVar4 = local_res18;
  return;
}

// operator() @ 14a192cd0

void __thiscall
`FRigDispatch_FromString::GetDispatchFunctionImpl'::__l8::<lambda_2>::operator()
          (void *this,FRigVMExtendedExecuteContext *param_1,
          TArrayView<FRigVMMemoryHandle,int> *param_2,TArrayView<FRigVMPredicateBranch,int> *param_3
          )

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  FProperty *pFVar6;
  FString *pFVar7;
  
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
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = param_2->DataPtr->Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0xe & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x165,L"");
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
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar6 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar6 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0xe & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[1].IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x166,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FString *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FString *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar1 < 2) {
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
  ::FString::operator=((FString *)param_2->DataPtr[1].Ptr,pFVar7);
  return;
}

// Execute @ 14a197310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigDispatch_FromString::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  uchar *_Dst;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  FProperty *this;
  FProperty *pFVar7;
  uchar *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  UScriptStruct *pUVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  FString *pFVar15;
  undefined1 local_res10 [8];
  FName local_78;
  FString local_70;
  FOutputDevice local_60;
  FString *local_50;
  ulonglong local_48;
  
  if ((param_2->ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    this = param_2->DataPtr[1].Property;
  }
  else {
    this = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((this == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                         ,0x174,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_2->DataPtr->PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xe & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handles[0].IsString()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                         ,0x175,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar3->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if ((iVar1 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  _Dst = param_2->DataPtr[1].Ptr;
  FOutputDevice::FOutputDevice(&local_60);
  local_50 = (FString *)0x0;
  local_60._padding_ =
       (longlong)
       &`FRigDispatch_FromString::Execute'::`2'::FRigDispatch_FromString_ErrorPipe::_vftable_;
  local_48 = 0;
  if (*(int *)(puVar8 + 8) == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = *(wchar_t **)puVar8;
  }
  bVar6 = FProperty::ValidateImportFlags(this,0,&local_60);
  if ((bVar6) && (pwVar13 != (wchar_t *)0x0)) {
    (**(code **)(this->_padding_ + 0xe8))(this,pwVar13,_Dst,0,0,0x8000000,&local_60);
  }
  if ((int)local_48 != 0) {
    if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x150))(this,_Dst);
    }
    else {
      memset(_Dst,0,(longlong)this->ElementSize * (longlong)this->ArrayDim);
    }
    uVar5 = local_48;
    uVar9 = (ulonglong)(int)local_48;
    pFVar15 = local_50 + uVar9;
    pFVar12 = local_50;
    while( true ) {
      FVar14.Data = (FScriptContainerElement *)0x0;
      if ((int)local_48 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar12 == pFVar15) break;
      if (param_1->VM != (URigVM *)0x0) {
        local_78 = (FName)param_1->VM->_padding_;
        ::FName::ToString(&local_78,&local_70);
        FVar14.Data = local_70.Data.AllocatorInstance.Data;
        local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.Data.ArrayNum = 0;
        local_70.Data.ArrayMax = 0;
      }
      if (1 < (byte)LogRigVM._0_1_) {
        lVar10 = (**(code **)((param_1->PublicDataScope)._padding_ + 0x20))
                           (&param_1->PublicDataScope);
        pUVar11 = FRigVMExecuteContext::StaticStruct();
        if (pUVar11 == (UScriptStruct *)0x0) {
LAB_14a197668:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                             ,0x29e,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          iVar1 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar10 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14a197668;
        }
        (**(code **)((param_1->PublicDataScope)._padding_ + 0x18))(&param_1->PublicDataScope);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      }
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
      uVar9 = uVar5 & 0xffffffff;
      pFVar12 = pFVar12 + 1;
    }
  }
  DestructItems<FString,int>(local_50,(int)local_48);
  if (local_50 != (FString *)0x0) {
    FMemory::Free(local_50);
  }
  FOutputDevice::~FOutputDevice(&local_60);
  return;
}

