// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 148e40ed0

UClass * __cdecl UNiagaraDataInterfaceActorComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceActorComponent",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceActorComponent,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceActorComponent>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceActorComponent>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton;
}

// UNiagaraDataInterfaceActorComponent @ 148e54ba0

UNiagaraDataInterfaceActorComponent * __thiscall
UNiagaraDataInterfaceActorComponent::UNiagaraDataInterfaceActorComponent
          (UNiagaraDataInterfaceActorComponent *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = Default;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceActorComponent__6B_;
  *(undefined8 *)&this->LocalPlayerIndex = 0;
  *(undefined8 *)&(this->SourceActor).field_0x4 = 0;
  *(undefined8 *)&(this->SourceActor).field_0x10 = 0;
  *(undefined4 *)&(this->SourceActor).field_0xc = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ActorOrComponentParameter);
  this->bRequireCurrentFrameData = true;
  return this;
}

// UNiagaraDataInterfaceActorComponent @ 148e54bf0

UNiagaraDataInterfaceActorComponent * __thiscall
UNiagaraDataInterfaceActorComponent::UNiagaraDataInterfaceActorComponent
          (UNiagaraDataInterfaceActorComponent *this,FObjectInitializer *param_1)

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
  this->SourceMode = Default;
  *(undefined8 *)&this->LocalPlayerIndex = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceActorComponent__6B_;
  *(undefined8 *)&(this->SourceActor).field_0x4 = 0;
  *(undefined8 *)&(this->SourceActor).field_0x10 = 0;
  *(undefined4 *)&(this->SourceActor).field_0xc = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ActorOrComponentParameter);
  this->bRequireCurrentFrameData = true;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIProxy_NDIActorComponentLocal__6B_;
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
  *(int *)&(this->ActorOrComponentParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceActorComponent @ 148e56780

void __thiscall
UNiagaraDataInterfaceActorComponent::~UNiagaraDataInterfaceActorComponent
          (UNiagaraDataInterfaceActorComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceActorComponent__6B_;
  pFVar1 = (this->ActorOrComponentParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148e594e0

void __thiscall
`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::__l13::<lambda_3>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int local_60 [2];
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> local_58;
  FNDIOutputParam<UE::Math::TVector<float>_> local_48;
  
  VectorVM::FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>(&local_58,param_1);
  iVar6 = 0;
  local_60[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  lVar5 = (longlong)local_60[0];
  iVar4 = local_60[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_48,param_1);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + iVar4;
    do {
      *pfVar3 = (float)-(uint)((local_58.Ptr)->bCachedValid != false);
      iVar6 = iVar6 + 1;
      uVar1 = *(undefined8 *)&((local_58.Ptr)->CachedVelocity).field0_0x0;
      fVar2 = ((local_58.Ptr)->CachedVelocity).field0_0x0._s_0.Z;
      *local_48.X.Register = (float)uVar1;
      *local_48.Y.Register = (float)((ulonglong)uVar1 >> 0x20);
      *local_48.Z.Register = fVar2;
      local_48.Z.Register = local_48.Z.Register + local_48.Z.AdvanceOffset;
      pfVar3 = pfVar3 + lVar5;
      local_48.Y.Register = local_48.Y.Register + local_48.Y.AdvanceOffset;
      local_48.X.Register = local_48.X.Register + local_48.X.AdvanceOffset;
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// BuildShaderParameters @ 148e5c1c0

void __thiscall
UNiagaraDataInterfaceActorComponent::BuildShaderParameters
          (UNiagaraDataInterfaceActorComponent *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceActorComponent::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x80;
  return;
}

// CalculateTickGroup @ 148e5cb00

ETickingGroup __thiscall
UNiagaraDataInterfaceActorComponent::CalculateTickGroup
          (UNiagaraDataInterfaceActorComponent *this,void *param_1)

{
  ETickingGroup EVar1;
  UObject *pUVar2;
  byte bVar3;
  ETickingGroup EVar4;
  
  if ((this->bRequireCurrentFrameData != false) && (param_1 != (void *)0x0)) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xac));
    if (pUVar2 != (UObject *)0x0) {
      bVar3 = pUVar2[1].field_0x19;
      if ((byte)pUVar2[1].field_0x19 < (byte)pUVar2[1].field_0x18) {
        bVar3 = pUVar2[1].field_0x18;
      }
      EVar4 = TG_LastDemotable;
      if (bVar3 + TG_StartPhysics < TG_LastDemotable) {
        EVar4 = bVar3 + TG_StartPhysics;
      }
      EVar1 = TG_PrePhysics;
      if (EVar4 != TG_PrePhysics) {
        EVar1 = EVar4;
      }
      return EVar1;
    }
  }
  return TG_PrePhysics;
}

// CanExecuteOnTarget @ 148e5cf70

bool __thiscall
UNiagaraDataInterfaceActorComponent::CanExecuteOnTarget
          (UNiagaraDataInterfaceActorComponent *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148e5ee60

bool __thiscall
UNiagaraDataInterfaceActorComponent::CopyToInternal
          (UNiagaraDataInterfaceActorComponent *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  longlong lVar2;
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
      *(ENDIActorComponentSourceMode *)&param_1[1]._padding_ = this->SourceMode;
      *(int *)((longlong)&param_1[1]._padding_ + 4) = this->LocalPlayerIndex;
      lVar2 = *(longlong *)&(this->SourceActor).field_0x8;
      param_1[1]._padding_ = *(longlong *)&this->SourceActor;
      param_1[1]._padding_ = lVar2;
      param_1[1]._padding_ = *(longlong *)&(this->SourceActor).field_0x10;
      param_1[1]._padding_ = (this->ActorOrComponentParameter).Parameter._padding_;
      *(int *)&param_1[1].Proxy.Ptr = (int)(this->ActorOrComponentParameter).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1].field_0x30,
                 &(this->ActorOrComponentParameter).Parameter.VarData);
      *(bool *)&param_1[2]._padding_ = this->bRequireCurrentFrameData;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceActorComponent>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceActorComponent>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 148e62c80

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
UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData
          (UNiagaraDataInterfaceActorComponent *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
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
              TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy324>
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

// Equals @ 148e63ec0

bool __thiscall
UNiagaraDataInterfaceActorComponent::Equals
          (UNiagaraDataInterfaceActorComponent *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceActorComponent_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceActorComponent_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if ((((((*(int *)((longlong)&param_1[1]._padding_ + 4) ==
             *(int *)&(this->SourceActor).field_0x14 &&
            (int)param_1[1]._padding_ == *(int *)&(this->SourceActor).field_0x10) &&
           *(int *)((longlong)&param_1[1]._padding_ + 4) == *(int *)&(this->SourceActor).field_0xc)
           && *(int *)&(this->SourceActor).field_0x8 == (int)param_1[1]._padding_) &&
         ((this->ActorOrComponentParameter).Parameter._padding_ == param_1[1]._padding_)) &&
        ((int)(this->ActorOrComponentParameter).Parameter._padding_ == *(int *)&param_1[1].Proxy.Ptr
        )) && ((((ENDIActorComponentSourceMode)param_1[1]._padding_ == this->SourceMode &&
                (*(int *)((longlong)&param_1[1]._padding_ + 4) == this->LocalPlayerIndex)) &&
               ((bool)(char)param_1[2]._padding_ == this->bRequireCurrentFrameData)))) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148e6e060

UClass * __cdecl UNiagaraDataInterfaceActorComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceActorComponent",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceActorComponent,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceActorComponent>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceActorComponent>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceActorComponent.InnerSingleton;
}

// GetVMExternalFunction @ 148e6fd40

void __thiscall
UNiagaraDataInterfaceActorComponent::GetVMExternalFunction
          (UNiagaraDataInterfaceActorComponent *this,FVMExternalFunctionBindingInfo *param_1,
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
  if (FVar1 == NDIActorComponentLocal::GetMatrixName) {
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
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::`5'::<lambda_1>_>
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
  else if (FVar1 == NDIActorComponentLocal::GetTransformName) {
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
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::`9'::<lambda_2>_>
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
    if (FVar1 != NDIActorComponentLocal::GetVelocityName) {
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
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceActorComponent::GetVMExternalFunction'::`13'::<lambda_3>_>
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

// HasPreSimulateTick @ 148e729b0

bool __thiscall
UNiagaraDataInterfaceActorComponent::HasPreSimulateTick(UNiagaraDataInterfaceActorComponent *this)

{
  return true;
}

// HasTickGroupPrereqs @ 148e72c00

bool __thiscall
UNiagaraDataInterfaceActorComponent::HasTickGroupPrereqs(UNiagaraDataInterfaceActorComponent *this)

{
  return true;
}

// InitPerInstanceData @ 148e742d0

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
UNiagaraDataInterfaceActorComponent::InitPerInstanceData
          (UNiagaraDataInterfaceActorComponent *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  int iVar1;
  UActorComponent *local_res8;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x18),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x18) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0xa0) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0xa8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (param_1,(FNiagaraParameterStore *)&local_res8,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  local_res8 = ResolveComponent(this,param_2,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UActorComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0xac),(FObjectPtr)&local_res8);
  return true;
}

// PerInstanceDataSize @ 148e75a10

int __thiscall
UNiagaraDataInterfaceActorComponent::PerInstanceDataSize(UNiagaraDataInterfaceActorComponent *this)

{
  return 0xc0;
}

// PerInstanceTick @ 148e75ac0

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
UNiagaraDataInterfaceActorComponent::PerInstanceTick
          (UNiagaraDataInterfaceActorComponent *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  float fVar1;
  int iVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  UPrimitiveComponent *pUVar15;
  UClass *pUVar16;
  TTransform<double> *pTVar17;
  TVector<double> *pTVar18;
  UPrimitiveComponent *this_00;
  AActor *pAVar19;
  undefined1 *puVar20;
  UPrimitiveComponent *local_res18 [2];
  undefined1 local_80 [24];
  TVector<double> local_68 [2];
  undefined1 local_38 [32];
  
  if (param_2 == (FNiagaraSystemInstance *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SystemInstance",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceActorComponent.cpp"
                        ,0x156,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
  }
  if (param_1 == (void *)0x0) {
    return true;
  }
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0xa0) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0xa8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  pUVar15 = (UPrimitiveComponent *)ResolveComponent(this,param_2,param_1);
  if (pUVar15 == (UPrimitiveComponent *)0x0) goto LAB_148e75da3;
  pUVar16 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar2 = (int)pUVar16->_padding_;
  if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar16->_padding_)) {
    pAVar19 = *(AActor **)&pUVar15->field_0xa8;
    if (pAVar19 == (AActor *)0x0) goto LAB_148e75da3;
    *(undefined1 *)((longlong)param_1 + 0x38) = 1;
    pUVar3 = (pAVar19->RootComponent).field0_0x0.DebugPtr;
    if (pUVar3 == (USceneComponent *)0x0) {
      pTVar17 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar17 = &pUVar3->ComponentToWorld;
    }
    dVar7 = (pTVar17->Rotation).XY.m128d_f64[1];
    puVar20 = local_38;
    *(double *)((longlong)param_1 + 0x40) = (pTVar17->Rotation).XY.m128d_f64[0];
    *(double *)((longlong)param_1 + 0x48) = dVar7;
    dVar7 = (pTVar17->Rotation).ZW.m128d_f64[1];
    *(double *)((longlong)param_1 + 0x50) = (pTVar17->Rotation).ZW.m128d_f64[0];
    *(double *)((longlong)param_1 + 0x58) = dVar7;
    dVar7 = (pTVar17->Translation).XY.m128d_f64[1];
    *(double *)((longlong)param_1 + 0x60) = (pTVar17->Translation).XY.m128d_f64[0];
    *(double *)((longlong)param_1 + 0x68) = dVar7;
    dVar7 = (pTVar17->Translation).ZW.m128d_f64[1];
    *(double *)((longlong)param_1 + 0x70) = (pTVar17->Translation).ZW.m128d_f64[0];
    *(double *)((longlong)param_1 + 0x78) = dVar7;
    dVar7 = (pTVar17->Scale3D).XY.m128d_f64[1];
    *(double *)((longlong)param_1 + 0x80) = (pTVar17->Scale3D).XY.m128d_f64[0];
    *(double *)((longlong)param_1 + 0x88) = dVar7;
    dVar12 = __real_c140000000000000;
    dVar7 = (pTVar17->Scale3D).ZW.m128d_f64[1];
    *(double *)((longlong)param_1 + 0x90) = (pTVar17->Scale3D).ZW.m128d_f64[0];
    *(double *)((longlong)param_1 + 0x98) = dVar7;
    fVar1 = (param_2->LWCTile).field0_0x0._s_0.Z;
    dVar10 = *(double *)((longlong)param_1 + 0x68) +
             (double)(param_2->LWCTile).field0_0x0._s_0.Y * dVar12;
    dVar7 = *(double *)((longlong)param_1 + 0x78) + 0.0;
    auVar9._8_4_ = SUB84(dVar10,0);
    auVar9._0_8_ = *(double *)((longlong)param_1 + 0x60) +
                   (double)(param_2->LWCTile).field0_0x0._s_0.X * dVar12;
    auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar9;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = (double)fVar1 * dVar12 + *(double *)((longlong)param_1 + 0x70);
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar6;
LAB_148e75d6d:
    pTVar18 = (TVector<double> *)(**(code **)(pAVar19->_padding_ + 0x360))(pAVar19,puVar20);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x38) = 1;
    uVar11 = *(undefined8 *)&pUVar15->field_0x1f8;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)&pUVar15->field_0x1f0;
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
    uVar11 = *(undefined8 *)&pUVar15->field_0x208;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)&pUVar15->field_0x200;
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar11;
    uVar11 = *(undefined8 *)&pUVar15->field_0x218;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)&pUVar15->field_0x210;
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar11;
    uVar11 = *(undefined8 *)&pUVar15->field_0x228;
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)&pUVar15->field_0x220;
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar11;
    uVar11 = *(undefined8 *)&pUVar15->field_0x238;
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)&pUVar15->field_0x230;
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar11;
    dVar12 = __real_c140000000000000;
    uVar11 = *(undefined8 *)&pUVar15->field_0x248;
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)&pUVar15->field_0x240;
    *(undefined8 *)((longlong)param_1 + 0x98) = uVar11;
    fVar1 = (param_2->LWCTile).field0_0x0._s_0.Z;
    dVar10 = *(double *)((longlong)param_1 + 0x68) +
             (double)(param_2->LWCTile).field0_0x0._s_0.Y * dVar12;
    dVar7 = *(double *)((longlong)param_1 + 0x78) + 0.0;
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = *(double *)((longlong)param_1 + 0x60) +
                   (double)(param_2->LWCTile).field0_0x0._s_0.X * dVar12;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar8;
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = (double)fVar1 * dVar12 + *(double *)((longlong)param_1 + 0x70);
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar5;
    pAVar19 = *(AActor **)&pUVar15->field_0xa8;
    if (pAVar19 != (AActor *)0x0) {
      puVar20 = local_80;
      goto LAB_148e75d6d;
    }
    pUVar16 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar2) ||
       (this_00 = pUVar15,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar16->_padding_)) {
      this_00 = (UPrimitiveComponent *)0x0;
    }
    if (this_00 == (UPrimitiveComponent *)0x0) goto LAB_148e75da3;
    pTVar18 = UPrimitiveComponent::GetPhysicsLinearVelocity(this_00,local_68,(FName)0x0);
  }
  dVar7 = (pTVar18->field0_0x0)._s_0.Z;
  *(ulonglong *)((longlong)param_1 + 0xa0) =
       CONCAT44((float)(pTVar18->field0_0x0)._s_0.Y,(float)(pTVar18->field0_0x0)._s_0.X);
  *(float *)((longlong)param_1 + 0xa8) = (float)dVar7;
LAB_148e75da3:
  if (this->bRequireCurrentFrameData != false) {
    local_res18[0] = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0xac),(FObjectPtr)local_res18);
  }
  return false;
}

// PostInitProperties @ 148e768d0

void __thiscall
UNiagaraDataInterfaceActorComponent::PostInitProperties(UNiagaraDataInterfaceActorComponent *this)

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

// ProvidePerInstanceDataForRenderThread @ 148e78de0

void __thiscall
UNiagaraDataInterfaceActorComponent::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceActorComponent *this,void *param_1,void *param_2,ulong64 *param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_2 + 0x38);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0xa8);
  return;
}

// ResolveComponent @ 148e7c2f0

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

UActorComponent * __thiscall
UNiagaraDataInterfaceActorComponent::ResolveComponent
          (UNiagaraDataInterfaceActorComponent *this,FNiagaraSystemInstance *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UActorComponent *pUVar7;
  FNiagaraWorldManager *this_00;
  UWorld *this_01;
  UClass *pUVar8;
  UObject *pUVar9;
  UActorComponent *local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  
  if (this->SourceMode == AttachParent) {
    pUVar7 = (UActorComponent *)FWeakObjectPtr::Get(&(param_1->AttachComponent).WeakPtr);
joined_r0x000148e7c44e:
    if (pUVar7 != (UActorComponent *)0x0) {
      return pUVar7;
    }
  }
  else if (this->SourceMode == LocalPlayer) {
    iVar1 = this->LocalPlayerIndex;
    this_00 = FNiagaraSystemInstance::GetWorldManager(param_1);
    this_01 = FNiagaraWorldManager::GetWorld(this_00);
    if (this_01 != (UWorld *)0x0) {
      UWorld::GetPlayerControllerIterator(this_01,&local_28);
      for (; (iVar6 = local_28.Index, pTVar3 = local_28.Container, -1 < local_28.Index &&
             (local_28.Index < (local_28.Container)->ArrayNum)); local_28.Index = local_28.Index + 1
          ) {
        uVar5 = 0;
        if (local_28.Index < (local_28.Container)->ArrayNum) {
          uVar5 = (uint)~local_28.Index >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pUVar7 = (UActorComponent *)(*pcVar2)();
          return pUVar7;
        }
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 8));
        if ((pUVar9 != (UObject *)0x0) && (*(longlong *)&pUVar9[0x16].field_0x8 != 0)) {
          pUVar8 = Z_Construct_UClass_ULocalPlayer_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)&pUVar9[0x16].field_0x8,pUVar8);
          if ((bVar4) &&
             ((*(longlong **)&pUVar9[0x16].field_0x8 != (longlong *)0x0 &&
              (iVar6 = (**(code **)(**(longlong **)&pUVar9[0x16].field_0x8 + 0x340))(),
              iVar1 == iVar6)))) {
            pUVar9 = *(UObject **)&pUVar9[0x13].field_0x18;
            pUVar7 = (UActorComponent *)0x0;
            if (pUVar9 != (UObject *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar9);
              }
              pUVar7 = *(UActorComponent **)(pUVar9 + 0xb);
            }
            goto joined_r0x000148e7c44e;
          }
        }
      }
    }
  }
  if ((*(int *)param_2 != -1) &&
     (FNiagaraParameterStore::GetUObject
                (*(FNiagaraParameterStore **)((longlong)param_2 + 8),(int)&local_res8),
     local_res8 != (UActorComponent *)0x0)) {
    pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(local_res8->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_res8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      return local_res8;
    }
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(local_res8->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_res8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      return (UActorComponent *)local_res8[2].PrimaryComponentTick._padding_;
    }
  }
  pUVar9 = TPersistentObjectPtr<FUniqueObjectGuid>::Get
                     ((TPersistentObjectPtr<FUniqueObjectGuid> *)&this->SourceActor);
  if (pUVar9 == (UObject *)0x0) {
    return (UActorComponent *)0x0;
  }
  pUVar7 = (UActorComponent *)
           TPersistentObjectPtr<FUniqueObjectGuid>::Get
                     ((TPersistentObjectPtr<FUniqueObjectGuid> *)&this->SourceActor);
  if (pUVar7 != (UActorComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_148e7c50b;
  }
  pUVar7 = (UActorComponent *)0x0;
LAB_148e7c50b:
  return (UActorComponent *)pUVar7[2].PrimaryComponentTick._padding_;
}

// SetShaderParameters @ 148e7d5a0

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
UNiagaraDataInterfaceActorComponent::SetShaderParameters
          (UNiagaraDataInterfaceActorComponent *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  float *pfVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  ulong64 uVar21;
  FShaderParametersMetadata *pFVar22;
  TMatrix<double> *pTVar23;
  ulong64 *puVar24;
  uint uVar25;
  FName *pFVar26;
  ulong64 *puVar27;
  TMatrix<double> local_a8;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar21 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar27 = (ulong64 *)0x0;
  puVar24 = puVar27;
  if (pFVar2[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar2[4]._padding_ + 4))
  {
    pFVar26 = (FName *)pFVar2[5]._padding_;
    if ((FName *)pFVar2[5]._padding_ == (FName *)0x0) {
      pFVar26 = &pFVar2[4].SourceDIName;
    }
    uVar25 = (&pFVar26->ComparisonIndex)
             [(uVar21 >> 0x20) * 0x17 + uVar21 &
              (ulonglong)(pFVar2[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar25 != 0xffffffff) {
      do {
        puVar24 = (ulong64 *)((longlong)(int)uVar25 * 0xa0 + pFVar2[1]._padding_);
        if (*puVar24 == uVar21) {
          if (puVar24 != (ulong64 *)0x0) goto LAB_148e7d68b;
          break;
        }
        uVar25 = (uint)puVar24[0x12];
        puVar24 = puVar27;
      } while (uVar25 != 0xffffffff);
    }
  }
  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar20) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148e7d68b:
  uVar25 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar22 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceActorComponent::FShaderParameters>::
            GetStructMetadata();
  param_1->ParametersOffset = pFVar22->Size + uVar25;
  puVar3 = param_1->BaseParameters;
  *(uint *)(puVar3 + uVar25) = (uint)((char)puVar24[2] != '\0');
  pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale
                      ((TTransform<double> *)(puVar24 + 4),&local_a8);
  dVar5 = pTVar23->M[1][2];
  dVar6 = pTVar23->M[1][3];
  dVar7 = pTVar23->M[1][0];
  dVar8 = pTVar23->M[1][1];
  dVar9 = pTVar23->M[2][2];
  dVar10 = pTVar23->M[2][3];
  dVar11 = pTVar23->M[2][0];
  dVar12 = pTVar23->M[2][1];
  dVar13 = pTVar23->M[3][0];
  dVar14 = pTVar23->M[3][1];
  dVar15 = pTVar23->M[3][2];
  dVar16 = pTVar23->M[3][3];
  dVar17 = pTVar23->M[0][1];
  dVar18 = pTVar23->M[0][2];
  dVar19 = pTVar23->M[0][3];
  pfVar1 = (float *)(puVar3 + (ulonglong)uVar25 + 0x10);
  *pfVar1 = (float)pTVar23->M[0][0];
  pfVar1[1] = (float)dVar17;
  pfVar1[2] = (float)dVar18;
  pfVar1[3] = (float)dVar19;
  pfVar1 = (float *)(puVar3 + (ulonglong)uVar25 + 0x20);
  *pfVar1 = (float)dVar7;
  pfVar1[1] = (float)dVar8;
  pfVar1[2] = (float)dVar5;
  pfVar1[3] = (float)dVar6;
  pfVar1 = (float *)(puVar3 + (ulonglong)uVar25 + 0x30);
  *pfVar1 = (float)dVar11;
  pfVar1[1] = (float)dVar12;
  pfVar1[2] = (float)dVar9;
  pfVar1[3] = (float)dVar10;
  pfVar1 = (float *)(puVar3 + (ulonglong)uVar25 + 0x40);
  *pfVar1 = (float)dVar13;
  pfVar1[1] = (float)dVar14;
  pfVar1[2] = (float)dVar15;
  pfVar1[3] = (float)dVar16;
  dVar5 = (double)puVar24[5];
  dVar6 = (double)puVar24[6];
  dVar7 = (double)puVar24[7];
  pfVar1 = (float *)(puVar3 + (ulonglong)uVar25 + 0x50);
  *pfVar1 = (float)(double)puVar24[4];
  pfVar1[1] = (float)dVar5;
  pfVar1[2] = (float)dVar6;
  pfVar1[3] = (float)dVar7;
  dVar5 = (double)puVar24[0xd];
  dVar6 = (double)puVar24[0xe];
  *(float *)(puVar3 + (ulonglong)uVar25 + 0x60) = (float)(double)puVar24[0xc];
  *(float *)(puVar3 + (ulonglong)uVar25 + 100) = (float)dVar5;
  *(float *)(puVar3 + (ulonglong)uVar25 + 0x68) = (float)dVar6;
  *(ulong64 *)(puVar3 + (ulonglong)uVar25 + 0x70) = puVar24[0x10];
  *(int *)(puVar3 + (ulonglong)uVar25 + 0x78) = (int)puVar24[0x11];
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceActorComponent @ 148e815a0

void __cdecl
UNiagaraDataInterfaceActorComponent::StaticRegisterNativesUNiagaraDataInterfaceActorComponent(void)

{
  return;
}

// VMGetMatrix @ 148e84150

void __thiscall
UNiagaraDataInterfaceActorComponent::VMGetMatrix
          (UNiagaraDataInterfaceActorComponent *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float *pfVar17;
  TMatrix<double> *pTVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  float *local_378;
  float *local_370;
  float *local_368;
  float *local_360;
  float *local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float *local_310;
  float *local_308;
  float *local_300;
  float *local_2f8;
  int local_2e8 [34];
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> local_260;
  FNDIOutputParam<UE::Math::TMatrix<float>_> local_248;
  TMatrix<double> local_148 [2];
  
  VectorVM::FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>(&local_260,param_1);
  iVar21 = 0;
  local_2e8[0] = 0;
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2e8);
  lVar20 = (longlong)local_2e8[0];
  iVar19 = local_2e8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TMatrix<float>_>::FNDIOutputParam<UE::Math::TMatrix<float>_>
            (&local_248,param_1);
  pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(local_260.Ptr)->CachedTransform,local_148);
  dVar1 = pTVar18->M[0][2];
  dVar2 = pTVar18->M[0][3];
  dVar3 = pTVar18->M[0][0];
  dVar4 = pTVar18->M[0][1];
  dVar5 = pTVar18->M[1][2];
  dVar6 = pTVar18->M[1][3];
  dVar7 = pTVar18->M[1][0];
  dVar8 = pTVar18->M[1][1];
  dVar9 = pTVar18->M[2][0];
  dVar10 = pTVar18->M[2][1];
  dVar11 = pTVar18->M[2][2];
  dVar12 = pTVar18->M[2][3];
  dVar13 = pTVar18->M[3][2];
  dVar14 = pTVar18->M[3][3];
  dVar15 = pTVar18->M[3][0];
  dVar16 = pTVar18->M[3][1];
  if (0 < param_1->NumInstances) {
    local_2f8 = local_248.Out15.Register;
    local_300 = local_248.Out14.Register;
    local_308 = local_248.Out13.Register;
    local_310 = local_248.Out12.Register;
    local_318 = local_248.Out11.Register;
    local_320 = local_248.Out10.Register;
    local_328 = local_248.Out09.Register;
    local_330 = local_248.Out08.Register;
    local_338 = local_248.Out07.Register;
    local_340 = local_248.Out06.Register;
    local_348 = local_248.Out05.Register;
    local_350 = local_248.Out04.Register;
    local_358 = local_248.Out03.Register;
    local_360 = local_248.Out02.Register;
    local_368 = local_248.Out01.Register;
    local_370 = local_248.Out00.Register;
    local_378 = pfVar17 + iVar19;
    do {
      *local_378 = (float)-(uint)((local_260.Ptr)->bCachedValid != false);
      *local_370 = (float)dVar3;
      local_370 = local_370 + local_248.Out00.AdvanceOffset;
      *local_368 = (float)dVar4;
      local_368 = local_368 + local_248.Out01.AdvanceOffset;
      *local_360 = (float)dVar1;
      local_360 = local_360 + local_248.Out02.AdvanceOffset;
      *local_358 = (float)dVar2;
      local_358 = local_358 + local_248.Out03.AdvanceOffset;
      *local_350 = (float)dVar7;
      local_350 = local_350 + local_248.Out04.AdvanceOffset;
      *local_348 = (float)dVar8;
      local_348 = local_348 + local_248.Out05.AdvanceOffset;
      *local_340 = (float)dVar5;
      local_340 = local_340 + local_248.Out06.AdvanceOffset;
      *local_338 = (float)dVar6;
      *local_330 = (float)dVar9;
      *local_328 = (float)dVar10;
      *local_320 = (float)dVar11;
      *local_318 = (float)dVar12;
      *local_310 = (float)dVar15;
      *local_308 = (float)dVar16;
      *local_300 = (float)dVar13;
      *local_2f8 = (float)dVar14;
      iVar21 = iVar21 + 1;
      local_378 = local_378 + lVar20;
      local_338 = local_338 + local_248.Out07.AdvanceOffset;
      local_330 = local_330 + local_248.Out08.AdvanceOffset;
      local_328 = local_328 + local_248.Out09.AdvanceOffset;
      local_320 = local_320 + local_248.Out10.AdvanceOffset;
      local_318 = local_318 + local_248.Out11.AdvanceOffset;
      local_310 = local_310 + local_248.Out12.AdvanceOffset;
      local_308 = local_308 + local_248.Out13.AdvanceOffset;
      local_300 = local_300 + local_248.Out14.AdvanceOffset;
      local_2f8 = local_2f8 + local_248.Out15.AdvanceOffset;
    } while (iVar21 < param_1->NumInstances);
  }
  return;
}

// VMGetPhysicsVelocity @ 148e84640

void __thiscall
UNiagaraDataInterfaceActorComponent::VMGetPhysicsVelocity
          (UNiagaraDataInterfaceActorComponent *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int local_60 [2];
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> local_58;
  FNDIOutputParam<UE::Math::TVector<float>_> local_48;
  
  VectorVM::FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>(&local_58,param_1);
  iVar6 = 0;
  local_60[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  lVar5 = (longlong)local_60[0];
  iVar4 = local_60[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_48,param_1);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + iVar4;
    do {
      *pfVar3 = (float)-(uint)((local_58.Ptr)->bCachedValid != false);
      iVar6 = iVar6 + 1;
      uVar1 = *(undefined8 *)&((local_58.Ptr)->CachedVelocity).field0_0x0;
      fVar2 = ((local_58.Ptr)->CachedVelocity).field0_0x0._s_0.Z;
      *local_48.X.Register = (float)uVar1;
      *local_48.Y.Register = (float)((ulonglong)uVar1 >> 0x20);
      *local_48.Z.Register = fVar2;
      local_48.Z.Register = local_48.Z.Register + local_48.Z.AdvanceOffset;
      pfVar3 = pfVar3 + lVar5;
      local_48.Y.Register = local_48.Y.Register + local_48.Y.AdvanceOffset;
      local_48.X.Register = local_48.X.Register + local_48.X.AdvanceOffset;
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMGetTransform @ 148e84de0

void __thiscall
UNiagaraDataInterfaceActorComponent::VMGetTransform
          (UNiagaraDataInterfaceActorComponent *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  float *local_120;
  float *local_118;
  float *local_110;
  int local_100 [2];
  float *local_f8;
  int local_f0 [2];
  float *local_e8;
  int local_e0 [4];
  int local_d0 [4];
  int local_c0 [4];
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> local_b0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_a0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_70;
  
  VectorVM::FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>(&local_b0,param_1);
  iVar11 = 0;
  local_c0[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  lVar10 = (longlong)local_c0[0];
  iVar7 = local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_a0,param_1);
  local_100[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar8 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0[0] = 0;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_e0[0] = 0;
  local_f8 = local_f8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  local_d0[0] = 0;
  local_e8 = local_e8 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar12 = (longlong)local_d0[0];
  iVar9 = local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_70,param_1);
  if (0 < param_1->NumInstances) {
    local_148 = local_a0.Z.Register;
    local_res20 = local_a0.Y.Register;
    local_res18 = local_a0.X.Register;
    local_130 = local_e8;
    local_138 = local_f8;
    local_110 = local_70.Z.Register;
    local_118 = local_70.Y.Register;
    local_120 = local_70.X.Register;
    local_res10 = pfVar4 + iVar7;
    local_140 = pfVar5 + iVar8;
    local_128 = pfVar6 + iVar9;
    do {
      *local_res10 = (float)-(uint)((local_b0.Ptr)->bCachedValid != false);
      dVar1 = ((local_b0.Ptr)->CachedTransform).Translation.XY.m128d_f64[1];
      dVar2 = ((local_b0.Ptr)->CachedTransform).Translation.ZW.m128d_f64[0];
      *local_res18 = (float)((local_b0.Ptr)->CachedTransform).Translation.XY.m128d_f64[0];
      *local_res20 = (float)dVar1;
      *local_148 = (float)dVar2;
      dVar1 = ((local_b0.Ptr)->CachedTransform).Rotation.XY.m128d_f64[1];
      dVar2 = ((local_b0.Ptr)->CachedTransform).Rotation.ZW.m128d_f64[0];
      dVar3 = ((local_b0.Ptr)->CachedTransform).Rotation.ZW.m128d_f64[1];
      *local_140 = (float)((local_b0.Ptr)->CachedTransform).Rotation.XY.m128d_f64[0];
      *local_138 = (float)dVar1;
      *local_130 = (float)dVar2;
      *local_128 = (float)dVar3;
      dVar1 = ((local_b0.Ptr)->CachedTransform).Scale3D.XY.m128d_f64[1];
      dVar2 = ((local_b0.Ptr)->CachedTransform).Scale3D.ZW.m128d_f64[0];
      *local_120 = (float)((local_b0.Ptr)->CachedTransform).Scale3D.XY.m128d_f64[0];
      *local_118 = (float)dVar1;
      *local_110 = (float)dVar2;
      iVar11 = iVar11 + 1;
      local_res10 = local_res10 + lVar10;
      local_res18 = local_res18 + local_a0.X.AdvanceOffset;
      local_res20 = local_res20 + local_a0.Y.AdvanceOffset;
      local_148 = local_148 + local_a0.Z.AdvanceOffset;
      local_140 = local_140 + local_100[0];
      local_138 = local_138 + local_f0[0];
      local_130 = local_130 + local_e0[0];
      local_128 = local_128 + lVar12;
      local_120 = local_120 + local_70.X.AdvanceOffset;
      local_118 = local_118 + local_70.Y.AdvanceOffset;
      local_110 = local_110 + local_70.Z.AdvanceOffset;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

