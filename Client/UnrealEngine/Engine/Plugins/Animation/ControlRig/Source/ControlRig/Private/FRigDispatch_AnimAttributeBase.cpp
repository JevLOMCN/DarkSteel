// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a37ba50

UScriptStruct * __cdecl FRigDispatch_AnimAttributeBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_AnimAttributeBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_AnimAttributeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase,(UObject *)pUVar1,
                         L"RigDispatch_AnimAttributeBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_AnimAttributeBase.OuterSingleton;
}

// RegisterDependencyTypes_NoLock @ 14a37bad0

void __thiscall
FRigDispatch_AnimAttributeBase::RegisterDependencyTypes_NoLock
          (FRigDispatch_AnimAttributeBase *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  FRigVMRegistry_NoLock *pFVar2;
  UScriptStruct *pUVar3;
  FString *pFVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FName local_res18;
  FName local_res20;
  undefined1 local_78 [16];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FName local_58;
  UScriptStruct *local_50;
  FString local_48;
  
  FRigDispatchFactory::RegisterDependencyTypes_NoLock((FRigDispatchFactory *)this,param_1);
  pFVar2 = FRigVMRegistryHandle::operator->(param_1);
  pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = RigVMTypeUtils::GetWildCardCPPType();
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar5 = ::FName::FName(&local_res20,pwVar6);
      WildCardCPPTypeName.Either.PackedName = (ulonglong)*pFVar5 & 0xffffffff | 0x8000000000000000;
      WildCardCPPTypeName.Number = (*pFVar5).Number;
      WildCardCPPTypeName.LiteralType = None;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLazyName::Resolve(&WildCardCPPTypeName);
  local_58 = local_res18;
  local_50 = RigVMTypeUtils::GetWildCardCPPTypeObject();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_50);
  }
  (*pcVar1)(pFVar2,local_78,&local_58);
  FVar7 = UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance;
  lVar10 = (longlong)UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum;
  if (UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum == 0) {
    local_5c = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum,0,&local_68,
               UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum,&local_5c);
    memcpy(local_68.Data,FVar7.Data,lVar10 << 3);
    iVar8 = local_60;
  }
  pFVar5 = (FName *)(local_68.Data + (longlong)iVar8 * 8);
  FVar7.Data = local_68.Data;
  iVar9 = iVar8;
  while( true ) {
    if (iVar9 != iVar8) {
      `TCheckedPointerIterator<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res18);
    }
    if ((FName *)FVar7.Data == pFVar5) break;
    local_res18 = *(FName *)FVar7.Data;
    pUVar3 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18);
    if (pUVar3 != (UScriptStruct *)0x0) {
      pFVar2 = FRigVMRegistryHandle::operator->(param_1);
      pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
      pFVar4 = RigVMTypeUtils::GetUniqueStructTypeName(&local_48,pUVar3);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_58,pwVar6);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_50 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (*pcVar1)(pFVar2,local_78,&local_58,0);
    }
    FVar7.Data = FVar7.Data + 8;
    iVar9 = local_60;
  }
  if ((FName *)local_68.Data != (FName *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// GetArgumentInfos @ 14a37bd80

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_AnimAttributeBase::GetArgumentInfos
          (FRigDispatch_AnimAttributeBase *this,FRigVMRegistryHandle *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  FName local_res18;
  TRigVMTypeIndex local_38;
  
  plVar1 = &this->_padding_;
  if ((int)this->_padding_ == 0) {
    iVar5 = 0;
    if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    iVar4 = RigVMTypeUtils::TypeIndex::FName.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *plVar1;
    FLazyName::Resolve(&NameArgName);
    local_38.Name = FVar3;
    local_38.Index = iVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),local_res18,Input,
               &local_38);
    this->NameArgIndex = iVar5;
    iVar5 = (int)this->_padding_;
    if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    iVar4 = RigVMTypeUtils::TypeIndex::FName.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *plVar1;
    FLazyName::Resolve(&BoneNameArgName);
    local_38.Name = FVar3;
    local_38.Index = iVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),local_res18,Input,
               &local_38);
    this->BoneNameArgIndex = iVar5;
    iVar5 = (int)this->_padding_;
    if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    iVar4 = RigVMTypeUtils::TypeIndex::FName.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *plVar1;
    FLazyName::Resolve(&CachedBoneNameArgName);
    local_38.Name = FVar3;
    local_38.Index = iVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),local_res18,Hidden,
               &local_38);
    this->CachedBoneNameArgIndex = iVar5;
    iVar5 = (int)this->_padding_;
    if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    iVar4 = RigVMTypeUtils::TypeIndex::Int32.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::Int32.Name;
    lVar2 = *plVar1;
    FLazyName::Resolve(&CachedBoneIndexArgName);
    local_38.Name = FVar3;
    local_38.Index = iVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),local_res18,Hidden,
               &local_38);
    this->CachedBoneIndexArgIndex = iVar5;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)plVar1;
}

// IsSet @ 14a37bff0

bool __thiscall FRigDispatch_AnimAttributeBase::IsSet(FRigDispatch_AnimAttributeBase *this)

{
  return false;
}

// FRigDispatch_AnimAttributeBase @ 14a3b7df0

FRigDispatch_AnimAttributeBase * __thiscall
FRigDispatch_AnimAttributeBase::FRigDispatch_AnimAttributeBase(FRigDispatch_AnimAttributeBase *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION p_Var1;
  
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&___7FRigVMDispatchFactory__6B_;
  p_Var1 = (LPCRITICAL_SECTION)0x0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lpCriticalSection = ::operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    p_Var1 = lpCriticalSection;
  }
  (this->SpecialTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FRigDispatch_AnimAttributeBase__6B_;
  (this->SpecialTypes).ArrayNum = 0;
  (this->SpecialTypes).ArrayMax = 0;
  this->_padding_ = (longlong)p_Var1;
  this->NameArgIndex = -1;
  this->BoneNameArgIndex = -1;
  this->DefaultArgIndex = -1;
  this->ValueArgIndex = -1;
  this->FoundArgIndex = -1;
  this->SuccessArgIndex = -1;
  this->CachedBoneNameArgIndex = -1;
  this->CachedBoneIndexArgIndex = -1;
  return this;
}

// operator= @ 14a3bdb30

FRigDispatch_AnimAttributeBase * __thiscall
FRigDispatch_AnimAttributeBase::operator=
          (FRigDispatch_AnimAttributeBase *this,FRigDispatch_AnimAttributeBase *param_1)

{
  int *piVar1;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  ::FString::operator=((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  if (&this->_padding_ != &param_1->_padding_) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
               (ForElementType<FSetElementId> *)&param_1->_padding_,(int)param_1->_padding_);
    TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->_padding_,
                (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  this->NameArgIndex = param_1->NameArgIndex;
  pTVar2 = &this->SpecialTypes;
  this->BoneNameArgIndex = param_1->BoneNameArgIndex;
  this->DefaultArgIndex = param_1->DefaultArgIndex;
  this->ValueArgIndex = param_1->ValueArgIndex;
  this->FoundArgIndex = param_1->FoundArgIndex;
  this->SuccessArgIndex = param_1->SuccessArgIndex;
  this->CachedBoneNameArgIndex = param_1->CachedBoneNameArgIndex;
  this->CachedBoneIndexArgIndex = param_1->CachedBoneIndexArgIndex;
  if (pTVar2 != &param_1->SpecialTypes) {
    iVar3 = (param_1->SpecialTypes).ArrayNum;
    piVar1 = &(this->SpecialTypes).ArrayMax;
    _Src = (param_1->SpecialTypes).AllocatorInstance.Data;
    (this->SpecialTypes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  return this;
}

// GetValueTypeCategory @ 14a41bf30

TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> * __cdecl
FRigDispatch_AnimAttributeBase::GetValueTypeCategory(void)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8 = 0x704;
      local_resa = 10;
      TypeCategories.ArrayNum = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&TypeCategories.AllocatorInstance,3,&TypeCategories.ArrayMax);
      memcpy(TypeCategories.AllocatorInstance.Data,&local_res8,3);
      atexit(`FRigDispatch_AnimAttributeBase::GetValueTypeCategory'::__l2::
             _dynamic_atexit_destructor_for__TypeCategories__);
      _Init_thread_footer(&::_TSS0);
      return &TypeCategories;
    }
  }
  return &TypeCategories;
}

// IsTypeSupported @ 14a4285f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigDispatch_AnimAttributeBase::IsTypeSupported
          (FRigDispatch_AnimAttributeBase *this,TRigVMTypeIndex *param_1,
          FRigVMRegistryHandle *param_2)

{
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FRigVMRegistry_NoLock *pFVar3;
  UScriptStruct *pUVar4;
  FString *pFVar5;
  longlong lVar6;
  UClass *pUVar7;
  FName FVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_f8 [32];
  FName local_b8;
  UScriptStruct *local_b0;
  FString local_a8;
  undefined1 local_98 [12];
  FNameEntryId FStack_8c;
  FWeakObjectPtr FStack_88;
  FName FStack_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr FStack_70;
  undefined1 local_68 [12];
  undefined1 local_5c [20];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->SpecialTypes).ArrayNum == 0) {
    local_98._0_8_ = RigVMTypeUtils::TypeIndex::Float.Name;
    local_98._8_4_ = RigVMTypeUtils::TypeIndex::Float.Index;
    FStack_8c = RigVMTypeUtils::TypeIndex::Int32.Name.ComparisonIndex.Value;
    FStack_88.ObjectIndex = RigVMTypeUtils::TypeIndex::Int32.Name.Number;
    FStack_88.ObjectSerialNumber = RigVMTypeUtils::TypeIndex::Int32.Index;
    FStack_80 = RigVMTypeUtils::TypeIndex::FString.Name;
    local_78.ObjectIndex = RigVMTypeUtils::TypeIndex::FString.Index;
    pFVar3 = FRigVMRegistryHandle::operator->(param_2);
    pUVar4 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    pFVar5 = RigVMTypeUtils::GetUniqueStructTypeName(&local_a8,pUVar4);
    pwVar12 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_b8,pwVar9);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_b0 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,&local_78.ObjectSerialNumber,&local_b8);
    pFVar3 = FRigVMRegistryHandle::operator->(param_2);
    pUVar4 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    pFVar5 = RigVMTypeUtils::GetUniqueStructTypeName(&local_a8,pUVar4);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_b8,pwVar9);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_b0 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,local_68,&local_b8);
    pFVar3 = FRigVMRegistryHandle::operator->(param_2);
    pUVar4 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
    pFVar5 = RigVMTypeUtils::GetUniqueStructTypeName(&local_a8,pUVar4);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_b8,pwVar12);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_b0 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,local_5c,&local_b8);
    TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::CopyToEmpty<TRigVMTypeIndex,int>
              (&this->SpecialTypes,(TRigVMTypeIndex *)local_98,6,(this->SpecialTypes).ArrayMax);
  }
  pFVar10 = (this->SpecialTypes).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)(this->SpecialTypes).ArrayNum * 0xc;
  if (pFVar10 != pFVar1) {
    do {
      if (*(int *)(pFVar10 + 8) == param_1->Index) {
        return true;
      }
      pFVar10 = pFVar10 + 0xc;
    } while (pFVar10 != pFVar1);
  }
  pFVar3 = FRigVMRegistryHandle::operator->(param_2);
  local_b8 = param_1->Name;
  local_b0 = (UScriptStruct *)CONCAT44(local_b0._4_4_,param_1->Index);
  lVar6 = (**(code **)(pFVar3->_padding_ + 0xe8))(pFVar3,&local_b8);
  this_00 = (FObjectPtr_u_0 *)(lVar6 + 8);
  if (((*(longlong *)(lVar6 + 8) != 0) &&
      ((*(uint *)(*(longlong *)(lVar6 + 8) + 8) >> 0x1e & 1) == 0)) &&
     (this_00->Handle != (UObject *)0x0)) {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if ((bVar2) && (pUVar4 = (UScriptStruct *)this_00->Handle, pUVar4 != (UScriptStruct *)0x0)) {
      bVar2 = UObjectBaseUtility::IsA<UUserDefinedStruct>((UObjectBaseUtility *)pUVar4);
      if (bVar2) {
        return true;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FVar8 = (FName)FFloatAnimationAttribute::StaticStruct();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        local_98._0_4_ = 0;
        local_98._4_4_ = 0;
        local_b8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)local_98,(FObjectPtr)&local_b8);
        FVar8 = (FName)FIntegerAnimationAttribute::StaticStruct();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        local_98._8_4_ = 0;
        FStack_8c.Value = 0;
        local_b8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_98 + 8),(FObjectPtr)&local_b8);
        FVar8 = (FName)FStringAnimationAttribute::StaticStruct();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FStack_88.ObjectIndex = 0;
        FStack_88.ObjectSerialNumber = 0;
        local_b8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=(&FStack_88,(FObjectPtr)&local_b8);
        FVar8 = (FName)FTransformAnimationAttribute::StaticStruct();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FStack_80.ComparisonIndex.Value = 0;
        FStack_80.Number = 0;
        local_b8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_80,(FObjectPtr)&local_b8);
        FVar8 = (FName)FVectorAnimationAttribute::StaticStruct();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        local_78.ObjectIndex = 0;
        local_78.ObjectSerialNumber = 0;
        local_b8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_b8);
        FVar8 = (FName)FQuaternionAnimationAttribute::StaticStruct();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FStack_70.ObjectIndex = 0;
        FStack_70.ObjectSerialNumber = 0;
        local_b8 = FVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar8);
        }
        FWeakObjectPtr::operator=(&FStack_70,(FObjectPtr)&local_b8);
        SpecialAttributeTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        SpecialAttributeTypes.ArrayNum = 6;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,6,0,&SpecialAttributeTypes.AllocatorInstance,6,
                   &SpecialAttributeTypes.ArrayMax);
        FVar11 = SpecialAttributeTypes.AllocatorInstance;
        *(undefined8 *)SpecialAttributeTypes.AllocatorInstance.Data = local_98._0_8_;
        *(ulonglong *)(FVar11.Data + 8) = CONCAT44(FStack_8c.Value,local_98._8_4_);
        *(ulonglong *)(FVar11.Data + 0x10) =
             CONCAT44(FStack_88.ObjectSerialNumber,FStack_88.ObjectIndex);
        *(FName *)(FVar11.Data + 0x18) = FStack_80;
        *(FWeakObjectPtr *)(FVar11.Data + 0x20) = local_78;
        *(FWeakObjectPtr *)(FVar11.Data + 0x28) = FStack_70;
        atexit(`FRigDispatch_AnimAttributeBase::IsTypeSupported'::__l14::
               _dynamic_atexit_destructor_for__SpecialAttributeTypes__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar1 = SpecialAttributeTypes.AllocatorInstance.Data +
               (longlong)SpecialAttributeTypes.ArrayNum * 8;
      for (FVar11.Data = SpecialAttributeTypes.AllocatorInstance.Data; FVar11.Data != pFVar1;
          FVar11.Data = FVar11.Data + 8) {
        bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)FVar11.Data,pUVar4
                          );
        if (bVar2) {
          return false;
        }
      }
      pFVar1 = UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance.Data +
               (longlong)UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum * 8;
      for (pFVar10 = UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance.Data;
          pFVar10 != pFVar1; pFVar10 = pFVar10 + 8) {
        bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)pFVar10,pUVar4);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

