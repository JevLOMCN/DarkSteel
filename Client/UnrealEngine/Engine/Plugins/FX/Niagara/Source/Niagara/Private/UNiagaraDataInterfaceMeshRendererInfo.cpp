// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 22

// StaticClass @ 1491987d0

UClass * __cdecl UNiagaraDataInterfaceMeshRendererInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMeshRendererInfo",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceMeshRendererInfo>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMeshRendererInfo>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton;
}

// UNiagaraDataInterfaceMeshRendererInfo @ 1491abde0

UNiagaraDataInterfaceMeshRendererInfo * __thiscall
UNiagaraDataInterfaceMeshRendererInfo::UNiagaraDataInterfaceMeshRendererInfo
          (UNiagaraDataInterfaceMeshRendererInfo *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMeshRendererInfo__6B_;
  (this->MeshRenderer).field0_0x0.DebugPtr = (UNiagaraMeshRendererProperties *)0x0;
  (this->CachedMeshData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMeshData).ArrayNum = 0;
  (this->CachedMeshData).ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceMeshRendererInfo @ 1491abe20

UNiagaraDataInterfaceMeshRendererInfo * __thiscall
UNiagaraDataInterfaceMeshRendererInfo::UNiagaraDataInterfaceMeshRendererInfo
          (UNiagaraDataInterfaceMeshRendererInfo *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMeshRendererInfo__6B_;
  (this->MeshRenderer).field0_0x0.DebugPtr = (UNiagaraMeshRendererProperties *)0x0;
  (this->CachedMeshData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMeshData).ArrayNum = 0;
  (this->CachedMeshData).ArrayMax = 0;
  puVar2 = ::operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNDIMeshRendererInfoProxy__6B_;
    *(undefined1 *)(puVar2 + 2) = 0;
    ((TVector2<float>_u_0 *)((longlong)puVar2 + 0x14))->_s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x448);
    if (pcVar1 == PushToRenderThreadImpl) {
      PushToRenderThreadImpl(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
      return this;
    }
    (*pcVar1)();
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return this;
}

// ~UNiagaraDataInterfaceMeshRendererInfo @ 1491ad550

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::~UNiagaraDataInterfaceMeshRendererInfo
          (UNiagaraDataInterfaceMeshRendererInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMeshRendererInfo__6B_;
  pFVar1 = (this->CachedMeshData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1491b1140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  FRHIResource *pFVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(*(longlong *)this + 0x10) = *(undefined1 *)((longlong)this + 0x18);
  *(undefined8 *)(*(longlong *)this + 0x14) = *(undefined8 *)((longlong)this + 0x1c);
  *(undefined4 *)(*(longlong *)this + 0x1c) = *(undefined4 *)((longlong)this + 0x10);
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  pFVar4 = *(FRHIResource **)(lVar3 + 0x20);
  if (pFVar4 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
    FRHIResource::Release(pFVar4);
  }
  pFVar4 = *(FRHIResource **)(lVar3 + 0x28);
  if (pFVar4 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar3 + 0x28) = 0;
    FRHIResource::Release(pFVar4);
  }
  if (*(int *)(*(longlong *)this + 0x1c) != 0) {
    FReadBuffer::Initialize
              ((FReadBuffer *)(*(longlong *)this + 0x20),(FRHICommandListBase *)param_1,
               L"UNiagaraDataInterfaceMeshRendererInfo",4,*(int *)((longlong)this + 0x10) * 6,
               PF_R32_FLOAT,Static,(FResourceArrayUploadInterface *)0x0);
    puVar5 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x20),0,
                        *(uint *)(*(longlong *)this + 0x30),RLM_WriteOnly);
    iVar2 = *(int *)((longlong)this + 0x10);
    puVar6 = *(undefined4 **)((longlong)this + 8);
    puVar1 = puVar6 + (longlong)iVar2 * 6;
    while( true ) {
      if (*(int *)((longlong)this + 0x10) != iVar2) {
        `TCheckedPointerIterator<UNiagaraDataInterfaceMeshRendererInfo::FMeshData_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar6 == puVar1) break;
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
      puVar5[3] = puVar6[3];
      puVar5[4] = puVar6[4];
      puVar5[5] = puVar6[5];
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 6;
    }
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x20));
  }
  return;
}

// BeginDestroy @ 1491b56d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::BeginDestroy(UNiagaraDataInterfaceMeshRendererInfo *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UNiagaraDataInterfaceMeshRendererInfo **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// BuildShaderParameters @ 1491b59e0

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::BuildShaderParameters
          (UNiagaraDataInterfaceMeshRendererInfo *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIMeshRendererInfoInternal::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  return;
}

// CanExecuteOnTarget @ 1491b6cd0

bool __thiscall
UNiagaraDataInterfaceMeshRendererInfo::CanExecuteOnTarget
          (UNiagaraDataInterfaceMeshRendererInfo *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1491b7a90

bool __thiscall
UNiagaraDataInterfaceMeshRendererInfo::CopyToInternal
          (UNiagaraDataInterfaceMeshRendererInfo *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UNiagaraMeshRendererProperties *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UpdateCachedData((UNiagaraDataInterfaceMeshRendererInfo *)param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->MeshRenderer).field0_0x0.DebugPtr,
         pUVar2 != (UNiagaraMeshRendererProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UNiagaraMeshRendererProperties>_u_0 *)(param_1 + 1) =
           (this->MeshRenderer).field0_0x0;
      UpdateCachedData((UNiagaraDataInterfaceMeshRendererInfo *)param_1);
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// Equals @ 1491c1030

bool __thiscall
UNiagaraDataInterfaceMeshRendererInfo::Equals
          (UNiagaraDataInterfaceMeshRendererInfo *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (this->MeshRenderer).field0_0x0.DebugPtr ==
             (UNiagaraMeshRendererProperties *)param_1[1]._padding_;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo_const_>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceMeshRendererInfo_const_>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetPrivateStaticClass @ 1491c9f60

UClass * __cdecl UNiagaraDataInterfaceMeshRendererInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMeshRendererInfo",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceMeshRendererInfo>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMeshRendererInfo>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMeshRendererInfo.InnerSingleton;
}

// GetVMExternalFunction @ 1491cc6d0

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::GetVMExternalFunction
          (UNiagaraDataInterfaceMeshRendererInfo *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UNiagaraDataInterfaceMeshRendererInfo *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIMeshRendererInfoInternal::GetNumMeshesName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceMeshRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetNumMeshes;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
  }
  else if (FVar1 == NDIMeshRendererInfoInternal::GetMeshLocalBoundsName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceMeshRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetMeshLocalBounds;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
  }
  else {
    if (FVar1 != NDIMeshRendererInfoInternal::GetSubUVDetailsName) {
      return;
    }
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceMeshRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceMeshRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetSubUVDetails;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
  }
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// OnMeshRendererChanged @ 1491d52d0

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::OnMeshRendererChanged
          (UNiagaraDataInterfaceMeshRendererInfo *this,UNiagaraMeshRendererProperties *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  UNiagaraMeshRendererProperties *pUVar20;
  longlong lVar21;
  
  piVar1 = &(this->CachedMeshData).ArrayMax;
  (this->CachedMeshData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->CachedMeshData).AllocatorInstance,0,piVar1);
  }
  pUVar20 = (this->MeshRenderer).field0_0x0.DebugPtr;
  if (pUVar20 != (UNiagaraMeshRendererProperties *)0x0) {
    iVar10 = (pUVar20->Meshes).ArrayNum;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,iVar10,&(this->CachedMeshData).AllocatorInstance,
                        &(this->CachedMeshData).ArrayNum,piVar1);
    DefaultConstructItems<UNiagaraDataInterfaceMeshRendererInfo::FMeshData,int>
              ((this->CachedMeshData).AllocatorInstance.Data + (longlong)iVar16 * 0x18,iVar10);
    pUVar20 = (this->MeshRenderer).field0_0x0.DebugPtr;
    uVar18 = 0;
    if (0 < (pUVar20->Meshes).ArrayNum) {
      lVar21 = 0;
      lVar19 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar18 < (pUVar20->Meshes).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar11 = (pUVar20->Meshes).AllocatorInstance.Data;
        lVar12 = *(longlong *)(pFVar11 + lVar19);
        if (lVar12 != 0) {
          dVar2 = *(double *)(lVar12 + 0x268);
          dVar3 = *(double *)(lVar12 + 0x250);
          dVar4 = *(double *)(lVar12 + 0x270);
          dVar5 = *(double *)(lVar12 + 600);
          dVar6 = *(double *)(lVar12 + 0x278);
          dVar7 = *(double *)(lVar12 + 0x260);
          uVar17 = 0;
          if ((int)uVar18 < (this->CachedMeshData).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar13 = (this->CachedMeshData).AllocatorInstance.Data;
          dVar8 = *(double *)(pFVar11 + lVar19 + 0x10);
          dVar9 = *(double *)(pFVar11 + lVar19 + 0x18);
          *(float *)(pFVar13 + lVar21) =
               (float)((dVar3 - dVar2) * *(double *)(pFVar11 + lVar19 + 8));
          *(float *)(pFVar13 + lVar21 + 4) = (float)((dVar5 - dVar4) * dVar8);
          *(float *)(pFVar13 + lVar21 + 8) = (float)((dVar7 - dVar6) * dVar9);
          dVar8 = *(double *)(pFVar11 + lVar19 + 0x10);
          dVar9 = *(double *)(pFVar11 + lVar19 + 0x18);
          *(float *)(pFVar13 + lVar21 + 0xc) =
               (float)((dVar3 + dVar2) * *(double *)(pFVar11 + lVar19 + 8));
          *(float *)(pFVar13 + lVar21 + 0x10) = (float)((dVar5 + dVar4) * dVar8);
          *(float *)(pFVar13 + lVar21 + 0x14) = (float)((dVar7 + dVar6) * dVar9);
        }
        pUVar20 = (this->MeshRenderer).field0_0x0.DebugPtr;
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0x80;
        lVar21 = lVar21 + 0x18;
      } while ((int)uVar18 < (pUVar20->Meshes).ArrayNum);
    }
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// PostInitProperties @ 1491d76b0

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::PostInitProperties
          (UNiagaraDataInterfaceMeshRendererInfo *this)

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
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowNotUserVariable);
  }
  return;
}

// PostLoad @ 1491d7e70

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::PostLoad(UNiagaraDataInterfaceMeshRendererInfo *this)

{
  UNiagaraMeshRendererProperties *this_00;
  
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  this_00 = (this->MeshRenderer).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraMeshRendererProperties *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    UpdateCachedData(this);
    return;
  }
  return;
}

// PushToRenderThreadImpl @ 1491d9780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl
          (UNiagaraDataInterfaceMeshRendererInfo *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  UClass *this_00;
  UNiagaraMeshRendererProperties *pUVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined8 local_ac;
  float local_a0;
  float fStack_9c;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pcVar3 = (code *)this->_padding_;
  if (pcVar3 == (code *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = (this->MeshRenderer).field0_0x0.DebugPtr;
  if (pUVar5 == (UNiagaraMeshRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar5 = (UNiagaraMeshRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  iVar1 = (this->CachedMeshData).ArrayNum;
  _Src = (this->CachedMeshData).AllocatorInstance.Data;
  local_a0 = (float)(pUVar5->SubImageSize).field0_0x0._s_0.X;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = CONCAT44(local_b8._4_4_,iVar1);
  fStack_9c = (float)(pUVar5->SubImageSize).field0_0x0._s_0.Y;
  if (iVar1 == 0) {
    local_b8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar1,0,&local_c0,iVar1,(int *)((longlong)&local_b8 + 4));
    memcpy(local_c0.Data,_Src,(longlong)iVar1 * 0x18);
  }
  local_ac = CONCAT44(fStack_9c,local_a0);
  local_98[0] = (code *)0x0;
  local_b0 = pUVar5->bSubImageBlend;
  local_70 = FMemory::Malloc(0x30,8);
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[2] = (code *)0x0;
  local_70[1] = pcVar3;
  local_70[2] = (code *)local_c0.Data;
  local_c0.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_70 + 3) = (undefined4)local_b8;
  *(undefined4 *)((longlong)local_70 + 0x1c) = local_b8._4_4_;
  local_b8 = 0;
  *(byte *)(local_70 + 4) = local_b0;
  *(undefined8 *)((longlong)local_70 + 0x24) = local_ac;
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl_::__l2::TSTR_FDIMeshRendererInfoPushToRT319>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::TSTR_FDIMeshRendererInfoPushToRT319>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar6);
    uVar8 = (ulonglong)local_38;
    if (2 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar7 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar7 = local_40;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar7 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar7 = local_70;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

// SetShaderParameters @ 1491dfdf0

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
UNiagaraDataInterfaceMeshRendererInfo::SetShaderParameters
          (UNiagaraDataInterfaceMeshRendererInfo *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  FName FVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar6 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NDIMeshRendererInfoInternal::FShaderParameters>::
           GetStructMetadata();
  puVar7 = (uint *)(param_1->BaseParameters + uVar6);
  param_1->ParametersOffset = pFVar4->Size + uVar6;
  *puVar7 = (uint)(byte)pFVar1[1]._padding_;
  *(undefined8 *)(puVar7 + 2) = *(undefined8 *)((longlong)&pFVar1[1]._padding_ + 4);
  puVar7[4] = pFVar1[1].SourceDIName.Number;
  FVar5 = pFVar1[2].SourceDIName;
  if (FVar5 == (FName)0x0) {
    FVar5 = (FName)FNiagaraRenderer::GetDummyFloatBuffer();
  }
  *(FName *)(puVar7 + 6) = FVar5;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo @ 1491e35a0

void __cdecl
UNiagaraDataInterfaceMeshRendererInfo::StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo
          (void)

{
  return;
}

// UpdateCachedData @ 1491e4300

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::UpdateCachedData(UNiagaraDataInterfaceMeshRendererInfo *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  UNiagaraMeshRendererProperties *pUVar20;
  longlong lVar21;
  
  piVar1 = &(this->CachedMeshData).ArrayMax;
  (this->CachedMeshData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->CachedMeshData).AllocatorInstance,0,piVar1);
  }
  pUVar20 = (this->MeshRenderer).field0_0x0.DebugPtr;
  if (pUVar20 != (UNiagaraMeshRendererProperties *)0x0) {
    iVar10 = (pUVar20->Meshes).ArrayNum;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,iVar10,&(this->CachedMeshData).AllocatorInstance,
                        &(this->CachedMeshData).ArrayNum,piVar1);
    DefaultConstructItems<UNiagaraDataInterfaceMeshRendererInfo::FMeshData,int>
              ((this->CachedMeshData).AllocatorInstance.Data + (longlong)iVar16 * 0x18,iVar10);
    pUVar20 = (this->MeshRenderer).field0_0x0.DebugPtr;
    uVar18 = 0;
    if (0 < (pUVar20->Meshes).ArrayNum) {
      lVar21 = 0;
      lVar19 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar18 < (pUVar20->Meshes).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar11 = (pUVar20->Meshes).AllocatorInstance.Data;
        lVar12 = *(longlong *)(pFVar11 + lVar19);
        if (lVar12 != 0) {
          dVar2 = *(double *)(lVar12 + 0x268);
          dVar3 = *(double *)(lVar12 + 0x250);
          dVar4 = *(double *)(lVar12 + 0x270);
          dVar5 = *(double *)(lVar12 + 600);
          dVar6 = *(double *)(lVar12 + 0x278);
          dVar7 = *(double *)(lVar12 + 0x260);
          uVar17 = 0;
          if ((int)uVar18 < (this->CachedMeshData).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar13 = (this->CachedMeshData).AllocatorInstance.Data;
          dVar8 = *(double *)(pFVar11 + lVar19 + 0x10);
          dVar9 = *(double *)(pFVar11 + lVar19 + 0x18);
          *(float *)(pFVar13 + lVar21) =
               (float)((dVar3 - dVar2) * *(double *)(pFVar11 + lVar19 + 8));
          *(float *)(pFVar13 + lVar21 + 4) = (float)((dVar5 - dVar4) * dVar8);
          *(float *)(pFVar13 + lVar21 + 8) = (float)((dVar7 - dVar6) * dVar9);
          dVar8 = *(double *)(pFVar11 + lVar19 + 0x10);
          dVar9 = *(double *)(pFVar11 + lVar19 + 0x18);
          *(float *)(pFVar13 + lVar21 + 0xc) =
               (float)((dVar3 + dVar2) * *(double *)(pFVar11 + lVar19 + 8));
          *(float *)(pFVar13 + lVar21 + 0x10) = (float)((dVar5 + dVar4) * dVar8);
          *(float *)(pFVar13 + lVar21 + 0x14) = (float)((dVar7 + dVar6) * dVar9);
        }
        pUVar20 = (this->MeshRenderer).field0_0x0.DebugPtr;
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0x80;
        lVar21 = lVar21 + 0x18;
      } while ((int)uVar18 < (pUVar20->Meshes).ArrayNum);
    }
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// VMGetMeshLocalBounds @ 1491e5c50

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::VMGetMeshLocalBounds
          (UNiagaraDataInterfaceMeshRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_f8 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_f0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_c0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_90;
  undefined8 local_60;
  undefined8 local_50;
  
  local_f8[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  iVar4 = local_f8[0];
  pfVar7 = pfVar7 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_f0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_c0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_90,param_1);
  iVar10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar1 = (this->CachedMeshData).ArrayNum;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      pfVar9 = pfVar7;
      fVar11 = 0.0;
      fVar14 = 0.0;
      if (0 < iVar1) {
        pfVar9 = pfVar7 + iVar4;
        fVar16 = (float)(iVar1 + -1);
        if ((int)*pfVar7 < iVar1 + -1) {
          fVar16 = *pfVar7;
        }
        fVar13 = 0.0;
        if (0 < (int)fVar16) {
          fVar13 = fVar16;
        }
        uVar6 = 0;
        if ((int)fVar13 < iVar1) {
          uVar6 = ~(uint)fVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = (longlong)(int)fVar13;
        pFVar2 = (this->CachedMeshData).AllocatorInstance.Data;
        local_60 = *(undefined8 *)(pFVar2 + lVar8 * 0x18);
        local_50 = *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 0xc);
        fVar15 = (float)((ulonglong)local_60 >> 0x20);
        fVar16 = *(float *)(pFVar2 + lVar8 * 0x18 + 8);
        fVar13 = *(float *)(pFVar2 + lVar8 * 0x18 + 0x14);
        fVar12 = (float)((ulonglong)local_50 >> 0x20);
        fVar11 = (float)local_50;
        fVar14 = (float)local_60;
      }
      iVar10 = iVar10 + 1;
      *local_f0.X.Register = fVar14;
      local_f0.X.Register = local_f0.X.Register + local_f0.X.AdvanceOffset;
      *local_f0.Y.Register = fVar15;
      local_f0.Y.Register = local_f0.Y.Register + local_f0.Y.AdvanceOffset;
      *local_f0.Z.Register = fVar16;
      local_f0.Z.Register = local_f0.Z.Register + local_f0.Z.AdvanceOffset;
      *local_c0.X.Register = fVar11;
      local_c0.X.Register = local_c0.X.Register + local_c0.X.AdvanceOffset;
      *local_c0.Y.Register = fVar12;
      local_c0.Y.Register = local_c0.Y.Register + local_c0.Y.AdvanceOffset;
      *local_c0.Z.Register = fVar13;
      local_c0.Z.Register = local_c0.Z.Register + local_c0.Z.AdvanceOffset;
      *local_90.X.Register = fVar11 - fVar14;
      local_90.X.Register = local_90.X.Register + local_90.X.AdvanceOffset;
      *local_90.Y.Register = fVar12 - fVar15;
      local_90.Y.Register = local_90.Y.Register + local_90.Y.AdvanceOffset;
      *local_90.Z.Register = fVar13 - fVar16;
      local_90.Z.Register = local_90.Z.Register + local_90.Z.AdvanceOffset;
      pfVar7 = pfVar9;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMGetNumMeshes @ 1491e5ff0

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::VMGetNumMeshes
          (UNiagaraDataInterfaceMeshRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int local_10 [2];
  
  iVar3 = 0;
  local_10[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  pfVar2 = pfVar2 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
  fVar1 = (float)(this->CachedMeshData).ArrayNum;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// VMGetSubUVDetails @ 1491e65f0

void __thiscall
UNiagaraDataInterfaceMeshRendererInfo::VMGetSubUVDetails
          (UNiagaraDataInterfaceMeshRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  float *pfVar4;
  UClass *this_00;
  int iVar5;
  UNiagaraMeshRendererProperties *pUVar6;
  int iVar7;
  int iVar8;
  int local_30 [2];
  float *local_28;
  int local_20 [4];
  int local_10 [2];
  
  iVar7 = 0;
  local_30[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  local_28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  local_10[0] = 0;
  local_28 = local_28 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar5 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar6 = (this->MeshRenderer).field0_0x0.DebugPtr;
  if (pUVar6 == (UNiagaraMeshRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar6 = (UNiagaraMeshRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  dVar1 = (pUVar6->SubImageSize).field0_0x0._s_0.X;
  dVar2 = (pUVar6->SubImageSize).field0_0x0._s_0.Y;
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + iVar5;
    pfVar3 = pfVar3 + iVar8;
    do {
      iVar7 = iVar7 + 1;
      *pfVar3 = (float)-(uint)(pUVar6->bSubImageBlend != 0);
      *local_28 = (float)dVar1;
      *pfVar4 = (float)dVar2;
      pfVar4 = pfVar4 + local_10[0];
      pfVar3 = pfVar3 + local_30[0];
      local_28 = local_28 + local_20[0];
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

