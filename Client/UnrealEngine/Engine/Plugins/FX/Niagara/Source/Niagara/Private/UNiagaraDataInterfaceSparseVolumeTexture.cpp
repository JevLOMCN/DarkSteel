// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 1491edcc0

UClass * __cdecl UNiagaraDataInterfaceSparseVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSparseVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSparseVolumeTexture,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSparseVolumeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton;
}

// UNiagaraDataInterfaceSparseVolumeTexture @ 149213320

UNiagaraDataInterfaceSparseVolumeTexture * __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::UNiagaraDataInterfaceSparseVolumeTexture
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSparseVolumeTexture__6B_;
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->SparseVolumeTextureUserParameter);
  return this;
}

// UNiagaraDataInterfaceSparseVolumeTexture @ 149213360

UNiagaraDataInterfaceSparseVolumeTexture * __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::UNiagaraDataInterfaceSparseVolumeTexture
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSparseVolumeTexture__6B_;
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->SparseVolumeTextureUserParameter);
  this->BlockingStreamingRequests = true;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxySparseVolumeTexture__6B_;
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
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
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
  *(int *)&(this->SparseVolumeTextureUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceSparseVolumeTexture @ 149215f60

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::~UNiagaraDataInterfaceSparseVolumeTexture
          (UNiagaraDataInterfaceSparseVolumeTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSparseVolumeTexture__6B_;
  pFVar1 = (this->SparseVolumeTextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 149220730

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::BuildShaderParameters
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSparseVolumeTexture::FShaderParameters>
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x60;
  return;
}

// CanExecuteOnTarget @ 149221b60

bool __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::CanExecuteOnTarget
          (UNiagaraDataInterfaceSparseVolumeTexture *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 149222f50

bool __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::CopyToInternal
          (UNiagaraDataInterfaceSparseVolumeTexture *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UObject *pUVar2;
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
         (pUVar2 = (UObject *)(this->SparseVolumeTexture).field0_0x0.DebugPtr,
         pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(TObjectPtr<USparseVolumeTexture>_u_0 *)(param_1 + 1) =
           (this->SparseVolumeTexture).field0_0x0;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1]._padding_,
                 &(this->SparseVolumeTextureUserParameter).Parameter);
      *(bool *)&param_1[1].Proxy.Ptr = this->BlockingStreamingRequests;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 14922b5c0

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
UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData
          (UNiagaraDataInterfaceSparseVolumeTexture *this,void *param_1,
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
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
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
              TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData_::__l2::TSTR_NDISparseVolumeTextureTexture_RemoveInstance235>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::TSTR_NDISparseVolumeTextureTexture_RemoveInstance235>
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

// Equals @ 14922d730

bool __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::Equals
          (UNiagaraDataInterfaceSparseVolumeTexture *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSparseVolumeTexture_const_>(&local_28);
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
    if (((((USparseVolumeTexture *)param_1[1]._padding_ ==
           (this->SparseVolumeTexture).field0_0x0.DebugPtr) &&
         ((this->SparseVolumeTextureUserParameter).Parameter._padding_ == param_1[1]._padding_)) &&
        ((int)(this->SparseVolumeTextureUserParameter).Parameter._padding_ ==
         (int)param_1[1]._padding_)) &&
       ((bool)*(char *)&param_1[1].Proxy.Ptr == this->BlockingStreamingRequests)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149236e80

UClass * __cdecl UNiagaraDataInterfaceSparseVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSparseVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSparseVolumeTexture,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSparseVolumeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSparseVolumeTexture.InnerSingleton;
}

// GetVMExternalFunction @ 149239400

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::GetVMExternalFunction
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar6;
  FMRSWRecursiveAccessDetector *this_00;
  UNiagaraDataInterfaceSparseVolumeTexture *local_res10;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  int local_f0;
  UNiagaraDataInterfaceSparseVolumeTexture *local_e8;
  UNiagaraDataInterfaceSparseVolumeTexture *local_e0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  FVar1 = param_1->Name;
  if (FVar1 == GetTextureDimensionsName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSparseVolumeTexture.cpp"
                           ,0xc6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_148 = (undefined1  [8])0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_78);
    local_60 = &local_140;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSparseVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
      puVar4[4] = VMGetTextureDimensions;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_d8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_148;
  }
  else if (FVar1 == GetNumMipLevelsName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSparseVolumeTexture.cpp"
                           ,0xcb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_130 = (undefined1  [8])0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_58);
    local_40 = &local_128;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSparseVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_e8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_e8);
      puVar4[4] = VMGetNumMipLevels;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_c0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_130;
  }
  else if (FVar1 == RequestSparseVolumeTextureFrameName) {
    if ((((param_1->InputParamLocations).ArrayNum != 3) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 3 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSparseVolumeTexture.cpp"
                           ,0xd0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_110;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_110);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSparseVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_e0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_e0);
      puVar4[4] = VMRequestSparseVolumeTextureFrame;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_a8);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    if (FVar1 != GetNumFramesName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSparseVolumeTexture.cpp"
                           ,0xd5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar6 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             ::CreateUObject<UNiagaraDataInterfaceSparseVolumeTexture>
                       ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                         *)local_100,this,(pmf_0e559b50)0x149253db0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_90);
    if ((local_f0 != 0) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,0x10);
      local_f0 = 0;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_100;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 14923c590

bool __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::HasPreSimulateTick
          (UNiagaraDataInterfaceSparseVolumeTexture *this)

{
  return true;
}

// InitPerInstanceData @ 14923f400

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
UNiagaraDataInterfaceSparseVolumeTexture::InitPerInstanceData
          (UNiagaraDataInterfaceSparseVolumeTexture *this,void *param_1,
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
  local_res8 = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)param_1 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x18) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x38),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x38) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x41f00000;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x20),
             (FNiagaraParameterStore *)&local_res8,(FNiagaraVariable *)&param_2->InstanceParameters)
  ;
  return true;
}

// PerInstanceDataSize @ 149244750

int __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceDataSize
          (UNiagaraDataInterfaceSparseVolumeTexture *this)

{
  return 0x68;
}

// PerInstanceTick @ 149244a80

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
UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick
          (UNiagaraDataInterfaceSparseVolumeTexture *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  TObjectPtr<UObject> this_00;
  UClass *pUVar6;
  USparseVolumeTextureFrame *pUVar7;
  IStreamingManager *pIVar8;
  longlong lVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  uint uVar11;
  code **ppcVar12;
  ulonglong uVar13;
  undefined1 auStackY_158 [32];
  int local_118;
  int iStack_114;
  int local_110;
  USparseVolumeTextureFrame *local_108;
  code *local_100;
  code *pcStack_f8;
  undefined8 local_f0;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [8];
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar7 = (USparseVolumeTextureFrame *)(this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if (*(int *)((longlong)param_1 + 0x20) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x28),(int)local_d0);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar6 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar6);
      if (bVar2) {
        pUVar7 = *(USparseVolumeTextureFrame **)this_00.field0_0x0;
        goto LAB_149244aef;
      }
    }
    pUVar7 = (USparseVolumeTextureFrame *)0x0;
  }
LAB_149244aef:
  if (pUVar7 != (USparseVolumeTextureFrame *)0x0) {
    uVar4 = (**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7);
    *(undefined4 *)((longlong)param_1 + 0x60) = uVar4;
    pUVar6 = Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      pUVar7 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                         ((USparseVolumeTexture *)pUVar7,uVar11 >> 0x10 ^ uVar11,
                          *(float *)((longlong)param_1 + 0x5c),*(float *)((longlong)param_1 + 0x58),
                          0.0,this->BlockingStreamingRequests,true);
      pIVar8 = UE::SVT::GetStreamingManager();
      (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8);
      if (pUVar7 == (USparseVolumeTextureFrame *)0x0) {
        return false;
      }
    }
    lVar9 = (**(code **)(*(longlong *)pUVar7 + 0x310))(pUVar7);
    (**(code **)(*(longlong *)pUVar7 + 0x2e0))(pUVar7,&local_118);
    iVar5 = (**(code **)(*(longlong *)pUVar7 + 0x2d0))(pUVar7);
    bVar2 = TWeakObjectPtr<USparseVolumeTexture,FWeakObjectPtr>::
            UEOpEquals<USparseVolumeTextureFrame,bool>(param_1,pUVar7);
    if (((((!bVar2) || (*(longlong *)((longlong)param_1 + 8) != lVar9)) ||
         (*(int *)((longlong)param_1 + 0x10) != local_118)) ||
        ((*(int *)((longlong)param_1 + 0x14) != iStack_114 ||
         (*(int *)((longlong)param_1 + 0x18) != local_110)))) ||
       (*(int *)((longlong)param_1 + 0x1c) != iVar5)) {
      local_108 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_108);
      *(ulonglong *)((longlong)param_1 + 0x10) = CONCAT44(iStack_114,local_118);
      *(int *)((longlong)param_1 + 0x18) = local_110;
      *(longlong *)((longlong)param_1 + 8) = lVar9;
      *(int *)((longlong)param_1 + 0x1c) = iVar5;
      local_100 = (code *)this->_padding_;
      if ((local_100 == (code *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pcStack_f8 = (code *)param_2->ID;
      local_e0 = local_110;
      uStack_d8 = *(undefined4 *)((longlong)param_1 + 0x60);
      local_c8[0] = (code *)0x0;
      local_f0 = lVar9;
      iStack_dc = iVar5;
      local_a0 = FMemory::Malloc(0x38,8);
      *local_a0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::`14'::<lambda_1>,1,1>
                           ::_vftable_;
      local_a0[1] = local_100;
      local_a0[2] = pcStack_f8;
      *(undefined4 *)(local_a0 + 3) = (undefined4)local_f0;
      *(undefined4 *)((longlong)local_a0 + 0x1c) = local_f0._4_4_;
      *(int *)(local_a0 + 4) = local_118;
      *(int *)((longlong)local_a0 + 0x24) = iStack_114;
      local_a0[5] = (code *)CONCAT44(iStack_dc,local_e0);
      local_a0[6] = (code *)CONCAT44(uStack_d4,uStack_d8);
      if (local_a0 + 1 != (code **)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      iStack_e8 = local_118;
      iStack_e4 = iStack_114;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick_::__l14::TSTR_NDISparseVolumeTexture_UpdateInstance281>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_98._0_8_ = local_c8[0];
        local_c8[0] = (code *)0x0;
        local_70 = local_a0;
        local_a0 = (code **)0x0;
        local_98._16_8_ = local_b8[0];
        local_98._24_8_ = local_b8[1];
        local_98._32_8_ = local_b8[2];
        local_68 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::TSTR_NDISparseVolumeTexture_UpdateInstance281>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_98,pFVar10);
        uVar13 = (ulonglong)local_68;
        if ((2 < uVar13) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_98._0_8_ != (code *)0x0) {
            ppcVar12 = (code **)(local_98 + 0x10);
            if (local_70 != (code **)0x0) {
              ppcVar12 = local_70;
            }
            (**(code **)(*ppcVar12 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_98);
        }
      }
      if (local_c8[0] != (code *)0x0) {
        ppcVar12 = local_c8 + 2;
        if (local_a0 != (code **)0x0) {
          ppcVar12 = local_a0;
        }
        (**(code **)(*ppcVar12 + 0x10))();
      }
    }
  }
  return false;
}

// PostInitProperties @ 1492469e0

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::PostInitProperties
          (UNiagaraDataInterfaceSparseVolumeTexture *this)

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

// PostLoad @ 149246f70

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::PostLoad(UNiagaraDataInterfaceSparseVolumeTexture *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterfaceSparseVolumeTexture **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 14924cfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::Serialize
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14924cfc0

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::Serialize
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetShaderParameters @ 14924e2d0

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
UNiagaraDataInterfaceSparseVolumeTexture::SetShaderParameters
          (UNiagaraDataInterfaceSparseVolumeTexture *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FShaderParametersMetadata *pFVar5;
  longlong lVar6;
  ulong64 *puVar7;
  uint uVar8;
  uchar *puVar9;
  ulong64 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulong64 *puVar13;
  FName *pFVar14;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar4 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar10 = (ulong64 *)0x0;
  puVar7 = puVar10;
  if (pFVar1[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[4]._padding_ + 4))
  {
    pFVar14 = (FName *)pFVar1[5]._padding_;
    if ((FName *)pFVar1[5]._padding_ == (FName *)0x0) {
      pFVar14 = &pFVar1[4].SourceDIName;
    }
    uVar8 = (&pFVar14->ComparisonIndex)
            [(uVar4 >> 0x20) * 0x17 + uVar4 &
             (ulonglong)(pFVar1[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar8 != 0xffffffff) {
      do {
        puVar7 = (ulong64 *)((longlong)(int)uVar8 * 0x30 + pFVar1[1]._padding_);
        if (*puVar7 == uVar4) break;
        uVar8 = (uint)puVar7[5];
        puVar7 = puVar10;
      } while (uVar8 != 0xffffffff);
    }
  }
  puVar13 = puVar7 + 1;
  if (puVar7 == (ulong64 *)0x0) {
    puVar13 = puVar10;
  }
  uVar8 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSparseVolumeTexture::FShaderParameters>
           ::GetStructMetadata();
  puVar9 = param_1->BaseParameters + uVar8;
  param_1->ParametersOffset = pFVar5->Size + uVar8;
  *(FRHISamplerState **)puVar9 =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  *(FRHITexture **)(puVar9 + 8) = (GBlackUintVolumeTexture->TextureRHI).Reference;
  *(FRHITexture **)(puVar9 + 0x10) = (GBlackVolumeTexture->TextureRHI).Reference;
  *(FRHITexture **)(puVar9 + 0x18) = (GBlackVolumeTexture->TextureRHI).Reference;
  puVar9[0x20] = '\0';
  puVar9[0x21] = '\0';
  puVar9[0x22] = '\0';
  puVar9[0x23] = '\0';
  puVar9[0x24] = '\0';
  puVar9[0x25] = '\0';
  puVar9[0x26] = '\0';
  puVar9[0x27] = '\0';
  puVar9[0x28] = '\0';
  puVar9[0x29] = '\0';
  puVar9[0x2a] = '\0';
  puVar9[0x2b] = '\0';
  puVar9[0x2c] = '\0';
  puVar9[0x2d] = '\0';
  puVar9[0x2e] = '\0';
  puVar9[0x2f] = '\0';
  puVar9[0x30] = '\0';
  puVar9[0x31] = '\0';
  puVar9[0x32] = '\0';
  puVar9[0x33] = '\0';
  puVar9[0x34] = '\0';
  puVar9[0x35] = '\0';
  puVar9[0x36] = '\0';
  puVar9[0x37] = '\0';
  puVar9[0x38] = '\0';
  puVar9[0x39] = '\0';
  puVar9[0x3a] = '\0';
  puVar9[0x3b] = '\0';
  puVar9[0x3c] = '\0';
  puVar9[0x3d] = '\0';
  puVar9[0x3e] = '\0';
  puVar9[0x3f] = '\0';
  *(undefined8 *)(puVar9 + 0x40) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)(puVar9 + 0x48) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  puVar9[0x4c] = '\0';
  puVar9[0x4d] = '\0';
  puVar9[0x4e] = '\0';
  puVar9[0x4f] = '\0';
  puVar9[0x50] = '\0';
  puVar9[0x51] = '\0';
  puVar9[0x52] = '\0';
  puVar9[0x53] = '\0';
  if ((puVar13 != (ulong64 *)0x0) && (uVar4 = *puVar13, uVar4 != 0)) {
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                           ,0x10c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = *(longlong *)(uVar4 + 0xb0);
    uVar4 = *puVar13;
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                           ,0x10d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar12 = *(longlong *)(uVar4 + 0xb8);
    uVar4 = *puVar13;
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                           ,0x10e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar6 = *(longlong *)(uVar4 + 0xc0);
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(puVar9 + 8);
    }
    *(longlong *)(puVar9 + 8) = lVar11;
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(puVar9 + 0x10);
    }
    *(longlong *)(puVar9 + 0x10) = lVar12;
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(puVar9 + 0x18);
    }
    *(longlong *)(puVar9 + 0x18) = lVar6;
    UE::SVT::FTextureRenderResources::GetPackedUniforms
              ((FTextureRenderResources *)*puVar13,(TIntVector4<unsigned_int> *)(puVar9 + 0x20),
               (TIntVector4<unsigned_int> *)(puVar9 + 0x30));
    *(ulong64 *)(puVar9 + 0x40) = puVar13[1];
    *(int *)(puVar9 + 0x48) = (int)puVar13[2];
    *(undefined4 *)(puVar9 + 0x4c) = *(undefined4 *)((longlong)puVar13 + 0x14);
    *(int *)(puVar9 + 0x50) = (int)puVar13[3];
  }
  return;
}

// SetTexture @ 14924f390

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::SetTexture
          (UNiagaraDataInterfaceSparseVolumeTexture *this,USparseVolumeTexture *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USparseVolumeTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SparseVolumeTexture).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceSparseVolumeTexture @ 14924f500

void __cdecl
UNiagaraDataInterfaceSparseVolumeTexture::
StaticRegisterNativesUNiagaraDataInterfaceSparseVolumeTexture(void)

{
  return;
}

// VMGetNumFrames @ 149253db0

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::VMGetNumFrames
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->NumFrames;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetNumMipLevels @ 149253e30

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::VMGetNumMipLevels
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>(&local_18,param_1);
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

// VMGetTextureDimensions @ 149254770

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::VMGetTextureDimensions
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  int local_60 [4];
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> local_40;
  
  VectorVM::FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>(&local_40,param_1);
  iVar10 = 0;
  local_48[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar12 = (longlong)local_48[0];
  local_60[0] = 0;
  pfVar4 = pfVar4 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar2 = local_60[0];
  lVar11 = (longlong)local_60[0];
  local_60[0] = 0;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar9 = local_60[0] * param_1->PerInstanceFnInstanceIdx;
  local_50[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar9;
    pfVar7 = pfVar7 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar5 = pfVar5 + iVar2 * iVar1;
    do {
      fVar3 = *pfVar4;
      pfVar4 = pfVar4 + lVar12;
      bVar8 = SUB41(fVar3,0);
      fVar13 = (float)(((local_40.Ptr)->CurrentTextureSize).field0_0x0._s_0.X >> (bVar8 & 0x1f));
      fVar3 = 1.4013e-45;
      if (1 < (int)fVar13) {
        fVar3 = fVar13;
      }
      *pfVar5 = fVar3;
      fVar13 = (float)(((local_40.Ptr)->CurrentTextureSize).field0_0x0._s_0.Y >> (bVar8 & 0x1f));
      fVar3 = 1.4013e-45;
      if (1 < (int)fVar13) {
        fVar3 = fVar13;
      }
      *pfVar6 = fVar3;
      fVar13 = (float)(((local_40.Ptr)->CurrentTextureSize).field0_0x0._s_0.Z >> (bVar8 & 0x1f));
      fVar3 = 1.4013e-45;
      if (1 < (int)fVar13) {
        fVar3 = fVar13;
      }
      iVar10 = iVar10 + 1;
      *pfVar7 = fVar3;
      pfVar6 = pfVar6 + local_60[0];
      pfVar7 = pfVar7 + local_50[0];
      pfVar5 = pfVar5 + lVar11;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMRequestSparseVolumeTextureFrame @ 149254bd0

void __thiscall
UNiagaraDataInterfaceSparseVolumeTexture::VMRequestSparseVolumeTextureFrame
          (UNiagaraDataInterfaceSparseVolumeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [2];
  int local_38 [2];
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> local_30;
  
  VectorVM::FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>(&local_30,param_1);
  iVar6 = 0;
  local_38[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar4 = local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_38[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar5 = local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_40[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar3 = pfVar3 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  (local_30.Ptr)->FrameRate = pfVar1[iVar4];
  (local_30.Ptr)->CurrentFrame = pfVar2[iVar5];
  if (0 < param_1->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar3 = -NAN;
      pfVar3 = pfVar3 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

