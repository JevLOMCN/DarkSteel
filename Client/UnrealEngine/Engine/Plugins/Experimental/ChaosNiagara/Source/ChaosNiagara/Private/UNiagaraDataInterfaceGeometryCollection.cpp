// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 37

// StaticClass @ 14e970f50

UClass * __cdecl UNiagaraDataInterfaceGeometryCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosNiagara",L"NiagaraDataInterfaceGeometryCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGeometryCollection>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGeometryCollection>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.InnerSingleton;
}

// UNiagaraDataInterfaceGeometryCollection @ 14e983bf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataInterfaceGeometryCollection * __thiscall
UNiagaraDataInterfaceGeometryCollection::UNiagaraDataInterfaceGeometryCollection
          (UNiagaraDataInterfaceGeometryCollection *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = Default;
  this_00 = &(this->GeometryCollectionActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGeometryCollection__6B_;
  (this->DefaultGeometryCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SourceComponent).field0_0x0.DebugPtr = (UGeometryCollectionComponent *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->GeometryCollectionUserParameter)
  ;
  this->bIncludeIntermediateBones = false;
  return this;
}

// UNiagaraDataInterfaceGeometryCollection @ 14e983c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataInterfaceGeometryCollection * __thiscall
UNiagaraDataInterfaceGeometryCollection::UNiagaraDataInterfaceGeometryCollection
          (UNiagaraDataInterfaceGeometryCollection *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->SourceMode = Default;
  this_00 = &(this->GeometryCollectionActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGeometryCollection__6B_;
  (this->DefaultGeometryCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SourceComponent).field0_0x0.DebugPtr = (UGeometryCollectionComponent *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->GeometryCollectionUserParameter)
  ;
  this->bIncludeIntermediateBones = false;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNDIGeometryCollectionProxy__6B_;
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

// ~UNiagaraDataInterfaceGeometryCollection @ 14e984660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::~UNiagaraDataInterfaceGeometryCollection
          (UNiagaraDataInterfaceGeometryCollection *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGeometryCollection__6B_;
  pFVar1 = (this->GeometryCollectionUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 14e987690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulong64 uVar1;
  longlong lVar2;
  FNDIGeometryCollectionArrays *pFVar3;
  FScriptContainerElement *pFVar4;
  FNDIGeometryCollectionData *pFVar5;
  
  uVar1 = *(ulong64 *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  pFVar5 = TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
                   *)(lVar2 + 0x10),uVar1);
  if ((pFVar5 != (FNDIGeometryCollectionData *)0x0) &&
     (pFVar5->AssetArrays != (FNDIGeometryCollectionArrays *)0x0)) {
    TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x10),uVar1);
    pFVar3 = pFVar5->AssetArrays;
    if (pFVar3 != (FNDIGeometryCollectionArrays *)0x0) {
      pFVar4 = (pFVar3->ElementIndexToTransformBufferMapping).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->ComponentRestTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->BoundsBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->PrevWorldInverseTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->WorldInverseTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->PrevWorldTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->WorldTransformBuffer).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar3,0x78);
    }
  }
  return;
}

// BuildShaderParameters @ 14e98a8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::BuildShaderParameters
          (UNiagaraDataInterfaceGeometryCollection *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceGeometryCollection::FShaderParameters>
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x80;
  return;
}

// CalculateTickGroup @ 14e98ab20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ETickingGroup __thiscall
UNiagaraDataInterfaceGeometryCollection::CalculateTickGroup
          (UNiagaraDataInterfaceGeometryCollection *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    return *(ETickingGroup *)param_1;
  }
  return TG_PrePhysics;
}

// CanExecuteOnTarget @ 14e98ac00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::CanExecuteOnTarget
          (UNiagaraDataInterfaceGeometryCollection *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 14e98cf20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::CopyToInternal
          (UNiagaraDataInterfaceGeometryCollection *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UGeometryCollection *pUVar2;
  UGeometryCollectionComponent *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  bVar4 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar4) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      *(ENDIGeometryCollection_SourceMode *)&param_1[1]._padding_ = this->SourceMode;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->DefaultGeometryCollection).field0_0x0.DebugPtr,
         pUVar2 != (UGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_1[1]._padding_ = (longlong)(this->DefaultGeometryCollection).field0_0x0;
      param_1[1]._padding_ = *(longlong *)&(this->GeometryCollectionActor).SoftObjectPtr;
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)&param_1[1]._padding_,
                 (FSoftObjectPath *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->SourceComponent).field0_0x0.DebugPtr,
         pUVar3 != (UGeometryCollectionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      *(TObjectPtr<UGeometryCollectionComponent>_u_0 *)(param_1 + 2) =
           (this->SourceComponent).field0_0x0;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[2]._padding_,
                 &(this->GeometryCollectionUserParameter).Parameter);
      *(bool *)&param_1[2].Proxy.Ptr = this->bIncludeIntermediateBones;
      return true;
    }
    pFVar6 = GetTypeName<UNiagaraDataInterfaceGeometryCollection>(&local_28);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar6 = GetTypeName<UNiagaraDataInterfaceGeometryCollection>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// DestroyPerInstanceData @ 14e991ac0

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
UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData
          (UNiagaraDataInterfaceGeometryCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *pFVar4;
  FCommandList *pFVar5;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [32];
  code *local_118 [2];
  undefined **local_108;
  longlong lStack_100;
  ulong64 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  longlong lStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (*(longlong *)((longlong)param_1 + 0x88) != 0) {
    local_c0 = (undefined ***)0x0;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIGeometryCollectionData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIGeometryCollectionData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    lStack_d0 = *(longlong *)((longlong)param_1 + 0x88);
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIGeometryCollectionData::Release_::__l5::TSTR_DeleteResource107>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_b8._0_8_ = local_e8[0];
      local_90 = local_c0;
      local_a8 = local_d8;
      lStack_a0 = lStack_d0;
      local_98 = local_c8;
      local_e8[0] = (code *)0x0;
      local_88 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIGeometryCollectionData::Release'::__l5::TSTR_DeleteResource107>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_b8,pFVar6);
      uVar8 = (ulonglong)local_88;
      if (2 < uVar8) {
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
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_b8 + 0x10);
          if (local_90 != (undefined ***)0x0) {
            pppuVar7 = local_90;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_b8);
      }
    }
    if (local_e8[0] != (code *)0x0) {
      pppuVar7 = &local_d8;
      if (local_c0 != (undefined ***)0x0) {
        pppuVar7 = local_c0;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    *(undefined8 *)((longlong)param_1 + 0x88) = 0;
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
  local_f0 = (undefined ***)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  local_f8 = param_2->ID;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  lStack_100 = lVar1;
  pFVar4 = FRenderCommandList::GetInstanceTLS();
  if (pFVar4 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData459>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
    local_78._0_8_ = local_118[0];
    local_50 = local_f0;
    local_68 = local_108;
    lStack_60 = lStack_100;
    local_58 = local_f8;
    local_118[0] = (code *)0x0;
    local_48 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceGeometryCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData459>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_78,pFVar6);
    uVar8 = (ulonglong)local_48;
    if (2 < uVar8) {
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
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar7 = local_50;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_78);
    }
  }
  if (local_118[0] != (code *)0x0) {
    pppuVar7 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar7 = local_f0;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// Equals @ 14e9929b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::Equals
          (UNiagaraDataInterfaceGeometryCollection *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGeometryCollection_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGeometryCollection_const_>(&local_28);
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
    if (((ENDIGeometryCollection_SourceMode)param_1[1]._padding_ == this->SourceMode) &&
       ((UGeometryCollection *)param_1[1]._padding_ ==
        (this->DefaultGeometryCollection).field0_0x0.DebugPtr)) {
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&param_1[1]._padding_,
                         (FSoftObjectPath *)&(this->GeometryCollectionActor).SoftObjectPtr.field_0x8
                        );
      if (((bVar2) &&
          ((((UGeometryCollectionComponent *)param_1[2]._padding_ ==
             (this->SourceComponent).field0_0x0.DebugPtr &&
            ((this->GeometryCollectionUserParameter).Parameter._padding_ == param_1[2]._padding_))
           && ((int)(this->GeometryCollectionUserParameter).Parameter._padding_ ==
               (int)param_1[2]._padding_)))) &&
         ((bool)*(char *)&param_1[2].Proxy.Ptr == this->bIncludeIntermediateBones)) {
        return true;
      }
    }
  }
  return false;
}

// GetActorTransform @ 14e999840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::GetActorTransform
          (UNiagaraDataInterfaceGeometryCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar26;
  int local_160 [2];
  float *local_158;
  int local_150 [4];
  int local_140 [12];
  FUserPtrHandler<FNDIGeometryCollectionData> local_110;
  FNDIOutputParam<UE::Math::TVector<float>_> local_f8;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_c8 [2];
  
  VectorVM::FUserPtrHandler<FNDIGeometryCollectionData>::FUserPtrHandler<FNDIGeometryCollectionData>
            (&local_110,param_1);
  iVar14 = 0;
  local_160[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_160);
  iVar12 = local_160[0] * param_1->PerInstanceFnInstanceIdx;
  local_150[0] = 0;
  local_158 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_150);
  local_140[0] = 0;
  local_158 = local_158 + local_150[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  lVar15 = (longlong)local_140[0];
  iVar13 = local_140[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (local_c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_f8,param_1);
  dVar3 = ((local_110.Ptr)->RootTransform).Rotation.XY.m128d_f64[0];
  dVar4 = ((local_110.Ptr)->RootTransform).Rotation.XY.m128d_f64[1];
  dVar5 = ((local_110.Ptr)->RootTransform).Translation.XY.m128d_f64[0];
  dVar6 = ((local_110.Ptr)->RootTransform).Translation.XY.m128d_f64[1];
  dVar7 = ((local_110.Ptr)->RootTransform).Translation.ZW.m128d_f64[0];
  dVar8 = ((local_110.Ptr)->RootTransform).Rotation.ZW.m128d_f64[0];
  dVar9 = ((local_110.Ptr)->RootTransform).Rotation.ZW.m128d_f64[1];
  dVar18 = dVar8 * dVar8 + dVar3 * dVar3;
  dVar20 = dVar9 * dVar9 + dVar4 * dVar4;
  dVar1 = dVar20 + dVar18;
  dVar18 = dVar18 + dVar20;
  auVar22._8_4_ = SUB84(dVar18,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar22 = sqrtpd(in_XMM4,auVar22);
  uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= dVar18);
  uVar25 = (uint)(uVar16 >> 0x20);
  uVar26 = (uint)(uVar17 >> 0x20);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
  auVar24._0_8_ = uVar16 & (ulonglong)(auVar23._0_8_ * dVar3);
  uVar2 = uVar17 & (ulonglong)(auVar23._8_8_ * dVar4);
  auVar24._8_4_ = (undefined4)uVar2;
  auVar24._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar21._0_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar21._4_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar21._8_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar21._12_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar1 = ((local_110.Ptr)->RootTransform).Scale3D.XY.m128d_f64[0];
  dVar18 = ((local_110.Ptr)->RootTransform).Scale3D.XY.m128d_f64[1];
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
  auVar19._0_8_ = (ulonglong)(auVar22._0_8_ * dVar8) & uVar16;
  uVar17 = (ulonglong)(auVar22._8_8_ * dVar9) & uVar17;
  auVar19._8_4_ = (undefined4)uVar17;
  auVar19._12_4_ = (undefined4)(uVar17 >> 0x20);
  dVar3 = ((local_110.Ptr)->RootTransform).Scale3D.ZW.m128d_f64[0];
  if (0 < param_1->NumInstances) {
    pfVar10 = pfVar10 + iVar12;
    pfVar11 = pfVar11 + iVar13;
    do {
      iVar14 = iVar14 + 1;
      *pfVar10 = (float)dVar5;
      *local_158 = (float)dVar6;
      *pfVar11 = (float)dVar7;
      *local_c8[0].X.Register = (float)SUB168(auVar24 | auVar23,0);
      *local_c8[0].Y.Register = (float)SUB168(auVar24 | auVar23,8);
      *local_c8[0].Z.Register = (float)SUB168(auVar21 | auVar19,0);
      *local_c8[0].W.Register = (float)SUB168(auVar21 | auVar19,8);
      *local_f8.X.Register = (float)dVar1;
      *local_f8.Y.Register = (float)dVar18;
      *local_f8.Z.Register = (float)dVar3;
      local_158 = local_158 + local_150[0];
      pfVar10 = pfVar10 + local_160[0];
      local_f8.Y.Register = local_f8.Y.Register + local_f8.Y.AdvanceOffset;
      local_f8.Z.Register = local_f8.Z.Register + local_f8.Z.AdvanceOffset;
      local_c8[0].W.Register = local_c8[0].W.Register + local_c8[0].W.AdvanceOffset;
      local_c8[0].Z.Register = local_c8[0].Z.Register + local_c8[0].Z.AdvanceOffset;
      local_c8[0].Y.Register = local_c8[0].Y.Register + local_c8[0].Y.AdvanceOffset;
      local_c8[0].X.Register = local_c8[0].X.Register + local_c8[0].X.AdvanceOffset;
      local_f8.X.Register = local_f8.X.Register + local_f8.X.AdvanceOffset;
      pfVar11 = pfVar11 + lVar15;
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// GetElementBounds @ 14e99c670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::GetElementBounds
          (UNiagaraDataInterfaceGeometryCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FNDIGeometryCollectionArrays *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FNDIOutputParam<UE::Math::TVector<float>_> local_108;
  FNDIOutputParam<UE::Math::TVector<float>_> local_d8;
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  FUserPtrHandler<FNDIGeometryCollectionData> local_90;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  
  VectorVM::FUserPtrHandler<FNDIGeometryCollectionData>::FUserPtrHandler<FNDIGeometryCollectionData>
            (&local_90,param_1);
  local_98[0] = 0;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_a8 = local_a8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = local_a8;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_108,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_d8,param_1);
  iVar13 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar2 = *local_a8;
      local_a8 = local_a8 + local_98[0];
      if (((int)fVar2 < 0) ||
         (pFVar3 = (local_90.Ptr)->AssetArrays,
         (pFVar3->ElementIndexToTransformBufferMapping).ArrayNum <= (int)fVar2)) {
LAB_14e99c90f:
        uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        *local_108.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_108.X.Register = local_108.X.Register + local_108.X.AdvanceOffset;
        *local_108.Y.Register = (float)uVar8;
        local_108.Y.Register = local_108.Y.Register + local_108.Y.AdvanceOffset;
        *local_108.Z.Register = (float)uVar9;
        uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        local_78 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
        local_108.Z.Register = local_108.Z.Register + local_108.Z.AdvanceOffset;
        *local_d8.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_d8.X.Register = local_d8.X.Register + local_d8.X.AdvanceOffset;
        *local_d8.Y.Register = (float)uVar8;
        local_d8.Y.Register = local_d8.Y.Register + local_d8.Y.AdvanceOffset;
        *local_d8.Z.Register = (float)uVar9;
      }
      else {
        uVar11 = 0;
        if ((int)fVar2 < (pFVar3->ElementIndexToTransformBufferMapping).ArrayNum) {
          uVar11 = ~(uint)fVar2 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = *(uint *)((pFVar3->ElementIndexToTransformBufferMapping).AllocatorInstance.Data +
                          (longlong)(int)fVar2 * 4);
        if (((int)uVar11 < 0) ||
           (pFVar3 = (local_90.Ptr)->AssetArrays,
           (pFVar3->ComponentRestTransformBuffer).ArrayNum <= (int)uVar11)) goto LAB_14e99c90f;
        uVar12 = 0;
        if ((int)uVar11 < (pFVar3->ComponentRestTransformBuffer).ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar3->ComponentRestTransformBuffer).AllocatorInstance.Data;
        pFVar1 = pFVar4 + (longlong)(int)uVar11 * 0x60 + 0x20;
        local_68 = *(double *)pFVar1;
        dStack_60 = *(double *)(pFVar1 + 8);
        local_58 = *(double *)(pFVar4 + (longlong)(int)uVar11 * 0x60 + 0x30);
        pFVar3 = (local_90.Ptr)->AssetArrays;
        fVar14 = (float)local_68;
        uVar11 = 0;
        if ((int)fVar2 < (pFVar3->BoundsBuffer).ArrayNum) {
          uVar11 = ~(uint)fVar2 >> 0x1f;
        }
        fVar15 = (float)dStack_60;
        fVar16 = (float)local_58;
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (pFVar3->BoundsBuffer).AllocatorInstance.Data + (longlong)(int)fVar2 * 0x10;
        fVar2 = *(float *)pFVar1;
        fVar6 = *(float *)(pFVar1 + 4);
        fVar7 = *(float *)(pFVar1 + 8);
        *local_108.X.Register = fVar14;
        local_108.X.Register = local_108.X.Register + local_108.X.AdvanceOffset;
        *local_108.Y.Register = fVar15;
        local_108.Y.Register = local_108.Y.Register + local_108.Y.AdvanceOffset;
        *local_108.Z.Register = fVar16;
        local_108.Z.Register = local_108.Z.Register + local_108.Z.AdvanceOffset;
        *local_d8.X.Register = fVar2;
        local_d8.X.Register = local_d8.X.Register + local_d8.X.AdvanceOffset;
        *local_d8.Y.Register = fVar6;
        local_d8.Y.Register = local_d8.Y.Register + local_d8.Y.AdvanceOffset;
        *local_d8.Z.Register = fVar7;
      }
      iVar13 = iVar13 + 1;
      local_d8.Z.Register = local_d8.Z.Register + local_d8.Z.AdvanceOffset;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// GetElementTransformCS @ 14e99ca30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::GetElementTransformCS
          (UNiagaraDataInterfaceGeometryCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  FNDIGeometryCollectionArrays *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  FNDIOutputParam<UE::Math::TVector<float>_> local_158;
  FNDIOutputParam<UE::Math::TVector<float>_> local_128;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_f8;
  float *local_b8;
  float *local_b0;
  int local_a8 [2];
  FUserPtrHandler<FNDIGeometryCollectionData> local_a0;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  VectorVM::FUserPtrHandler<FNDIGeometryCollectionData>::FUserPtrHandler<FNDIGeometryCollectionData>
            (&local_a0,param_1);
  local_a8[0] = 0;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  local_b8 = local_b8 + local_a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_b0 = local_b8;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_158,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_f8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_128,param_1);
  dVar11 = __real_3e45798ee0000000;
  iVar18 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *local_b8;
      local_b8 = local_b8 + local_a8[0];
      if (((int)fVar1 < 0) ||
         (pFVar2 = (local_a0.Ptr)->AssetArrays,
         (pFVar2->ElementIndexToTransformBufferMapping).ArrayNum <= (int)fVar1)) {
LAB_14e99cda0:
        uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        *local_158.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        local_158.X.Register = local_158.X.Register + local_158.X.AdvanceOffset;
        *local_158.Y.Register = (float)uVar12;
        local_158.Y.Register = local_158.Y.Register + local_158.Y.AdvanceOffset;
        *local_158.Z.Register = (float)uVar13;
        fVar15 = UE::Math::TQuat<float>::Identity.W;
        fVar14 = UE::Math::TQuat<float>::Identity.Z;
        fVar1 = UE::Math::TQuat<float>::Identity.Y;
        local_158.Z.Register = local_158.Z.Register + local_158.Z.AdvanceOffset;
        in_XMM3 = ZEXT416((uint)UE::Math::TQuat<float>::Identity.W);
        *local_f8.X.Register = UE::Math::TQuat<float>::Identity.X;
        local_f8.X.Register = local_f8.X.Register + local_f8.X.AdvanceOffset;
        *local_f8.Y.Register = fVar1;
        local_f8.Y.Register = local_f8.Y.Register + local_f8.Y.AdvanceOffset;
        *local_f8.Z.Register = fVar14;
        local_f8.Z.Register = local_f8.Z.Register + local_f8.Z.AdvanceOffset;
        *local_f8.W.Register = fVar15;
        uVar13 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
        uVar12 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
        local_88 = CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                            UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
        local_f8.W.Register = local_f8.W.Register + local_f8.W.AdvanceOffset;
        *local_128.X.Register = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
        local_128.X.Register = local_128.X.Register + local_128.X.AdvanceOffset;
        *local_128.Y.Register = (float)uVar12;
        pfVar17 = local_128.Y.Register + local_128.Y.AdvanceOffset;
        *local_128.Z.Register = (float)uVar13;
      }
      else {
        uVar29 = 0;
        if ((int)fVar1 < (pFVar2->ElementIndexToTransformBufferMapping).ArrayNum) {
          uVar29 = ~(uint)fVar1 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar29 = *(uint *)((pFVar2->ElementIndexToTransformBufferMapping).AllocatorInstance.Data +
                          (longlong)(int)fVar1 * 4);
        if (((int)uVar29 < 0) ||
           (pFVar2 = (local_a0.Ptr)->AssetArrays,
           (pFVar2->ComponentRestTransformBuffer).ArrayNum <= (int)uVar29)) goto LAB_14e99cda0;
        uVar30 = 0;
        if ((int)uVar29 < (pFVar2->ComponentRestTransformBuffer).ArrayNum) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pFVar2->ComponentRestTransformBuffer).AllocatorInstance.Data;
        lVar19 = (longlong)(int)uVar29 * 0x60;
        local_78 = *(double *)(pFVar3 + lVar19 + 0x20);
        dStack_70 = *(double *)(pFVar3 + lVar19 + 0x20 + 8);
        local_68 = *(double *)(pFVar3 + lVar19 + 0x30);
        *local_158.X.Register = (float)local_78;
        *local_158.Y.Register = (float)dStack_70;
        *local_158.Z.Register = (float)local_68;
        dVar7 = *(double *)(pFVar3 + lVar19);
        dVar8 = *(double *)(pFVar3 + lVar19 + 8);
        dVar9 = *(double *)(pFVar3 + lVar19 + 0x10);
        dVar10 = *(double *)(pFVar3 + lVar19 + 0x10 + 8);
        dVar22 = dVar9 * dVar9 + dVar7 * dVar7;
        dVar25 = dVar10 * dVar10 + dVar8 * dVar8;
        dVar5 = dVar25 + dVar22;
        dVar22 = dVar22 + dVar25;
        auVar27._8_4_ = SUB84(dVar22,0);
        auVar27._0_8_ = dVar5;
        auVar27._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        in_XMM3 = sqrtpd(in_XMM3,auVar27);
        uVar20 = -(ulonglong)(dVar11 <= dVar5);
        uVar21 = -(ulonglong)(dVar11 <= dVar22);
        uVar29 = (uint)(uVar20 >> 0x20);
        uVar30 = (uint)(uVar21 >> 0x20);
        auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM3);
        auVar28._0_8_ = uVar20 & (ulonglong)(auVar27._0_8_ * dVar7);
        uVar6 = uVar21 & (ulonglong)(auVar27._8_8_ * dVar8);
        auVar28._8_4_ = (undefined4)uVar6;
        auVar28._12_4_ = (undefined4)(uVar6 >> 0x20);
        auVar23._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar23._4_4_ =
             ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar23._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar23._12_4_ =
             ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM3);
        auVar26._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar26._4_4_ =
             ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar26._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar26._12_4_ =
             ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar24._0_8_ = (ulonglong)(auVar27._0_8_ * dVar9) & uVar20;
        uVar21 = (ulonglong)(auVar27._8_8_ * dVar10) & uVar21;
        auVar24._8_4_ = (undefined4)uVar21;
        auVar24._12_4_ = (undefined4)(uVar21 >> 0x20);
        *local_f8.X.Register = (float)SUB168(auVar28 | auVar23,0);
        *local_f8.Y.Register = (float)SUB168(auVar28 | auVar23,8);
        *local_f8.Z.Register = (float)SUB168(auVar26 | auVar24,0);
        *local_f8.W.Register = (float)SUB168(auVar26 | auVar24,8);
        local_60 = *(double *)(pFVar3 + lVar19 + 0x40);
        dStack_58 = *(double *)(pFVar3 + lVar19 + 0x40 + 8);
        local_50 = *(double *)(pFVar3 + lVar19 + 0x50);
        *local_128.X.Register = (float)local_60;
        pfVar17 = local_128.Y.Register + local_128.Y.AdvanceOffset;
        *local_128.Y.Register = (float)dStack_58;
        *local_128.Z.Register = (float)local_50;
        local_158.X.Register = local_158.X.Register + local_158.X.AdvanceOffset;
        local_158.Y.Register = local_158.Y.Register + local_158.Y.AdvanceOffset;
        local_158.Z.Register = local_158.Z.Register + local_158.Z.AdvanceOffset;
        local_128.X.Register = local_128.X.Register + local_128.X.AdvanceOffset;
        local_f8.X.Register = local_f8.X.Register + local_f8.X.AdvanceOffset;
        local_f8.Y.Register = local_f8.Y.Register + local_f8.Y.AdvanceOffset;
        local_f8.Z.Register = local_f8.Z.Register + local_f8.Z.AdvanceOffset;
        local_f8.W.Register = local_f8.W.Register + local_f8.W.AdvanceOffset;
      }
      iVar18 = iVar18 + 1;
      local_128.Z.Register = local_128.Z.Register + local_128.Z.AdvanceOffset;
      local_128.Y.Register = pfVar17;
    } while (iVar18 < param_1->NumInstances);
  }
  return;
}

// GetNumGeometryElements @ 14e99d2d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::GetNumGeometryElements
          (UNiagaraDataInterfaceGeometryCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIGeometryCollectionData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIGeometryCollectionData>::FUserPtrHandler<FNDIGeometryCollectionData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->AssetArrays->NumPieces;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 14e99da60

UClass * __cdecl UNiagaraDataInterfaceGeometryCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosNiagara",L"NiagaraDataInterfaceGeometryCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGeometryCollection>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGeometryCollection>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.InnerSingleton;
}

// GetVMExternalFunction @ 14e99ec70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::GetVMExternalFunction
          (UNiagaraDataInterfaceGeometryCollection *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UNiagaraDataInterfaceGeometryCollection *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIGeometryCollectionLocal::GetNumElementsName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceGeometryCollection____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetNumGeometryElements;
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
  else if (FVar1 == NDIGeometryCollectionLocal::GetElementBoundsName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceGeometryCollection____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetElementBounds;
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
      bVar6 = local_40.bDestroyed == false;
      local_50.DelegateSize = 0;
      goto LAB_14e99f09e;
    }
  }
  else {
    if (FVar1 != NDIGeometryCollectionLocal::GetTransformComponentName) {
      if (FVar1 == NDIGeometryCollectionLocal::SetTransformComponentName) {
        pcVar5 = SetElementTransformCS;
LAB_14e99efed:
        pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceGeometryCollection>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_58,this,(pmf_aef72fbf)pcVar5);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
      }
      else {
        if (FVar1 == NDIGeometryCollectionLocal::SetTransformWorldName) {
          pcVar5 = SetElementTransformWS;
          goto LAB_14e99efed;
        }
        if (FVar1 != NDIGeometryCollectionLocal::GetComponentWSTransformName) {
          return;
        }
        pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceGeometryCollection>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_58,this,(pmf_aef72fbf)0x14e999840);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
      }
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      bVar6 = local_40.bDestroyed == false;
      goto LAB_14e99f09e;
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceGeometryCollection____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceGeometryCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetElementTransformCS;
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
      bVar6 = local_40.bDestroyed == false;
      local_50.DelegateSize = 0;
      goto LAB_14e99f09e;
    }
  }
  bVar6 = local_40.bDestroyed == false;
LAB_14e99f09e:
  if (bVar6) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// HasPostSimulateTick @ 14e9a0940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::HasPostSimulateTick
          (UNiagaraDataInterfaceGeometryCollection *this)

{
  return true;
}

// HasPreSimulateTick @ 14e9a0970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::HasPreSimulateTick
          (UNiagaraDataInterfaceGeometryCollection *this)

{
  return true;
}

// HasTickGroupPrereqs @ 14e9a0c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::HasTickGroupPrereqs
          (UNiagaraDataInterfaceGeometryCollection *this)

{
  return true;
}

// InitPerInstanceData @ 14e9a1d30

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
UNiagaraDataInterfaceGeometryCollection::InitPerInstanceData
          (UNiagaraDataInterfaceGeometryCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  memset(param_1,0,0xb0);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  ResolveGeometryCollection(this,param_2,param_1);
  FNDIGeometryCollectionData::Init(param_1,this,param_2);
  return true;
}

// PerInstanceDataSize @ 14e9a2550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UNiagaraDataInterfaceGeometryCollection::PerInstanceDataSize
          (UNiagaraDataInterfaceGeometryCollection *this)

{
  return 0xb0;
}

// PerInstanceTick @ 14e9a2cb0

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
UNiagaraDataInterfaceGeometryCollection::PerInstanceTick
          (UNiagaraDataInterfaceGeometryCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  ResolveGeometryCollection(this,param_2,param_1);
  if (((param_1 != (void *)0x0) && (*(longlong *)((longlong)param_1 + 0x88) != 0)) &&
     (param_2 != (FNiagaraSystemInstance *)0x0)) {
    FNDIGeometryCollectionData::Update(param_1,this,param_2);
  }
  return false;
}

// PerInstanceTickPostSimulate @ 14e9a2d10

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
UNiagaraDataInterfaceGeometryCollection::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceGeometryCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  bool bVar1;
  UGeometryCollectionComponent *this_00;
  
  if ((param_1 != (void *)0x0) && (*(char *)((longlong)param_1 + 0x98) != '\0')) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0xa4));
    if (bVar1) {
      this_00 = (UGeometryCollectionComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0xa4));
      UGeometryCollectionComponent::SetLocalRestTransforms
                (this_00,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)((longlong)param_1 + 0x90) + 0x50),
                 this->bIncludeIntermediateBones == false);
    }
    return false;
  }
  return false;
}

// PostInitProperties @ 14e9a3000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::PostInitProperties
          (UNiagaraDataInterfaceGeometryCollection *this)

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

// PostSimulateCanOverlapFrames @ 14e9a3460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::PostSimulateCanOverlapFrames
          (UNiagaraDataInterfaceGeometryCollection *this)

{
  return false;
}

// ProvidePerInstanceDataForRenderThread @ 14e9a43a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceGeometryCollection *this,void *param_1,void *param_2,
          ulong64 *param_3)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  FNDIGeometryCollectionArrays *this_00;
  FNDIGeometryCollectionArrays *this_01;
  longlong lVar21;
  ForAnyElementType *pFVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  float *pfVar26;
  undefined1 local_res10 [8];
  float *local_res18;
  
  if ((param_2 != (void *)0x0) && (param_1 != (void *)0x0)) {
    *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
    this_00 = ::operator_new(0x78);
    this_01 = (FNDIGeometryCollectionArrays *)0x0;
    if (this_00 != (FNDIGeometryCollectionArrays *)0x0) {
      this_01 = FNDIGeometryCollectionArrays::FNDIGeometryCollectionArrays(this_00);
    }
    *(FNDIGeometryCollectionArrays **)((longlong)param_1 + 0x90) = this_01;
    FNDIGeometryCollectionArrays::CopyFrom
              (this_01,*(FNDIGeometryCollectionArrays **)((longlong)param_2 + 0x90));
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    uVar18 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar18;
    uVar18 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar18;
    uVar18 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar18;
    uVar18 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar18;
    uVar18 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar18;
    uVar18 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar18;
    if (*(char *)((longlong)param_2 + 0x99) != '\0') {
      *(undefined1 *)((longlong)param_2 + 0x99) = 0;
      lVar6 = *(longlong *)((longlong)param_1 + 0x88);
      pFVar22 = (ForAnyElementType *)(lVar6 + 0xa0);
      piVar1 = (int *)(lVar6 + 0xa8);
      iVar20 = *(int *)(*(longlong *)((longlong)param_1 + 0x90) + 0x68);
      iVar5 = *piVar1;
      uVar25 = iVar20 * 0x28;
      if (iVar5 < (int)uVar25) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar25 - iVar5,pFVar22,piVar1,(int *)(lVar6 + 0xac));
      }
      else {
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
        }
        if ((int)uVar25 < iVar5) {
          uVar23 = iVar5 + iVar20 * -0x28;
          if (((int)(uVar23 | uVar25) < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (uVar23 != 0) {
            iVar20 = (*piVar1 - uVar23) + iVar20 * -0x28;
            if (iVar20 != 0) {
              memmove(pFVar22->Data + (int)uVar25,pFVar22->Data + (int)uVar25 + (int)uVar23,
                      (longlong)iVar20);
            }
            *piVar1 = *piVar1 - uVar23;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,pFVar22,*piVar1,(int *)(lVar6 + 0xac));
          }
        }
      }
      lVar6 = *(longlong *)((longlong)param_1 + 0x90);
      puVar24 = *(uint **)(lVar6 + 0x60);
      local_res18 = *(float **)(*(longlong *)((longlong)param_1 + 0x88) + 0xa0);
      iVar20 = *(int *)(lVar6 + 0x68);
      pfVar26 = local_res18 + 9;
      puVar2 = puVar24 + iVar20;
      while( true ) {
        if (*(int *)(lVar6 + 0x68) != iVar20) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (puVar24 == puVar2) break;
        uVar25 = *puVar24;
        lVar7 = *(longlong *)((longlong)param_1 + 0x90);
        uVar23 = 0;
        if ((int)uVar25 < *(int *)(lVar7 + 0x58)) {
          uVar23 = ~uVar25 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)(lVar7 + 0x50);
        lVar21 = (longlong)(int)uVar25 * 0x60;
        pdVar3 = (double *)(lVar21 + 0x20 + lVar7);
        dVar9 = pdVar3[1];
        dVar10 = *(double *)(lVar21 + 0x30 + lVar7);
        pdVar4 = (double *)(lVar21 + 0x10 + lVar7);
        dVar11 = *pdVar4;
        dVar12 = pdVar4[1];
        dVar13 = *(double *)(lVar21 + lVar7);
        dVar14 = ((double *)(lVar21 + lVar7))[1];
        dVar15 = *(double *)(lVar21 + 0x50 + lVar7);
        pdVar4 = (double *)(lVar21 + 0x40 + lVar7);
        dVar16 = *pdVar4;
        dVar17 = pdVar4[1];
        *local_res18 = (float)*pdVar3;
        local_res18 = local_res18 + 10;
        pfVar26[-8] = (float)dVar9;
        pfVar26[-7] = (float)dVar10;
        *(ulonglong *)(pfVar26 + -6) = CONCAT44((float)dVar14,(float)dVar13);
        *(ulonglong *)(pfVar26 + -4) = CONCAT44((float)dVar12,(float)dVar11);
        pfVar26[-2] = (float)dVar16;
        pfVar26[-1] = (float)dVar17;
        *pfVar26 = (float)dVar15;
        pfVar26 = pfVar26 + 10;
        puVar24 = puVar24 + 1;
      }
    }
  }
  if ((this->_padding_ == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Proxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                          ,0x461,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}

// ResolveGeometryCollection @ 14e9a6890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::ResolveGeometryCollection
          (UNiagaraDataInterfaceGeometryCollection *this,FNiagaraSystemInstance *param_1,
          FNDIGeometryCollectionData *param_2)

{
  FResolvedNiagaraGeometryCollection *pFVar1;
  ENDIGeometryCollection_SourceMode EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNiagaraTypeDefinition *pFVar7;
  UClass *pUVar8;
  uint *puVar9;
  UScriptStruct *pUVar10;
  UObject *pUVar11;
  UScriptStruct *pUVar12;
  uint local_58;
  FNiagaraParameterStore *local_50;
  undefined1 local_48 [8];
  FNiagaraTypeDefinitionHandle local_40 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  uint local_28;
  
  local_58 = 0xffffffff;
  pUVar12 = (UScriptStruct *)0x0;
  local_50 = (FNiagaraParameterStore *)0x0;
  local_48 = (undefined1  [8])0x0;
  local_40[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::Vec4Def);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  if (((this->GeometryCollectionUserParameter).Parameter._padding_ != 0) &&
     (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)
                          &(this->GeometryCollectionUserParameter).Parameter._padding_),
     (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    local_50 = &param_1->InstanceParameters;
    FNiagaraVariable::operator=
              ((FNiagaraVariable *)local_48,&(this->GeometryCollectionUserParameter).Parameter);
    local_28 = (param_1->InstanceParameters).LayoutVersion;
    pFVar7 = FNiagaraTypeDefinitionHandle::Resolve(local_40);
    pUVar10 = FNiagaraTypeDefinition::IntStruct;
    if ((pFVar7->UnderlyingType != 3) &&
       (pUVar10 = pUVar12, (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
      pUVar8 = Z_Construct_UClass_UStruct_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)pFVar7,pUVar8);
      if (bVar5) {
        pUVar10 = (UScriptStruct *)(pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr;
      }
    }
    if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14e9a6999:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundVariable.GetType().IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x461,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar8 == (UClass *)0x0) {
LAB_14e9a6993:
        bVar5 = false;
      }
      else {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar10->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) goto LAB_14e9a6993;
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14e9a6999;
    }
    puVar9 = (uint *)(**(code **)(local_50->_padding_ + 0x58))
                               (local_50,&this->GeometryCollectionUserParameter,0);
    if (puVar9 == (uint *)0x0) {
      local_58 = 0xffffffff;
LAB_14e9a6a5c:
      pUVar11 = (UObject *)0x0;
    }
    else {
      local_58 = *puVar9;
      if (((int)local_58 < 0) || ((param_1->InstanceParameters).UObjects.ArrayNum <= (int)local_58))
      goto LAB_14e9a6a5c;
      uVar6 = 0;
      if ((int)local_58 < (param_1->InstanceParameters).UObjects.ArrayNum) {
        uVar6 = ~local_58 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar11 = *(UObject **)
                 ((param_1->InstanceParameters).UObjects.AllocatorInstance.Data +
                 (longlong)(int)local_58 * 8);
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14e9a6a75;
      if (pUVar11 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar11);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
  }
LAB_14e9a6a75:
  if (((local_58 != 0xffffffff) && (-1 < (int)local_58)) &&
     ((int)local_58 < (local_50->UObjects).ArrayNum)) {
    uVar6 = 0;
    if ((int)local_58 < (local_50->UObjects).ArrayNum) {
      uVar6 = ~local_58 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar12 = *(UScriptStruct **)
               ((local_50->UObjects).AllocatorInstance.Data + (longlong)(int)local_58 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
  }
  pFVar1 = &param_2->ResolvedSource;
  (pFVar1->Collection).WeakPtr = (FWeakObjectPtr)0x0;
  (param_2->ResolvedSource).Component.WeakPtr = (FWeakObjectPtr)0x0;
  EVar2 = this->SourceMode;
  if (EVar2 == Default) {
LAB_14e9a6b46:
    bVar5 = ResolveGeometryCollectionFromDirectSource(this,pFVar1);
    if (((bVar5) ||
        (bVar5 = ResolveGeometryCollectionFromParameterBinding(this,(UObject *)pUVar12,pFVar1),
        bVar5)) || (bVar5 = ResolveGeometryCollectionFromAttachParent(this,param_1,pFVar1), bVar5))
    goto LAB_14e9a6b84;
  }
  else {
    if (EVar2 == Source) {
      ResolveGeometryCollectionFromDirectSource(this,pFVar1);
      goto LAB_14e9a6b84;
    }
    if (EVar2 == AttachParent) {
      ResolveGeometryCollectionFromAttachParent(this,param_1,pFVar1);
      goto LAB_14e9a6b84;
    }
    if (EVar2 != DefaultCollectionOnly) {
      if (EVar2 == ParameterBinding) {
        ResolveGeometryCollectionFromParameterBinding(this,(UObject *)pUVar12,pFVar1);
        goto LAB_14e9a6b84;
      }
      goto LAB_14e9a6b46;
    }
  }
  ResolveGeometryCollectionFromDefaultCollection(this,pFVar1);
LAB_14e9a6b84:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// ResolveGeometryCollectionFromActor @ 14e9a6bc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::ResolveGeometryCollectionFromActor
          (UNiagaraDataInterfaceGeometryCollection *this,AActor *param_1,
          FResolvedNiagaraGeometryCollection *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  UObject *pUVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  UClass *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res10 [16];
  int local_res20;
  UObject *local_a8;
  UObject *local_a0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (AActor *)0x0) {
    pUVar12 = Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar12->_padding_)) {
      local_a8 = (UObject *)param_1[1]._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a8);
      }
      FWeakObjectPtr::operator=(&(param_2->Component).WeakPtr,(FObjectPtr)&local_a8);
      return true;
    }
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&param_1->OwnedComponents);
    iVar3 = *(int *)&(pTVar13->Elements).field_0x28;
    iStack_90 = 0;
    uStack_8c = 1;
    local_78 = 0;
    puVar1 = &(pTVar13->Elements).field_0x10;
    iStack_7c = 0;
    if (iVar3 != 0) {
      puVar18 = *(uint **)&(pTVar13->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        iStack_90 = iStack_90 + 1;
        local_78 = local_78 + 0x20;
        iStack_7c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14e9a6ccd;
        uVar16 = puVar18[iStack_90];
      }
      uStack_8c = ~(uVar16 - 1) & uVar16;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res20 = (int)lVar7;
      iStack_7c = local_res20 + -1 + local_78;
      if (iVar3 < iStack_7c) {
        iStack_7c = iVar3;
      }
    }
LAB_14e9a6ccd:
    uVar16 = *(uint *)&(pTVar13->Elements).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    iStack_70 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = pTVar13;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = pTVar13;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    uVar4 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar16 != uVar4) {
      puVar5 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      puVar17 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar17 = puVar5;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        iVar14 = iVar14 + 1;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar14)
        goto LAB_14e9a6dd0;
        uVar16 = *(uint *)(puVar17 + (longlong)iVar14 * 4);
      }
      uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar16 = (int)lVar7 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_14e9a6dd0:
    while( true ) {
      pTVar9 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar16) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == pTVar13)) break;
      pUVar6 = *(UObject **)
                (*(longlong *)&pTVar9->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
      if (pUVar6 != (UObject *)0x0) {
        pUVar12 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
        iVar3 = (int)pUVar12->_padding_;
        if (((iVar3 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar12->_padding_)) && ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0)) {
          local_a0 = pUVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=(&(param_2->Component).WeakPtr,(FObjectPtr)&local_a0);
          return true;
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return false;
}

// ResolveGeometryCollectionFromAttachParent @ 14e9a6ea0

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
UNiagaraDataInterfaceGeometryCollection::ResolveGeometryCollectionFromAttachParent
          (UNiagaraDataInterfaceGeometryCollection *this,FNiagaraSystemInstance *param_1,
          FResolvedNiagaraGeometryCollection *param_2)

{
  int iVar1;
  bool bVar2;
  USceneComponent *this_00;
  UClass *pUVar3;
  AActor *pAVar4;
  USceneComponent *local_res10;
  
  this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->AttachComponent).WeakPtr);
  local_res10 = this_00;
  if (this_00 == (USceneComponent *)0x0) {
    return false;
  }
  do {
    pUVar3 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(local_res10->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(local_res10->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && (((uint)local_res10->_padding_ >> 0x1e & 1) == 0))
    goto joined_r0x00014e9a6f6e;
    local_res10 = (local_res10->AttachParent).field0_0x0.DebugPtr;
  } while (local_res10 != (USceneComponent *)0x0);
  pUVar3 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
  local_res10 = (USceneComponent *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
  if ((local_res10 == (USceneComponent *)0x0) || (((uint)local_res10->_padding_ >> 0x1e & 1) != 0))
  {
    pAVar4 = USceneComponent::GetAttachmentRootActor(this_00);
    bVar2 = ResolveGeometryCollectionFromActor(this,pAVar4,param_2);
  }
  else {
joined_r0x00014e9a6f6e:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=(&(param_2->Component).WeakPtr,(FObjectPtr)&local_res10);
    bVar2 = true;
  }
  return bVar2;
}

// ResolveGeometryCollectionFromDefaultCollection @ 14e9a6fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::ResolveGeometryCollectionFromDefaultCollection
          (UNiagaraDataInterfaceGeometryCollection *this,FResolvedNiagaraGeometryCollection *param_1
          )

{
  UGeometryCollection *pUVar1;
  FWeakObjectPtr local_res8;
  UGeometryCollection *local_res10;
  
  pUVar1 = (this->DefaultGeometryCollection).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UGeometryCollection *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UGeometryCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UGeometryCollection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (param_1->Collection).WeakPtr = local_res8;
  return true;
}

// ResolveGeometryCollectionFromDirectSource @ 14e9a7040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::ResolveGeometryCollectionFromDirectSource
          (UNiagaraDataInterfaceGeometryCollection *this,FResolvedNiagaraGeometryCollection *param_1
          )

{
  UGeometryCollectionComponent *pUVar1;
  AGeometryCollectionActor *pAVar2;
  TObjectPtr<UGeometryCollectionComponent>_u_0 local_res8;
  UGeometryCollectionComponent *local_res18 [2];
  
  pUVar1 = (this->SourceComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UGeometryCollectionComponent *)0x0) &&
     ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) {
    pUVar1 = (this->SourceComponent).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 != (UGeometryCollectionComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UGeometryCollectionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res8.DebugPtr = (UGeometryCollectionComponent *)0x0;
    local_res18[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UGeometryCollectionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.ObjectPtr,(FObjectPtr)local_res18);
    (param_1->Component).WeakPtr = (FWeakObjectPtr)local_res8;
    return true;
  }
  pAVar2 = TSoftObjectPtr<AGeometryCollectionActor>::Get(&this->GeometryCollectionActor);
  if (pAVar2 != (AGeometryCollectionActor *)0x0) {
    pAVar2 = TSoftObjectPtr<AGeometryCollectionActor>::Get(&this->GeometryCollectionActor);
    local_res8 = (TObjectPtr<UGeometryCollectionComponent>_u_0)
                 (pAVar2->GeometryCollectionComponent).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UGeometryCollectionComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    FWeakObjectPtr::operator=(&(param_1->Component).WeakPtr,(FObjectPtr)&local_res8);
  }
  return false;
}

// ResolveGeometryCollectionFromParameterBinding @ 14e9a7140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGeometryCollection::ResolveGeometryCollectionFromParameterBinding
          (UNiagaraDataInterfaceGeometryCollection *this,UObject *param_1,
          FResolvedNiagaraGeometryCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  AActor *pAVar4;
  UObject *local_res10;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     (pAVar4 = (AActor *)param_1,
     (longlong *)
     *(undefined1 **)(*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8)
     != &pUVar3->_padding_)) {
    pAVar4 = (AActor *)0x0;
  }
  bVar2 = ResolveGeometryCollectionFromActor(this,pAVar4,param_2);
  if (!bVar2) {
    pUVar3 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    local_res10 = param_1;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UGeometryCollection_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_) {
        return false;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)&local_res10);
      return true;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&(param_2->Component).WeakPtr,(FObjectPtr)&local_res10);
  }
  return true;
}

// SetElementTransformCS @ 14e9a8670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::SetElementTransformCS
          (UNiagaraDataInterfaceGeometryCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FNDIGeometryCollectionArrays *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  double dVar33;
  bool bVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  undefined7 extraout_var;
  uint uVar38;
  int iVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float *local_228;
  int local_218 [2];
  FUserPtrHandler<FNDIGeometryCollectionData> local_210;
  FNDIInputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIInputParam<UE::Math::TVector<float>_> local_1a8;
  FNDIInputParam<UE::Math::TQuat<float>_> local_158;
  double local_f8;
  double local_f0;
  double local_e8;
  
  VectorVM::FUserPtrHandler<FNDIGeometryCollectionData>::FUserPtrHandler<FNDIGeometryCollectionData>
            (&local_210,param_1);
  local_218[0] = 0;
  local_228 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_218);
  local_228 = local_228 + local_218[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIInputParam<UE::Math::TQuat<float>_>::FNDIInputParam<UE::Math::TQuat<float>_>
            (&local_158,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1a8,param_1);
  dVar33 = __real_3f1a36e2e0000000;
  uVar32 = _UNK_15061cc8c;
  uVar31 = _UNK_15061cc88;
  uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar41 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar8 = *local_228;
      fVar1 = *local_1f8.Z.InputPtr;
      fVar2 = *local_158.W.InputPtr;
      dVar21 = (double)*local_1f8.Y.InputPtr;
      local_228 = local_228 + local_218[0];
      fVar3 = *local_1f8.X.InputPtr;
      local_1f8.Z.InputPtr = local_1f8.Z.InputPtr + local_1f8.Z.AdvanceOffset;
      local_1f8.Y.InputPtr = local_1f8.Y.InputPtr + local_1f8.Y.AdvanceOffset;
      fVar4 = *local_158.Z.InputPtr;
      fVar5 = *local_158.Y.InputPtr;
      local_1f8.X.InputPtr = local_1f8.X.InputPtr + local_1f8.X.AdvanceOffset;
      local_158.W.InputPtr = local_158.W.InputPtr + local_158.W.AdvanceOffset;
      local_158.Z.InputPtr = local_158.Z.InputPtr + local_158.Z.AdvanceOffset;
      dVar22 = (double)*local_158.X.InputPtr;
      local_158.Y.InputPtr = local_158.Y.InputPtr + local_158.Y.AdvanceOffset;
      fVar6 = *local_1a8.Z.InputPtr;
      local_158.X.InputPtr = local_158.X.InputPtr + local_158.X.AdvanceOffset;
      dVar45 = (double)*local_1a8.Y.InputPtr;
      local_1a8.Z.InputPtr = local_1a8.Z.InputPtr + local_1a8.Z.AdvanceOffset;
      fVar7 = *local_1a8.X.InputPtr;
      local_1a8.Y.InputPtr = local_1a8.Y.InputPtr + local_1a8.Y.AdvanceOffset;
      local_1a8.X.InputPtr = local_1a8.X.InputPtr + local_1a8.X.AdvanceOffset;
      dVar26 = (double)fVar5;
      dVar27 = (double)fVar4;
      dVar28 = (double)fVar2;
      if ((-1 < (int)fVar8) &&
         (pFVar9 = (local_210.Ptr)->AssetArrays,
         (int)fVar8 < (pFVar9->ElementIndexToTransformBufferMapping).ArrayNum)) {
        uVar35 = 0;
        if ((int)fVar8 < (pFVar9->ElementIndexToTransformBufferMapping).ArrayNum) {
          uVar35 = ~(uint)fVar8 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar35 = *(uint *)((pFVar9->ElementIndexToTransformBufferMapping).AllocatorInstance.Data +
                          (longlong)(int)fVar8 * 4);
        if ((-1 < (int)uVar35) &&
           (pFVar9 = (local_210.Ptr)->AssetArrays,
           (int)uVar35 < (pFVar9->ComponentRestTransformBuffer).ArrayNum)) {
          iVar36 = (pFVar9->ComponentRestTransformBuffer).ArrayNum;
          uVar37 = 0;
          if ((int)uVar35 < iVar36) {
            uVar37 = ~uVar35 >> 0x1f;
          }
          if (uVar37 == 0) {
            iVar36 = 0x506106c8;
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar37 = (uint)CONCAT71(extraout_var,bVar34);
            if (bVar34) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar10 = (pFVar9->ComponentRestTransformBuffer).AllocatorInstance.Data;
          lVar40 = (longlong)(int)uVar35 * 0x60;
          local_f8 = dVar33;
          dVar43 = *(double *)(pFVar10 + lVar40 + 0x30) - (double)fVar1;
          dVar44 = *(double *)(pFVar10 + lVar40 + 0x30 + 8) - 0.0;
          dVar46 = *(double *)(pFVar10 + lVar40 + 0x20) - (double)fVar3;
          dVar48 = *(double *)(pFVar10 + lVar40 + 0x20 + 8) - dVar21;
          lVar42 = -(ulonglong)
                    (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar32,
                                               SUB84(dVar44,0) & uVar31));
          auVar12._8_4_ = (int)lVar42;
          auVar12._0_8_ =
               -(ulonglong)
                (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar30,
                                           SUB84(dVar43,0) & uVar29));
          auVar12._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
          uVar38 = movmskpd(iVar36,auVar12);
          lVar42 = -(ulonglong)
                    (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar32,
                                               SUB84(dVar48,0) & uVar31));
          auVar17._8_4_ = (int)lVar42;
          auVar17._0_8_ =
               -(ulonglong)
                (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & uVar30,
                                           SUB84(dVar46,0) & uVar29));
          auVar17._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
          iVar36 = movmskpd(uVar37,auVar17);
          if ((uVar38 & 0x3fffffff) == 0 && iVar36 == 0) {
            dVar43 = *(double *)(pFVar10 + lVar40 + 0x10);
            dVar44 = *(double *)(pFVar10 + lVar40 + 0x10 + 8);
            dVar46 = *(double *)(pFVar10 + lVar40);
            dVar48 = *(double *)(pFVar10 + lVar40 + 8);
            local_f0 = dVar33;
            dVar50 = dVar27 + dVar43;
            dVar51 = dVar28 + dVar44;
            dVar43 = dVar43 - dVar27;
            dVar44 = dVar44 - dVar28;
            dVar47 = dVar46 - dVar22;
            dVar49 = dVar48 - dVar26;
            lVar42 = -(ulonglong)
                      (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar32,
                                                 SUB84(dVar44,0) & uVar31));
            auVar13._8_4_ = (int)lVar42;
            auVar13._0_8_ =
                 -(ulonglong)
                  (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar30,
                                             SUB84(dVar43,0) & uVar29));
            auVar13._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
            iVar39 = movmskpd(0,auVar13);
            lVar42 = -(ulonglong)
                      (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar32,
                                                 SUB84(dVar49,0) & uVar31));
            dVar46 = dVar46 + dVar22;
            dVar48 = dVar48 + dVar26;
            auVar14._8_4_ = (int)lVar42;
            auVar14._0_8_ =
                 -(ulonglong)
                  (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar30,
                                             SUB84(dVar47,0) & uVar29));
            auVar14._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
            uVar37 = movmskpd(iVar36,auVar14);
            uVar38 = iVar39 << 2 | uVar37;
            if (uVar38 != 0) {
              lVar42 = -(ulonglong)
                        (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar32,
                                                   SUB84(dVar51,0) & uVar31));
              auVar15._8_4_ = (int)lVar42;
              auVar15._0_8_ =
                   -(ulonglong)
                    (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar30,
                                               SUB84(dVar50,0) & uVar29));
              auVar15._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
              uVar38 = movmskpd(uVar38,auVar15);
              lVar42 = -(ulonglong)
                        (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar32,
                                                   SUB84(dVar48,0) & uVar31));
              auVar18._8_4_ = (int)lVar42;
              auVar18._0_8_ =
                   -(ulonglong)
                    (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & uVar30,
                                               SUB84(dVar46,0) & uVar29));
              auVar18._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
              uVar37 = movmskpd(uVar37,auVar18);
              if ((uVar38 & 0x3fffffff) != 0 || uVar37 != 0) goto LAB_14e9a8af0;
            }
            local_e8 = dVar33;
            dVar43 = *(double *)(pFVar10 + lVar40 + 0x50) - (double)fVar6;
            dVar44 = *(double *)(pFVar10 + lVar40 + 0x50 + 8) - 0.0;
            dVar46 = *(double *)(pFVar10 + lVar40 + 0x40) - (double)fVar7;
            dVar48 = *(double *)(pFVar10 + lVar40 + 0x40 + 8) - dVar45;
            lVar42 = -(ulonglong)
                      (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar32,
                                                 SUB84(dVar44,0) & uVar31));
            auVar16._8_4_ = (int)lVar42;
            auVar16._0_8_ =
                 -(ulonglong)
                  (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar30,
                                             SUB84(dVar43,0) & uVar29));
            auVar16._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
            uVar38 = movmskpd(0,auVar16);
            lVar42 = -(ulonglong)
                      (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar32,
                                                 SUB84(dVar48,0) & uVar31));
            auVar19._8_4_ = (int)lVar42;
            auVar19._0_8_ =
                 -(ulonglong)
                  (dVar33 < (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & uVar30,
                                             SUB84(dVar46,0) & uVar29));
            auVar19._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
            iVar36 = movmskpd(uVar37,auVar19);
            if ((uVar38 & 0x3fffffff) == 0 && iVar36 == 0) goto LAB_14e9a8b68;
          }
LAB_14e9a8af0:
          pFVar9 = (local_210.Ptr)->AssetArrays;
          uVar37 = 0;
          if ((int)uVar35 < (pFVar9->ComponentRestTransformBuffer).ArrayNum) {
            uVar37 = ~uVar35 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (pFVar9->ComponentRestTransformBuffer).AllocatorInstance.Data;
          auVar24._8_4_ = SUB84(dVar26,0);
          auVar24._0_8_ = dVar22;
          auVar24._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
          *(undefined1 (*) [16])(pFVar10 + lVar40) = auVar24;
          auVar25._8_4_ = SUB84(dVar28,0);
          auVar25._0_8_ = dVar27;
          auVar25._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          *(undefined1 (*) [16])(pFVar10 + lVar40 + 0x10) = auVar25;
          auVar23._8_4_ = SUB84(dVar21,0);
          auVar23._0_8_ = (double)fVar3;
          auVar23._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          *(undefined1 (*) [16])(pFVar10 + lVar40 + 0x20) = auVar23;
          *(double *)(pFVar10 + lVar40 + 0x30) = (double)fVar1;
          *(double *)(pFVar10 + lVar40 + 0x30 + 8) = 0.0;
          auVar20._8_4_ = SUB84(dVar45,0);
          auVar20._0_8_ = (double)fVar7;
          auVar20._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
          *(undefined1 (*) [16])(pFVar10 + lVar40 + 0x40) = auVar20;
          *(double *)(pFVar10 + lVar40 + 0x50) = (double)fVar6;
          *(double *)(pFVar10 + lVar40 + 0x50 + 8) = 0.0;
          (local_210.Ptr)->bHasPendingComponentTransformUpdate = true;
        }
      }
LAB_14e9a8b68:
      iVar41 = iVar41 + 1;
    } while (iVar41 < param_1->NumInstances);
  }
  return;
}

// SetElementTransformWS @ 14e9a8c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::SetElementTransformWS
          (UNiagaraDataInterfaceGeometryCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FNDIGeometryCollectionArrays *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  bool bVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  FNDIInputParam<UE::Math::TVector<float>_> *pFVar47;
  undefined7 extraout_var;
  uint uVar48;
  int iVar49;
  longlong lVar50;
  uint uVar51;
  FVectorVMExternalFunctionContext *pFVar52;
  longlong lVar53;
  longlong lVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  double local_2f8;
  double local_2f0;
  float *local_2e8;
  float *local_2e0;
  int local_2d8 [2];
  FUserPtrHandler<FNDIGeometryCollectionData> local_2d0;
  FNDIInputParam<FNiagaraPosition> local_2b8;
  FNDIInputParam<UE::Math::TVector<float>_> local_268;
  FNDIInputParam<UE::Math::TQuat<float>_> local_218;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  VectorVM::FUserPtrHandler<FNDIGeometryCollectionData>::FUserPtrHandler<FNDIGeometryCollectionData>
            (&local_2d0,param_1);
  local_2d8[0] = 0;
  local_2e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2d8);
  local_2e8 = local_2e8 + local_2d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2e0 = local_2e8;
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_2b8,param_1);
  FNDIInputParam<UE::Math::TQuat<float>_>::FNDIInputParam<UE::Math::TQuat<float>_>
            (&local_218,param_1);
  pFVar52 = param_1;
  pFVar47 = FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
                      (&local_268,param_1);
  uVar29 = _UNK_15061cc8c;
  uVar28 = _UNK_15061cc88;
  uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar53 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(*(uint *)((longlong)
                                       ((local_2d0.Ptr)->RootTransform).Scale3D.ZW.m128d_f64 + 0xc)
                             & _UNK_15061cc8c,
                             *(uint *)(((local_2d0.Ptr)->RootTransform).Scale3D.ZW.m128d_f64 + 1) &
                             _UNK_15061cc88));
  auVar20._8_4_ = (int)lVar53;
  auVar20._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
        (double)CONCAT44(*(uint *)((longlong)((local_2d0.Ptr)->RootTransform).Scale3D.ZW.m128d_f64 +
                                  4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         *(uint *)((local_2d0.Ptr)->RootTransform).Scale3D.ZW.m128d_f64 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar20._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
  uVar51 = movmskpd((int)pFVar52,auVar20);
  lVar53 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(*(uint *)((longlong)
                                       ((local_2d0.Ptr)->RootTransform).Scale3D.XY.m128d_f64 + 0xc)
                             & _UNK_15061cc8c,
                             *(uint *)(((local_2d0.Ptr)->RootTransform).Scale3D.XY.m128d_f64 + 1) &
                             _UNK_15061cc88));
  auVar14._8_4_ = (int)lVar53;
  auVar14._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44(*(uint *)((longlong)((local_2d0.Ptr)->RootTransform).Scale3D.XY.m128d_f64 +
                                  4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         *(uint *)((local_2d0.Ptr)->RootTransform).Scale3D.XY.m128d_f64 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar14._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
  iVar44 = movmskpd((int)pFVar47,auVar14);
  if ((uVar51 & 0x3fffffff) == 0 && iVar44 == 0) {
    local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_138.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_138.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&(local_2d0.Ptr)->RootTransform,&local_138);
  }
  dVar30 = __real_3f1a36e2e0000000;
  iVar44 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar10 = *local_2e8;
      fVar1 = *local_2b8.Z.InputPtr;
      fVar2 = *local_2b8.Y.InputPtr;
      fVar3 = *local_218.W.InputPtr;
      local_2e8 = local_2e8 + local_2d8[0];
      fVar4 = *local_2b8.X.InputPtr;
      local_2b8.Z.InputPtr = local_2b8.Z.InputPtr + local_2b8.Z.AdvanceOffset;
      local_2b8.Y.InputPtr = local_2b8.Y.InputPtr + local_2b8.Y.AdvanceOffset;
      fVar5 = *local_218.Z.InputPtr;
      fVar6 = *local_218.Y.InputPtr;
      local_2b8.X.InputPtr = local_2b8.X.InputPtr + local_2b8.X.AdvanceOffset;
      local_218.W.InputPtr = local_218.W.InputPtr + local_218.W.AdvanceOffset;
      fVar7 = *local_218.X.InputPtr;
      local_218.Z.InputPtr = local_218.Z.InputPtr + local_218.Z.AdvanceOffset;
      local_218.Y.InputPtr = local_218.Y.InputPtr + local_218.Y.AdvanceOffset;
      fVar8 = *local_268.Z.InputPtr;
      local_218.X.InputPtr = local_218.X.InputPtr + local_218.X.AdvanceOffset;
      local_2f8 = (double)*local_268.Y.InputPtr;
      local_268.Z.InputPtr = local_268.Z.InputPtr + local_268.Z.AdvanceOffset;
      fVar9 = *local_268.X.InputPtr;
      local_268.Y.InputPtr = local_268.Y.InputPtr + local_268.Y.AdvanceOffset;
      local_2f0 = (double)fVar8;
      local_268.X.InputPtr = local_268.X.InputPtr + local_268.X.AdvanceOffset;
      if ((-1 < (int)fVar10) &&
         (pFVar11 = (local_2d0.Ptr)->AssetArrays,
         (int)fVar10 < (pFVar11->ElementIndexToTransformBufferMapping).ArrayNum)) {
        iVar45 = (pFVar11->ElementIndexToTransformBufferMapping).ArrayNum;
        uVar51 = 0;
        if ((int)fVar10 < iVar45) {
          uVar51 = ~(uint)fVar10 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (local_308 = (longlong)(int)fVar10, local_300 = (longlong)iVar45,
           bVar43 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar51 = *(uint *)((pFVar11->ElementIndexToTransformBufferMapping).AllocatorInstance.Data +
                          (longlong)(int)fVar10 * 4);
        lVar53 = (longlong)(int)uVar51;
        if ((-1 < (int)uVar51) &&
           ((int)uVar51 < ((local_2d0.Ptr)->AssetArrays->ComponentRestTransformBuffer).ArrayNum)) {
          local_198.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
          local_198.Rotation.XY.m128d_f64[0] = (double)fVar7;
          local_198.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
          local_198.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar3,0);
          local_198.Rotation.ZW.m128d_f64[0] = (double)fVar5;
          local_198.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
          local_198.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar2,0);
          local_198.Translation.XY.m128d_f64[0] = (double)fVar4;
          local_198.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
          local_198.Translation.ZW.m128d_f64[1] = 0.0;
          local_198.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_198.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(local_2f8,0);
          local_198.Scale3D.XY.m128d_f64[0] = (double)fVar9;
          local_198.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)local_2f8 >> 0x20);
          local_198.Translation.ZW.m128d_f64[0] = (double)fVar1;
          local_198.Scale3D.ZW.m128d_f64[0] = local_2f0;
          UE::Math::TTransform<double>::Multiply(&local_198,&local_198,&local_138);
          pFVar11 = (local_2d0.Ptr)->AssetArrays;
          iVar45 = (pFVar11->ComponentRestTransformBuffer).ArrayNum;
          lVar50 = (longlong)iVar45;
          uVar46 = 0;
          if ((int)uVar51 < iVar45) {
            uVar46 = ~uVar51 >> 0x1f;
          }
          if (uVar46 == 0) {
            iVar45 = 0x506106c8;
            local_308 = lVar53;
            local_300 = lVar50;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar46 = (uint)CONCAT71(extraout_var,bVar43);
            if (bVar43) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          dVar42 = local_198.Scale3D.ZW.m128d_f64[1];
          dVar41 = local_198.Scale3D.ZW.m128d_f64[0];
          dVar38 = local_198.Translation.ZW.m128d_f64[1];
          dVar37 = local_198.Translation.ZW.m128d_f64[0];
          pFVar12 = (pFVar11->ComponentRestTransformBuffer).AllocatorInstance.Data;
          dVar35 = local_198.Translation.XY.m128d_f64[0];
          dVar36 = local_198.Translation.XY.m128d_f64[1];
          dVar39 = local_198.Scale3D.XY.m128d_f64[0];
          dVar40 = local_198.Scale3D.XY.m128d_f64[1];
          dVar33 = local_198.Rotation.ZW.m128d_f64[0];
          dVar34 = local_198.Rotation.ZW.m128d_f64[1];
          dVar31 = local_198.Rotation.XY.m128d_f64[0];
          dVar32 = local_198.Rotation.XY.m128d_f64[1];
          lVar50 = lVar53 * 0x60;
          local_1b8 = dVar30;
          dVar21 = local_198.Translation.ZW.m128d_f64[0] - *(double *)(pFVar12 + lVar50 + 0x30);
          dVar22 = local_198.Translation.ZW.m128d_f64[1] - *(double *)(pFVar12 + lVar50 + 0x30 + 8);
          lVar54 = -(ulonglong)
                    (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar29,
                                               SUB84(dVar22,0) & uVar28));
          auVar15._8_4_ = (int)lVar54;
          auVar15._0_8_ =
               -(ulonglong)
                (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar27,
                                           SUB84(dVar21,0) & uVar26));
          auVar15._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
          uVar48 = movmskpd(iVar45,auVar15);
          dVar21 = local_198.Translation.XY.m128d_f64[0] - *(double *)(pFVar12 + lVar50 + 0x20);
          dVar22 = local_198.Translation.XY.m128d_f64[1] - *(double *)(pFVar12 + lVar50 + 0x20 + 8);
          lVar54 = -(ulonglong)
                    (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar29,
                                               SUB84(dVar22,0) & uVar28));
          auVar23._8_4_ = (int)lVar54;
          auVar23._0_8_ =
               -(ulonglong)
                (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar27,
                                           SUB84(dVar21,0) & uVar26));
          auVar23._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
          iVar45 = movmskpd(uVar46,auVar23);
          if ((uVar48 & 0x3fffffff) == 0 && iVar45 == 0) {
            local_1b0 = dVar30;
            dVar21 = local_198.Rotation.ZW.m128d_f64[0] - *(double *)(pFVar12 + lVar50 + 0x10);
            dVar22 = local_198.Rotation.ZW.m128d_f64[1] - *(double *)(pFVar12 + lVar50 + 0x10 + 8);
            dVar55 = local_198.Rotation.XY.m128d_f64[0] + *(double *)(pFVar12 + lVar50);
            dVar56 = local_198.Rotation.XY.m128d_f64[1] + *(double *)(pFVar12 + lVar50 + 8);
            dVar57 = local_198.Rotation.ZW.m128d_f64[0] + *(double *)(pFVar12 + lVar50 + 0x10);
            dVar58 = local_198.Rotation.ZW.m128d_f64[1] + *(double *)(pFVar12 + lVar50 + 0x10 + 8);
            lVar54 = -(ulonglong)
                      (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar29,
                                                 SUB84(dVar22,0) & uVar28));
            auVar16._8_4_ = (int)lVar54;
            auVar16._0_8_ =
                 -(ulonglong)
                  (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar27,
                                             SUB84(dVar21,0) & uVar26));
            auVar16._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
            iVar49 = movmskpd(0,auVar16);
            dVar21 = local_198.Rotation.XY.m128d_f64[0] - *(double *)(pFVar12 + lVar50);
            dVar22 = local_198.Rotation.XY.m128d_f64[1] - *(double *)(pFVar12 + lVar50 + 8);
            lVar54 = -(ulonglong)
                      (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar29,
                                                 SUB84(dVar22,0) & uVar28));
            auVar17._8_4_ = (int)lVar54;
            auVar17._0_8_ =
                 -(ulonglong)
                  (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar27,
                                             SUB84(dVar21,0) & uVar26));
            auVar17._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
            uVar46 = movmskpd(iVar45,auVar17);
            uVar48 = iVar49 << 2 | uVar46;
            if (uVar48 != 0) {
              lVar54 = -(ulonglong)
                        (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar29,
                                                   SUB84(dVar58,0) & uVar28));
              auVar18._8_4_ = (int)lVar54;
              auVar18._0_8_ =
                   -(ulonglong)
                    (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar27,
                                               SUB84(dVar57,0) & uVar26));
              auVar18._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
              uVar48 = movmskpd(uVar48,auVar18);
              lVar54 = -(ulonglong)
                        (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar29,
                                                   SUB84(dVar56,0) & uVar28));
              auVar24._8_4_ = (int)lVar54;
              auVar24._0_8_ =
                   -(ulonglong)
                    (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & uVar27,
                                               SUB84(dVar55,0) & uVar26));
              auVar24._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
              uVar46 = movmskpd(uVar46,auVar24);
              if ((uVar48 & 0x3fffffff) != 0 || uVar46 != 0) goto LAB_14e9a91ab;
            }
            local_1a8 = dVar30;
            dVar21 = local_198.Scale3D.ZW.m128d_f64[0] - *(double *)(pFVar12 + lVar50 + 0x50);
            dVar22 = local_198.Scale3D.ZW.m128d_f64[1] - *(double *)(pFVar12 + lVar50 + 0x50 + 8);
            lVar54 = -(ulonglong)
                      (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar29,
                                                 SUB84(dVar22,0) & uVar28));
            auVar19._8_4_ = (int)lVar54;
            auVar19._0_8_ =
                 -(ulonglong)
                  (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar27,
                                             SUB84(dVar21,0) & uVar26));
            auVar19._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
            uVar48 = movmskpd(0,auVar19);
            dVar21 = local_198.Scale3D.XY.m128d_f64[0] - *(double *)(pFVar12 + lVar50 + 0x40);
            dVar22 = local_198.Scale3D.XY.m128d_f64[1] - *(double *)(pFVar12 + lVar50 + 0x40 + 8);
            lVar54 = -(ulonglong)
                      (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar29,
                                                 SUB84(dVar22,0) & uVar28));
            auVar25._8_4_ = (int)lVar54;
            auVar25._0_8_ =
                 -(ulonglong)
                  (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar27,
                                             SUB84(dVar21,0) & uVar26));
            auVar25._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
            iVar45 = movmskpd(uVar46,auVar25);
            if ((uVar48 & 0x3fffffff) == 0 && iVar45 == 0) goto LAB_14e9a9223;
          }
LAB_14e9a91ab:
          pFVar11 = (local_2d0.Ptr)->AssetArrays;
          iVar45 = (pFVar11->ComponentRestTransformBuffer).ArrayNum;
          uVar46 = 0;
          if ((int)uVar51 < iVar45) {
            uVar46 = ~uVar51 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (local_308 = lVar53, local_300 = (longlong)iVar45,
             bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar12 = (pFVar11->ComponentRestTransformBuffer).AllocatorInstance.Data;
          *(double *)(pFVar12 + lVar50) = dVar31;
          *(double *)(pFVar12 + lVar50 + 8) = dVar32;
          *(double *)(pFVar12 + lVar50 + 0x10) = dVar33;
          *(double *)(pFVar12 + lVar50 + 0x10 + 8) = dVar34;
          *(double *)(pFVar12 + lVar50 + 0x20) = dVar35;
          *(double *)(pFVar12 + lVar50 + 0x20 + 8) = dVar36;
          *(double *)(pFVar12 + lVar50 + 0x30) = dVar37;
          *(double *)(pFVar12 + lVar50 + 0x30 + 8) = dVar38;
          *(double *)(pFVar12 + lVar50 + 0x40) = dVar39;
          *(double *)(pFVar12 + lVar50 + 0x40 + 8) = dVar40;
          *(double *)(pFVar12 + lVar50 + 0x50) = dVar41;
          *(double *)(pFVar12 + lVar50 + 0x50 + 8) = dVar42;
          (local_2d0.Ptr)->bHasPendingComponentTransformUpdate = true;
        }
      }
LAB_14e9a9223:
      iVar44 = iVar44 + 1;
    } while (iVar44 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 14e9aa590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGeometryCollection::SetShaderParameters
          (UNiagaraDataInterfaceGeometryCollection *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FNiagaraDataInterfaceProxy *pFVar6;
  uchar *puVar7;
  FRDGBuilder *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  ulong64 uVar13;
  FShaderParametersMetadata *pFVar14;
  FRHIShaderResourceView *pFVar15;
  FRDGBufferSRV *pFVar16;
  ulong64 *puVar17;
  uint uVar18;
  FName *pFVar19;
  FRDGBufferSRVDesc local_38;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar6 = param_1->DataInterfaceProxy;
  uVar13 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  if (pFVar6[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar6[4]._padding_ + 4))
  {
    pFVar19 = (FName *)pFVar6[5]._padding_;
    if ((FName *)pFVar6[5]._padding_ == (FName *)0x0) {
      pFVar19 = &pFVar6[4].SourceDIName;
    }
    uVar18 = (&pFVar19->ComparisonIndex)
             [(uVar13 >> 0x20) * 0x17 + uVar13 &
              (ulonglong)(pFVar6[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar18 != 0xffffffff) {
      do {
        puVar17 = (ulong64 *)((longlong)(int)uVar18 * 0xd0 + pFVar6[1]._padding_);
        if (*puVar17 == uVar13) {
          if (puVar17 == (ulong64 *)0x0) goto LAB_14e9aa642;
          goto LAB_14e9aa668;
        }
        uVar18 = (uint)puVar17[0x18];
      } while (uVar18 != 0xffffffff);
    }
  }
  puVar17 = (ulong64 *)0x0;
LAB_14e9aa642:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14e9aa668:
  uVar18 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar14 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceGeometryCollection::FShaderParameters>
            ::GetStructMetadata();
  puVar7 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar14->Size + uVar18;
  fVar2 = *(float *)((longlong)puVar17 + 0x84);
  fVar3 = *(float *)(puVar17 + 0x12);
  fVar4 = *(float *)(puVar17 + 0x11);
  fVar5 = *(float *)((longlong)puVar17 + 0x94);
  *(float *)(puVar7 + uVar18) = *(float *)(puVar17 + 0x10) - *(float *)((longlong)puVar17 + 0x8c);
  *(float *)(puVar7 + (ulonglong)uVar18 + 4) = fVar2 - fVar3;
  *(float *)(puVar7 + (ulonglong)uVar18 + 8) = fVar4 - fVar5;
  fVar2 = *(float *)((longlong)puVar17 + 0x84);
  fVar3 = *(float *)(puVar17 + 0x12);
  fVar4 = *(float *)((longlong)puVar17 + 0x94);
  fVar5 = *(float *)(puVar17 + 0x11);
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x10) =
       *(float *)((longlong)puVar17 + 0x8c) + *(float *)(puVar17 + 0x10);
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x14) = fVar2 + fVar3;
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x18) = fVar4 + fVar5;
  *(undefined4 *)(puVar7 + (ulonglong)uVar18 + 0x1c) = *(undefined4 *)(puVar17[0x13] + 0xb0);
  dVar9 = (double)puVar17[9];
  dVar10 = (double)puVar17[10];
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x20) = (float)(double)puVar17[8];
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x24) = (float)dVar9;
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x28) = (float)dVar10;
  dVar9 = (double)puVar17[5];
  dVar10 = (double)puVar17[6];
  dVar11 = (double)puVar17[7];
  pfVar1 = (float *)(puVar7 + (ulonglong)uVar18 + 0x30);
  *pfVar1 = (float)(double)puVar17[4];
  pfVar1[1] = (float)dVar9;
  pfVar1[2] = (float)dVar10;
  pfVar1[3] = (float)dVar11;
  dVar9 = (double)puVar17[0xd];
  dVar10 = (double)puVar17[0xe];
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x40) = (float)(double)puVar17[0xc];
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x44) = (float)dVar9;
  *(float *)(puVar7 + (ulonglong)uVar18 + 0x48) = (float)dVar10;
  pFVar15 = *(FRHIShaderResourceView **)(puVar17[0x13] + 0x28);
  if (pFVar15 == (FRHIShaderResourceView *)0x0) {
    pFVar15 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar18 + 0x50) = pFVar15;
  pFVar15 = *(FRHIShaderResourceView **)(puVar17[0x13] + 0x40);
  if (pFVar15 == (FRHIShaderResourceView *)0x0) {
    pFVar15 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar18 + 0x58) = pFVar15;
  pFVar15 = *(FRHIShaderResourceView **)(puVar17[0x13] + 0x58);
  if (pFVar15 == (FRHIShaderResourceView *)0x0) {
    pFVar15 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar18 + 0x60) = pFVar15;
  pFVar15 = *(FRHIShaderResourceView **)(puVar17[0x13] + 0x70);
  if (pFVar15 == (FRHIShaderResourceView *)0x0) {
    pFVar15 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar18 + 0x68) = pFVar15;
  pFVar15 = *(FRHIShaderResourceView **)(puVar17[0x13] + 0x88);
  if (pFVar15 == (FRHIShaderResourceView *)0x0) {
    pFVar15 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar7 + (ulonglong)uVar18 + 0x70) = pFVar15;
  if (((TRefCountPtr<FRDGPooledBuffer> *)(puVar17[0x13] + 0x98))->Reference ==
      (FRDGPooledBuffer *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_694469131994397646>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                        ,0x432,"ProxyData.AssetBuffer->ComponentRestTransformBuffer");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    this_00 = param_1->GraphBuilder;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_1_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    local_38.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (this_00,(TRefCountPtr<FRDGPooledBuffer> *)(puVar17[0x13] + 0x98),None);
    local_38._padding_._0_1_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar16 = FRDGBuilder::CreateSRV(this_00,&local_38);
    *(FRDGBufferSRV **)(puVar7 + (ulonglong)uVar18 + 0x78) = pFVar16;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection @ 14e9af9c0

void __cdecl
UNiagaraDataInterfaceGeometryCollection::
StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection(void)

{
  return;
}

