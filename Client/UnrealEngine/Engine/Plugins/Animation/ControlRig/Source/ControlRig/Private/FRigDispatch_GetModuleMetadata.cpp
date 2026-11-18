// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 24

// StaticStruct @ 14a4f8970

UScriptStruct * __cdecl FRigDispatch_GetModuleMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_GetModuleMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_GetModuleMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata,(UObject *)pUVar1,
                         L"RigDispatch_GetModuleMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_GetModuleMetadata.OuterSingleton;
}

// GetArgumentInfos @ 14a4f89d0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_GetModuleMetadata::GetArgumentInfos
          (FRigDispatch_GetModuleMetadata *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  int iVar5;
  UEnum *pUVar6;
  int iVar7;
  FRigVMRegistry_NoLock *pFVar8;
  UPackage *pUVar9;
  FString *pFVar10;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar11;
  wchar_t *pwVar12;
  FName local_res18;
  TRigVMTypeIndex local_68;
  undefined1 local_58 [16];
  FString local_48;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xbc == -1) {
    iVar7 = *(int *)&this->field_0xa0;
    if (iVar7 == *(int *)&this->field_0xa4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar7 + 1;
    iVar5 = RigVMTypeUtils::TypeIndex::FName.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::NameArgName);
    local_68.Name = FVar3;
    local_68.Index = iVar5;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar7 * 0x50),local_res18,Input,
               &local_68);
    *(int *)&this->field_0xac = iVar7;
    pFVar8 = FRigVMRegistryHandle::operator->(param_1);
    if (Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton == (UEnum *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace,(UObject *)pUVar9,
                         L"ERigMetaDataNameSpace");
    }
    pUVar6 = Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton;
    pFVar10 = RigVMTypeUtils::CPPTypeFromEnum
                        (&local_48,Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)local_58,pwVar12);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_58._8_8_ = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (**(code **)(pFVar8->_padding_ + 0xe0))(pFVar8,&local_68);
    iVar7 = *(int *)&this->field_0xa0;
    if (iVar7 == *(int *)&this->field_0xa4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    iVar5 = local_68.Index;
    FVar3 = local_68.Name;
    *(int *)&this->field_0xa0 = iVar7 + 1;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::NameSpaceArgName);
    FVar4 = local_68.Name;
    local_68.Name.ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_68.Name.Number = FVar3.Number;
    local_58._0_4_ = local_68.Name.ComparisonIndex.Value;
    local_58._4_4_ = local_68.Name.Number;
    local_58._8_4_ = iVar5;
    local_68.Name = FVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar7 * 0x50),local_res18,Input,
               (TRigVMTypeIndex *)local_58);
    *(int *)&this->field_0xb0 = iVar7;
    pTVar11 = FRigDispatch_MetadataBase::GetValueTypes((FRigDispatch_MetadataBase *)this,param_1);
    iVar7 = *(int *)&this->field_0xa0;
    if (iVar7 == *(int *)&this->field_0xa4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar7 + 1;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::DefaultArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar7 * 0x50),FVar3,Input,pTVar11);
    *(int *)&this->field_0xb8 = iVar7;
    pTVar11 = FRigDispatch_MetadataBase::GetValueTypes((FRigDispatch_MetadataBase *)this,param_1);
    iVar7 = *(int *)&this->field_0xa0;
    if (iVar7 == *(int *)&this->field_0xa4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar7 + 1;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::ValueArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar7 * 0x50),FVar3,Output,pTVar11);
    *(int *)&this->field_0xbc = iVar7;
    iVar7 = *(int *)&this->field_0xa0;
    if (iVar7 == *(int *)&this->field_0xa4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar7 + 1;
    iVar5 = RigVMTypeUtils::TypeIndex::Bool.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_MetadataBase::FoundArgName);
    FVar4 = RigVMTypeUtils::TypeIndex::Bool.Name;
    RigVMTypeUtils::TypeIndex::Bool.Name.ComparisonIndex = FVar3.ComparisonIndex.Value;
    RigVMTypeUtils::TypeIndex::Bool.Name.Number = FVar3.Number;
    local_58._0_4_ = RigVMTypeUtils::TypeIndex::Bool.Name.ComparisonIndex.Value;
    local_58._4_4_ = RigVMTypeUtils::TypeIndex::Bool.Name.Number;
    local_58._8_4_ = iVar5;
    RigVMTypeUtils::TypeIndex::Bool.Name = FVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar7 * 0x50),local_res18,Output,
               (TRigVMTypeIndex *)local_58);
    *(int *)&this->field_0xc0 = iVar7;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetDispatchFunctionImpl @ 14a4f9160

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_GetModuleMetadata::GetDispatchFunctionImpl
          (FRigDispatch_GetModuleMetadata *this,
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
    return GetModuleMetadataDispatch<bool,FRigBoolMetadata,0>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    return GetModuleMetadataDispatch<float,FRigFloatMetadata,2>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    return GetModuleMetadataDispatch<int,FRigInt32Metadata,4>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FName.Index) {
    return GetModuleMetadataDispatch<FName,FRigNameMetadata,6>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_98,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetModuleMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_8c,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetModuleMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_80,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetModuleMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_74,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetModuleMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_68,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return GetModuleMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_5c,false);
  iVar1 = *(int *)&pTVar4->field_0x10;
  if (iVar1 == pTVar7->Index) {
    return GetModuleMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::BoolArray.Index) {
    return 
    GetModuleMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FloatArray.Index) {
    return 
    GetModuleMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32Array.Index) {
    return 
    GetModuleMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FNameArray.Index) {
    return 
    GetModuleMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_50,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetModuleMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_44,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetModuleMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_38,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetModuleMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_2c,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetModuleMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_20,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    GetModuleMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_14,true);
  pcVar8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
            *)0x0;
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    pcVar8 = 
    GetModuleMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
    ;
  }
  return pcVar8;
}

// GetModuleMetadataDispatch<int,FRigInt32Metadata,4> @ 14a503270

void __cdecl
FRigDispatch_GetModuleMetadata::GetModuleMetadataDispatch<int,FRigInt32Metadata,4>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  FRigBaseMetadata *pFVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar9 = FindMetadata(param_1,pFVar4,Int32,EVar1);
  if ((pFVar9 == (FRigBaseMetadata *)0x0) || (pFVar9->Type != Int32)) {
    pFVar9 = (FRigBaseMetadata *)0x0;
  }
  pFVar10 = pFVar9 + 1;
  if (pFVar9 == (FRigBaseMetadata *)0x0) {
    pFVar10 = pFVar6;
  }
  *(int *)puVar7 = (int)pFVar10->_padding_;
  *puVar8 = pFVar9 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<float,FRigFloatMetadata,2> @ 14a5033c0

void __cdecl
FRigDispatch_GetModuleMetadata::GetModuleMetadataDispatch<float,FRigFloatMetadata,2>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  FRigBaseMetadata *pFVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar9 = FindMetadata(param_1,pFVar4,Float,EVar1);
  if ((pFVar9 == (FRigBaseMetadata *)0x0) || (pFVar9->Type != Float)) {
    pFVar9 = (FRigBaseMetadata *)0x0;
  }
  pFVar10 = pFVar9 + 1;
  if (pFVar9 == (FRigBaseMetadata *)0x0) {
    pFVar10 = pFVar6;
  }
  *(int *)puVar7 = (int)pFVar10->_padding_;
  *puVar8 = pFVar9 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12> @ 14a503510

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  FProperty *pFVar4;
  longlong lVar5;
  FRigVMMemoryHandle *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  longlong *plVar9;
  longlong *plVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar6->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar1 = *pEVar8;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar9 = (longlong *)pFVar6->Ptr;
  }
  else {
    plVar9 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar10 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar7,Quat,EVar1);
  if ((pFVar12 != (FRigBaseMetadata *)0x0) && (pFVar12->Type == Quat)) {
    FVar3 = pFVar12[1].Name;
    *plVar10 = pFVar12[1]._padding_;
    *(FName *)(plVar10 + 1) = FVar3;
    pFVar4 = pFVar12[1].ValueProperty;
    plVar10[2] = *(longlong *)&pFVar12[1].Type;
    plVar10[3] = (longlong)pFVar4;
    *puVar11 = '\x01';
    return;
  }
  lVar5 = plVar9[1];
  *plVar10 = *plVar9;
  plVar10[1] = lVar5;
  lVar5 = plVar9[3];
  plVar10[2] = plVar9[2];
  plVar10[3] = lVar5;
  *puVar11 = '\0';
  return;
}

// GetModuleMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10> @ 14a503680

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  longlong lVar4;
  FRigVMMemoryHandle *pFVar5;
  FName *pFVar6;
  ERigMetaDataNameSpace *pEVar7;
  longlong *plVar8;
  longlong *plVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar5->Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar1 = *pEVar7;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar8 = (longlong *)pFVar5->Ptr;
  }
  else {
    plVar8 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar9 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar6,Rotator,EVar1);
  if ((pFVar11 != (FRigBaseMetadata *)0x0) && (pFVar11->Type == Rotator)) {
    FVar3 = pFVar11[1].Name;
    *plVar9 = pFVar11[1]._padding_;
    *(FName *)(plVar9 + 1) = FVar3;
    plVar9[2] = *(longlong *)&pFVar11[1].Type;
    *puVar10 = '\x01';
    return;
  }
  lVar4 = plVar8[1];
  *plVar9 = *plVar8;
  plVar9[1] = lVar4;
  plVar9[2] = plVar8[2];
  *puVar10 = '\0';
  return;
}

// GetModuleMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14> @ 14a5037f0

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  FProperty *pFVar4;
  longlong lVar5;
  FRigVMMemoryHandle *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  longlong *plVar9;
  longlong *plVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar2 = param_1->Factory;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar6->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar1 = *pEVar8;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar9 = (longlong *)pFVar6->Ptr;
  }
  else {
    plVar9 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar10 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar12 = FindMetadata(param_1,pFVar7,Transform,EVar1);
  if ((pFVar12 != (FRigBaseMetadata *)0x0) && (pFVar12->Type == Transform)) {
    FVar3 = pFVar12[1].Name;
    *plVar10 = pFVar12[1]._padding_;
    *(FName *)(plVar10 + 1) = FVar3;
    pFVar4 = pFVar12[1].ValueProperty;
    plVar10[2] = *(longlong *)&pFVar12[1].Type;
    plVar10[3] = (longlong)pFVar4;
    FVar3 = pFVar12[2].Name;
    plVar10[4] = pFVar12[2]._padding_;
    *(FName *)(plVar10 + 5) = FVar3;
    pFVar4 = pFVar12[2].ValueProperty;
    plVar10[6] = *(longlong *)&pFVar12[2].Type;
    plVar10[7] = (longlong)pFVar4;
    FVar3 = pFVar12[3].Name;
    plVar10[8] = pFVar12[3]._padding_;
    *(FName *)(plVar10 + 9) = FVar3;
    pFVar4 = pFVar12[3].ValueProperty;
    plVar10[10] = *(longlong *)&pFVar12[3].Type;
    plVar10[0xb] = (longlong)pFVar4;
    *puVar11 = '\x01';
    return;
  }
  lVar5 = plVar9[1];
  *plVar10 = *plVar9;
  plVar10[1] = lVar5;
  lVar5 = plVar9[3];
  plVar10[2] = plVar9[2];
  plVar10[3] = lVar5;
  lVar5 = plVar9[5];
  plVar10[4] = plVar9[4];
  plVar10[5] = lVar5;
  lVar5 = plVar9[7];
  plVar10[6] = plVar9[6];
  plVar10[7] = lVar5;
  lVar5 = plVar9[9];
  plVar10[8] = plVar9[8];
  plVar10[9] = lVar5;
  lVar5 = plVar9[0xb];
  plVar10[10] = plVar9[10];
  plVar10[0xb] = lVar5;
  *puVar11 = '\0';
  return;
}

// GetModuleMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8> @ 14a5039a0

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  longlong lVar4;
  FRigVMMemoryHandle *pFVar5;
  FName *pFVar6;
  ERigMetaDataNameSpace *pEVar7;
  longlong *plVar8;
  longlong *plVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar5->Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar1 = *pEVar7;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar8 = (longlong *)pFVar5->Ptr;
  }
  else {
    plVar8 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar9 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar6,Vector,EVar1);
  if ((pFVar11 != (FRigBaseMetadata *)0x0) && (pFVar11->Type == Vector)) {
    FVar3 = pFVar11[1].Name;
    *plVar9 = pFVar11[1]._padding_;
    *(FName *)(plVar9 + 1) = FVar3;
    plVar9[2] = *(longlong *)&pFVar11[1].Type;
    *puVar10 = '\x01';
    return;
  }
  lVar4 = plVar8[1];
  *plVar9 = *plVar8;
  plVar9[1] = lVar4;
  plVar9[2] = plVar8[2];
  *puVar10 = '\0';
  return;
}

// GetModuleMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16> @ 14a503b10

void __cdecl
FRigDispatch_GetModuleMetadata::GetModuleMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FName FVar3;
  longlong lVar4;
  FRigVMMemoryHandle *pFVar5;
  FName *pFVar6;
  ERigMetaDataNameSpace *pEVar7;
  longlong *plVar8;
  longlong *plVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar2 = param_1->Factory;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar5->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar5->Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  EVar1 = *pEVar7;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar8 = (longlong *)pFVar5->Ptr;
  }
  else {
    plVar8 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property)
    ;
  }
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar9 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  pFVar11 = FindMetadata(param_1,pFVar6,LinearColor,EVar1);
  if ((pFVar11 != (FRigBaseMetadata *)0x0) && (pFVar11->Type == LinearColor)) {
    FVar3 = pFVar11[1].Name;
    *plVar9 = pFVar11[1]._padding_;
    *(FName *)(plVar9 + 1) = FVar3;
    *puVar10 = '\x01';
    return;
  }
  lVar4 = plVar8[1];
  *plVar9 = *plVar8;
  plVar9[1] = lVar4;
  *puVar10 = '\0';
  return;
}

// GetModuleMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18> @ 14a503c70

void __cdecl
FRigDispatch_GetModuleMetadata::GetModuleMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  longlong *plVar6;
  longlong *plVar7;
  uchar *puVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    plVar6 = (longlong *)pFVar3->Ptr;
  }
  else {
    plVar6 = (longlong *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar7 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar9 = FindMetadata(param_1,pFVar4,RigElementKey,EVar1);
  if ((pFVar9 != (FRigBaseMetadata *)0x0) && (pFVar9->Type == RigElementKey)) {
    *plVar7 = pFVar9[1]._padding_;
    *(uint *)(plVar7 + 1) = pFVar9[1].Name.ComparisonIndex.Value;
    *puVar8 = '\x01';
    return;
  }
  *plVar7 = *plVar6;
  *(int *)(plVar7 + 1) = (int)plVar6[1];
  *puVar8 = '\0';
  return;
}

// GetModuleMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5> @ 14a503de0

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<int,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,Int32Array,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != Int32Array)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3> @ 14a503f40

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<float,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,FloatArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != FloatArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<float,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13> @ 14a5040a0

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,QuatArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != QuatArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11> @ 14a504200

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,RotatorArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != RotatorArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15> @ 14a504360

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,TransformArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != TransformArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9> @ 14a5044c0

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,VectorArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != VectorArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17> @ 14a504620

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,LinearColorArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != LinearColorArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19> @ 14a504780

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,RigElementKeyArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != RigElementKeyArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7> @ 14a5048e0

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<FName,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,NameArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != NameArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1> @ 14a504a40

void __cdecl
FRigDispatch_GetModuleMetadata::
GetModuleMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *this;
  uchar *puVar7;
  FRigBaseMetadata *pFVar8;
  FRigBaseMetadata *pFVar9;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  this = (TArray<bool,TSizedDefaultAllocator<32>_> *)
         FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar8 = FindMetadata(param_1,pFVar4,BoolArray,EVar1);
  if ((pFVar8 == (FRigBaseMetadata *)0x0) || (pFVar8->Type != BoolArray)) {
    pFVar8 = (FRigBaseMetadata *)0x0;
  }
  pFVar9 = pFVar8 + 1;
  if (pFVar8 == (FRigBaseMetadata *)0x0) {
    pFVar9 = pFVar6;
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (this,(TArray<bool,TSizedDefaultAllocator<32>_> *)pFVar9);
  *puVar7 = pFVar8 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<FName,FRigNameMetadata,6> @ 14a504ba0

void __cdecl
FRigDispatch_GetModuleMetadata::GetModuleMetadataDispatch<FName,FRigNameMetadata,6>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  longlong *plVar7;
  uchar *puVar8;
  FRigBaseMetadata *pFVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  plVar7 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar9 = FindMetadata(param_1,pFVar4,Name,EVar1);
  if ((pFVar9 == (FRigBaseMetadata *)0x0) || (pFVar9->Type != Name)) {
    pFVar9 = (FRigBaseMetadata *)0x0;
  }
  pFVar10 = pFVar9 + 1;
  if (pFVar9 == (FRigBaseMetadata *)0x0) {
    pFVar10 = pFVar6;
  }
  *plVar7 = pFVar10->_padding_;
  *puVar8 = pFVar9 != (FRigBaseMetadata *)0x0;
  return;
}

// GetModuleMetadataDispatch<bool,FRigBoolMetadata,0> @ 14a504cf0

void __cdecl
FRigDispatch_GetModuleMetadata::GetModuleMetadataDispatch<bool,FRigBoolMetadata,0>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  FRigVMDispatchFactory *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  FName *pFVar4;
  ERigMetaDataNameSpace *pEVar5;
  FRigBaseMetadata *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  FRigBaseMetadata *pFVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar2 = param_1->Factory;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar2[1]._padding_ + 4));
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar4 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryIndex);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar3->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  EVar1 = *pEVar5;
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigBaseMetadata *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FRigBaseMetadata *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar3 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar3,false,-1);
  pFVar9 = FindMetadata(param_1,pFVar4,Bool,EVar1);
  if ((pFVar9 == (FRigBaseMetadata *)0x0) || (pFVar9->Type != Bool)) {
    pFVar9 = (FRigBaseMetadata *)0x0;
  }
  pFVar10 = pFVar9 + 1;
  if (pFVar9 == (FRigBaseMetadata *)0x0) {
    pFVar10 = pFVar6;
  }
  *puVar7 = (uchar)pFVar10->_padding_;
  *puVar8 = pFVar9 != (FRigBaseMetadata *)0x0;
  return;
}

// FindMetadata @ 14a52fc30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __cdecl
FRigDispatch_GetModuleMetadata::FindMetadata
          (FRigVMExtendedExecuteContext *param_1,FName *param_2,ERigMetadataType param_3,
          ERigMetaDataNameSpace param_4)

{
  FScriptContainerElement *pFVar1;
  FRigBaseElement *pFVar2;
  FControlRigExecuteContext *this;
  FRigModuleInstance *this_00;
  FRigConnectorElement *pFVar3;
  FRigBaseMetadata *pFVar4;
  int iVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  undefined1 local_48 [8];
  FName local_40;
  TArray<FRigConnectorElement_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar8 = (uint)param_4;
  this = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  this_00 = this->RigModuleInstance;
  if (this_00 == (FRigModuleInstance *)0x0) {
LAB_14a52fcc3:
    if (1 < (this->RigModulePrefix).Data.ArrayNum) {
      URigHierarchy::GetElementsOfType<FRigConnectorElement>(this->Hierarchy,&local_38,false);
      iVar5 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar5 * 8;
      uVar6 = local_38._8_8_;
      FVar7.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar5) {
          `TCheckedPointerIterator<FRigConnectorElement_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_48);
          uVar6 = local_38._8_8_;
        }
        if (FVar7.Data == pFVar1) break;
        pFVar2 = *(FRigBaseElement **)FVar7.Data;
        if (pFVar2[1].Key.Type == None) {
          FControlRigExecuteContext::AdaptMetadataName
                    (this,(ERigMetaDataNameSpace)&local_40,(FName *)(ulonglong)uVar8);
          pFVar4 = URigHierarchy::FindMetadataForElement(this->Hierarchy,pFVar2,&local_40,param_3);
          if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pFVar4;
          }
          FMemory::Free(local_38.AllocatorInstance.Data);
          return pFVar4;
        }
        FVar7.Data = FVar7.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (uVar8 != 1) {
      if (uVar8 == 2) {
        this_00 = FRigModuleInstance::GetParentModule(this_00);
      }
      else {
        if (uVar8 != 3) goto LAB_14a52fcc3;
        this_00 = FRigModuleInstance::GetRootModule(this_00);
      }
      if (this_00 == (FRigModuleInstance *)0x0) goto LAB_14a52fcc3;
    }
    pFVar3 = FRigModuleInstance::FindPrimaryConnector(this_00);
    if (pFVar3 != (FRigConnectorElement *)0x0) {
      pFVar4 = URigHierarchy::FindMetadataForElement
                         (this->Hierarchy,(FRigBaseElement *)pFVar3,param_2,param_3);
      return pFVar4;
    }
  }
  return (FRigBaseMetadata *)0x0;
}

