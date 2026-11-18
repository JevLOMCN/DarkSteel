// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 22

// StaticClass @ 149076e30

UClass * __cdecl UNiagaraDataInterface2DArrayTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterface2DArrayTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterface2DArrayTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterface2DArrayTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterface2DArrayTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.InnerSingleton;
}

// UNiagaraDataInterface2DArrayTexture @ 1490b30c0

UNiagaraDataInterface2DArrayTexture * __thiscall
UNiagaraDataInterface2DArrayTexture::UNiagaraDataInterface2DArrayTexture
          (UNiagaraDataInterface2DArrayTexture *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = 0;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterface2DArrayTexture__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  return this;
}

// UNiagaraDataInterface2DArrayTexture @ 1490b3100

UNiagaraDataInterface2DArrayTexture * __thiscall
UNiagaraDataInterface2DArrayTexture::UNiagaraDataInterface2DArrayTexture
          (UNiagaraDataInterface2DArrayTexture *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UNiagaraDataInterface2DArrayTexture__6B_;
  this->_padding_ = 0;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  puVar3 = ::operator_new(0x60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &___7FNiagaraDataInterfaceProxyTexture2DArray__6B_;
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

// ~UNiagaraDataInterface2DArrayTexture @ 1490b8a10

void __thiscall
UNiagaraDataInterface2DArrayTexture::~UNiagaraDataInterface2DArrayTexture
          (UNiagaraDataInterface2DArrayTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterface2DArrayTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1490bf570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this_00;
  FRHIResource *pFVar2;
  FNDITexture2DArrayInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TRefCountPtr<FRHISamplerState> this_01;
  
  pFVar3 = TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
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
    *(undefined8 *)&(pFVar3->TextureSize).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar3->TextureSize).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
    ;
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
  (pFVar3->TextureSize).field0_0x0._s_0.X = (float)*(int *)((longlong)this + 0x18);
  (pFVar3->TextureSize).field0_0x0._s_0.Y = (float)*(int *)((longlong)this + 0x1c);
  (pFVar3->TextureSize).field0_0x0._s_0.Z = (float)*(int *)((longlong)this + 0x20);
  return;
}

// BuildShaderParameters @ 1490d0a00

void __thiscall
UNiagaraDataInterface2DArrayTexture::BuildShaderParameters
          (UNiagaraDataInterface2DArrayTexture *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterface2DArrayTexture::FShaderParameters>::
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

// CanBeInCluster @ 1490d2a10

bool __thiscall
UNiagaraDataInterface2DArrayTexture::CanBeInCluster(UNiagaraDataInterface2DArrayTexture *this)

{
  return false;
}

// CanExecuteOnTarget @ 1490d2a30

bool __thiscall
UNiagaraDataInterface2DArrayTexture::CanExecuteOnTarget
          (UNiagaraDataInterface2DArrayTexture *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 1490d8bc0

bool __thiscall
UNiagaraDataInterface2DArrayTexture::CopyToInternal
          (UNiagaraDataInterface2DArrayTexture *this,UNiagaraDataInterface *param_1)

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
  pFVar4 = GetTypeName<UNiagaraDataInterface2DArrayTexture>(&local_28);
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

// DestroyPerInstanceData @ 1490ebc20

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
UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData
          (UNiagaraDataInterface2DArrayTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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
              TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance186>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance186>
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

// Equals @ 1490f2240

bool __thiscall
UNiagaraDataInterface2DArrayTexture::Equals
          (UNiagaraDataInterface2DArrayTexture *this,UNiagaraDataInterface *param_1)

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
      pFVar3 = GetTypeName<UNiagaraDataInterface2DArrayTexture_const_>(&local_28);
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

// GetPrivateStaticClass @ 149108a60

UClass * __cdecl UNiagaraDataInterface2DArrayTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterface2DArrayTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterface2DArrayTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterface2DArrayTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterface2DArrayTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterface2DArrayTexture.InnerSingleton;
}

// GetTextureDimensions @ 14910b260

void __thiscall
UNiagaraDataInterface2DArrayTexture::GetTextureDimensions
          (UNiagaraDataInterface2DArrayTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FNDIOutputParam<UE::Math::TVector<float>_> local_38;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar2 = param_1->RegReadCount;
  uVar1 = param_1->RegInc[iVar2];
  puVar6 = param_1->RegisterData[iVar2];
  param_1->RegReadCount = iVar2 + 1;
  if (uVar1 != '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdvanceOffset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x19e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar3 = *puVar6;
  if (uVar3 == 0xffffffff) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserPtrIdx != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x1a0,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_1->NumUserPtrs <= (int)uVar3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserPtrIdx < NumUserPtrs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x15b,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pvVar7 = param_1->UserPtrTable[(int)uVar3];
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_38,param_1);
  iVar2 = *(int *)((longlong)pvVar7 + 8);
  iVar10 = 0;
  iVar4 = *(int *)((longlong)pvVar7 + 0xc);
  iVar5 = *(int *)((longlong)pvVar7 + 0x10);
  if (0 < param_1->NumInstances) {
    do {
      iVar10 = iVar10 + 1;
      *local_38.X.Register = (float)iVar2;
      *local_38.Y.Register = (float)iVar4;
      *local_38.Z.Register = (float)iVar5;
      local_38.X.Register = local_38.X.Register + local_38.X.AdvanceOffset;
      local_38.Z.Register = local_38.Z.Register + local_38.Z.AdvanceOffset;
      local_38.Y.Register = local_38.Y.Register + local_38.Y.AdvanceOffset;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// GetVMExternalFunction @ 14910cb70

void __thiscall
UNiagaraDataInterface2DArrayTexture::GetVMExternalFunction
          (UNiagaraDataInterface2DArrayTexture *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UNiagaraDataInterface2DArrayTexture *local_res10;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (param_1->Name == TextureDimsName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface2DArrayTexture.cpp"
                         ,0xa4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterface2DArrayTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterface2DArrayTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterface2DArrayTexture *)0x0)) {
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
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// HasPreSimulateTick @ 149111d60

bool __thiscall
UNiagaraDataInterface2DArrayTexture::HasPreSimulateTick(UNiagaraDataInterface2DArrayTexture *this)

{
  return true;
}

// InitPerInstanceData @ 149116990

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
UNiagaraDataInterface2DArrayTexture::InitPerInstanceData
          (UNiagaraDataInterface2DArrayTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
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

// PerInstanceDataSize @ 14911ade0

int __thiscall
UNiagaraDataInterface2DArrayTexture::PerInstanceDataSize(UNiagaraDataInterface2DArrayTexture *this)

{
  return 0x50;
}

// PerInstanceTick @ 14911ae30

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
UNiagaraDataInterface2DArrayTexture::PerInstanceTick
          (UNiagaraDataInterface2DArrayTexture *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  TObjectPtr<UObject> this_00;
  UClass *pUVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  UTexture2DArray *pUVar8;
  code **ppcVar9;
  ulonglong uVar10;
  UTexture2DArray *this_03;
  UTexture2DArray *pUVar11;
  UTexture2DArray *pUVar12;
  undefined1 auStack_128 [32];
  int local_108;
  int iStack_104;
  int local_100;
  UTexture2DArray *local_f8;
  code *local_f0;
  code *pcStack_e8;
  undefined8 local_e0;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar11 = (UTexture2DArray *)(this->Texture).field0_0x0.DebugPtr;
  pUVar12 = (UTexture2DArray *)0x0;
  if (*(int *)((longlong)param_1 + 0x18) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x20),(int)local_c8);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar6);
      if (bVar2) {
        pUVar11 = *(UTexture2DArray **)this_00.field0_0x0;
        goto LAB_14911aea0;
      }
    }
    pUVar11 = (UTexture2DArray *)0x0;
  }
LAB_14911aea0:
  bVar2 = TWeakObjectPtr<UTexture,FWeakObjectPtr>::UEOpEquals<UTexture,bool>
                    (param_1,(UTexture *)pUVar11);
  if (bVar2) {
    return false;
  }
  if (pUVar11 == (UTexture2DArray *)0x0) {
LAB_14911aef0:
    this_03 = pUVar12;
    if (pUVar11 != (UTexture2DArray *)0x0) goto LAB_14911aef8;
  }
  else {
    pUVar6 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar4) ||
       (this_03 = pUVar11,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8)
       != &pUVar6->_padding_)) goto LAB_14911aef0;
LAB_14911aef8:
    pUVar6 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       (pUVar8 = pUVar11,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8)
       == &pUVar6->_padding_)) goto LAB_14911af21;
  }
  pUVar8 = pUVar12;
LAB_14911af21:
  if (this_03 == (UTexture2DArray *)0x0) {
    if (pUVar8 == (UTexture2DArray *)0x0) {
      return false;
    }
    local_108._0_1_ = pUVar8->AddressX;
    local_108._1_1_ = pUVar8->AddressY;
    local_108._2_1_ = pUVar8->AddressZ;
    local_108._3_1_ = pUVar8->field_0x15b;
    iVar4 = (int)pUVar8[1]._padding_;
    iStack_104 = *(int *)&pUVar8->field_0x15c;
  }
  else {
    iVar4 = UTexture2DArray::GetArraySize(this_03);
    iVar5 = UTexture2DArray::GetSizeY(this_03);
    local_108 = UTexture2DArray::GetSizeX(this_03);
    iStack_104 = iVar5;
  }
  local_100 = iVar4;
  local_f8 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UTexture2DArray *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_f8);
  *(ulonglong *)((longlong)param_1 + 8) = CONCAT44(iStack_104,local_108);
  *(int *)((longlong)param_1 + 0x10) = iVar4;
  local_f0 = (code *)this->_padding_;
  if ((local_f0 == (code *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pcStack_e8 = (code *)param_2->ID;
  local_b8[0] = (code *)0x0;
  local_e0 = pUVar11;
  local_d0 = iVar4;
  local_90 = FMemory::Malloc(0x30,8);
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::`8'::<lambda_1>,1,1>
                       ::_vftable_;
  local_90[1] = local_f0;
  local_90[2] = pcStack_e8;
  *(undefined4 *)(local_90 + 3) = (undefined4)local_e0;
  *(undefined4 *)((longlong)local_90 + 0x1c) = local_e0._4_4_;
  *(int *)(local_90 + 4) = local_108;
  *(int *)((longlong)local_90 + 0x24) = iStack_104;
  local_90[5] = (code *)CONCAT44(uStack_cc,local_d0);
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  iStack_d8 = local_108;
  iStack_d4 = iStack_104;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterface2DArrayTexture::PerInstanceTick_::__l8::TSTR_NDITexture_UpdateInstance213>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::TSTR_NDITexture_UpdateInstance213>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar7);
    uVar10 = (ulonglong)local_58;
    if ((2 < uVar10) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar9 = local_60;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar9 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar9 = local_90;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  return false;
}

// PostInitProperties @ 14911f770

void __thiscall
UNiagaraDataInterface2DArrayTexture::PostInitProperties(UNiagaraDataInterface2DArrayTexture *this)

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

// SetShaderParameters @ 149132650

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
UNiagaraDataInterface2DArrayTexture::SetShaderParameters
          (UNiagaraDataInterface2DArrayTexture *this,
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
  FNDITexture2DArrayInstanceData_RenderThread *pFVar7;
  FShaderParametersMetadata *pFVar8;
  FRDGTexture *pFVar9;
  TRefCountPtr<IPooledRenderTarget> TVar10;
  uint uVar11;
  uchar *puVar12;
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
  pFVar7 = TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDITexture2DArrayInstanceData_RenderThread,0>_>
                   *)(param_1->DataInterfaceProxy + 1),param_1->SystemTick->SystemInstanceID);
  this_00 = param_1->GraphBuilder;
  uVar11 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<UNiagaraDataInterface2DArrayTexture::FShaderParameters>::
           GetStructMetadata();
  puVar12 = param_1->BaseParameters + uVar11;
  param_1->ParametersOffset = pFVar8->Size + uVar11;
  if ((pFVar7 == (FNDITexture2DArrayInstanceData_RenderThread *)0x0) ||
     ((pFVar7->TextureReferenceRHI).Reference == (FRHITextureReference *)0x0)) {
    *(undefined8 *)puVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar12 + 8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(FRHISamplerState **)(puVar12 + 0x18) =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    pFVar9 = FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,this_00,Texture2DArray);
    *(FRDGTexture **)(puVar12 + 0x10) = pFVar9;
    return;
  }
  *(undefined8 *)puVar12 = *(undefined8 *)&(pFVar7->TextureSize).field0_0x0;
  *(float *)(puVar12 + 8) = (pFVar7->TextureSize).field0_0x0._s_0.Z;
  *(FRHISamplerState **)(puVar12 + 0x18) = (pFVar7->SamplerStateRHI).Reference;
  bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar12 + 0x10);
  if (!bVar5) {
    return;
  }
  pFVar9 = pFVar7->TransientRDGTexture;
  if (pFVar9 == (FRDGTexture *)0x0) {
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
      pFVar9 = pFVar7->TransientRDGTexture;
      FRHIResource::Release((FRHIResource *)this_01);
      if (pFVar9 != (FRDGTexture *)0x0) goto LAB_149132816;
    }
    pFVar9 = FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                       (param_1->ComputeDispatchInterface,this_00,Texture2DArray);
  }
LAB_149132816:
  *(FRDGTexture **)(puVar12 + 0x10) = pFVar9;
  return;
}

// SetTexture @ 1491332a0

void __thiscall
UNiagaraDataInterface2DArrayTexture::SetTexture
          (UNiagaraDataInterface2DArrayTexture *this,UTexture *param_1)

{
  if (param_1 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Texture).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterface2DArrayTexture @ 149139e20

void __cdecl
UNiagaraDataInterface2DArrayTexture::StaticRegisterNativesUNiagaraDataInterface2DArrayTexture(void)

{
  return;
}

