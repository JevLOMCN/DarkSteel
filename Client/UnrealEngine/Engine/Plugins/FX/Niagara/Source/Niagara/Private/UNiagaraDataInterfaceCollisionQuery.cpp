// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 24

// StaticClass @ 14907e190

UClass * __cdecl UNiagaraDataInterfaceCollisionQuery::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCollisionQuery",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCollisionQuery>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCollisionQuery>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.InnerSingleton;
}

// UNiagaraDataInterfaceCollisionQuery @ 1490b41a0

UNiagaraDataInterfaceCollisionQuery * __thiscall
UNiagaraDataInterfaceCollisionQuery::UNiagaraDataInterfaceCollisionQuery
          (UNiagaraDataInterfaceCollisionQuery *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCollisionQuery__6B_;
  return this;
}

// UNiagaraDataInterfaceCollisionQuery @ 1490b41d0

UNiagaraDataInterfaceCollisionQuery * __thiscall
UNiagaraDataInterfaceCollisionQuery::UNiagaraDataInterfaceCollisionQuery
          (UNiagaraDataInterfaceCollisionQuery *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  FObjectInitializer *pFVar2;
  UEnum *pUVar3;
  undefined8 *puVar4;
  
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCollisionQuery__6B_;
  this->_padding_ = 0;
  pUVar3 = StaticEnum<enum_ECollisionChannel>();
  this->TraceChannelEnum = pUVar3;
  puVar4 = ::operator_new(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *puVar4 = &___7FNiagaraDataIntefaceProxyCollisionQuery__6B_;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceCollisionQuery @ 1490b90d0

void __thiscall
UNiagaraDataInterfaceCollisionQuery::~UNiagaraDataInterfaceCollisionQuery
          (UNiagaraDataInterfaceCollisionQuery *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCollisionQuery__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 1490d0dc0

void __thiscall
UNiagaraDataInterfaceCollisionQuery::BuildShaderParameters
          (UNiagaraDataInterfaceCollisionQuery *this,FNiagaraShaderParametersBuilder *param_1)

{
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FShaderParametersMetadata *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  pFVar3 = TShaderParameterStructTypeInfo<FGlobalDistanceFieldParameters2>::GetStructMetadata();
  pTVar1 = param_1->StructIncludeInfos;
  iVar2 = pTVar1->ArrayNum;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (pTVar1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataInterfaceStructIncludeInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar5) break;
    if (*(FShaderParametersMetadata **)pFVar4 == pFVar3) {
      return;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  pTVar1 = param_1->StructIncludeInfos;
  iVar2 = pTVar1->ArrayNum;
  if (iVar2 == pTVar1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar2 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  DefaultConstructItems<FNiagaraDataInterfaceStructIncludeInfo,int>(pFVar4,1);
  *(FShaderParametersMetadata **)pFVar4 = pFVar3;
  *(uint *)(pFVar4 + 8) = param_1->MetadataBuilder->NextMemberOffset + 0xf & 0xfffffff0;
  FShaderParametersMetadataBuilder::AddIncludedStruct(param_1->MetadataBuilder,pFVar3,Float);
  return;
}

// CanExecuteOnTarget @ 1490d2a90

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::CanExecuteOnTarget
          (UNiagaraDataInterfaceCollisionQuery *this,ENiagaraSimTarget param_1)

{
  return true;
}

// DestroyPerInstanceData @ 1490ec150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCollisionQuery::DestroyPerInstanceData
          (UNiagaraDataInterfaceCollisionQuery *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  FNiagaraDICollisionQueryBatch::~FNiagaraDICollisionQueryBatch
            ((FNiagaraDICollisionQueryBatch *)((longlong)param_1 + 8));
  return;
}

// GetAssetTagsForContext @ 149102f10

void __thiscall
UNiagaraDataInterfaceCollisionQuery::GetAssetTagsForContext
          (UNiagaraDataInterfaceCollisionQuery *this,UObject *param_1,FGuid *param_2,
          TArray<UNiagaraDataInterface_const_*,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
          *param_4,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FName local_res8;
  FName local_res18;
  FName *local_48;
  FString local_40;
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pFVar5 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    iVar7 = 0;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    local_res18 = (FName)param_2;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UNiagaraDataInterface_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res18);
      }
      if (pFVar5 == pFVar1) break;
      if (*(longlong *)pFVar5 != 0) {
        lVar4 = *(longlong *)(*(longlong *)pFVar5 + 0x10);
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          iVar7 = iVar7 + 1;
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    if ((iVar7 != 0) ||
       ((param_1 != (UObject *)0x0 && ((*(uint *)&param_1->field_0x8 >> 4 & 1) != 0)))) {
      local_res18 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_res18,&local_40);
      ::FString::ReplaceInline(&local_40,L"NiagaraDataInterface",L"",IgnoreCase);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_40.Data.ArrayNum != 0) {
        FVar6.Data = local_40.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
      local_48 = &local_res8;
      TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_&&>_>
                ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                  *)param_4,(TKeyInitializer<FName_&&> *)&local_res18,(bool *)&local_48);
      *(int *)(*(longlong *)param_4 + 8 + (longlong)(int)local_res18.ComparisonIndex.Value * 0x14) =
           iVar7;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 149109ad0

UClass * __cdecl UNiagaraDataInterfaceCollisionQuery::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCollisionQuery",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCollisionQuery>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCollisionQuery>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.InnerSingleton;
}

// GetVMExternalFunction @ 14910e440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCollisionQuery::GetVMExternalFunction
          (UNiagaraDataInterfaceCollisionQuery *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [8];
  FDelegateAllocation local_20;
  
  if (param_1->Name == NDICollisionQueryLocal::SyncTraceName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCollisionQuery_PerformQuerySyncCPUBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (param_1->Name == NDICollisionQueryLocal::AsyncTraceName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCollisionQuery_PerformQueryAsyncCPUBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,(FString *)local_28);
    if (this == (UNiagaraDataInterfaceCollisionQuery *)0x0) {
      ::FString::FString((FString *)&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this,(FString *)&local_48,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((atomic<unsigned___int64>)local_28 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  return;
}

// HasPostSimulateTick @ 149111d50

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::HasPostSimulateTick(UNiagaraDataInterfaceCollisionQuery *this)

{
  return true;
}

// HasPreSimulateTick @ 149111d90

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::HasPreSimulateTick(UNiagaraDataInterfaceCollisionQuery *this)

{
  return true;
}

// InitPerInstanceData @ 149116bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::InitPerInstanceData
          (UNiagaraDataInterfaceCollisionQuery *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  UWorld *pUVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceCollisionQuery::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_NiagaraCollision>
  FVar3;
  FName local_res10;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(TStatIdData **)((longlong)param_1 + 0x70) = &TStatId::TStatId_NAME_None;
  *(FNiagaraSystemInstance **)param_1 = param_2;
  if (param_2 != (FNiagaraSystemInstance *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_NiagaraCollision =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceCollisionQuery::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_NiagaraCollision>
            )0x0;
      pFVar2 = ::FName::FName(&local_res10,"NiagaraCollision");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_NiagaraCollision,*pFVar2,L"NiagaraCollision",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar3 = StatPtr_NiagaraCollision;
    if (StatPtr_NiagaraCollision ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceCollisionQuery::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_NiagaraCollision>
         )0x0) {
      pFVar2 = ::FName::FName(&local_res10,"NiagaraCollision");
      FVar3 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceCollisionQuery::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_NiagaraCollision>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_NiagaraCollision,*pFVar2,
                           L"NiagaraCollision","STATGROUP_CollisionTags","STATCAT_Advanced",
                           L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    pUVar1 = param_2->World;
    *(ulong64 *)((longlong)param_1 + 0x28) = param_2->ID;
    *(UWorld **)((longlong)param_1 + 0x68) = pUVar1;
    *(FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UNiagaraDataInterfaceCollisionQuery::InitPerInstanceData(void_*,FNiagaraSystemInstance_*)_::_5_::<lambda_1>::operator()(void)const_::_2_::FStat_NiagaraCollision>
      *)((longlong)param_1 + 0x70) = FVar3;
    DestructItems<FNiagaraCollisionTrace,int>
              (*(FNiagaraCollisionTrace **)((longlong)param_1 + 0x30),
               *(int *)((longlong)param_1 + 0x38));
    *(undefined4 *)((longlong)param_1 + 0x38) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,0,(ForAnyElementType *)((longlong)param_1 + 0x30),0,
                 (int *)((longlong)param_1 + 0x3c));
    }
    DestructItems<FNiagaraCollisionTrace,int>
              (*(FNiagaraCollisionTrace **)((longlong)param_1 + 0x40),
               *(int *)((longlong)param_1 + 0x48));
    *(undefined4 *)((longlong)param_1 + 0x48) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,0,(ForAnyElementType *)((longlong)param_1 + 0x40),0,
                 (int *)((longlong)param_1 + 0x4c));
    }
    *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  }
  return true;
}

// PerInstanceDataSize @ 14911ae10

int __thiscall
UNiagaraDataInterfaceCollisionQuery::PerInstanceDataSize(UNiagaraDataInterfaceCollisionQuery *this)

{
  return 0x78;
}

// PerInstanceTick @ 14911b8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::PerInstanceTick
          (UNiagaraDataInterfaceCollisionQuery *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  FNiagaraDICollisionQueryBatch::CollectResults
            ((FNiagaraDICollisionQueryBatch *)((longlong)param_1 + 8));
  return false;
}

// PerInstanceTickPostSimulate @ 14911d400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceCollisionQuery *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  FNiagaraDICollisionQueryBatch *this_00;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = (FNiagaraDICollisionQueryBatch *)((longlong)param_1 + 8);
  FNiagaraDICollisionQueryBatch::DispatchQueries(this_00);
  uVar2 = *(uint *)((longlong)param_1 + 0x60);
  uVar3 = this_00->CollisionTraces[uVar2].ArrayNum;
  if (-1 < (int)uVar3) {
    DestructItems<FNiagaraCollisionTrace,int>
              ((FNiagaraCollisionTrace *)this_00->CollisionTraces[uVar2].AllocatorInstance.Data,
               this_00->CollisionTraces[uVar2].ArrayNum);
    piVar1 = &this_00->CollisionTraces[uVar2].ArrayMax;
    this_00->CollisionTraces[uVar2].ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,uVar3,&this_00->CollisionTraces[uVar2].AllocatorInstance,0,piVar1);
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// PerformQueryAsyncCPU @ 14911d490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCollisionQuery::PerformQueryAsyncCPU
          (UNiagaraDataInterfaceCollisionQuery *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  TVector<double> *pTVar22;
  FNiagaraPosition *pFVar23;
  float *pfVar24;
  int local_res20;
  int local_3c0 [2];
  float *local_3b8;
  int local_3b0 [2];
  float *local_3a8;
  int local_3a0 [2];
  float *local_398;
  int local_390 [2];
  float *local_388;
  int local_380 [2];
  float local_378;
  float *local_370;
  int local_368 [2];
  FNDIOutputParam<FNiagaraPosition> local_360;
  FNDIOutputParam<UE::Math::TVector<float>_> local_330;
  float *local_300;
  float *local_2f8;
  int local_2f0 [2];
  float *local_2e8;
  float *local_2e0;
  int local_2d8 [2];
  float *local_2d0;
  float *local_2c8;
  int local_2c0 [2];
  float *local_2b8;
  float *local_2b0;
  int local_2a8 [4];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  FUserPtrHandler<CQDIPerInstanceData> local_268;
  FNiagaraLWCConverter local_258;
  FNDIInputParam<FNiagaraPosition> local_238;
  FNDIInputParam<FNiagaraPosition> local_1e8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  float local_f0;
  float local_ec;
  float local_e8;
  char local_e4;
  FNiagaraPosition local_d8;
  TVector<double> local_c8;
  TVector<double> local_b0 [5];
  
  VectorVM::FUserPtrHandler<CQDIPerInstanceData>::FUserPtrHandler<CQDIPerInstanceData>
            (&local_268,param_1);
  local_2a8[0] = 0;
  local_2b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2a8);
  local_2b8 = local_2b8 + local_2a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2b0 = local_2b8;
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_238,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_1e8,param_1);
  local_2f0[0] = 0;
  local_300 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2f0);
  local_2d8[0] = 0;
  local_300 = local_300 + local_2f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_2f8 = local_300;
  local_2e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2d8);
  local_2c0[0] = 0;
  local_2e8 = local_2e8 + local_2d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2e0 = local_2e8;
  local_2d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2c0);
  local_368[0] = 0;
  local_2d0 = local_2d0 + local_2c0[0] * param_1->PerInstanceFnInstanceIdx;
  local_2c8 = local_2d0;
  local_370 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_368);
  local_3c0[0] = 0;
  local_370 = local_370 + local_368[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3c0);
  local_3b0[0] = 0;
  pfVar17 = pfVar17 + local_3c0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3b0);
  pfVar18 = pfVar18 + local_3b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_3b8 = pfVar18;
  FNDIOutputParam<FNiagaraPosition>::FNDIOutputParam<FNiagaraPosition>(&local_360,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_330,param_1);
  local_3a0[0] = 0;
  pfVar19 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3a0);
  local_390[0] = 0;
  pfVar19 = pfVar19 + local_3a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_3a8 = pfVar19;
  pfVar20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_390);
  local_380[0] = 0;
  pfVar20 = pfVar20 + local_390[0] * param_1->PerInstanceFnInstanceIdx;
  local_398 = pfVar20;
  pfVar21 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_380);
  pfVar21 = pfVar21 + local_380[0] * param_1->PerInstanceFnInstanceIdx;
  local_388 = pfVar21;
  FNiagaraSystemInstance::GetLWCConverter((local_268.Ptr)->SystemInstance,&local_258,false);
  EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  local_res20 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *local_238.Z.InputPtr;
      fVar2 = *local_238.X.InputPtr;
      fVar3 = *local_238.Y.InputPtr;
      local_238.Z.InputPtr = local_238.Z.InputPtr + local_238.Z.AdvanceOffset;
      local_238.Y.InputPtr = local_238.Y.InputPtr + local_238.Y.AdvanceOffset;
      fVar4 = *local_1e8.Z.InputPtr;
      fVar5 = *local_1e8.Y.InputPtr;
      local_238.X.InputPtr = local_238.X.InputPtr + local_238.X.AdvanceOffset;
      fVar6 = *local_1e8.X.InputPtr;
      local_1e8.Z.InputPtr = local_1e8.Z.InputPtr + local_1e8.Z.AdvanceOffset;
      local_1e8.Y.InputPtr = local_1e8.Y.InputPtr + local_1e8.Y.AdvanceOffset;
      local_1e8.X.InputPtr = local_1e8.X.InputPtr + local_1e8.X.AdvanceOffset;
      local_378 = *local_300;
      fVar8 = *local_2d0;
      fVar9 = *local_2e8;
      local_2d0 = local_2d0 + local_2c0[0];
      local_300 = local_300 + local_2f0[0];
      local_2e8 = local_2e8 + local_2d8[0];
      iVar16 = _finite((double)fVar2);
      if ((((iVar16 == 0) || (iVar16 = _finite((double)fVar3), iVar16 == 0)) ||
          (iVar16 = _finite((double)fVar1), iVar16 == 0)) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3084468632349048198>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCollisionQuery.cpp"
                              ,0x27a,"!TraceStart.ContainsNaN()"), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar16 = _finite((double)fVar6);
      if ((((iVar16 == 0) || (iVar16 = _finite((double)fVar5), iVar16 == 0)) ||
          (iVar16 = _finite((double)fVar4), iVar16 == 0)) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3084468632349048197>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCollisionQuery.cpp"
                              ,0x27b,"!TraceEnd.ContainsNaN()"), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (fVar9 == 0.0) {
        local_298._4_4_ = fVar5;
        local_298._0_4_ = fVar6;
        local_298._8_4_ = fVar4;
        pTVar22 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&local_258,&local_c8,(FNiagaraPosition *)local_298);
        local_288._4_4_ = fVar3;
        local_288._0_4_ = fVar2;
        dVar11 = (pTVar22->field0_0x0)._s_0.X;
        dVar12 = (pTVar22->field0_0x0)._s_0.Y;
        dVar7 = (pTVar22->field0_0x0)._s_0.Z;
        local_288._8_4_ = fVar1;
        pTVar22 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&local_258,local_b0,(FNiagaraPosition *)local_288);
        local_178._s_0.X = (pTVar22->field0_0x0)._s_0.X;
        local_178._s_0.Y = (pTVar22->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
        local_198._s_0.X = dVar11;
        local_198._s_0.Y = dVar12;
        local_198._s_0.Z = dVar7;
        iVar16 = FNiagaraDICollisionQueryBatch::SubmitQuery
                           (&(local_268.Ptr)->CollisionBatch,(TVector<double> *)&local_178._s_0,
                            (TVector<double> *)&local_198._s_0,(ECollisionChannel)local_378,
                            fVar8 != 0.0);
      }
      else {
        iVar16 = -1;
      }
      *local_370 = (float)(iVar16 + 1);
      local_370 = local_370 + local_368[0];
      pfVar24 = local_2b8 + local_2a8[0];
      fVar1 = *local_2b8;
      local_2b8 = pfVar24;
      if (((int)fVar1 < 1) ||
         (bVar15 = FNiagaraDICollisionQueryBatch::GetQueryResult
                             (&(local_268.Ptr)->CollisionBatch,(int)fVar1 - 1,
                              (FNiagaraDICollsionQueryResult *)&local_138._s_0),
         iVar16 = local_3c0[0], !bVar15)) {
        *pfVar17 = 0.0;
        *pfVar18 = 0.0;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        pfVar24 = pfVar18 + local_3b0[0];
        *local_360.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_360.X.Register = local_360.X.Register + local_360.X.AdvanceOffset;
        *local_360.Y.Register = (float)uVar13;
        local_360.Y.Register = local_360.Y.Register + local_360.Y.AdvanceOffset;
        *local_360.Z.Register = (float)uVar14;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        local_278 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
        local_360.Z.Register = local_360.Z.Register + local_360.Z.AdvanceOffset;
        *local_330.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_330.X.Register = local_330.X.Register + local_330.X.AdvanceOffset;
        *local_330.Y.Register = (float)uVar13;
        local_330.Y.Register = local_330.Y.Register + local_330.Y.AdvanceOffset;
        *local_330.Z.Register = (float)uVar14;
        local_330.Z.Register = local_330.Z.Register + local_330.Z.AdvanceOffset;
        *pfVar19 = 0.0;
        *pfVar20 = 0.0;
        *pfVar21 = 0.0;
        local_3b8 = pfVar24;
        iVar16 = local_3c0[0];
      }
      else {
        *pfVar17 = -NAN;
        pfVar24 = pfVar18 + local_3b0[0];
        *pfVar18 = (float)-(uint)(local_e4 != '\0');
        local_158._s_0.X = local_138._s_0.X;
        local_158._s_0.Y = local_138._s_0.Y;
        local_158._s_0.Z = local_138._s_0.Z;
        local_3b8 = pfVar24;
        pFVar23 = FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                            (&local_258,&local_d8,(TVector<double> *)&local_158._s_0);
        local_278 = *(undefined8 *)pFVar23;
        fVar1 = *(float *)&pFVar23->field_0x8;
        *local_360.X.Register = (float)local_278;
        local_360.X.Register = local_360.X.Register + local_360.X.AdvanceOffset;
        *local_360.Y.Register = (float)((ulonglong)local_278 >> 0x20);
        local_360.Y.Register = local_360.Y.Register + local_360.Y.AdvanceOffset;
        *local_360.Z.Register = fVar1;
        local_360.Z.Register = local_360.Z.Register + local_360.Z.AdvanceOffset;
        *local_330.X.Register = (float)local_120;
        *local_330.Y.Register = (float)local_118;
        *local_330.Z.Register = (float)local_110;
        *pfVar19 = local_ec;
        *pfVar20 = local_e8;
        *pfVar21 = local_f0;
        local_330.X.Register = local_330.X.Register + local_330.X.AdvanceOffset;
        local_330.Y.Register = local_330.Y.Register + local_330.Y.AdvanceOffset;
        local_330.Z.Register = local_330.Z.Register + local_330.Z.AdvanceOffset;
      }
      pfVar17 = pfVar17 + iVar16;
      pfVar20 = pfVar20 + local_390[0];
      pfVar19 = pfVar19 + local_3a0[0];
      pfVar21 = pfVar21 + local_380[0];
      local_res20 = local_res20 + 1;
      pfVar18 = pfVar24;
      local_3a8 = pfVar19;
      local_398 = pfVar20;
      local_388 = pfVar21;
    } while (local_res20 < param_1->NumInstances);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  return;
}

// PerformQuerySyncCPU @ 14911dce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCollisionQuery::PerformQuerySyncCPU
          (UNiagaraDataInterfaceCollisionQuery *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  FNiagaraPosition *pFVar24;
  float *pfVar25;
  int iVar26;
  int local_390 [2];
  float *local_388;
  int local_380 [2];
  float *local_378;
  int local_370 [2];
  float *local_368;
  int local_360 [2];
  float *local_358;
  int local_350 [2];
  FNDIOutputParam<FNiagaraPosition> local_348;
  FNDIOutputParam<UE::Math::TVector<float>_> local_318;
  float *local_2e8;
  float *local_2e0;
  int local_2d8 [2];
  float *local_2d0;
  float *local_2c8;
  int local_2c0 [2];
  float *local_2b8;
  float *local_2b0;
  int local_2a8 [4];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  FUserPtrHandler<CQDIPerInstanceData> local_268;
  FNiagaraLWCConverter local_258;
  FNDIInputParam<FNiagaraPosition> local_238;
  FNDIInputParam<FNiagaraPosition> local_1e8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  float local_f0;
  float local_ec;
  float local_e8;
  char local_e4;
  FNiagaraPosition local_d8;
  TVector<double> local_c8;
  TVector<double> local_b0 [5];
  
  VectorVM::FUserPtrHandler<CQDIPerInstanceData>::FUserPtrHandler<CQDIPerInstanceData>
            (&local_268,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_238,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_1e8,param_1);
  iVar26 = 0;
  local_2d8[0] = 0;
  local_2e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2d8);
  local_2c0[0] = 0;
  local_2e8 = local_2e8 + local_2d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2e0 = local_2e8;
  local_2d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2c0);
  local_2a8[0] = 0;
  local_2d0 = local_2d0 + local_2c0[0] * param_1->PerInstanceFnInstanceIdx;
  local_2c8 = local_2d0;
  local_2b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2a8);
  local_390[0] = 0;
  local_2b8 = local_2b8 + local_2a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2b0 = local_2b8;
  pfVar18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_390);
  local_380[0] = 0;
  pfVar18 = pfVar18 + local_390[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar19 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_380);
  pfVar19 = pfVar19 + local_380[0] * param_1->PerInstanceFnInstanceIdx;
  local_388 = pfVar19;
  FNDIOutputParam<FNiagaraPosition>::FNDIOutputParam<FNiagaraPosition>(&local_348,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_318,param_1);
  local_370[0] = 0;
  pfVar20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_370);
  local_360[0] = 0;
  pfVar20 = pfVar20 + local_370[0] * param_1->PerInstanceFnInstanceIdx;
  local_378 = pfVar20;
  pfVar21 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_360);
  pfVar21 = pfVar21 + local_360[0] * param_1->PerInstanceFnInstanceIdx;
  local_350[0] = 0;
  local_368 = pfVar21;
  pfVar22 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_350);
  pfVar22 = pfVar22 + local_350[0] * param_1->PerInstanceFnInstanceIdx;
  local_358 = pfVar22;
  FNiagaraSystemInstance::GetLWCConverter((local_268.Ptr)->SystemInstance,&local_258,false);
  EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *local_238.Z.InputPtr;
      fVar2 = *local_238.X.InputPtr;
      fVar3 = *local_238.Y.InputPtr;
      local_238.Z.InputPtr = local_238.Z.InputPtr + local_238.Z.AdvanceOffset;
      local_238.Y.InputPtr = local_238.Y.InputPtr + local_238.Y.AdvanceOffset;
      fVar4 = *local_1e8.Z.InputPtr;
      fVar5 = *local_1e8.Y.InputPtr;
      local_238.X.InputPtr = local_238.X.InputPtr + local_238.X.AdvanceOffset;
      fVar6 = *local_1e8.X.InputPtr;
      local_1e8.Z.InputPtr = local_1e8.Z.InputPtr + local_1e8.Z.AdvanceOffset;
      local_1e8.Y.InputPtr = local_1e8.Y.InputPtr + local_1e8.Y.AdvanceOffset;
      local_1e8.X.InputPtr = local_1e8.X.InputPtr + local_1e8.X.AdvanceOffset;
      fVar8 = *local_2e8;
      fVar9 = *local_2b8;
      fVar10 = *local_2d0;
      local_2b8 = local_2b8 + local_2a8[0];
      local_2e8 = local_2e8 + local_2d8[0];
      local_2d0 = local_2d0 + local_2c0[0];
      iVar17 = _finite((double)fVar2);
      if ((((iVar17 == 0) || (iVar17 = _finite((double)fVar3), iVar17 == 0)) ||
          (iVar17 = _finite((double)fVar1), iVar17 == 0)) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3084468632349048255>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCollisionQuery.cpp"
                              ,0x241,"!TraceStart.ContainsNaN()"), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar17 = _finite((double)fVar6);
      if ((((iVar17 == 0) || (iVar17 = _finite((double)fVar5), iVar17 == 0)) ||
          (iVar17 = _finite((double)fVar4), iVar17 == 0)) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3084468632349048254>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCollisionQuery.cpp"
                              ,0x242,"!TraceEnd.ContainsNaN()"), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (fVar10 == 0.0) {
        local_298._4_4_ = fVar5;
        local_298._0_4_ = fVar6;
        local_298._8_4_ = fVar4;
        pTVar23 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&local_258,&local_c8,(FNiagaraPosition *)local_298);
        local_288._4_4_ = fVar3;
        local_288._0_4_ = fVar2;
        dVar12 = (pTVar23->field0_0x0)._s_0.X;
        dVar13 = (pTVar23->field0_0x0)._s_0.Y;
        dVar7 = (pTVar23->field0_0x0)._s_0.Z;
        local_288._8_4_ = fVar1;
        pTVar23 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&local_258,local_b0,(FNiagaraPosition *)local_288);
        local_178._s_0.X = (pTVar23->field0_0x0)._s_0.X;
        local_178._s_0.Y = (pTVar23->field0_0x0)._s_0.Y;
        local_178._s_0.Z = (pTVar23->field0_0x0)._s_0.Z;
        local_198._s_0.X = dVar12;
        local_198._s_0.Y = dVar13;
        local_198._s_0.Z = dVar7;
        bVar16 = FNiagaraDICollisionQueryBatch::PerformQuery
                           (&(local_268.Ptr)->CollisionBatch,(TVector<double> *)&local_178._s_0,
                            (TVector<double> *)&local_198._s_0,
                            (FNiagaraDICollsionQueryResult *)&local_138._s_0,
                            (ECollisionChannel)fVar8,fVar9 != 0.0);
        iVar17 = local_390[0];
        if (!bVar16) goto LAB_14911e2d9;
        *pfVar18 = -NAN;
        pfVar25 = pfVar19 + local_380[0];
        *pfVar19 = (float)-(uint)(local_e4 != '\0');
        local_158._s_0.X = local_138._s_0.X;
        local_158._s_0.Y = local_138._s_0.Y;
        local_158._s_0.Z = local_138._s_0.Z;
        local_388 = pfVar25;
        pFVar24 = FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                            (&local_258,&local_d8,(TVector<double> *)&local_158._s_0);
        local_278 = *(undefined8 *)pFVar24;
        fVar1 = *(float *)&pFVar24->field_0x8;
        *local_348.X.Register = (float)local_278;
        local_348.X.Register = local_348.X.Register + local_348.X.AdvanceOffset;
        *local_348.Y.Register = (float)((ulonglong)local_278 >> 0x20);
        local_348.Y.Register = local_348.Y.Register + local_348.Y.AdvanceOffset;
        *local_348.Z.Register = fVar1;
        local_348.Z.Register = local_348.Z.Register + local_348.Z.AdvanceOffset;
        *local_318.X.Register = (float)local_120;
        *local_318.Y.Register = (float)local_118;
        *local_318.Z.Register = (float)local_110;
        *pfVar20 = local_ec;
        *pfVar21 = local_e8;
        *pfVar22 = local_f0;
        local_318.X.Register = local_318.X.Register + local_318.X.AdvanceOffset;
        local_318.Y.Register = local_318.Y.Register + local_318.Y.AdvanceOffset;
        local_318.Z.Register = local_318.Z.Register + local_318.Z.AdvanceOffset;
      }
      else {
LAB_14911e2d9:
        *pfVar18 = 0.0;
        *pfVar19 = 0.0;
        uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        pfVar25 = pfVar19 + local_380[0];
        *local_348.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_348.X.Register = local_348.X.Register + local_348.X.AdvanceOffset;
        *local_348.Y.Register = (float)uVar14;
        local_348.Y.Register = local_348.Y.Register + local_348.Y.AdvanceOffset;
        *local_348.Z.Register = (float)uVar15;
        uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        local_278 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
        local_348.Z.Register = local_348.Z.Register + local_348.Z.AdvanceOffset;
        *local_318.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_318.X.Register = local_318.X.Register + local_318.X.AdvanceOffset;
        *local_318.Y.Register = (float)uVar14;
        local_318.Y.Register = local_318.Y.Register + local_318.Y.AdvanceOffset;
        *local_318.Z.Register = (float)uVar15;
        local_318.Z.Register = local_318.Z.Register + local_318.Z.AdvanceOffset;
        *pfVar20 = 0.0;
        *pfVar21 = 0.0;
        *pfVar22 = 0.0;
        local_388 = pfVar25;
        iVar17 = local_390[0];
      }
      pfVar18 = pfVar18 + iVar17;
      pfVar21 = pfVar21 + local_360[0];
      pfVar20 = pfVar20 + local_370[0];
      pfVar22 = pfVar22 + local_350[0];
      iVar26 = iVar26 + 1;
      pfVar19 = pfVar25;
      local_378 = pfVar20;
      local_368 = pfVar21;
      local_358 = pfVar22;
    } while (iVar26 < param_1->NumInstances);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection);
  return;
}

// PostInitProperties @ 149120840

void __thiscall
UNiagaraDataInterfaceCollisionQuery::PostInitProperties(UNiagaraDataInterfaceCollisionQuery *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
    local_28 = (TObjectPtr<UObject>_u_0)this->TraceChannelEnum;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UEnum *)local_28.DebugPtr != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 3;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostSimulateCanOverlapFrames @ 1491245f0

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::PostSimulateCanOverlapFrames
          (UNiagaraDataInterfaceCollisionQuery *this)

{
  return false;
}

// RequiresDepthBuffer @ 14912b1d0

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::RequiresDepthBuffer(UNiagaraDataInterfaceCollisionQuery *this)

{
  return true;
}

// RequiresGlobalDistanceField @ 14912b1f0

bool __thiscall
UNiagaraDataInterfaceCollisionQuery::RequiresGlobalDistanceField
          (UNiagaraDataInterfaceCollisionQuery *this)

{
  return true;
}

// SetShaderParameters @ 149132e00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCollisionQuery::SetShaderParameters
          (UNiagaraDataInterfaceCollisionQuery *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int iVar1;
  FNiagaraShaderScriptParametersMetadata *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FShaderParametersMetadata *pFVar7;
  FGlobalDistanceFieldParameterData *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  pFVar7 = TShaderParameterStructTypeInfo<FGlobalDistanceFieldParameters2>::GetStructMetadata();
  pFVar2 = param_1->ShaderParametersMetadata;
  iVar1 = (pFVar2->StructIncludeInfos).ArrayNum;
  pFVar9 = (pFVar2->StructIncludeInfos).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar2->StructIncludeInfos).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataInterfaceStructIncludeInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar10) break;
    if (*(FShaderParametersMetadata **)pFVar9 == pFVar7) {
      if (0xffff < *(int *)(pFVar9 + 8)) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4627280817045896675>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                           ,0x21d,
                           "StructIncludeInfo.ParamterOffset <= TNumericLimits<uint16>::Max()");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar6 = *(ushort *)(pFVar9 + 8);
LAB_149132eba:
      puVar3 = param_1->BaseParameters;
      bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsStructBoundInternal
                        (param_1,(FGlobalDistanceFieldParameters2 *)(puVar3 + uVar6),0x210);
      if (bVar5) {
        pFVar8 = (FGlobalDistanceFieldParameterData *)
                 (**(code **)(param_1->ComputeDispatchInterface->_padding_ + 0xe8))();
        FNiagaraDistanceFieldHelper::SetGlobalDistanceFieldParameters
                  (pFVar8,(FGlobalDistanceFieldParameters2 *)(puVar3 + uVar6));
      }
      return;
    }
    pFVar9 = pFVar9 + 0x10;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  uVar6 = 0;
  goto LAB_149132eba;
}

// StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery @ 149139fb0

void __cdecl
UNiagaraDataInterfaceCollisionQuery::StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery(void)

{
  return;
}

