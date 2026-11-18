// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// StaticClass @ 149078370

UClass * __cdecl UNiagaraDataInterfaceCubeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCubeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCubeTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCubeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCubeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.InnerSingleton;
}

// UNiagaraDataInterfaceCubeTexture @ 1490b46c0

UNiagaraDataInterfaceCubeTexture * __thiscall
UNiagaraDataInterfaceCubeTexture::UNiagaraDataInterfaceCubeTexture
          (UNiagaraDataInterfaceCubeTexture *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = 0;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCubeTexture__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  return this;
}

// UNiagaraDataInterfaceCubeTexture @ 1490b4700

UNiagaraDataInterfaceCubeTexture * __thiscall
UNiagaraDataInterfaceCubeTexture::UNiagaraDataInterfaceCubeTexture
          (UNiagaraDataInterfaceCubeTexture *this,FObjectInitializer *param_1)

{
  int iVar1;
  FObjectInitializer *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  puVar4 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCubeTexture__6B_;
  this->_padding_ = 0;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  puVar3 = ::operator_new(0x60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &___7FNiagaraDataInterfaceProxyCubeTexture__6B_;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
    puVar3[10] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)this->_padding_;
  if ((puVar3 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
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

// ~UNiagaraDataInterfaceCubeTexture @ 1490b9280

void __thiscall
UNiagaraDataInterfaceCubeTexture::~UNiagaraDataInterfaceCubeTexture
          (UNiagaraDataInterfaceCubeTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCubeTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1490bf6b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this_00;
  FRHIResource *pFVar2;
  FNDICubeTextureInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TIntPoint<int>_u_0 TVar5;
  TRefCountPtr<FRHISamplerState> this_01;
  
  pFVar3 = TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
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
    TVar5 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    if (pFVar2 != (FRHIResource *)0x0) {
      (pFVar3->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(pFVar2);
      TVar5 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    }
  }
  else {
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
    TVar5 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x18);
  }
  (pFVar3->TextureSize).field0_0x0 = TVar5;
  return;
}

// BuildShaderParameters @ 1490d0ea0

void __thiscall
UNiagaraDataInterfaceCubeTexture::BuildShaderParameters
          (UNiagaraDataInterfaceCubeTexture *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceCubeTexture::FShaderParameters>::
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

// CanBeInCluster @ 1490d2a20

bool __thiscall
UNiagaraDataInterfaceCubeTexture::CanBeInCluster(UNiagaraDataInterfaceCubeTexture *this)

{
  return false;
}

// CanExecuteOnTarget @ 1490d2aa0

bool __thiscall
UNiagaraDataInterfaceCubeTexture::CanExecuteOnTarget
          (UNiagaraDataInterfaceCubeTexture *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 1490d9580

bool __thiscall
UNiagaraDataInterfaceCubeTexture::CopyToInternal
          (UNiagaraDataInterfaceCubeTexture *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar3 = StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (this->Texture).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(TObjectPtr<UTexture>_u_0 *)(param_1 + 1) = (this->Texture).field0_0x0;
    param_1[1]._padding_ = (this->TextureUserParameter).Parameter._padding_;
    *(int *)&param_1[1]._padding_ = (int)(this->TextureUserParameter).Parameter._padding_;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
               &(this->TextureUserParameter).Parameter.VarData);
    return true;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceCubeTexture>(&local_28);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar5);
}

// DestroyPerInstanceData @ 1490ec160

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
UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData
          (UNiagaraDataInterfaceCubeTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
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
              TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance168>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance168>
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

// Equals @ 1490f2a80

bool __thiscall
UNiagaraDataInterfaceCubeTexture::Equals
          (UNiagaraDataInterfaceCubeTexture *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UNiagaraDataInterface *)0x0) && (param_1->_padding_ == this->_padding_)) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UNiagaraDataInterfaceCubeTexture_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar4);
    }
    if ((((UTexture *)param_1[1]._padding_ == (this->Texture).field0_0x0.DebugPtr) &&
        ((this->TextureUserParameter).Parameter._padding_ == param_1[1]._padding_)) &&
       ((int)(this->TextureUserParameter).Parameter._padding_ == (int)param_1[1]._padding_)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149109c50

UClass * __cdecl UNiagaraDataInterfaceCubeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCubeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCubeTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCubeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCubeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.InnerSingleton;
}

// GetTextureDimensions @ 14910b3f0

void __thiscall
UNiagaraDataInterfaceCubeTexture::GetTextureDimensions
          (UNiagaraDataInterfaceCubeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_30[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar3 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *pfVar1 = (float)((local_18.Ptr)->CurrentTextureSize).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->CurrentTextureSize).field0_0x0._s_0.Y;
      pfVar1 = pfVar1 + local_30[0];
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// GetVMExternalFunction @ 14910e8b0

void __thiscall
UNiagaraDataInterfaceCubeTexture::GetVMExternalFunction
          (UNiagaraDataInterfaceCubeTexture *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this_00;
  UNiagaraDataInterfaceCubeTexture *local_res10;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [8];
  FDelegateAllocation local_98;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (param_1->Name == SampleCubeTextureName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCubeTexture.cpp"
                           ,0x8d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_b8 = (undefined1  [8])0x0;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_58);
    local_40 = &local_b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCubeTexture_SampleCubeTextureBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_88);
    if ((local_b0.DelegateSize != 0) &&
       (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b0,0,0,0x10);
      local_b0.DelegateSize = 0;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_b8;
  }
  else {
    if (param_1->Name != TextureDimsName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCubeTexture.cpp"
                           ,0x92,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_a0 = (undefined1  [8])0x0;
    local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_98.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_98;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceCubeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceCubeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceCubeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = GetTextureDimensions;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_70);
    if ((local_98.DelegateSize != 0) &&
       (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_98.DelegateSize = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_98.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_a0;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 149111da0

bool __thiscall
UNiagaraDataInterfaceCubeTexture::HasPreSimulateTick(UNiagaraDataInterfaceCubeTexture *this)

{
  return true;
}

// InitPerInstanceData @ 149116e20

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
UNiagaraDataInterfaceCubeTexture::InitPerInstanceData
          (UNiagaraDataInterfaceCubeTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  *(undefined8 *)param_1 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x28),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x10),
             (FNiagaraParameterStore *)&local_res8,(FNiagaraVariable *)&param_2->InstanceParameters)
  ;
  return true;
}

// PerInstanceDataSize @ 14911ae20

int __thiscall
UNiagaraDataInterfaceCubeTexture::PerInstanceDataSize(UNiagaraDataInterfaceCubeTexture *this)

{
  return 0x48;
}

// PerInstanceTick @ 14911b910

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
UNiagaraDataInterfaceCubeTexture::PerInstanceTick
          (UNiagaraDataInterfaceCubeTexture *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TObjectPtr<UObject> this_00;
  UClass *pUVar5;
  UTextureCube *pUVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  ulonglong uVar9;
  UTextureCube *this_03;
  UTextureCube *pUVar10;
  UTextureCube *pUVar11;
  undefined1 auStack_118 [32];
  int local_f8;
  int iStack_f4;
  UTextureCube *local_f0;
  code *local_e8;
  code *pcStack_e0;
  UTextureCube *local_d8;
  code *pcStack_d0;
  undefined1 local_c8 [16];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar10 = (UTextureCube *)(this->Texture).field0_0x0.DebugPtr;
  pUVar11 = (UTextureCube *)0x0;
  if (*(int *)((longlong)param_1 + 0x10) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x18),(int)local_c8);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar5 = Z_Construct_UClass_UTexture_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar5);
      if (bVar2) {
        pUVar10 = *(UTextureCube **)this_00.field0_0x0;
        goto LAB_14911b980;
      }
    }
    pUVar10 = (UTextureCube *)0x0;
  }
LAB_14911b980:
  bVar2 = TWeakObjectPtr<UTexture,FWeakObjectPtr>::UEOpEquals<UTexture,bool>
                    (param_1,(UTexture *)pUVar10);
  if (bVar2) {
    return false;
  }
  if (pUVar10 == (UTextureCube *)0x0) {
LAB_14911b9d0:
    this_03 = pUVar11;
    if (pUVar10 != (UTextureCube *)0x0) goto LAB_14911b9d8;
  }
  else {
    pUVar5 = Z_Construct_UClass_UTextureCube_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar4) ||
       (this_03 = pUVar10,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar4 * 8)
       != &pUVar5->_padding_)) goto LAB_14911b9d0;
LAB_14911b9d8:
    pUVar5 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       (pUVar6 = pUVar10,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar4 * 8)
       == &pUVar5->_padding_)) goto LAB_14911ba01;
  }
  pUVar6 = pUVar11;
LAB_14911ba01:
  if (this_03 == (UTextureCube *)0x0) {
    if (pUVar6 == (UTextureCube *)0x0) {
      return false;
    }
    local_f8 = (int)pUVar6[1]._padding_;
    iStack_f4 = local_f8;
  }
  else {
    iVar4 = UTextureCube::GetSizeY(this_03);
    local_f8 = UTextureCube::GetSizeX(this_03);
    iStack_f4 = iVar4;
  }
  local_f0 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_f0);
  pcStack_d0 = (code *)CONCAT44(iStack_f4,local_f8);
  *(code **)((longlong)param_1 + 8) = pcStack_d0;
  local_e8 = (code *)this->_padding_;
  if ((local_e8 == (code *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pcStack_e0 = (code *)param_2->ID;
  local_b8[0] = (code *)0x0;
  local_d8 = pUVar10;
  local_90 = FMemory::Malloc(0x28,8);
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::`8'::<lambda_1>,1,1>
                       ::_vftable_;
  local_90[1] = local_e8;
  local_90[2] = pcStack_e0;
  local_90[3] = (code *)local_d8;
  local_90[4] = pcStack_d0;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceCubeTexture::PerInstanceTick_::__l8::TSTR_NDITexture_UpdateInstance195>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::TSTR_NDITexture_UpdateInstance195>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar7);
    uVar9 = (ulonglong)local_58;
    if ((2 < uVar9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
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
  return false;
}

// PostInitProperties @ 1491209a0

void __thiscall
UNiagaraDataInterfaceCubeTexture::PostInitProperties(UNiagaraDataInterfaceCubeTexture *this)

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

// SampleCubeTexture @ 14912ca40

void __thiscall
UNiagaraDataInterfaceCubeTexture::SampleCubeTexture
          (UNiagaraDataInterfaceCubeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> local_78;
  int local_68 [4];
  undefined1 local_58 [24];
  int local_40;
  float *local_38;
  int local_30;
  float *local_28;
  int local_20;
  
  VectorVM::FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>(&local_78,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_58,param_1);
  FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
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
      local_58._0_8_ = (float *)(local_58._0_8_ + (longlong)(int)local_58._8_4_ * 4);
      local_58._16_8_ = (float *)(local_58._16_8_ + (longlong)local_40 * 4);
      local_38 = local_38 + local_30;
      local_28 = local_28 + local_20;
    } while (iVar1 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 149132f10

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
UNiagaraDataInterfaceCubeTexture::SetShaderParameters
          (UNiagaraDataInterfaceCubeTexture *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  FRDGBuilder *this_00;
  FRHITexture *this_01;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  FNiagaraGpuReadbackManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNDICubeTextureInstanceData_RenderThread *pFVar7;
  FShaderParametersMetadata *pFVar8;
  FRDGTexture *pFVar9;
  TRefCountPtr<IPooledRenderTarget> TVar10;
  TIntPoint<int>_u_0 TVar11;
  uint uVar12;
  TIntPoint<int>_u_0 *pTVar13;
  longlong *local_res10;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
                   *)(param_1->DataInterfaceProxy + 1),param_1->SystemTick->SystemInstanceID);
  this_00 = param_1->GraphBuilder;
  uVar12 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceCubeTexture::FShaderParameters>::
           GetStructMetadata();
  pTVar13 = (TIntPoint<int>_u_0 *)(param_1->BaseParameters + uVar12);
  param_1->ParametersOffset = pFVar8->Size + uVar12;
  if ((pFVar7 == (FNDICubeTextureInstanceData_RenderThread *)0x0) ||
     ((pFVar7->TextureReferenceRHI).Reference == (FRHITextureReference *)0x0)) {
    pTVar13->_s_0 = (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    pTVar13[2]._s_0 =
         (TIntPoint<int>_u_0_s_0)
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    TVar11 = (TIntPoint<int>_u_0)
             FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,this_00,TextureCube);
    pTVar13[1] = TVar11;
    return;
  }
  *pTVar13 = (pFVar7->TextureSize).field0_0x0;
  pTVar13[2]._s_0 = (TIntPoint<int>_u_0_s_0)(pFVar7->SamplerStateRHI).Reference;
  bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,pTVar13 + 1);
  if (!bVar5) {
    return;
  }
  TVar11 = (TIntPoint<int>_u_0)pFVar7->TransientRDGTexture;
  if (TVar11 == (TIntPoint<int>_u_0)0x0) {
    this_01 = (((pFVar7->TextureReferenceRHI).Reference)->ReferencedTexture).Reference;
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
      pFVar9 = FRDGBuilder::FindExternalTexture(this_00,this_01);
      pFVar7->TransientRDGTexture = pFVar9;
      if (pFVar9 == (FRDGTexture *)0x0) {
        TVar10 = CreateRenderTarget((FRHITexture *)&local_res10,(wchar_t *)this_01);
        pFVar9 = FRDGBuilder::RegisterExternalTexture
                           (this_00,(TRefCountPtr<IPooledRenderTarget> *)TVar10.Reference,None);
        pFVar7->TransientRDGTexture = pFVar9;
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x38))();
        }
        FRDGBuilder::UseInternalAccessMode
                  (this_00,(FRDGViewableResource *)pFVar7->TransientRDGTexture);
        pFVar9 = pFVar7->TransientRDGTexture;
        pFVar2 = param_1->ComputeDispatchInterface;
        if (pFVar9 != (FRDGTexture *)0x0) {
          iVar6 = *(int *)&pFVar2[1].EmptyUAVPoolPtr.Ptr;
          piVar1 = (int *)((longlong)&pFVar2[1].EmptyUAVPoolPtr.Ptr + 4);
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                              (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)
                                     &pFVar2[1].GpuReadbackManagerPtr,piVar1);
          }
          *(int *)&pFVar2[1].EmptyUAVPoolPtr.Ptr = iVar6 + 1;
          pFVar3 = pFVar2[1].GpuReadbackManagerPtr.Ptr;
          pFVar3[iVar6].PendingReadbacks.Head = (TNode *)pFVar9;
          *(undefined4 *)&pFVar3[iVar6].PendingReadbacks.Tail = 0x70;
          *(undefined1 *)((longlong)&pFVar3[iVar6].PendingReadbacks.Tail + 4) = 1;
        }
      }
      TVar11 = (TIntPoint<int>_u_0)pFVar7->TransientRDGTexture;
      FRHIResource::Release((FRHIResource *)this_01);
      if (TVar11 != (TIntPoint<int>_u_0)0x0) goto LAB_1491330ce;
    }
    TVar11 = (TIntPoint<int>_u_0)
             FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,this_00,TextureCube);
  }
LAB_1491330ce:
  pTVar13[1] = TVar11;
  return;
}

// SetTexture @ 1491332e0

void __thiscall
UNiagaraDataInterfaceCubeTexture::SetTexture
          (UNiagaraDataInterfaceCubeTexture *this,UTexture *param_1)

{
  if (param_1 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Texture).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceCubeTexture @ 149139fd0

void __cdecl
UNiagaraDataInterfaceCubeTexture::StaticRegisterNativesUNiagaraDataInterfaceCubeTexture(void)

{
  return;
}

