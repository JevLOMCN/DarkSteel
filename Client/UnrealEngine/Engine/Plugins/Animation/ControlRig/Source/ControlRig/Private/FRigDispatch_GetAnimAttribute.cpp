// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a37c210

UScriptStruct * __cdecl FRigDispatch_GetAnimAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_GetAnimAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_GetAnimAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute,(UObject *)pUVar1,
                         L"RigDispatch_GetAnimAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_GetAnimAttribute.OuterSingleton;
}

// GetArgumentInfos @ 14a37c250

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_GetAnimAttribute::GetArgumentInfos
          (FRigDispatch_GetAnimAttribute *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  int iVar2;
  int iVar3;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_78;
  TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> local_68;
  code *local_58 [2];
  undefined **local_48;
  FRigDispatch_GetAnimAttribute *local_40;
  undefined8 local_30;
  
  this_00 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    pTVar4 = FRigDispatch_AnimAttributeBase::GetArgumentInfos
                       ((FRigDispatch_AnimAttributeBase *)this,param_1);
    TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00,pTVar4);
    local_res8.ComparisonIndex.Value._0_1_ = 1;
    local_68.ArrayNum = 1;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,&local_res8,1);
    iVar3 = *(int *)&this->field_0xa0;
    if (iVar3 == *(int *)&this->field_0xa4) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)this_00,(int *)&this->field_0xa4);
    }
    local_30 = 0;
    *(int *)&this->field_0xa0 = iVar3 + 1;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
                  ::Call;
    lVar1 = *(longlong *)this_00;
    local_40 = this;
    FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::DefaultArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar3 * 0x50 + lVar1),local_res8,Input,
               &local_68,
               (TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> *)
               local_58);
    *(int *)&this->field_0xb0 = iVar3;
    iVar3 = *(int *)&this->field_0xa0;
    if (iVar3 == *(int *)&this->field_0xa4) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)this_00,(int *)&this->field_0xa4);
    }
    local_30 = 0;
    *(int *)&this->field_0xa0 = iVar3 + 1;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_2>,bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
                  ::Call;
    lVar1 = *(longlong *)this_00;
    local_40 = this;
    FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::ValueArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar3 * 0x50 + lVar1),local_res8,Output,
               &local_68,
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
    FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::FoundArgName);
    local_78.Name = local_res8;
    local_78.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar3 * 0x50 + lVar1),local_res18,Output,
               &local_78);
    *(int *)&this->field_0xb8 = iVar3;
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00;
}

// OnNewArgumentType @ 14a37c4b0

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigDispatch_GetAnimAttribute::OnNewArgumentType
          (FRigDispatch_GetAnimAttribute *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar3;
  TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> local_res10;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> local_d8;
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined1 local_9c [12];
  undefined1 *local_90;
  TRigVMTypeIndex *local_88;
  undefined1 *local_80;
  TRigVMTypeIndex *local_78;
  undefined1 *local_70;
  TRigVMTypeIndex *local_68;
  undefined1 *local_60;
  TRigVMTypeIndex *local_58;
  undefined1 *local_50;
  TRigVMTypeIndex *local_48;
  undefined1 *local_40;
  TRigVMTypeIndex *local_38;
  undefined1 *local_30;
  TRigVMTypeIndex *local_28;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::DefaultArgName);
  if (*param_1 == (FName)local_d8._4_8_) {
    bVar2 = FRigDispatch_AnimAttributeBase::IsTypeSupported
                      ((FRigDispatch_AnimAttributeBase *)this,param_2,param_3);
    if (bVar2) {
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::NameArgName);
      local_90 = (undefined1 *)((longlong)&local_d8.Value + 4);
      local_88 = &RigVMTypeUtils::TypeIndex::FName;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res10,(bool *)&local_90);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::BoneNameArgName);
      local_80 = local_c4;
      local_78 = &RigVMTypeUtils::TypeIndex::FName;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> *)&local_res10.Value,
                 (bool *)&local_80);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::DefaultArgName);
      local_70 = local_bc;
      local_68 = param_2;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> *)local_e8,(bool *)&local_70);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::ValueArgName);
      local_60 = local_b4;
      local_58 = param_2;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> *)(local_e8 + 4),
                 (bool *)&local_60);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::FoundArgName);
      local_50 = local_ac;
      local_48 = &RigVMTypeUtils::TypeIndex::Bool;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> *)local_e0,(bool *)&local_50);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::CachedBoneNameArgName);
      local_40 = local_a4;
      local_38 = &RigVMTypeUtils::TypeIndex::FName;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> *)(local_e0 + 4),
                 (bool *)&local_40);
      FLazyName::Resolve(&FRigDispatch_AnimAttributeBase::CachedBoneIndexArgName);
      local_30 = local_9c;
      local_28 = &RigVMTypeUtils::TypeIndex::Int32;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_d8,(bool *)&local_30);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2197733227764907639>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Animation\\RigUnit_AnimAttribute.cpp"
                       ,0x189,"InArgumentName == DefaultArgName");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a37c6f0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_GetAnimAttribute::GetDispatchFunctionImpl
          (FRigDispatch_GetAnimAttribute *this,
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
    pcVar6 = GetAnimAttributeDispatch<float>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    pcVar6 = GetAnimAttributeDispatch<int>;
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::FString.Index) {
    pcVar6 = GetAnimAttributeDispatch<FString>;
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
      pcVar6 = GetAnimAttributeDispatch<UE::Math::TTransform<double>_>;
    }
    else {
      pFVar7 = FRigVMRegistryHandle::operator->(param_2);
      pTVar10 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                          (pFVar7,&local_5c,false);
      if (*(int *)&pTVar4->field_0x10 == pTVar10->Index) {
        pcVar6 = GetAnimAttributeDispatch<UE::Math::TQuat<double>_>;
      }
      else {
        pFVar7 = FRigVMRegistryHandle::operator->(param_2);
        pTVar10 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                            (pFVar7,&local_50,false);
        if (*(int *)&pTVar4->field_0x10 == pTVar10->Index) {
          pcVar6 = GetAnimAttributeDispatch<UE::Math::TVector<double>_>;
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
            pcVar6 = GetAnimAttributeDispatch;
          }
        }
      }
    }
  }
  return pcVar6;
}

// GetAnimAttributeDispatch<int> @ 14a39a100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch<int>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  int *piVar5;
  int *piVar6;
  uchar *puVar7;
  FRigVMSlice *pFVar8;
  FName *pFVar9;
  int *piVar10;
  FControlRigExecuteContext *pFVar11;
  
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
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar5 = (int *)pFVar2->Ptr;
  }
  else {
    piVar5 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  piVar6 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar2,false,pFVar8->Offset + pFVar8->Index);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar10 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,pFVar8->Offset + pFVar8->Index)
  ;
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  piVar10 = RigUnit_AnimAttribute::GetAnimAttributeValue<int>
                      (false,pFVar11,pFVar3,pFVar4,pFVar9,piVar10);
  *puVar7 = piVar10 != (int *)0x0;
  if (piVar10 != (int *)0x0) {
    piVar5 = piVar10;
  }
  *piVar6 = *piVar5;
  return;
}

// GetAnimAttributeDispatch<float> @ 14a39a2b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch<float>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  float *pfVar5;
  float *pfVar6;
  uchar *puVar7;
  FRigVMSlice *pFVar8;
  FName *pFVar9;
  int *piVar10;
  FControlRigExecuteContext *pFVar11;
  float *pfVar12;
  
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
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar5 = (float *)pFVar2->Ptr;
  }
  else {
    pfVar5 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  pfVar6 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FName *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar2,false,pFVar8->Offset + pFVar8->Index);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar10 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,pFVar8->Offset + pFVar8->Index)
  ;
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pfVar12 = RigUnit_AnimAttribute::GetAnimAttributeValue<float>
                      (false,pFVar11,pFVar3,pFVar4,pFVar9,piVar10);
  *puVar7 = pfVar12 != (float *)0x0;
  if (pfVar12 != (float *)0x0) {
    pfVar5 = pfVar12;
  }
  *pfVar6 = *pfVar5;
  return;
}

// GetAnimAttributeDispatch<UE::Math::TQuat<double>_> @ 14a39a460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch<UE::Math::TQuat<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  double dVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  TQuat<double> *pTVar6;
  double *pdVar7;
  uchar *puVar8;
  FRigVMSlice *pFVar9;
  FName *pFVar10;
  int *piVar11;
  FControlRigExecuteContext *pFVar12;
  TQuat<double> *pTVar13;
  
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
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TQuat<double> *)pFVar3->Ptr;
  }
  else {
    pTVar6 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  pdVar7 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar3,false,pFVar9->Offset + pFVar9->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pTVar13 = RigUnit_AnimAttribute::GetAnimAttributeValue<UE::Math::TQuat<double>_>
                      (false,pFVar12,pFVar4,pFVar5,pFVar10,piVar11);
  *puVar8 = pTVar13 != (TQuat<double> *)0x0;
  if (pTVar13 != (TQuat<double> *)0x0) {
    pTVar6 = pTVar13;
  }
  dVar2 = pTVar6->Y;
  *pdVar7 = pTVar6->X;
  pdVar7[1] = dVar2;
  dVar2 = pTVar6->W;
  pdVar7[2] = pTVar6->Z;
  pdVar7[3] = dVar2;
  return;
}

// GetAnimAttributeDispatch<UE::Math::TTransform<double>_> @ 14a39a620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch<UE::Math::TTransform<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  double dVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  TTransform<double> *pTVar6;
  double *pdVar7;
  uchar *puVar8;
  FRigVMSlice *pFVar9;
  FName *pFVar10;
  int *piVar11;
  FControlRigExecuteContext *pFVar12;
  TTransform<double> *pTVar13;
  
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
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar3->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  pdVar7 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar3,false,pFVar9->Offset + pFVar9->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pTVar13 = RigUnit_AnimAttribute::GetAnimAttributeValue<UE::Math::TTransform<double>_>
                      (false,pFVar12,pFVar4,pFVar5,pFVar10,piVar11);
  *puVar8 = pTVar13 != (TTransform<double> *)0x0;
  if (pTVar13 != (TTransform<double> *)0x0) {
    pTVar6 = pTVar13;
  }
  dVar2 = (pTVar6->Rotation).XY.m128d_f64[1];
  *pdVar7 = (pTVar6->Rotation).XY.m128d_f64[0];
  pdVar7[1] = dVar2;
  dVar2 = (pTVar6->Rotation).ZW.m128d_f64[1];
  pdVar7[2] = (pTVar6->Rotation).ZW.m128d_f64[0];
  pdVar7[3] = dVar2;
  dVar2 = (pTVar6->Translation).XY.m128d_f64[1];
  pdVar7[4] = (pTVar6->Translation).XY.m128d_f64[0];
  pdVar7[5] = dVar2;
  dVar2 = (pTVar6->Translation).ZW.m128d_f64[1];
  pdVar7[6] = (pTVar6->Translation).ZW.m128d_f64[0];
  pdVar7[7] = dVar2;
  dVar2 = (pTVar6->Scale3D).XY.m128d_f64[1];
  pdVar7[8] = (pTVar6->Scale3D).XY.m128d_f64[0];
  pdVar7[9] = dVar2;
  dVar2 = (pTVar6->Scale3D).ZW.m128d_f64[1];
  pdVar7[10] = (pTVar6->Scale3D).ZW.m128d_f64[0];
  pdVar7[0xb] = dVar2;
  return;
}

// GetAnimAttributeDispatch<UE::Math::TVector<double>_> @ 14a39a810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch<UE::Math::TVector<double>_>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  double dVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  uchar *puVar8;
  FRigVMSlice *pFVar9;
  FName *pFVar10;
  int *piVar11;
  FControlRigExecuteContext *pFVar12;
  TVector<double> *pTVar13;
  
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
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar3->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  pdVar7 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FName *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar3,false,pFVar9->Offset + pFVar9->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar9->Offset + pFVar9->Index)
  ;
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pTVar13 = RigUnit_AnimAttribute::GetAnimAttributeValue<UE::Math::TVector<double>_>
                      (false,pFVar12,pFVar4,pFVar5,pFVar10,piVar11);
  *puVar8 = pTVar13 != (TVector<double> *)0x0;
  if (pTVar13 != (TVector<double> *)0x0) {
    pTVar6 = pTVar13;
  }
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  *pdVar7 = (pTVar6->field0_0x0)._s_0.X;
  pdVar7[1] = dVar2;
  pdVar7[2] = (pTVar6->field0_0x0)._s_0.Z;
  return;
}

// GetAnimAttributeDispatch<FString> @ 14a39a9d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch<FString>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FString *pFVar5;
  FString *this;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  FName *pFVar8;
  int *piVar9;
  FControlRigExecuteContext *pFVar10;
  FString *pFVar11;
  
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
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FString *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FString *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  this = (FString *)FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
  pFVar2 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar6 = FRigVMMemoryHandle::GetData_Internal(pFVar2,false,-1);
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
  pFVar11 = RigUnit_AnimAttribute::GetAnimAttributeValue<FString>
                      (false,pFVar10,pFVar3,pFVar4,pFVar8,piVar9);
  *puVar6 = pFVar11 != (FString *)0x0;
  if (pFVar11 != (FString *)0x0) {
    pFVar5 = pFVar11;
  }
  ::FString::operator=(this,pFVar5);
  return;
}

// GetAnimAttributeDispatch @ 14a410d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetAnimAttribute::GetAnimAttributeDispatch
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
  uchar *puVar9;
  FRigVMSlice *pFVar10;
  FName *pFVar11;
  int *piVar12;
  FProperty *pFVar13;
  FControlRigExecuteContext *pFVar14;
  uchar *puVar15;
  
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
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryIndex);
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar4->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property)
    ;
  }
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar4,false,-1);
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar1[1].FactoryName.Number);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar4,false,-1);
  *puVar9 = '\0';
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FName *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar4,false,pFVar10->Offset + pFVar10->Index);
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar1[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar12 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar4,false,pFVar10->Offset + pFVar10->Index);
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar1[1].FactoryName.ComparisonIndex.Value);
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar13 = pFVar4->Property;
  }
  else {
    pFVar13 = FRigVMPropertyPath::GetTailProperty(pFVar4->PropertyPath);
  }
  if ((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
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
    this = (UScriptStruct *)pFVar13[1]._padding_;
    pFVar14 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
    puVar15 = GetAnimAttributeValue(false,this,pFVar14,pFVar5,pFVar6,pFVar11,piVar12);
    *puVar9 = puVar15 != (uchar *)0x0;
    if (puVar15 != (uchar *)0x0) {
      UScriptStruct::CopyScriptStruct(this,puVar8,puVar15,1);
    }
    if (*puVar9 == '\0') {
      UScriptStruct::CopyScriptStruct(this,puVar8,puVar7,1);
    }
  }
  return;
}

