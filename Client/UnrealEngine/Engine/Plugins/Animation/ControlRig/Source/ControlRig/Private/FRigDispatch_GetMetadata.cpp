// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 24

// StaticStruct @ 14a4e1c90

UScriptStruct * __cdecl FRigDispatch_GetMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_GetMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_GetMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetMetadata,(UObject *)pUVar1,
                         L"RigDispatch_GetMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_GetMetadata.OuterSingleton;
}

// GetArgumentInfos @ 14a4e1e20

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_GetMetadata::GetArgumentInfos
          (FRigDispatch_GetMetadata *this,FRigVMRegistryHandle *param_1)

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
    FLazyName::Resolve(&FRigDispatch_MetadataBase::DefaultArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar4 * 0x50 + lVar1),local_res8,Input,
               pTVar6);
    *(int *)&this->field_0xb8 = iVar4;
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
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar4 * 0x50 + lVar1),local_res8,Output,
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
    FLazyName::Resolve(&FRigDispatch_MetadataBase::FoundArgName);
    local_38.Name = FVar2;
    local_38.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)((longlong)iVar4 * 0x50 + lVar1),local_res18,Output,
               &local_38);
    *(int *)&this->field_0xc0 = iVar4;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)this_00;
}

// GetDispatchFunctionImpl @ 14a4e20d0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_GetMetadata::GetDispatchFunctionImpl
          (FRigDispatch_GetMetadata *this,
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
    return GetMetadataDispatch<bool,FRigBoolMetadata,0>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    return GetMetadataDispatch<float,FRigFloatMetadata,2>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    return GetMetadataDispatch<int,FRigInt32Metadata,4>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FName.Index) {
    return GetMetadataDispatch<FName,FRigNameMetadata,6>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_98,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_8c,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_80,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_74,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_68,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_5c,false);
  iVar1 = *(int *)&pTVar4->field_0x10;
  if (iVar1 == pTVar7->Index) {
    return GetMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::BoolArray.Index) {
    return GetMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FloatArray.Index) {
    return GetMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32Array.Index) {
    return GetMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FNameArray.Index) {
    return GetMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_50,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_44,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_38,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_2c,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_20,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_14,true);
  pcVar8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
            *)0x0;
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    pcVar8 = 
    GetMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
    ;
  }
  return pcVar8;
}

// GetMetadataDispatch<int,FRigInt32Metadata,4> @ 14a501020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<int,FRigInt32Metadata,4>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  uchar *puVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar4,pFVar5,Int32,EVar1,pFVar8);
  if ((pFVar12 == (FRigBaseMetadata *)0x0) || (pFVar12->Type != Int32)) {
    pFVar12 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar12 + 1;
  }
  *(int *)puVar10 = (int)pFVar9->_padding_;
  *puVar11 = pFVar12 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<float,FRigFloatMetadata,2> @ 14a5011d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<float,FRigFloatMetadata,2>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  uchar *puVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar4,pFVar5,Float,EVar1,pFVar8);
  if ((pFVar12 == (FRigBaseMetadata *)0x0) || (pFVar12->Type != Float)) {
    pFVar12 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar12 + 1;
  }
  *(int *)puVar10 = (int)pFVar9->_padding_;
  *puVar11 = pFVar12 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12> @ 14a501380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  FProperty *pFVar4;
  longlong lVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  longlong *plVar12;
  longlong *plVar13;
  uchar *puVar14;
  FRigBaseMetadata *pFVar15;
  
  pFVar2 = param_1->Factory;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar1 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  plVar12 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,true,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar13 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar15 = FindMetadata(param_1,pFVar7,pFVar8,Quat,EVar1,pFVar11);
  if ((pFVar15 == (FRigBaseMetadata *)0x0) || (pFVar15->Type != Quat)) {
    lVar5 = plVar12[1];
    *plVar13 = *plVar12;
    plVar13[1] = lVar5;
    lVar5 = plVar12[3];
    plVar13[2] = plVar12[2];
    plVar13[3] = lVar5;
    *puVar14 = '\0';
  }
  else {
    FVar3 = pFVar15[1].Name;
    *plVar13 = pFVar15[1]._padding_;
    *(FName *)(plVar13 + 1) = FVar3;
    pFVar4 = pFVar15[1].ValueProperty;
    plVar13[2] = *(longlong *)&pFVar15[1].Type;
    plVar13[3] = (longlong)pFVar4;
    *puVar14 = '\x01';
  }
  return;
}

// GetMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10> @ 14a501540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  longlong lVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar2 = param_1->Factory;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar1 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  plVar11 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,true,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar12 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar14 = FindMetadata(param_1,pFVar6,pFVar7,Rotator,EVar1,pFVar10);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != Rotator)) {
    lVar4 = plVar11[1];
    *plVar12 = *plVar11;
    plVar12[1] = lVar4;
    plVar12[2] = plVar11[2];
    *puVar13 = '\0';
  }
  else {
    FVar3 = pFVar14[1].Name;
    *plVar12 = pFVar14[1]._padding_;
    *(FName *)(plVar12 + 1) = FVar3;
    plVar12[2] = *(longlong *)&pFVar14[1].Type;
    *puVar13 = '\x01';
  }
  return;
}

// GetMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14> @ 14a501700

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  FProperty *pFVar4;
  longlong lVar5;
  FRigVMMemoryHandle *pFVar6;
  FRigElementKey *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  longlong *plVar12;
  longlong *plVar13;
  uchar *puVar14;
  FRigBaseMetadata *pFVar15;
  
  pFVar2 = param_1->Factory;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar6->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar1 = *pEVar9;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar6,false,pFVar10->Offset + pFVar10->Index);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  plVar12 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,true,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar13 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar15 = FindMetadata(param_1,pFVar7,pFVar8,Transform,EVar1,pFVar11);
  if ((pFVar15 == (FRigBaseMetadata *)0x0) || (pFVar15->Type != Transform)) {
    lVar5 = plVar12[1];
    *plVar13 = *plVar12;
    plVar13[1] = lVar5;
    lVar5 = plVar12[3];
    plVar13[2] = plVar12[2];
    plVar13[3] = lVar5;
    lVar5 = plVar12[5];
    plVar13[4] = plVar12[4];
    plVar13[5] = lVar5;
    lVar5 = plVar12[7];
    plVar13[6] = plVar12[6];
    plVar13[7] = lVar5;
    lVar5 = plVar12[9];
    plVar13[8] = plVar12[8];
    plVar13[9] = lVar5;
    lVar5 = plVar12[0xb];
    plVar13[10] = plVar12[10];
    plVar13[0xb] = lVar5;
    *puVar14 = '\0';
  }
  else {
    FVar3 = pFVar15[1].Name;
    *plVar13 = pFVar15[1]._padding_;
    *(FName *)(plVar13 + 1) = FVar3;
    pFVar4 = pFVar15[1].ValueProperty;
    plVar13[2] = *(longlong *)&pFVar15[1].Type;
    plVar13[3] = (longlong)pFVar4;
    FVar3 = pFVar15[2].Name;
    plVar13[4] = pFVar15[2]._padding_;
    *(FName *)(plVar13 + 5) = FVar3;
    pFVar4 = pFVar15[2].ValueProperty;
    plVar13[6] = *(longlong *)&pFVar15[2].Type;
    plVar13[7] = (longlong)pFVar4;
    FVar3 = pFVar15[3].Name;
    plVar13[8] = pFVar15[3]._padding_;
    *(FName *)(plVar13 + 9) = FVar3;
    pFVar4 = pFVar15[3].ValueProperty;
    plVar13[10] = *(longlong *)&pFVar15[3].Type;
    plVar13[0xb] = (longlong)pFVar4;
    *puVar14 = '\x01';
  }
  return;
}

// GetMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8> @ 14a501900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  longlong lVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar2 = param_1->Factory;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar1 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  plVar11 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,true,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar12 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar14 = FindMetadata(param_1,pFVar6,pFVar7,Vector,EVar1,pFVar10);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != Vector)) {
    lVar4 = plVar11[1];
    *plVar12 = *plVar11;
    plVar12[1] = lVar4;
    plVar12[2] = plVar11[2];
    *puVar13 = '\0';
  }
  else {
    FVar3 = pFVar14[1].Name;
    *plVar12 = pFVar14[1]._padding_;
    *(FName *)(plVar12 + 1) = FVar3;
    plVar12[2] = *(longlong *)&pFVar14[1].Type;
    *puVar13 = '\x01';
  }
  return;
}

// GetMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16> @ 14a501ac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  longlong lVar4;
  FRigVMMemoryHandle *pFVar5;
  FRigElementKey *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar2 = param_1->Factory;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar5->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar1 = *pEVar8;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar5,false,pFVar9->Offset + pFVar9->Index);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  plVar11 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,true,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar12 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar14 = FindMetadata(param_1,pFVar6,pFVar7,LinearColor,EVar1,pFVar10);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != LinearColor)) {
    lVar4 = plVar11[1];
    *plVar12 = *plVar11;
    plVar12[1] = lVar4;
    *puVar13 = '\0';
  }
  else {
    FVar3 = pFVar14[1].Name;
    *plVar12 = pFVar14[1]._padding_;
    *(FName *)(plVar12 + 1) = FVar3;
    *puVar13 = '\x01';
  }
  return;
}

// GetMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18> @ 14a501c70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  longlong *plVar9;
  longlong *plVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  plVar9 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar10 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar4,pFVar5,RigElementKey,EVar1,pFVar8);
  if ((pFVar12 == (FRigBaseMetadata *)0x0) || (pFVar12->Type != RigElementKey)) {
    *plVar10 = *plVar9;
    *(int *)(plVar10 + 1) = (int)plVar9[1];
    *puVar11 = '\0';
  }
  else {
    *plVar10 = pFVar12[1]._padding_;
    *(uint *)(plVar10 + 1) = pFVar12[1].Name.ComparisonIndex.Value;
    *puVar11 = '\x01';
  }
  return;
}

// GetMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5> @ 14a501e30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<int,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,Int32Array,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != Int32Array)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3> @ 14a501fe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<float,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,FloatArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != FloatArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<float,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13> @ 14a502190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,QuatArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != QuatArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11> @ 14a502340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,RotatorArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != RotatorArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15> @ 14a5024f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,TransformArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != TransformArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9> @ 14a5026a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,VectorArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != VectorArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17> @ 14a502850

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,LinearColorArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != LinearColorArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19> @ 14a502a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,RigElementKeyArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != RigElementKeyArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7> @ 14a502bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<FName,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,NameArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != NameArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1> @ 14a502d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::
GetMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  TArray<bool,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<bool,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar4,pFVar5,BoolArray,EVar1,pFVar8);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != BoolArray)) {
    pFVar11 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar11 + 1;
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<bool,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar10 = pFVar11 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<FName,FRigNameMetadata,6> @ 14a502f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<FName,FRigNameMetadata,6>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  longlong *plVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar10 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar4,pFVar5,Name,EVar1,pFVar8);
  if ((pFVar12 == (FRigBaseMetadata *)0x0) || (pFVar12->Type != Name)) {
    pFVar12 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar12 + 1;
  }
  *plVar10 = pFVar9->_padding_;
  *puVar11 = pFVar12 != (FRigBaseMetadata *)0x0;
  return;
}

// GetMetadataDispatch<bool,FRigBoolMetadata,0> @ 14a5030c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetMetadata::GetMetadataDispatch<bool,FRigBoolMetadata,0>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  FName *pFVar5;
  ERigMetaDataNameSpace *pEVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FRigBaseMetadata *pFVar9;
  uchar *puVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,(int)pFVar2[1]._padding_);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar6 = pFVar3->Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar6;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryName.ComparisonIndex.Value);
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar3,false,pFVar7->Offset + pFVar7->Index);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  pFVar9 = (FRigBaseMetadata *)FRigVMMemoryHandle::GetData_Internal(pFVar3,true,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar4,pFVar5,Bool,EVar1,pFVar8);
  if ((pFVar12 == (FRigBaseMetadata *)0x0) || (pFVar12->Type != Bool)) {
    pFVar12 = (FRigBaseMetadata *)0x0;
  }
  else {
    pFVar9 = pFVar12 + 1;
  }
  *puVar10 = (uchar)pFVar9->_padding_;
  *puVar11 = pFVar12 != (FRigBaseMetadata *)0x0;
  return;
}

// FindMetadata @ 14a52fb70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __cdecl
FRigDispatch_GetMetadata::FindMetadata
          (FRigVMExtendedExecuteContext *param_1,FRigElementKey *param_2,FName *param_3,
          ERigMetadataType param_4,ERigMetaDataNameSpace param_5,FCachedRigElement *param_6)

{
  bool bVar1;
  FControlRigExecuteContext *this;
  FRigBaseElement *pFVar2;
  FRigBaseMetadata *pFVar3;
  uint uVar4;
  FName local_18 [2];
  
  this = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  bVar1 = FCachedRigElement::UpdateCache(param_6,param_2,this->Hierarchy);
  if (bVar1) {
    uVar4 = 0xffffffff;
    if (param_6->Index != 0xffff) {
      uVar4 = (uint)param_6->Index;
    }
    pFVar2 = URigHierarchy::Get(this->Hierarchy,uVar4);
    if (pFVar2 != (FRigBaseElement *)0x0) {
      FControlRigExecuteContext::AdaptMetadataName
                (this,(ERigMetaDataNameSpace)local_18,(FName *)(ulonglong)param_5);
      pFVar3 = URigHierarchy::FindMetadataForElement(this->Hierarchy,pFVar2,local_18,param_4);
      return pFVar3;
    }
  }
  return (FRigBaseMetadata *)0x0;
}

