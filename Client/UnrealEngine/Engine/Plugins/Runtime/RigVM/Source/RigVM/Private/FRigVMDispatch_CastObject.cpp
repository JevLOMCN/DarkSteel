// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a17a320

UScriptStruct * __cdecl FRigVMDispatch_CastObject::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_CastObject.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_CastObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CastObject,(UObject *)pUVar1,
                         L"RigVMDispatch_CastObject");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_CastObject.OuterSingleton;
}

// GetArgumentInfos @ 14a17a6f0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_CastObject::GetArgumentInfos
          (FRigVMDispatch_CastObject *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  longlong lVar5;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  FRigVMTemplateArgumentInfo *pFVar7;
  FName local_res8;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> local_78;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> local_68;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_58;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_res8.ComparisonIndex.Value._0_1_ = 0x10;
        ElementCategories.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,1,0,&ElementCategories.AllocatorInstance,1,&ElementCategories.ArrayMax);
        memcpy(ElementCategories.AllocatorInstance.Data,&local_res8,1);
        atexit(`FRigVMDispatch_CastObject::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__ElementCategories__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&local_68.AllocatorInstance,&local_68.ArrayMax);
    local_58._0_8_ = 0;
    local_58._40_8_ = 0;
    pFVar7 = (FRigVMTemplateArgumentInfo *)
             (local_68.AllocatorInstance.Data + (longlong)iVar4 * 0x50);
    local_68.ArrayNum = iVar4 + 1;
    FLazyName::Resolve(&ValueName);
    FVar2._1_7_ = local_res8._1_7_;
    FVar2.ComparisonIndex.Value._0_1_ = (undefined1)local_res8.ComparisonIndex.Value;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              (pFVar7,FVar2,Input,&ElementCategories,&local_58);
    if (local_68.ArrayNum == local_68.ArrayMax) {
      local_68.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1050,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar5 = (longlong)local_68.ArrayNum;
    local_68.ArrayNum = local_68.ArrayNum + 1;
    pFVar7 = (FRigVMTemplateArgumentInfo *)(local_68.AllocatorInstance.Data + lVar5 * 0x50);
    FLazyName::Resolve(&ResultName);
    FVar3._1_7_ = local_res8._1_7_;
    FVar3.ComparisonIndex.Value._0_1_ = (undefined1)local_res8.ComparisonIndex.Value;
    local_78.ArrayNum = -1;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              (pFVar7,FVar3,Output,(TRigVMTypeIndex *)&local_78);
    FLazyName::Resolve(&ValueName);
    pTVar6 = FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument
                       ((FRigVMDispatchFactory *)this,&local_78,&local_68,&local_res8,param_1);
    if ((TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1 != pTVar6) {
      DestructItems<FRigVMTemplateArgumentInfo,int>
                (*(FRigVMTemplateArgumentInfo **)puVar1,*(int *)&this->field_0xa0);
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)&this->field_0xa0 = pTVar6->ArrayNum;
      *(int *)&this->field_0xa4 = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FRigVMTemplateArgumentInfo *)local_78.AllocatorInstance.Data !=
        (FRigVMTemplateArgumentInfo *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if ((FRigVMTemplateArgumentInfo *)local_68.AllocatorInstance.Data !=
        (FRigVMTemplateArgumentInfo *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetPermutationsFromArgumentType @ 14a17a960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMDispatch_CastObject::GetPermutationsFromArgumentType
          (FRigVMDispatch_CastObject *this,FName *param_1,TRigVMTypeIndex *param_2,
          TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_3,FRigVMRegistryHandle *param_4)

{
  longlong lVar1;
  TRigVMTypeIndex *pTVar2;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FRigVMRegistry_NoLock *pFVar9;
  longlong *plVar10;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar11;
  longlong lVar12;
  TRigVMTypeIndex *pTVar13;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined1 local_177 [3];
  FName local_174;
  FName local_16c;
  undefined1 local_164 [8];
  FName local_15c;
  FName local_154;
  undefined1 local_14c [20];
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_138;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_128;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_118;
  undefined1 *local_108;
  longlong local_100;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_f8;
  undefined1 *local_e8;
  TRigVMTypeIndex *local_e0;
  undefined1 local_d8 [72];
  undefined4 local_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FLazyName::Resolve(&ValueName);
  if (*param_1 == local_174) {
    pFVar9 = FRigVMRegistryHandle::operator->(param_4);
    plVar10 = (longlong *)(**(code **)(pFVar9->_padding_ + 0x140))(pFVar9,0x10);
    lVar5 = plVar10[1];
    lVar12 = *plVar10;
    lVar1 = lVar12 + (longlong)(int)lVar5 * 0xc;
    while( true ) {
      if ((int)plVar10[1] != (int)lVar5) {
        local_178 = 0;
        `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_178);
      }
      if (lVar12 == lVar1) break;
      FLazyName::Resolve(&ValueName);
      local_118.Key = &local_16c;
      local_118.Value = param_2;
      FLazyName::Resolve(&ResultName);
      local_108 = local_164;
      local_138._First = &local_118;
      local_138._Last = &local_f8;
      local_100 = lVar12;
      TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
      ::
      TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)local_d8,&local_138);
      FVar3 = (param_3->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                )param_3;
      if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )0x0) {
        FVar11 = FVar3;
      }
      if ((ulonglong)FVar11 <= local_d8) {
        FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )param_3;
        if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                      )0x0) {
          FVar11 = FVar3;
        }
        if (local_d8 < (undefined1 *)((longlong)param_3->ArrayMax * 0x50 + (longlong)FVar11)) {
          local_190 = (longlong)param_3->ArrayNum;
          local_188 = 0x50;
          local_1a0 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                       )param_3;
          if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                        )0x0) {
            local_1a0 = FVar3;
          }
          local_1a8 = local_d8;
          local_198 = (longlong)param_3->ArrayMax;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
      }
      iVar8 = param_3->ArrayNum;
      if (iVar8 == param_3->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>_>
                          (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar8 + 1;
      FVar3 = (param_3->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                )param_3;
      if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )0x0) {
        FVar11 = FVar3;
      }
      TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
      ::
      TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)((longlong)iVar8 * 0x50 + (longlong)FVar11),
                 (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)local_d8);
      local_90 = 0;
      if ((void *)local_d8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      lVar12 = lVar12 + 0xc;
    }
  }
  else {
    FLazyName::Resolve(&ResultName);
    if (*param_1 == local_15c) {
      pFVar9 = FRigVMRegistryHandle::operator->(param_4);
      plVar10 = (longlong *)(**(code **)(pFVar9->_padding_ + 0x140))(pFVar9,0x10);
      lVar1 = plVar10[1];
      pTVar13 = (TRigVMTypeIndex *)*plVar10;
      pTVar2 = pTVar13 + (int)lVar1;
      while( true ) {
        if ((int)plVar10[1] != (int)lVar1) {
          local_177[0] = 0;
          `TCheckedPointerIterator<TRigVMTypeIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_177);
        }
        if (pTVar13 == pTVar2) break;
        FLazyName::Resolve(&ValueName);
        local_f8.Key = &local_154;
        local_f8.Value = pTVar13;
        FLazyName::Resolve(&ResultName);
        local_e8 = local_14c;
        local_128._First = &local_f8;
        local_128._Last = (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_d8;
        local_e0 = param_2;
        TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
        ::
        TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)local_88,&local_128);
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )param_3;
        if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                      )0x0) {
          FVar11 = FVar3;
        }
        if ((ulonglong)FVar11 <= local_88) {
          FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )param_3;
          if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                        )0x0) {
            FVar11 = FVar3;
          }
          if (local_88 < (undefined1 *)((longlong)param_3->ArrayMax * 0x50 + (longlong)FVar11)) {
            local_190 = (longlong)param_3->ArrayNum;
            local_188 = 0x50;
            local_1a0 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                         )param_3;
            if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                          )0x0) {
              local_1a0 = FVar3;
            }
            local_1a8 = local_88;
            local_198 = (longlong)param_3->ArrayMax;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
        }
        iVar8 = param_3->ArrayNum;
        if (iVar8 == param_3->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>_>
                            (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar8 + 1;
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )param_3;
        if (FVar3 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                      )0x0) {
          FVar11 = FVar3;
        }
        TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
        ::
        TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)((longlong)iVar8 * 0x50 + (longlong)FVar11),
                   (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)local_88);
        local_40 = 0;
        if ((void *)local_88._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_88._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        pTVar13 = pTVar13 + 1;
      }
    }
  }
  return param_3->ArrayNum != 0;
}

// IsSingleton @ 14a17ad60

bool __thiscall FRigVMDispatch_CastObject::IsSingleton(FRigVMDispatch_CastObject *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a17ae30

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_CastObject::GetDispatchFunctionImpl
          (FRigVMDispatch_CastObject *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19cb20

void __cdecl
FRigVMDispatch_CastObject::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  longlong *plVar3;
  FRigVMPropertyPath *this;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar8 = (longlong *)pFVar2->Ptr;
  }
  else {
    plVar8 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if ((iVar1 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar3 = (longlong *)param_2->DataPtr[1].Ptr;
  if ((iVar1 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this = param_2->DataPtr->PropertyPath;
  if (this == (FRigVMPropertyPath *)0x0) {
    pFVar9 = param_2->DataPtr->Property;
  }
  else {
    pFVar9 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if ((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
    pFVar9 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar10 = param_2->DataPtr[1].Property;
  if ((pFVar10 == (FProperty *)0x0) || ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
    pFVar10 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((((plVar8 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) && (pFVar9 != (FProperty *)0x0))
     && (pFVar10 != (FProperty *)0x0)) {
    lVar4 = *plVar8;
    if ((lVar4 != 0) && (lVar5 = pFVar10[1]._padding_, lVar5 != 0)) {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        *plVar3 = lVar4;
        return;
      }
    }
    *plVar3 = 0;
  }
  return;
}

