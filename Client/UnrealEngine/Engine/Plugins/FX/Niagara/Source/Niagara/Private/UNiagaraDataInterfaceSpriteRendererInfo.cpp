// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 22

// StaticClass @ 1491edc00

UClass * __cdecl UNiagaraDataInterfaceSpriteRendererInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSpriteRendererInfo",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSpriteRendererInfo>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpriteRendererInfo>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton;
}

// UNiagaraDataInterfaceSpriteRendererInfo @ 1492136f0

UNiagaraDataInterfaceSpriteRendererInfo * __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::UNiagaraDataInterfaceSpriteRendererInfo
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpriteRendererInfo__6B_;
  (this->SpriteRenderer).field0_0x0.DebugPtr = (UNiagaraSpriteRendererProperties *)0x0;
  return this;
}

// UNiagaraDataInterfaceSpriteRendererInfo @ 149213720

UNiagaraDataInterfaceSpriteRendererInfo * __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::UNiagaraDataInterfaceSpriteRendererInfo
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpriteRendererInfo__6B_;
  (this->SpriteRenderer).field0_0x0.DebugPtr = (UNiagaraSpriteRendererProperties *)0x0;
  puVar2 = ::operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[1] = 0;
    *puVar2 = &___7FNDIProxy_NDISpriteRendererInfoLocal__6B_;
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

// ~UNiagaraDataInterfaceSpriteRendererInfo @ 149216020

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::~UNiagaraDataInterfaceSpriteRendererInfo
          (UNiagaraDataInterfaceSpriteRendererInfo *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpriteRendererInfo__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BeginDestroy @ 14921e770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::BeginDestroy(UNiagaraDataInterfaceSpriteRendererInfo *this)

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
    while (*(UNiagaraDataInterfaceSpriteRendererInfo **)FVar3 != this) {
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

// BuildShaderParameters @ 1492208b0

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::BuildShaderParameters
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDISpriteRendererInfoLocal::FShaderParameters>::
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

// CanExecuteOnTarget @ 149221b80

bool __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::CanExecuteOnTarget
          (UNiagaraDataInterfaceSpriteRendererInfo *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1492230f0

bool __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::CopyToInternal
          (UNiagaraDataInterfaceSpriteRendererInfo *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UNiagaraSpriteRendererProperties *pUVar2;
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
      param_1->bRenderDataDirty = 1;
      if (param_1->bRenderDataDirty == 1 && param_1->bUsedWithGPUScript == 1) {
        (**(code **)(param_1->_padding_ + 0x448))(param_1);
        param_1->bRenderDataDirty = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->SpriteRenderer).field0_0x0.DebugPtr,
         pUVar2 != (UNiagaraSpriteRendererProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UNiagaraSpriteRendererProperties>_u_0 *)(param_1 + 1) =
           (this->SpriteRenderer).field0_0x0;
      param_1->bRenderDataDirty = 1;
      if (param_1->bRenderDataDirty == 1 && param_1->bUsedWithGPUScript == 1) {
        (**(code **)(param_1->_padding_ + 0x448))(param_1);
        param_1->bRenderDataDirty = 0;
      }
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar6);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// Equals @ 14922d950

bool __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::Equals
          (UNiagaraDataInterfaceSpriteRendererInfo *this,UNiagaraDataInterface *param_1)

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
      return (this->SpriteRenderer).field0_0x0.DebugPtr ==
             (UNiagaraSpriteRendererProperties *)param_1[1]._padding_;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo_const_>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceSpriteRendererInfo_const_>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetPrivateStaticClass @ 149237000

UClass * __cdecl UNiagaraDataInterfaceSpriteRendererInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSpriteRendererInfo",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSpriteRendererInfo>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpriteRendererInfo>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpriteRendererInfo.InnerSingleton;
}

// GetVMExternalFunction @ 14923a290

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::GetVMExternalFunction
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar4;
  bool bVar5;
  UNiagaraDataInterfaceSpriteRendererInfo *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDISpriteRendererInfoLocal::IsValidName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpriteRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMIsValid;
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
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
  }
  else if (FVar1 == NDISpriteRendererInfoLocal::GetSourceModeName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpriteRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetSourceMode;
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
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      bVar5 = local_40.bDestroyed == false;
      local_50.DelegateSize = 0;
      goto LAB_14923a6ac;
    }
  }
  else {
    if (FVar1 != NDISpriteRendererInfoLocal::GetAlignmentName) {
      if (FVar1 == NDISpriteRendererInfoLocal::GetFacingModeName) {
        pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceSpriteRendererInfo>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_58,this,(pmf_774fe5ad)0x149253cf0);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
      }
      else {
        if (FVar1 != NDISpriteRendererInfoLocal::GetSubUVDetailsName) {
          return;
        }
        pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceSpriteRendererInfo>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_58,this,(pmf_774fe5ad)0x149254610);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
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
      bVar5 = local_40.bDestroyed == false;
      goto LAB_14923a6ac;
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpriteRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetAlignment;
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
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      bVar5 = local_40.bDestroyed == false;
      local_50.DelegateSize = 0;
      goto LAB_14923a6ac;
    }
  }
  bVar5 = local_40.bDestroyed == false;
LAB_14923a6ac:
  if (bVar5) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// OnSpriteRendererChanged @ 149244210

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::OnSpriteRendererChanged
          (UNiagaraDataInterfaceSpriteRendererInfo *this,UNiagaraSpriteRendererProperties *param_1)

{
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))();
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// PostInitProperties @ 149246ae0

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::PostInitProperties
          (UNiagaraDataInterfaceSpriteRendererInfo *this)

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
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,
               AllowParameter|AllowParticleVariable|AllowEmitterVariable);
  }
  return;
}

// PostLoad @ 149246f90

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::PostLoad(UNiagaraDataInterfaceSpriteRendererInfo *this)

{
  UNiagaraSpriteRendererProperties *this_00;
  
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  this_00 = (this->SpriteRenderer).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraSpriteRendererProperties *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
    if ((this->_padding_ & 4) != 0) {
      (**(code **)(this->_padding_ + 0x448))(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
    }
  }
  return;
}

// PushToRenderThreadImpl @ 1492483d0

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::PushToRenderThreadImpl
          (UNiagaraDataInterfaceSpriteRendererInfo *this)

{
  FNDIProxy *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (FNDIProxy *)this->_padding_;
  if (this_00 == (FNDIProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread
            (this_00,(this->SpriteRenderer).field0_0x0.DebugPtr);
  return;
}

// SetShaderParameters @ 14924e880

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
UNiagaraDataInterfaceSpriteRendererInfo::SetShaderParameters
          (UNiagaraDataInterfaceSpriteRendererInfo *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  longlong *plVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  uint uVar8;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar8 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<NDISpriteRendererInfoLocal::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar7->Size + uVar8;
  puVar3 = param_1->BaseParameters;
  FVar5 = pFVar2[1].SourceDIName;
  plVar1 = (longlong *)(puVar3 + uVar8);
  *plVar1 = pFVar2[1]._padding_;
  *(FName *)(plVar1 + 1) = FVar5;
  FVar5 = pFVar2[2].SourceDIName;
  plVar1 = (longlong *)(puVar3 + (ulonglong)uVar8 + 0x10);
  *plVar1 = pFVar2[2]._padding_;
  *(FName *)(plVar1 + 1) = FVar5;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo @ 14924f520

void __cdecl
UNiagaraDataInterfaceSpriteRendererInfo::
StaticRegisterNativesUNiagaraDataInterfaceSpriteRendererInfo(void)

{
  return;
}

// VMGetAlignment @ 149253c30

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::VMGetAlignment
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  UClass *this_00;
  int iVar2;
  int iVar3;
  UNiagaraSpriteRendererProperties *pUVar4;
  int local_10 [2];
  
  iVar2 = 0;
  local_10[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar3 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar4 = (this->SpriteRenderer).field0_0x0.DebugPtr;
  if (pUVar4 == (UNiagaraSpriteRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (UNiagaraSpriteRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)pUVar4->Alignment;
      pfVar1 = pfVar1 + local_10[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetFacingMode @ 149253cf0

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::VMGetFacingMode
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  UClass *this_00;
  int iVar2;
  int iVar3;
  UNiagaraSpriteRendererProperties *pUVar4;
  int local_10 [2];
  
  iVar2 = 0;
  local_10[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar3 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar4 = (this->SpriteRenderer).field0_0x0.DebugPtr;
  if (pUVar4 == (UNiagaraSpriteRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (UNiagaraSpriteRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)pUVar4->FacingMode;
      pfVar1 = pfVar1 + local_10[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetSourceMode @ 149254470

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::VMGetSourceMode
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  UClass *this_00;
  int iVar2;
  int iVar3;
  UNiagaraSpriteRendererProperties *pUVar4;
  int local_10 [2];
  
  iVar2 = 0;
  local_10[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar3 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar4 = (this->SpriteRenderer).field0_0x0.DebugPtr;
  if (pUVar4 == (UNiagaraSpriteRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (UNiagaraSpriteRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)pUVar4->SourceMode;
      pfVar1 = pfVar1 + local_10[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetSubUVDetails @ 149254610

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::VMGetSubUVDetails
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  float *pfVar4;
  UClass *this_00;
  int iVar5;
  UNiagaraSpriteRendererProperties *pUVar6;
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
  pUVar6 = (this->SpriteRenderer).field0_0x0.DebugPtr;
  if (pUVar6 == (UNiagaraSpriteRendererProperties *)0x0) {
    this_00 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar6 = (UNiagaraSpriteRendererProperties *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  dVar1 = (pUVar6->SubImageSize).field0_0x0._s_0.X;
  dVar2 = (pUVar6->SubImageSize).field0_0x0._s_0.Y;
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + iVar5;
    pfVar3 = pfVar3 + iVar8;
    do {
      iVar7 = iVar7 + 1;
      *pfVar3 = (float)(((byte)~pUVar6->bSubImageBlend & 1) - 1);
      *local_28 = (float)dVar1;
      *pfVar4 = (float)dVar2;
      pfVar4 = pfVar4 + local_10[0];
      pfVar3 = pfVar3 + local_30[0];
      local_28 = local_28 + local_20[0];
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// VMIsValid @ 149254b50

void __thiscall
UNiagaraDataInterfaceSpriteRendererInfo::VMIsValid
          (UNiagaraDataInterfaceSpriteRendererInfo *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraSpriteRendererProperties *pUVar1;
  float *pfVar2;
  int iVar3;
  int local_10 [2];
  
  iVar3 = 0;
  local_10[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  pUVar1 = (this->SpriteRenderer).field0_0x0.DebugPtr;
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)-(uint)(pUVar1 != (UNiagaraSpriteRendererProperties *)0x0);
      pfVar2 = pfVar2 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

