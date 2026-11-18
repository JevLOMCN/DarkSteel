// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// StaticClass @ 148e89d10

UClass * __cdecl UNiagaraDataInterfaceEmitterProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceEmitterProperties",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceEmitterProperties,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceEmitterProperties>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceEmitterProperties>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.InnerSingleton;
}

// UNiagaraDataInterfaceEmitterProperties @ 148ea4d80

UNiagaraDataInterfaceEmitterProperties * __thiscall
UNiagaraDataInterfaceEmitterProperties::UNiagaraDataInterfaceEmitterProperties
          (UNiagaraDataInterfaceEmitterProperties *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceEmitterProperties__6B_;
  (this->EmitterBinding).EmitterName.Number = 0;
  (this->EmitterBinding).BindingMode = Other;
  (this->EmitterBinding).EmitterName.ComparisonIndex = 0;
  return this;
}

// UNiagaraDataInterfaceEmitterProperties @ 148ea4dc0

UNiagaraDataInterfaceEmitterProperties * __thiscall
UNiagaraDataInterfaceEmitterProperties::UNiagaraDataInterfaceEmitterProperties
          (UNiagaraDataInterfaceEmitterProperties *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceEmitterProperties__6B_;
  (this->EmitterBinding).BindingMode = Other;
  (this->EmitterBinding).EmitterName.ComparisonIndex = 0;
  (this->EmitterBinding).EmitterName.Number = 0;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNDIProxy_NDIEmitterPropertiesLocal__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceEmitterProperties @ 148ea6cc0

void __thiscall
UNiagaraDataInterfaceEmitterProperties::~UNiagaraDataInterfaceEmitterProperties
          (UNiagaraDataInterfaceEmitterProperties *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceEmitterProperties__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 148eacb70

void __thiscall
UNiagaraDataInterfaceEmitterProperties::BuildShaderParameters
          (UNiagaraDataInterfaceEmitterProperties *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceEmitterProperties::FShaderParameters>
           ::GetStructMetadata();
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x50;
  return;
}

// CanExecuteOnTarget @ 148eadd00

bool __thiscall
UNiagaraDataInterfaceEmitterProperties::CanExecuteOnTarget
          (UNiagaraDataInterfaceEmitterProperties *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148eaf490

bool __thiscall
UNiagaraDataInterfaceEmitterProperties::CopyToInternal
          (UNiagaraDataInterfaceEmitterProperties *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      param_1[1]._padding_ = *(longlong *)&this->EmitterBinding;
      *(uint *)&param_1[1]._padding_ = (this->EmitterBinding).EmitterName.Number;
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceEmitterProperties>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceEmitterProperties>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 148eb4660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData
          (UNiagaraDataInterfaceEmitterProperties *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    lStack_70 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData_::__l5::TSTR_NDIEmitter_InitRT163>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      lStack_40 = lStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::__l5::TSTR_NDIEmitter_InitRT163>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// Equals @ 148eb6290

bool __thiscall
UNiagaraDataInterfaceEmitterProperties::Equals
          (UNiagaraDataInterfaceEmitterProperties *this,UNiagaraDataInterface *param_1)

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
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceEmitterProperties_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceEmitterProperties_const_>(&local_28);
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
    if (((ENiagaraDataInterfaceEmitterBindingMode)param_1[1]._padding_ ==
         (this->EmitterBinding).BindingMode) &&
       (*(FName *)((longlong)&param_1[1]._padding_ + 4) == (this->EmitterBinding).EmitterName)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148ebfaa0

UClass * __cdecl UNiagaraDataInterfaceEmitterProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceEmitterProperties",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceEmitterProperties,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceEmitterProperties>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceEmitterProperties>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.InnerSingleton;
}

// GetVMExternalFunction @ 148ec38c0

void __thiscall
UNiagaraDataInterfaceEmitterProperties::GetVMExternalFunction
          (UNiagaraDataInterfaceEmitterProperties *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIEmitterPropertiesLocal::GetLocalSpaceName) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceEmitterProperties::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar2[3] = this;
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
  }
  else if (FVar1 == NDIEmitterPropertiesLocal::GetBoundsName) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceEmitterProperties::GetVMExternalFunction'::`9'::<lambda_2>_>
                 ::_vftable_;
      puVar2[3] = this;
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
  }
  else if (FVar1 == NDIEmitterPropertiesLocal::GetFixedBoundsName) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceEmitterProperties::GetVMExternalFunction'::`13'::<lambda_3>_>
                 ::_vftable_;
      puVar2[3] = this;
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
  }
  else {
    if (FVar1 != NDIEmitterPropertiesLocal::SetFixedBoundsName) {
      return;
    }
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceEmitterProperties::GetVMExternalFunction'::`17'::<lambda_4>_>
                 ::_vftable_;
      puVar2[3] = this;
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
  }
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
  return;
}

// HasPreSimulateTick @ 148ec69f0

bool __thiscall
UNiagaraDataInterfaceEmitterProperties::HasPreSimulateTick
          (UNiagaraDataInterfaceEmitterProperties *this)

{
  return true;
}

// InitPerInstanceData @ 148ec7b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData
          (UNiagaraDataInterfaceEmitterProperties *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNiagaraEmitterInstance *pFVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  code *local_b8;
  code *pcStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pFVar4 = FNiagaraDataInterfaceEmitterBinding::Resolve
                     (&this->EmitterBinding,param_2,(UNiagaraDataInterface *)this);
  *(FNiagaraEmitterInstance **)param_1 = pFVar4;
  if (pFVar4 != (FNiagaraEmitterInstance *)0x0) {
    *(byte *)((longlong)param_1 + 8) = pFVar4->bLocalSpace;
  }
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    pcVar1 = (code *)this->_padding_;
    if (pcVar1 == (code *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pcStack_b0 = (code *)param_2->ID;
    local_a8 = *(undefined1 *)((longlong)param_1 + 8);
    local_98[0] = (code *)0x0;
    local_b8 = pcVar1;
    local_70 = FMemory::Malloc(0x20,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::`8'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = local_b8;
    local_70[2] = pcStack_b0;
    local_70[3] = (code *)CONCAT71(uStack_a7,local_a8);
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData_::__l8::TSTR_NDIEmitter_InitRT141>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::__l8::TSTR_NDIEmitter_InitRT141>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if (2 < uVar7) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar6 = local_40;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar6 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar6 = local_70;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
  }
  return true;
}

// PerInstanceDataSize @ 148ec8f80

int __thiscall
UNiagaraDataInterfaceEmitterProperties::PerInstanceDataSize
          (UNiagaraDataInterfaceEmitterProperties *this)

{
  return 0x10;
}

// PerInstanceTick @ 148ec9070

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
UNiagaraDataInterfaceEmitterProperties::PerInstanceTick
          (UNiagaraDataInterfaceEmitterProperties *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (void *)0x0) || (param_2 == (FNiagaraSystemInstance *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerInstanceData && SystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceEmitterProperties.cpp"
                       ,0xbe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// PostInitProperties @ 148ecb210

void __thiscall
UNiagaraDataInterfaceEmitterProperties::PostInitProperties
          (UNiagaraDataInterfaceEmitterProperties *this)

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

// ProvidePerInstanceDataForRenderThread @ 148ecc2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceEmitterProperties::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceEmitterProperties *this,void *param_1,void *param_2,ulong64 *param_3
          )

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  TBox<double> *pTVar11;
  undefined1 auStack_68 [32];
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (this->_padding_ == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypedProxy != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                        ,0x3a0,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined8 *)param_1 = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  lVar2 = *(longlong *)param_2;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0xe8);
    uVar5 = *(undefined8 *)(lVar2 + 0xf0);
    uVar6 = *(undefined8 *)(lVar2 + 0xf8);
    uVar7 = *(undefined8 *)(lVar2 + 0x100);
    uVar8 = *(undefined8 *)(lVar2 + 0x108);
    uVar1 = *(undefined8 *)(lVar2 + 0x110);
    *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)((longlong)param_1 + 8) = uVar4;
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    pTVar11 = FNiagaraEmitterInstance::GetFixedBounds
                        (*(FNiagaraEmitterInstance **)param_2,&local_48);
    dVar9 = (pTVar11->Min).field0_0x0._s_0.Y;
    *(double *)((longlong)param_1 + 0x38) = (pTVar11->Min).field0_0x0._s_0.X;
    *(double *)((longlong)param_1 + 0x40) = dVar9;
    dVar9 = (pTVar11->Max).field0_0x0._s_0.X;
    *(double *)((longlong)param_1 + 0x48) = (pTVar11->Min).field0_0x0._s_0.Z;
    *(double *)((longlong)param_1 + 0x50) = dVar9;
    dVar9 = (pTVar11->Max).field0_0x0._s_0.Z;
    *(double *)((longlong)param_1 + 0x58) = (pTVar11->Max).field0_0x0._s_0.Y;
    *(double *)((longlong)param_1 + 0x60) = dVar9;
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)&pTVar11->IsValid;
  }
  return;
}

// SetShaderParameters @ 148ed0810

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
UNiagaraDataInterfaceEmitterProperties::SetShaderParameters
          (UNiagaraDataInterfaceEmitterProperties *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  double dVar1;
  double dVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  FShaderParametersMetadata *pFVar8;
  uint uVar9;
  ulong64 *puVar10;
  ulong64 *puVar11;
  FName *pFVar12;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar7 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar10 = (ulong64 *)0x0;
  puVar11 = puVar10;
  if (pFVar3[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar3[4]._padding_ + 4))
  {
    pFVar12 = (FName *)pFVar3[5]._padding_;
    if ((FName *)pFVar3[5]._padding_ == (FName *)0x0) {
      pFVar12 = &pFVar3[4].SourceDIName;
    }
    uVar9 = (&pFVar12->ComparisonIndex)
            [(uVar7 >> 0x20) * 0x17 + uVar7 &
             (ulonglong)(pFVar3[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar9 != 0xffffffff) {
      do {
        puVar11 = (ulong64 *)((longlong)(int)uVar9 * 0x88 + pFVar3[1]._padding_);
        if (*puVar11 == uVar7) {
          if (puVar11 != (ulong64 *)0x0) goto LAB_148ed08e9;
          break;
        }
        uVar9 = (uint)puVar11[0x10];
        puVar11 = puVar10;
      } while (uVar9 != 0xffffffff);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_148ed08e9:
  uVar9 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceEmitterProperties::FShaderParameters>
           ::GetStructMetadata();
  puVar4 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar8->Size + uVar9;
  *(uint *)(puVar4 + uVar9) = (uint)((char)puVar11[1] != '\0');
  *(uint *)(puVar4 + (ulonglong)uVar9 + 4) = (uint)(byte)puVar11[8];
  dVar1 = (double)puVar11[3];
  dVar2 = (double)puVar11[4];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x10) = (float)(double)puVar11[2];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x14) = (float)dVar1;
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x18) = (float)dVar2;
  dVar1 = (double)puVar11[6];
  dVar2 = (double)puVar11[7];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x20) = (float)(double)puVar11[5];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x24) = (float)dVar1;
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x28) = (float)dVar2;
  *(uint *)(puVar4 + (ulonglong)uVar9 + 0x2c) = (uint)(byte)puVar11[0xf];
  dVar1 = (double)puVar11[10];
  dVar2 = (double)puVar11[0xb];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x30) = (float)(double)puVar11[9];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x34) = (float)dVar1;
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x38) = (float)dVar2;
  dVar1 = (double)puVar11[0xd];
  dVar2 = (double)puVar11[0xe];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x40) = (float)(double)puVar11[0xc];
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x44) = (float)dVar1;
  *(float *)(puVar4 + (ulonglong)uVar9 + 0x48) = (float)dVar2;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceEmitterProperties @ 148ed4c10

void __cdecl
UNiagaraDataInterfaceEmitterProperties::StaticRegisterNativesUNiagaraDataInterfaceEmitterProperties
          (void)

{
  return;
}

// VMGetBounds @ 148ed9260

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
UNiagaraDataInterfaceEmitterProperties::VMGetBounds
          (UNiagaraDataInterfaceEmitterProperties *this,FVectorVMExternalFunctionContext *param_1)

{
  char cVar1;
  FNiagaraEmitterInstance *pFVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  float *local_118;
  int local_110 [2];
  float *local_108;
  float *local_100;
  float *local_f8;
  FInstanceData_GameThread *local_f0;
  FVectorVMExternalFunctionContext *local_e8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_e0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_b0 [2];
  char local_50;
  
  local_e8 = param_1;
  VectorVM::FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)&local_f8,
             param_1);
  iVar7 = 0;
  local_110[0] = 0;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  lVar6 = (longlong)local_110[0];
  local_108 = local_108 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_e0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (local_b0,param_1);
  pFVar2 = local_f0->EmitterInstance;
  if (pFVar2 == (FNiagaraEmitterInstance *)0x0) {
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    local_50 = '\0';
    dVar14 = 0.0;
    dVar15 = 0.0;
    cVar1 = local_50;
  }
  else {
    dVar9 = (pFVar2->CachedBounds).Min.field0_0x0._s_0.X;
    dVar10 = (pFVar2->CachedBounds).Min.field0_0x0._s_0.Y;
    dVar12 = (pFVar2->CachedBounds).Min.field0_0x0._s_0.Z;
    dVar13 = (pFVar2->CachedBounds).Max.field0_0x0._s_0.X;
    dVar14 = (pFVar2->CachedBounds).Max.field0_0x0._s_0.Y;
    dVar15 = (pFVar2->CachedBounds).Max.field0_0x0._s_0.Z;
    cVar1 = (pFVar2->CachedBounds).IsValid;
  }
  fVar11 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (cVar1 == '\0') {
    local_118._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar8 = local_118._0_4_;
    uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar3 = local_118._0_4_;
    fVar4 = fVar11;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    fVar11 = (float)dVar14;
    fVar8 = (float)dVar13;
    uVar16 = (float)dVar15;
    fVar3 = (float)dVar9;
    fVar4 = (float)dVar10;
    uVar5 = (float)dVar12;
  }
  if (0 < param_1->NumInstances) {
    local_118 = local_b0[0].Z.Register;
    local_f8 = local_b0[0].Y.Register;
    local_100 = local_b0[0].X.Register;
    do {
      iVar7 = iVar7 + 1;
      *local_108 = (float)-(uint)(cVar1 != '\0');
      local_108 = local_108 + lVar6;
      *local_e0.X.Register = fVar3;
      *local_e0.Y.Register = fVar4;
      *local_e0.Z.Register = (float)uVar5;
      *local_100 = fVar8;
      local_100 = local_100 + local_b0[0].X.AdvanceOffset;
      *local_f8 = fVar11;
      local_f8 = local_f8 + local_b0[0].Y.AdvanceOffset;
      *local_118 = (float)uVar16;
      local_e0.Y.Register = local_e0.Y.Register + local_e0.Y.AdvanceOffset;
      local_e0.X.Register = local_e0.X.Register + local_e0.X.AdvanceOffset;
      local_e0.Z.Register = local_e0.Z.Register + local_e0.Z.AdvanceOffset;
      local_118 = local_118 + local_b0[0].Z.AdvanceOffset;
    } while (iVar7 < local_e8->NumInstances);
  }
  return;
}

// VMGetFixedBounds @ 148ed9760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceEmitterProperties::VMGetFixedBounds
          (UNiagaraDataInterfaceEmitterProperties *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  TVector<double>_u_0 *pTVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_148 [32];
  float *local_128;
  int local_120 [2];
  float *local_118;
  float *local_110;
  float *local_108;
  FInstanceData_GameThread *local_100;
  FVectorVMExternalFunctionContext *local_f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_f0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_c0;
  TVector<double>_u_0 local_90;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f8 = param_1;
  VectorVM::FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)&local_108,
             param_1);
  iVar6 = 0;
  local_120[0] = 0;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  lVar5 = (longlong)local_120[0];
  local_118 = local_118 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_f0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_c0,param_1);
  if (local_100->EmitterInstance == (FNiagaraEmitterInstance *)0x0) {
    local_60 = 0;
    pTVar4 = &local_90;
    local_90._s_0.X = 0.0;
    local_90._s_0.Y = 0.0;
    local_90._s_0.Z = 0.0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
  }
  else {
    pTVar4 = (TVector<double>_u_0 *)
             FNiagaraEmitterInstance::GetFixedBounds
                       (local_100->EmitterInstance,(TBox<double> *)&local_90._s_0);
  }
  local_60._0_1_ = SUB81(pTVar4->XYZ[6],0);
  fVar8 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if ((char)local_60 == '\0') {
    local_128._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar7 = local_128._0_4_;
    uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar1 = local_128._0_4_;
    fVar2 = fVar8;
    uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    fVar8 = (float)pTVar4->XYZ[4];
    fVar7 = (float)(((TVector<double> *)(pTVar4->XYZ + 3))->field0_0x0)._s_0.X;
    uVar9 = (float)pTVar4->XYZ[5];
    fVar1 = (float)(((TVector<double> *)&(pTVar4->_s_0).X)->field0_0x0)._s_0.X;
    fVar2 = (float)(pTVar4->_s_0).Y;
    uVar3 = (float)(pTVar4->_s_0).Z;
  }
  if (0 < param_1->NumInstances) {
    local_128 = local_c0.Z.Register;
    local_108 = local_c0.Y.Register;
    local_110 = local_c0.X.Register;
    do {
      iVar6 = iVar6 + 1;
      *local_118 = (float)-(uint)((char)local_60 != '\0');
      local_118 = local_118 + lVar5;
      *local_f0.X.Register = fVar1;
      *local_f0.Y.Register = fVar2;
      *local_f0.Z.Register = (float)uVar3;
      *local_110 = fVar7;
      local_110 = local_110 + local_c0.X.AdvanceOffset;
      *local_108 = fVar8;
      local_108 = local_108 + local_c0.Y.AdvanceOffset;
      *local_128 = (float)uVar9;
      local_f0.Y.Register = local_f0.Y.Register + local_f0.Y.AdvanceOffset;
      local_f0.X.Register = local_f0.X.Register + local_f0.X.AdvanceOffset;
      local_f0.Z.Register = local_f0.Z.Register + local_f0.Z.AdvanceOffset;
      local_128 = local_128 + local_c0.Z.AdvanceOffset;
    } while (iVar6 < local_f8->NumInstances);
  }
  return;
}

// VMGetLocalSpace @ 148ed9f10

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
UNiagaraDataInterfaceEmitterProperties::VMGetLocalSpace
          (UNiagaraDataInterfaceEmitterProperties *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)-(uint)((local_18.Ptr)->bLocalSpace != false);
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMSetFixedBounds @ 148edc6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceEmitterProperties::VMSetFixedBounds
          (UNiagaraDataInterfaceEmitterProperties *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FNiagaraEmitterInstance *this_00;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_178 [32];
  float *local_158;
  float *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  float *local_100;
  FInstanceData_GameThread *local_f8;
  int local_e0 [2];
  FNDIInputParam<UE::Math::TVector<float>_> local_d8;
  TVector<double>_u_0 local_88;
  float *local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  VectorVM::FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)&local_100,
             param_1);
  iVar9 = 0;
  local_e0[0] = 0;
  local_128 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar7 = local_e0[0];
  lVar13 = (longlong)local_e0[0];
  local_e0[0] = 0;
  local_128 = local_128 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  local_158 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar14 = (longlong)local_e0[0];
  local_158 = local_158 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)&local_88._s_0,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_d8,param_1);
  this_00 = local_f8->EmitterInstance;
  if ((this_00 != (FNiagaraEmitterInstance *)0x0) && (0 < param_1->NumInstances)) {
    local_100 = (float *)CONCAT71(uStack_57,local_58);
    local_150 = local_70;
    local_148 = (float *)local_88._s_0.X;
    local_140 = local_d8.Z.InputPtr;
    local_120 = (longlong)(int)local_88._16_4_ << 2;
    local_118 = (longlong)local_d8.Z.AdvanceOffset << 2;
    lVar10 = (longlong)local_d8.Y.AdvanceOffset << 2;
    local_138 = local_d8.Y.InputPtr;
    lVar11 = (longlong)local_d8.X.AdvanceOffset << 2;
    lVar12 = (longlong)local_60._0_4_;
    local_130 = local_d8.X.InputPtr;
    local_110 = lVar10;
    local_108 = lVar11;
    do {
      local_58 = *local_158 != 0.0;
      local_158 = local_158 + lVar14;
      pfVar1 = local_100 + local_48;
      local_88._s_0.Z = (double)*local_100;
      pfVar2 = local_150 + lVar12;
      pfVar8 = (float *)(local_118 + (longlong)local_140);
      fVar6 = *local_148;
      local_148 = (float *)(local_120 + (longlong)local_148);
      local_88._s_0.X = (double)fVar6;
      local_88._s_0.Y = (double)*local_150;
      pfVar3 = (float *)(lVar10 + (longlong)local_138);
      pfVar4 = (float *)(lVar11 + (longlong)local_130);
      local_68 = (double)*local_138;
      pfVar5 = local_128 + lVar13;
      local_60 = (double)*local_140;
      local_70 = (float *)(double)*local_130;
      fVar6 = *local_128;
      local_150 = pfVar2;
      local_140 = pfVar8;
      local_138 = pfVar3;
      local_130 = pfVar4;
      local_128 = pfVar5;
      local_100 = pfVar1;
      if (fVar6 != 0.0) {
        FNiagaraEmitterInstance::SetFixedBounds(this_00,(TBox<double> *)&local_88._s_0);
        lVar10 = local_110;
        lVar11 = local_108;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

