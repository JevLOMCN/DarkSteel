// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 9

// FNiagaraRendererGeometryCache @ 14ca06ea0

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

FNiagaraRendererGeometryCache * __thiscall
FNiagaraRendererGeometryCache::FNiagaraRendererGeometryCache
          (FNiagaraRendererGeometryCache *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  int *piVar1;
  uint uVar2;
  UNiagaraGeometryCacheRendererProperties *pUVar3;
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FNiagaraRendererGeometryCache__6B_;
  piVar1 = &(this->ComponentPool).ArrayMax;
  (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ComponentPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentPool).ArrayNum = 0;
  *piVar1 = 0;
  (this->MaterialRemapTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialRemapTable).ArrayNum = 0;
  (this->MaterialRemapTable).ArrayMax = 0;
  pUVar3 = CastChecked<UNiagaraGeometryCacheRendererProperties_const_,UNiagaraRendererProperties_const_>
                     (param_2);
  uVar2 = pUVar3->ComponentCountLimit;
  if (-1 < (int)uVar2) {
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,uVar2,&(this->ComponentPool).AllocatorInstance,
                 (this->ComponentPool).ArrayNum,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ~FNiagaraRendererGeometryCache @ 14ca08fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRendererGeometryCache::~FNiagaraRendererGeometryCache(FNiagaraRendererGeometryCache *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->ComponentPool).ArrayNum;
  this->_padding_ = (longlong)&___7FNiagaraRendererGeometryCache__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentPool.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\NiagaraRendererGeometryCache.cpp"
                       ,0x26,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->MaterialRemapTable).AllocatorInstance.Data,(this->MaterialRemapTable).ArrayNum);
  pFVar2 = (this->MaterialRemapTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComponentPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  return;
}

// operator() @ 14ca0bfc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::__l2::<lambda_1>::operator()
          (void *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IGeometryCacheStreamingManager *pIVar5;
  UObject *pUVar6;
  AActor *this_00;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  
  this_01 = *(FWeakObjectPtr **)this;
  iVar2 = *(int *)((longlong)this + 8);
  pFVar1 = (FWeakObjectPtr *)((longlong)this_01 + (longlong)iVar2 * 0x14);
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      `TCheckedPointerIterator<FNiagaraRendererGeometryCache::FComponentPoolEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar1) break;
    bVar4 = FWeakObjectPtr::IsValid(this_01);
    if (bVar4) {
      pIVar5 = IGeometryCacheStreamingManager::Get();
      pcVar3 = *(code **)(pIVar5->_padding_ + 0xc0);
      FWeakObjectPtr::Get(this_01);
      (*pcVar3)(pIVar5);
      pUVar6 = FWeakObjectPtr::Get(this_01);
      (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6);
    }
    this_01 = (FWeakObjectPtr *)&this_01[2].ObjectSerialNumber;
  }
  this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
  if (this_00 != (AActor *)0x0) {
    AActor::Destroy(this_00,false,true);
    return;
  }
  return;
}

// CreateOrGetPooledComponent @ 14ca10de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometryCacheComponent * __thiscall
FNiagaraRendererGeometryCache::CreateOrGetPooledComponent
          (FNiagaraRendererGeometryCache *this,UNiagaraGeometryCacheRendererProperties *param_1,
          USceneComponent *param_2,FNiagaraEmitterInstance *param_3,TOptional<int> param_4,
          uint param_5,int param_6,int *param_7)

{
  int *piVar1;
  TArray<FNiagaraRendererGeometryCache::FComponentPoolEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  UGeometryCacheComponent *pUVar12;
  UGeometryCache *pUVar13;
  AActor *this_00;
  UWorld *this_01;
  FActorSpawnParameters *pFVar14;
  UClass *pUVar15;
  IGeometryCacheStreamingManager *pIVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  FObjectPtr_u_0 FVar20;
  uint uVar21;
  uint uVar22;
  FWeakObjectPtr *this_02;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStackY_1a8 [32];
  int local_178;
  AActor *local_158;
  uint *local_150;
  UGeometryCacheComponent *local_148;
  UGeometryCacheComponent *local_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_150 = (uint *)param_7;
  uVar19 = *param_7;
  if (((int)uVar19 < 0) || ((this->ComponentPool).ArrayNum <= (int)uVar19)) {
    pUVar12 = (UGeometryCacheComponent *)0x0;
LAB_14ca10eaa:
    bVar7 = true;
  }
  else {
    uVar22 = 0;
    if ((int)uVar19 < (this->ComponentPool).ArrayNum) {
      uVar22 = ~uVar19 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
      return pUVar12;
    }
    pUVar12 = (UGeometryCacheComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((this->ComponentPool).AllocatorInstance.Data +
                                  (longlong)(int)uVar19 * 0x14));
    if ((pUVar12 == (UGeometryCacheComponent *)0x0) ||
       ((*(uint *)&pUVar12->field_0x8 & 0x18000) != 0)) goto LAB_14ca10eaa;
    bVar7 = false;
  }
  cVar3 = *(char *)((longlong)param_4 + 4);
  if (cVar3 != '\0') {
    local_178 = *(int *)param_4;
  }
  if (bVar7) {
    if (cVar3 != '\0') goto LAB_14ca10ef8;
  }
  else {
    if (cVar3 == '\0') {
      return pUVar12;
    }
LAB_14ca10ef8:
    if (local_178 != -1) goto LAB_14ca10fa6;
  }
  if (param_3->bDeterministic == '\0') {
    iVar18 = (param_1->GeometryCaches).ArrayNum;
    if (0 < iVar18) {
      uVar19 = rand();
      iVar9 = (int)((float)(uVar19 & 0x7fff) * (float)iVar18 * __real_38000100);
      local_178 = iVar18 + -1;
      if (iVar9 < iVar18 + -1) {
        local_178 = iVar9;
      }
      goto LAB_14ca10fa6;
    }
  }
  else {
    iVar18 = (param_1->GeometryCaches).ArrayNum + 1;
    if (0 < iVar18) {
      if (param_1->bAssignComponentsOnParticleID != false) {
        param_5 = param_6;
      }
      local_178 = (int)(((float)(param_5 * 0x6755c127 + 0x3619636b >> 9 | 0x3f800000) -
                        __real_3f800000) * (float)iVar18);
      goto LAB_14ca10fa6;
    }
  }
  local_178 = 0;
LAB_14ca10fa6:
  uVar19 = local_178 % (param_1->GeometryCaches).ArrayNum;
  lVar25 = (longlong)(int)uVar19;
  if (((int)uVar19 < 0) || ((param_1->GeometryCaches).ArrayNum <= (int)uVar19)) {
    if (!bVar7) {
      return pUVar12;
    }
  }
  else {
    uVar21 = ~uVar19 >> 0x1f;
    uVar22 = 0;
    if ((int)uVar19 < (param_1->GeometryCaches).ArrayNum) {
      uVar22 = uVar21;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
      return pUVar12;
    }
    pUVar13 = UNiagaraGeometryCacheRendererProperties::ResolveGeometryCache
                        ((FNiagaraGeometryCacheReference *)
                         ((param_1->GeometryCaches).AllocatorInstance.Data + lVar25 * 0x48),param_3)
    ;
    if (pUVar13 != (UGeometryCache *)0x0) {
      if (bVar7) {
        this_00 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
        if ((this_00 == (AActor *)0x0) &&
           (this_00 = (AActor *)param_2->_padding_, this_00 == (AActor *)0x0)) {
          this_01 = (UWorld *)param_2->_padding_;
          if (this_01 == (UWorld *)0x0) {
            this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_2);
          }
          pFVar14 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
          pUVar15 = Z_Construct_UClass_AActor_NoRegister();
          this_00 = UWorld::SpawnActor(this_01,pUVar15,(TVector<double> *)0x0,
                                       (TRotator<double> *)0x0,pFVar14);
          if (local_b8._64_8_ != 0) {
            plVar17 = (longlong *)(local_b8 + 0x50);
            if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
              plVar17 = (longlong *)local_b8._104_8_;
            }
            (**(code **)(*plVar17 + 0x10))();
          }
          UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
          local_158 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=(&(this->SpawnedOwner).WeakPtr,(FObjectPtr)&local_158);
        }
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this_00,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar15 = UGeometryCacheComponent::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_138,pUVar15);
        local_138._8_8_ = this_00;
        pUVar12 = (UGeometryCacheComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
        if (local_138._64_8_ != 0) {
          plVar17 = (longlong *)(local_138 + 0x50);
          if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_138._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        pIVar16 = IGeometryCacheStreamingManager::Get();
        (**(code **)(pIVar16->_padding_ + 0xb8))(pIVar16,pUVar12);
        UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar12,RF_Transient);
        USceneComponent::SetupAttachment((USceneComponent *)pUVar12,param_2,(FName)0x0);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar12);
        (**(code **)(*(longlong *)pUVar12 + 0x4c0))(pUVar12,param_2);
        pUVar12->bLooping = param_1->bIsLooping;
        pUVar12->bManualTick = true;
        bVar7 = (bool)(~param_3->bLocalSpace & 1);
        USceneComponent::SetAbsolute((USceneComponent *)pUVar12,bVar7,bVar7,bVar7);
        puVar6 = local_150;
        pTVar2 = &this->ComponentPool;
        uVar22 = (this->ComponentPool).ArrayNum;
        uVar11 = *local_150;
        if ((int)uVar11 < 0) {
          *local_150 = uVar22;
          piVar1 = &(this->ComponentPool).ArrayMax;
          iVar18 = (this->ComponentPool).ArrayNum;
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ComponentPool).ArrayNum = iVar18 + 1;
          this_02 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x14);
          DefaultConstructItems<FNiagaraRendererGeometryCache::FComponentPoolEntry,int>(this_02,1);
          local_140 = pUVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          FVar20.Handle = (UObject *)&local_140;
        }
        else {
          uVar10 = 0;
          if ((int)uVar11 < (int)uVar22) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
            return pUVar12;
          }
          this_02 = (FWeakObjectPtr *)
                    ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x14);
          local_148 = pUVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          FVar20.Handle = (UObject *)&local_148;
        }
        FWeakObjectPtr::operator=(this_02,(FObjectPtr)FVar20);
        uVar22 = *puVar6;
        uVar11 = 0;
        if ((int)uVar22 < (this->ComponentPool).ArrayNum) {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
          return pUVar12;
        }
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x14 + 0xc) = 0;
      }
      UGeometryCacheComponent::SetGeometryCache(pUVar12,pUVar13);
      uVar22 = 0;
      lVar24 = 0;
      while( true ) {
        uVar11 = 0;
        if ((int)uVar19 < (this->MaterialRemapTable).ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
          return pUVar12;
        }
        if (*(int *)((this->MaterialRemapTable).AllocatorInstance.Data + lVar25 * 0x10 + 8) <=
            (int)uVar22) {
          return pUVar12;
        }
        uVar11 = 0;
        if ((int)uVar19 < (this->MaterialRemapTable).ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) break;
        pFVar4 = (this->MaterialRemapTable).AllocatorInstance.Data;
        uVar11 = 0;
        if ((int)uVar22 < *(int *)(pFVar4 + lVar25 * 0x10 + 8)) {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
          return pUVar12;
        }
        uVar11 = *(uint *)(lVar24 + *(longlong *)(pFVar4 + lVar25 * 0x10));
        if (((int)uVar11 < 0) || ((int)this->_padding_ <= (int)uVar11)) {
          uVar23 = 0;
        }
        else {
          uVar10 = 0;
          if ((int)uVar11 < (int)this->_padding_) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
            return pUVar12;
          }
          uVar23 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar11 * 8);
        }
        (**(code **)(*(longlong *)pUVar12 + 0x6b8))(pUVar12,uVar22,uVar23);
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 4;
      }
      pcVar5 = (code *)swi(3);
      pUVar12 = (UGeometryCacheComponent *)(*pcVar5)();
      return pUVar12;
    }
  }
  return (UGeometryCacheComponent *)0x0;
}

// DestroyRenderState_Concurrent @ 14ca14c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent(FNiagaraRendererGeometryCache *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr FVar4;
  code *local_48 [5];
  undefined8 *local_20;
  
  pFVar3 = (this->ComponentPool).AllocatorInstance.Data;
  (this->ComponentPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ComponentPool).ArrayNum;
  iVar2 = (this->ComponentPool).ArrayMax;
  (this->ComponentPool).ArrayNum = 0;
  (this->ComponentPool).ArrayMax = 0;
  FVar4 = (this->SpawnedOwner).WeakPtr;
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  local_20[1] = pFVar3;
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  *(int *)(local_20 + 2) = iVar1;
  *(int *)((longlong)local_20 + 0x14) = iVar2;
  *(FWeakObjectPtr *)(local_20 + 3) = FVar4;
  if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_48);
  (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// Initialize @ 14ca228c0

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
FNiagaraRendererGeometryCache::Initialize
          (FNiagaraRendererGeometryCache *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2,FNiagaraSystemInstanceController *param_3)

{
  int *piVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  FNiagaraGeometryCacheReference *this_01;
  void *_Dst;
  longlong *plVar2;
  UMaterialInterface *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  UGeometryCache *pUVar11;
  UMaterialInterface *pUVar12;
  FString *pFVar13;
  uint uVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined4 uVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong local_80;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FNiagaraRenderer::Initialize((FNiagaraRenderer *)this,param_1,param_2,param_3);
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    pFVar13 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_68);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar15);
  }
  pUVar10 = UNiagaraGeometryCacheRendererProperties::StaticClass();
  iVar16 = (int)pUVar10->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar16) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar16 * 8)
      != &pUVar10->_padding_)) {
    pFVar13 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_58);
    pwVar15 = L"";
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_48,param_1);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar15,pwVar19);
  }
  this_00 = &this->MaterialRemapTable;
  iVar16 = (this->MaterialRemapTable).ArrayNum;
  piVar1 = &(this->MaterialRemapTable).ArrayNum;
  uVar21 = (uint)param_1[1]._padding_;
  if (iVar16 < (int)uVar21) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar21 - iVar16,&this_00->AllocatorInstance,piVar1,
                       &(this->MaterialRemapTable).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x10,0,
           (longlong)(int)(uVar21 - iVar16) << 4);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar16) {
      iVar16 = iVar16 - uVar21;
      if (iVar16 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (iVar16 == 0) goto LAB_14ca22a12;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (this_00,uVar21,iVar16);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->MaterialRemapTable).ArrayMax);
    }
  }
LAB_14ca22a12:
  uVar21 = 0;
  if (0 < (int)param_1[1]._padding_) {
    local_80 = 0;
    do {
      uVar14 = ~uVar21 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar21 < (int)param_1[1]._padding_) {
        uVar22 = uVar14;
      }
      if ((uVar22 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (FNiagaraGeometryCacheReference *)
                (param_1[1]._padding_ + (longlong)(int)uVar21 * 0x48);
      pUVar11 = UNiagaraGeometryCacheRendererProperties::ResolveGeometryCache(this_01,param_2);
      if (pUVar11 != (UGeometryCache *)0x0) {
        uVar22 = 0;
        if ((int)uVar21 < *piVar1) {
          uVar22 = uVar14;
        }
        if ((uVar22 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = (pUVar11->Materials).ArrayNum;
        pFVar23 = (this_00->AllocatorInstance).Data + local_80;
        iVar16 = *(int *)&pFVar23[8].field_0x0;
        pFVar4 = pFVar23 + 8;
        if (iVar16 < (int)uVar22) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar22 - iVar16,(ForAnyElementType *)pFVar23,(int *)pFVar4,
                             (int *)(pFVar23 + 0xc));
          memset((void *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar8 * 4),0,
                 (longlong)(int)(uVar22 - iVar16) << 2);
        }
        else {
          if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
          }
          if ((int)uVar22 < iVar16) {
            iVar16 = iVar16 - uVar22;
            if (iVar16 < 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else if (iVar16 == 0) goto LAB_14ca22bf4;
            _Dst = (void *)(*(longlong *)&pFVar23->field_0x0 + (longlong)(int)uVar22 * 4);
            iVar8 = (*(int *)&pFVar4->field_0x0 - iVar16) - uVar22;
            if (iVar8 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar16 * 4),(longlong)iVar8 << 2);
            }
            *(int *)&pFVar4->field_0x0 = *(int *)&pFVar4->field_0x0 - iVar16;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar4->field_0x0,
                       (int *)(pFVar23 + 0xc));
          }
        }
LAB_14ca22bf4:
        uVar22 = 0;
        if (0 < (pUVar11->Materials).ArrayNum) {
          lVar20 = 0;
          do {
            pUVar12 = FNiagaraGeometryCacheReference::ResolveMaterial(this_01,pUVar11,uVar22);
            plVar2 = (longlong *)this->_padding_;
            lVar6 = this->_padding_;
            for (plVar18 = plVar2; plVar18 != plVar2 + (int)lVar6; plVar18 = plVar18 + 1) {
              pUVar3 = (UMaterialInterface *)*plVar18;
              if (pUVar3 == pUVar12) {
LAB_14ca22d82:
                uVar17 = (undefined4)((longlong)plVar18 - (longlong)plVar2 >> 3);
                goto LAB_14ca22cb1;
              }
              if (pUVar3 != (UMaterialInterface *)0x0) {
                pUVar10 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
                iVar16 = (int)pUVar10->_padding_;
                if ((iVar16 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar16 * 8)
                    == &pUVar10->_padding_)) {
                  pUVar3 = *(UMaterialInterface **)&pUVar3[1].SubsurfaceProfiles.ArrayNum;
                  if (pUVar3 == (UMaterialInterface *)0x0) {
                    bVar7 = pUVar12 == (UMaterialInterface *)0x0;
                  }
                  else {
                    bVar7 = pUVar3 == pUVar12;
                  }
                  if (bVar7) goto LAB_14ca22d82;
                }
              }
            }
            uVar17 = 0xffffffff;
LAB_14ca22cb1:
            uVar9 = 0;
            if ((int)uVar21 < *piVar1) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (this->MaterialRemapTable).AllocatorInstance.Data;
            uVar9 = 0;
            if ((int)uVar22 < *(int *)(pFVar4 + local_80 + 8)) {
              uVar9 = ~uVar22 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar22 = uVar22 + 1;
            *(undefined4 *)(lVar20 + *(longlong *)(pFVar4 + local_80)) = uVar17;
            lVar20 = lVar20 + 4;
          } while ((int)uVar22 < (pUVar11->Materials).ArrayNum);
        }
      }
      local_80 = local_80 + 0x10;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (int)param_1[1]._padding_);
  }
  return;
}

// OnSystemComplete_GameThread @ 14ca24460

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
FNiagaraRendererGeometryCache::OnSystemComplete_GameThread
          (FNiagaraRendererGeometryCache *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IGeometryCacheStreamingManager *pIVar7;
  UObject *pUVar8;
  AActor *this_00;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  
  this_01 = (FWeakObjectPtr *)(this->ComponentPool).AllocatorInstance.Data;
  piVar1 = &(this->ComponentPool).ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = (FWeakObjectPtr *)((longlong)this_01 + (longlong)iVar3 * 0x14);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<FNiagaraRendererGeometryCache::FComponentPoolEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar2) break;
    bVar5 = FWeakObjectPtr::IsValid(this_01);
    if (bVar5) {
      pIVar7 = IGeometryCacheStreamingManager::Get();
      pcVar4 = *(code **)(pIVar7->_padding_ + 0xc0);
      FWeakObjectPtr::Get(this_01);
      (*pcVar4)(pIVar7);
      pUVar8 = FWeakObjectPtr::Get(this_01);
      (**(code **)(*(longlong *)pUVar8 + 0x4a0))(pUVar8);
    }
    this_01 = (FWeakObjectPtr *)&this_01[2].ObjectSerialNumber;
  }
  iVar3 = *piVar1;
  if (iVar3 < 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,-iVar3,&(this->ComponentPool).AllocatorInstance,piVar1,
                       &(this->ComponentPool).ArrayMax);
    DefaultConstructItems<FNiagaraRendererGeometryCache::FComponentPoolEntry,int>
              ((this->ComponentPool).AllocatorInstance.Data + (longlong)iVar6 * 0x14,-iVar3);
  }
  else if (0 < iVar3) {
    *piVar1 = *piVar1 - iVar3;
  }
  this_00 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
  if (this_00 != (AActor *)0x0) {
    (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
    AActor::Destroy(this_00,false,true);
    return;
  }
  return;
}

// PostSystemTick_GameThread @ 14ca25020

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
FNiagaraRendererGeometryCache::PostSystemTick_GameThread
          (FNiagaraRendererGeometryCache *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  FNiagaraParameterStore *this_00;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  ushort uVar4;
  FNiagaraSystemInstance *this_01;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  FNiagaraDataSet *pFVar7;
  double dVar8;
  double dVar9;
  UNiagaraGeometryCacheRendererProperties *pUVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  UNiagaraGeometryCacheRendererProperties *pUVar17;
  FNiagaraTypeDefinition *pFVar18;
  int *piVar19;
  longlong lVar20;
  UWorld *pUVar21;
  ulonglong uVar22;
  USceneComponent *pUVar23;
  UGeometryCacheComponent *pUVar24;
  TQuat<double> *pTVar25;
  IGeometryCacheStreamingManager *pIVar26;
  UObject *pUVar27;
  UObject *pUVar28;
  int iVar29;
  ForAnyElementType FVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  FNiagaraEmitterInstance *pFVar36;
  ulonglong uVar37;
  uint *puVar38;
  ulonglong uVar39;
  ForElementType<unsigned_int> FVar40;
  longlong lVar41;
  FWeakObjectPtr *this_02;
  FNiagaraDataBuffer *pFVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  double adVar46 [2];
  double adVar48 [2];
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined1 auStackY_678 [32];
  char local_627;
  ForAnyElementType local_620;
  undefined8 local_618;
  undefined1 local_610;
  char local_60f;
  uint local_60c;
  uint local_608;
  uint local_604;
  uint local_600;
  float local_5fc;
  float local_5f8;
  int local_5f4;
  UNiagaraGeometryCacheRendererProperties *local_5f0;
  int local_5e8;
  int local_5e4;
  float local_5e0;
  undefined4 local_5dc;
  uint local_5d8;
  uint local_5d4;
  float local_5d0 [2];
  char local_5c8;
  uint local_5c4;
  FScriptContainerElement *local_5c0;
  char local_5b8;
  uint local_5b4;
  FScriptContainerElement *local_5b0;
  char local_5a8;
  uint local_5a4;
  FScriptContainerElement *local_5a0;
  undefined8 local_598;
  FNiagaraEmitterInstance *local_590;
  TVector<float>_u_0 local_588;
  TVector<float>_u_0 local_578;
  char local_568;
  char local_567;
  uint local_564;
  FScriptContainerElement *local_560;
  char local_558;
  uint local_554;
  FScriptContainerElement *local_550;
  TVector<float>_u_0 local_548;
  float local_538;
  char local_534;
  TVector<float>_u_0 local_530;
  FNiagaraDataSet *local_520;
  float local_518;
  char local_514;
  uint local_510;
  uint uStack_50c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_508;
  undefined4 local_500;
  uint uStack_4fc;
  uint uStack_4f8;
  undefined4 uStack_4f4;
  FNiagaraPosition local_4f0;
  FNiagaraDataBuffer *local_4e0;
  USceneComponent *local_4d8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_4d0;
  TPairInitializer<int_&,int_&> local_4b0;
  FNiagaraPosition local_498;
  FNiagaraPosition local_488;
  int local_478;
  int local_474;
  TPairInitializer<int_&,int_&> local_470;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_460;
  longlong *local_440;
  uint uStack_438;
  uint uStack_434;
  TBitArray<FDefaultBitArrayAllocator> *local_430;
  undefined4 uStack_428;
  uint uStack_424;
  uint local_420;
  undefined4 uStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  longlong *local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_408;
  undefined8 uStack_3e8;
  undefined8 local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  float *local_3b8;
  uint *local_3b0;
  TRotator<double> local_3a8;
  TVector<double>_u_0 local_390;
  TRotator<double> local_378;
  TVector<double>_u_0 local_360;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_348;
  undefined4 local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  FNiagaraLWCConverter local_318;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_300;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_27c;
  TQuat<double> local_278;
  TQuat<double> local_258;
  undefined1 local_238 [32];
  ForElementType<unsigned_int> local_218;
  uint local_210;
  int local_20c;
  int local_208;
  int local_204;
  FScriptContainerElement local_200 [8];
  ForAnyElementType local_1f8;
  uint local_1f0;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  undefined1 auVar47 [16];
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_678;
  this_01 = param_2->ParentSystemInstance;
  local_590 = param_2;
  pUVar17 = CastChecked<UNiagaraGeometryCacheRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_1);
  if (this_01 == (FNiagaraSystemInstance *)0x0) {
    return;
  }
  if (pUVar17 == (UNiagaraGeometryCacheRendererProperties *)0x0) {
    return;
  }
  if ((pUVar17->GeometryCaches).ArrayNum == 0) {
    return;
  }
  if (*(char *)((longlong)&this->_padding_ + 4) == '\x01') {
    return;
  }
  local_5f0 = pUVar17;
  local_4d8 = (USceneComponent *)FWeakObjectPtr::Get(&(this_01->AttachComponent).WeakPtr);
  if (local_4d8 == (USceneComponent *)0x0) {
    return;
  }
  if ((((0 < (pUVar17->MaterialParameters).AttributeBindings.ArrayNum) ||
       (0 < (pUVar17->MaterialParameters).ScalarParameters.ArrayNum)) ||
      (0 < (pUVar17->MaterialParameters).VectorParameters.ArrayNum)) ||
     (pFVar36 = local_590, 0 < (pUVar17->MaterialParameters).TextureParameters.ArrayNum)) {
    iVar14 = (int)this->_padding_;
    lVar20 = this->_padding_;
    pcVar5 = *(code **)(this->_padding_ + 0x78);
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar36 = local_590;
    local_3d8._0_4_ = (undefined4)lVar20;
    local_3d8._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
    local_328 = (undefined4)local_3d8;
    uStack_324 = local_3d8._4_4_;
    uStack_31c = uStack_3cc;
    local_3d8 = lVar20;
    iStack_3d0 = iVar14;
    iStack_320 = iVar14;
    (*pcVar5)(this,&pUVar17->MaterialParameters,local_590,&local_328);
    pUVar17 = local_5f0;
  }
  this_00 = &pFVar36->RendererBindings;
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar17->EnabledBinding).ParamMapVariable.TypeDefHandle);
  iVar14 = FNiagaraTypeDefinition::GetSize(pFVar18);
  if ((iVar14 != 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter.GetSizeInBytes() == sizeof(T)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                          ,0x1ae,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar19 = (int *)(**(code **)(this_00->_padding_ + 0x58))
                             (this_00,&(pUVar17->EnabledBinding).ParamMapVariable,0);
  if (piVar19 == (int *)0x0) {
LAB_14ca25228:
    local_5e8 = -1;
  }
  else {
    iVar14 = *piVar19;
    if (iVar14 == -1) goto LAB_14ca25228;
    if (((iVar14 < 0) ||
        ((ulonglong)(longlong)(pFVar36->RendererBindings).ParameterData.ArrayNum <
         (longlong)iVar14 + 4U)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x17f,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_5e8 = *(int *)((pFVar36->RendererBindings).ParameterData.AllocatorInstance.Data + iVar14);
  }
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar17->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
  iVar14 = FNiagaraTypeDefinition::GetSize(pFVar18);
  if ((iVar14 != 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter.GetSizeInBytes() == sizeof(T)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                          ,0x1ae,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar19 = (int *)(**(code **)(this_00->_padding_ + 0x58))
                             (this_00,&(pUVar17->RendererVisibilityTagBinding).ParamMapVariable,0);
  if ((piVar19 == (int *)0x0) || (*piVar19 == -1)) {
    local_5f4 = pUVar17->RendererVisibility;
  }
  else {
    local_5f4 = FNiagaraParameterStore::GetParameterValueFromOffset<int>(this_00,*piVar19);
  }
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar17->ArrayIndexBinding).ParamMapVariable.TypeDefHandle);
  iVar14 = FNiagaraTypeDefinition::GetSize(pFVar18);
  if ((iVar14 != 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter.GetSizeInBytes() == sizeof(T)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                          ,0x1a1,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_627 = '\0';
  piVar19 = (int *)(**(code **)(this_00->_padding_ + 0x58))
                             (this_00,&(pUVar17->ArrayIndexBinding).ParamMapVariable,0);
  local_5e0 = local_5d0[0];
  if ((piVar19 != (int *)0x0) && (*piVar19 != -1)) {
    local_5e0 = (float)FNiagaraParameterStore::GetParameterValueFromOffset<int>(this_00,*piVar19);
    local_627 = '\x01';
  }
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar17->PositionBinding).ParamMapVariable.TypeDefHandle);
  iVar14 = FNiagaraTypeDefinition::GetSize(pFVar18);
  if ((iVar14 != 0xc) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter.GetSizeInBytes() == sizeof(T)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                          ,0x1ae,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar19 = (int *)(**(code **)(this_00->_padding_ + 0x58))
                             (this_00,&(pUVar17->PositionBinding).ParamMapVariable,0);
  if (piVar19 == (int *)0x0) {
LAB_14ca253ce:
    local_5dc = 0;
    uVar51 = 0;
    uVar52 = 0;
  }
  else {
    iVar14 = *piVar19;
    lVar20 = (longlong)iVar14;
    if (iVar14 == -1) goto LAB_14ca253ce;
    if (((iVar14 < 0) ||
        ((ulonglong)(longlong)(pFVar36->RendererBindings).ParameterData.ArrayNum < lVar20 + 0xcU))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x17f,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar6 = (pFVar36->RendererBindings).ParameterData.AllocatorInstance.Data;
    uVar3 = *(undefined8 *)(pFVar6 + lVar20);
    uVar51 = (undefined4)uVar3;
    uVar52 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_5dc = *(undefined4 *)(pFVar6 + lVar20 + 8);
  }
  FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
            (this_00,(TVector<float> *)&local_578._s_0,&(pUVar17->RotationBinding).ParamMapVariable,
             &UE::Math::TVector<float>::ZeroVector);
  FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
            (this_00,(TVector<float> *)&local_588._s_0,&(pUVar17->ScaleBinding).ParamMapVariable,
             &UE::Math::TVector<float>::OneVector);
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar17->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle);
  iVar14 = FNiagaraTypeDefinition::GetSize(pFVar18);
  if ((iVar14 != 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter.GetSizeInBytes() == sizeof(T)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                          ,0x1ae,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar19 = (int *)(**(code **)(this_00->_padding_ + 0x58))
                             (this_00,&(pUVar17->ElapsedTimeBinding).ParamMapVariable,0);
  if (piVar19 == (int *)0x0) {
LAB_14ca254c1:
    fVar50 = 0.0;
  }
  else {
    iVar14 = *piVar19;
    if (iVar14 == -1) goto LAB_14ca254c1;
    if (((iVar14 < 0) ||
        ((ulonglong)(longlong)(pFVar36->RendererBindings).ParameterData.ArrayNum <
         (longlong)iVar14 + 4U)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x17f,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar50 = *(float *)((pFVar36->RendererBindings).ParameterData.AllocatorInstance.Data + iVar14);
  }
  pUVar23 = local_4d8;
  pUVar21 = (UWorld *)local_4d8->_padding_;
  if (pUVar21 == (UWorld *)0x0) {
    pUVar21 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_4d8);
  }
  pFVar36 = local_590;
  fVar53 = (float)pUVar21->RealTimeSeconds;
  FNiagaraSystemInstance::GetLWCConverter(this_01,&local_318,local_590->bLocalSpace);
  bVar12 = FNiagaraRenderer::IsRendererEnabled((FNiagaraRenderer *)this,param_1,pFVar36);
  if (pUVar17->SourceMode != Particles) {
    if (!bVar12) {
      return;
    }
    if (local_5f4 != pUVar17->RendererVisibility) {
      return;
    }
    local_514 = local_627;
    local_5d4 = (0 < (this->ComponentPool).ArrayNum) - 1;
    if (local_627 != '\0') {
      local_518 = local_5e0;
    }
    iVar14 = 0;
    pUVar24 = CreateOrGetPooledComponent
                        (this,pUVar17,pUVar23,pFVar36,(TOptional<int>)&local_518,0,0,
                         (int *)&local_5d4);
    if (pUVar24 == (UGeometryCacheComponent *)0x0) goto LAB_14ca26e7d;
    local_488._8_4_ = local_5dc;
    local_488._4_4_ = uVar52;
    local_488._0_4_ = uVar51;
    FNiagaraLWCConverter::ConvertSimulationPositionToWorld
              (&local_318,(TVector<double> *)&local_360._s_0,&local_488);
    local_378.Pitch = (double)local_578._s_0.X;
    local_378.Yaw = (double)local_578._s_0.Y;
    local_378.Roll = (double)local_578._s_0.Z;
    pTVar25 = UE::Math::TRotator<double>::Quaternion(&local_378,&local_258);
    adVar48[0] = (double)local_588._s_0.X;
    local_2b8 = pTVar25->X;
    dStack_2b0 = pTVar25->Y;
    local_2a8 = pTVar25->Z;
    dStack_2a0 = pTVar25->W;
    local_138.Translation.XY.m128d_f64[0] = local_360._s_0.X;
    local_138.Translation.XY.m128d_f64[1] = local_360._s_0.Y;
    local_138.Translation.ZW.m128d_f64[0] = local_360._s_0.Z;
    local_138.Translation.ZW.m128d_f64[1] = 0.0;
    local_138.Scale3D.ZW.m128d_f64[0] = (double)local_588._s_0.Z;
    adVar48[1] = (double)local_588._s_0.Y;
    local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_138.Rotation.XY.m128d_f64[0] = local_2b8;
    local_138.Rotation.XY.m128d_f64[1] = dStack_2b0;
    local_138.Rotation.ZW.m128d_f64[0] = local_2a8;
    local_138.Rotation.ZW.m128d_f64[1] = dStack_2a0;
    local_138.Scale3D.XY.m128d_f64 = adVar48;
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)pUVar24,&local_138,false,(FHitResult *)0x0,None);
    if ((pUVar24->field_0x9a & 0x10) == 0) {
      UPrimitiveComponent::ResetSceneVelocity((UPrimitiveComponent *)pUVar24);
      USceneComponent::SetVisibility((USceneComponent *)pUVar24,true,Propagate);
      (**(code **)(*(longlong *)pUVar24 + 0x2b8))(pUVar24,0);
    }
    pUVar17 = local_5f0;
    fVar2 = pUVar24->Duration;
    if (local_5f0->bIsLooping != false) {
      if (0.0 <= fVar50) {
        if (fVar50 <= fVar2) goto LAB_14ca26de3;
        auVar47 = roundps((undefined1  [16])adVar48,ZEXT416((uint)(fVar50 / fVar2)),1);
        fVar49 = auVar47._0_4_;
      }
      else {
        auVar47 = roundps((undefined1  [16])adVar48,ZEXT416((uint)(fVar50 / fVar2)),2);
        fVar49 = auVar47._0_4_;
      }
      fVar50 = fVar50 - fVar49 * fVar2;
    }
LAB_14ca26de3:
    lVar20 = (longlong)(int)local_5d4;
    uVar16 = 0;
    if ((int)local_5d4 < (this->ComponentPool).ArrayNum) {
      uVar16 = ~local_5d4 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar6 = (this->ComponentPool).AllocatorInstance.Data;
    UGeometryCacheComponent::TickAtThisTime
              (pUVar24,fVar50,true,fVar50 < *(float *)(pFVar6 + lVar20 * 0x14 + 0xc),
               pUVar17->bIsLooping);
    *(float *)(pFVar6 + lVar20 * 0x14 + 0xc) = fVar50;
    iVar14 = 1;
    *(float *)(pFVar6 + lVar20 * 0x14 + 8) = fVar53;
    *(undefined4 *)(pFVar6 + lVar20 * 0x14 + 0x10) = 0xffffffff;
LAB_14ca26e7d:
    iVar29 = (this->ComponentPool).ArrayNum;
    while( true ) {
      if (iVar29 <= iVar14) {
        return;
      }
      iVar29 = (this->ComponentPool).ArrayNum;
      uVar32 = iVar29 - 1;
      uVar16 = 0;
      if ((int)uVar32 < iVar29) {
        uVar16 = ~uVar32 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) break;
      iVar29 = (this->ComponentPool).ArrayNum;
      pFVar6 = (this->ComponentPool).AllocatorInstance.Data;
      pUVar27 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar6 + (longlong)iVar29 * 0x14 + -0x14));
      if (pUVar27 != (UObject *)0x0) {
        pIVar26 = IGeometryCacheStreamingManager::Get();
        pcVar5 = *(code **)(pIVar26->_padding_ + 0xc0);
        pUVar28 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar6 + (longlong)iVar29 * 0x14 + -0x14));
        (*pcVar5)(pIVar26,pUVar28);
        (**(code **)(*(longlong *)pUVar27 + 0x4a0))(pUVar27,0);
      }
      iVar29 = (this->ComponentPool).ArrayNum;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar36->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                          ,0x3a,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = pFVar36->ParticleDataSet;
  local_520 = pFVar7;
  if ((pFVar7->CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x158,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar42 = pFVar7->CurrentData;
  uVar35 = 0;
  local_5c8 = '\0';
  local_5c4 = 0;
  local_5c0 = (FScriptContainerElement *)0x0;
  if ((pFVar42 != (FNiagaraDataBuffer *)0x0) &&
     (pUVar17->EnabledAccessor != (FNiagaraDataSetAccessor<FNiagaraBool>)0xffffffff)) {
    local_5c8 = '\x01';
    local_5c0 = (pFVar42->Int32Data).AllocatorInstance.Data +
                (int)pUVar17->EnabledAccessor * pFVar42->Int32Stride;
    local_5c4 = pFVar42->NumInstances;
  }
  local_5a8 = '\0';
  local_5a4 = 0;
  local_5a0 = (FScriptContainerElement *)0x0;
  if ((pFVar42 != (FNiagaraDataBuffer *)0x0) &&
     (pUVar17->VisTagAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff)) {
    local_5a8 = '\x01';
    local_5a0 = (pFVar42->Int32Data).AllocatorInstance.Data +
                (int)pUVar17->VisTagAccessor * pFVar42->Int32Stride;
    local_5a4 = pFVar42->NumInstances;
  }
  local_558 = '\0';
  local_554 = 0;
  local_550 = (FScriptContainerElement *)0x0;
  if ((pFVar42 != (FNiagaraDataBuffer *)0x0) &&
     (pUVar17->ArrayIndexAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff)) {
    local_558 = '\x01';
    local_550 = (pFVar42->Int32Data).AllocatorInstance.Data +
                (int)pUVar17->ArrayIndexAccessor * pFVar42->Int32Stride;
    local_554 = pFVar42->NumInstances;
  }
  local_5b8 = '\0';
  local_5b4 = 0;
  local_5b0 = (FScriptContainerElement *)0x0;
  if ((pFVar42 != (FNiagaraDataBuffer *)0x0) &&
     (pUVar17->UniqueIDAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff)) {
    local_5b8 = '\x01';
    local_5b0 = (pFVar42->Int32Data).AllocatorInstance.Data +
                (int)pUVar17->UniqueIDAccessor * pFVar42->Int32Stride;
    local_5b4 = pFVar42->NumInstances;
  }
  local_238._0_8_ = (FScriptContainerElement *)0x0;
  local_238._8_8_ = 0;
  local_218 = (ForElementType<unsigned_int>)0x0;
  local_210 = 0;
  local_20c = 0x80;
  local_208 = -1;
  local_204 = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_620.Data = (FScriptContainerElement *)0x0;
  local_618 = 0;
  uVar16 = 0;
  uVar37 = uVar35;
  local_4e0 = pFVar42;
  if ((pUVar17->bAssignComponentsOnParticleID == false) ||
     (iVar14 = (this->ComponentPool).ArrayNum, uVar37 = 0, iVar14 < 1)) goto LAB_14ca26210;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar14,&local_620,0,(int *)((longlong)&local_618 + 4));
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_1e8,(this->ComponentPool).ArrayNum);
  local_60c = 0;
  uVar37 = uVar35;
  if (0 < (this->ComponentPool).ArrayNum) {
    do {
      uVar33 = (uint)uVar37;
      uVar32 = 0;
      if ((int)uVar33 < (this->ComponentPool).ArrayNum) {
        uVar32 = ~uVar33 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = (this->ComponentPool).AllocatorInstance.Data + ((longlong)(int)uVar33 * 5 + 4) * 4;
      if (*(int *)pFVar6 < 0) {
        if (((local_620.Data <= (FScriptContainerElement *)&local_60c) &&
            ((FScriptContainerElement *)&local_60c < local_620.Data + (longlong)local_618._4_4_ * 4)
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = (int)local_618;
        if ((int)local_618 == local_618._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_620,(int *)((longlong)&local_618 + 4));
        }
        local_618 = CONCAT44(local_618._4_4_,iVar14 + 1);
        *(uint *)(local_620.Data + (longlong)iVar14 * 4) = local_60c;
      }
      else {
        local_3c8 = pFVar6;
        local_3c0 = (FScriptContainerElement *)&local_60c;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_&,int_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_1e8,&local_4b0,(bool *)&local_3c8);
      }
      local_60c = local_60c + 1;
      uVar37 = (ulonglong)local_60c;
    } while ((int)local_60c < (this->ComponentPool).ArrayNum);
  }
  uVar32 = local_1e8._8_4_ - local_1b4;
  if ((uint)(local_238._8_4_ - local_204) < uVar32) {
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar32);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_238,uVar32);
    uVar33 = 1;
    if (3 < uVar32) {
      uVar37 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_4b0.Key._4_4_ = (undefined4)lVar20;
      uVar33 = 1 << ((byte)lVar20 & 0x1f);
    }
    if ((local_1f0 == 0) || ((int)local_1f0 < (int)uVar33)) {
      local_1f0 = uVar33;
      if (local_1f8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4);
      }
      if (uVar33 != 0) {
        uVar32 = uVar33;
        if (uVar33 < 2) {
          if (local_1f8.Data != (FScriptContainerElement *)0x0) {
            uVar32 = 0;
            goto LAB_14ca25998;
          }
        }
        else {
LAB_14ca25998:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1f8,0,uVar32,4);
        }
        if (0 < (int)uVar33) {
          uVar39 = (ulonglong)uVar33;
          uVar37 = uVar35;
          do {
            FVar30.Data = local_200;
            if (local_1f8.Data != (FScriptContainerElement *)0x0) {
              FVar30.Data = local_1f8.Data;
            }
            uVar22 = (longlong)(int)uVar33 - 1U & uVar37;
            uVar37 = uVar37 + 1;
            *(undefined4 *)(FVar30.Data + uVar22 * 4) = 0xffffffff;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
      }
      if (local_1f0 != 0) {
        pTStack_508 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
        local_510 = 0;
        uStack_50c = 1;
        uStack_4fc = 0;
        uStack_4f8 = 0;
        uVar37 = uVar35;
        if (local_210 != 0) {
          FVar40 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
          if (local_218 != (ForElementType<unsigned_int>)0x0) {
            FVar40 = local_218;
          }
          uVar32 = *(uint *)FVar40;
          uVar39 = uVar35;
          while (uVar32 == 0) {
            uStack_4f8 = (int)uVar39 + 0x20;
            uVar39 = (ulonglong)uStack_4f8;
            iVar14 = (int)uVar37;
            local_510 = iVar14 + 1;
            uVar37 = (ulonglong)local_510;
            if ((int)((local_210 - 1) + ((int)(local_210 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_510) goto LAB_14ca25aa2;
            uVar32 = ((uint *)((longlong)FVar40 + 4))[iVar14];
          }
          uStack_50c = -uVar32 & uVar32;
          uVar37 = (ulonglong)uStack_50c * 2 + 1;
          lVar20 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_4b0.Value._0_4_ = (int)lVar20;
          uStack_4fc = (uStack_4f8 - 1) + (int)local_4b0.Value;
          uVar37 = (ulonglong)uStack_4fc;
          if ((int)local_210 < (int)uStack_4fc) {
LAB_14ca25aa2:
            uVar37 = (ulonglong)local_210;
            uStack_4fc = local_210;
          }
        }
        local_500 = 0xffffffff;
        local_470.Value = (int *)local_238;
        local_460._padding_ = CONCAT44(uStack_50c,local_510);
        local_460.CurrentBitIndex = uStack_4fc;
        local_460.UnvisitedBitMask = 0xffffffff;
        local_460._28_4_ = uStack_4f4;
        local_460.BaseBitIndex = uStack_4f8;
        local_460.Array = pTStack_508;
        if ((int)uVar37 < (int)local_210) {
          do {
            lVar20 = *(longlong *)local_470.Value;
            lVar41 = (longlong)(int)uVar37 * 0x10;
            uVar32 = local_1f0 - 1 & *(uint *)(lVar41 + lVar20);
            *(uint *)(lVar41 + 0xc + lVar20) = uVar32;
            FVar30.Data = local_200;
            if (local_1f8.Data != (FScriptContainerElement *)0x0) {
              FVar30.Data = local_1f8.Data;
            }
            uVar39 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar32;
            *(undefined4 *)(lVar41 + 8 + lVar20) = *(undefined4 *)(FVar30.Data + uVar39 * 4);
            *(int *)(FVar30.Data + uVar39 * 4) = (int)uVar37;
            local_460.UnvisitedBitMask = local_460.UnvisitedBitMask & ~local_460._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_460);
            uVar37 = (ulonglong)(uint)local_460.CurrentBitIndex;
          } while (local_460.CurrentBitIndex < (local_460.Array)->NumBits);
        }
      }
    }
  }
  uVar37 = uVar35;
  if (pFVar42->NumInstances != 0) {
    do {
      iVar14 = (int)uVar37;
      lVar20 = (longlong)iVar14;
      if ((local_5b8 == '\0') || ((int)local_5b4 <= iVar14)) {
        local_5d0[0] = -NAN;
      }
      else {
        local_5d0[0] = *(float *)(local_5b0 + lVar20 * 4);
      }
      bVar13 = TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               RemoveAndCopyValue((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                   *)local_1e8,(int)local_5d0[0],(int *)&local_608);
      if (bVar13) {
        if (bVar12) {
          iVar29 = local_5e8;
          if ((local_5c8 != '\0') && (iVar14 < (int)local_5c4)) {
            iVar29 = *(int *)(local_5c0 + lVar20 * 4);
          }
          if (iVar29 != 0) {
            iVar29 = local_5f4;
            if ((local_5a8 != '\0') && (iVar14 < (int)local_5a4)) {
              iVar29 = *(int *)(local_5a0 + lVar20 * 4);
            }
            if (iVar29 == pUVar17->RendererVisibility) {
              local_3b8 = local_5d0;
              local_3b0 = &local_608;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_&,int_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_238,&local_470,(bool *)&local_3b8);
              goto LAB_14ca25dca;
            }
          }
        }
        lVar20 = (longlong)(int)local_608;
        uVar32 = uVar16;
        if ((int)local_608 < (this->ComponentPool).ArrayNum) {
          uVar32 = ~local_608 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar23 = (USceneComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((this->ComponentPool).AllocatorInstance.Data + lVar20 * 0x14)
                                     );
        if ((pUVar23 != (USceneComponent *)0x0) && ((pUVar23->_padding_ & 0x100000) != 0)) {
          (**(code **)(pUVar23->_padding_ + 0x2c0))(pUVar23);
          USceneComponent::SetVisibility(pUVar23,false,Propagate);
        }
        if (((local_620.Data <= (FScriptContainerElement *)&local_608) &&
            ((FScriptContainerElement *)&local_608 < local_620.Data + (longlong)local_618._4_4_ * 4)
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar29 = (int)local_618;
        if ((int)local_618 == local_618._4_4_) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_620,(int *)((longlong)&local_618 + 4));
        }
        local_618 = CONCAT44(local_618._4_4_,iVar29 + 1);
        *(uint *)(local_620.Data + (longlong)iVar29 * 4) = local_608;
        lVar20 = (longlong)(int)local_608;
        uVar32 = uVar16;
        if ((int)local_608 < (this->ComponentPool).ArrayNum) {
          uVar32 = ~local_608 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((this->ComponentPool).AllocatorInstance.Data + lVar20 * 0x14 + 0x10) =
             0xffffffff;
      }
LAB_14ca25dca:
      uVar37 = (ulonglong)(iVar14 + 1U);
    } while (iVar14 + 1U < pFVar42->NumInstances);
  }
  uVar32 = local_1c0;
  uStack_434 = 1;
  uStack_424 = uVar16;
  uStack_438 = uVar16;
  local_420 = uVar16;
  if (local_1c0 != 0) {
    puVar38 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar38 = local_1c8;
    }
    uVar33 = *puVar38;
    uVar37 = uVar35;
    uVar39 = uVar35;
    local_420 = 0;
    uStack_438 = 0;
    while (uVar33 == 0) {
      iVar14 = (int)uVar37;
      local_420 = (int)uVar39 + 0x20;
      uVar39 = (ulonglong)local_420;
      uStack_438 = iVar14 + 1;
      uVar37 = (ulonglong)uStack_438;
      uStack_424 = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_438)
      goto LAB_14ca25e63;
      uVar33 = puVar38[(longlong)iVar14 + 1];
    }
    uStack_434 = -uVar33 & uVar33;
    uVar37 = (ulonglong)uStack_434 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_474 = (int)lVar20;
    uStack_424 = local_474 + -1 + local_420;
    if ((int)local_1c0 < (int)uStack_424) {
      uStack_424 = local_1c0;
    }
  }
LAB_14ca25e63:
  local_440 = (longlong *)local_1e8;
  uStack_41c = local_27c;
  local_430 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
  uVar33 = local_1c0 & 0xffffffe0;
  iStack_418 = local_1e8._8_4_ - local_1b4;
  uStack_428 = 0xffffffff;
  TStack_408.CurrentBitIndex = uStack_424;
  TStack_408.UnvisitedBitMask = 0xffffffff;
  local_5fc = (float)(-1 << ((byte)local_1c0 & 0x1f));
  TStack_408._padding_ = CONCAT44(uStack_434,uStack_438);
  iVar14 = (int)local_1c0 >> 5;
  TStack_408._28_4_ = local_27c;
  TStack_408.BaseBitIndex = local_420;
  uStack_3e8 = CONCAT44(uStack_414,iStack_418);
  local_410 = local_440;
  TStack_408.Array = local_430;
  if (((int)local_1c0 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar32 != local_1c0) {
    puVar38 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar38 = local_1c8;
    }
    uVar32 = (uint)local_5fc & puVar38[iVar14];
    while (uVar32 == 0) {
      lVar20 = (longlong)iVar14;
      uVar33 = uVar33 + 0x20;
      iVar14 = iVar14 + 1;
      uVar32 = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14ca25fb6;
      uVar32 = puVar38[lVar20 + 1];
    }
    uVar37 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_478 = (int)lVar20;
    uVar32 = local_478 + -1 + uVar33;
    if ((int)local_1c0 < (int)uVar32) {
      uVar32 = local_1c0;
    }
  }
LAB_14ca25fb6:
  while( true ) {
    plVar11 = local_410;
    if ((int)local_410[1] - *(int *)((longlong)local_410 + 0x34) != (int)uStack_3e8) {
      local_610 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_610);
    }
    if (((TStack_408.CurrentBitIndex == uVar32) &&
        (TStack_408.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10))) &&
       (plVar11 == (longlong *)local_1e8)) break;
    local_598 = *(undefined8 *)(*plVar11 + (longlong)TStack_408.CurrentBitIndex * 0x10);
    uVar34 = (uint)((ulonglong)local_598 >> 0x20);
    uVar33 = uVar16;
    if ((int)uVar34 < (this->ComponentPool).ArrayNum) {
      uVar33 = ~uVar34 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar23 = (USceneComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((this->ComponentPool).AllocatorInstance.Data +
                                  (longlong)(int)uVar34 * 0x14));
    if ((pUVar23 != (USceneComponent *)0x0) && ((pUVar23->_padding_ & 0x100000) != 0)) {
      (**(code **)(pUVar23->_padding_ + 0x2c0))(pUVar23);
      USceneComponent::SetVisibility(pUVar23,false,Propagate);
    }
    if (((local_620.Data <= (FScriptContainerElement *)((longlong)&local_598 + 4U)) &&
        ((FScriptContainerElement *)((longlong)&local_598 + 4U) <
         local_620.Data + (longlong)local_618._4_4_ * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar14 = (int)local_618;
    if ((int)local_618 == local_618._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_620,(int *)((longlong)&local_618 + 4));
    }
    local_618 = CONCAT44(local_618._4_4_,iVar14 + 1);
    *(uint *)(local_620.Data + (longlong)iVar14 * 4) = local_598._4_4_;
    lVar20 = (longlong)(int)local_598._4_4_;
    uVar33 = uVar16;
    if ((int)local_598._4_4_ < (this->ComponentPool).ArrayNum) {
      uVar33 = ~local_598._4_4_ >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->ComponentPool).AllocatorInstance.Data + lVar20 * 0x14 + 0x10) =
         0xffffffff;
    TStack_408.UnvisitedBitMask = TStack_408.UnvisitedBitMask & ~TStack_408._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_408);
  }
  local_1a0 = 0;
  if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1e8);
  uVar37 = local_618 & 0xffffffff;
  pUVar17 = local_5f0;
LAB_14ca26210:
  fVar2 = __real_b8800000;
  local_5d8 = pUVar17->ComponentCountLimit;
  local_604 = 0;
  uVar39 = uVar35;
  uVar22 = uVar35;
  fVar49 = local_5f8;
  if (pFVar42->NumInstances != 0) {
    do {
      uVar32 = (uint)uVar39;
      if (bVar12) {
        lVar20 = (longlong)(int)uVar32;
        iVar14 = local_5e8;
        if ((local_5c8 != '\0') && ((int)uVar32 < (int)local_5c4)) {
          iVar14 = *(int *)(local_5c0 + lVar20 * 4);
        }
        if (iVar14 != 0) {
          iVar14 = local_5f4;
          if ((local_5a8 != '\0') && ((int)uVar32 < (int)local_5a4)) {
            iVar14 = *(int *)(local_5a0 + lVar20 * 4);
          }
          if (iVar14 == pUVar17->RendererVisibility) {
            iVar14 = -1;
            local_5e4 = -1;
            local_600 = 0xffffffff;
            if (pUVar17->bAssignComponentsOnParticleID == false) {
LAB_14ca26317:
              iVar29 = (int)uVar37;
              uVar33 = (uint)uVar22;
              pFVar42 = local_4e0;
              if ((int)local_5d8 <= (int)((local_238._8_4_ - local_204) + uVar33))
              goto LAB_14ca269a4;
              if (pUVar17->bAssignComponentsOnParticleID == false) {
                local_600 = 0xffffffff;
                if ((int)uVar33 < (this->ComponentPool).ArrayNum) {
                  local_600 = uVar33;
                }
              }
              else if (iVar29 != 0) {
                if (iVar29 < 1) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar29 = (int)local_618;
                }
                iVar31 = iVar29 + -1;
                uVar33 = *(uint *)(local_620.Data + (longlong)iVar31 * 4);
                iVar15 = (iVar29 - iVar31) + -1;
                if (iVar15 != 0) {
                  memmove(local_620.Data + (longlong)iVar31 * 4,
                          local_620.Data + (longlong)iVar31 * 4 + 4,(longlong)iVar15 << 2);
                  iVar29 = (int)local_618;
                }
                local_618 = CONCAT44(local_618._4_4_,iVar29 + -1);
                local_600 = uVar33;
              }
            }
            else {
              if ((local_5b8 != '\0') && ((int)uVar32 < (int)local_5b4)) {
                iVar14 = *(int *)(local_5b0 + lVar20 * 4);
              }
              local_5e4 = iVar14;
              TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              RemoveAndCopyValue((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  *)local_238,iVar14,(int *)&local_600);
              if (local_600 == 0xffffffff) {
                uVar37 = local_618 & 0xffffffff;
                uVar22 = (ulonglong)local_604;
                goto LAB_14ca26317;
              }
            }
            local_5fc = fVar49;
            if (local_627 != '\0') {
              local_5fc = local_5e0;
            }
            if (local_558 == '\0') {
              local_534 = local_627;
              if (local_627 != '\0') goto LAB_14ca26418;
            }
            else {
              if ((int)uVar32 < (int)local_554) {
                local_534 = '\x01';
                local_5fc = *(float *)(local_550 + (longlong)(int)uVar32 * 4);
              }
              else {
                local_534 = '\x01';
                local_5fc = -NAN;
              }
LAB_14ca26418:
              local_538 = local_5fc;
            }
            pUVar24 = CreateOrGetPooledComponent
                                (this,pUVar17,local_4d8,local_590,(TOptional<int>)&local_538,uVar32,
                                 iVar14,(int *)&local_600);
            pUVar10 = local_5f0;
            if (pUVar24 == (UGeometryCacheComponent *)0x0) {
              uVar22 = (ulonglong)local_604;
            }
            else {
              local_4d0.bIsFloat = *(bool *)&pUVar17->PositionAccessor;
              bVar13 = false;
              iVar14 = *(int *)&(pUVar17->PositionAccessor).field_0x4;
              local_4d0.bIsValid = false;
              pFVar42 = local_520->CurrentData;
              local_4d0.NumInstances = 0;
              local_4d0.ComponentData[2] = (uchar *)0x0;
              local_4d0.ComponentData[0] = (uchar *)0x0;
              local_4d0.ComponentData[1] = (uchar *)0x0;
              if ((pFVar42 != (FNiagaraDataBuffer *)0x0) && (iVar14 != -1)) {
                bVar13 = true;
                local_4d0.bIsValid = true;
                if (local_4d0.bIsFloat == false) {
                  local_4d0.ComponentData[0] =
                       (uchar *)((pFVar42->HalfData).AllocatorInstance.Data +
                                iVar14 * pFVar42->HalfStride);
                  local_4d0.ComponentData[1] =
                       (uchar *)((pFVar42->HalfData).AllocatorInstance.Data +
                                (iVar14 + 1) * pFVar42->HalfStride);
                  local_4d0.ComponentData[2] =
                       (uchar *)((pFVar42->HalfData).AllocatorInstance.Data +
                                (iVar14 + 2) * pFVar42->HalfStride);
                }
                else {
                  local_4d0.ComponentData[0] =
                       (uchar *)((pFVar42->FloatData).AllocatorInstance.Data +
                                iVar14 * pFVar42->FloatStride);
                  local_4d0.ComponentData[1] =
                       (uchar *)((pFVar42->FloatData).AllocatorInstance.Data +
                                (iVar14 + 1) * pFVar42->FloatStride);
                  local_4d0.ComponentData[2] =
                       (uchar *)((pFVar42->FloatData).AllocatorInstance.Data +
                                (iVar14 + 2) * pFVar42->FloatStride);
                }
                local_4d0.NumInstances = pFVar42->NumInstances;
              }
              iVar29 = local_4d0.NumInstances;
              FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader
                        ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
                         &local_5f0->RotationAccessor,&local_348,local_520);
              FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader
                        ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
                         &pUVar10->ScaleAccessor,&local_300,local_520);
              local_60f = *(char *)&pUVar10->ElapsedTimeAccessor;
              iVar14 = *(int *)&(pUVar10->ElapsedTimeAccessor).field_0x4;
              local_568 = '\0';
              pFVar42 = local_520->CurrentData;
              local_564 = 0;
              local_560 = (FScriptContainerElement *)0x0;
              if ((pFVar42 != (FNiagaraDataBuffer *)0x0) && (iVar14 != -1)) {
                local_568 = '\x01';
                if (local_60f == '\0') {
                  local_560 = (pFVar42->HalfData).AllocatorInstance.Data +
                              iVar14 * pFVar42->HalfStride;
                }
                else {
                  local_560 = (pFVar42->FloatData).AllocatorInstance.Data +
                              iVar14 * pFVar42->FloatStride;
                }
                local_564 = pFVar42->NumInstances;
              }
              pFVar6 = local_560;
              local_567 = local_60f;
              if ((bVar13) && ((int)uVar32 < iVar29)) {
                FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get(&local_4d0,&local_4f0,uVar32);
                uVar43 = local_4f0._0_4_;
                uVar44 = local_4f0._4_4_;
              }
              else {
                local_4f0._8_4_ = local_5dc;
                local_4f0._4_4_ = uVar52;
                local_4f0._0_4_ = uVar51;
                uVar43 = uVar51;
                uVar44 = uVar52;
              }
              local_498._4_4_ = uVar44;
              local_498._0_4_ = uVar43;
              local_498._8_4_ = local_4f0._8_4_;
              FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                        (&local_318,(TVector<double> *)&local_390._s_0,&local_498);
              if ((local_300.bIsValid == false) || (local_300.NumInstances <= (int)uVar32)) {
                local_548._0_8_ = CONCAT44(local_588._s_0.Y,local_588._s_0.X);
                local_548._s_0.Z = local_588._s_0.Z;
                uVar43 = local_588._s_0.X;
              }
              else {
                FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                          (&local_300,(TVector<float> *)&local_548._s_0,uVar32);
                uVar43 = local_548._s_0.X;
              }
              dVar8 = (double)local_548._s_0.Y;
              dVar9 = (double)local_548._s_0.Z;
              if ((local_348.bIsValid == false) || (local_348.NumInstances <= (int)uVar32)) {
                local_530._0_8_ = CONCAT44(local_578._s_0.Y,local_578._s_0.X);
                local_530._s_0.Z = local_578._s_0.Z;
                uVar44 = local_578._s_0.X;
              }
              else {
                FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                          (&local_348,(TVector<float> *)&local_530._s_0,uVar32);
                uVar44 = local_530._s_0.X;
              }
              local_3a8.Pitch = (double)(float)uVar44;
              local_3a8.Yaw = (double)local_530._s_0.Y;
              local_3a8.Roll = (double)local_530._s_0.Z;
              pTVar25 = UE::Math::TRotator<double>::Quaternion(&local_3a8,&local_278);
              local_2d8 = pTVar25->X;
              dStack_2d0 = pTVar25->Y;
              local_2c8 = pTVar25->Z;
              dStack_2c0 = pTVar25->W;
              local_198.Translation.XY.m128d_f64[1]._0_4_ = SUB84(local_390._s_0.Y,0);
              local_198.Translation.XY.m128d_f64[1]._4_4_ =
                   (undefined4)((ulonglong)local_390._8_8_ >> 0x20);
              local_198.Translation.XY.m128d_f64[0]._0_4_ = local_390._0_4_;
              local_198.Translation.XY.m128d_f64[0]._4_4_ = local_390._4_4_;
              local_198.Translation.ZW.m128d_f64[0] = local_390._s_0.Z;
              local_198.Translation.ZW.m128d_f64[1] = 0.0;
              adVar46[1] = 0.0;
              adVar46[0] = dVar9;
              local_198.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
              local_198.Scale3D.XY.m128d_f64[0] = (double)(float)uVar43;
              local_198.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
              local_198.Rotation.XY.m128d_f64[0] = local_2d8;
              local_198.Rotation.XY.m128d_f64[1] = dStack_2d0;
              local_198.Rotation.ZW.m128d_f64[0] = local_2c8;
              local_198.Rotation.ZW.m128d_f64[1] = dStack_2c0;
              local_198.Scale3D.ZW.m128d_f64 = adVar46;
              USceneComponent::SetRelativeTransform
                        ((USceneComponent *)pUVar24,&local_198,false,(FHitResult *)0x0,None);
              if ((pUVar24->field_0x9a & 0x10) == 0) {
                UPrimitiveComponent::ResetSceneVelocity((UPrimitiveComponent *)pUVar24);
                USceneComponent::SetVisibility((USceneComponent *)pUVar24,true,Propagate);
                (**(code **)(*(longlong *)pUVar24 + 0x2b8))(pUVar24,0);
              }
              fVar49 = fVar50;
              if ((local_568 != '\0') && ((int)uVar32 < (int)local_564)) {
                if (local_60f == '\0') {
                  uVar4 = *(ushort *)(pFVar6 + (longlong)(int)uVar32 * 2);
                  uVar33 = (uVar4 & 0x7fff) * 0x2000;
                  fVar49 = (float)(uVar33 + 0x38000000);
                  if ((uVar33 & 0xf800000) == 0xf800000) {
                    fVar49 = (float)((uVar4 & 0x8000) << 0x10 | uVar33 + 0x70000000);
                  }
                  else {
                    if ((uVar33 & 0xf800000) == 0) {
                      fVar49 = (float)(uVar33 + 0x38800000) + fVar2;
                      local_5f8 = fVar49;
                    }
                    fVar49 = (float)((uVar4 & 0x8000) << 0x10 | (uint)fVar49);
                  }
                }
                else {
                  fVar49 = *(float *)(pFVar6 + (longlong)(int)uVar32 * 4);
                }
              }
              fVar1 = pUVar24->Duration;
              if (local_5f0->bIsLooping != false) {
                if (0.0 <= fVar49) {
                  if (fVar49 <= fVar1) goto LAB_14ca268c0;
                  auVar47 = roundps((undefined1  [16])adVar46,ZEXT416((uint)(fVar49 / fVar1)),1);
                  fVar45 = auVar47._0_4_;
                }
                else {
                  auVar47 = roundps((undefined1  [16])adVar46,ZEXT416((uint)(fVar49 / fVar1)),2);
                  fVar45 = auVar47._0_4_;
                }
                fVar49 = fVar49 - fVar45 * fVar1;
              }
LAB_14ca268c0:
              lVar20 = (longlong)(int)local_600;
              uVar33 = uVar16;
              if ((int)local_600 < (this->ComponentPool).ArrayNum) {
                uVar33 = ~local_600 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar6 = (this->ComponentPool).AllocatorInstance.Data;
              if (((pUVar24->bManualTick != false) &&
                  ((pUVar24->GeometryCache).field0_0x0.DebugPtr != (UGeometryCache *)0x0)) &&
                 (pUVar24->bRunning != false)) {
                UGeometryCacheComponent::JumpAnimationToTime
                          (pUVar24,fVar49,true,fVar49 < *(float *)(pFVar6 + lVar20 * 0x14 + 0xc),
                           local_5f0->bIsLooping);
              }
              local_604 = local_604 + 1;
              uVar22 = (ulonglong)local_604;
              *(float *)(pFVar6 + lVar20 * 0x14 + 0xc) = fVar49;
              *(float *)(pFVar6 + lVar20 * 0x14 + 8) = fVar53;
              *(int *)(pFVar6 + lVar20 * 0x14 + 0x10) = local_5e4;
              pUVar17 = local_5f0;
              if ((int)local_5d8 <= (int)local_604) break;
            }
            uVar37 = local_618 & 0xffffffff;
            pFVar42 = local_4e0;
            fVar49 = local_5fc;
          }
        }
      }
LAB_14ca269a4:
      uVar39 = (ulonglong)(uVar32 + 1);
    } while (uVar32 + 1 < pFVar42->NumInstances);
  }
  iVar14 = (this->ComponentPool).ArrayNum;
  if (((int)uVar22 < iVar14) && (uVar37 = uVar35, 0 < iVar14)) {
    do {
      uVar32 = (uint)uVar35;
      uVar16 = 0;
      if ((int)uVar32 < (this->ComponentPool).ArrayNum) {
        uVar16 = ~uVar32 >> 0x1f;
      }
      uVar33 = (uint)uVar22;
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar33 = local_604, bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_02 = (FWeakObjectPtr *)((this->ComponentPool).AllocatorInstance.Data + uVar37);
      if (local_5f0->bAssignComponentsOnParticleID == false) {
        if ((int)uVar33 <= (int)uVar32) goto LAB_14ca26ac9;
      }
      else if (this_02[2].ObjectIndex < 0) {
LAB_14ca26ac9:
        pUVar23 = (USceneComponent *)FWeakObjectPtr::Get(this_02);
        if (pUVar23 != (USceneComponent *)0x0) {
          if (fVar53 - (float)this_02[1].ObjectIndex <
              GNiagaraGeometryComponentRenderPoolInactiveTimeLimit) {
            if ((pUVar23->_padding_ & 0x100000) != 0) {
              (**(code **)(pUVar23->_padding_ + 0x2c0))(pUVar23);
              USceneComponent::SetVisibility(pUVar23,false,Propagate);
            }
            goto LAB_14ca26a74;
          }
          pIVar26 = IGeometryCacheStreamingManager::Get();
          pcVar5 = *(code **)(pIVar26->_padding_ + 0xc0);
          pUVar27 = FWeakObjectPtr::Get(this_02);
          (*pcVar5)(pIVar26,pUVar27);
          (**(code **)(pUVar23->_padding_ + 0x4a0))(pUVar23,0);
        }
        uVar16 = 0;
        if ((int)uVar32 < (this->ComponentPool).ArrayNum) {
          uVar16 = ~uVar32 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = (this->ComponentPool).ArrayNum;
        pFVar6 = (this->ComponentPool).AllocatorInstance.Data;
        iVar29 = ~uVar32 + iVar14;
        if (1 < iVar29) {
          iVar29 = 1;
        }
        if (iVar29 != 0) {
          memmove(pFVar6 + (longlong)(int)uVar32 * 0x14,pFVar6 + (longlong)(iVar14 - iVar29) * 0x14,
                  (longlong)iVar29 * 0x14);
        }
        piVar19 = &(this->ComponentPool).ArrayNum;
        *piVar19 = *piVar19 + -1;
        uVar32 = uVar32 - 1;
        uVar37 = uVar37 - 0x14;
      }
LAB_14ca26a74:
      uVar22 = (ulonglong)local_604;
      uVar35 = (ulonglong)(uVar32 + 1);
      uVar37 = uVar37 + 0x14;
    } while ((int)(uVar32 + 1) < (this->ComponentPool).ArrayNum);
  }
  if (local_620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data);
  }
  local_1f0 = 0;
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_238);
  return;
}

// ResetComponentPool @ 14ca29ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraRendererGeometryCache::ResetComponentPool(FNiagaraRendererGeometryCache *this,bool param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IGeometryCacheStreamingManager *pIVar7;
  UObject *pUVar8;
  AActor *this_00;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  char local_res10;
  
  this_01 = (FWeakObjectPtr *)(this->ComponentPool).AllocatorInstance.Data;
  piVar1 = &(this->ComponentPool).ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = (FWeakObjectPtr *)((longlong)this_01 + (longlong)iVar3 * 0x14);
  local_res10 = param_1;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<FNiagaraRendererGeometryCache::FComponentPoolEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar2) break;
    bVar5 = FWeakObjectPtr::IsValid(this_01);
    if (bVar5) {
      pIVar7 = IGeometryCacheStreamingManager::Get();
      pcVar4 = *(code **)(pIVar7->_padding_ + 0xc0);
      FWeakObjectPtr::Get(this_01);
      (*pcVar4)(pIVar7);
      pUVar8 = FWeakObjectPtr::Get(this_01);
      (**(code **)(*(longlong *)pUVar8 + 0x4a0))(pUVar8);
    }
    this_01 = (FWeakObjectPtr *)&this_01[2].ObjectSerialNumber;
  }
  iVar3 = *piVar1;
  if (iVar3 < 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,-iVar3,&(this->ComponentPool).AllocatorInstance,piVar1,
                       &(this->ComponentPool).ArrayMax);
    DefaultConstructItems<FNiagaraRendererGeometryCache::FComponentPoolEntry,int>
              ((this->ComponentPool).AllocatorInstance.Data + (longlong)iVar6 * 0x14,-iVar3);
  }
  else if (0 < iVar3) {
    *piVar1 = *piVar1 - iVar3;
  }
  if (local_res10 != '\0') {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
    if (this_00 != (AActor *)0x0) {
      (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
      AActor::Destroy(this_00,false,true);
    }
  }
  return;
}

