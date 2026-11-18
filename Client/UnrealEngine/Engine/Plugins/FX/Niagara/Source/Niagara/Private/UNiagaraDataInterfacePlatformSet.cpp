// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// StaticClass @ 149199410

UClass * __cdecl UNiagaraDataInterfacePlatformSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfacePlatformSet",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePlatformSet,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePlatformSet>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePlatformSet>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton;
}

// UNiagaraDataInterfacePlatformSet @ 1491ac170

UNiagaraDataInterfacePlatformSet * __thiscall
UNiagaraDataInterfacePlatformSet::UNiagaraDataInterfacePlatformSet
          (UNiagaraDataInterfacePlatformSet *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePlatformSet__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  return this;
}

// UNiagaraDataInterfacePlatformSet @ 1491ac1a0

UNiagaraDataInterfacePlatformSet * __thiscall
UNiagaraDataInterfacePlatformSet::UNiagaraDataInterfacePlatformSet
          (UNiagaraDataInterfacePlatformSet *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePlatformSet__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &___7FNDIPlatformSetProxy_NDIPlatformSetPrivate__6B_;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfacePlatformSet @ 1491ad5f0

void __thiscall
UNiagaraDataInterfacePlatformSet::~UNiagaraDataInterfacePlatformSet
          (UNiagaraDataInterfacePlatformSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePlatformSet__6B_;
  pFVar1 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 1491b5d50

void __thiscall
UNiagaraDataInterfacePlatformSet::BuildShaderParameters
          (UNiagaraDataInterfacePlatformSet *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIPlatformSetPrivate::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x10;
  return;
}

// CanExecuteOnTarget @ 1491b6d00

bool __thiscall
UNiagaraDataInterfacePlatformSet::CanExecuteOnTarget
          (UNiagaraDataInterfacePlatformSet *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1491b7d80

bool __thiscall
UNiagaraDataInterfacePlatformSet::CopyToInternal
          (UNiagaraDataInterfacePlatformSet *this,UNiagaraDataInterface *param_1)

{
  UNiagaraDataInterface *pUVar1;
  int *piVar2;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  UClass *pUVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FString local_28;
  FString local_18;
  
  bVar10 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar10) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar12 = GetTypeName<UNiagaraDataInterfacePlatformSet>(&local_28);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar11 = StaticClass();
  iVar6 = (int)pUVar11->_padding_;
  if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
      == &pUVar11->_padding_)) {
    pUVar1 = param_1 + 1;
    if (pUVar1 != (UNiagaraDataInterface *)&this->Platforms) {
      iVar6 = (this->Platforms).DeviceProfileStates.ArrayNum;
      piVar2 = (int *)((longlong)&param_1[1]._padding_ + 4);
      pFVar9 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
      iVar7 = *piVar2;
      *(int *)&param_1[1]._padding_ = iVar6;
      if ((iVar6 == 0) && (iVar7 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar6,iVar7,(ForAnyElementType *)pUVar1,iVar6,piVar2);
        if (iVar6 != 0) {
          memcpy((FScriptContainerElement *)pUVar1->_padding_,pFVar9,(longlong)iVar6 << 4);
        }
      }
    }
    pTVar3 = &(this->Platforms).CVarConditions;
    plVar4 = &param_1[1]._padding_;
    if ((TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *)plVar4 != pTVar3) {
      iVar6 = (this->Platforms).CVarConditions.ArrayNum;
      piVar2 = (int *)((longlong)&param_1[1]._padding_ + 4);
      iVar7 = *piVar2;
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      *(int *)&param_1[1]._padding_ = iVar6;
      if ((iVar6 == 0) && (iVar7 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar6,iVar7,(ForAnyElementType *)plVar4,iVar6,piVar2);
        if (iVar6 != 0) {
          memcpy((void *)*plVar4,pFVar9,(longlong)iVar6 * 0x30);
        }
      }
    }
    uVar8 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
    *(int *)&param_1[1]._padding_ = (this->Platforms).QualityLevelMask;
    puVar5 = (uint *)((longlong)&param_1[1]._padding_ + 4);
    *puVar5 = *puVar5 ^ (uVar8 ^ (this->Platforms).bEnabledForCurrentProfileAndEffectQuality) & 1;
    *(uint *)&param_1[1].Proxy.Ptr = (this->Platforms).LastBuiltFrame;
    return true;
  }
  pFVar12 = GetTypeName<UNiagaraDataInterfacePlatformSet>(&local_28);
  pwVar13 = L"";
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  pFVar12 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar12->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar14);
}

// Equals @ 1491c12e0

bool __thiscall
UNiagaraDataInterfacePlatformSet::Equals
          (UNiagaraDataInterfacePlatformSet *this,UNiagaraDataInterface *param_1)

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
      bVar2 = FNiagaraPlatformSet::operator==((FNiagaraPlatformSet *)(param_1 + 1),&this->Platforms)
      ;
      return bVar2;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfacePlatformSet_const_>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfacePlatformSet_const_>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetPrivateStaticClass @ 1491ca260

UClass * __cdecl UNiagaraDataInterfacePlatformSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfacePlatformSet",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePlatformSet,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePlatformSet>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePlatformSet>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.InnerSingleton;
}

// GetVMExternalFunction @ 1491cf3c0

void __thiscall
UNiagaraDataInterfacePlatformSet::GetVMExternalFunction
          (UNiagaraDataInterfacePlatformSet *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (((param_1->Name == NDIPlatformSetPrivate::IsActiveName) &&
      ((param_1->InputParamLocations).ArrayNum == 0)) && (param_1->NumOutputs == 1)) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePlatformSet_IsActiveBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_40.DelegateSize != 0) &&
       (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_40,0,0,0x10);
      local_40.DelegateSize = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  return;
}

// IsActive @ 1491d3d20

void __thiscall
UNiagaraDataInterfacePlatformSet::IsActive
          (UNiagaraDataInterfacePlatformSet *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_10 [2];
  
  iVar3 = 0;
  local_10[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar4 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  bVar1 = FNiagaraPlatformSet::IsActive(&this->Platforms);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)((bVar1 ^ 1) - 1);
      pfVar2 = pfVar2 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// PostInitProperties @ 1491d78b0

void __thiscall
UNiagaraDataInterfacePlatformSet::PostInitProperties(UNiagaraDataInterfacePlatformSet *this)

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
  }
  return;
}

// PostLoad @ 1491d7ec0

void __thiscall UNiagaraDataInterfacePlatformSet::PostLoad(UNiagaraDataInterfacePlatformSet *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  if ((this->_padding_ & 0x10) == 0) {
    bVar3 = FNiagaraPlatformSet::IsActive(&this->Platforms);
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(bool *)(lVar1 + 0x10) = bVar3;
  }
  return;
}

// SetShaderParameters @ 1491e0850

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
UNiagaraDataInterfacePlatformSet::SetShaderParameters
          (UNiagaraDataInterfacePlatformSet *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  
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
  uVar5 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NDIPlatformSetPrivate::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar4->Size + uVar5;
  *(uint *)(param_1->BaseParameters + uVar5) = (uint)((char)pFVar1[1]._padding_ != '\0');
  return;
}

// StaticRegisterNativesUNiagaraDataInterfacePlatformSet @ 1491e35e0

void __cdecl
UNiagaraDataInterfacePlatformSet::StaticRegisterNativesUNiagaraDataInterfacePlatformSet(void)

{
  return;
}

