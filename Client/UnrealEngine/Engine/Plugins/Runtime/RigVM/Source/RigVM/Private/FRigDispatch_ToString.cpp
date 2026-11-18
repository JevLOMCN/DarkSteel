// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// StaticStruct @ 14a12e7e0

UScriptStruct * __cdecl FRigDispatch_ToString::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_ToString.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigDispatch_ToString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_ToString,(UObject *)pUVar1,
                         L"RigDispatch_ToString");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_ToString.OuterSingleton;
}

// GetArgumentInfos @ 14a12e820

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_ToString::GetArgumentInfos(FRigDispatch_ToString *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_res18 [2];
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
        atexit(`FRigDispatch_ToString::GetArgumentInfos'::__l5::
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
    pFVar5 = ::FName::FName(&local_res8,L"Value");
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Input,
               &ValueCategories,&local_48);
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
    pFVar5 = ::FName::FName(local_res18,L"Result");
    local_58.Name = local_res8;
    local_58.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Output,
               &local_58);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a12ea20

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigDispatch_ToString::OnNewArgumentType
          (FRigDispatch_ToString *this,
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
  FName local_res20;
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
  ::FName::FName(local_res10,L"Value");
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,local_res10,param_2);
  ::FName::FName(&local_res20,L"Result");
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
    *(FName *)local_88.Pointer = local_res20;
    *(FName *)((longlong)local_88.Pointer + 8) = RigVMTypeUtils::TypeIndex::FString.Name;
    *(int *)((longlong)local_88.Pointer + 0x10) = RigVMTypeUtils::TypeIndex::FString.Index;
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
  if (uVar12 == 0) goto LAB_14a12ec75;
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      uVar7 = 0;
      goto LAB_14a12ec22;
    }
  }
  else {
LAB_14a12ec22:
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
LAB_14a12ec75:
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
        goto LAB_14a12ed1d;
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
LAB_14a12ed1d:
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

// GetDispatchFunctionImpl @ 14a12f0c0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_ToString::GetDispatchFunctionImpl
          (FRigDispatch_ToString *this,
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
  
  pFVar2 = ::FName::FName(local_res10,L"Value");
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
    return `FRigDispatch_ToString::GetDispatchFunctionImpl'::__l5::<lambda_1>::
           <lambda_invoker_cdecl>;
  }
  pcVar5 = Execute;
  if (*(int *)&pTVar3->field_0x10 == RigVMTypeUtils::TypeIndex::FString.Index) {
    pcVar5 = `FRigDispatch_ToString::GetDispatchFunctionImpl'::__l8::<lambda_2>::
             <lambda_invoker_cdecl>;
  }
  return pcVar5;
}

// <lambda_invoker_cdecl> @ 14a182170

void __cdecl
`FRigDispatch_ToString::GetDispatchFunctionImpl'::__l5::<lambda_1>::<lambda_invoker_cdecl>
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

// <lambda_invoker_cdecl> @ 14a1821f0

void __cdecl
`FRigDispatch_ToString::GetDispatchFunctionImpl'::__l8::<lambda_2>::<lambda_invoker_cdecl>
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

// operator() @ 14a192aa0

void __thiscall
`FRigDispatch_ToString::GetDispatchFunctionImpl'::__l5::<lambda_1>::operator()
          (void *this,FRigVMExtendedExecuteContext *param_1,
          TArrayView<FRigVMMemoryHandle,int> *param_2,TArrayView<FRigVMPredicateBranch,int> *param_3
          )

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FProperty *pFVar8;
  FName *this_00;
  FString *pFVar9;
  FString local_18;
  
  if (param_2->ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
  if ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xd & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[0].IsName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x115,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_2->ArrayNum < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[1].PropertyPath;
  if (pFVar2 == (FRigVMPropertyPath *)0x0) {
    pFVar8 = param_2->DataPtr[1].Property;
  }
  else {
    pFVar8 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xe & 1) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handles[1].IsString()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x116,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this_00 = (FName *)pFVar3->Ptr;
  }
  else {
    this_00 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar1 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (FString *)param_2->DataPtr[1].Ptr;
  pFVar9 = ::FName::ToString(this_00,&local_18);
  if (pFVar4 != pFVar9) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar4->Data).ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14a192eb0

void __thiscall
`FRigDispatch_ToString::GetDispatchFunctionImpl'::__l8::<lambda_2>::operator()
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
                       ,0x121,L"");
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
                       ,0x122,L"");
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

// Execute @ 14a197760

void __cdecl
FRigDispatch_ToString::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FString *this;
  code *pcVar4;
  bool bVar5;
  FProperty *this_00;
  FProperty *pFVar6;
  uchar *puVar7;
  
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
    this_00 = param_2->DataPtr->Property;
  }
  else {
    this_00 = FRigVMPropertyPath::GetTailProperty(pFVar2);
  }
  if (this_00 == (FProperty *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_String.cpp"
                       ,0x130,L"");
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
                       ,0x131,L"");
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
    puVar7 = pFVar3->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
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
  this = (FString *)param_2->DataPtr[1].Ptr;
  ::FString::Reset(this,0);
  FProperty::ExportText_Direct(this_00,this,puVar7,puVar7,(UObject *)0x0,0,(UObject *)0x0);
  return;
}

