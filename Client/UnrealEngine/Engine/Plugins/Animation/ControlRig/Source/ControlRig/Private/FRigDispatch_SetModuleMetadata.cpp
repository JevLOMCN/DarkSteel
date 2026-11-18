// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 24

// StaticStruct @ 14a4f9da0

UScriptStruct * __cdecl FRigDispatch_SetModuleMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SetModuleMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SetModuleMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata,(UObject *)pUVar1,
                         L"RigDispatch_SetModuleMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_SetModuleMetadata.OuterSingleton;
}

// GetArgumentInfos @ 14a4f9e70

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SetModuleMetadata::GetArgumentInfos
          (FRigDispatch_SetModuleMetadata *this,FRigVMRegistryHandle *param_1)

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
    FLazyName::Resolve(&FRigDispatch_MetadataBase::ValueArgName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar7 * 0x50),FVar3,Input,pTVar11);
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
    FLazyName::Resolve(&FRigDispatch_MetadataBase::SuccessArgName);
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
    *(int *)&this->field_0xc4 = iVar7;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetDispatchFunctionImpl @ 14a4fa490

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_SetModuleMetadata::GetDispatchFunctionImpl
          (FRigDispatch_SetModuleMetadata *this,
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
    return SetModuleMetadataDispatch<bool,FRigBoolMetadata,0>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    return SetModuleMetadataDispatch<float,FRigFloatMetadata,2>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32.Index) {
    return SetModuleMetadataDispatch<int,FRigInt32Metadata,4>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FName.Index) {
    return SetModuleMetadataDispatch<FName,FRigNameMetadata,6>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_98,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetModuleMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_8c,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetModuleMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_80,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetModuleMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_74,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetModuleMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_68,false);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return SetModuleMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_5c,false);
  iVar1 = *(int *)&pTVar4->field_0x10;
  if (iVar1 == pTVar7->Index) {
    return SetModuleMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::BoolArray.Index) {
    return 
    SetModuleMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FloatArray.Index) {
    return 
    SetModuleMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::Int32Array.Index) {
    return 
    SetModuleMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>;
  }
  if (iVar1 == RigVMTypeUtils::TypeIndex::FNameArray.Index) {
    return 
    SetModuleMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TVector<double>,0>
                     (pFVar6,&local_50,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetModuleMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TRotator<double>,0>
                     (pFVar6,&local_44,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetModuleMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TQuat<double>,0>
                     (pFVar6,&local_38,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetModuleMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<UE::Math::TTransform<double>,0>
                     (pFVar6,&local_2c,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetModuleMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>(pFVar6,&local_20,true);
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    return 
    SetModuleMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
    ;
  }
  pFVar6 = FRigVMRegistryHandle::operator->(param_2);
  pTVar7 = FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FRigElementKey,0>(pFVar6,&local_14,true);
  pcVar8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
            *)0x0;
  if (*(int *)&pTVar4->field_0x10 == pTVar7->Index) {
    pcVar8 = 
    SetModuleMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
    ;
  }
  return pcVar8;
}

// SetModuleMetadataDispatch<int,FRigInt32Metadata,4> @ 14a508b00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::SetModuleMetadataDispatch<int,FRigInt32Metadata,4>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  int *piVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  uchar *puVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar6->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  piVar4 = (int *)pFVar6->Ptr;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar10 = FindOrAddMetadata(pFVar5,pFVar7,Int32,EVar2);
  if ((pFVar10 == (FRigBaseMetadata *)0x0) || (pFVar10->Type != Int32)) {
    *puVar9 = '\0';
  }
  else {
    if ((int)pFVar10[1]._padding_ != *piVar4) {
      *(int *)&pFVar10[1]._padding_ = *piVar4;
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar9 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<float,FRigFloatMetadata,2> @ 14a508c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::SetModuleMetadataDispatch<float,FRigFloatMetadata,2>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  float *pfVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  uchar *puVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar6->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pfVar4 = (float *)pFVar6->Ptr;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar10 = FindOrAddMetadata(pFVar5,pFVar7,Float,EVar2);
  if ((pFVar10 == (FRigBaseMetadata *)0x0) || (pFVar10->Type != Float)) {
    *puVar9 = '\0';
  }
  else {
    if (__real_322bcc77 <
        (float)((uint)(*(float *)&pFVar10[1]._padding_ - *pfVar4) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      *(float *)&pFVar10[1]._padding_ = *pfVar4;
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar9 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12> @ 14a508d40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<UE::Math::TQuat<double>,FRigQuatMetadata,12>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TQuat<double> *pTVar4;
  FName FVar5;
  double dVar6;
  FProperty *pFVar7;
  bool bVar8;
  FControlRigExecuteContext *pFVar9;
  FRigVMMemoryHandle *pFVar10;
  FName *pFVar11;
  ERigMetaDataNameSpace *pEVar12;
  uchar *puVar13;
  FRigBaseMetadata *pFVar14;
  
  pFVar3 = param_1->Factory;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar11 = (FName *)pFVar10->Ptr;
  }
  else {
    pFVar11 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar12 = pFVar10->Ptr;
  }
  else {
    pEVar12 = FRigVMPropertyPath::GetData_Internal
                        (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  EVar2 = *pEVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TQuat<double> *)pFVar10->Ptr;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)
                                        &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4
                                       ));
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar14 = FindOrAddMetadata(pFVar9,pFVar11,Quat,EVar2);
  if ((pFVar14 == (FRigBaseMetadata *)0x0) || (pFVar14->Type != Quat)) {
    *puVar13 = '\0';
  }
  else {
    bVar8 = FRigDispatch_MetadataBase::Equals<UE::Math::TQuat<double>_>
                      ((TQuat<double> *)(pFVar14 + 1),pTVar4);
    if (!bVar8) {
      FVar5 = (FName)pTVar4->Y;
      dVar6 = pTVar4->Z;
      pFVar7 = (FProperty *)pTVar4->W;
      ((TQuat<double> *)(pFVar14 + 1))->X = pTVar4->X;
      pFVar14[1].Name = FVar5;
      *(double *)&pFVar14[1].Type = dVar6;
      pFVar14[1].ValueProperty = pFVar7;
      puVar1 = &pFVar9->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar13 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10> @ 14a508e70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<UE::Math::TRotator<double>,FRigRotatorMetadata,10>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  double dVar2;
  ERigMetaDataNameSpace EVar3;
  FRigVMDispatchFactory *pFVar4;
  TRotator<double> *pTVar5;
  FName FVar6;
  bool bVar7;
  FControlRigExecuteContext *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  FName *pFVar10;
  ERigMetaDataNameSpace *pEVar11;
  uchar *puVar12;
  FRigBaseMetadata *pFVar13;
  
  pFVar4 = param_1->Factory;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar4[1]._padding_ + 4));
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar10 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar4[1].FactoryIndex);
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar11 = pFVar9->Ptr;
  }
  else {
    pEVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  EVar3 = *pEVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar4[1].field_0x14);
  pTVar5 = (TRotator<double> *)pFVar9->Ptr;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar4[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar13 = FindOrAddMetadata(pFVar8,pFVar10,Rotator,EVar3);
  if ((pFVar13 == (FRigBaseMetadata *)0x0) || (pFVar13->Type != Rotator)) {
    *puVar12 = '\0';
  }
  else {
    bVar7 = FRigDispatch_MetadataBase::Equals<UE::Math::TRotator<double>_>
                      ((TRotator<double> *)(pFVar13 + 1),pTVar5);
    if (!bVar7) {
      FVar6 = (FName)pTVar5->Yaw;
      dVar2 = pTVar5->Roll;
      pFVar13[1]._padding_ = (longlong)pTVar5->Pitch;
      pFVar13[1].Name = FVar6;
      *(double *)&pFVar13[1].Type = dVar2;
      puVar1 = &pFVar8->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar12 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14> @ 14a508fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<UE::Math::TTransform<double>,FRigTransformMetadata,14>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TTransform<double> *pTVar4;
  FName FVar5;
  double dVar6;
  FProperty *pFVar7;
  double dVar8;
  FName FVar9;
  double dVar10;
  FProperty *pFVar11;
  double dVar12;
  FName FVar13;
  double dVar14;
  FProperty *pFVar15;
  bool bVar16;
  FControlRigExecuteContext *pFVar17;
  FRigVMMemoryHandle *pFVar18;
  FName *pFVar19;
  ERigMetaDataNameSpace *pEVar20;
  uchar *puVar21;
  FRigBaseMetadata *pFVar22;
  
  pFVar3 = param_1->Factory;
  pFVar17 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar18 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar18->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar19 = (FName *)pFVar18->Ptr;
  }
  else {
    pFVar19 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar18->PropertyPath,pFVar18->Ptr,pFVar18->Property);
  }
  pFVar18 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar18->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar20 = pFVar18->Ptr;
  }
  else {
    pEVar20 = FRigVMPropertyPath::GetData_Internal
                        (pFVar18->PropertyPath,pFVar18->Ptr,pFVar18->Property);
  }
  EVar2 = *pEVar20;
  pFVar18 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TTransform<double> *)pFVar18->Ptr;
  pFVar18 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)
                                        &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4
                                       ));
  puVar21 = FRigVMMemoryHandle::GetData_Internal(pFVar18,false,-1);
  pFVar22 = FindOrAddMetadata(pFVar17,pFVar19,Transform,EVar2);
  if ((pFVar22 == (FRigBaseMetadata *)0x0) || (pFVar22->Type != Transform)) {
    *puVar21 = '\0';
  }
  else {
    bVar16 = FRigDispatch_MetadataBase::Equals<UE::Math::TTransform<double>_>
                       ((TTransform<double> *)(pFVar22 + 1),pTVar4);
    if (!bVar16) {
      FVar5 = *(FName *)((pTVar4->Rotation).XY.m128d_f64 + 1);
      dVar6 = (pTVar4->Rotation).ZW.m128d_f64[0];
      pFVar7 = (FProperty *)(pTVar4->Rotation).ZW.m128d_f64[1];
      dVar8 = (pTVar4->Translation).XY.m128d_f64[0];
      FVar9 = *(FName *)((pTVar4->Translation).XY.m128d_f64 + 1);
      dVar10 = (pTVar4->Translation).ZW.m128d_f64[0];
      pFVar11 = (FProperty *)(pTVar4->Translation).ZW.m128d_f64[1];
      dVar12 = (pTVar4->Scale3D).XY.m128d_f64[0];
      FVar13 = *(FName *)((pTVar4->Scale3D).XY.m128d_f64 + 1);
      dVar14 = (pTVar4->Scale3D).ZW.m128d_f64[0];
      pFVar15 = (FProperty *)(pTVar4->Scale3D).ZW.m128d_f64[1];
      (((TTransform<double> *)(pFVar22 + 1))->Rotation).XY.m128d_f64[0] =
           (pTVar4->Rotation).XY.m128d_f64[0];
      pFVar22[1].Name = FVar5;
      *(double *)&pFVar22[1].Type = dVar6;
      pFVar22[1].ValueProperty = pFVar7;
      pFVar22[2]._padding_ = (longlong)dVar8;
      pFVar22[2].Name = FVar9;
      *(double *)&pFVar22[2].Type = dVar10;
      pFVar22[2].ValueProperty = pFVar11;
      pFVar22[3]._padding_ = (longlong)dVar12;
      pFVar22[3].Name = FVar13;
      *(double *)&pFVar22[3].Type = dVar14;
      pFVar22[3].ValueProperty = pFVar15;
      puVar1 = &pFVar17->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar21 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8> @ 14a5090f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<UE::Math::TVector<double>,FRigVectorMetadata,8>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  double dVar2;
  ERigMetaDataNameSpace EVar3;
  FRigVMDispatchFactory *pFVar4;
  TVector<double> *pTVar5;
  FName FVar6;
  bool bVar7;
  FControlRigExecuteContext *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  FName *pFVar10;
  ERigMetaDataNameSpace *pEVar11;
  uchar *puVar12;
  FRigBaseMetadata *pFVar13;
  
  pFVar4 = param_1->Factory;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar4[1]._padding_ + 4));
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar10 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar4[1].FactoryIndex);
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar11 = pFVar9->Ptr;
  }
  else {
    pEVar11 = FRigVMPropertyPath::GetData_Internal
                        (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  EVar3 = *pEVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar4[1].field_0x14);
  pTVar5 = (TVector<double> *)pFVar9->Ptr;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar4[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar13 = FindOrAddMetadata(pFVar8,pFVar10,Vector,EVar3);
  if ((pFVar13 == (FRigBaseMetadata *)0x0) || (pFVar13->Type != Vector)) {
    *puVar12 = '\0';
  }
  else {
    bVar7 = FRigDispatch_MetadataBase::Equals<UE::Math::TVector<double>_>
                      ((TVector<double> *)(pFVar13 + 1),pTVar5);
    if (!bVar7) {
      FVar6 = (FName)(pTVar5->field0_0x0)._s_0.Y;
      dVar2 = (pTVar5->field0_0x0)._s_0.Z;
      (((TVector<double>_u_0 *)&pFVar13[1]._padding_)->_s_0).X = (pTVar5->field0_0x0)._s_0.X;
      pFVar13[1].Name = FVar6;
      *(double *)&pFVar13[1].Type = dVar2;
      puVar1 = &pFVar8->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar12 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16> @ 14a509220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::SetModuleMetadataDispatch<FLinearColor,FRigLinearColorMetadata,16>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  FLinearColor *pFVar4;
  FName FVar5;
  bool bVar6;
  FControlRigExecuteContext *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  FName *pFVar9;
  ERigMetaDataNameSpace *pEVar10;
  uchar *puVar11;
  FRigBaseMetadata *pFVar12;
  
  pFVar3 = param_1->Factory;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar9 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar10 = pFVar8->Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  EVar2 = *pEVar10;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pFVar4 = (FLinearColor *)pFVar8->Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar12 = FindOrAddMetadata(pFVar7,pFVar9,LinearColor,EVar2);
  if ((pFVar12 == (FRigBaseMetadata *)0x0) || (pFVar12->Type != LinearColor)) {
    *puVar11 = '\0';
  }
  else {
    bVar6 = FRigDispatch_MetadataBase::Equals<FLinearColor>((FLinearColor *)(pFVar12 + 1),pFVar4);
    if (!bVar6) {
      FVar5 = *(FName *)((longlong)&pFVar4->field0_0x0 + 8);
      *(undefined8 *)&pFVar12[1]._padding_ = *(undefined8 *)&pFVar4->field0_0x0;
      pFVar12[1].Name = FVar5;
      puVar1 = &pFVar7->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar11 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18> @ 14a509340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::SetModuleMetadataDispatch<FRigElementKey,FRigElementKeyMetadata,18>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  uint uVar3;
  FRigVMDispatchFactory *pFVar4;
  longlong *plVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar4 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar4[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar4[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar4[1].field_0x14);
  plVar5 = (longlong *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar4[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,RigElementKey,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != RigElementKey)) {
    *puVar10 = '\0';
  }
  else {
    if ((*(longlong *)((longlong)&pFVar11[1]._padding_ + 4) != *(longlong *)((longlong)plVar5 + 4))
       || ((uchar)pFVar11[1]._padding_ != (uchar)*plVar5)) {
      uVar3 = *(uint *)(plVar5 + 1);
      pFVar11[1]._padding_ = *plVar5;
      pFVar11[1].Name.ComparisonIndex.Value = uVar3;
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5> @ 14a509470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<int,TSizedDefaultAllocator<32>_>,FRigInt32ArrayMetadata,5>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,Int32Array,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != Int32Array)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<TArray<int,TSizedDefaultAllocator<32>_>_>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3> @ 14a5095a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<float,TSizedDefaultAllocator<32>_>,FRigFloatArrayMetadata,3>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,FloatArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != FloatArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<TArray<float,TSizedDefaultAllocator<32>_>_>
                      ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13> @ 14a5096d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,FRigQuatArrayMetadata,13>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,QuatArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != QuatArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TQuat<double>_>
                      ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),
                       pTVar4);
    if (!bVar5) {
      TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4
                );
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11> @ 14a509800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,FRigRotatorArrayMetadata,11>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,RotatorArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != RotatorArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TRotator<double>_>
                      ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
                       (pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),
                 pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15> @ 14a509930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FRigTransformArrayMetadata,15>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,TransformArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != TransformArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TTransform<double>_>
                      ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                       (pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),
                 pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9> @ 14a509a60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,FRigVectorArrayMetadata,9>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,VectorArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != VectorArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::
            Equals<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                      ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                       (pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),
                 pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17> @ 14a509b90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,FRigLinearColorArrayMetadata,17>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,LinearColorArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != LinearColorArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                      ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19> @ 14a509cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FRigElementKeyArrayMetadata,19>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,RigElementKeyArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != RigElementKeyArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                      ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7> @ 14a509df0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<FName,TSizedDefaultAllocator<32>_>,FRigNameArrayMetadata,7>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,NameArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != NameArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<TArray<FName,TSizedDefaultAllocator<32>_>_>
                      ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1> @ 14a509f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::
SetModuleMetadataDispatch<TArray<bool,TSizedDefaultAllocator<32>_>,FRigBoolArrayMetadata,1>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FName *pFVar8;
  ERigMetaDataNameSpace *pEVar9;
  uchar *puVar10;
  FRigBaseMetadata *pFVar11;
  
  pFVar3 = param_1->Factory;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar7->Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  EVar2 = *pEVar9;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  pTVar4 = (TArray<bool,TSizedDefaultAllocator<32>_> *)pFVar7->Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar11 = FindOrAddMetadata(pFVar6,pFVar8,BoolArray,EVar2);
  if ((pFVar11 == (FRigBaseMetadata *)0x0) || (pFVar11->Type != BoolArray)) {
    *puVar10 = '\0';
  }
  else {
    bVar5 = FRigDispatch_MetadataBase::Equals<TArray<bool,TSizedDefaultAllocator<32>_>_>
                      ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
    if (!bVar5) {
      TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),pTVar4);
      puVar1 = &pFVar6->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar10 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<FName,FRigNameMetadata,6> @ 14a50a050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::SetModuleMetadataDispatch<FName,FRigNameMetadata,6>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  longlong *plVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  uchar *puVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar6->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  plVar4 = (longlong *)pFVar6->Ptr;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar10 = FindOrAddMetadata(pFVar5,pFVar7,Name,EVar2);
  if ((pFVar10 == (FRigBaseMetadata *)0x0) || (pFVar10->Type != Name)) {
    *puVar9 = '\0';
  }
  else {
    if (((int)pFVar10[1]._padding_ != (int)*plVar4) ||
       (*(int *)((longlong)&pFVar10[1]._padding_ + 4) != *(int *)((longlong)plVar4 + 4))) {
      pFVar10[1]._padding_ = *plVar4;
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar9 = '\x01';
  }
  return;
}

// SetModuleMetadataDispatch<bool,FRigBoolMetadata,0> @ 14a50a170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetModuleMetadata::SetModuleMetadataDispatch<bool,FRigBoolMetadata,0>
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint *puVar1;
  ERigMetaDataNameSpace EVar2;
  FRigVMDispatchFactory *pFVar3;
  uchar *puVar4;
  FControlRigExecuteContext *pFVar5;
  FRigVMMemoryHandle *pFVar6;
  FName *pFVar7;
  ERigMetaDataNameSpace *pEVar8;
  uchar *puVar9;
  FRigBaseMetadata *pFVar10;
  
  pFVar3 = param_1->Factory;
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)&pFVar3[1]._padding_ + 4));
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar6->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar3[1].FactoryIndex);
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar6->Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property)
    ;
  }
  EVar2 = *pEVar8;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar3[1].field_0x14);
  puVar4 = pFVar6->Ptr;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar3[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  pFVar10 = FindOrAddMetadata(pFVar5,pFVar7,Bool,EVar2);
  if ((pFVar10 == (FRigBaseMetadata *)0x0) || (pFVar10->Type != Bool)) {
    *puVar9 = '\0';
  }
  else {
    if ((uchar)pFVar10[1]._padding_ != *puVar4) {
      *(uchar *)&pFVar10[1]._padding_ = *puVar4;
      puVar1 = &pFVar5->Hierarchy->MetadataVersion;
      *puVar1 = *puVar1 + 1;
    }
    *puVar9 = '\x01';
  }
  return;
}

// FindOrAddMetadata @ 14a52fe60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseMetadata * __cdecl
FRigDispatch_SetModuleMetadata::FindOrAddMetadata
          (FControlRigExecuteContext *param_1,FName *param_2,ERigMetadataType param_3,
          ERigMetaDataNameSpace param_4)

{
  FScriptContainerElement *pFVar1;
  FRigBaseElement *pFVar2;
  FRigModuleInstance *this;
  FRigConnectorElement *pFVar3;
  FRigBaseMetadata *pFVar4;
  int iVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  FName local_res8;
  TArray<FRigConnectorElement_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar8 = (uint)param_4;
  this = param_1->RigModuleInstance;
  if (this == (FRigModuleInstance *)0x0) {
LAB_14a52feed:
    if (1 < (param_1->RigModulePrefix).Data.ArrayNum) {
      URigHierarchy::GetElementsOfType<FRigConnectorElement>(param_1->Hierarchy,&local_38,false);
      iVar5 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar5 * 8;
      uVar6 = local_38._8_8_;
      FVar7.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar5) {
          `TCheckedPointerIterator<FRigConnectorElement_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
          uVar6 = local_38._8_8_;
        }
        if (FVar7.Data == pFVar1) break;
        pFVar2 = *(FRigBaseElement **)FVar7.Data;
        if (pFVar2[1].Key.Type == None) {
          FControlRigExecuteContext::AdaptMetadataName
                    (param_1,(ERigMetaDataNameSpace)&local_res8,(FName *)(ulonglong)uVar8);
          pFVar4 = URigHierarchy::GetMetadataForElement
                             (param_1->Hierarchy,pFVar2,&local_res8,param_3,true);
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
        this = FRigModuleInstance::GetParentModule(this);
      }
      else {
        if (uVar8 != 3) goto LAB_14a52feed;
        this = FRigModuleInstance::GetRootModule(this);
      }
      if (this == (FRigModuleInstance *)0x0) goto LAB_14a52feed;
    }
    pFVar3 = FRigModuleInstance::FindPrimaryConnector(this);
    if (pFVar3 != (FRigConnectorElement *)0x0) {
      pFVar4 = URigHierarchy::GetMetadataForElement
                         (param_1->Hierarchy,(FRigBaseElement *)pFVar3,param_2,param_3,true);
      return pFVar4;
    }
  }
  return (FRigBaseMetadata *)0x0;
}

