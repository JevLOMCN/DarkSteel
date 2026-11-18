// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 30

// FNiagaraStatelessEmitterInstance @ 149475cd0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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

FNiagaraStatelessEmitterInstance * __thiscall
FNiagaraStatelessEmitterInstance::FNiagaraStatelessEmitterInstance
          (FNiagaraStatelessEmitterInstance *this,FNiagaraSystemInstance *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  FNiagaraDataSet *pFVar5;
  
  FNiagaraEmitterInstance::FNiagaraEmitterInstance((FNiagaraEmitterInstance *)this,param_1);
  this->RandomSeed = 0;
  (this->RandomStream).InitialSeed = 0;
  *(undefined ***)this = &___7FNiagaraStatelessEmitterInstance__6B_;
  (this->RandomStream).Seed = 0;
  (this->EmitterData).Object = (FNiagaraStatelessEmitterData *)0x0;
  puVar2 = &this->field_0x190;
  this->bCanEverExecute = 0;
  this->bNeedsEmitterStateInit = 0;
  this->bSpawnInfosDirty = 0;
  this->bEmitterEnabled_CNC = 1;
  this->bEmitterEnabled_GT = 1;
  (this->EmitterData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->WeakStatelessEmitter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EmitterTransforms).Transforms[0].Rotation = GlobalVectorConstants::Float0001;
  (this->EmitterTransforms).Transforms[0].Translation = GlobalVectorConstants::FloatZero;
  (this->EmitterTransforms).Transforms[0].Scale3D = GlobalVectorConstants::Float1110;
  (this->EmitterTransforms).Transforms[1].Rotation = GlobalVectorConstants::Float0001;
  (this->EmitterTransforms).Transforms[1].Translation = GlobalVectorConstants::FloatZero;
  (this->EmitterTransforms).Transforms[1].Scale3D = GlobalVectorConstants::Float1110;
  FNiagaraStatelessSpaceTransforms::InitializeTransforms
            (&this->EmitterTransforms,true,&UE::Math::TTransform<float>::Identity);
  bVar3 = this->field_0xd0;
  this->Age = 0.0;
  this->UniqueIndexOffset = 0;
  (this->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->field_0xd0 = bVar3 & 0xfb | 1;
  (this->SpawnInfos).ArrayNum = 0;
  (this->SpawnInfos).ArrayMax = 0;
  (this->ActiveSpawnRates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSpawnRates).ArrayNum = 0;
  (this->ActiveSpawnRates).ArrayMax = 0;
  this->InternalExecutionState = Active;
  this->ScalabilityState = Awaken;
  this->LoopCount = 0;
  this->CurrentLoopDuration = 0.0;
  this->CurrentLoopDelay = 0.0;
  this->CurrentLoopAgeStart = 0.0;
  this->CurrentLoopAgeEnd = 0.0;
  (this->RenderThreadDataPtr).Ptr = (FEmitterInstance_RT *)0x0;
  (this->ShaderParameters).Ptr = (FCommonShaderParameters *)0x0;
  this->field_0xd1 = 1;
  pFVar5 = ::operator_new(0xc0);
  if (pFVar5 != (FNiagaraDataSet *)0x0) {
    pFVar5 = FNiagaraDataSet::FNiagaraDataSet(pFVar5);
    *(FNiagaraDataSet **)&this->field_0x10 = pFVar5;
    return this;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// ~FNiagaraStatelessEmitterInstance @ 149477110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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
FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance
          (FNiagaraStatelessEmitterInstance *this)

{
  int iVar1;
  FNiagaraStatelessEmitterData *pFVar2;
  FEmitterInstance_RT *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UNiagaraParameterCollectionInstance *pUVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  code *local_a8 [2];
  undefined **local_98;
  FEmitterInstance_RT *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FEmitterInstance_RT *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined ***)this = &___7FNiagaraStatelessEmitterInstance__6B_;
  if ((*(int *)&this->field_0x58 != 0) &&
     (*(FNiagaraSystemInstance **)&this->field_0x8 != (FNiagaraSystemInstance *)0x0)) {
    FNiagaraSystemInstance::UnbindFromParameterStore
              (*(FNiagaraSystemInstance **)&this->field_0x8,
               (FNiagaraParameterStore *)&this->field_0x40);
    if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (this->EmitterData).Object;
    pFVar10 = (pFVar2->BoundParameterCollections).AllocatorInstance.Data;
    iVar1 = (pFVar2->BoundParameterCollections).ArrayNum;
    pFVar4 = pFVar10 + (longlong)iVar1 * 8;
    while( true ) {
      if ((pFVar2->BoundParameterCollections).ArrayNum != iVar1) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_b8);
      }
      if (pFVar10 == pFVar4) break;
      pUVar7 = FNiagaraSystemInstance::GetParameterCollectionInstance
                         (*(FNiagaraSystemInstance **)&this->field_0x8,
                          *(UNiagaraParameterCollection **)pFVar10);
      if (pUVar7 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Unbind
                  (&pUVar7->ParameterStorage,(FNiagaraParameterStore *)&this->field_0x40);
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  pFVar3 = (this->RenderThreadDataPtr).Ptr;
  (this->RenderThreadDataPtr).Ptr = (FEmitterInstance_RT *)0x0;
  if ((pFVar3 != (FEmitterInstance_RT *)0x0) || (*(longlong *)&this->field_0x10 != 0)) {
    local_88 = *(undefined8 *)&this->field_0x10;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_90 = pFVar3;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance_::__l5::TSTR_FReleaseStatelessEmitter104>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::TSTR_FReleaseStatelessEmitter104>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar8);
      uVar11 = (ulonglong)local_48;
      if ((2 < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar9 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar9 = local_50;
          }
          (*(code *)(*pppuVar9)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar9 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar9 = local_80;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    *(undefined8 *)&this->field_0x10 = 0;
  }
  FMemory::Free((this->ShaderParameters).Ptr);
  pFVar3 = (this->RenderThreadDataPtr).Ptr;
  if (pFVar3 != (FEmitterInstance_RT *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  DestructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>
            ((FActiveSpawnRate *)(this->ActiveSpawnRates).AllocatorInstance.Data,
             (this->ActiveSpawnRates).ArrayNum);
  pFVar4 = (this->ActiveSpawnRates).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmitterData).SharedReferenceCount.ReferenceController);
  FNiagaraEmitterInstance::~FNiagaraEmitterInstance((FNiagaraEmitterInstance *)this);
  return;
}

// operator() @ 149477560

void __thiscall
`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  
  fVar6 = *(float *)((longlong)this + 8) - *(float *)(*(longlong *)this + 0x24);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(*(longlong *)this + 0x28) = fVar6;
  *(undefined4 *)(*(longlong *)this + 0x24) = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(*(longlong *)this + 0x2c) = *(undefined4 *)((longlong)this + 0xc);
  pvVar2 = *(void **)((longlong)this + 0x10);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(*(longlong *)this + 0x40);
    if (pvVar3 != pvVar2) {
      *(void **)(*(longlong *)this + 0x40) = pvVar2;
      FMemory::Free(pvVar3);
    }
  }
  if (*(char *)((longlong)this + 0x18) != '\0') {
    puVar1 = (undefined8 *)((longlong)this + 0x20);
    *(undefined1 *)(*(longlong *)this + 0x48) = 1;
    lVar4 = *(longlong *)this;
    puVar5 = (undefined8 *)(lVar4 + 0x50);
    if (puVar5 != puVar1) {
      if ((void *)*puVar5 != (void *)0x0) {
        FMemory::Free((void *)*puVar5);
      }
      *puVar5 = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)((longlong)this + 0x28);
      *(undefined4 *)(lVar4 + 0x5c) = *(undefined4 *)((longlong)this + 0x2c);
      *(undefined8 *)((longlong)this + 0x28) = 0;
    }
  }
  if (*(char *)((longlong)this + 0x30) != '\0') {
    puVar1 = (undefined8 *)((longlong)this + 0x38);
    lVar4 = *(longlong *)this;
    puVar5 = (undefined8 *)(lVar4 + 0x30);
    if (puVar5 != puVar1) {
      if ((void *)*puVar5 != (void *)0x0) {
        FMemory::Free((void *)*puVar5);
      }
      *puVar5 = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)((longlong)this + 0x40);
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)((longlong)this + 0x44);
      *(undefined8 *)((longlong)this + 0x40) = 0;
    }
  }
  return;
}

// AsStateless @ 1494784e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraStatelessEmitterInstance * __thiscall
FNiagaraStatelessEmitterInstance::AsStateless(FNiagaraStatelessEmitterInstance *this)

{
  return this;
}

// BindParameters @ 1494784f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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
FNiagaraStatelessEmitterInstance::BindParameters
          (FNiagaraStatelessEmitterInstance *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  code *pcVar4;
  bool bVar5;
  UNiagaraParameterCollectionInstance *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((*(int *)&this->field_0x58 != 0) &&
     (*(FNiagaraSystemInstance **)&this->field_0x8 != (FNiagaraSystemInstance *)0x0)) {
    FNiagaraSystemInstance::BindToParameterStore
              (*(FNiagaraSystemInstance **)&this->field_0x8,
               (FNiagaraParameterStore *)&this->field_0x40);
    if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->EmitterData).Object;
    pFVar7 = (pFVar3->BoundParameterCollections).AllocatorInstance.Data;
    iVar2 = (pFVar3->BoundParameterCollections).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar3->BoundParameterCollections).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      pUVar6 = FNiagaraSystemInstance::GetParameterCollectionInstance
                         (*(FNiagaraSystemInstance **)&this->field_0x8,
                          *(UNiagaraParameterCollection **)pFVar7);
      if (pUVar6 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar6->ParameterStorage,(FNiagaraParameterStore *)&this->field_0x40,
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// CalculateBounds @ 149478b10

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::CalculateBounds(FNiagaraStatelessEmitterInstance *this)

{
  undefined8 uVar1;
  FNiagaraStatelessEmitterData *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  double dVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xf8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x100 = uVar1;
  *(double *)&this->field_0x108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->field_0x110 = 0;
  *(undefined4 *)&this->field_0xe0 = *(undefined4 *)&this->field_0xf8;
  *(undefined4 *)&this->field_0xe4 = *(undefined4 *)&this->field_0xfc;
  *(undefined4 *)&this->field_0xe8 = *(undefined4 *)&this->field_0x100;
  *(undefined4 *)&this->field_0xec = *(undefined4 *)&this->field_0x104;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&this->field_0x108;
  AcquireSRWLockShared((PSRWLOCK)&this->field_0x150);
  if (this->field_0x188 == '\0') {
    if (this->field_0x148 == '\0') {
      if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar8 = (this->EmitterData).Object;
      dVar11 = (pFVar8->FixedBounds).Min.field0_0x0._s_0.Y;
      *(double *)&this->field_0xe0 = (pFVar8->FixedBounds).Min.field0_0x0._s_0.X;
      *(double *)&this->field_0xe8 = dVar11;
      dVar11 = (pFVar8->FixedBounds).Max.field0_0x0._s_0.X;
      *(double *)&this->field_0xf0 = (pFVar8->FixedBounds).Min.field0_0x0._s_0.Z;
      *(double *)&this->field_0xf8 = dVar11;
      uVar1._4_4_ = *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 0xc);
      uVar13 = *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 0x10);
      uVar10 = *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 0x14);
      *(undefined4 *)&this->field_0x100 =
           *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 8);
      *(undefined4 *)&this->field_0x104 = uVar1._4_4_;
      *(undefined4 *)&this->field_0x108 = uVar13;
      *(undefined4 *)&this->field_0x10c = uVar10;
      uVar1._0_1_ = (pFVar8->FixedBounds).IsValid;
      uVar1._1_1_ = (pFVar8->FixedBounds).Pad[0];
      uVar1._2_1_ = (pFVar8->FixedBounds).Pad[1];
      uVar1._3_1_ = (pFVar8->FixedBounds).Pad[2];
      uVar2 = (pFVar8->FixedBounds).Pad[3];
      uVar3 = (pFVar8->FixedBounds).Pad[4];
      uVar5 = (pFVar8->FixedBounds).Pad[5];
      uVar7 = (pFVar8->FixedBounds).Pad[6];
      uVar6 = CONCAT11(uVar7,uVar5);
      uVar4 = CONCAT21(uVar6,uVar3);
      uVar1._4_4_ = CONCAT31(uVar4,uVar2);
      uVar13 = (undefined4)uVar1;
    }
    else {
      *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&this->field_0x118;
      *(undefined8 *)&this->field_0xe8 = *(undefined8 *)&this->field_0x120;
      *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&this->field_0x128;
      *(undefined8 *)&this->field_0xf8 = *(undefined8 *)&this->field_0x130;
      uVar13 = (undefined4)*(undefined8 *)&this->field_0x148;
      uVar1._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&this->field_0x148 >> 0x20);
      *(undefined4 *)&this->field_0x100 = *(undefined4 *)&this->field_0x138;
      *(undefined4 *)&this->field_0x104 = *(undefined4 *)&this->field_0x13c;
      *(undefined4 *)&this->field_0x108 = *(undefined4 *)&this->field_0x140;
      *(undefined4 *)&this->field_0x10c = *(undefined4 *)&this->field_0x144;
    }
  }
  else {
    *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&this->field_0x158;
    *(undefined8 *)&this->field_0xe8 = *(undefined8 *)&this->field_0x160;
    *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&this->field_0x168;
    *(undefined8 *)&this->field_0xf8 = *(undefined8 *)&this->field_0x170;
    uVar13 = (undefined4)*(undefined8 *)&this->field_0x188;
    uVar1._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&this->field_0x188 >> 0x20);
    *(undefined4 *)&this->field_0x100 = *(undefined4 *)&this->field_0x178;
    *(undefined4 *)&this->field_0x104 = *(undefined4 *)&this->field_0x17c;
    *(undefined4 *)&this->field_0x108 = *(undefined4 *)&this->field_0x180;
    *(undefined4 *)&this->field_0x10c = *(undefined4 *)&this->field_0x184;
  }
  *(ulonglong *)&this->field_0x110 = CONCAT44(uVar1._4_4_,uVar13);
                    /* WARNING: Could not recover jumptable at 0x000149478c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->field_0x150);
  return;
}

// CaptureForDebugging @ 149478de0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::CaptureForDebugging
          (FNiagaraStatelessEmitterInstance *this,FNiagaraDataBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  char local_res18 [16];
  code *local_38 [2];
  undefined **local_28;
  char *local_20;
  undefined8 local_10;
  
  local_res18[0] = '\0';
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res18;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,void>
                ::Call;
  EnqueueParticleDataBufferReadback(this,param_1,(TFunction<void___cdecl(void)> *)local_38);
  if (local_res18[0] == '\0') {
    FlushRenderingCommands();
    if (local_res18[0] != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsComplete == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterInstance.cpp"
                         ,0x3f6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// CropSpawnInfos @ 1494792d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::CropSpawnInfos(FNiagaraStatelessEmitterInstance *this)

{
  int *piVar1;
  TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  
  uVar8 = (this->SpawnInfos).ArrayNum;
  if ((uVar8 != 0) || ((this->ActiveSpawnRates).ArrayNum != 0)) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    DestructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>
              ((FActiveSpawnRate *)(this->ActiveSpawnRates).AllocatorInstance.Data,
               (this->ActiveSpawnRates).ArrayNum);
    piVar1 = &(this->ActiveSpawnRates).ArrayMax;
    (this->ActiveSpawnRates).ArrayNum = 0;
    if (*piVar1 != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,uVar8,&(this->ActiveSpawnRates).AllocatorInstance,0,piVar1);
    }
    fVar5 = __real_3f000000;
    pTVar2 = &this->SpawnInfos;
    for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < (this->SpawnInfos).ArrayNum));
        uVar8 = uVar8 + 1) {
      if ((int)uVar8 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      lVar10 = (longlong)(int)uVar8;
      if (*(int *)(pFVar3 + lVar10 * 0x24) == 1) {
        fVar11 = this->Age;
        if (*(float *)(pFVar3 + lVar10 * 0x24 + 0xc) <= this->Age) {
          fVar11 = *(float *)(pFVar3 + lVar10 * 0x24 + 0xc);
        }
        *(float *)(pFVar3 + lVar10 * 0x24 + 0xc) = fVar11;
        *(int *)(pFVar3 + lVar10 * 0x24 + 0x18) =
             (int)ROUND((fVar11 - *(float *)(pFVar3 + lVar10 * 0x24 + 8)) *
                        (*(float *)(pFVar3 + lVar10 * 0x24 + 0x10) +
                        *(float *)(pFVar3 + lVar10 * 0x24 + 0x10)) - fVar5) >> 1;
      }
      if ((this->Age < *(float *)(pFVar3 + lVar10 * 0x24 + 8)) ||
         (*(float *)(pFVar3 + lVar10 * 0x24 + 0x20) + *(float *)(pFVar3 + lVar10 * 0x24 + 0xc) <=
          this->Age)) {
        uVar7 = 0;
        if ((int)uVar8 < (this->SpawnInfos).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x24;
        iVar9 = (this->SpawnInfos).ArrayNum + ~uVar8;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + 0x24,(longlong)iVar9 * 0x24);
        }
        iVar9 = (this->SpawnInfos).ArrayNum + -1;
        (this->SpawnInfos).ArrayNum = iVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,&pTVar2->AllocatorInstance,iVar9,&(this->SpawnInfos).ArrayMax);
        uVar8 = uVar8 - 1;
      }
    }
    this->bSpawnInfosDirty = 1;
  }
  return;
}

// EnqueueParticleDataBufferReadback @ 149479610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback
          (FNiagaraStatelessEmitterInstance *this,FNiagaraDataBuffer *param_1,
          TFunction<void___cdecl(void)> *param_2)

{
  FNiagaraDataBuffer *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined8 uVar4;
  code **ppcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStackY_118 [32];
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  FEmitterInstance_RT *local_b8;
  FNiagaraDataBuffer *local_b0;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterInstance.cpp"
                       ,0x3c9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FNiagaraDataBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterInstance.cpp"
                       ,0x3ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->NumInstances = 0;
  if (((this->bCanEverExecute == 0) || (*(int *)&this->field_0xd4 == 3)) ||
     (*(int *)&this->field_0xd4 == 4)) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar1 = *(code **)param_2;
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(uVar4);
  }
  else if (this->field_0xd1 == '\0') {
    this_00 = *(FNiagaraDataBuffer **)(*(longlong *)&this->field_0x10 + 0x78);
    if (this_00 != (FNiagaraDataBuffer *)0x0) {
      FNiagaraDataBuffer::CopyTo(this_00,param_1,0,0,-1);
    }
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
    operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                *)param_2);
  }
  else {
    local_b8 = (this->RenderThreadDataPtr).Ptr;
    local_a8 = *(code **)param_2;
    local_80 = *(code ***)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88 = *(code **)&param_2->field_0x20;
    local_98 = *(code **)&param_2->field_0x10;
    pcStack_90 = *(code **)&param_2->field_0x18;
    if (local_a8 != (code *)0x0) {
      *(undefined8 *)param_2 = 0;
    }
    local_e8[0] = (code *)0x0;
    local_b0 = param_1;
    local_c0 = FMemory::Malloc(0x50,0x10);
    *local_c0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::`27'::<lambda_1>,1,1>
                         ::_vftable_;
    local_c0[2] = (code *)local_b8;
    local_c0[3] = (code *)local_b0;
    local_c0[4] = local_a8;
    local_c0[9] = (code *)local_80;
    local_80 = (code **)0x0;
    local_c0[6] = local_98;
    local_c0[7] = pcStack_90;
    local_c0[8] = local_88;
    if (local_c0[4] != (code *)0x0) {
      local_a8 = (code *)0x0;
    }
    if (local_c0 + 2 != (code **)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback_::__l27::TSTR_CaptureStatelessForDebugging992>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_e8[0];
      local_50 = local_c0;
      local_c0 = (code **)0x0;
      local_78._16_8_ = local_d8[0];
      local_78._24_8_ = local_d8[1];
      local_78._32_8_ = local_d8[2];
      local_e8[0] = (code *)0x0;
      local_48 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::TSTR_CaptureStatelessForDebugging992>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar3);
      uVar7 = (ulonglong)local_48;
      if (2 < uVar7) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar5 = local_50;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_78);
      }
    }
    if (local_e8[0] != (code *)0x0) {
      ppcVar5 = local_e8 + 2;
      if (local_c0 != (code **)0x0) {
        ppcVar5 = local_c0;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_a8 != (code *)0x0) {
      ppcVar5 = &local_98;
      if (local_80 != (code **)0x0) {
        ppcVar5 = local_80;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// GetGpuCountBufferEstimate @ 14947ade0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

uint __thiscall
FNiagaraStatelessEmitterInstance::GetGpuCountBufferEstimate(FNiagaraStatelessEmitterInstance *this)

{
  return 1;
}

// GetNumParticles @ 14947adf0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

int __thiscall
FNiagaraStatelessEmitterInstance::GetNumParticles(FNiagaraStatelessEmitterInstance *this)

{
  FNiagaraStatelessRuntimeSpawnInfo *pFVar1;
  FNiagaraStatelessEmitterData *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float local_res8;
  undefined1 local_resc;
  undefined4 uStack_1c;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_18;
  
  if ((this->bCanEverExecute != 0) && (0 < (this->SpawnInfos).ArrayNum)) {
    if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    local_res8 = this->Age;
    pFVar1 = (FNiagaraStatelessRuntimeSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data;
    iVar4 = (this->SpawnInfos).ArrayNum;
    this_00 = (this->EmitterData).Object;
    local_resc = 1;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar4;
    local_18.DataPtr = pFVar1;
    uVar5 = FNiagaraStatelessEmitterData::CalculateActiveParticles
                      (this_00,this->RandomSeed,&local_18,(TOptional<float>)&local_res8,
                       (FSpawnInfoShaderParameters *)0x0);
    return uVar5;
  }
  return 0;
}

// GetRenderers @ 14947b1e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TArrayView<UNiagaraRendererProperties_*_const,int> * __thiscall
FNiagaraStatelessEmitterInstance::GetRenderers
          (FNiagaraStatelessEmitterInstance *this,
          TArrayView<UNiagaraRendererProperties_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  FNiagaraStatelessEmitterData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<UNiagaraRendererProperties_*_const,int> *pTVar6;
  undefined4 uStack_1c;
  uint uStack_c;
  
  pFVar2 = (this->EmitterData).Object;
  if (pFVar2 == (FNiagaraStatelessEmitterData *)0x0) {
    __return_storage_ptr__->DataPtr = (UNiagaraRendererProperties **)0x0;
    *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)uStack_c << 0x20;
    return __return_storage_ptr__;
  }
  pFVar3 = (pFVar2->RendererProperties).AllocatorInstance.Data;
  iVar1 = (pFVar2->RendererProperties).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<UNiagaraRendererProperties_*_const,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->DataPtr = (UNiagaraRendererProperties **)pFVar3;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_1c,iVar1);
  return __return_storage_ptr__;
}

// HandleCompletion @ 14947b6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
FNiagaraStatelessEmitterInstance::HandleCompletion
          (FNiagaraStatelessEmitterInstance *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FEmitterInstance_RT *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FEmitterInstance_RT *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((*(int *)&this->field_0xd4 != 3) && (*(int *)&this->field_0xd4 != 4)) {
    if (!param_1) {
      return false;
    }
    pFStack_70 = (this->RenderThreadDataPtr).Ptr;
    this->InternalExecutionState = Complete;
    *(undefined4 *)&this->field_0xd4 = 3;
    if (pFStack_70 != (FEmitterInstance_RT *)0x0) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::HandleCompletion_::__l8::TSTR_CompleteStatelessEmitter266>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::TSTR_CompleteStatelessEmitter266>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if ((2 < uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
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
  }
  return true;
}

// Init @ 14947b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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
FNiagaraStatelessEmitterInstance::Init(FNiagaraStatelessEmitterInstance *this,int param_1)

{
  uint uVar1;
  FNiagaraStatelessEmitterData *pFVar2;
  FNiagaraDataSet *this_00;
  longlong lVar3;
  FCommonShaderParameters *pFVar4;
  FEmitterInstance_RT *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  UNiagaraStatelessEmitter *pUVar9;
  FCommonShaderParameters *pFVar10;
  FEmitterInstance_RT *pFVar11;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  undefined1 auStack_108 [32];
  LARGE_INTEGER local_e8;
  FNiagaraStatelessEmitterData *local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FEmitterInstance_RT *pFStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  undefined1 local_98 [16];
  undefined **local_88;
  FEmitterInstance_RT *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  byte local_68;
  __m128 local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FNiagaraEmitterInstance::Init((FNiagaraEmitterInstance *)this,param_1);
  InitEmitterData(this);
  if (this->bCanEverExecute == 0) {
    this->InternalExecutionState = Disabled;
    *(undefined4 *)&this->field_0xd4 = 4;
  }
  else {
    if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar2 = (this->EmitterData).Object;
    this->RandomSeed = *(int *)(*(longlong *)&this->field_0x8 + 0x100) + pFVar2->RandomSeed;
    if (pFVar2 == (FNiagaraStatelessEmitterData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (((this->EmitterData).Object)->bDeterministic == false) {
      QueryPerformanceCounter(&local_e8);
      this->RandomSeed = this->RandomSeed ^ local_e8.s.LowPart;
    }
    uVar1 = this->RandomSeed;
    this_00 = *(FNiagaraDataSet **)&this->field_0x10;
    (this->RandomStream).InitialSeed = uVar1;
    (this->RandomStream).Seed = uVar1;
    if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FNiagaraDataSet::Init
              (this_00,(((this->EmitterData).Object)->ParticleDataSetCompiledData).Object,0);
    if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FNiagaraParameterStore::operator=
              ((FNiagaraParameterStore *)&this->field_0x40,
               &((this->EmitterData).Object)->RendererBindings);
    lVar3 = *(longlong *)&this->field_0x8;
    local_58.m128_f32[2] = (float)*(double *)(lVar3 + 0x80);
    local_58.m128_f32[3] = (float)*(double *)(lVar3 + 0x88);
    local_58.m128_f32[0] = (float)*(double *)(lVar3 + 0x70);
    local_58.m128_f32[1] = (float)*(double *)(lVar3 + 0x78);
    fStack_40 = (float)*(double *)(lVar3 + 0xa0);
    fStack_3c = (float)*(double *)(lVar3 + 0xa8);
    local_48 = (float)*(double *)(lVar3 + 0x90);
    fStack_44 = (float)*(double *)(lVar3 + 0x98);
    local_38 = (float)*(double *)(lVar3 + 0xb0);
    fStack_34 = (float)*(double *)(lVar3 + 0xb8);
    fStack_30 = (float)*(double *)(lVar3 + 0xc0);
    fStack_2c = (float)*(double *)(lVar3 + 200);
    FNiagaraStatelessSpaceTransforms::InitializeTransforms
              (&this->EmitterTransforms,(bool)(this->field_0xd0 & 1),(TTransform<float> *)&local_58)
    ;
    if (this->field_0xd1 == '\0') {
      pUVar9 = (UNiagaraStatelessEmitter *)
               FWeakObjectPtr::Get(&(this->WeakStatelessEmitter).WeakPtr);
      pFVar10 = UNiagaraStatelessEmitter::AllocateShaderParameters
                          (pUVar9,&this->EmitterTransforms,
                           (FNiagaraParameterStore *)&this->field_0x40);
      pFVar4 = (this->ShaderParameters).Ptr;
      if (pFVar4 != pFVar10) {
        (this->ShaderParameters).Ptr = pFVar10;
        FMemory::Free(pFVar4);
      }
      ((this->ShaderParameters).Ptr)->Common_RandomSeed = this->RandomSeed;
      NiagaraStatelessEmitterInstancePrivate::SetShaderParameterTransforms
                (&this->EmitterTransforms,(this->ShaderParameters).Ptr);
    }
    else {
      pFVar11 = ::operator_new(0x78);
      if (pFVar11 == (FEmitterInstance_RT *)0x0) {
        pFVar11 = (FEmitterInstance_RT *)0x0;
      }
      else {
        *(undefined4 *)&pFVar11->field_0x49 = 0;
        *(undefined2 *)&pFVar11->field_0x4d = 0;
        pFVar11->field_0x4f = 0;
        *(undefined8 *)&(pFVar11->BindingBuffer).NumBytes = 0;
        pFVar11->_padding_ = (longlong)&___7FEmitterInstance_RT_NiagaraStateless__6B_;
        pFVar11->ComputeManager = (FNiagaraStatelessComputeManager *)0x0;
        (pFVar11->EmitterData).Object = (FNiagaraStatelessEmitterData *)0x0;
        (pFVar11->EmitterData).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar11->RandomSeed = 0;
        pFVar11->Age = 0.0;
        pFVar11->DeltaTime = 0.0;
        pFVar11->ExecutionState = Active;
        (pFVar11->SpawnInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->SpawnInfos).ArrayNum = 0;
        (pFVar11->SpawnInfos).ArrayMax = 0;
        (pFVar11->ShaderParameters).Ptr = (FCommonShaderParameters *)0x0;
        pFVar11->bBindingBufferDirty = true;
        (pFVar11->BindingBufferData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->BindingBufferData).ArrayNum = 0;
        (pFVar11->BindingBufferData).ArrayMax = 0;
        (pFVar11->BindingBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
        (pFVar11->BindingBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      }
      pFVar5 = (this->RenderThreadDataPtr).Ptr;
      if ((pFVar5 != pFVar11) &&
         ((this->RenderThreadDataPtr).Ptr = pFVar11, pFVar5 != (FEmitterInstance_RT *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
      pTVar6 = (this->EmitterData).SharedReferenceCount.ReferenceController;
      pFVar11 = (this->RenderThreadDataPtr).Ptr;
      pFVar2 = (this->EmitterData).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e0 = (pFVar11->EmitterData).Object;
      pTStack_d8 = (pFVar11->EmitterData).SharedReferenceCount.ReferenceController;
      (pFVar11->EmitterData).Object = pFVar2;
      (pFVar11->EmitterData).SharedReferenceCount.ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d8);
      ((this->RenderThreadDataPtr).Ptr)->RandomSeed = this->RandomSeed;
      ((this->RenderThreadDataPtr).Ptr)->Age = 0.0;
      ((this->RenderThreadDataPtr).Ptr)->DeltaTime = 0.0;
      ((this->RenderThreadDataPtr).Ptr)->ExecutionState = Active;
      pFVar11 = (this->RenderThreadDataPtr).Ptr;
      pUVar9 = (UNiagaraStatelessEmitter *)
               FWeakObjectPtr::Get(&(this->WeakStatelessEmitter).WeakPtr);
      pFVar10 = UNiagaraStatelessEmitter::AllocateShaderParameters
                          (pUVar9,&this->EmitterTransforms,
                           (FNiagaraParameterStore *)&this->field_0x40);
      pFVar4 = (pFVar11->ShaderParameters).Ptr;
      if (pFVar4 != pFVar10) {
        (pFVar11->ShaderParameters).Ptr = pFVar10;
        FMemory::Free(pFVar4);
      }
      ((((this->RenderThreadDataPtr).Ptr)->ShaderParameters).Ptr)->Common_RandomSeed =
           this->RandomSeed;
      NiagaraStatelessEmitterInstancePrivate::SetShaderParameterTransforms
                (&this->EmitterTransforms,(((this->RenderThreadDataPtr).Ptr)->ShaderParameters).Ptr)
      ;
      local_a8 = *(undefined8 *)(*(longlong *)&this->field_0x8 + 0x920);
      local_b8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::`13'::<lambda_1>,1,0>
                  ::_vftable_;
      pFStack_b0 = (this->RenderThreadDataPtr).Ptr;
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_a0 = (undefined ***)0x0;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::Init_::__l13::TSTR_FInitStatelessEmitter170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_98._0_8_ = local_c8[0];
        local_70 = local_a0;
        local_88 = local_b8;
        pFStack_80 = pFStack_b0;
        local_78 = local_a8;
        local_c8[0] = (code *)0x0;
        local_68 = 2;
        pFVar12 = (FRenderCommandTag *)
                  TRenderCommandTag<`FNiagaraStatelessEmitterInstance::Init'::__l13::TSTR_FInitStatelessEmitter170>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_98,pFVar12);
        uVar14 = (ulonglong)local_68;
        if (2 < uVar14) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_98._0_8_ != (code *)0x0) {
            pppuVar13 = (undefined ***)(local_98 + 0x10);
            if (local_70 != (undefined ***)0x0) {
              pppuVar13 = local_70;
            }
            (*(code *)(*pppuVar13)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_98);
        }
      }
      if (local_c8[0] != (code *)0x0) {
        pppuVar13 = &local_b8;
        if (local_a0 != (undefined ***)0x0) {
          pppuVar13 = local_a0;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      *(FEmitterInstance_RT **)&this->field_0x20 = (this->RenderThreadDataPtr).Ptr;
    }
    this->bNeedsEmitterStateInit = 1;
  }
  return;
}

// InitEmitterData @ 14947bfc0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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
FNiagaraStatelessEmitterInstance::InitEmitterData(FNiagaraStatelessEmitterInstance *this)

{
  TSharedPtr<FNiagaraStatelessEmitterData_const_,1> *pTVar1;
  TObjectPtr<UNiagaraStatelessEmitter>_u_0 TVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  bool bVar4;
  FNiagaraEmitterHandle *this_00;
  FNiagaraEmitterHandle *pFVar5;
  uint uVar6;
  TObjectPtr<UNiagaraStatelessEmitter>_u_0 local_res8;
  undefined8 local_res10;
  FNiagaraStatelessEmitterData *local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  this->bCanEverExecute = 0;
  pTVar1 = &this->EmitterData;
  uVar6 = 0;
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FNiagaraStatelessEmitterData_const_,1> *)&local_48) {
    pTVar1->Object = (FNiagaraStatelessEmitterData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EmitterData).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  local_res8.DebugPtr = (UNiagaraStatelessEmitter *)0x0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.ObjectPtr,(FObjectPtr)&local_res10);
  (this->WeakStatelessEmitter).WeakPtr = (FWeakObjectPtr)local_res8;
  this_00 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
  pFVar5 = FNiagaraEmitterInstance::GetEmitterHandle((FNiagaraEmitterInstance *)this);
  TVar2 = (TObjectPtr<UNiagaraStatelessEmitter>_u_0)(pFVar5->StatelessEmitter).field0_0x0.DebugPtr;
  local_res8 = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (TVar2.DebugPtr == (UNiagaraStatelessEmitter *)0x0)) {
    FWeakObjectPtr::operator=(&(this->WeakStatelessEmitter).WeakPtr,(FObjectPtr)&local_res8);
    if (TVar2.DebugPtr == (UNiagaraStatelessEmitter *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    FWeakObjectPtr::operator=(&(this->WeakStatelessEmitter).WeakPtr,(FObjectPtr)&local_res8);
  }
  local_50.ReferenceController =
       ((TVar2.DebugPtr)->StatelessEmitterData).SharedReferenceCount.ReferenceController;
  local_58 = ((TVar2.DebugPtr)->StatelessEmitterData).Object;
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FNiagaraStatelessEmitterData_const_,1> *)&local_58) {
    pTVar1->Object = local_58;
    local_58 = (FNiagaraStatelessEmitterData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EmitterData).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  pFVar3 = (this->EmitterData).Object;
  if (pFVar3 == (FNiagaraStatelessEmitterData *)0x0) {
    this->bCanEverExecute = 0;
  }
  else {
    this->field_0xd1 = pFVar3->SimTarget;
    if ((((this->EmitterData).Object)->bCanEverExecute != false) &&
       (bVar4 = FNiagaraEmitterHandle::GetIsEnabled(this_00), bVar4)) {
      uVar6 = 1;
    }
    this->bCanEverExecute = uVar6;
  }
  return;
}

// InitEmitterState @ 14947c180

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::InitEmitterState(FNiagaraStatelessEmitterInstance *this)

{
  FNiagaraStatelessEmitterData *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->EmitterData).Object;
  this->LoopCount = 0;
  this->CurrentLoopDelay = 0.0;
  if ((pFVar1->EmitterState).bLoopDelayEnabled != 0) {
    fVar4 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                      (&(pFVar1->EmitterState).LoopDelay,&this->RandomStream,
                       (FNiagaraParameterStore *)&this->field_0x40,0.0);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    this->CurrentLoopDelay = fVar4;
  }
  this->CurrentLoopAgeStart = 0.0;
  fVar5 = __real_7f7fffff;
  fVar4 = __real_3a83126f;
  if (((pFVar1->EmitterState).LoopBehavior == Once) &&
     ((pFVar1->EmitterState).LoopDurationMode == Infinite)) {
    this->CurrentLoopDuration = __real_7f7fffff;
    this->CurrentLoopAgeEnd = fVar5;
  }
  else {
    fVar5 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                      (&(pFVar1->EmitterState).LoopDuration,&this->RandomStream,
                       (FNiagaraParameterStore *)&this->field_0x40,__real_3a83126f);
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    this->CurrentLoopDuration = fVar5;
    this->CurrentLoopAgeEnd = this->CurrentLoopDelay + this->CurrentLoopAgeStart + fVar5;
  }
  return;
}

// InitSpawnInfos @ 14947c7d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::InitSpawnInfos
          (FNiagaraStatelessEmitterInstance *this,float param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  FNiagaraDistributionRangeFloat *this_00;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  if ((this->bEmitterEnabled_GT != 0) && (this->ScalabilityState == Awaken)) {
    if ((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->EmitterData).Object;
    pFVar10 = (pFVar3->SpawnInfos).AllocatorInstance.Data;
    iVar2 = (pFVar3->SpawnInfos).ArrayNum;
    pFVar11 = pFVar10 + 0x71;
    pFVar12 = pFVar10 + (longlong)iVar2 * 0xc0;
    while( true ) {
      if ((pFVar3->SpawnInfos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraStatelessSpawnInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar12) break;
      if (*(int *)pFVar10 == 1) {
        iVar7 = (this->ActiveSpawnRates).ArrayNum;
        piVar1 = &(this->ActiveSpawnRates).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,&(this->ActiveSpawnRates).AllocatorInstance,piVar1);
        }
        pFVar4 = (this->ActiveSpawnRates).AllocatorInstance.Data;
        (this->ActiveSpawnRates).ArrayNum = iVar7 + 1;
        this_00 = (FNiagaraDistributionRangeFloat *)(pFVar4 + (longlong)iVar7 * 0x70);
        DefaultConstructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>(this_00,1);
        FNiagaraDistributionRangeFloat::operator=
                  (this_00,(FNiagaraDistributionRangeFloat *)(pFVar11 + -0x41));
        if ((((byte)pFVar11[-0x11] & 2) != 0) &&
           (plVar9 = &this_00[1]._padding_, pFVar11 + -9 != (FScriptContainerElement *)plVar9)) {
          if ((char)this_00[2]._padding_ != '\0') {
            FInstancedStruct::Reset((FInstancedStruct *)&this_00[1]._padding_);
          }
          bVar8 = *(byte *)((longlong)&this_00[1]._padding_ + 1);
          *plVar9 = (longlong)&___7FNiagaraDistributionBase__6B_;
          *(FScriptContainerElement *)&this_00[1]._padding_ = pFVar11[-1];
          bVar8 = (bVar8 ^ (byte)*pFVar11) & 1 ^ *(byte *)((longlong)&this_00[1]._padding_ + 1);
          *(byte *)((longlong)&this_00[1]._padding_ + 1) = bVar8;
          *(byte *)((longlong)&this_00[1]._padding_ + 1) = (bVar8 ^ (byte)*pFVar11) & 2 ^ bVar8;
          *(FScriptContainerElement *)((longlong)&this_00[1]._padding_ + 2) = pFVar11[1];
          *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = *(undefined8 *)(pFVar11 + 3);
          *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = *(undefined4 *)(pFVar11 + 0xb);
          this_00[1]._padding_ = 0;
          this_00[1].Min = 0.0;
          this_00[1].Max = 0.0;
          FInstancedStruct::InitializeAs
                    ((FInstancedStruct *)&this_00[1]._padding_,*(UScriptStruct **)(pFVar11 + 0xf),
                     *(uchar **)(pFVar11 + 0x17));
          *plVar9 = (longlong)&___7FNiagaraDistributionRangeFloat__6B_;
          *(undefined4 *)&this_00[2]._padding_ = *(undefined4 *)(pFVar11 + 0x1f);
          *(undefined4 *)((longlong)&this_00[2]._padding_ + 4) = *(undefined4 *)(pFVar11 + 0x23);
          *(undefined1 *)&this_00[2]._padding_ = 1;
        }
      }
      pFVar10 = pFVar10 + 0xc0;
      pFVar11 = pFVar11 + 0xc0;
    }
    InitSpawnInfosForLoop(this,param_1);
  }
  return;
}

// InitSpawnInfosForLoop @ 14947c9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::InitSpawnInfosForLoop
          (FNiagaraStatelessEmitterInstance *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNiagaraStatelessEmitterData *pFVar4;
  FNiagaraStatelessEmitterData *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FNiagaraDistributionRangeFloat *pFVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FNiagaraDistributionRangeFloat *pFVar18;
  float fVar19;
  float fVar20;
  undefined1 extraout_var [12];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 local_res8 [8];
  float local_res10;
  undefined1 local_res18 [8];
  
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  fVar23 = __real_322bcc77;
  if ((this->bEmitterEnabled_GT != 0) && (this->ScalabilityState == Awaken)) {
    pFVar14 = (FNiagaraDistributionRangeFloat *)(this->ActiveSpawnRates).AllocatorInstance.Data;
    iVar3 = (this->ActiveSpawnRates).ArrayNum;
    pFVar18 = (FNiagaraDistributionRangeFloat *)((longlong)pFVar14 + (longlong)iVar3 * 0x70);
    local_res10 = param_1;
    while( true ) {
      if ((this->ActiveSpawnRates).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar18) break;
      fVar19 = fVar8;
      if ((char)pFVar14[2]._padding_ == '\0') {
LAB_14947cb0c:
        if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->EmitterData).Object;
        fVar20 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                           (pFVar14,&this->RandomStream,(FNiagaraParameterStore *)&this->field_0x40,
                            0.0);
        fVar20 = fVar20 * pFVar4->SpawnCountScale;
        if (0.0 < fVar20) {
          if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->EmitterData).Object;
          iVar15 = (pFVar4->LifetimeRange).ParameterOffset;
          if (iVar15 == -1) {
            fVar22 = (pFVar4->LifetimeRange).Min;
            fVar24 = (pFVar4->LifetimeRange).Max;
          }
          else {
            iVar15 = iVar15 * 4;
            if (((iVar15 < 0) ||
                ((ulonglong)(longlong)*(int *)&this->field_0x68 < (longlong)iVar15 + 4U)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x17f,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar22 = *(float *)((longlong)iVar15 + *(longlong *)&this->field_0x60);
            fVar24 = fVar22;
          }
          if ((0.0 < fVar22) || (0.0 < fVar24)) {
            fVar25 = this->CurrentLoopAgeEnd;
            fVar26 = (param_1 + this->CurrentLoopDelay) - *(float *)&pFVar14[1]._padding_;
            if (fVar25 <= fVar26) {
              fVar26 = fVar25;
            }
            iVar15 = (int)ROUND((fVar20 + fVar20) * (fVar25 - fVar26) - __real_3f000000) >> 1;
            fVar25 = (float)iVar15 / fVar20 + fVar26;
            if (0 < iVar15) {
              iVar11 = (this->SpawnInfos).ArrayNum;
              if (iVar11 < 1) {
LAB_14947cd5d:
                iVar11 = (this->SpawnInfos).ArrayNum;
                piVar1 = &(this->SpawnInfos).ArrayMax;
                if (iVar11 == *piVar1) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x424,&(this->SpawnInfos).AllocatorInstance,piVar1);
                }
                (this->SpawnInfos).ArrayNum = iVar11 + 1;
                pFVar16 = (this->SpawnInfos).AllocatorInstance.Data + (longlong)iVar11 * 0x24;
                DefaultConstructItems<FNiagaraStatelessRuntimeSpawnInfo,int>(pFVar16,1);
                *(undefined4 *)pFVar16 = 1;
                uVar10 = this->UniqueIndexOffset;
                *(float *)(pFVar16 + 8) = fVar26;
                *(float *)(pFVar16 + 0xc) = fVar25;
                *(float *)(pFVar16 + 0x10) = fVar20;
                *(float *)(pFVar16 + 0x14) = fVar19;
                *(float *)(pFVar16 + 0x1c) = fVar22;
                *(float *)(pFVar16 + 0x20) = fVar24;
                *(uint *)(pFVar16 + 4) = uVar10;
                *(int *)(pFVar16 + 0x18) = iVar15;
              }
              else {
                uVar10 = 0;
                if ((int)(iVar11 - 1U) < iVar11) {
                  uVar10 = ~(iVar11 - 1U) >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar13 = (longlong)(this->SpawnInfos).ArrayNum;
                pFVar16 = (this->SpawnInfos).AllocatorInstance.Data;
                if (((((*(int *)(pFVar16 + lVar13 * 0x24 + -0x24) != 1) ||
                      (fVar20 != *(float *)(pFVar16 + lVar13 * 0x24 + -0x14))) ||
                     (fVar26 != *(float *)(pFVar16 + lVar13 * 0x24 + -0x18))) ||
                    ((fVar23 < (float)((uint)(*(float *)(pFVar16 + lVar13 * 0x24 + -0x10) - fVar19)
                                      & uVar12) ||
                     (fVar23 < (float)((uint)(*(float *)(pFVar16 + lVar13 * 0x24 + -8) - fVar22) &
                                      uVar12))))) ||
                   ((fVar23 < (float)((uint)(*(float *)(pFVar16 + lVar13 * 0x24 + -4) - fVar24) &
                                     uVar12) ||
                    (*(int *)(pFVar16 + lVar13 * 0x24 + -0x20) +
                     *(int *)(pFVar16 + lVar13 * 0x24 + -0xc) != this->UniqueIndexOffset))))
                goto LAB_14947cd5d;
                *(float *)(pFVar16 + lVar13 * 0x24 + -0x18) = fVar25;
                *(int *)(pFVar16 + lVar13 * 0x24 + -0xc) =
                     *(int *)(pFVar16 + lVar13 * 0x24 + -0xc) + iVar15;
              }
              this->UniqueIndexOffset = this->UniqueIndexOffset + iVar15;
              this->bSpawnInfosDirty = 1;
            }
            *(float *)&pFVar14[1]._padding_ = this->CurrentLoopAgeEnd - fVar25;
            param_1 = local_res10;
          }
        }
      }
      else {
        fVar19 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                           ((FNiagaraDistributionRangeFloat *)&pFVar14[1]._padding_,
                            &this->RandomStream,(FNiagaraParameterStore *)&this->field_0x40,0.0);
        if (fVar8 <= fVar19) {
          fVar19 = fVar8;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        if (fVar23 < (float)((uint)fVar19 & uVar12)) goto LAB_14947cb0c;
      }
      pFVar14 = (FNiagaraDistributionRangeFloat *)&pFVar14[2]._padding_;
    }
    if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->EmitterData).Object;
    iVar3 = (pFVar4->SpawnInfos).ArrayNum;
    pFVar16 = (pFVar4->SpawnInfos).AllocatorInstance.Data;
    pFVar17 = pFVar16 + (longlong)iVar3 * 0xc0;
    fVar23 = __real_3f000000;
    while( true ) {
      if ((pFVar4->SpawnInfos).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraStatelessSpawnInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar17) break;
      iVar15 = *(int *)pFVar16;
      if ((iVar15 != 1) && (((byte)pFVar16[0x60] & 1) != 0)) {
        if (iVar15 == 0) {
          if (((0 < *(int *)(pFVar16 + 0x2c) + *(int *)(pFVar16 + 0x28)) &&
              (0.0 <= *(float *)(pFVar16 + 4))) &&
             (*(float *)(pFVar16 + 4) < this->CurrentLoopDuration)) {
LAB_14947cf40:
            if ((((byte)pFVar16[0x60] & 4) == 0) ||
               (iVar15 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                                   ((FNiagaraDistributionRangeInt *)(pFVar16 + 0x98),
                                    &this->RandomStream,(FNiagaraParameterStore *)&this->field_0x40,
                                    1), this->LoopCount < iVar15)) {
              if (((byte)pFVar16[0x60] & 2) != 0) {
                fVar19 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                                   ((FNiagaraDistributionRangeFloat *)(pFVar16 + 0x68),
                                    &this->RandomStream,(FNiagaraParameterStore *)&this->field_0x40,
                                    0.0);
                auVar21._4_4_ = extraout_var._0_4_;
                auVar21._0_4_ = fVar19;
                auVar21._8_4_ = extraout_var._4_4_;
                auVar21._12_4_ = extraout_var._8_4_;
                if (fVar8 <= fVar19) {
                  auVar21._0_4_ = fVar8;
                }
                uVar12 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                (this->RandomStream).Seed = uVar12;
                if (auVar21._0_4_ <= 0.0) {
                  auVar7._12_4_ = 0;
                  auVar7._0_12_ = auVar21._4_12_;
                  auVar21 = auVar7 << 0x20;
                }
                if (auVar21._0_4_ < (float)(uVar12 >> 9 | 0x3f800000) - fVar8) goto LAB_14947d191;
              }
              iVar15 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                                 ((FNiagaraDistributionRangeInt *)(pFVar16 + 8),&this->RandomStream,
                                  (FNiagaraParameterStore *)&this->field_0x40,0);
              if (0 < iVar15) {
                if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = (this->EmitterData).Object;
                iVar11 = (int)ROUND(((float)iVar15 + (float)iVar15) * pFVar5->SpawnCountScale -
                                    fVar23) >> 1;
                iVar15 = 1;
                if (1 < iVar11) {
                  iVar15 = iVar11;
                }
                if ((0 < iVar15) &&
                   (fVar19 = this->CurrentLoopAgeStart + this->CurrentLoopDelay +
                             *(float *)(pFVar16 + 4), fVar23 = __real_3f000000, param_1 <= fVar19))
                {
                  if ((pFVar5 == (FNiagaraStatelessEmitterData *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar5 = (this->EmitterData).Object;
                  iVar11 = (pFVar5->LifetimeRange).ParameterOffset;
                  if (iVar11 == -1) {
                    fVar20 = (pFVar5->LifetimeRange).Min;
                    fVar22 = (pFVar5->LifetimeRange).Max;
                  }
                  else {
                    iVar11 = iVar11 * 4;
                    if (((iVar11 < 0) ||
                        ((ulonglong)(longlong)*(int *)&this->field_0x68 < (longlong)iVar11 + 4U)) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                           ,0x17f,L""), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    fVar20 = *(float *)((longlong)iVar11 + *(longlong *)&this->field_0x60);
                    fVar22 = fVar20;
                  }
                  if ((0.0 < fVar20) || (fVar23 = __real_3f000000, 0.0 < fVar22)) {
                    iVar11 = (this->SpawnInfos).ArrayNum;
                    piVar1 = &(this->SpawnInfos).ArrayMax;
                    if (iVar11 == *piVar1) {
                      iVar11 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x424,&(this->SpawnInfos).AllocatorInstance,piVar1);
                    }
                    (this->SpawnInfos).ArrayNum = iVar11 + 1;
                    pFVar2 = (this->SpawnInfos).AllocatorInstance.Data + (longlong)iVar11 * 0x24;
                    DefaultConstructItems<FNiagaraStatelessRuntimeSpawnInfo,int>(pFVar2,1);
                    *(undefined4 *)pFVar2 = 0;
                    uVar12 = this->UniqueIndexOffset;
                    *(float *)(pFVar2 + 8) = fVar19;
                    *(float *)(pFVar2 + 0xc) = fVar19;
                    *(float *)(pFVar2 + 0x1c) = fVar20;
                    *(float *)(pFVar2 + 0x20) = fVar22;
                    *(uint *)(pFVar2 + 4) = uVar12;
                    *(int *)(pFVar2 + 0x18) = iVar15;
                    this->UniqueIndexOffset = this->UniqueIndexOffset + iVar15;
                    this->bSpawnInfosDirty = 1;
                    fVar23 = __real_3f000000;
                  }
                }
              }
            }
          }
        }
        else if (iVar15 == 1) {
          if (0.0 < *(float *)(pFVar16 + 0x5c) + *(float *)(pFVar16 + 0x58)) goto LAB_14947cf40;
        }
        else {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessSpawnInfo.cpp"
                             ,0x14,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
LAB_14947d191:
      pFVar16 = pFVar16 + 0xc0;
    }
  }
  return;
}

// KillSpawnInfos @ 14947d4f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::KillSpawnInfos(FNiagaraStatelessEmitterInstance *this)

{
  int *piVar1;
  
  if (((this->SpawnInfos).ArrayNum != 0) || ((this->ActiveSpawnRates).ArrayNum != 0)) {
    piVar1 = &(this->SpawnInfos).ArrayMax;
    (this->SpawnInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,&(this->SpawnInfos).AllocatorInstance,0,piVar1);
    }
    DestructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>
              ((FActiveSpawnRate *)(this->ActiveSpawnRates).AllocatorInstance.Data,
               (this->ActiveSpawnRates).ArrayNum);
    piVar1 = &(this->ActiveSpawnRates).ArrayMax;
    (this->ActiveSpawnRates).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,&(this->ActiveSpawnRates).AllocatorInstance,0,piVar1);
    }
    this->bSpawnInfosDirty = 1;
  }
  return;
}

// OnPooledReuse @ 14947d700

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::OnPooledReuse(FNiagaraStatelessEmitterInstance *this)

{
  return;
}

// ResetSimulation @ 14947e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::ResetSimulation
          (FNiagaraStatelessEmitterInstance *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  FCommonShaderParameters *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  uint uVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  LARGE_INTEGER local_c0 [3];
  code *local_a8 [2];
  undefined **local_98;
  FEmitterInstance_RT *pFStack_90;
  int local_88;
  undefined4 uStack_84;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FEmitterInstance_RT *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->bCanEverExecute != 0) {
    if (param_1) {
      piVar1 = &(this->SpawnInfos).ArrayMax;
      (this->SpawnInfos).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,0,&(this->SpawnInfos).AllocatorInstance,0,piVar1);
      }
      this->UniqueIndexOffset = 0;
      if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->EmitterData).Object)->bDeterministic == false) {
        QueryPerformanceCounter(local_c0);
        this->RandomSeed = this->RandomSeed ^ local_c0[0].s.LowPart;
      }
    }
    else {
      pFVar12 = (this->SpawnInfos).AllocatorInstance.Data;
      iVar3 = (this->SpawnInfos).ArrayNum;
      pFVar2 = pFVar12 + (longlong)iVar3 * 0x24;
      while( true ) {
        if ((this->SpawnInfos).ArrayNum != iVar3) {
          local_c8[0] = 0;
          `TCheckedPointerIterator<FNiagaraStatelessRuntimeSpawnInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_c8);
        }
        if (pFVar12 == pFVar2) break;
        *(float *)(pFVar12 + 8) = *(float *)(pFVar12 + 8) - this->Age;
        *(float *)(pFVar12 + 0xc) = *(float *)(pFVar12 + 0xc) - this->Age;
        pFVar12 = pFVar12 + 0x24;
      }
    }
    DestructItems<FNiagaraStatelessEmitterInstance::FActiveSpawnRate,int>
              ((FActiveSpawnRate *)(this->ActiveSpawnRates).AllocatorInstance.Data,
               (this->ActiveSpawnRates).ArrayNum);
    piVar1 = &(this->ActiveSpawnRates).ArrayMax;
    (this->ActiveSpawnRates).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,&(this->ActiveSpawnRates).AllocatorInstance,0,piVar1);
    }
    uVar4 = this->RandomSeed;
    uVar9 = *(uint *)&this->field_0x190 | 8;
    (this->RandomStream).InitialSeed = uVar4;
    (this->RandomStream).Seed = uVar4;
    this->Age = 0.0;
    this->InternalExecutionState = Active;
    this->ScalabilityState = Awaken;
    *(undefined4 *)&this->field_0xd4 = 0;
    *(uint *)&this->field_0x190 = (uVar9 * 2 ^ uVar9) & 4 ^ uVar9 | 0x10;
    if (this->field_0xd1 == '\0') {
      pFVar5 = (this->ShaderParameters).Ptr;
      if (pFVar5 != (FCommonShaderParameters *)0x0) {
        pFVar5->Common_RandomSeed = this->RandomSeed;
      }
    }
    else {
      pFStack_90 = (this->RenderThreadDataPtr).Ptr;
      if (pFStack_90 != (FEmitterInstance_RT *)0x0) {
        local_88 = this->RandomSeed;
        uStack_84 = local_c0[2]._4_4_;
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        local_80 = (undefined ***)0x0;
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::`28'::<lambda_1>,1,0>
                    ::_vftable_;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::ResetSimulation_::__l28::TSTR_UpdateStatelessAge233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_58._4_4_ = uStack_84;
          local_58._0_4_ = local_88;
          local_78._0_8_ = local_a8[0];
          local_50 = local_80;
          local_68 = local_98;
          pFStack_60 = pFStack_90;
          local_a8[0] = (code *)0x0;
          local_48 = 2;
          pFVar8 = (FRenderCommandTag *)
                   TRenderCommandTag<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::TSTR_UpdateStatelessAge233>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_78,pFVar8);
          uVar11 = (ulonglong)local_48;
          if ((2 < uVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar11] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_78._0_8_ != (code *)0x0) {
              pppuVar10 = (undefined ***)(local_78 + 0x10);
              if (local_50 != (undefined ***)0x0) {
                pppuVar10 = local_50;
              }
              (*(code *)(*pppuVar10)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar11])(local_78);
          }
        }
        if (local_a8[0] != (code *)0x0) {
          pppuVar10 = &local_98;
          if (local_80 != (undefined ***)0x0) {
            pppuVar10 = local_80;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
    }
  }
  return;
}

// RestartSpawnInfos @ 14947e3d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::RestartSpawnInfos(FNiagaraStatelessEmitterInstance *this)

{
  InitSpawnInfos(this,this->Age);
  return;
}

// SetEmitterEnable @ 14947e3f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::SetEmitterEnable
          (FNiagaraStatelessEmitterInstance *this,bool param_1)

{
  this->bEmitterEnabled_GT = 0;
  *(uint *)&this->field_0x190 = *(uint *)&this->field_0x190 | (uint)param_1 * 2;
  return;
}

// SetExecutionStateInternal @ 14947e410

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::SetExecutionStateInternal
          (FNiagaraStatelessEmitterInstance *this,ENiagaraExecutionState param_1)

{
  ENiagaraExecutionState EVar1;
  FNiagaraStatelessEmitterData *pFVar2;
  
  if (this->InternalExecutionState != param_1) {
    if (param_1 == Active) {
      if (1 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        return;
      }
    }
    else {
      if (param_1 == Inactive) {
        pFVar2 = TSharedPtr<FNiagaraStatelessEmitterData_const_,1>::operator->(&this->EmitterData);
        if ((pFVar2->EmitterState).InactiveResponse == Kill) {
          KillSpawnInfos(this);
          this->InternalExecutionState = Complete;
          *(undefined4 *)&this->field_0xd4 = 3;
          return;
        }
        CropSpawnInfos(this);
        EVar1 = Complete;
        if (0 < (this->SpawnInfos).ArrayNum) {
          EVar1 = Inactive;
        }
        this->InternalExecutionState = EVar1;
        *(ENiagaraExecutionState *)&this->field_0xd4 = EVar1;
        return;
      }
      if ((param_1 == InactiveClear) || (param_1 == Complete)) {
        KillSpawnInfos(this);
        this->InternalExecutionState = Complete;
        *(undefined4 *)&this->field_0xd4 = 3;
        return;
      }
    }
  }
  return;
}

// ShouldTick @ 14947e7e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall FNiagaraStatelessEmitterInstance::ShouldTick(FNiagaraStatelessEmitterInstance *this)

{
  return this->InternalExecutionState < InactiveClear;
}

// Tick @ 14947f3d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::Tick(FNiagaraStatelessEmitterInstance *this,float param_1)

{
  undefined8 uVar1;
  FNiagaraStatelessEmitterData *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  double dVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  
  if (ZPULL(*(undefined4 *)&this->field_0x190,4,1) != 0) {
    *(uint *)&this->field_0x190 = *(undefined4 *)&this->field_0x190 & 0xffffffef;
    if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = (this->EmitterData).Object;
    this->LoopCount = 0;
    this->CurrentLoopDelay = 0.0;
    if ((pFVar8->EmitterState).bLoopDelayEnabled != 0) {
      fVar13 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                         (&(pFVar8->EmitterState).LoopDelay,&this->RandomStream,
                          (FNiagaraParameterStore *)&this->field_0x40,0.0);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      this->CurrentLoopDelay = fVar13;
    }
    this->CurrentLoopAgeStart = 0.0;
    if (((pFVar8->EmitterState).LoopBehavior != Once) ||
       (fVar13 = __real_7f7fffff, fVar14 = __real_7f7fffff,
       (pFVar8->EmitterState).LoopDurationMode != Infinite)) {
      fVar14 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                         (&(pFVar8->EmitterState).LoopDuration,&this->RandomStream,
                          (FNiagaraParameterStore *)&this->field_0x40,__real_3a83126f);
      this->CurrentLoopDuration = fVar14;
      if (fVar14 <= __real_3a83126f) {
        fVar14 = __real_3a83126f;
      }
      fVar13 = this->CurrentLoopAgeStart + this->CurrentLoopDelay + fVar14;
    }
    this->CurrentLoopDuration = fVar14;
    this->CurrentLoopAgeEnd = fVar13;
    InitSpawnInfos(this,0.0);
  }
  this->Age = param_1 + this->Age;
  TickSpawnInfos(this);
  TickEmitterState(this);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xf8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x100 = uVar1;
  *(double *)&this->field_0x108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->field_0x110 = 0;
  *(undefined4 *)&this->field_0xe0 = *(undefined4 *)&this->field_0xf8;
  *(undefined4 *)&this->field_0xe4 = *(undefined4 *)&this->field_0xfc;
  *(undefined4 *)&this->field_0xe8 = *(undefined4 *)&this->field_0x100;
  *(undefined4 *)&this->field_0xec = *(undefined4 *)&this->field_0x104;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&this->field_0x108;
  AcquireSRWLockShared((PSRWLOCK)&this->field_0x150);
  if (this->field_0x188 == '\0') {
    if (this->field_0x148 == '\0') {
      if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (this->EmitterData).Object;
      dVar11 = (pFVar8->FixedBounds).Min.field0_0x0._s_0.Y;
      *(double *)&this->field_0xe0 = (pFVar8->FixedBounds).Min.field0_0x0._s_0.X;
      *(double *)&this->field_0xe8 = dVar11;
      dVar11 = (pFVar8->FixedBounds).Max.field0_0x0._s_0.X;
      *(double *)&this->field_0xf0 = (pFVar8->FixedBounds).Min.field0_0x0._s_0.Z;
      *(double *)&this->field_0xf8 = dVar11;
      uVar1._4_4_ = *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 0xc);
      uVar15 = *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 0x10);
      uVar10 = *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 0x14);
      *(undefined4 *)&this->field_0x100 =
           *(undefined4 *)((longlong)&(pFVar8->FixedBounds).Max.field0_0x0 + 8);
      *(undefined4 *)&this->field_0x104 = uVar1._4_4_;
      *(undefined4 *)&this->field_0x108 = uVar15;
      *(undefined4 *)&this->field_0x10c = uVar10;
      uVar1._0_1_ = (pFVar8->FixedBounds).IsValid;
      uVar1._1_1_ = (pFVar8->FixedBounds).Pad[0];
      uVar1._2_1_ = (pFVar8->FixedBounds).Pad[1];
      uVar1._3_1_ = (pFVar8->FixedBounds).Pad[2];
      uVar2 = (pFVar8->FixedBounds).Pad[3];
      uVar3 = (pFVar8->FixedBounds).Pad[4];
      uVar5 = (pFVar8->FixedBounds).Pad[5];
      uVar7 = (pFVar8->FixedBounds).Pad[6];
      uVar6 = CONCAT11(uVar7,uVar5);
      uVar4 = CONCAT21(uVar6,uVar3);
      uVar1._4_4_ = CONCAT31(uVar4,uVar2);
      uVar15 = (undefined4)uVar1;
    }
    else {
      *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&this->field_0x118;
      *(undefined8 *)&this->field_0xe8 = *(undefined8 *)&this->field_0x120;
      *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&this->field_0x128;
      *(undefined8 *)&this->field_0xf8 = *(undefined8 *)&this->field_0x130;
      uVar15 = (undefined4)*(undefined8 *)&this->field_0x148;
      uVar1._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&this->field_0x148 >> 0x20);
      *(undefined4 *)&this->field_0x100 = *(undefined4 *)&this->field_0x138;
      *(undefined4 *)&this->field_0x104 = *(undefined4 *)&this->field_0x13c;
      *(undefined4 *)&this->field_0x108 = *(undefined4 *)&this->field_0x140;
      *(undefined4 *)&this->field_0x10c = *(undefined4 *)&this->field_0x144;
    }
  }
  else {
    *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&this->field_0x158;
    *(undefined8 *)&this->field_0xe8 = *(undefined8 *)&this->field_0x160;
    *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&this->field_0x168;
    *(undefined8 *)&this->field_0xf8 = *(undefined8 *)&this->field_0x170;
    uVar15 = (undefined4)*(undefined8 *)&this->field_0x188;
    uVar1._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&this->field_0x188 >> 0x20);
    *(undefined4 *)&this->field_0x100 = *(undefined4 *)&this->field_0x178;
    *(undefined4 *)&this->field_0x104 = *(undefined4 *)&this->field_0x17c;
    *(undefined4 *)&this->field_0x108 = *(undefined4 *)&this->field_0x180;
    *(undefined4 *)&this->field_0x10c = *(undefined4 *)&this->field_0x184;
  }
  *(ulonglong *)&this->field_0x110 = CONCAT44(uVar1._4_4_,uVar15);
  ReleaseSRWLockShared((PSRWLOCK)&this->field_0x150);
  UpdateSimulationData(this,param_1);
  return;
}

// TickEmitterState @ 14947f6c0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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
FNiagaraStatelessEmitterInstance::TickEmitterState(FNiagaraStatelessEmitterInstance *this)

{
  undefined1 *puVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraStatelessEmitterData *pFVar6;
  ENiagaraExecutionState EVar7;
  ENiagaraExecutionStateManagement EVar8;
  ENiagaraExecutionState EVar9;
  float fVar10;
  float fVar11;
  
  EVar9 = Complete;
  EVar7 = EVar9;
  if (*(longlong *)&this->field_0x8 != 0) {
    EVar7 = *(ENiagaraExecutionState *)(*(longlong *)&this->field_0x8 + 0x91c);
  }
  if (this->InternalExecutionState < EVar7) {
    SetExecutionStateInternal(this,EVar7);
  }
  if (((this->InternalExecutionState == Inactive) && (iVar5 = GetNumParticles(this), iVar5 == 0)) &&
     (this->InternalExecutionState != Complete)) {
    KillSpawnInfos(this);
    this->InternalExecutionState = Complete;
    *(undefined4 *)&this->field_0xd4 = 3;
  }
  if (this->InternalExecutionState != Active) {
    return;
  }
  if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = (this->EmitterData).Object;
  EVar8 = Awaken;
  if (((pFVar6->EmitterState).bEnableVisibilityCulling != 0) &&
     ((pFVar6->EmitterState).VisibilityCullDelay <
      *(float *)((ulonglong)(*(byte *)(*(longlong *)&this->field_0x8 + 0x840) & 1) * 0x40 + 0x360 +
                *(longlong *)&this->field_0x8))) {
    EVar8 = (pFVar6->EmitterState).VisibilityCullReaction;
  }
  if ((pFVar6->EmitterState).bEnableDistanceCulling != 0) {
    fVar10 = FNiagaraSystemInstance::GetLODDistance(*(FNiagaraSystemInstance **)&this->field_0x8);
    pfVar2 = &(pFVar6->EmitterState).MaxDistance;
    if (fVar10 < *pfVar2 || fVar10 == *pfVar2) {
      if (fVar10 < (pFVar6->EmitterState).MinDistance) {
        EVar8 = (pFVar6->EmitterState).MinDistanceReaction;
      }
    }
    else {
      EVar8 = (pFVar6->EmitterState).MaxDistanceReaction;
    }
  }
  if (EVar8 != this->ScalabilityState) {
    *(ENiagaraExecutionState *)&this->field_0xd4 = this->InternalExecutionState;
    this->ScalabilityState = EVar8;
    if (EVar8 == Awaken) {
      if ((pFVar6->EmitterState).bResetAgeOnAwaken != 0) {
        ResetSimulation(this,false);
      }
    }
    else {
      if (EVar8 != SleepAndLetParticlesFinish) {
        if (EVar8 == SleepAndClearParticles) {
          *(undefined4 *)&this->field_0xd4 = 1;
          KillSpawnInfos(this);
          goto LAB_14947f87e;
        }
        if (EVar8 == KillImmediately) {
          if (this->InternalExecutionState == Complete) {
            return;
          }
          KillSpawnInfos(this);
          this->InternalExecutionState = Complete;
          *(undefined4 *)&this->field_0xd4 = 3;
          return;
        }
        if (EVar8 != KillAfterParticlesFinish) goto LAB_14947f87e;
      }
      *(undefined4 *)&this->field_0xd4 = 1;
      CropSpawnInfos(this);
    }
  }
LAB_14947f87e:
  if ((this->ScalabilityState == KillAfterParticlesFinish) &&
     (iVar5 = GetNumParticles(this), iVar5 == 0)) {
    if (this->InternalExecutionState == Complete) {
      return;
    }
  }
  else {
    fVar10 = __real_3a83126f;
    if (this->Age <= this->CurrentLoopAgeEnd && this->CurrentLoopAgeEnd != this->Age) {
      return;
    }
    if ((pFVar6->EmitterState).LoopBehavior != Once) {
      do {
        iVar5 = this->LoopCount + 1;
        this->LoopCount = iVar5;
        if (((pFVar6->EmitterState).LoopBehavior == Multiple) &&
           ((pFVar6->EmitterState).LoopCount <= iVar5)) {
          if (this->InternalExecutionState == Inactive) {
            return;
          }
          pFVar6 = TSharedPtr<FNiagaraStatelessEmitterData_const_,1>::operator->(&this->EmitterData)
          ;
          if ((pFVar6->EmitterState).InactiveResponse == Kill) {
            KillSpawnInfos(this);
          }
          else {
            CropSpawnInfos(this);
            EVar9 = Complete;
            if (0 < (this->SpawnInfos).ArrayNum) {
              EVar9 = Inactive;
            }
          }
          *(ENiagaraExecutionState *)&this->field_0xd4 = EVar9;
          this->InternalExecutionState = EVar9;
          return;
        }
        if ((pFVar6->EmitterState).bRecalculateDurationEachLoop != 0) {
          fVar11 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                             (&(pFVar6->EmitterState).LoopDuration,&this->RandomStream,
                              (FNiagaraParameterStore *)&this->field_0x40,fVar10);
          if (fVar11 <= fVar10) {
            fVar11 = fVar10;
          }
          this->CurrentLoopDuration = fVar11;
        }
        if ((pFVar6->EmitterState).bLoopDelayEnabled != 0) {
          if ((pFVar6->EmitterState).bDelayFirstLoopOnly == 0) {
            if ((pFVar6->EmitterState).bRecalculateDelayEachLoop != 0) {
              fVar11 = NiagaraStatelessEmitterInstancePrivate::EvaluateDistribution
                                 (&(pFVar6->EmitterState).LoopDelay,&this->RandomStream,
                                  (FNiagaraParameterStore *)&this->field_0x40,0.0);
              if (fVar11 <= 0.0) {
                fVar11 = 0.0;
              }
              this->CurrentLoopDelay = fVar11;
            }
          }
          else {
            this->CurrentLoopDelay = 0.0;
          }
        }
        fVar11 = this->CurrentLoopAgeEnd;
        this->CurrentLoopAgeStart = fVar11;
        this->CurrentLoopAgeEnd = fVar11 + this->CurrentLoopDelay + this->CurrentLoopDuration;
        InitSpawnInfosForLoop(this,fVar11);
      } while (this->CurrentLoopAgeEnd < this->Age || this->CurrentLoopAgeEnd == this->Age);
      return;
    }
    if (this->InternalExecutionState == Inactive) {
      return;
    }
    pFVar6 = TSharedPtr<FNiagaraStatelessEmitterData_const_,1>::operator->(&this->EmitterData);
    if ((pFVar6->EmitterState).InactiveResponse != Kill) {
      CropSpawnInfos(this);
      EVar7 = Complete;
      if (0 < (this->SpawnInfos).ArrayNum) {
        EVar7 = Inactive;
      }
      this->InternalExecutionState = EVar7;
      *(ENiagaraExecutionState *)&this->field_0xd4 = EVar7;
      return;
    }
  }
  KillSpawnInfos(this);
  this->InternalExecutionState = Complete;
  *(undefined4 *)&this->field_0xd4 = 3;
  return;
}

// TickSpawnInfos @ 14947faa0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::TickSpawnInfos(FNiagaraStatelessEmitterInstance *this)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar6 = 0;
  uVar1 = *(undefined4 *)&this->field_0x190;
  if ((this->bEmitterEnabled_GT == 0) || (uVar5 = 1, this->ScalabilityState != Awaken)) {
    uVar5 = 0;
  }
  if (ZPULL(uVar1,2,1) != uVar5) {
    *(uint *)&this->field_0x190 = uVar1 & 0xfffffffb | uVar5 * 4;
    if (uVar5 == 0) {
      CropSpawnInfos(this);
    }
    else {
      InitSpawnInfos(this,this->Age);
    }
  }
  iVar8 = (this->SpawnInfos).ArrayNum;
  lVar3 = (longlong)iVar8;
  if (iVar8 != 0) {
    pFVar2 = (this->SpawnInfos).AllocatorInstance.Data;
    bVar7 = this->Age <= *(float *)(pFVar2 + 0x20) + *(float *)(pFVar2 + 0xc) &&
            *(float *)(pFVar2 + 0x20) + *(float *)(pFVar2 + 0xc) != this->Age;
    uVar9 = uVar6;
    uVar12 = uVar6;
    do {
      iVar8 = (int)uVar9;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)(iVar8 + 1);
      if ((longlong)uVar6 < lVar3) {
        pFVar4 = pFVar2 + (uVar6 * 9 + 3) * 4;
        do {
          if (bVar7 != this->Age < *(float *)(pFVar4 + 0x14) + *(float *)pFVar4) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar6 = uVar6 + 1;
          pFVar4 = pFVar4 + 0x24;
        } while ((longlong)uVar6 < lVar3);
      }
      iVar10 = (int)uVar9 - iVar8;
      if (bVar7 != false) {
        iVar11 = (int)uVar12;
        if (iVar11 != iVar8) {
          memmove(pFVar2 + (longlong)iVar11 * 0x24,pFVar2 + (longlong)iVar8 * 0x24,
                  (longlong)iVar10 * 0x24);
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar10);
      }
      bVar7 = (bool)(bVar7 ^ 1);
    } while ((longlong)uVar6 < lVar3);
    (this->SpawnInfos).ArrayNum = (int)uVar12;
  }
  return;
}

// UnbindParameters @ 1494801a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
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
FNiagaraStatelessEmitterInstance::UnbindParameters
          (FNiagaraStatelessEmitterInstance *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  code *pcVar4;
  bool bVar5;
  UNiagaraParameterCollectionInstance *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((*(int *)&this->field_0x58 != 0) &&
     (*(FNiagaraSystemInstance **)&this->field_0x8 != (FNiagaraSystemInstance *)0x0)) {
    FNiagaraSystemInstance::UnbindFromParameterStore
              (*(FNiagaraSystemInstance **)&this->field_0x8,
               (FNiagaraParameterStore *)&this->field_0x40);
    if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->EmitterData).Object;
    pFVar7 = (pFVar3->BoundParameterCollections).AllocatorInstance.Data;
    iVar2 = (pFVar3->BoundParameterCollections).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar3->BoundParameterCollections).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      pUVar6 = FNiagaraSystemInstance::GetParameterCollectionInstance
                         (*(FNiagaraSystemInstance **)&this->field_0x8,
                          *(UNiagaraParameterCollection **)pFVar7);
      if (pUVar6 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Unbind
                  (&pUVar6->ParameterStorage,(FNiagaraParameterStore *)&this->field_0x40);
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// UpdateSimulationData @ 149480320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterInstance::UpdateSimulationData
          (FNiagaraStatelessEmitterInstance *this,float param_1)

{
  undefined1 *this_00;
  int iVar1;
  int iVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  longlong lVar4;
  void *_Src;
  code *pcVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  float fVar8;
  ENiagaraExecutionState EVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FNiagaraStatelessExpression *pFVar18;
  FNiagaraTypeDefinition *this_01;
  UNiagaraStatelessEmitter *pUVar19;
  FCommonShaderParameters *pFVar20;
  TTransform<float> *pTVar21;
  FNiagaraDataBuffer *pFVar22;
  FCommonShaderParameters *pFVar23;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar24;
  code **ppcVar25;
  ForAnyElementType FVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  char cVar29;
  uint unaff_R13D;
  uint uVar30;
  undefined1 auStackY_368 [32];
  undefined1 local_328 [8];
  int local_320 [2];
  uint local_318;
  float local_308;
  ENiagaraExecutionState local_304;
  FCommonShaderParameters *local_300;
  undefined1 local_2f8;
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  FScriptContainerElement *local_2c8;
  FNiagaraStatelessEmitterInstance *local_2c0;
  FNiagaraParameterStore *local_2b8;
  FScriptContainerElement *local_2b0;
  uchar *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  FNiagaraStatelessRuntimeSpawnInfo *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  int *local_288;
  FNiagaraTypeDefinition *local_280;
  undefined1 *local_278;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_268;
  undefined1 local_258 [32];
  code *local_238 [2];
  code *local_228 [3];
  code **local_210;
  undefined1 local_208 [40];
  code **local_1e0;
  byte local_1d8;
  FParticleSimulationContext local_1c8;
  __m128 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_318 = unaff_R13D & 0xffffff00;
  this_00 = &this->field_0x40;
  local_2c0 = this;
  uVar30 = local_318;
  if ((this->field_0xc0 & 1) != 0) {
    if (((this->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->EmitterData).Object;
    iVar1 = (pFVar3->Expressions).ArrayNum;
    pFVar28 = (pFVar3->Expressions).AllocatorInstance.Data;
    local_2c8 = pFVar28 + (longlong)iVar1 * 0x18;
    while( true ) {
      pFVar14 = local_2c8;
      if ((pFVar3->Expressions).ArrayNum != iVar1) {
        local_328[0] = 0;
        `TCheckedPointerIterator<TTuple<int,FInstancedStruct>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_328);
      }
      if (pFVar28 == pFVar14) break;
      pFVar18 = UE::StructUtils::GetStructRef<FNiagaraStatelessExpression>
                          (*(UScriptStruct **)(pFVar28 + 8),*(void **)(pFVar28 + 0x10));
      this_01 = (FNiagaraTypeDefinition *)
                (**(code **)((longlong)*pFVar18 + 0x18))(pFVar18,local_258);
      local_320[0] = *(int *)pFVar28;
      if ((local_320[0] < 0) ||
         (iVar2 = *(int *)&this->field_0x68, iVar17 = FNiagaraTypeDefinition::GetSize(this_01),
         iVar2 < iVar17 + local_320[0])) {
        local_288 = local_320;
        local_280 = this_01;
        local_278 = this_00;
        `FNiagaraParameterStore::GetMutableParameterData'::__l2::<lambda_1>::operator()(&local_288);
      }
      local_2b8 = (FNiagaraParameterStore *)this_00;
      (**(code **)((longlong)*pFVar18 + 0x10))
                (pFVar18,&local_2b8,(longlong)local_320[0] + *(longlong *)&this->field_0x60);
      pFVar28 = pFVar28 + 0x18;
    }
    FNiagaraParameterStore::Tick((FNiagaraParameterStore *)this_00);
    this = local_2c0;
    uVar30 = local_318;
    if (((local_2c0->EmitterData).Object == (FNiagaraStatelessEmitterData *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = uVar30 & 0xff;
    if (((this->EmitterData).Object)->bModulesHaveRendererBindings != false) {
      uVar30 = 1;
    }
  }
  lVar4 = *(longlong *)&this->field_0x8;
  cVar29 = (char)uVar30;
  local_78.m128_f32[2] = (float)*(double *)(lVar4 + 0x80);
  local_78.m128_f32[3] = (float)*(double *)(lVar4 + 0x88);
  local_78.m128_f32[0] = (float)*(double *)(lVar4 + 0x70);
  local_78.m128_f32[1] = (float)*(double *)(lVar4 + 0x78);
  fStack_60 = (float)*(double *)(lVar4 + 0xa0);
  fStack_5c = (float)*(double *)(lVar4 + 0xa8);
  local_68 = (float)*(double *)(lVar4 + 0x90);
  fStack_64 = (float)*(double *)(lVar4 + 0x98);
  local_58 = (float)*(double *)(lVar4 + 0xb0);
  fStack_54 = (float)*(double *)(lVar4 + 0xb8);
  fStack_50 = (float)*(double *)(lVar4 + 0xc0);
  fStack_4c = (float)*(double *)(lVar4 + 200);
  bVar15 = FNiagaraStatelessSpaceTransforms::UpdateTransforms
                     (&this->EmitterTransforms,(TTransform<float> *)&local_78);
  if (this->field_0xd1 == '\0') {
    if (cVar29 != '\0' || bVar15) {
      pUVar19 = (UNiagaraStatelessEmitter *)
                FWeakObjectPtr::Get(&(this->WeakStatelessEmitter).WeakPtr);
      pFVar20 = UNiagaraStatelessEmitter::AllocateShaderParameters
                          (pUVar19,&this->EmitterTransforms,(FNiagaraParameterStore *)this_00);
      pFVar23 = (this->ShaderParameters).Ptr;
      if (pFVar23 != pFVar20) {
        (this->ShaderParameters).Ptr = pFVar20;
        FMemory::Free(pFVar23);
      }
      ((this->ShaderParameters).Ptr)->Common_RandomSeed = this->RandomSeed;
      pFVar23 = (this->ShaderParameters).Ptr;
      pTVar21 = FNiagaraStatelessSpaceTransforms::GetTransform
                          (&this->EmitterTransforms,Simulation,Simulation);
      uVar6 = (pTVar21->Rotation).m128_u64[0];
      uVar7 = (pTVar21->Rotation).m128_u64[1];
      (pFVar23->Common_ToSimulationRotations).Elements[0].X = (float)(int)uVar6;
      (pFVar23->Common_ToSimulationRotations).Elements[0].Y = (float)(int)(uVar6 >> 0x20);
      (pFVar23->Common_ToSimulationRotations).Elements[0].Z = (float)(int)uVar7;
      (pFVar23->Common_ToSimulationRotations).Elements[0].W = (float)(int)(uVar7 >> 0x20);
      pTVar21 = FNiagaraStatelessSpaceTransforms::GetTransform
                          (&this->EmitterTransforms,World,Simulation);
      uVar6 = (pTVar21->Rotation).m128_u64[0];
      uVar7 = (pTVar21->Rotation).m128_u64[1];
      (pFVar23->Common_ToSimulationRotations).Elements[1].X = (float)(int)uVar6;
      (pFVar23->Common_ToSimulationRotations).Elements[1].Y = (float)(int)(uVar6 >> 0x20);
      (pFVar23->Common_ToSimulationRotations).Elements[1].Z = (float)(int)uVar7;
      (pFVar23->Common_ToSimulationRotations).Elements[1].W = (float)(int)(uVar7 >> 0x20);
      pTVar21 = FNiagaraStatelessSpaceTransforms::GetTransform
                          (&this->EmitterTransforms,Local,Simulation);
      uVar6 = (pTVar21->Rotation).m128_u64[0];
      uVar7 = (pTVar21->Rotation).m128_u64[1];
      (pFVar23->Common_ToSimulationRotations).Elements[2].X = (float)(int)uVar6;
      (pFVar23->Common_ToSimulationRotations).Elements[2].Y = (float)(int)(uVar6 >> 0x20);
      (pFVar23->Common_ToSimulationRotations).Elements[2].Z = (float)(int)uVar7;
      (pFVar23->Common_ToSimulationRotations).Elements[2].W = (float)(int)(uVar7 >> 0x20);
    }
    pFVar22 = FNiagaraDataSet::BeginSimulate(*(FNiagaraDataSet **)&this->field_0x10,true);
    local_2a8 = *(uchar **)&this->field_0x60;
    iStack_2a0 = *(int *)&this->field_0x68;
    if ((iStack_2a0 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1c8.EmitterData = (this->EmitterData).Object;
    pFVar23 = (this->ShaderParameters).Ptr;
    local_1c8.BufferFloatData = (uchar *)0x0;
    local_1c8.BufferInt32Data = (uchar *)0x0;
    local_1c8.VariableComponents.ArrayMax = 0x10;
    local_1c8.RequiredComponents[0] = (void *)0x0;
    local_1c8.RequiredComponents[1] = (void *)0x0;
    local_1c8.NumInstances = 0;
    local_1c8.DeltaTime = 0.0;
    local_1c8.InvDeltaTime = 0.0;
    local_1c8.EmitterRandomSeed = 0;
    local_1c8.ModuleRandomSeed = 0;
    local_1c8.BufferStride = 0;
    local_1c8.bNeedsParticleKillCompaction = false;
    local_1c8.RequiredComponents[2] = (void *)0x0;
    local_1c8.RequiredComponents[3] = (void *)0x0;
    local_1c8.VariableComponents.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_char_*>)0x0;
    local_1c8.RequiredComponents[4] = (void *)0x0;
    local_1c8.RequiredComponents[5] = (void *)0x0;
    local_1c8.VariableComponents.ArrayNum = 0;
    local_1c8.RequiredComponents[6] = (void *)0x0;
    local_1c8.RequiredComponents[7] = (void *)0x0;
    local_1c8.BuiltData.DataPtr =
         (uchar *)((local_1c8.EmitterData)->BuiltData).AllocatorInstance.Data;
    iVar1 = ((local_1c8.EmitterData)->BuiltData).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1c8.BuiltDataOffset = 0;
    local_1c8.ShaderParameterOffset = 0;
    local_1c8.StaticFloatData.DataPtr =
         (float *)((local_1c8.EmitterData)->StaticDataBufferCpu).AllocatorInstance.Data;
    local_1c8.StaticFloatData.ArrayNum =
         (int)((ulonglong)(longlong)((local_1c8.EmitterData)->StaticDataBufferCpu).ArrayNum >> 2);
    local_1c8.BuiltData.ArrayNum = iVar1;
    local_1c8.ShaderParametersData = (uchar *)pFVar23;
    if ((local_1c8.StaticFloatData.ArrayNum < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1c8.DynamicBufferData._12_4_ = uStack_29c;
    local_1c8.DynamicBufferData.ArrayNum = iStack_2a0;
    local_1c8.DynamicBufferData.DataPtr = local_2a8;
    if (((local_1c8.EmitterData)->ParticleSimExecData == (FParticleSimulationExecData *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("EmitterData->ParticleSimExecData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessParticleSimContext.cpp"
                            ,0x2f,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_298 = (FNiagaraStatelessRuntimeSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data;
    iVar1 = (this->SpawnInfos).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_268._12_4_ = uStack_28c;
    local_268.ArrayNum = iVar1;
    local_268.DataPtr = local_298;
    iStack_290 = iVar1;
    NiagaraStateless::FParticleSimulationContext::Simulate
              (&local_1c8,this->RandomSeed,this->Age,param_1,&local_268,pFVar22);
    FNiagaraDataSet::EndSimulate(*(FNiagaraDataSet **)&this->field_0x10,true);
    FVar26.Data = (FScriptContainerElement *)
                  local_1c8.VariableComponents.AllocatorInstance.SecondaryData;
  }
  else {
    local_2c0 = (FNiagaraStatelessEmitterInstance *)(this->RenderThreadDataPtr).Ptr;
    if (local_2c0 == (FNiagaraStatelessEmitterInstance *)0x0) {
      return;
    }
    local_308 = this->Age;
    local_304 = this->InternalExecutionState;
    local_300 = (FCommonShaderParameters *)0x0;
    local_2f8 = 0;
    local_2f0.Data = (FScriptContainerElement *)0x0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    if (cVar29 != '\0') {
      local_2f8 = 1;
      if (&local_2f0 != (ForAnyElementType *)&this->field_0x60) {
        uVar30 = *(uint *)&this->field_0x68;
        _Src = *(void **)&this->field_0x60;
        local_2e8 = (ulonglong)uVar30;
        if (uVar30 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar30,0,&local_2f0,uVar30,(int *)((longlong)&local_2e8 + 4));
          memcpy(local_2f0.Data,_Src,(longlong)(int)uVar30);
        }
      }
      if (((local_2e8 & 3) != 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(DataForRenderThread.BindingBufferData.Num() % sizeof(uint32)) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterInstance.cpp"
                              ,0x265,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (cVar29 != '\0' || bVar15) {
      pUVar19 = (UNiagaraStatelessEmitter *)
                FWeakObjectPtr::Get(&(this->WeakStatelessEmitter).WeakPtr);
      pFVar23 = UNiagaraStatelessEmitter::AllocateShaderParameters
                          (pUVar19,&this->EmitterTransforms,
                           (FNiagaraParameterStore *)&this->field_0x40);
      pFVar23->Common_RandomSeed = this->RandomSeed;
      local_300 = pFVar23;
      pTVar21 = FNiagaraStatelessSpaceTransforms::GetTransform
                          (&this->EmitterTransforms,Simulation,Simulation);
      uVar6 = (pTVar21->Rotation).m128_u64[0];
      uVar7 = (pTVar21->Rotation).m128_u64[1];
      (pFVar23->Common_ToSimulationRotations).Elements[0].X = (float)(int)uVar6;
      (pFVar23->Common_ToSimulationRotations).Elements[0].Y = (float)(int)(uVar6 >> 0x20);
      (pFVar23->Common_ToSimulationRotations).Elements[0].Z = (float)(int)uVar7;
      (pFVar23->Common_ToSimulationRotations).Elements[0].W = (float)(int)(uVar7 >> 0x20);
      pTVar21 = FNiagaraStatelessSpaceTransforms::GetTransform
                          (&this->EmitterTransforms,World,Simulation);
      uVar6 = (pTVar21->Rotation).m128_u64[0];
      uVar7 = (pTVar21->Rotation).m128_u64[1];
      (pFVar23->Common_ToSimulationRotations).Elements[1].X = (float)(int)uVar6;
      (pFVar23->Common_ToSimulationRotations).Elements[1].Y = (float)(int)(uVar6 >> 0x20);
      (pFVar23->Common_ToSimulationRotations).Elements[1].Z = (float)(int)uVar7;
      (pFVar23->Common_ToSimulationRotations).Elements[1].W = (float)(int)(uVar7 >> 0x20);
      pTVar21 = FNiagaraStatelessSpaceTransforms::GetTransform
                          (&this->EmitterTransforms,Local,Simulation);
      uVar6 = (pTVar21->Rotation).m128_u64[0];
      uVar7 = (pTVar21->Rotation).m128_u64[1];
      (pFVar23->Common_ToSimulationRotations).Elements[2].X = (float)(int)uVar6;
      (pFVar23->Common_ToSimulationRotations).Elements[2].Y = (float)(int)(uVar6 >> 0x20);
      (pFVar23->Common_ToSimulationRotations).Elements[2].Z = (float)(int)uVar7;
      (pFVar23->Common_ToSimulationRotations).Elements[2].W = (float)(int)(uVar7 >> 0x20);
    }
    if (this->bSpawnInfosDirty != 0) {
      local_2e0 = 1;
      if ((TArray<FNiagaraStatelessRuntimeSpawnInfo,TSizedDefaultAllocator<32>_> *)&local_2d8 !=
          &this->SpawnInfos) {
        iVar1 = (this->SpawnInfos).ArrayNum;
        pFVar28 = (this->SpawnInfos).AllocatorInstance.Data;
        local_2d0 = CONCAT44(local_2d0._4_4_,iVar1);
        if ((iVar1 == 0) && (local_2d0._4_4_ == 0)) {
          local_2d0 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,iVar1,local_2d0._4_4_,&local_2d8,iVar1,(int *)((longlong)&local_2d0 + 4)
                    );
          if (iVar1 != 0) {
            memcpy(local_2d8.Data,pFVar28,(longlong)iVar1 * 0x24);
          }
        }
      }
      this->bSpawnInfosDirty = 0;
    }
    FVar26.Data = local_2d8.Data;
    uVar11 = local_2e0;
    uVar10 = local_2f8;
    pFVar23 = local_300;
    EVar9 = local_304;
    fVar8 = local_308;
    uVar13 = local_2d0._4_4_;
    local_2b0 = local_2f0.Data;
    local_318 = (uint)local_2e8;
    local_2c8 = (FScriptContainerElement *)CONCAT44(local_2c8._4_4_,local_2e8._4_4_);
    local_2f0.Data = (FScriptContainerElement *)0x0;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    uVar12 = (undefined4)local_2d0;
    local_2d0 = 0;
    local_238[0] = (code *)0x0;
    local_2e8 = 0;
    local_210 = FMemory::Malloc(0x50,8);
    *(float *)(local_210 + 2) = fVar8;
    *(ENiagaraExecutionState *)((longlong)local_210 + 0x14) = EVar9;
    *local_210 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::`22'::<lambda_1>,1,1>
                          ::_vftable_;
    local_210[1] = (code *)local_2c0;
    local_210[5] = (code *)local_2b0;
    local_210[3] = (code *)pFVar23;
    *(undefined1 *)(local_210 + 4) = uVar10;
    *(uint *)(local_210 + 6) = local_318;
    *(undefined4 *)((longlong)local_210 + 0x34) = local_2c8._0_4_;
    *(undefined1 *)(local_210 + 7) = uVar11;
    local_210[8] = (code *)FVar26.Data;
    *(undefined4 *)(local_210 + 9) = uVar12;
    *(undefined4 *)((longlong)local_210 + 0x4c) = uVar13;
    if (local_210 + 1 != (code **)0x0) {
      local_238[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterInstance::UpdateSimulationData_::__l22::TSTR_UpdateStatelessAge630>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_238);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_208._0_8_ = local_238[0];
      local_1e0 = local_210;
      local_210 = (code **)0x0;
      local_208._16_8_ = local_228[0];
      local_208._24_8_ = local_228[1];
      local_208._32_8_ = local_228[2];
      local_238[0] = (code *)0x0;
      local_1d8 = 2;
      pFVar24 = (FRenderCommandTag *)
                TRenderCommandTag<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::TSTR_UpdateStatelessAge630>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_208,pFVar24);
      uVar27 = (ulonglong)local_1d8;
      if ((2 < uVar27) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar27] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_208._0_8_ != (code *)0x0) {
          ppcVar25 = (code **)(local_208 + 0x10);
          if (local_1e0 != (code **)0x0) {
            ppcVar25 = local_1e0;
          }
          (**(code **)(*ppcVar25 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar27])(local_208);
      }
    }
    if (local_238[0] != (code *)0x0) {
      ppcVar25 = local_238 + 2;
      if (local_210 != (code **)0x0) {
        ppcVar25 = local_210;
      }
      (**(code **)(*ppcVar25 + 0x10))();
    }
    FVar26.Data = local_2f0.Data;
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
      FVar26.Data = local_2f0.Data;
    }
  }
  if ((ForElementType<unsigned_char_*>)FVar26.Data != (ForElementType<unsigned_char_*>)0x0) {
    FMemory::Free(FVar26.Data);
  }
  return;
}

