// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// StaticClass @ 1491edd80

UClass * __cdecl UNiagaraDataInterfaceVirtualTextureSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVirtualTextureSample",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVirtualTextureSample,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceVirtualTextureSample>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTextureSample>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton;
}

// UNiagaraDataInterfaceVirtualTextureSample @ 149214460

UNiagaraDataInterfaceVirtualTextureSample * __thiscall
UNiagaraDataInterfaceVirtualTextureSample::UNiagaraDataInterfaceVirtualTextureSample
          (UNiagaraDataInterfaceVirtualTextureSample *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTextureSample__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  return this;
}

// UNiagaraDataInterfaceVirtualTextureSample @ 1492144a0

UNiagaraDataInterfaceVirtualTextureSample * __thiscall
UNiagaraDataInterfaceVirtualTextureSample::UNiagaraDataInterfaceVirtualTextureSample
          (UNiagaraDataInterfaceVirtualTextureSample *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTextureSample__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyVirtualTextureSample__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->TextureUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceVirtualTextureSample @ 149216430

void __thiscall
UNiagaraDataInterfaceVirtualTextureSample::~UNiagaraDataInterfaceVirtualTextureSample
          (UNiagaraDataInterfaceVirtualTextureSample *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVirtualTextureSample__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 149220af0

void __thiscall
UNiagaraDataInterfaceVirtualTextureSample::BuildShaderParameters
          (UNiagaraDataInterfaceVirtualTextureSample *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVirtualTextureSample::FShaderParameters>
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x70;
  return;
}

// CanBeInCluster @ 149221af0

bool __thiscall
UNiagaraDataInterfaceVirtualTextureSample::CanBeInCluster
          (UNiagaraDataInterfaceVirtualTextureSample *this)

{
  return false;
}

// CanExecuteOnTarget @ 149221bb0

bool __thiscall
UNiagaraDataInterfaceVirtualTextureSample::CanExecuteOnTarget
          (UNiagaraDataInterfaceVirtualTextureSample *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 1492237b0

bool __thiscall
UNiagaraDataInterfaceVirtualTextureSample::CopyToInternal
          (UNiagaraDataInterfaceVirtualTextureSample *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UTexture *pUVar2;
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
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Texture).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UTexture>_u_0 *)(param_1 + 1) = (this->Texture).field0_0x0;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1]._padding_,&(this->TextureUserParameter).Parameter);
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 14922bb70

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
UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData
          (UNiagaraDataInterfaceVirtualTextureSample *this,void *param_1,
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
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
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
              TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData_::__l2::TSTR_NDIVirtualTexture_RemoveInstance174>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::TSTR_NDIVirtualTexture_RemoveInstance174>
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
  return;
}

// Equals @ 14922df90

bool __thiscall
UNiagaraDataInterfaceVirtualTextureSample::Equals
          (UNiagaraDataInterfaceVirtualTextureSample *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVirtualTextureSample_const_>(&local_28);
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
    if ((((UTexture *)param_1[1]._padding_ == (this->Texture).field0_0x0.DebugPtr) &&
        ((this->TextureUserParameter).Parameter._padding_ == param_1[1]._padding_)) &&
       ((int)(this->TextureUserParameter).Parameter._padding_ == (int)param_1[1]._padding_)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149237480

UClass * __cdecl UNiagaraDataInterfaceVirtualTextureSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVirtualTextureSample",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVirtualTextureSample,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceVirtualTextureSample>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVirtualTextureSample>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVirtualTextureSample.InnerSingleton;
}

// GetVMExternalFunction @ 14923b4e0

void __thiscall
UNiagaraDataInterfaceVirtualTextureSample::GetVMExternalFunction
          (UNiagaraDataInterfaceVirtualTextureSample *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this_00;
  UNiagaraDataInterfaceVirtualTextureSample *local_res10;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [8];
  FDelegateAllocation local_a8;
  UNiagaraDataInterfaceVirtualTextureSample *local_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_1->Name == GetTextureDimensionsName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVirtualTextureSample.cpp"
                           ,0x93,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVirtualTextureSample____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVirtualTextureSample *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVirtualTextureSample *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = VMGetTextureDimensions;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_90);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else {
    if (param_1->Name != GetNumMipLevelsName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVirtualTextureSample.cpp"
                           ,0x98,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_b0 = (undefined1  [8])0x0;
    local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_a8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_a8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVirtualTextureSample____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVirtualTextureSample *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_98 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVirtualTextureSample *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_98);
      puVar3[4] = VMGetNumMipLevels;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
               (FWriteAccessScope *)&local_78);
    if ((local_a8.DelegateSize != 0) &&
       (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a8,0,0,0x10);
      local_a8.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a8.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_b0;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 14923c5c0

bool __thiscall
UNiagaraDataInterfaceVirtualTextureSample::HasPreSimulateTick
          (UNiagaraDataInterfaceVirtualTextureSample *this)

{
  return true;
}

// InitPerInstanceData @ 14923fa10

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
UNiagaraDataInterfaceVirtualTextureSample::InitPerInstanceData
          (UNiagaraDataInterfaceVirtualTextureSample *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  int iVar1;
  longlong local_res8;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x30),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x30) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x18),
             (FNiagaraParameterStore *)&local_res8,(FNiagaraVariable *)&param_2->InstanceParameters)
  ;
  return true;
}

// PerInstanceDataSize @ 149244780

int __thiscall
UNiagaraDataInterfaceVirtualTextureSample::PerInstanceDataSize
          (UNiagaraDataInterfaceVirtualTextureSample *this)

{
  return 0x50;
}

// PerInstanceTick @ 149246030

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
UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick
          (UNiagaraDataInterfaceVirtualTextureSample *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  TObjectPtr<UObject> this_00;
  UClass *pUVar7;
  FRenderCommandList *pFVar8;
  FCommandList *pFVar9;
  FRenderCommandTag *pFVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  UTexture2D *this_01;
  float fVar14;
  undefined1 auStack_198 [32];
  FWeakObjectPtr local_178;
  undefined8 local_170;
  UTexture2D *local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined **ppuStack_150;
  UTexture2D *local_148;
  FWeakObjectPtr FStack_140;
  int local_138;
  undefined4 uStack_134;
  undefined1 local_130 [8];
  code *local_128 [2];
  undefined **local_118 [3];
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  longlong lStack_e0;
  ulong64 local_d8;
  undefined ***local_d0;
  undefined1 local_c8 [40];
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  this_01 = (UTexture2D *)(this->Texture).field0_0x0.DebugPtr;
  if (*(int *)((longlong)param_1 + 0x18) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x20),(int)local_130);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar7 = Z_Construct_UClass_UTexture_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar7);
      if (bVar3) {
        this_01 = *(UTexture2D **)this_00.field0_0x0;
        goto LAB_1492460a0;
      }
    }
    this_01 = (UTexture2D *)0x0;
  }
LAB_1492460a0:
  if (this_01 != (UTexture2D *)0x0) {
    fVar14 = (float)(**(code **)(this_01->_padding_ + 0x368))(this_01);
    local_178.ObjectIndex = (int)fVar14;
    fVar14 = (float)(**(code **)(this_01->_padding_ + 0x370))(this_01);
    local_178.ObjectSerialNumber = (int)fVar14;
    pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)((longlong)&this_01[1]._padding_ + 4);
      }
    }
    else {
      iVar6 = UTexture2D::GetNumMips(this_01);
    }
    lVar2 = this_01->_padding_;
    bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01);
    if ((((bVar3) && ((lVar2 & 0x4000000000000) != 0)) &&
        (bVar3 = UStreamableRenderAsset::IsFullyStreamedIn((UStreamableRenderAsset *)this_01), bVar3
        )) && ((bVar3 = UStreamableRenderAsset::HasPendingInitOrStreaming
                                  ((UStreamableRenderAsset *)this_01,false), !bVar3 &&
               (cVar4 = (**(code **)(this_01->_padding_ + 0x10))(), cVar4 == '\0')))) {
      local_168 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_168);
      FStack_140 = local_178;
      *(FWeakObjectPtr *)((longlong)param_1 + 8) = local_178;
      *(int *)((longlong)param_1 + 0x10) = iVar6;
      local_158 = (undefined **)this->_padding_;
      if ((local_158 == (undefined **)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      ppuStack_150 = (undefined **)param_2->ID;
      local_128[0] = (code *)0x0;
      local_148 = this_01;
      local_138 = iVar6;
      local_100 = FMemory::Malloc(0x30,8);
      *local_100 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::`25'::<lambda_1>,1,1>
                    ::_vftable_;
      local_100[1] = local_158;
      local_100[2] = ppuStack_150;
      local_100[3] = (undefined **)local_148;
      *(FWeakObjectPtr *)(local_100 + 4) = FStack_140;
      local_100[5] = (undefined **)CONCAT44(uStack_134,local_138);
      if (local_100 + 1 != (undefined ***)0x0) {
        local_128[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      pFVar8 = FRenderCommandList::GetInstanceTLS();
      if (pFVar8 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick_::__l25::TSTR_NDIVirtualTexture_UpdateInstance235>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
      }
      else {
        pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
        local_c8._0_8_ = local_128[0];
        local_128[0] = (code *)0x0;
        local_a0 = local_100;
        local_100 = (undefined ***)0x0;
        local_c8._16_8_ = local_118[0];
        local_c8._24_8_ = local_118[1];
        local_c8._32_8_ = local_118[2];
        local_98 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::TSTR_NDIVirtualTexture_UpdateInstance235>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_c8,pFVar10);
        uVar13 = (ulonglong)local_98;
        if ((2 < uVar13) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_c8._0_8_ != (code *)0x0) {
            pppuVar12 = (undefined ***)(local_c8 + 0x10);
            if (local_a0 != (undefined ***)0x0) {
              pppuVar12 = local_a0;
            }
            (*(code *)(*pppuVar12)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_c8);
        }
      }
      if (local_128[0] == (code *)0x0) {
        return false;
      }
      pppuVar12 = (undefined ***)(local_128 + 2);
      pppuVar11 = local_100;
      goto LAB_1492464d1;
    }
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_160 = 0;
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_160);
  *(FWeakObjectPtr *)param_1 = local_178;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  lStack_e0 = this->_padding_;
  local_170 = 0;
  if ((lStack_e0 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_d0 = (undefined ***)0x0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::`27'::<lambda_2>,1,0>
              ::_vftable_;
  local_d8 = param_2->ID;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  pFVar8 = FRenderCommandList::GetInstanceTLS();
  if (pFVar8 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick_::__l27::TSTR_NDIVirtualTexture_UpdateInstance254>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
  }
  else {
    pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
    local_88._0_8_ = local_f8[0];
    local_f8[0] = (code *)0x0;
    local_60 = local_d0;
    local_78 = local_e8;
    lStack_70 = lStack_e0;
    local_68 = local_d8;
    local_58 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::TSTR_NDIVirtualTexture_UpdateInstance254>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_88,pFVar10);
    uVar13 = (ulonglong)local_58;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar12 = local_60;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_88);
    }
  }
  if (local_f8[0] == (code *)0x0) {
    return false;
  }
  pppuVar12 = &local_e8;
  pppuVar11 = local_d0;
LAB_1492464d1:
  if (pppuVar11 != (undefined ***)0x0) {
    pppuVar12 = pppuVar11;
  }
  (*(code *)(*pppuVar12)[2])();
  return false;
}

// PostInitProperties @ 149246de0

void __thiscall
UNiagaraDataInterfaceVirtualTextureSample::PostInitProperties
          (UNiagaraDataInterfaceVirtualTextureSample *this)

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

// SetShaderParameters @ 14924ed10

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
UNiagaraDataInterfaceVirtualTextureSample::SetShaderParameters
          (UNiagaraDataInterfaceVirtualTextureSample *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  undefined4 uVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FVirtualTexture2DResource *this_00;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FShaderParametersMetadata *pFVar7;
  IAllocatedVirtualTexture *pIVar8;
  longlong lVar9;
  undefined8 uVar10;
  FRHITexture *pFVar11;
  uint uVar12;
  uchar *puVar13;
  undefined8 *puVar14;
  FName *pFVar15;
  undefined8 *puVar16;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar5 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar14 = (undefined8 *)0x0;
  puVar6 = puVar14;
  if (pFVar2[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar2[4]._padding_ + 4))
  {
    pFVar15 = (FName *)pFVar2[5]._padding_;
    if ((FName *)pFVar2[5]._padding_ == (FName *)0x0) {
      pFVar15 = &pFVar2[4].SourceDIName;
    }
    uVar12 = (&pFVar15->ComparisonIndex)
             [(uVar5 >> 0x20) * 0x17 + uVar5 &
              (ulonglong)(pFVar2[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar12 != 0xffffffff) {
      do {
        puVar6 = (undefined8 *)(pFVar2[1]._padding_ + (longlong)(int)uVar12 * 0x28);
        if (*(ulong64 *)(pFVar2[1]._padding_ + (longlong)(int)uVar12 * 0x28) == uVar5) break;
        uVar12 = *(uint *)(puVar6 + 4);
        puVar6 = puVar14;
      } while (uVar12 != 0xffffffff);
    }
  }
  puVar16 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar16 = puVar14;
  }
  uVar12 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVirtualTextureSample::FShaderParameters>
           ::GetStructMetadata();
  puVar13 = param_1->BaseParameters + uVar12;
  param_1->ParametersOffset = pFVar7->Size + uVar12;
  if ((((puVar16 != (undefined8 *)0x0) &&
       (this_00 = (FVirtualTexture2DResource *)*puVar16, this_00 != (FVirtualTexture2DResource *)0x0
       )) && ((int)this_00->_padding_ != -1)) &&
     (((pIVar8 = FVirtualTexture2DResource::AcquireAllocatedVT(this_00),
       pIVar8 != (IAllocatedVirtualTexture *)0x0 &&
       (lVar9 = (**(code **)(pIVar8->_padding_ + 0x30))(pIVar8,0,*(char *)(puVar16 + 1) == '\x01'),
       lVar9 != 0)) &&
      (((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0 && ((*(uint *)(lVar9 + 8) & 0x3fffffff) != 0)))))) {
    *(undefined8 *)puVar13 = *(undefined8 *)((longlong)puVar16 + 0xc);
    uVar1 = *(undefined4 *)((longlong)puVar16 + 0x14);
    *(longlong *)(puVar13 + 0x20) = lVar9;
    *(undefined4 *)(puVar13 + 8) = uVar1;
    *(longlong *)(puVar13 + 0x60) = this_00->_padding_;
    uVar10 = (**(code **)(pIVar8->_padding_ + 0x10))(pIVar8,0);
    *(undefined8 *)(puVar13 + 0x10) = uVar10;
    uVar12 = (**(code **)(pIVar8->_padding_ + 8))(pIVar8);
    if (uVar12 < 2) {
      pFVar11 = (GBlackTexture->TextureRHI).Reference;
    }
    else {
      pFVar11 = (FRHITexture *)(**(code **)(pIVar8->_padding_ + 0x10))(pIVar8,1);
    }
    *(FRHITexture **)(puVar13 + 0x18) = pFVar11;
    if ((((*(uint *)(*(longlong *)(puVar13 + 0x60) + 8) >> 0x1e & 1) == 0) &&
        ((*(uint *)(*(longlong *)(puVar13 + 0x60) + 8) & 0x3fffffff) != 0)) &&
       (((*(uint *)(*(longlong *)(puVar13 + 0x10) + 8) >> 0x1e & 1) == 0 &&
        ((((*(uint *)(*(longlong *)(puVar13 + 0x10) + 8) & 0x3fffffff) != 0 &&
          ((*(uint *)(*(longlong *)(puVar13 + 0x18) + 8) >> 0x1e & 1) == 0)) &&
         ((*(uint *)(*(longlong *)(puVar13 + 0x18) + 8) & 0x3fffffff) != 0)))))) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8,&local_38);
      (**(code **)(pIVar8->_padding_ + 0x40))(pIVar8,&local_48,0);
      *(undefined8 *)(puVar13 + 0x30) = local_38;
      *(undefined8 *)(puVar13 + 0x38) = uStack_30;
      *(undefined8 *)(puVar13 + 0x40) = local_28;
      *(undefined8 *)(puVar13 + 0x48) = uStack_20;
      *(undefined8 *)(puVar13 + 0x50) = local_48;
      *(undefined8 *)(puVar13 + 0x58) = uStack_40;
      return;
    }
  }
  puVar13[8] = '\0';
  puVar13[9] = '\0';
  puVar13[10] = '\0';
  puVar13[0xb] = '\0';
  puVar13[0] = '\0';
  puVar13[1] = '\0';
  puVar13[2] = '\0';
  puVar13[3] = '\0';
  puVar13[4] = '\0';
  puVar13[5] = '\0';
  puVar13[6] = '\0';
  puVar13[7] = '\0';
  *(FRHISamplerState **)(puVar13 + 0x60) =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  puVar13[0x30] = '\0';
  puVar13[0x31] = '\0';
  puVar13[0x32] = '\0';
  puVar13[0x33] = '\0';
  puVar13[0x34] = '\0';
  puVar13[0x35] = '\0';
  puVar13[0x36] = '\0';
  puVar13[0x37] = '\0';
  puVar13[0x38] = '\0';
  puVar13[0x39] = '\0';
  puVar13[0x3a] = '\0';
  puVar13[0x3b] = '\0';
  puVar13[0x3c] = '\0';
  puVar13[0x3d] = '\0';
  puVar13[0x3e] = '\0';
  puVar13[0x3f] = '\0';
  puVar13[0x40] = '\0';
  puVar13[0x41] = '\0';
  puVar13[0x42] = '\0';
  puVar13[0x43] = '\0';
  puVar13[0x44] = '\0';
  puVar13[0x45] = '\0';
  puVar13[0x46] = '\0';
  puVar13[0x47] = '\0';
  puVar13[0x48] = '\0';
  puVar13[0x49] = '\0';
  puVar13[0x4a] = '\0';
  puVar13[0x4b] = '\0';
  puVar13[0x4c] = '\0';
  puVar13[0x4d] = '\0';
  puVar13[0x4e] = '\0';
  puVar13[0x4f] = '\0';
  puVar13[0x50] = '\0';
  puVar13[0x51] = '\0';
  puVar13[0x52] = '\0';
  puVar13[0x53] = '\0';
  puVar13[0x54] = '\0';
  puVar13[0x55] = '\0';
  puVar13[0x56] = '\0';
  puVar13[0x57] = '\0';
  puVar13[0x58] = '\0';
  puVar13[0x59] = '\0';
  puVar13[0x5a] = '\0';
  puVar13[0x5b] = '\0';
  puVar13[0x5c] = '\0';
  puVar13[0x5d] = '\0';
  puVar13[0x5e] = '\0';
  puVar13[0x5f] = '\0';
  *(FRHIShaderResourceView **)(puVar13 + 0x20) =
       (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  *(FRHITexture **)(puVar13 + 0x10) = (GBlackTexture->TextureRHI).Reference;
  *(FRHITexture **)(puVar13 + 0x18) = (GBlackTexture->TextureRHI).Reference;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVirtualTextureSample @ 14924f580

void __cdecl
UNiagaraDataInterfaceVirtualTextureSample::
StaticRegisterNativesUNiagaraDataInterfaceVirtualTextureSample(void)

{
  return;
}

// VMGetNumMipLevels @ 149253f30

void __thiscall
UNiagaraDataInterfaceVirtualTextureSample::VMGetNumMipLevels
          (UNiagaraDataInterfaceVirtualTextureSample *this,FVectorVMExternalFunctionContext *param_1
          )

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->CurrentTextureMipLevels;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetTextureDimensions @ 149254a10

void __thiscall
UNiagaraDataInterfaceVirtualTextureSample::VMGetTextureDimensions
          (UNiagaraDataInterfaceVirtualTextureSample *this,FVectorVMExternalFunctionContext *param_1
          )

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> local_48;
  float *local_38;
  int local_30 [2];
  int local_28 [2];
  int local_20 [2];
  
  VectorVM::FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread>(&local_48,param_1);
  iVar6 = 0;
  local_28[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  lVar7 = (longlong)local_28[0];
  local_30[0] = 0;
  pfVar3 = pfVar3 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_38 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  local_20[0] = 0;
  local_38 = local_38 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + lVar7;
      iVar8 = ((local_48.Ptr)->CurrentTextureSize).field0_0x0._s_0.Y >> (SUB41(fVar1,0) & 0x1f);
      iVar5 = ((local_48.Ptr)->CurrentTextureSize).field0_0x0._s_0.X >> (SUB41(fVar1,0) & 0x1f);
      iVar2 = 1;
      if (1 < iVar5) {
        iVar2 = iVar5;
      }
      *local_38 = (float)iVar2;
      iVar2 = 1;
      if (1 < iVar8) {
        iVar2 = iVar8;
      }
      iVar6 = iVar6 + 1;
      *pfVar4 = (float)iVar2;
      local_38 = local_38 + local_30[0];
      pfVar4 = pfVar4 + local_20[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

