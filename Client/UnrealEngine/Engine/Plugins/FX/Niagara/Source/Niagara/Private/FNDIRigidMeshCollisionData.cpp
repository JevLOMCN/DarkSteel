// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// HasActors @ 1491d1080

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

bool __thiscall FNDIRigidMeshCollisionData::HasActors(FNDIRigidMeshCollisionData *this)

{
  if (((this->ExplicitActors).ArrayNum == 0) && ((this->FoundActors).ArrayNum == 0)) {
    return false;
  }
  return true;
}

// Init @ 1491d1f60

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

void __thiscall FNDIRigidMeshCollisionData::Init(FNDIRigidMeshCollisionData *this,int param_1)

{
  TUniquePtr<FNDIRigidMeshCollisionArrays,TDefaultDelete<FNDIRigidMeshCollisionArrays>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FNDIRigidMeshCollisionArrays *pFVar3;
  FNDIRigidMeshCollisionArrays *pFVar4;
  FNDIRigidMeshCollisionArrays *pFVar5;
  TDefaultDelete<FNDIRigidMeshCollisionArrays> local_18 [16];
  
  pFVar5 = (FNDIRigidMeshCollisionArrays *)0x0;
  if (((this->ExplicitActors).ArrayNum == 0) && ((this->FoundActors).ArrayNum == 0)) {
    pFVar5 = (this->AssetArrays).Ptr;
    if (pFVar5 != (FNDIRigidMeshCollisionArrays *)0x0) {
      (this->AssetArrays).Ptr = (FNDIRigidMeshCollisionArrays *)0x0;
      TDefaultDelete<FNDIRigidMeshCollisionArrays>::operator()
                ((TDefaultDelete<FNDIRigidMeshCollisionArrays> *)&this->AssetArrays,pFVar5);
      ReleaseBuffers(this);
    }
  }
  else {
    this_00 = &this->AssetArrays;
    if ((this->AssetArrays).Ptr == (FNDIRigidMeshCollisionArrays *)0x0) {
      pFVar3 = ::operator_new(0xc0);
      pFVar4 = pFVar5;
      if (pFVar3 != (FNDIRigidMeshCollisionArrays *)0x0) {
        pFVar4 = FNDIRigidMeshCollisionArrays::FNDIRigidMeshCollisionArrays(pFVar3,param_1);
      }
      if ((TDefaultDelete<FNDIRigidMeshCollisionArrays> *)this_00 == local_18) {
        if (pFVar4 != (FNDIRigidMeshCollisionArrays *)0x0) {
          pFVar2 = (pFVar4->UniqueCompnentId).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->ComponentIdIndex).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->PhysicsType).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->MeshScale).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->ElementExtent).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->PreviousInverse).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->PreviousTransform).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->CurrentInverse).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          pFVar2 = (pFVar4->CurrentTransform).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar4,0xc0);
        }
      }
      else {
        pFVar3 = this_00->Ptr;
        this_00->Ptr = pFVar4;
        TDefaultDelete<FNDIRigidMeshCollisionArrays>::operator()
                  ((TDefaultDelete<FNDIRigidMeshCollisionArrays> *)this_00,pFVar3);
      }
      pFVar4 = ::operator_new(0xb8);
      if (pFVar4 != (FNDIRigidMeshCollisionArrays *)0x0) {
        memset(pFVar4,0,0xb8);
        FRenderResource::FRenderResource((FRenderResource *)pFVar4);
        *(undefined ***)&pFVar4->ElementOffsets = &___7FNDIRigidMeshCollisionBuffer__6B_;
        (pFVar4->CurrentInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->CurrentInverse).ArrayNum = 0;
        (pFVar4->CurrentInverse).ArrayMax = 0;
        *(undefined4 *)&(pFVar4->PreviousTransform).AllocatorInstance.Data = 0;
        (pFVar4->PreviousTransform).ArrayNum = 0;
        (pFVar4->PreviousTransform).ArrayMax = 0;
        (pFVar4->PreviousInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->PreviousInverse).ArrayNum = 0;
        (pFVar4->ElementExtent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->ElementExtent).ArrayNum = 0;
        (pFVar4->ElementExtent).ArrayMax = 0;
        *(undefined4 *)&(pFVar4->MeshScale).AllocatorInstance.Data = 0;
        (pFVar4->MeshScale).ArrayNum = 0;
        (pFVar4->MeshScale).ArrayMax = 0;
        (pFVar4->PhysicsType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->PhysicsType).ArrayNum = 0;
        (pFVar4->ComponentIdIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->ComponentIdIndex).ArrayNum = 0;
        (pFVar4->ComponentIdIndex).ArrayMax = 0;
        *(undefined4 *)&(pFVar4->UniqueCompnentId).AllocatorInstance.Data = 0;
        (pFVar4->UniqueCompnentId).ArrayNum = 0;
        (pFVar4->UniqueCompnentId).ArrayMax = 0;
        *(undefined8 *)&(pFVar4->CombinedBBoxWorldMin).field0_0x0 = 0;
        (pFVar4->CombinedBBoxWorldMin).field0_0x0._s_0.Z = 0.0;
        pFVar5 = pFVar4;
      }
      this->AssetBuffer = (FNDIRigidMeshCollisionBuffer *)pFVar5;
      *(int *)((longlong)&(pFVar5->CombinedBBoxWorldMax).field0_0x0 + 8) = param_1 * 2;
      (pFVar5->CombinedBBoxWorldMax).field0_0x0._s_0.Y = (float)param_1;
      BeginInitResource((FRenderResource *)this->AssetBuffer,(FRenderCommandPipe *)0x0);
    }
    FNDIRigidMeshCollisionArrays::Reset(this_00->Ptr);
  }
  piVar1 = &(this->MeshBodyCounts).ArrayMax;
  (this->MeshBodyCounts).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->MeshBodyCounts).AllocatorInstance,0,piVar1);
  }
  this->bRequiresFullUpdate = true;
  return;
}

// MergeActors @ 1491d4410

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
FNDIRigidMeshCollisionData::MergeActors
          (FNDIRigidMeshCollisionData *this,
          TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  uint uVar1;
  
  uVar1 = (this->FoundActors).ArrayNum + (this->ExplicitActors).ArrayNum;
  if (-1 < (int)uVar1) {
    if (param_1->ArrayMax < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                (8,8,uVar1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    Algo::
    ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
              (&this->ExplicitActors,(<lambda_1>)param_1);
    Algo::
    ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
              (&this->FoundActors,(<lambda_1>)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ReleaseBuffers @ 1491de7f0

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

void __thiscall FNDIRigidMeshCollisionData::ReleaseBuffers(FNDIRigidMeshCollisionData *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNDIRigidMeshCollisionBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNDIRigidMeshCollisionBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->AssetBuffer;
  if (pFStack_70 != (FNDIRigidMeshCollisionBuffer *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIRigidMeshCollisionData::ReleaseBuffers_::__l5::TSTR_DeleteResource812>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::TSTR_DeleteResource812>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    this->AssetBuffer = (FNDIRigidMeshCollisionBuffer *)0x0;
  }
  return;
}

// ShouldRunGlobalSearch @ 1491e1c50

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
FNDIRigidMeshCollisionData::ShouldRunGlobalSearch
          (FNDIRigidMeshCollisionData *this,UNiagaraDataInterfaceRigidMeshCollisionQuery *param_1)

{
  if ((param_1->GlobalSearchAllowed != false) &&
     ((param_1->GlobalSearchForced != false ||
      ((param_1->GlobalSearchFallback_Unscripted != false && (this->bHasScriptedFindActor == false))
      )))) {
    return true;
  }
  return false;
}

// TrimMissingActors @ 1491e3870

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FNDIRigidMeshCollisionData::TrimMissingActors(FNDIRigidMeshCollisionData *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (this->ExplicitActors).ArrayNum;
  iVar3 = Algo::
          StableRemoveIf<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,_FNDIRigidMeshCollisionData::TrimMissingActors_::__l2::<lambda_1>_>
                    (&this->ExplicitActors,(<lambda_1>)0x0);
  TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ExplicitActors,iVar3,Default);
  iVar3 = (this->FoundActors).ArrayNum;
  iVar4 = Algo::
          StableRemoveIf<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,_FNDIRigidMeshCollisionData::TrimMissingActors_::__l2::<lambda_1>_>
                    (&this->FoundActors,(<lambda_1>)0x0);
  TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->FoundActors,iVar4,Default);
  if ((iVar1 == (this->ExplicitActors).ArrayNum) && (iVar3 == (this->FoundActors).ArrayNum)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// Update @ 1491e3bb0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNDIRigidMeshCollisionData::Update
          (FNDIRigidMeshCollisionData *this,UNiagaraDataInterfaceRigidMeshCollisionQuery *param_1)

{
  UStaticMeshComponent **ppUVar1;
  USkeletalMeshComponent **ppUVar2;
  FNiagaraSystemInstance *pFVar3;
  UNiagaraSystem *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArrayView<FName_const_,int> *pTVar9;
  UStaticMeshComponent **ppUVar10;
  USkeletalMeshComponent **ppUVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_3d8 [32];
  FIdentityFunctor local_388;
  undefined1 local_387;
  undefined1 local_386 [2];
  uint local_384;
  uint local_380;
  uint local_37c;
  ForElementType<AActor_*> local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FString local_368;
  FName local_358 [2];
  ForElementType<AActor_*> local_348;
  int iStack_340;
  undefined4 uStack_33c;
  UStaticMeshComponent **local_338;
  uint uStack_330;
  undefined4 uStack_32c;
  TVector<double>_u_0 local_328;
  TArrayView<FName_const_,int> local_308;
  TArrayView<AActor_*_const,int> local_2f8;
  TArrayView<FName_const_,int> local_2e8;
  TArrayView<AActor_*_const,int> local_2d8;
  TArrayView<USkeletalMeshComponent_*_const,int> local_2c8;
  TArrayView<UStaticMeshComponent_*_const,int> local_2b8;
  TArrayView<FName_const_,int> local_2a8;
  TArrayView<FName_const_,int> local_298;
  ForElementType<AActor_*> local_288;
  int local_200;
  int local_1fc;
  undefined1 local_1f8 [192];
  USkeletalMeshComponent **local_138;
  int local_130;
  undefined4 local_12c;
  undefined1 local_128 [192];
  UStaticMeshComponent **local_68;
  uint local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  if (param_1 != (UNiagaraDataInterfaceRigidMeshCollisionQuery *)0x0) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
    if (this->SystemInstance != (FNiagaraSystemInstance *)0x0) {
      UNiagaraDataInterfaceRigidMeshCollisionQuery::GetExplicitActors(param_1,this);
      if ((param_1->GlobalSearchAllowed != false) &&
         ((param_1->GlobalSearchForced != false ||
          ((param_1->GlobalSearchFallback_Unscripted != false &&
           (this->bHasScriptedFindActor == false)))))) {
        UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalFindActors
                  (param_1,this->SystemInstance->World,this);
      }
      if (((this->ExplicitActors).ArrayNum == 0) && ((this->FoundActors).ArrayNum == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((this->AssetArrays).Ptr != (FNDIRigidMeshCollisionArrays *)0x0) != bVar6) {
        Init(this,param_1->MaxNumPrimitives);
      }
      if (bVar6 == false) {
        this->bRequiresFullUpdate = false;
      }
      else {
        iVar7 = Algo::
                StableRemoveIf<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,_FNDIRigidMeshCollisionData::TrimMissingActors_::__l2::<lambda_1>_>
                          (&this->ExplicitActors,(<lambda_1>)0x0);
        TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->ExplicitActors,iVar7,Default);
        iVar7 = Algo::
                StableRemoveIf<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,_FNDIRigidMeshCollisionData::TrimMissingActors_::__l2::<lambda_1>_>
                          (&this->FoundActors,(<lambda_1>)0x0);
        TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->FoundActors,iVar7,Default);
        uVar13 = 0;
        uVar14 = (this->FoundActors).ArrayNum + (this->ExplicitActors).ArrayNum;
        local_68 = (UStaticMeshComponent **)0x0;
        local_60 = 0;
        local_5c = 0x18;
        local_138 = (USkeletalMeshComponent **)0x0;
        local_130 = 0;
        local_12c = 0x18;
        local_288.SecondaryData = (ForElementType<AActor_*>)0x0;
        local_200 = 0;
        local_1fc = 0x10;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (0x10 < (int)uVar14) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                    (8,8,uVar14,&local_288,0,&local_1fc);
        }
        Algo::
        ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
                  (&this->ExplicitActors,
                   (TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                   &local_288);
        Algo::
        ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
                  (&this->FoundActors,
                   (TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                   &local_288);
        pTVar9 = TArrayView<FName_const_,int>::
                 TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                           (&local_2a8,&param_1->ComponentTags);
        iStack_340 = local_200;
        local_308.DataPtr = pTVar9->DataPtr;
        local_308.ArrayNum = pTVar9->ArrayNum;
        local_308._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
        local_348 = (ForElementType<AActor_*>)&local_288;
        if (local_288.SecondaryData != (ForElementType<AActor_*>)0x0) {
          local_348 = local_288.SecondaryData;
        }
        if ((local_200 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2f8._12_4_ = uStack_33c;
        local_2f8.ArrayNum = iStack_340;
        local_2f8.DataPtr = (AActor **)local_348;
        NDIRigidMeshCollisionLocal::
        GenerateComponentList<UStaticMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<UStaticMeshComponent>_::__l2::<lambda_1>_>
                  (&local_2f8,&local_308,(<lambda_1>)0x0,
                   (TInlineComponentArray<UStaticMeshComponent_*,24> *)local_128);
        pTVar9 = TArrayView<FName_const_,int>::
                 TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                           (&local_298,&param_1->ComponentTags);
        iStack_370 = local_200;
        local_2e8.DataPtr = pTVar9->DataPtr;
        local_2e8.ArrayNum = pTVar9->ArrayNum;
        local_2e8._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
        local_378 = (ForElementType<AActor_*>)&local_288;
        if (local_288.SecondaryData != (ForElementType<AActor_*>)0x0) {
          local_378 = local_288.SecondaryData;
        }
        if ((local_200 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2d8._12_4_ = uStack_36c;
        local_2d8.ArrayNum = iStack_370;
        local_2d8.DataPtr = (AActor **)local_378;
        NDIRigidMeshCollisionLocal::
        GenerateComponentList<USkeletalMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<USkeletalMeshComponent>_::__l2::<lambda_1>_>
                  (&local_2d8,&local_2e8,(<lambda_1>)0x0,
                   (TInlineComponentArray<USkeletalMeshComponent_*,24> *)local_1f8);
        ppUVar10 = (UStaticMeshComponent **)local_128;
        if (local_68 != (UStaticMeshComponent **)0x0) {
          ppUVar10 = local_68;
        }
        AlgoImpl::
        IntroSortInternal<UStaticMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<UStaticMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
                  (ppUVar10,local_60,local_388,(<lambda_1> *)&local_387);
        ppUVar11 = (USkeletalMeshComponent **)local_1f8;
        if (local_138 != (USkeletalMeshComponent **)0x0) {
          ppUVar11 = local_138;
        }
        AlgoImpl::
        IntroSortInternal<USkeletalMeshComponent_*,int,FIdentityFunctor,TDereferenceWrapper<USkeletalMeshComponent_*,_FNDIRigidMeshCollisionData::Update_::__l15::<lambda_1>_>_>
                  (ppUVar11,local_130,local_388,(<lambda_1> *)&local_387);
        uVar14 = local_60;
        uVar12 = (ulonglong)(int)local_60;
        ppUVar10 = (UStaticMeshComponent **)local_128;
        if (local_68 != (UStaticMeshComponent **)0x0) {
          ppUVar10 = local_68;
        }
        ppUVar1 = ppUVar10 + uVar12;
        while( true ) {
          if ((uint)uVar12 != uVar14) {
            local_386[0] = 0;
            `TCheckedPointerIterator<UStaticMeshComponent_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_386);
          }
          iVar7 = local_130;
          if (ppUVar10 == ppUVar1) break;
          uVar8 = NDIRigidMeshCollisionLocal::MeshComponentHash(*ppUVar10);
          uVar13 = uVar13 - uVar8 ^ uVar8 >> 0xd;
          uVar15 = (-0x61c88647 - uVar8) - uVar13 ^ uVar13 << 8;
          uVar8 = (uVar8 - uVar15) - uVar13 ^ uVar15 >> 0xd;
          uVar13 = (uVar13 - uVar8) - uVar15 ^ uVar8 >> 0xc;
          uVar15 = (uVar15 - uVar13) - uVar8 ^ uVar13 << 0x10;
          uVar8 = (uVar8 - uVar15) - uVar13 ^ uVar15 >> 5;
          uVar13 = (uVar13 - uVar8) - uVar15 ^ uVar8 >> 3;
          uVar15 = (uVar15 - uVar13) - uVar8 ^ uVar13 << 10;
          uVar12 = (ulonglong)local_60;
          uVar13 = (uVar8 - uVar15) - uVar13 ^ uVar15 >> 0xf;
          ppUVar10 = ppUVar10 + 1;
        }
        ppUVar11 = (USkeletalMeshComponent **)local_1f8;
        if (local_138 != (USkeletalMeshComponent **)0x0) {
          ppUVar11 = local_138;
        }
        ppUVar2 = ppUVar11 + local_130;
        while( true ) {
          if (local_130 != iVar7) {
            local_388 = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<USkeletalMeshComponent_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_388);
          }
          if (ppUVar11 == ppUVar2) break;
          uVar14 = NDIRigidMeshCollisionLocal::MeshComponentHash(*ppUVar11);
          uVar13 = uVar13 - uVar14 ^ uVar14 >> 0xd;
          uVar8 = (-0x61c88647 - uVar14) - uVar13 ^ uVar13 << 8;
          uVar14 = (uVar14 - uVar8) - uVar13 ^ uVar8 >> 0xd;
          uVar13 = (uVar13 - uVar14) - uVar8 ^ uVar14 >> 0xc;
          uVar8 = (uVar8 - uVar13) - uVar14 ^ uVar13 << 0x10;
          uVar14 = (uVar14 - uVar8) - uVar13 ^ uVar8 >> 5;
          uVar13 = (uVar13 - uVar14) - uVar8 ^ uVar14 >> 3;
          uVar8 = (uVar8 - uVar13) - uVar14 ^ uVar13 << 10;
          uVar13 = (uVar14 - uVar8) - uVar13 ^ uVar8 >> 0xf;
          ppUVar11 = ppUVar11 + 1;
        }
        if (uVar13 != this->ComponentCollectionHash) {
          this->ComponentCollectionHash = uVar13;
          this->bRequiresFullUpdate = true;
        }
        if (local_288.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FMemory::Free((void *)local_288.SecondaryData);
        }
        uVar13 = local_60;
        ppUVar10 = (UStaticMeshComponent **)local_128;
        if (local_68 != (UStaticMeshComponent **)0x0) {
          ppUVar10 = local_68;
        }
        if (((int)local_60 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = local_130;
        uStack_330 = uVar13;
        ppUVar11 = (USkeletalMeshComponent **)local_1f8;
        if (local_138 != (USkeletalMeshComponent **)0x0) {
          ppUVar11 = local_138;
        }
        local_338 = ppUVar10;
        if ((local_130 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = this->SystemInstance;
        local_328._s_0.Y = (double)(pFVar3->LWCTile).field0_0x0._s_0.Y;
        iStack_370 = iVar7;
        local_37c = 0;
        local_380 = 0;
        local_384 = 0;
        local_328._s_0.X = (double)(pFVar3->LWCTile).field0_0x0._s_0.X;
        local_328._s_0.Z = (double)(pFVar3->LWCTile).field0_0x0._s_0.Z;
        local_2c8._12_4_ = uStack_36c;
        local_2c8.ArrayNum = iVar7;
        local_2b8._12_4_ = uStack_32c;
        local_2b8.ArrayNum = uStack_330;
        local_2b8.DataPtr = local_338;
        local_378 = (ForElementType<AActor_*>)ppUVar11;
        local_2c8.DataPtr = ppUVar11;
        bVar6 = NDIRigidMeshCollisionLocal::UpdateInternalArrays
                          (pFVar3,&local_2b8,&local_2c8,(TVector<double> *)&local_328._s_0,
                           this->bRequiresFullUpdate,&this->MeshBodyCounts,(this->AssetArrays).Ptr,
                           &local_37c,&local_380,&local_384);
        if (bVar6) {
          this->bRequiresFullUpdate = false;
          this->bExceedingComponentLimits = false;
        }
        else if ((((this->AssetArrays).Ptr)->MaxPrimitives < local_384 + local_380 + local_37c) &&
                (this->bExceedingComponentLimits == false)) {
          if (2 < (byte)LogRigidMeshCollision._0_1_) {
            pUVar4 = this->SystemInstance->System;
            if (pUVar4 == (UNiagaraSystem *)0x0) {
              ::FString::FString(&local_368,L"None");
            }
            else {
              local_358[0] = (FName)pUVar4->_padding_;
              ::FName::ToString(local_358,&local_368);
            }
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogRigidMeshCollision);
            if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Data.AllocatorInstance.Data);
            }
          }
          this->bExceedingComponentLimits = true;
        }
        if (local_138 != (USkeletalMeshComponent **)0x0) {
          FMemory::Free(local_138);
        }
        if (local_68 != (UStaticMeshComponent **)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
  }
  return;
}

