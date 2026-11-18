// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 30

// StaticClass @ 149198890

UClass * __cdecl UNiagaraDataInterfaceRenderTargetCube::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTargetCube",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRenderTargetCube,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTargetCube>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetCube>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton;
}

// UNiagaraDataInterfaceRenderTargetCube @ 1491ac650

UNiagaraDataInterfaceRenderTargetCube * __thiscall
UNiagaraDataInterfaceRenderTargetCube::UNiagaraDataInterfaceRenderTargetCube
          (UNiagaraDataInterfaceRenderTargetCube *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRenderTargetCube__6B_;
  (this->OverrideRenderTargetFilter).Value = '\x03';
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  return this;
}

// UNiagaraDataInterfaceRenderTargetCube @ 1491ac690

UNiagaraDataInterfaceRenderTargetCube * __thiscall
UNiagaraDataInterfaceRenderTargetCube::UNiagaraDataInterfaceRenderTargetCube
          (UNiagaraDataInterfaceRenderTargetCube *this,FObjectInitializer *param_1)

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
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRenderTargetCube__6B_;
  (this->OverrideRenderTargetFilter).Value = '\x03';
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  puVar2 = ::operator_new(0x60);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTargetCubeProxy__6B_;
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
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
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
  *(int *)&(this->RenderTargetUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceRenderTargetCube @ 1491ad720

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::~UNiagaraDataInterfaceRenderTargetCube
          (UNiagaraDataInterfaceRenderTargetCube *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRenderTargetCube__6B_;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 1491b0af0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  FRenderTargetCubeRWInstanceData_RenderThread *this_01;
  ulong64 local_res8;
  
  this_01 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (this_01 != (FRenderTargetCubeRWInstanceData_RenderThread *)0x0) {
    this_00 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
    if (this_00 != (FRHIResource *)0x0) {
      (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this_00);
    }
    pIVar1 = (this_01->RenderTarget).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (this_01->RenderTarget).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    FRenderTargetCubeRWInstanceData_RenderThread::UpdateMemoryStats(this_01);
  }
  lVar2 = *(longlong *)this;
  local_res8 = *(ulong64 *)((longlong)this + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar2 + 0x10),(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
  }
  return;
}

// operator() @ 1491b21a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHIResource *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong *plVar4;
  FRHIResource *this_00;
  FRenderTargetCubeRWInstanceData_RenderThread *this_01;
  longlong lVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  uint uVar7;
  longlong *local_res8;
  
  this_01 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)this + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  this_01->Size = *(int *)((longlong)this + 0x10);
  this_01->MipLevels = 1;
  pFVar2 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pIVar3 = (this_01->RenderTarget).Reference;
  pTVar1 = &this_01->RenderTarget;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  if (*(longlong *)((longlong)this + 0x60) != 0) {
    plVar4 = *(longlong **)(*(longlong *)((longlong)this + 0x60) + 0x20);
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))();
      uVar7 = (uint)*(byte *)(lVar5 + 0x30);
    }
    this_01->MipLevels = uVar7;
    lVar5 = (**(code **)(**(longlong **)((longlong)this + 0x60) + 0xb8))();
    if (lVar5 != 0) {
      pFVar2 = *(FRHIResource **)(lVar5 + 0x28);
      this_00 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
      if (this_00 != pFVar2) {
        (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar2;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar2);
        }
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_00);
        }
      }
      TVar6 = CreateRenderTarget((FRHITexture *)&local_res8,*(wchar_t **)(lVar5 + 0x20));
      if ((IPooledRenderTarget *)pTVar1 != TVar6.Reference) {
        pIVar3 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar6.Reference)->_padding_;
        (TVar6.Reference)->_padding_ = 0;
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))();
        }
      }
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x38))();
      }
    }
  }
  FRenderTargetCubeRWInstanceData_RenderThread::UpdateMemoryStats(this_01);
  return;
}

// BuildShaderParameters @ 1491b6050

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::BuildShaderParameters
          (UNiagaraDataInterfaceRenderTargetCube *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIRenderTargetCubeLocal::FShaderParameters>::
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

// CanExecuteOnTarget @ 1491b6d30

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::CanExecuteOnTarget
          (UNiagaraDataInterfaceRenderTargetCube *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CanExposeVariables @ 1491b6d80

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::CanExposeVariables
          (UNiagaraDataInterfaceRenderTargetCube *this)

{
  return true;
}

// CopyToInternal @ 1491b82c0

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::CopyToInternal
          (UNiagaraDataInterfaceRenderTargetCube *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  byte bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
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
      bVar5 = *(byte *)((longlong)&param_1[1]._padding_ + 6);
      *(int *)&param_1[1]._padding_ = this->Size;
      *(uchar *)((longlong)&param_1[1]._padding_ + 4) = (this->OverrideRenderTargetFormat).Value;
      *(uchar *)((longlong)&param_1[1]._padding_ + 5) = (this->OverrideRenderTargetFilter).Value;
      bVar5 = (bVar5 ^ this->bInheritUserParameterSettings) & 1 ^
              *(byte *)((longlong)&param_1[1]._padding_ + 6);
      *(byte *)((longlong)&param_1[1]._padding_ + 6) = bVar5;
      *(byte *)((longlong)&param_1[1]._padding_ + 6) = (bVar5 ^ this->field_0x3e) & 2 ^ bVar5;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1]._padding_,
                 &(this->RenderTargetUserParameter).Parameter);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube>(&local_28);
    pwVar6 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 1491becc0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData
          (UNiagaraDataInterfaceRenderTargetCube *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraWorldManager *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((*(char *)((longlong)param_1 + 0xc) != '\0') &&
      (*(longlong *)((longlong)param_1 + 0x10) != 0)) &&
     (this_00 = FNiagaraSystemInstance::GetWorldManager(param_2),
     this_00 != (FNiagaraWorldManager *)0x0)) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x16c) = 0;
    FNiagaraWorldManager::ObjectPoolReturn(this_00,*(UObject **)((longlong)param_1 + 0x10));
    FNiagaraWorldManager::RemoveReferencedObject(this_00,*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  lVar1 = this->_padding_;
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_80 = lVar1;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData454>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData454>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if ((2 < uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 1491c1750

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::Equals
          (UNiagaraDataInterfaceRenderTargetCube *this,UNiagaraDataInterface *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar3) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar5 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube_const_>(&local_28);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar4 = StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UNiagaraDataInterfaceRenderTargetCube_const_>(&local_28);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
    if (((((this->RenderTargetUserParameter).Parameter._padding_ == param_1[1]._padding_) &&
         ((int)(this->RenderTargetUserParameter).Parameter._padding_ == (int)param_1[1]._padding_))
        && ((int)param_1[1]._padding_ == this->Size)) &&
       ((*(uchar *)((longlong)&param_1[1]._padding_ + 4) == (this->OverrideRenderTargetFormat).Value
        && (*(uchar *)((longlong)&param_1[1]._padding_ + 5) ==
            (this->OverrideRenderTargetFilter).Value)))) {
      bVar1 = *(byte *)((longlong)&param_1[1]._padding_ + 6);
      if ((((bVar1 ^ this->bInheritUserParameterSettings) & 1) == 0) &&
         (((this->field_0x3e ^ bVar1) & 2) == 0)) {
        return true;
      }
    }
  }
  return false;
}

// GetExposedVariableValue @ 1491c7f90

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
UNiagaraDataInterfaceRenderTargetCube::GetExposedVariableValue
          (UNiagaraDataInterfaceRenderTargetCube *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  FNiagaraTypeDefinition *pFVar1;
  
  if (param_1->Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if (((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
         (param_1->Name == ExposedRTVar.Name)) &&
        ((param_1->TypeDefHandle).RegisteredTypeIndex ==
         ExposedRTVar.TypeDefHandle.RegisteredTypeIndex)) &&
       ((param_2 != (void *)0x0 && (*(longlong *)((longlong)param_2 + 0x10) != 0)))) {
      *(longlong *)param_4 = *(longlong *)((longlong)param_2 + 0x10);
      return true;
    }
  }
  return false;
}

// GetExposedVariables @ 1491c8170

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::GetExposedVariables
          (UNiagaraDataInterfaceRenderTargetCube *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar1 + (longlong)iVar2 * 0xc) = ExposedRTVar.Name;
  *(int *)(pFVar1 + (longlong)iVar2 * 0xc + 8) = ExposedRTVar.TypeDefHandle.RegisteredTypeIndex;
  return;
}

// GetPrivateStaticClass @ 1491ca560

UClass * __cdecl UNiagaraDataInterfaceRenderTargetCube::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTargetCube",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRenderTargetCube,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTargetCube>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetCube>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetCube.InnerSingleton;
}

// GetVMExternalFunction @ 1491d00d0

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::GetVMExternalFunction
          (UNiagaraDataInterfaceRenderTargetCube *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar4;
  bool bVar5;
  UNiagaraDataInterfaceRenderTargetCube *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIRenderTargetCubeLocal::GetSizeFunctionName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetCube____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetCube *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetCube *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetSize;
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
  else if (FVar1 == NDIRenderTargetCubeLocal::SetSizeFunctionName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetCube____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetCube *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetCube *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMSetSize;
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
      goto LAB_1491d04a9;
    }
  }
  else {
    if (FVar1 != NDIRenderTargetCubeLocal::GetNumMipLevelsName) {
      if (FVar1 != NDIRenderTargetCubeLocal::SetFormatFunctionName) {
        return;
      }
      pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceRenderTargetCube>
                         ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                           *)local_58,this,(pmf_a43119bb)0x1491e6c60);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
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
      bVar5 = local_40.bDestroyed == false;
      goto LAB_1491d04a9;
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetCube____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetCube *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetCube *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetNumMipLevels;
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
      goto LAB_1491d04a9;
    }
  }
  bVar5 = local_40.bDestroyed == false;
LAB_1491d04a9:
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

// HasPostSimulateTick @ 1491d11b0

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::HasPostSimulateTick
          (UNiagaraDataInterfaceRenderTargetCube *this)

{
  return true;
}

// HasPreSimulateTick @ 1491d1240

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::HasPreSimulateTick
          (UNiagaraDataInterfaceRenderTargetCube *this)

{
  return true;
}

// InitPerInstanceData @ 1491d3750

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::InitPerInstanceData
          (UNiagaraDataInterfaceRenderTargetCube *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  code *pcVar1;
  TRHIGlobal<int> TVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  int iVar7;
  ETextureRenderTargetFormat local_res8 [4];
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetCube.cpp"
                       ,0x1a0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0x13;
  *(undefined4 *)((longlong)param_1 + 8) = 3;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  iVar7 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x30),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x30) = iVar7;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar5 = NiagaraDataInterfaceRenderTargetCommon::GetRenderTargetFormat
                    (this->bOverrideFormat,(uint)(this->OverrideRenderTargetFormat).Value,local_res8
                    );
  if (bVar5) {
    iVar7 = (int)((float)this->Size * NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier)
    ;
    TVar2 = GRHIGlobals.MaxCubeTextureDimensions;
    if (iVar7 < GRHIGlobals.MaxCubeTextureDimensions.Value) {
      TVar2.Value = iVar7;
    }
    iVar7 = 1;
    if (1 < TVar2.Value) {
      iVar7 = TVar2.Value;
    }
    *(int *)param_1 = iVar7;
    EVar6 = GetPixelFormatFromRenderTargetFormat(local_res8[0]);
    *(EPixelFormat *)((longlong)param_1 + 4) = EVar6;
    *(uint *)((longlong)param_1 + 8) = (uint)(this->OverrideRenderTargetFilter).Value;
    FNiagaraParameterDirectBinding<UObject_*>::Init
              ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x18),
               (FNiagaraParameterStore *)(local_res8 + 2),
               (FNiagaraVariable *)&param_2->InstanceParameters);
  }
  else if (bVar3) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    return false;
  }
  return true;
}

// PerInstanceDataSize @ 1491d53f0

int __thiscall
UNiagaraDataInterfaceRenderTargetCube::PerInstanceDataSize
          (UNiagaraDataInterfaceRenderTargetCube *this)

{
  return 0x50;
}

// PerInstanceTick @ 1491d56b0

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
UNiagaraDataInterfaceRenderTargetCube::PerInstanceTick
          (UNiagaraDataInterfaceRenderTargetCube *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  bool bVar1;
  undefined1 uVar2;
  TObjectPtr<UObject> this_00;
  UClass *pUVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0x18) == -1) {
    lVar4 = 0;
    goto LAB_1491d5727;
  }
  this_00 = FNiagaraParameterStore::GetUObject
                      (*(FNiagaraParameterStore **)((longlong)param_1 + 0x20),(int)local_res8);
  if (*(longlong *)this_00.field0_0x0 == 0) {
LAB_1491d5707:
    lVar4 = 0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar3);
    if (!bVar1) goto LAB_1491d5707;
    lVar4 = *(longlong *)this_00.field0_0x0;
  }
  if ((lVar4 != 0) && (*(longlong *)((longlong)param_1 + 0x10) != lVar4)) {
    NiagaraDataInterfaceRenderTargetCommon::
    ReleaseRenderTarget<FRenderTargetCubeRWInstanceData_GameThread>(param_2,param_1);
    *(longlong *)((longlong)param_1 + 0x10) = lVar4;
  }
LAB_1491d5727:
  if (this->bInheritUserParameterSettings != 0) {
    if (lVar4 != 0) {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar4 + 0x158);
      uVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x3d0))();
      *(undefined1 *)((longlong)param_1 + 4) = uVar2;
      *(uint *)((longlong)param_1 + 8) =
           (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x10) + 0x109);
      return false;
    }
    if (1 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  return false;
}

// PerInstanceTickPostSimulate @ 1491d6a90

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceRenderTargetCube *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  UTexture *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  FNiagaraWorldManager *this_01;
  UClass *pUVar10;
  UObject *pUVar11;
  FTextureResource *pFVar12;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar13;
  FString *pFVar14;
  code **ppcVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined1 auStack_188 [32];
  code *local_168;
  code *local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  code *local_148;
  undefined4 local_140;
  code *local_138;
  FNiagaraVariable local_130;
  undefined4 local_110;
  FTextureRenderTargetResource *local_108;
  FString local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  FString local_e0;
  FString local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((*(longlong *)((longlong)param_1 + 0x10) == 0) ||
     ((*(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 8) >> 0x1e & 1) != 0)) {
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  pwVar18 = L"";
  if (((bVar9) && (this->bInheritUserParameterSettings == 0)) &&
     (*(longlong *)((longlong)param_1 + 0x10) == 0)) {
    this_01 = FNiagaraSystemInstance::GetWorldManager(param_2);
    if (this_01 == (FNiagaraWorldManager *)0x0) {
      return false;
    }
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    pUVar10 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
    pUVar11 = FNiagaraWorldManager::ObjectPoolGetOrCreate(this_01,pUVar10);
    if (pUVar11 == (UObject *)0x0) {
      pFVar14 = GetTypeName<UTextureRenderTargetCube>(&local_100);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar18);
    }
    pUVar10 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar10->_padding_)) {
      pFVar14 = GetTypeName<UTextureRenderTargetCube>(&local_e0);
      pwVar18 = L"";
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<UObject>(&local_d0,pUVar11);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar18,pwVar17);
    }
    *(UObject **)((longlong)param_1 + 0x10) = pUVar11;
    FNiagaraWorldManager::AddReferencedObject(this_01,pUVar11);
    if ((*(longlong *)((longlong)param_1 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceData->TargetTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetCube.cpp"
                           ,0x276,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_f0 = 0;
    uStack_e8 = 0;
    puVar1 = (uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x154);
    *puVar1 = *puVar1 | 2;
    lVar3 = *(longlong *)((longlong)param_1 + 0x10);
    *(undefined8 *)(lVar3 + 0x15c) = 0;
    *(undefined8 *)(lVar3 + 0x164) = 0;
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x109) =
         *(undefined1 *)((longlong)param_1 + 8);
    UTextureRenderTargetCube::Init
              (*(UTextureRenderTargetCube **)((longlong)param_1 + 0x10),*(uint *)param_1,
               *(EPixelFormat *)((longlong)param_1 + 4));
    UTextureRenderTargetCube::UpdateResourceImmediate
              (*(UTextureRenderTargetCube **)((longlong)param_1 + 0x10),true);
  }
  plVar4 = *(longlong **)((longlong)param_1 + 0x10);
  if ((plVar4 != (longlong *)0x0) &&
     (((((int)plVar4[0x2b] != *(int *)param_1 ||
        (cVar8 = (**(code **)(*plVar4 + 0x3d0))(), cVar8 != *(char *)((longlong)param_1 + 4))) ||
       (this_00 = *(UTexture **)((longlong)param_1 + 0x10),
       (uint)(this_00->Filter).Value != *(uint *)((longlong)param_1 + 8))) ||
      (((this_00[1]._padding_ & 0x200000000) == 0 ||
       (pFVar12 = UTexture::GetResource(this_00), pFVar12 == (FTextureResource *)0x0)))))) {
    puVar1 = (uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x154);
    *puVar1 = *puVar1 | 2;
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x109) =
         *(undefined1 *)((longlong)param_1 + 8);
    UTextureRenderTargetCube::Init
              (*(UTextureRenderTargetCube **)((longlong)param_1 + 0x10),*(uint *)param_1,
               *(EPixelFormat *)((longlong)param_1 + 4));
    UTextureRenderTargetCube::UpdateResourceImmediate
              (*(UTextureRenderTargetCube **)((longlong)param_1 + 0x10),true);
  }
  if (bVar9) {
    pcVar5 = (code *)this->_padding_;
    if ((pcVar5 == (code *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (*(UTextureRenderTarget **)((longlong)param_1 + 0x10) == (UTextureRenderTarget *)0x0) {
      local_108 = (FTextureRenderTargetResource *)0x0;
    }
    else {
      local_108 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                            (*(UTextureRenderTarget **)((longlong)param_1 + 0x10));
    }
    local_160 = (code *)param_2->ID;
    local_158 = *(undefined4 *)param_1;
    local_154 = *(undefined1 *)((longlong)param_1 + 4);
    local_150 = *(undefined4 *)((longlong)param_1 + 8);
    local_14c = *(undefined1 *)((longlong)param_1 + 0xc);
    local_148 = *(code **)((longlong)param_1 + 0x10);
    local_140 = *(undefined4 *)((longlong)param_1 + 0x18);
    local_138 = *(code **)((longlong)param_1 + 0x20);
    local_168 = pcVar5;
    FNiagaraVariable::FNiagaraVariable(&local_130,(FNiagaraVariable *)((longlong)param_1 + 0x28));
    local_110 = *(undefined4 *)((longlong)param_1 + 0x48);
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x70,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = local_168;
    local_90[2] = local_160;
    *(undefined4 *)(local_90 + 3) = local_158;
    *(undefined1 *)((longlong)local_90 + 0x1c) = local_154;
    *(undefined4 *)(local_90 + 4) = local_150;
    *(undefined1 *)((longlong)local_90 + 0x24) = local_14c;
    local_90[5] = local_148;
    *(undefined4 *)(local_90 + 6) = local_140;
    local_90[7] = local_138;
    local_90[8] = (code *)local_130._padding_;
    *(undefined4 *)(local_90 + 9) = (undefined4)local_130._padding_;
    local_90[10] = (code *)0x0;
    local_90[10] = (code *)local_130.VarData.AllocatorInstance.Data;
    local_130.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_90 + 0xb) = local_130.VarData.ArrayNum;
    *(int *)((longlong)local_90 + 0x5c) = local_130.VarData.ArrayMax;
    local_130.VarData.ArrayNum = 0;
    local_130.VarData.ArrayMax = 0;
    *(undefined4 *)(local_90 + 0xc) = local_110;
    local_90[0xd] = (code *)local_108;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate_::__l27::TSTR_NDIRenderTargetCubeUpdate665>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_88[0] = local_b8[0];
      local_b8[0] = (code *)0x0;
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_78[0] = local_a8[0];
      local_78[1] = local_a8[1];
      local_78[2] = local_a8[2];
      local_58 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTargetCubeUpdate665>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar13);
      uVar16 = (ulonglong)local_58;
      if ((2 < uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88[0] != (code *)0x0) {
          ppcVar15 = local_88 + 2;
          if (local_60 != (code **)0x0) {
            ppcVar15 = local_60;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16])
                  ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar15 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar15 = local_90;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (local_130.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.VarData.AllocatorInstance.Data);
    }
  }
  return false;
}

// PostInitProperties @ 1491d7bd0

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::PostInitProperties
          (UNiagaraDataInterfaceRenderTargetCube *this)

{
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 local_38;
  FNiagaraTypeDefinitionHandle local_30;
  undefined8 local_2c;
  undefined4 local_24;
  TObjectPtr<UObject>_u_0 local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined8 local_14;
  undefined4 local_c;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_38 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38.DebugPtr);
    }
    local_30.RegisteredTypeIndex._2_1_ = 0;
    local_30.RegisteredTypeIndex._0_2_ = 1;
    local_2c = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_38.ObjectPtr,AllowParameter|AllowAnyVariable);
    ::FName::FName((FName *)&local_res8.ObjectPtr,L"RenderTarget");
    local_20.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_20.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_20.DebugPtr);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffffffffffff;
    local_c = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    local_38 = local_res8;
    ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_30,(FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    ExposedRTVar.Name = (FName)local_38.ObjectPtr.field0_0x0;
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 1491d9330

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceRenderTargetCube *this,void *param_1,void *param_2,ulong64 *param_3)

{
  return;
}

// SetShaderParameters @ 1491e1230

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
UNiagaraDataInterfaceRenderTargetCube::SetShaderParameters
          (UNiagaraDataInterfaceRenderTargetCube *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  char cVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FRDGBuilder *this_00;
  FRDGTexture *pFVar4;
  FResource *pFVar5;
  uchar *puVar6;
  FRHISamplerState *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulong64 uVar12;
  FRenderTargetCubeRWInstanceData_RenderThread *pFVar13;
  FRDGTextureSRV *pFVar14;
  FRDGTextureUAV *pFVar15;
  FRDGExternalAccessQueue *pFVar16;
  FShaderParametersMetadata *pFVar17;
  TRefCountPtr<FRHISamplerState> TVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FString local_88;
  FString local_78;
  FString local_68;
  FRDGTextureSRVDesc local_58;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar13 = TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetCubeRWInstanceData_RenderThread,0>_>
                    *)(pFVar3 + 1),uVar12);
  if ((pFVar13 == (FRenderTargetCubeRWInstanceData_RenderThread *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData_RT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetCube.cpp"
                         ,0x161,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = param_1->GraphBuilder;
  if ((pFVar13->TransientRDGTexture == (FRDGTexture *)0x0) &&
     ((pFVar13->RenderTarget).Reference != (IPooledRenderTarget *)0x0)) {
    local_58.Texture = FRDGBuilder::RegisterExternalTexture(this_00,&pFVar13->RenderTarget,None);
    pFVar13->TransientRDGTexture = local_58.Texture;
    local_58._padding_._4_4_ = 0;
    local_58._padding_._0_1_ = 0;
    local_58._padding_._2_1_ = 0;
    local_58._padding_._0_2_ = 0;
    local_58._padding_._3_1_ = 0;
    local_58._padding_._2_1_ = ((local_58.Texture)->Desc).field_0x30;
    cVar2 = ((local_58.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_58._padding_._4_4_ = (uint)*(ushort *)&((local_58.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar14 = FRDGBuilder::CreateSRV(this_00,&local_58);
    pFVar13->TransientRDGSRV = pFVar14;
    pFVar15 = FRDGBuilder::CreateUAV(this_00,pFVar13->TransientRDGTexture,None,PF_Unknown);
    pFVar13->TransientRDGUAV = pFVar15;
    FRDGBuilder::UseInternalAccessMode(this_00,(FRDGViewableResource *)pFVar13->TransientRDGTexture)
    ;
    pFVar16 = FNiagaraDataInterfaceSetShaderParametersContext::GetRDGExternalAccessQueue(param_1);
    pFVar4 = pFVar13->TransientRDGTexture;
    if (pFVar4 != (FRDGTexture *)0x0) {
      piVar1 = &(pFVar16->Resources).ArrayMax;
      iVar11 = (pFVar16->Resources).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                           (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar16,
                            piVar1);
      }
      (pFVar16->Resources).ArrayNum = iVar11 + 1;
      pFVar5 = (pFVar16->Resources).AllocatorInstance.Data;
      pFVar5[iVar11].Resource = (FRDGViewableResource *)pFVar4;
      pFVar5[iVar11].Access = SRVMask;
      pFVar5[iVar11].Pipelines = Graphics;
    }
  }
  uVar20 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar17 = TShaderParameterStructTypeInfo<NDIRenderTargetCubeLocal::FShaderParameters>::
            GetStructMetadata();
  puVar6 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar17->Size + uVar20;
  *(int *)(puVar6 + uVar20) = pFVar13->Size;
  *(int *)(puVar6 + (ulonglong)uVar20 + 4) = pFVar13->MipLevels;
  bVar9 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                    (param_1,puVar6 + (ulonglong)uVar20 + 8);
  bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                     (param_1,puVar6 + (ulonglong)uVar20 + 0x10);
  if (bVar9) {
    if ((pFVar13->RenderTarget).Reference == (IPooledRenderTarget *)0x0) {
      pFVar15 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                          (param_1->ComputeDispatchInterface,this_00,PF_A16B16G16R16,TextureCube);
      *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar20 + 8) = pFVar15;
    }
    else {
      *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar20 + 8) = pFVar13->TransientRDGUAV;
      pFVar13->bWroteThisFrame = true;
    }
  }
  if (bVar10) {
    if ((bVar9) || ((pFVar13->RenderTarget).Reference == (IPooledRenderTarget *)0x0)) {
      FNiagaraDataInterfaceSetShaderParametersContext::GetDebugString(param_1,&local_68);
      ::FString::PrintfImpl
                (&local_88,
                 L"RenderTarget is read and wrote in the same stage, this is not allowed, read will be invalid. (%s)"
                );
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar19.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_78,(wchar_t *)FVar19.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this,__real_3f800000,FColor::White,&local_78,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar14 = FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
                          (param_1->ComputeDispatchInterface,this_00,TextureCube);
    }
    else {
      pFVar14 = pFVar13->TransientRDGSRV;
      pFVar13->bReadThisFrame = true;
    }
    *(FRDGTextureSRV **)(puVar6 + (ulonglong)uVar20 + 0x10) = pFVar14;
    pFVar7 = (pFVar13->SamplerStateRHI).Reference;
    TVar18 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    if (pFVar7 != (FRHISamplerState *)0x0) {
      TVar18.Reference = pFVar7;
    }
    *(FRHISamplerState **)(puVar6 + (ulonglong)uVar20 + 0x18) = TVar18.Reference;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceRenderTargetCube @ 1491e3620

void __cdecl
UNiagaraDataInterfaceRenderTargetCube::StaticRegisterNativesUNiagaraDataInterfaceRenderTargetCube
          (void)

{
  return;
}

// VMGetNumMipLevels @ 1491e6190

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::VMGetNumMipLevels
          (UNiagaraDataInterfaceRenderTargetCube *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int local_20 [2];
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar3 = 1.4013e-45;
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if ((local_18.Ptr)->TargetTexture != (UTextureRenderTargetCube *)0x0) {
    fVar3 = (float)(local_18.Ptr)->TargetTexture->NumMips;
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = fVar3;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetSize @ 1491e6470

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::VMGetSize
          (UNiagaraDataInterfaceRenderTargetCube *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->Size;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMSetFormat @ 1491e6c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::VMSetFormat
          (UNiagaraDataInterfaceRenderTargetCube *this,FVectorVMExternalFunctionContext *param_1)

{
  EPixelFormat EVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  TObjectPtr<UObject> this_00;
  UClass *pUVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float local_res10 [2];
  float *local_res18;
  undefined1 local_res20 [8];
  int local_70 [2];
  int local_68 [2];
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> local_60 [2];
  
  VectorVM::FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>(local_60,param_1);
  local_68[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  lVar8 = (longlong)local_68[0];
  local_70[0] = 0;
  pfVar3 = pfVar3 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar7 = (longlong)local_70[0];
  iVar9 = 0;
  iVar10 = param_1->NumInstances;
  pfVar4 = pfVar4 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar10) {
    do {
      local_res10[0] = *pfVar3;
      pfVar3 = pfVar3 + lVar8;
      if ((local_60[0].Ptr == (FRenderTargetCubeRWInstanceData_GameThread *)0x0) || (iVar10 != 1)) {
        *pfVar4 = 0.0;
      }
      else {
        *pfVar4 = -NAN;
        switch(local_res10[0]) {
        case 0.0:
          EVar1 = PF_G8;
          break;
        case 1.4013e-45:
          EVar1 = PF_R8G8;
          break;
        case 2.8026e-45:
        case 4.2039e-45:
          EVar1 = PF_B8G8R8A8;
          break;
        case 5.60519e-45:
          EVar1 = PF_R16F;
          break;
        case 7.00649e-45:
          EVar1 = PF_G16R16F;
          break;
        case 8.40779e-45:
          EVar1 = PF_FloatRGBA;
          break;
        case 9.80909e-45:
          EVar1 = PF_R32_FLOAT;
          break;
        case 1.12104e-44:
          EVar1 = PF_G32R32F;
          break;
        case 1.26117e-44:
          EVar1 = PF_A32B32G32R32F;
          break;
        case 1.4013e-44:
          EVar1 = PF_A2B10G10R10;
          break;
        default:
          local_res18 = local_res10;
          `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(&local_res18);
          EVar1 = PF_Unknown;
        }
        (local_60[0].Ptr)->Format = EVar1;
        if ((this->bInheritUserParameterSettings != 0) &&
           (((local_60[0].Ptr)->RTUserParamBinding).UObjectOffset != -1)) {
          this_00 = FNiagaraParameterStore::GetUObject
                              (((local_60[0].Ptr)->RTUserParamBinding).BoundStore,(int)local_res20);
          if (*(longlong *)this_00.field0_0x0 == 0) {
LAB_1491e6dd4:
            lVar6 = 0;
          }
          else {
            pUVar5 = Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
            bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar5);
            if (!bVar2) goto LAB_1491e6dd4;
            lVar6 = *(longlong *)this_00.field0_0x0;
          }
          if ((lVar6 != 0) && (2 < (byte)LogNiagara._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
      }
      pfVar4 = pfVar4 + lVar7;
      iVar10 = param_1->NumInstances;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
  }
  return;
}

// VMSetSize @ 1491e7750

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetCube::VMSetSize
          (UNiagaraDataInterfaceRenderTargetCube *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  TRHIGlobal<int> TVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  int local_30 [2];
  int local_28 [2];
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> local_20;
  
  VectorVM::FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>(&local_20,param_1);
  local_28[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  lVar6 = (longlong)local_28[0];
  local_30[0] = 0;
  pfVar4 = pfVar4 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar7 = 0;
  iVar3 = param_1->NumInstances;
  pfVar5 = pfVar5 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar3) {
    do {
      fVar1 = *pfVar4;
      pfVar4 = pfVar4 + lVar6;
      if (((local_20.Ptr == (FRenderTargetCubeRWInstanceData_GameThread *)0x0) || (iVar3 != 1)) ||
         ((int)fVar1 < 1)) {
        *pfVar5 = 0.0;
      }
      else {
        *pfVar5 = -NAN;
        iVar3 = (int)((float)(int)fVar1 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar2 = GRHIGlobals.MaxCubeTextureDimensions;
        if (iVar3 < GRHIGlobals.MaxCubeTextureDimensions.Value) {
          TVar2.Value = iVar3;
        }
        iVar3 = 1;
        if (1 < TVar2.Value) {
          iVar3 = TVar2.Value;
        }
        (local_20.Ptr)->Size = iVar3;
      }
      iVar3 = param_1->NumInstances;
      pfVar5 = pfVar5 + local_30[0];
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return;
}

