// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 28

// StaticClass @ 1491edab0

UClass * __cdecl UNiagaraDataInterfaceTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton;
}

// UNiagaraDataInterfaceTexture @ 1492137f0

UNiagaraDataInterfaceTexture * __thiscall
UNiagaraDataInterfaceTexture::UNiagaraDataInterfaceTexture
          (UNiagaraDataInterfaceTexture *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceTexture__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  return this;
}

// UNiagaraDataInterfaceTexture @ 149213830

UNiagaraDataInterfaceTexture * __thiscall
UNiagaraDataInterfaceTexture::UNiagaraDataInterfaceTexture
          (UNiagaraDataInterfaceTexture *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceTexture__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyTexture__6B_;
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

// ~UNiagaraDataInterfaceTexture @ 149216040

void __thiscall
UNiagaraDataInterfaceTexture::~UNiagaraDataInterfaceTexture(UNiagaraDataInterfaceTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 149218ac0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this_00;
  FRHIResource *pFVar2;
  FNDITextureInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TRefCountPtr<FRHISamplerState> this_01;
  
  pFVar3 = TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
                       *)(*(longlong *)this + 0x10),
                      (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
    if (pFVar1 != (FRHITextureReference *)0x0) {
      (pFVar3->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
    if (pFVar2 != (FRHIResource *)0x0) {
      (pFVar3->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(pFVar2);
    }
    (pFVar3->TextureSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    pFVar3->MipLevels = 0;
    return;
  }
  pFVar1 = (pFVar3->TextureReferenceRHI).Reference;
  this_00 = *(FRHITextureReference **)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x140) + 0x20);
  if (pFVar1 != this_00) {
    (pFVar3->TextureReferenceRHI).Reference = this_00;
    if (this_00 != (FRHITextureReference *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (pFVar1 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)this + 0x10));
  this_01 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI;
  if (pFVar4 != (FTextureResource *)0x0) {
    pFVar4 = UTexture::GetResource(*(UTexture **)((longlong)this + 0x10));
    this_01.Reference = (FRHISamplerState *)pFVar4->_padding_;
  }
  pFVar2 = (FRHIResource *)(pFVar3->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)this_01.Reference) {
    (pFVar3->SamplerStateRHI).Reference = this_01.Reference;
    if ((FRHIResource *)this_01.Reference != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01.Reference);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  (pFVar3->TextureSize).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x18);
  pFVar3->MipLevels = *(int *)((longlong)this + 0x20);
  return;
}

// BuildShaderParameters @ 149220970

void __thiscall
UNiagaraDataInterfaceTexture::BuildShaderParameters
          (UNiagaraDataInterfaceTexture *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceTexture::FShaderParameters>::
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

// CanBeInCluster @ 149221ae0

bool __thiscall UNiagaraDataInterfaceTexture::CanBeInCluster(UNiagaraDataInterfaceTexture *this)

{
  return false;
}

// CanExecuteOnTarget @ 149221b90

bool __thiscall
UNiagaraDataInterfaceTexture::CanExecuteOnTarget
          (UNiagaraDataInterfaceTexture *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 149223230

bool __thiscall
UNiagaraDataInterfaceTexture::CopyToInternal
          (UNiagaraDataInterfaceTexture *this,UNiagaraDataInterface *param_1)

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
    pFVar5 = GetTypeName<UNiagaraDataInterfaceTexture>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceTexture>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 14922b9c0

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
UNiagaraDataInterfaceTexture::DestroyPerInstanceData
          (UNiagaraDataInterfaceTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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
              TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance265>
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

// Equals @ 14922da30

bool __thiscall
UNiagaraDataInterfaceTexture::Equals
          (UNiagaraDataInterfaceTexture *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceTexture_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceTexture_const_>(&local_28);
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

// GetPrivateStaticClass @ 1492370c0

UClass * __cdecl UNiagaraDataInterfaceTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceTexture.InnerSingleton;
}

// GetVMExternalFunction @ 14923a700

void __thiscall
UNiagaraDataInterfaceTexture::GetVMExternalFunction
          (UNiagaraDataInterfaceTexture *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
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
  UNiagaraDataInterfaceTexture *local_res10;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  int local_f0;
  UNiagaraDataInterfaceTexture *local_e8;
  UNiagaraDataInterfaceTexture *local_e0;
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
  if (FVar1 == SampleTexture2DName) {
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceTexture.cpp"
                           ,0xe4,L""), bVar3)) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
      puVar4[4] = VMSampleTexture;
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
  else if (FVar1 == SamplePseudoVolumeTextureName) {
    if ((((param_1->InputParamLocations).ArrayNum != 0xd) || (param_1->NumOutputs != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 13 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceTexture.cpp"
                           ,0xe9,L""), bVar3)) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_e8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_e8);
      puVar4[4] = VMSamplePseudoVolumeTexture;
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
  else if (FVar1 == GetTextureDimensionsName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 2)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceTexture.cpp"
                           ,0xee,L""), bVar3)) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_e0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_e0);
      puVar4[4] = VMGetTextureDimensions;
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
    if (FVar1 != GetNumMipLevelsName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceTexture.cpp"
                           ,0xf3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar6 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             ::CreateUObject<UNiagaraDataInterfaceTexture>
                       ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                         *)local_100,this,(pmf_fd5a4616)0x149253eb0);
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

// HasPreSimulateTick @ 14923c5b0

bool __thiscall UNiagaraDataInterfaceTexture::HasPreSimulateTick(UNiagaraDataInterfaceTexture *this)

{
  return true;
}

// InitPerInstanceData @ 14923f940

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
UNiagaraDataInterfaceTexture::InitPerInstanceData
          (UNiagaraDataInterfaceTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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

// PerInstanceDataSize @ 149244770

int __thiscall UNiagaraDataInterfaceTexture::PerInstanceDataSize(UNiagaraDataInterfaceTexture *this)

{
  return 0x50;
}

// PerInstanceTick @ 149245ce0

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
UNiagaraDataInterfaceTexture::PerInstanceTick
          (UNiagaraDataInterfaceTexture *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  code *pcVar1;
  TIntPoint<int>_u_0 TVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TObjectPtr<UObject> this_00;
  UClass *pUVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  UTexture2D *this_03;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  TIntPoint<int>_u_0 local_f8;
  UTexture2D *local_f0;
  code *local_e8;
  code *pcStack_e0;
  UTexture2D *local_d8;
  TIntPoint<int>_u_0 TStack_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [8];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  this_03 = (UTexture2D *)(this->Texture).field0_0x0.DebugPtr;
  iVar5 = 0;
  if (*(int *)((longlong)param_1 + 0x18) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x20),(int)local_c0);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar6);
      if (bVar3) {
        this_03 = *(UTexture2D **)this_00.field0_0x0;
        goto LAB_149245d4d;
      }
    }
    this_03 = (UTexture2D *)0x0;
  }
LAB_149245d4d:
  local_f8 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  TVar2._s_0 = local_f8._s_0;
  if (this_03 == (UTexture2D *)0x0) {
    local_f8._4_4_ = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
    local_f8._0_4_ = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
    uVar10 = local_f8._0_4_;
    uVar11 = local_f8._4_4_;
    local_f8._s_0 = TVar2._s_0;
  }
  else {
    fVar12 = (float)(**(code **)(this_03->_padding_ + 0x368))(this_03);
    uVar10 = (undefined4)fVar12;
    local_f8._s_0.X = uVar10;
    fVar12 = (float)(**(code **)(this_03->_padding_ + 0x370))(this_03);
    uVar11 = (undefined4)fVar12;
    local_f8._s_0.Y = uVar11;
    pUVar6 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(this_03->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(this_03->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)((longlong)&this_03[1]._padding_ + 4);
      }
    }
    else {
      iVar5 = UTexture2D::GetNumMips(this_03);
    }
  }
  bVar3 = TWeakObjectPtr<UTexture,FWeakObjectPtr>::UEOpEquals<UTexture,bool>
                    (param_1,(UTexture *)this_03);
  if ((((!bVar3) || (*(int *)((longlong)param_1 + 8) != uVar10)) ||
      (*(int *)((longlong)param_1 + 0xc) != uVar11)) ||
     (*(int *)((longlong)param_1 + 0x10) != iVar5)) {
    local_f0 = this_03;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_03 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_03);
    }
    FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_f0);
    *(TIntPoint<int>_u_0 *)((longlong)param_1 + 8) = local_f8;
    *(int *)((longlong)param_1 + 0x10) = iVar5;
    local_e8 = (code *)this->_padding_;
    if ((local_e8 == (code *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pcStack_e0 = (code *)param_2->ID;
    TStack_d0 = local_f8;
    local_b8[0] = (code *)0x0;
    local_d8 = this_03;
    local_c8 = iVar5;
    local_90 = FMemory::Malloc(0x30,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::`17'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = local_e8;
    local_90[2] = pcStack_e0;
    local_90[3] = (code *)local_d8;
    *(TIntPoint<int>_u_0 *)(local_90 + 4) = TStack_d0;
    local_90[5] = (code *)CONCAT44(uStack_c4,local_c8);
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceTexture::PerInstanceTick_::__l17::TSTR_NDITexture_UpdateInstance306>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_88._0_8_ = local_b8[0];
      local_b8[0] = (code *)0x0;
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::TSTR_NDITexture_UpdateInstance306>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar7);
      uVar9 = (ulonglong)local_58;
      if ((2 < uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar8 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar8 = local_60;
          }
          (**(code **)(*ppcVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar8 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar8 = local_90;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
  }
  return false;
}

// PostInitProperties @ 149246b60

void __thiscall UNiagaraDataInterfaceTexture::PostInitProperties(UNiagaraDataInterfaceTexture *this)

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

// PostLoad @ 149246fe0

void __thiscall UNiagaraDataInterfaceTexture::PostLoad(UNiagaraDataInterfaceTexture *this)

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
    if (*(UNiagaraDataInterfaceTexture **)FVar5 == this) {
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

// Serialize @ 14924cff0

void __thiscall
UNiagaraDataInterfaceTexture::Serialize(UNiagaraDataInterfaceTexture *this,FArchive *param_1)

{
  int iVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
    if (iVar1 < 0x27) goto LAB_14924d040;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
LAB_14924d040:
                    /* WARNING: Could not recover jumptable at 0x00014924d052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  return;
}

// Serialize @ 14924d060

void __thiscall
UNiagaraDataInterfaceTexture::Serialize
          (UNiagaraDataInterfaceTexture *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FNiagaraCustomVersion::GUID);
    if (iVar1 < 0x27) goto LAB_14924d0cc;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            ((FArchive *)this_00,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
LAB_14924d0cc:
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FNiagaraCustomVersion::GUID);
  return;
}

// SetShaderParameters @ 14924e910

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
UNiagaraDataInterfaceTexture::SetShaderParameters
          (UNiagaraDataInterfaceTexture *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FRDGBuilder *this_00;
  FRHITexture *this_01;
  FResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FNDITextureInstanceData_RenderThread *pFVar8;
  FShaderParametersMetadata *pFVar9;
  FRDGTexture *pFVar10;
  TRefCountPtr<IPooledRenderTarget> TVar11;
  FRDGExternalAccessQueue *pFVar12;
  TIntPoint<int>_u_0 TVar13;
  uint uVar14;
  TIntPoint<int>_u_0 *pTVar15;
  longlong *local_res18;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar7 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar8 = TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDITextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITextureInstanceData_RenderThread,0>_>
                   *)(pFVar2 + 1),uVar7);
  this_00 = param_1->GraphBuilder;
  uVar14 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar9 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceTexture::FShaderParameters>::
           GetStructMetadata();
  pTVar15 = (TIntPoint<int>_u_0 *)(param_1->BaseParameters + uVar14);
  param_1->ParametersOffset = pFVar9->Size + uVar14;
  if ((pFVar8 == (FNDITextureInstanceData_RenderThread *)0x0) ||
     ((pFVar8->TextureReferenceRHI).Reference == (FRHITextureReference *)0x0)) {
    *pTVar15 = (TIntPoint<int>_u_0)0x0;
    pTVar15[1]._s_0.X = 0;
    pTVar15[3]._s_0 =
         (TIntPoint<int>_u_0_s_0)
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    TVar13 = (TIntPoint<int>_u_0)
             FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,this_00,Texture2D);
    pTVar15[2] = TVar13;
    return;
  }
  *pTVar15 = (pFVar8->TextureSize).field0_0x0;
  pTVar15[1]._s_0.X = pFVar8->MipLevels;
  pTVar15[3]._s_0 = (TIntPoint<int>_u_0_s_0)(pFVar8->SamplerStateRHI).Reference;
  bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,pTVar15 + 2);
  if (!bVar5) {
    return;
  }
  TVar13 = (TIntPoint<int>_u_0)pFVar8->TransientRDGTexture;
  if (TVar13 == (TIntPoint<int>_u_0)0x0) {
    this_01 = (((pFVar8->TextureReferenceRHI).Reference)->ReferencedTexture).Reference;
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
      pFVar10 = FRDGBuilder::FindExternalTexture(this_00,this_01);
      pFVar8->TransientRDGTexture = pFVar10;
      if (pFVar10 == (FRDGTexture *)0x0) {
        TVar11 = CreateRenderTarget((FRHITexture *)&local_res18,(wchar_t *)this_01);
        pFVar10 = FRDGBuilder::RegisterExternalTexture
                            (this_00,(TRefCountPtr<IPooledRenderTarget> *)TVar11.Reference,None);
        pFVar8->TransientRDGTexture = pFVar10;
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x38))();
        }
        FRDGBuilder::UseInternalAccessMode
                  (this_00,(FRDGViewableResource *)pFVar8->TransientRDGTexture);
        pFVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetRDGExternalAccessQueue
                            (param_1);
        pFVar10 = pFVar8->TransientRDGTexture;
        if (pFVar10 != (FRDGTexture *)0x0) {
          piVar1 = &(pFVar12->Resources).ArrayMax;
          iVar6 = (pFVar12->Resources).ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                              (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar12,
                               piVar1);
          }
          (pFVar12->Resources).ArrayNum = iVar6 + 1;
          pFVar3 = (pFVar12->Resources).AllocatorInstance.Data;
          pFVar3[iVar6].Resource = (FRDGViewableResource *)pFVar10;
          pFVar3[iVar6].Access = SRVMask;
          pFVar3[iVar6].Pipelines = Graphics;
        }
      }
      TVar13 = (TIntPoint<int>_u_0)pFVar8->TransientRDGTexture;
      FRHIResource::Release((FRHIResource *)this_01);
      if (TVar13 != (TIntPoint<int>_u_0)0x0) goto LAB_14924eacd;
    }
    TVar13 = (TIntPoint<int>_u_0)
             FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,this_00,Texture2D);
  }
LAB_14924eacd:
  pTVar15[2] = TVar13;
  return;
}

// SetTexture @ 14924f3e0

void __thiscall
UNiagaraDataInterfaceTexture::SetTexture(UNiagaraDataInterfaceTexture *this,UTexture *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Texture).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Texture).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceTexture @ 14924f530

void __cdecl UNiagaraDataInterfaceTexture::StaticRegisterNativesUNiagaraDataInterfaceTexture(void)

{
  return;
}

// VMGetNumMipLevels @ 149253eb0

void __thiscall
UNiagaraDataInterfaceTexture::VMGetNumMipLevels
          (UNiagaraDataInterfaceTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDITextureInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDITextureInstanceData_GameThread>::
  FUserPtrHandler<FNDITextureInstanceData_GameThread>(&local_18,param_1);
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

// VMGetTextureDimensions @ 1492548d0

void __thiscall
UNiagaraDataInterfaceTexture::VMGetTextureDimensions
          (UNiagaraDataInterfaceTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  FUserPtrHandler<FNDITextureInstanceData_GameThread> local_48;
  float *local_38;
  int local_30 [2];
  int local_28 [2];
  int local_20 [2];
  
  VectorVM::FUserPtrHandler<FNDITextureInstanceData_GameThread>::
  FUserPtrHandler<FNDITextureInstanceData_GameThread>(&local_48,param_1);
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

// VMSamplePseudoVolumeTexture @ 149254cc0

void __thiscall
UNiagaraDataInterfaceTexture::VMSamplePseudoVolumeTexture
          (UNiagaraDataInterfaceTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  undefined1 local_58 [24];
  int local_40;
  float *local_38;
  int local_30 [2];
  float *local_28;
  int local_20;
  
  VectorVM::FUserPtrHandler<FNDITextureInstanceData_GameThread>::
  FUserPtrHandler<FNDITextureInstanceData_GameThread>
            ((FUserPtrHandler<FNDITextureInstanceData_GameThread> *)local_58,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_58,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_58 + 0x10));
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_58 + 0x10));
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_58 + 0x10));
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_58 + 0x10));
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_58 + 0x10));
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_58 + 0x10));
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  FNDIOutputParam<UE::Math::TVector4<float>_>::FNDIOutputParam<UE::Math::TVector4<float>_>
            ((FNDIOutputParam<UE::Math::TVector4<float>_> *)local_58,param_1);
  iVar1 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar1 = iVar1 + 1;
      *(float *)local_58._0_8_ = 1.0;
      *(float *)local_58._16_8_ = 0.0;
      *local_38 = 1.0;
      *local_28 = 1.0;
      local_28 = local_28 + local_20;
      local_38 = local_38 + local_30[0];
      local_58._16_8_ = (float *)(local_58._16_8_ + (longlong)local_40 * 4);
      local_58._0_8_ = (float *)(local_58._0_8_ + (longlong)(int)local_58._8_4_ * 4);
    } while (iVar1 < param_1->NumInstances);
  }
  return;
}

// VMSampleTexture @ 149254e40

void __thiscall
UNiagaraDataInterfaceTexture::VMSampleTexture
          (UNiagaraDataInterfaceTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FNDIOutputParam<UE::Math::TVector4<float>_> local_48;
  
  VectorVM::FUserPtrHandler<FNDITextureInstanceData_GameThread>::
  FUserPtrHandler<FNDITextureInstanceData_GameThread>
            ((FUserPtrHandler<FNDITextureInstanceData_GameThread> *)&local_48,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_48.Y);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_48.Z.AdvanceOffset);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_48.Y);
  FNDIOutputParam<UE::Math::TVector4<float>_>::FNDIOutputParam<UE::Math::TVector4<float>_>
            (&local_48,param_1);
  iVar1 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar1 = iVar1 + 1;
      *local_48.X.Register = 1.0;
      *local_48.Y.Register = 0.0;
      *local_48.Z.Register = 1.0;
      *local_48.W.Register = 1.0;
      local_48.X.Register = local_48.X.Register + local_48.X.AdvanceOffset;
      local_48.Y.Register = local_48.Y.Register + local_48.Y.AdvanceOffset;
      local_48.Z.Register = local_48.Z.Register + local_48.Z.AdvanceOffset;
      local_48.W.Register = local_48.W.Register + local_48.W.AdvanceOffset;
    } while (iVar1 < param_1->NumInstances);
  }
  return;
}

