// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 13

// StaticStruct @ 14a37cfb0

UScriptStruct * __cdecl FRigDispatch_SetAnimAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SetAnimAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SetAnimAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute,(UObject *)pUVar1,
                         L"RigDispatch_SetAnimAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_SetAnimAttribute.OuterSingleton;
}

// IsSet @ 14a37d1c0

bool __thiscall FRigDispatch_SetAnimAttribute::IsSet(FRigDispatch_SetAnimAttribute *this)

{
  return true;
}

// GetArgumentInfos @ 14a37d1d0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SetAnimAttribute::GetArgumentInfos
          (FRigDispatch_SetAnimAttribute *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  int iVar2;
  int iVar3;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_68;
  code *local_58 [2];
  undefined **local_48;
  FRigDispatch_SetAnimAttribute *local_40;
  undefined8 local_30;
  
  this_00 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    pTVar4 = FRigDispatch_AnimAttributeBase::GetArgumentInfos
                       ((FRigDispatch_AnimAttributeBase *)this,param_1);
    TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00,pTVar4);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_res8.ComparisonIndex.Value._0_1_ = 1;
        Categories.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,1,0,&Categories.AllocatorInstance,1,&Categories.ArrayMax);
        memcpy(Categories.AllocatorInstance.Data,&local_res8,1);
        atexit(`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__Categories__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar3 = *(int *)&this->field_0xa0;
    if (iVar3 == *(int *)&this->field_0xa4) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)this_00,(int *)&this->field_0xa4);
    }
    local_30 = 0;
    *(int *)&this->field_0xa0 = iVar3 + 1;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
                  ::Call;
    lVar1 = *(longlong *)this_00;
    local_40 = this;
    FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::ValueArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar3 * 0x50 + lVar1),local_res8,Input,
               &Categories,
               (TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> *)
               local_58);
    *(int *)&this->field_0xb4 = iVar3;
    iVar3 = *(int *)&this->field_0xa0;
    if (iVar3 == *(int *)&this->field_0xa4) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)this_00,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar3 + 1;
    iVar2 = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar1 = *(longlong *)this_00;
    FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::SuccessArgName);
    local_68.Name = local_res8;
    local_68.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar3 * 0x50 + lVar1),local_res18,Output,
               &local_68);
    *(int *)&this->field_0xbc = iVar3;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00;
}

// GetExecuteArguments_Impl @ 14a37d420

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SetAnimAttribute::GetExecuteArguments_Impl
          (FRigDispatch_SetAnimAttribute *this,FRigVMDispatchContext *param_1)

{
  ForAnyElementType FVar1;
  FName local_res18 [2];
  uint uStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(local_res18,L"ExecuteContext");
      uStack_20 = CONCAT31(uStack_20._1_3_,2);
      ExecuteArguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ExecuteArguments.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,1,0,&ExecuteArguments.AllocatorInstance,1,&ExecuteArguments.ArrayMax);
      FVar1 = ExecuteArguments.AllocatorInstance;
      *(FName *)ExecuteArguments.AllocatorInstance.Data = local_res18[0];
      *(ulonglong *)(FVar1.Data + 8) = (ulonglong)uStack_20;
      *(undefined8 *)(FVar1.Data + 0x10) = 0xffffffff00000000;
      atexit(`FRigDispatch_SetAnimAttribute::GetExecuteArguments_Impl'::__l2::
             _dynamic_atexit_destructor_for__ExecuteArguments__);
      _Init_thread_footer(&::_TSS0);
      return &ExecuteArguments;
    }
  }
  return &ExecuteArguments;
}

// OnNewArgumentType @ 14a37d530

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigDispatch_SetAnimAttribute::OnNewArgumentType
          (FRigDispatch_SetAnimAttribute *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  bool bVar1;
  TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> local_res10;
  TRigVMTypeIndex **local_28;
  TRigVMTypeIndex *local_20;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::ValueArgName);
  if (*param_1 == (FName)local_res10.Key) {
    bVar1 = FRigDispatch_AnimAttributeBase::IsTypeSupported
                      ((FRigDispatch_AnimAttributeBase *)this,param_2,param_3);
    if (bVar1) {
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::NameArgName);
      local_28 = &local_res10.Value;
      local_20 = &RigVMTypeUtils::TypeIndex::FName;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::BoneNameArgName);
      local_28 = &local_res10.Value;
      local_20 = &RigVMTypeUtils::TypeIndex::FName;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::ValueArgName);
      local_28 = &local_res10.Value;
      local_20 = param_2;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::SuccessArgName);
      local_28 = &local_res10.Value;
      local_20 = &RigVMTypeUtils::TypeIndex::Bool;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::CachedBoneNameArgName);
      local_28 = &local_res10.Value;
      local_20 = &RigVMTypeUtils::TypeIndex::FName;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::CachedBoneIndexArgName);
      local_28 = &local_res10.Value;
      local_20 = &RigVMTypeUtils::TypeIndex::Int32;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
    }
  }
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a37d700

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_SetAnimAttribute::GetDispatchFunctionImpl
          (FRigDispatch_SetAnimAttribute *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  TTuple<FName,TRigVMTypeIndex> *pTVar4;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var5;
  code *pcVar6;
  FRigVMRegistry_NoLock *pFVar7;
  UScriptStruct *pUVar8;
  FString *pFVar9;
  TRigVMTypeIndex *pTVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FName local_res10;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  int local_60;
  TRigVMTypeIndex local_5c;
  TRigVMTypeIndex local_50;
  FName local_40;
  UScriptStruct *local_38;
  FString local_30;
  
  pFVar3 = ::FName::FName(&local_res10,L"Value");
  pTVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar3);
  pwVar12 = L"";
  if ((pTVar4 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar2)) {
    pcVar6 = (code *)swi(3);
    p_Var5 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar6)();
    return p_Var5;
  }
  iVar1 = *(int *)&pTVar4->field_0x10;
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    pcVar6 = SetAnimAttributeDispatch<float>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    pcVar6 = SetAnimAttributeDispatch<int>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::FString.Index) {
    pcVar6 = SetAnimAttributeDispatch<FString>;
  }
  else {
    pFVar7 = FRigVMRegistryHandle::operator->(param_2);
    pUVar8 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    pFVar9 = RigVMTypeUtils::GetUniqueStructTypeName(&local_30,pUVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_40,pwVar12);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    local_38 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (**(code **)(pFVar7->_padding_ + 0xe0))(pFVar7,local_68);
    if (*(int *)&pTVar4->field_0x10 == local_60) {
      pcVar6 = SetAnimAttributeDispatch<UE::Math::TTransform<double>_>;
    }
    else {
      pFVar7 = FRigVMRegistryHandle::operator->(param_2);
      pTVar10 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                          (pFVar7,&local_5c,false);
      if (*(int *)&pTVar4->field_0x10 == pTVar10->Index) {
        pcVar6 = SetAnimAttributeDispatch<UE::Math::TQuat<double>_>;
      }
      else {
        pFVar7 = FRigVMRegistryHandle::operator->(param_2);
        pTVar10 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                            (pFVar7,&local_50,false);
        if (*(int *)&pTVar4->field_0x10 == pTVar10->Index) {
          pcVar6 = SetAnimAttributeDispatch<UE::Math::TVector<double>_>;
        }
        else {
          pFVar7 = FRigVMRegistryHandle::operator->(param_2);
          local_70 = *(undefined4 *)&pTVar4->field_0x10;
          local_78 = *(undefined8 *)&pTVar4->field_0x8;
          lVar11 = (**(code **)(pFVar7->_padding_ + 0xe8))(pFVar7,&local_78);
          pUVar8 = Cast<UScriptStruct,UObject>((TObjectPtr<UObject> *)(lVar11 + 8));
          pcVar6 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                    *)0x0;
          if (pUVar8 != (UScriptStruct *)0x0) {
            pcVar6 = SetAnimAttributeDispatch;
          }
        }
      }
    }
  }
  return pcVar6;
}

// SetAnimAttributeDispatch<int> @ 14a3ad6a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch<int>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  int *piVar5;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  FName *pFVar8;
  int *piVar9;
  FControlRigExecuteContext *pFVar10;
  
  pFVar1 = param_1->Factory;
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar3 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar3 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar5 = (int *)pFVar2->Ptr;
  }
  else {
    piVar5 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar6 = FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  *puVar6 = '\0';
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar2,false,pFVar7->Offset + pFVar7->Index);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar9 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,pFVar7->Offset + pFVar7->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  piVar9 = RigUnit_AnimAttribute::GetAnimAttributeValue<int>
                     (true,pFVar10,pFVar3,pFVar4,pFVar8,piVar9);
  if (piVar9 != (int *)0x0) {
    *puVar6 = '\x01';
    *piVar9 = *piVar5;
  }
  return;
}

// SetAnimAttributeDispatch<float> @ 14a3ad850

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch<float>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  float *pfVar5;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  FName *pFVar8;
  int *piVar9;
  FControlRigExecuteContext *pFVar10;
  float *pfVar11;
  
  pFVar1 = param_1->Factory;
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar3 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar3 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar5 = (float *)pFVar2->Ptr;
  }
  else {
    pfVar5 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar6 = FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  *puVar6 = '\0';
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar2,false,pFVar7->Offset + pFVar7->Index);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar9 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,pFVar7->Offset + pFVar7->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pfVar11 = RigUnit_AnimAttribute::GetAnimAttributeValue<float>
                      (true,pFVar10,pFVar3,pFVar4,pFVar8,piVar9);
  if (pfVar11 != (float *)0x0) {
    *puVar6 = '\x01';
    *pfVar11 = *pfVar5;
  }
  return;
}

// SetAnimAttributeDispatch<UE::Math::TQuat<double>_> @ 14a3ada00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch<UE::Math::TQuat<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  double dVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  double *pdVar6;
  uchar *puVar7;
  FRigVMSlice *pFVar8;
  FName *pFVar9;
  int *piVar10;
  FControlRigExecuteContext *pFVar11;
  TQuat<double> *pTVar12;
  
  pFVar1 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar6 = (double *)pFVar3->Ptr;
  }
  else {
    pdVar6 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  *puVar7 = '\0';
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar3,false,pFVar8->Offset + pFVar8->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar10 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar8->Offset + pFVar8->Index)
  ;
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pTVar12 = RigUnit_AnimAttribute::GetAnimAttributeValue<UE::Math::TQuat<double>_>
                      (true,pFVar11,pFVar4,pFVar5,pFVar9,piVar10);
  if (pTVar12 != (TQuat<double> *)0x0) {
    *puVar7 = '\x01';
    dVar2 = pdVar6[1];
    pTVar12->X = *pdVar6;
    pTVar12->Y = dVar2;
    dVar2 = pdVar6[3];
    pTVar12->Z = pdVar6[2];
    pTVar12->W = dVar2;
  }
  return;
}

// SetAnimAttributeDispatch<UE::Math::TTransform<double>_> @ 14a3adbb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch<UE::Math::TTransform<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  double dVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  double *pdVar6;
  uchar *puVar7;
  FRigVMSlice *pFVar8;
  FName *pFVar9;
  int *piVar10;
  FControlRigExecuteContext *pFVar11;
  TTransform<double> *pTVar12;
  
  pFVar1 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar6 = (double *)pFVar3->Ptr;
  }
  else {
    pdVar6 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  *puVar7 = '\0';
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar3,false,pFVar8->Offset + pFVar8->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar10 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar8->Offset + pFVar8->Index)
  ;
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pTVar12 = RigUnit_AnimAttribute::GetAnimAttributeValue<UE::Math::TTransform<double>_>
                      (true,pFVar11,pFVar4,pFVar5,pFVar9,piVar10);
  if (pTVar12 != (TTransform<double> *)0x0) {
    *puVar7 = '\x01';
    dVar2 = pdVar6[1];
    (pTVar12->Rotation).XY.m128d_f64[0] = *pdVar6;
    (pTVar12->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = pdVar6[3];
    (pTVar12->Rotation).ZW.m128d_f64[0] = pdVar6[2];
    (pTVar12->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = pdVar6[5];
    (pTVar12->Translation).XY.m128d_f64[0] = pdVar6[4];
    (pTVar12->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = pdVar6[7];
    (pTVar12->Translation).ZW.m128d_f64[0] = pdVar6[6];
    (pTVar12->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = pdVar6[9];
    (pTVar12->Scale3D).XY.m128d_f64[0] = pdVar6[8];
    (pTVar12->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = pdVar6[0xb];
    (pTVar12->Scale3D).ZW.m128d_f64[0] = pdVar6[10];
    (pTVar12->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  return;
}

// SetAnimAttributeDispatch<UE::Math::TVector<double>_> @ 14a3add80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch<UE::Math::TVector<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  double dVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  double *pdVar6;
  uchar *puVar7;
  FRigVMSlice *pFVar8;
  FName *pFVar9;
  int *piVar10;
  FControlRigExecuteContext *pFVar11;
  TVector<double> *pTVar12;
  
  pFVar1 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar6 = (double *)pFVar3->Ptr;
  }
  else {
    pdVar6 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  *puVar7 = '\0';
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar3,false,pFVar8->Offset + pFVar8->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar10 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar8->Offset + pFVar8->Index)
  ;
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pTVar12 = RigUnit_AnimAttribute::GetAnimAttributeValue<UE::Math::TVector<double>_>
                      (true,pFVar11,pFVar4,pFVar5,pFVar9,piVar10);
  if (pTVar12 != (TVector<double> *)0x0) {
    *puVar7 = '\x01';
    dVar2 = pdVar6[1];
    (pTVar12->field0_0x0)._s_0.X = *pdVar6;
    (pTVar12->field0_0x0)._s_0.Y = dVar2;
    (pTVar12->field0_0x0)._s_0.Z = pdVar6[2];
  }
  return;
}

// SetAnimAttributeDispatch<FString> @ 14a3adf30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch<FString>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FString *pFVar5;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  FName *pFVar8;
  int *piVar9;
  FControlRigExecuteContext *pFVar10;
  FString *this;
  
  pFVar1 = param_1->Factory;
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar3 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar3 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FString *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FString *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar6 = FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  *puVar6 = '\0';
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar2,false,pFVar7->Offset + pFVar7->Index);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar9 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,pFVar7->Offset + pFVar7->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  this = RigUnit_AnimAttribute::GetAnimAttributeValue<FString>
                   (true,pFVar10,pFVar3,pFVar4,pFVar8,piVar9);
  if (this != (FString *)0x0) {
    *puVar6 = '\x01';
    ::FString::operator=(this,pFVar5);
  }
  return;
}

// SetAnimAttributeDispatch @ 14a457ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetAnimAttribute::SetAnimAttributeDispatch
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  UScriptStruct *this;
  code *pcVar2;
  bool bVar3;
  FRigVMMemoryHandle *pFVar4;
  FName *pFVar5;
  FName *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  FRigVMSlice *pFVar9;
  FName *pFVar10;
  int *piVar11;
  FProperty *pFVar12;
  FControlRigExecuteContext *pFVar13;
  uchar *puVar14;
  
  pFVar1 = param_1->Factory;
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar1[1]._padding_);
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar4->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar1[1]._padding_ + 4));
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar4->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar4->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property)
    ;
  }
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar1[1].field_0x14);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar4,false,-1);
  *puVar8 = '\0';
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar4,false,pFVar9->Offset + pFVar9->Index);
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar4,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar12 = pFVar4->Property;
  }
  else {
    pFVar12 = FRigVMPropertyPath::GetTailProperty(pFVar4->PropertyPath);
  }
  if ((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this = (UScriptStruct *)pFVar12[1]._padding_;
    pFVar13 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
    puVar14 = GetAnimAttributeValue(true,this,pFVar13,pFVar5,pFVar6,pFVar10,piVar11);
    if (puVar14 != (uchar *)0x0) {
      *puVar8 = '\x01';
      UScriptStruct::CopyScriptStruct(this,puVar14,puVar7,1);
    }
  }
  return;
}

