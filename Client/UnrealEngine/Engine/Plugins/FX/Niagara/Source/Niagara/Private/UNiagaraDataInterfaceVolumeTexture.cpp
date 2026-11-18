// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// StaticClass @ 1491ee3a0

UClass * __cdecl UNiagaraDataInterfaceVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVolumeTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton;
}

// UNiagaraDataInterfaceVolumeTexture @ 149214700

UNiagaraDataInterfaceVolumeTexture * __thiscall
UNiagaraDataInterfaceVolumeTexture::UNiagaraDataInterfaceVolumeTexture
          (UNiagaraDataInterfaceVolumeTexture *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeTexture__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  return this;
}

// UNiagaraDataInterfaceVolumeTexture @ 149214740

UNiagaraDataInterfaceVolumeTexture * __thiscall
UNiagaraDataInterfaceVolumeTexture::UNiagaraDataInterfaceVolumeTexture
          (UNiagaraDataInterfaceVolumeTexture *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeTexture__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->TextureUserParameter);
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyVolumeTexture__6B_;
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

// ~UNiagaraDataInterfaceVolumeTexture @ 1492164d0

void __thiscall
UNiagaraDataInterfaceVolumeTexture::~UNiagaraDataInterfaceVolumeTexture
          (UNiagaraDataInterfaceVolumeTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVolumeTexture__6B_;
  pFVar1 = (this->TextureUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 149218980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITextureReference *pFVar1;
  FRHITextureReference *this_00;
  FRHIResource *pFVar2;
  FNDIVolumeTextureInstanceData_RenderThread *pFVar3;
  FTextureResource *pFVar4;
  TRefCountPtr<FRHISamplerState> this_01;
  
  pFVar3 = TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
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

// BuildShaderParameters @ 149220c70

void __thiscall
UNiagaraDataInterfaceVolumeTexture::BuildShaderParameters
          (UNiagaraDataInterfaceVolumeTexture *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVolumeTexture::FShaderParameters>::
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

// CanBeInCluster @ 149221b00

bool __thiscall
UNiagaraDataInterfaceVolumeTexture::CanBeInCluster(UNiagaraDataInterfaceVolumeTexture *this)

{
  return false;
}

// CanExecuteOnTarget @ 149221bd0

bool __thiscall
UNiagaraDataInterfaceVolumeTexture::CanExecuteOnTarget
          (UNiagaraDataInterfaceVolumeTexture *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 1492239c0

bool __thiscall
UNiagaraDataInterfaceVolumeTexture::CopyToInternal
          (UNiagaraDataInterfaceVolumeTexture *this,UNiagaraDataInterface *param_1)

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
    pFVar5 = GetTypeName<UNiagaraDataInterfaceVolumeTexture>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceVolumeTexture>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 14922bef0

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
UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData
          (UNiagaraDataInterfaceVolumeTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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
              TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData_::__l2::TSTR_NDITexture_RemoveInstance183>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::TSTR_NDITexture_RemoveInstance183>
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

// Equals @ 14922e170

bool __thiscall
UNiagaraDataInterfaceVolumeTexture::Equals
          (UNiagaraDataInterfaceVolumeTexture *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVolumeTexture_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVolumeTexture_const_>(&local_28);
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

// GetPrivateStaticClass @ 149237600

UClass * __cdecl UNiagaraDataInterfaceVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVolumeTexture",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVolumeTexture,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVolumeTexture>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVolumeTexture>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeTexture.InnerSingleton;
}

// GetTextureDimensions @ 149238a50

void __thiscall
UNiagaraDataInterfaceVolumeTexture::GetTextureDimensions
          (UNiagaraDataInterfaceVolumeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread>(&local_18,param_1);
  iVar9 = 0;
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar1 = ((local_18.Ptr)->CurrentTextureSize).field0_0x0._s_0.X;
  iVar2 = ((local_18.Ptr)->CurrentTextureSize).field0_0x0._s_0.Y;
  iVar3 = ((local_18.Ptr)->CurrentTextureSize).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar5 = pfVar5 + iVar8;
    pfVar4 = pfVar4 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar4 = (float)iVar1;
      *pfVar5 = (float)iVar2;
      *pfVar6 = (float)iVar3;
      pfVar6 = pfVar6 + local_20[0];
      pfVar5 = pfVar5 + local_30[0];
      pfVar4 = pfVar4 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetVMExternalFunction @ 14923bbe0

void __thiscall
UNiagaraDataInterfaceVolumeTexture::GetVMExternalFunction
          (UNiagaraDataInterfaceVolumeTexture *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this_00;
  UNiagaraDataInterfaceVolumeTexture *local_res10;
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
  
  if (param_1->Name == SampleVolumeTextureName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeTexture.cpp"
                           ,0x9c,L""), bVar2)) {
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
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVolumeTexture_SampleVolumeTextureBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
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
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVolumeTexture.cpp"
                           ,0xa1,L""), bVar2)) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVolumeTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVolumeTexture *)0x0)) {
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

// HasPreSimulateTick @ 14923c5e0

bool __thiscall
UNiagaraDataInterfaceVolumeTexture::HasPreSimulateTick(UNiagaraDataInterfaceVolumeTexture *this)

{
  return true;
}

// InitPerInstanceData @ 14923fd90

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
UNiagaraDataInterfaceVolumeTexture::InitPerInstanceData
          (UNiagaraDataInterfaceVolumeTexture *this,void *param_1,FNiagaraSystemInstance *param_2)

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

// PerInstanceDataSize @ 1492447a0

int __thiscall
UNiagaraDataInterfaceVolumeTexture::PerInstanceDataSize(UNiagaraDataInterfaceVolumeTexture *this)

{
  return 0x50;
}

// PerInstanceTick @ 149246530

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
UNiagaraDataInterfaceVolumeTexture::PerInstanceTick
          (UNiagaraDataInterfaceVolumeTexture *this,void *param_1,FNiagaraSystemInstance *param_2,
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
  UVolumeTexture *pUVar8;
  code **ppcVar9;
  ulonglong uVar10;
  UVolumeTexture *this_03;
  UVolumeTexture *pUVar11;
  UVolumeTexture *pUVar12;
  undefined1 auStack_128 [32];
  int local_108;
  int iStack_104;
  int local_100;
  UVolumeTexture *local_f8;
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
  pUVar11 = (UVolumeTexture *)(this->Texture).field0_0x0.DebugPtr;
  pUVar12 = (UVolumeTexture *)0x0;
  if (*(int *)((longlong)param_1 + 0x18) != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 0x20),(int)local_c8);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar6);
      if (bVar2) {
        pUVar11 = *(UVolumeTexture **)this_00.field0_0x0;
        goto LAB_1492465a0;
      }
    }
    pUVar11 = (UVolumeTexture *)0x0;
  }
LAB_1492465a0:
  bVar2 = TWeakObjectPtr<UTexture,FWeakObjectPtr>::UEOpEquals<UTexture,bool>
                    (param_1,(UTexture *)pUVar11);
  if (bVar2) {
    return false;
  }
  if (pUVar11 == (UVolumeTexture *)0x0) {
LAB_1492465f0:
    this_03 = pUVar12;
    if (pUVar11 != (UVolumeTexture *)0x0) goto LAB_1492465f8;
  }
  else {
    pUVar6 = Z_Construct_UClass_UVolumeTexture_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar4) ||
       (this_03 = pUVar11,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8)
       != &pUVar6->_padding_)) goto LAB_1492465f0;
LAB_1492465f8:
    pUVar6 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       (pUVar8 = pUVar11,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar4 * 8)
       == &pUVar6->_padding_)) goto LAB_149246621;
  }
  pUVar8 = pUVar12;
LAB_149246621:
  if (this_03 == (UVolumeTexture *)0x0) {
    if (pUVar8 == (UVolumeTexture *)0x0) {
      return false;
    }
    local_108 = *(int *)&pUVar8->AddressMode;
    iVar4 = (int)pUVar8[1]._padding_;
    iStack_104 = *(int *)&pUVar8->field_0x15c;
  }
  else {
    iVar4 = UVolumeTexture::GetSizeZ(this_03);
    iVar5 = UVolumeTexture::GetSizeY(this_03);
    local_108 = UVolumeTexture::GetSizeX(this_03);
    iStack_104 = iVar5;
  }
  local_100 = iVar4;
  local_f8 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UVolumeTexture *)0x0)) {
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
                       TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::`8'::<lambda_1>,1,1>
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
                  TFunctionRefCaller<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  iStack_d8 = local_108;
  iStack_d4 = iStack_104;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVolumeTexture::PerInstanceTick_::__l8::TSTR_NDITexture_UpdateInstance210>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::TSTR_NDITexture_UpdateInstance210>
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

// PostInitProperties @ 149246ee0

void __thiscall
UNiagaraDataInterfaceVolumeTexture::PostInitProperties(UNiagaraDataInterfaceVolumeTexture *this)

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

// SampleVolumeTexture @ 14924cdd0

void __thiscall
UNiagaraDataInterfaceVolumeTexture::SampleVolumeTexture
          (UNiagaraDataInterfaceVolumeTexture *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> local_78;
  int local_68 [4];
  undefined1 local_58 [24];
  int local_40;
  float *local_38;
  int local_30;
  float *local_28;
  int local_20;
  
  VectorVM::FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread>::
  FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread>(&local_78,param_1);
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

// SetShaderParameters @ 14924f0d0

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
UNiagaraDataInterfaceVolumeTexture::SetShaderParameters
          (UNiagaraDataInterfaceVolumeTexture *this,
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
  FNDIVolumeTextureInstanceData_RenderThread *pFVar8;
  FShaderParametersMetadata *pFVar9;
  FRDGTexture *pFVar10;
  TRefCountPtr<IPooledRenderTarget> TVar11;
  FRDGExternalAccessQueue *pFVar12;
  uint uVar13;
  uchar *puVar14;
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
  pFVar2 = param_1->DataInterfaceProxy;
  uVar7 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar8 = TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVolumeTextureInstanceData_RenderThread,0>_>
                   *)(pFVar2 + 1),uVar7);
  this_00 = param_1->GraphBuilder;
  uVar13 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar9 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVolumeTexture::FShaderParameters>::
           GetStructMetadata();
  puVar14 = param_1->BaseParameters + uVar13;
  param_1->ParametersOffset = pFVar9->Size + uVar13;
  if ((pFVar8 == (FNDIVolumeTextureInstanceData_RenderThread *)0x0) ||
     ((pFVar8->TextureReferenceRHI).Reference == (FRHITextureReference *)0x0)) {
    *(undefined8 *)puVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar14 + 8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(FRHISamplerState **)(puVar14 + 0x18) =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    pFVar10 = FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                        (param_1->ComputeDispatchInterface,this_00,Texture3D);
    *(FRDGTexture **)(puVar14 + 0x10) = pFVar10;
    return;
  }
  *(undefined8 *)puVar14 = *(undefined8 *)&(pFVar8->TextureSize).field0_0x0;
  *(float *)(puVar14 + 8) = (pFVar8->TextureSize).field0_0x0._s_0.Z;
  *(FRHISamplerState **)(puVar14 + 0x18) = (pFVar8->SamplerStateRHI).Reference;
  bVar5 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar14 + 0x10);
  if (!bVar5) {
    return;
  }
  pFVar10 = pFVar8->TransientRDGTexture;
  if (pFVar10 == (FRDGTexture *)0x0) {
    this_01 = (((pFVar8->TextureReferenceRHI).Reference)->ReferencedTexture).Reference;
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
      pFVar10 = FRDGBuilder::FindExternalTexture(this_00,this_01);
      pFVar8->TransientRDGTexture = pFVar10;
      if (pFVar10 == (FRDGTexture *)0x0) {
        TVar11 = CreateRenderTarget((FRHITexture *)&local_res10,(wchar_t *)this_01);
        pFVar10 = FRDGBuilder::RegisterExternalTexture
                            (this_00,(TRefCountPtr<IPooledRenderTarget> *)TVar11.Reference,None);
        pFVar8->TransientRDGTexture = pFVar10;
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x38))();
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
      pFVar10 = pFVar8->TransientRDGTexture;
      FRHIResource::Release((FRHIResource *)this_01);
      if (pFVar10 != (FRDGTexture *)0x0) goto LAB_14924f28f;
    }
    pFVar10 = FNiagaraGpuComputeDispatchInterface::GetBlackTexture
                        (param_1->ComputeDispatchInterface,this_00,Texture3D);
  }
LAB_14924f28f:
  *(FRDGTexture **)(puVar14 + 0x10) = pFVar10;
  return;
}

// SetTexture @ 14924f430

void __thiscall
UNiagaraDataInterfaceVolumeTexture::SetTexture
          (UNiagaraDataInterfaceVolumeTexture *this,UTexture *param_1)

{
  if (param_1 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Texture).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVolumeTexture @ 14924f5a0

void __cdecl
UNiagaraDataInterfaceVolumeTexture::StaticRegisterNativesUNiagaraDataInterfaceVolumeTexture(void)

{
  return;
}

