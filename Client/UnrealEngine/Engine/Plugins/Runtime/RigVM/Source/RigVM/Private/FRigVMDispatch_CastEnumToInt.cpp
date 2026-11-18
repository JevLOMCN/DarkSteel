// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a171150

UScriptStruct * __cdecl FRigVMDispatch_CastEnumToInt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_CastEnumToInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_CastEnumToInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CastEnumToInt,(UObject *)pUVar1,
                         L"RigVMDispatch_CastEnumToInt");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_CastEnumToInt.OuterSingleton;
}

// GetArgumentInfos @ 14a1712d0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_CastEnumToInt::GetArgumentInfos
          (FRigVMDispatch_CastEnumToInt *this,FRigVMRegistryHandle *param_1)

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
        local_res8.ComparisonIndex.Value._0_1_ = 0xd;
        ElementCategories.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,1,0,&ElementCategories.AllocatorInstance,1,&ElementCategories.ArrayMax);
        memcpy(ElementCategories.AllocatorInstance.Data,&local_res8,1);
        atexit(`FRigVMDispatch_CastEnumToInt::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__ElementCategories__);
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
    FLazyName::Resolve(&FRigVMDispatch_CastEnumBase::ValueName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
               &ElementCategories,&local_48);
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
    FLazyName::Resolve(&FRigVMDispatch_CastEnumBase::ResultName);
    local_58.Name = local_res8;
    local_58.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Output,
               &local_58);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetPermutationsFromArgumentType @ 14a171a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMDispatch_CastEnumToInt::GetPermutationsFromArgumentType
          (FRigVMDispatch_CastEnumToInt *this,FName *param_1,TRigVMTypeIndex *param_2,
          TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_3,FRigVMRegistryHandle *param_4)

{
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar6;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FName local_b8;
  FName local_b0;
  undefined1 local_a8 [16];
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_98;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_88;
  undefined1 *local_78;
  TRigVMTypeIndex *local_70;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FLazyName::Resolve(&FRigVMDispatch_CastEnumBase::ValueName);
  if (*param_1 == local_b8) {
    FLazyName::Resolve(&FRigVMDispatch_CastEnumBase::ValueName);
    local_88.Key = &local_b0;
    local_88.Value = param_2;
    FLazyName::Resolve(&FRigVMDispatch_CastEnumBase::ResultName);
    local_78 = local_a8;
    local_70 = &RigVMTypeUtils::TypeIndex::Int32;
    local_98._First = &local_88;
    local_98._Last = (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_68;
    TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::
    TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)local_68,&local_98);
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
             )param_3;
    if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      FVar6 = FVar1;
    }
    if ((ulonglong)FVar6 <= local_68) {
      FVar6 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
               )param_3;
      if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )0x0) {
        FVar6 = FVar1;
      }
      if (local_68 < (undefined1 *)((longlong)param_3->ArrayMax * 0x50 + (longlong)FVar6)) {
        local_d0 = (longlong)param_3->ArrayNum;
        local_c8 = 0x50;
        local_e0 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )param_3;
        if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                      )0x0) {
          local_e0 = FVar1;
        }
        local_e8 = local_68;
        local_d8 = (longlong)param_3->ArrayMax;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>_>
                        (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
             )param_3;
    if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      FVar6 = FVar1;
    }
    TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::
    TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)((longlong)iVar5 * 0x50 + (longlong)FVar6),
               (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)local_68);
    local_20 = 0;
    if ((void *)local_68._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_68);
  }
  return param_3->ArrayNum != 0;
}

// IsSingleton @ 14a171ca0

bool __thiscall FRigVMDispatch_CastEnumToInt::IsSingleton(FRigVMDispatch_CastEnumToInt *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a171cb0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_CastEnumToInt::GetDispatchFunctionImpl
          (FRigVMDispatch_CastEnumToInt *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19c690

void __cdecl
FRigVMDispatch_CastEnumToInt::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMPropertyPath *this;
  FProperty *pFVar1;
  uchar *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  FProperty *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = param_2->DataPtr->PropertyPath;
  if (this == (FRigVMPropertyPath *)0x0) {
    pFVar8 = param_2->DataPtr->Property;
  }
  else {
    pFVar8 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if ((pFVar8 == (FProperty *)0x0) || ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0xf & 1) == 0)) {
    pFVar8 = (FProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = param_2->DataPtr[1].Property;
  if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0xf & 1) == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (pFVar8 != (FProperty *)0x0) {
    pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
    if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
      puVar10 = pFVar9->Ptr;
    }
    else {
      puVar10 = FRigVMPropertyPath::GetData_Internal
                          (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
    }
    pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
    puVar2 = pFVar9->Ptr;
    if ((puVar10 != (uchar *)0x0) && (puVar2 != (uchar *)0x0)) {
      uVar3 = *(ulonglong *)(pFVar8->_padding_ + 0x18);
      if ((uVar3 >> 0x30 & 1) == 0) {
        pFVar1 = (FProperty *)(uVar3 & 0x40);
      }
      else {
        pFVar8 = (FProperty *)pFVar8[1]._padding_;
        pFVar1 = pFVar8;
      }
      if (pFVar1 != (FProperty *)0x0) {
        cVar6 = (**(code **)(pFVar8->_padding_ + 0x1d8))(pFVar8);
        if ((cVar6 == '\0') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumericProperty->IsInteger()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_CastEnum.cpp"
                               ,0x56,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = (**(code **)(pFVar8->_padding_ + 0x210))(pFVar8,puVar10);
        *(undefined4 *)puVar2 = uVar7;
        return;
      }
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_CastEnum.cpp"
                         ,0x53,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

