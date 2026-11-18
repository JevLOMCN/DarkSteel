// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 26

// StaticStruct @ 14a4e2960

UScriptStruct * __cdecl FRigDispatch_SetMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SetMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SetMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetMetadata,(UObject *)pUVar1,
                         L"RigDispatch_SetMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_SetMetadata.OuterSingleton;
}

// GetArgumentInfos @ 14a4e29e0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SetMetadata::GetArgumentInfos
          (FRigDispatch_SetMetadata *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_38;
  
  this_00 = &this->field_0x98;
  if (*(int *)&this->field_0xbc == -1) {
    pTVar5 = FRigDispatch_MetadataBase::GetArgumentInfos((FRigDispatch_MetadataBase *)this,param_1);
    TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00,pTVar5);
    pTVar6 = FRigDispatch_MetadataBase::GetValueTypes((FRigDispatch_MetadataBase *)this,param_1);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)this_00,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    lVar1 = *(longlong *)this_00;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::ValueArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar4 * 0x50 + lVar1),local_res8,Input,
               pTVar6);
    *(int *)&this->field_0xbc = iVar4;
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)this_00,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::Bool.Index;
    FVar2 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar1 = *(longlong *)this_00;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::SuccessArgName);
    local_38.Name = FVar2;
    local_38.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar4 * 0x50 + lVar1),local_res18,Output,
               &local_38);
    *(int *)&this->field_0xc4 = iVar4;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00;
}

// GetExecuteArguments_Impl @ 14a4e2cf0

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SetMetadata::GetExecuteArguments_Impl
          (FRigDispatch_SetMetadata *this,FRigVMDispatchContext *param_1)

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
      atexit(`FRigDispatch_SetMetadata::GetExecuteArguments_Impl'::__l2::
             _dynamic_atexit_destructor_for__ExecuteArguments__);
      _Init_thread_footer(&::_TSS0);
      return &ExecuteArguments;
    }
  }
  return &ExecuteArguments;
}

// IsSetMetadata @ 14a4e2ea0

bool __thiscall FRigDispatch_SetMetadata::IsSetMetadata(FRigDispatch_SetMetadata *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a4e2eb0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_SetMetadata::GetDispatchFunctionImpl
          (FRigDispatch_SetMetadata *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  TTuple<FName,TRigVMTypeIndex> *pTVar4;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var5;
  FRigVMRegistry_NoLock *pFVar6;
  TRigVMTypeIndex *pTVar7;
  code *pcVar8;
  FName local_res10 [3];
  TRigVMTypeIndex local_98;
  TRigVMTypeIndex local_8c;
  TRigVMTypeIndex local_80;
  TRigVMTypeIndex local_74;
  TRigVMTypeIndex local_68;
  TRigVMTypeIndex local_5c;
  TRigVMTypeIndex local_50;
  TRigVMTypeIndex local_44;
  TRigVMTypeIndex local_38;
  TRigVMTypeIndex local_2c;
  TRigVMTypeIndex local_20;
  TRigVMTypeIndex local_14;
  
  pFVar3 = ::FName::FName(local_res10,L"Value");
  pTVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar3);
  if (pTVar4 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar8 = (code *)swi(3);
      p_Var5 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar8)();
      return p_Var5;
    }
  }
  iVar1 = *(int *)&pTVar4->field_0x10;
  if (iVar1 == RigVMTypeUtils::TypeIndex::Bool.Index) {
    return SetMetadataDispatch<bool,FRigBoolMetadata,0>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    return SetMetadataDispatch<float,FRigFloatMetadata,2>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    return SetMetadataDispatch<int,FRigInt32Metadata,4>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FName.Index) {
    return SetMetadataDispatch<FName,FRigNameMetadata,6>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_98,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_8c,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_80,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_74,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_68,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_5c,false);
  iVar1 = *(int *)&pTVar4->field_0x10;
  if (iVar1 == pTVar7->Index) {
    return SetMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::BoolArray.Index) {
    return SetMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FloatArray.Index) {
    return SetMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32Array.Index) {
    return SetMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FNameArray.Index) {
    return SetMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_50,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_44,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_38,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_2c,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_20,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_14,true);
  pcVar8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
            *)0x0;
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    pcVar8 = 
    SetMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
    ;
  }
  return pcVar8;
}

// SetMetadataDispatch<int,FRigInt32Metadata,4> @ 14a506a20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<int,FRigInt32Metadata,4>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FControlRigExecuteContext *pFVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  int *piVar11;
  uchar *puVar12;
  FRigBaseMetadata *pFVar13;
  
  pFVar3 = param_1->Factory;
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar13 = FindOrAddMetadata(pFVar4,pFVar6,pFVar7,Int32,EVar2,pFVar10);
  if ((pFVar13 == (FRigBaseMetadata *)0x0) || (pFVar13->Type != Int32)) {
    *puVar12 = '\0';
  }
  else {
    if ((int)pFVar13[1]._padding_ != *piVar11) {
      *(int *)&pFVar13[1]._padding_ = *piVar11;
      puVar1 = &pFVar4->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar12 = '\x01';
  }
  return;
}

// SetMetadataDispatch<float,FRigFloatMetadata,2> @ 14a506bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<float,FRigFloatMetadata,2>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FControlRigExecuteContext *pFVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  float *pfVar11;
  uchar *puVar12;
  FRigBaseMetadata *pFVar13;
  
  pFVar3 = param_1->Factory;
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar13 = FindOrAddMetadata(pFVar4,pFVar6,pFVar7,Float,EVar2,pFVar10);
  if ((pFVar13 == (FRigBaseMetadata *)0x0) || (pFVar13->Type != Float)) {
    *puVar12 = '\0';
  }
  else {
    if (__real_322bcc77 <
        (float)((uint)(*(float *)&pFVar13[1]._padding_ - *pfVar11) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      *(float *)&pFVar13[1]._padding_ = *pfVar11;
      puVar1 = &pFVar4->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar12 = '\x01';
  }
  return;
}

// SetMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12> @ 14a506d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FName FVar4;
  double dVar5;
  FProperty *pFVar6;
  bool bVar7;
  FControlRigExecuteContext *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  FRigElementKey *pFVar10;
  FName *pFVar11;
  ERigMetaDataNameSpace *pEVar12;
  FRigVMSlice *pFVar13;
  FCachedRigElement *pFVar14;
  TQuat<double> *pTVar15;
  uchar *puVar16;
  FRigBaseMetadata *pFVar17;
  
  pFVar3 = param_1->Factory;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar10 = (FRigElementKey *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar11 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar11 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar12 = pFVar9->Ptr;
  }
  else {
    pEVar12 = FRigVMPropertyPath::GetData_Internal
                        (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  EVar2 = *pEVar12;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar13->Offset + pFVar13->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar15 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar17 = FindOrAddMetadata(pFVar8,pFVar10,pFVar11,Quat,EVar2,pFVar14);
  if ((pFVar17 == (FRigBaseMetadata *)0x0) || (pFVar17->Type != Quat)) {
    *puVar16 = '\0';
  }
  else {
    bVar7 = FRigDispatch_MetadataBase::Equals<UE::Math::TQuat<double>_>
                      ((TQuat<double> *)(pFVar17 + 1),pTVar15);
    if (!bVar7) {
      FVar4 = (FName)pTVar15->Y;
      dVar5 = pTVar15->Z;
      pFVar6 = (FProperty *)pTVar15->W;
      ((TQuat<double> *)(pFVar17 + 1))->X = pTVar15->X;
      pFVar17[1].Name = FVar4;
      *(double *)&pFVar17[1].Type = dVar5;
      pFVar17[1].ValueProperty = pFVar6;
      puVar1 = &pFVar8->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar16 = '\x01';
  }
  return;
}

// SetMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10> @ 14a506f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  double dVar2;
  ERigMetaDataNameSpace EVar3;
  FRigVMDispatchFactory *pFVar4;
  FName FVar5;
  bool bVar6;
  FControlRigExecuteContext *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigElementKey *pFVar9;
  FName *pFVar10;
  ERigMetaDataNameSpace *pEVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  TRotator<double> *pTVar14;
  uchar *puVar15;
  FRigBaseMetadata *pFVar16;
  
  pFVar4 = param_1->Factory;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar4[1]._padding_);
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar9 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar4[1]._padding_ + 4));
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar10 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar4[1].FactoryIndex);
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar11 = pFVar8->Ptr;
  }
  else {
    pEVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  EVar3 = *pEVar11;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar4[1].FactoryName.ComparisonIndex.Value);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar4[1].field_0x14);
  pTVar14 = (TRotator<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar4[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar16 = FindOrAddMetadata(pFVar7,pFVar9,pFVar10,Rotator,EVar3,pFVar13);
  if ((pFVar16 == (FRigBaseMetadata *)0x0) || (pFVar16->Type != Rotator)) {
    *puVar15 = '\0';
  }
  else {
    bVar6 = FRigDispatch_MetadataBase::Equals<UE::Math::TRotator<double>_>
                      ((TRotator<double> *)(pFVar16 + 1),pTVar14);
    if (!bVar6) {
      FVar5 = (FName)pTVar14->Yaw;
      dVar2 = pTVar14->Roll;
      pFVar16[1]._padding_ = (longlong)pTVar14->Pitch;
      pFVar16[1].Name = FVar5;
      *(double *)&pFVar16[1].Type = dVar2;
      puVar1 = &pFVar7->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar15 = '\x01';
  }
  return;
}

// SetMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14> @ 14a5070c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FName FVar4;
  double dVar5;
  FProperty *pFVar6;
  double dVar7;
  FName FVar8;
  double dVar9;
  FProperty *pFVar10;
  double dVar11;
  FName FVar12;
  double dVar13;
  FProperty *pFVar14;
  bool bVar15;
  FControlRigExecuteContext *pFVar16;
  FRigVMMemoryHandle *pFVar17;
  FRigElementKey *pFVar18;
  FName *pFVar19;
  ERigMetaDataNameSpace *pEVar20;
  FRigVMSlice *pFVar21;
  FCachedRigElement *pFVar22;
  TTransform<double> *pTVar23;
  uchar *puVar24;
  FRigBaseMetadata *pFVar25;
  
  pFVar3 = param_1->Factory;
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar17->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar18 = (FRigElementKey *)pFVar17->Ptr;
  }
  else {
    pFVar18 = (FRigElementKey *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar17->PropertyPath,pFVar17->Ptr,pFVar17->Property);
  }
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar17->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar19 = (FName *)pFVar17->Ptr;
  }
  else {
    pFVar19 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar17->PropertyPath,pFVar17->Ptr,pFVar17->Property);
  }
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar17->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar20 = pFVar17->Ptr;
  }
  else {
    pEVar20 = FRigVMPropertyPath::GetData_Internal
                        (pFVar17->PropertyPath,pFVar17->Ptr,pFVar17->Property);
  }
  EVar2 = *pEVar20;
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar21 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar22 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar17,false,pFVar21->Offset + pFVar21->Index);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar23 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar17,false,-1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)
                                        &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4
                                       ));
  puVar24 = FRigVMMemoryHandle::GetData_Internal(pFVar17,false,-1);
  pFVar25 = FindOrAddMetadata(pFVar16,pFVar18,pFVar19,Transform,EVar2,pFVar22);
  if ((pFVar25 == (FRigBaseMetadata *)0x0) || (pFVar25->Type != Transform)) {
    *puVar24 = '\0';
  }
  else {
    bVar15 = FRigDispatch_MetadataBase::Equals<UE::Math::TTransform<double>_>
                       ((TTransform<double> *)(pFVar25 + 1),pTVar23);
    if (!bVar15) {
      FVar4 = *(FName *)((pTVar23->Rotation).XY.m128d_f64 + 1);
      dVar5 = (pTVar23->Rotation).ZW.m128d_f64[0];
      pFVar6 = (FProperty *)(pTVar23->Rotation).ZW.m128d_f64[1];
      dVar7 = (pTVar23->Translation).XY.m128d_f64[0];
      FVar8 = *(FName *)((pTVar23->Translation).XY.m128d_f64 + 1);
      dVar9 = (pTVar23->Translation).ZW.m128d_f64[0];
      pFVar10 = (FProperty *)(pTVar23->Translation).ZW.m128d_f64[1];
      dVar11 = (pTVar23->Scale3D).XY.m128d_f64[0];
      FVar12 = *(FName *)((pTVar23->Scale3D).XY.m128d_f64 + 1);
      dVar13 = (pTVar23->Scale3D).ZW.m128d_f64[0];
      pFVar14 = (FProperty *)(pTVar23->Scale3D).ZW.m128d_f64[1];
      (((TTransform<double> *)(pFVar25 + 1))->Rotation).XY.m128d_f64[0] =
           (pTVar23->Rotation).XY.m128d_f64[0];
      pFVar25[1].Name = FVar4;
      *(double *)&pFVar25[1].Type = dVar5;
      pFVar25[1].ValueProperty = pFVar6;
      pFVar25[2]._padding_ = (longlong)dVar7;
      pFVar25[2].Name = FVar8;
      *(double *)&pFVar25[2].Type = dVar9;
      pFVar25[2].ValueProperty = pFVar10;
      pFVar25[3]._padding_ = (longlong)dVar11;
      pFVar25[3].Name = FVar12;
      *(double *)&pFVar25[3].Type = dVar13;
      pFVar25[3].ValueProperty = pFVar14;
      puVar1 = &pFVar16->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar24 = '\x01';
  }
  return;
}

// SetMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8> @ 14a507290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  double dVar2;
  ERigMetaDataNameSpace EVar3;
  FRigVMDispatchFactory *pFVar4;
  FName FVar5;
  bool bVar6;
  FControlRigExecuteContext *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigElementKey *pFVar9;
  FName *pFVar10;
  ERigMetaDataNameSpace *pEVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  TVector<double> *pTVar14;
  uchar *puVar15;
  FRigBaseMetadata *pFVar16;
  
  pFVar4 = param_1->Factory;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar4[1]._padding_);
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar9 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar4[1]._padding_ + 4));
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar10 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar4[1].FactoryIndex);
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar11 = pFVar8->Ptr;
  }
  else {
    pEVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  EVar3 = *pEVar11;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar4[1].FactoryName.ComparisonIndex.Value);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar12->Offset + pFVar12->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar4[1].field_0x14);
  pTVar14 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar4[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar16 = FindOrAddMetadata(pFVar7,pFVar9,pFVar10,Vector,EVar3,pFVar13);
  if ((pFVar16 == (FRigBaseMetadata *)0x0) || (pFVar16->Type != Vector)) {
    *puVar15 = '\0';
  }
  else {
    bVar6 = FRigDispatch_MetadataBase::Equals<UE::Math::TVector<double>_>
                      ((TVector<double> *)(pFVar16 + 1),pTVar14);
    if (!bVar6) {
      FVar5 = (FName)(pTVar14->field0_0x0)._s_0.Y;
      dVar2 = (pTVar14->field0_0x0)._s_0.Z;
      (((TVector<double>_u_0 *)&pFVar16[1]._padding_)->_s_0).X = (pTVar14->field0_0x0)._s_0.X;
      pFVar16[1].Name = FVar5;
      *(double *)&pFVar16[1].Type = dVar2;
      puVar1 = &pFVar7->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar15 = '\x01';
  }
  return;
}

// SetMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16> @ 14a507440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FName FVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigElementKey *pFVar8;
  FName *pFVar9;
  ERigMetaDataNameSpace *pEVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FLinearColor *pFVar13;
  uchar *puVar14;
  FRigBaseMetadata *pFVar15;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FRigElementKey *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar9 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar10 = pFVar7->Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  EVar2 = *pEVar10;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar11->Offset + pFVar11->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pFVar13 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar15 = FindOrAddMetadata(pFVar6,pFVar8,pFVar9,LinearColor,EVar2,pFVar12);
  if ((pFVar15 == (FRigBaseMetadata *)0x0) || (pFVar15->Type != LinearColor)) {
    *puVar14 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<FLinearColor>((FLinearColor *)(pFVar15 + 1),pFVar13);
    if (!bVar5) {
      FVar4 = *(FName *)((longlong)&pFVar13->field0_0x0 + 8);
      *(undefined8 *)&pFVar15[1]._padding_ = *(undefined8 *)&pFVar13->field0_0x0;
      pFVar15[1].Name = FVar4;
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar14 = '\x01';
  }
  return;
}

// SetMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18> @ 14a5075e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  uint uVar3;
  FRigVMDispatchFactory *pFVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  longlong *plVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar4 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar4[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar4[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar4[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar4[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar4[1].field_0x14);
  plVar12 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar4[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,RigElementKey,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != RigElementKey)) {
    *puVar13 = '\0';
  }
  else {
    if ((*(longlong *)((longlong)&pFVar14[1]._padding_ + 4) != *(longlong *)((longlong)plVar12 + 4))
       || ((uchar)pFVar14[1]._padding_ != (uchar)*plVar12)) {
      uVar3 = *(uint *)(plVar12 + 1);
      pFVar14[1]._padding_ = *plVar12;
      pFVar14[1].Name.ComparisonIndex.Value = uVar3;
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5> @ 14a507790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,Int32Array,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != Int32Array)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::Equals<TArray<int,TSizedDefaultAllocator<32>_>_>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3> @ 14a507930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,FloatArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != FloatArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::Equals<TArray<float,TSizedDefaultAllocator<32>_>_>
                      ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13> @ 14a507ad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,QuatArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != QuatArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TQuat<double>_>
                      ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),
                       pTVar12);
    if (!bVar4) {
      TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),
                 pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11> @ 14a507c70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,RotatorArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != RotatorArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TRotator<double>_>
                      ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
                       (pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),
                 pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15> @ 14a507e10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,TransformArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != TransformArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TTransform<double>_>
                      ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                       (pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),
                 pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9> @ 14a507fb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,VectorArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != VectorArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::
            Equals<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                      ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                       (pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),
                 pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17> @ 14a508150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,LinearColorArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != LinearColorArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::Equals<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                      ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19> @ 14a5082f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,RigElementKeyArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != RigElementKeyArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::Equals<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                      ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7> @ 14a508490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,NameArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != NameArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::Equals<TArray<FName,TSizedDefaultAllocator<32>_>_>
                      ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1> @ 14a508630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::
SetMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  bool bVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar5,pFVar7,pFVar8,BoolArray,EVar2,pFVar11);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != BoolArray)) {
    *puVar13 = '\0';
  }
  else {
    bVar4 = FRigDispatch_MetadataBase::Equals<TArray<bool,TSizedDefaultAllocator<32>_>_>
                      ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
    if (!bVar4) {
      TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),pTVar12);
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetMetadataDispatch<FName,FRigNameMetadata,6> @ 14a5087d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<FName,FRigNameMetadata,6>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FControlRigExecuteContext *pFVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  longlong *plVar11;
  uchar *puVar12;
  FRigBaseMetadata *pFVar13;
  
  pFVar3 = param_1->Factory;
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  plVar11 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar13 = FindOrAddMetadata(pFVar4,pFVar6,pFVar7,Name,EVar2,pFVar10);
  if ((pFVar13 == (FRigBaseMetadata *)0x0) || (pFVar13->Type != Name)) {
    *puVar12 = '\0';
  }
  else {
    if (((int)pFVar13[1]._padding_ != (int)*plVar11) ||
       (*(int *)((longlong)&pFVar13[1]._padding_ + 4) != *(int *)((longlong)plVar11 + 4))) {
      pFVar13[1]._padding_ = *plVar11;
      puVar1 = &pFVar4->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar12 = '\x01';
  }
  return;
}

// SetMetadataDispatch<bool,FRigBoolMetadata,0> @ 14a508970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetMetadata::SetMetadataDispatch<bool,FRigBoolMetadata,0>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FControlRigExecuteContext *pFVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  uchar *puVar11;
  uchar *puVar12;
  FRigBaseMetadata *pFVar13;
  
  pFVar3 = param_1->Factory;
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar3[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar3[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar13 = FindOrAddMetadata(pFVar4,pFVar6,pFVar7,Bool,EVar2,pFVar10);
  if ((pFVar13 == (FRigBaseMetadata *)0x0) || (pFVar13->Type != Bool)) {
    *puVar12 = '\0';
  }
  else {
    if ((uchar)pFVar13[1]._padding_ != *puVar11) {
      *(uchar *)&pFVar13[1]._padding_ = *puVar11;
      puVar1 = &pFVar4->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar12 = '\x01';
  }
  return;
}

// FindOrAddMetadata @ 14a52fda0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __cdecl
FRigDispatch_SetMetadata::FindOrAddMetadata
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FName *param_3,
          ERigMetadataType param_4,ERigMetaDataNameSpace param_5,FCachedRigElement *param_6)

{
  bool bVar1;
  uint uVar2;
  FRigBaseElement *pFVar3;
  FRigBaseMetadata *pFVar4;
  FName local_res8;
  
  bVar1 = FCachedRigElement::UpdateCache(param_6,param_2,param_1->Hierarchy);
  if (bVar1) {
    uVar2 = 0xffffffff;
    if (param_6->Index != 0xffff) {
      uVar2 = (uint)param_6->Index;
    }
    pFVar3 = URigHierarchy::Get(param_1->Hierarchy,uVar2);
    if (pFVar3 != (FRigBaseElement *)0x0) {
      FControlRigExecuteContext::AdaptMetadataName
                (param_1,(ERigMetaDataNameSpace)&local_res8,(FName *)(ulonglong)param_5);
      pFVar4 = URigHierarchy::GetMetadataForElement
                         (param_1->Hierarchy,pFVar3,&local_res8,param_4,true);
      return pFVar4;
    }
  }
  return (FRigBaseMetadata *)0x0;
}

