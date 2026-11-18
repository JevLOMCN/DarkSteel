// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14788e430

UScriptStruct * __cdecl FChildActorComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChildActorComponentInstanceData,
                         (UObject *)pUVar1,L"ChildActorComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FChildActorComponentInstanceData.OuterSingleton;
}

// ContainsData @ 14788e470

bool __thiscall
FChildActorComponentInstanceData::ContainsData(FChildActorComponentInstanceData *this)

{
  FComponentInstanceDataCache *pFVar1;
  bool bVar2;
  
  if (((this->AttachedActors).ArrayNum < 1) &&
     ((pFVar1 = (this->ComponentInstanceData).Object, pFVar1 == (FComponentInstanceDataCache *)0x0
      || ((pFVar1->ComponentsInstanceData).ArrayNum < 1)))) {
    bVar2 = FSceneComponentInstanceData::ContainsData((FSceneComponentInstanceData *)this);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// ApplyToComponent @ 14788e4b0

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
FChildActorComponentInstanceData::ApplyToComponent
          (FChildActorComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<UChildActorComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UChildActorComponent::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    UChildActorComponent::ApplyComponentInstanceData((UChildActorComponent *)param_1,this,param_2);
    return;
  }
  pFVar3 = GetTypeName<UChildActorComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AddReferencedObjects @ 14788e590

void __thiscall
FChildActorComponentInstanceData::AddReferencedObjects
          (FChildActorComponentInstanceData *this,FReferenceCollector *param_1)

{
  FComponentInstanceDataCache *this_00;
  
  FSceneComponentInstanceData::AddReferencedObjects((FSceneComponentInstanceData *)this,param_1);
  this_00 = (this->ComponentInstanceData).Object;
  if (this_00 != (FComponentInstanceDataCache *)0x0) {
    FComponentInstanceDataCache::AddReferencedObjects(this_00,param_1);
  }
  return;
}

// FChildActorComponentInstanceData @ 1478a5cd0

FChildActorComponentInstanceData * __thiscall
FChildActorComponentInstanceData::FChildActorComponentInstanceData
          (FChildActorComponentInstanceData *this,FChildActorComponentInstanceData *param_1)

{
  longlong *this_00;
  int *piVar1;
  TArray<FChildActorAttachedActorInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar6;
  
  FInstanceCacheDataBase::FInstanceCacheDataBase
            ((FInstanceCacheDataBase *)this,(FInstanceCacheDataBase *)param_1);
  this->_padding_ = (longlong)&___7FActorComponentInstanceData__6B_;
  pUVar4 = (UObject *)param_1->_padding_;
  this->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this_00 = &this->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FSceneComponentInstanceData__6B_;
  *this_00 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (this_00 != &param_1->_padding_) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
               (ForElementType<FSetElementId> *)&param_1->_padding_,(int)param_1->_padding_);
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->_padding_);
  }
  this->_padding_ = (longlong)&___7FChildActorComponentInstanceData__6B_;
  pUVar5 = (param_1->ChildActorClass).Class.field0_0x0.DebugPtr;
  (this->ChildActorClass).Class.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar2 = &this->AttachedActors;
  this->ChildActorName = param_1->ChildActorName;
  piVar1 = &(this->AttachedActors).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->AttachedActors).ArrayNum;
  _Src = (param_1->AttachedActors).AllocatorInstance.Data;
  (this->AttachedActors).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x70);
  }
  (this->ActorInstanceData).Object = (param_1->ActorInstanceData).Object;
  pTVar6 = (param_1->ActorInstanceData).SharedReferenceCount.ReferenceController;
  (this->ActorInstanceData).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ComponentInstanceData).Object = (param_1->ComponentInstanceData).Object;
  pTVar6 = (param_1->ComponentInstanceData).SharedReferenceCount.ReferenceController;
  (this->ComponentInstanceData).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FChildActorComponentInstanceData @ 1478a5e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FChildActorComponentInstanceData * __thiscall
FChildActorComponentInstanceData::FChildActorComponentInstanceData
          (FChildActorComponentInstanceData *this,UChildActorComponent *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  TArray<FChildActorAttachedActorInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedPtr<FActorInstanceData,1> *pTVar4;
  TSharedPtr<FComponentInstanceDataCache,1> *pTVar5;
  atomic<int> aVar6;
  int iVar7;
  UClass *pUVar8;
  USceneComponent *pUVar9;
  USceneComponent *this_00;
  AActor *pAVar10;
  FWeakObjectPtr *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  FChildActorComponentInstanceData *pFVar18;
  FActorInstanceData *pFVar19;
  TTransform<double> *pTVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FSharedReferencer<1> *pFVar23;
  undefined1 auStack_1d8 [32];
  FWeakObjectPtr *local_1b8;
  FWeakObjectPtr *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 local_188 [8];
  AActor *local_180;
  FActorInstanceData *local_178;
  FSharedReferencer<1> FStack_170;
  FActorInstanceData *local_168;
  FSharedReferencer<1> FStack_160;
  FActorInstanceData *local_158;
  AActor *local_150 [2];
  longlong local_140 [2];
  longlong local_130 [3];
  FWeakObjectPtr local_118;
  FName FStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FSceneComponentInstanceData::FSceneComponentInstanceData
            ((FSceneComponentInstanceData *)this,(USceneComponent *)param_1);
  this->_padding_ = (longlong)&___7FChildActorComponentInstanceData__6B_;
  pUVar8 = (param_1->ChildActorClass).Class.field0_0x0.DebugPtr;
  (this->ChildActorClass).Class.field0_0x0.DebugPtr = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pTVar3 = &this->AttachedActors;
  this->ChildActorName = param_1->ChildActorName;
  pTVar4 = &this->ActorInstanceData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar5 = &this->ComponentInstanceData;
  (this->AttachedActors).ArrayNum = 0;
  (this->AttachedActors).ArrayMax = 0;
  pTVar4->Object = (FActorInstanceData *)0x0;
  (this->ActorInstanceData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FComponentInstanceDataCache *)0x0;
  (this->ComponentInstanceData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_180 = (param_1->ChildActor).field0_0x0.DebugPtr;
  if (local_180 != (AActor *)0x0) {
    if (this->ChildActorName == (FName)0x0) {
      uVar14 = *(undefined4 *)((longlong)&local_180->_padding_ + 4);
      (this->ChildActorName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&local_180->_padding_;
      (this->ChildActorName).Number = uVar14;
    }
    if (GExperimentalAllowPerInstanceChildActorProperties != 0) {
      pTVar17 = ::operator_new(0x70);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        local_178 = ___xmm_00000000000000000000000000000010;
        pFVar19 = (FActorInstanceData *)&DAT_00000010;
        FStack_170.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFActorInstanceData___00_SharedPointerInternals__6B_
        ;
        FActorInstanceData::FActorInstanceData((FActorInstanceData *)(pTVar17 + 1),local_180);
        local_158 = (FActorInstanceData *)(pTVar17 + 1);
        if ((local_158 == (FActorInstanceData *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar15)) {
          pcVar13 = (code *)swi(3);
          pFVar18 = (FChildActorComponentInstanceData *)(*pcVar13)();
          return pFVar18;
        }
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
        pFVar19 = local_158;
        FStack_170.ReferenceController = pTVar17;
        local_178 = local_158;
      }
      if (pTVar4 != (TSharedPtr<FActorInstanceData,1> *)&local_178) {
        pTVar4->Object = pFVar19;
        local_178 = (FActorInstanceData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ActorInstanceData).SharedReferenceCount,&FStack_170);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_170.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      if ((pTVar4->Object == (FActorInstanceData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        pFVar18 = (FChildActorComponentInstanceData *)(*pcVar13)();
        return pFVar18;
      }
      if ((int)pTVar4->Object->_padding_ < 1) {
        if (pTVar4 != (TSharedPtr<FActorInstanceData,1> *)local_140) {
          pTVar4->Object = (FActorInstanceData *)0x0;
          pTVar17 = (this->ActorInstanceData).SharedReferenceCount.ReferenceController;
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
            (this->ActorInstanceData).SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            LOCK();
            paVar1 = &pTVar17->SharedReferenceCount;
            aVar6 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar6 == (atomic<int>)0x1) {
              (**(code **)pTVar17->_padding_)();
              LOCK();
              paVar1 = &pTVar17->WeakReferenceCount;
              aVar6 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar6 == (atomic<int>)0x1) {
                (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
              }
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
    }
    pFVar19 = (FActorInstanceData *)&DAT_00000010;
    pTVar17 = ::operator_new(0x70);
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      local_168 = ___xmm_00000000000000000000000000000010;
      FStack_160.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar17->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17->WeakReferenceCount = (atomic<int>)0x1;
      pTVar17->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFComponentInstanceDataCache___00_SharedPointerInternals__6B_
      ;
      FComponentInstanceDataCache::FComponentInstanceDataCache
                ((FComponentInstanceDataCache *)(pTVar17 + 1),local_180);
      pFVar19 = (FActorInstanceData *)(pTVar17 + 1);
      if ((pFVar19 == (FActorInstanceData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        pFVar18 = (FChildActorComponentInstanceData *)(*pcVar13)();
        return pFVar18;
      }
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      FStack_160.ReferenceController = pTVar17;
      local_168 = pFVar19;
    }
    if (pTVar5 != (TSharedPtr<FComponentInstanceDataCache,1> *)&local_168) {
      pTVar5->Object = (FComponentInstanceDataCache *)pFVar19;
      local_168 = (FActorInstanceData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ComponentInstanceData).SharedReferenceCount,&FStack_160);
    }
    pFVar23 = &(this->ComponentInstanceData).SharedReferenceCount;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_160.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    if ((pTVar5->Object == (FComponentInstanceDataCache *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      pFVar18 = (FChildActorComponentInstanceData *)(*pcVar13)();
      return pFVar18;
    }
    if ((pTVar5->Object->ComponentsInstanceData).ArrayNum < 1) {
      if (pTVar5 != (TSharedPtr<FComponentInstanceDataCache,1> *)local_130) {
        pTVar5->Object = (FComponentInstanceDataCache *)0x0;
        pTVar17 = pFVar23->ReferenceController;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          pFVar23->ReferenceController = (TReferenceControllerBase<1> *)0x0;
          LOCK();
          paVar1 = &pTVar17->SharedReferenceCount;
          aVar6 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar6 == (atomic<int>)0x1) {
            (**(code **)pTVar17->_padding_)();
            LOCK();
            paVar1 = &pTVar17->WeakReferenceCount;
            aVar6 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar6 == (atomic<int>)0x1) {
              (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    pUVar9 = (local_180->RootComponent).field0_0x0.DebugPtr;
    if (pUVar9 != (USceneComponent *)0x0) {
      pFVar22 = (pUVar9->AttachChildren).AllocatorInstance.Data;
      iVar7 = (pUVar9->AttachChildren).ArrayNum;
      pFVar2 = pFVar22 + (longlong)iVar7 * 8;
      while( true ) {
        if ((pUVar9->AttachChildren).ArrayNum != iVar7) {
          local_188[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_188);
        }
        if (pFVar22 == pFVar2) break;
        this_00 = *(USceneComponent **)pFVar22;
        if ((this_00 != (USceneComponent *)0x0) &&
           (pAVar10 = (AActor *)this_00->_padding_, pAVar10 != local_180)) {
          local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_118.ObjectIndex = 0;
          local_118.ObjectSerialNumber = 0;
          FStack_110.ComparisonIndex.Value = 0;
          FStack_110.Number = 0;
          local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_e8._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_c8._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_150[0] = pAVar10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar10 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar10);
          }
          FWeakObjectPtr::operator=(&local_118,(FObjectPtr)local_150);
          FStack_110 = this_00->AttachSocketName;
          pTVar20 = USceneComponent::GetRelativeTransform(this_00,&local_a8);
          pFVar11 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
          local_108 = (pTVar20->Rotation).XY.m128d_f64[0];
          dStack_100 = (pTVar20->Rotation).XY.m128d_f64[1];
          local_f8 = (pTVar20->Rotation).ZW.m128d_f64[0];
          dStack_f0 = (pTVar20->Rotation).ZW.m128d_f64[1];
          local_e8 = *(undefined1 (*) [16])(pTVar20->Translation).XY.m128d_f64;
          local_d8 = (pTVar20->Translation).ZW.m128d_f64[0];
          dStack_d0 = (pTVar20->Translation).ZW.m128d_f64[1];
          local_c8 = *(undefined1 (*) [16])(pTVar20->Scale3D).XY.m128d_f64;
          local_b8 = (pTVar20->Scale3D).ZW.m128d_f64[0];
          dStack_b0 = (pTVar20->Scale3D).ZW.m128d_f64[1];
          if ((pFVar11 <= &local_118) &&
             (lVar21 = (longlong)(this->AttachedActors).ArrayMax,
             &local_118 < pFVar11 + lVar21 * 0xe)) {
            local_1a0 = (longlong)(this->AttachedActors).ArrayNum;
            local_198 = 0x70;
            local_1b8 = &local_118;
            local_1b0 = pFVar11;
            local_1a8 = lVar21;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar15) {
              pcVar13 = (code *)swi(3);
              pFVar18 = (FChildActorComponentInstanceData *)(*pcVar13)();
              return pFVar18;
            }
          }
          iVar16 = (this->AttachedActors).ArrayNum;
          if (iVar16 == (this->AttachedActors).ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1070,&pTVar3->AllocatorInstance,&(this->AttachedActors).ArrayMax);
          }
          (this->AttachedActors).ArrayNum = iVar16 + 1;
          lVar21 = (longlong)iVar16 * 0x70;
          pFVar12 = (pTVar3->AllocatorInstance).Data;
          *(FWeakObjectPtr *)(pFVar12 + lVar21) = local_118;
          *(FName *)((FWeakObjectPtr *)(pFVar12 + lVar21) + 1) = FStack_110;
          *(double *)(pFVar12 + lVar21 + 0x10) = local_108;
          *(double *)(pFVar12 + lVar21 + 0x10 + 8) = dStack_100;
          *(double *)(pFVar12 + lVar21 + 0x20) = local_f8;
          *(double *)(pFVar12 + lVar21 + 0x20 + 8) = dStack_f0;
          *(undefined8 *)(pFVar12 + lVar21 + 0x30) = local_e8._0_8_;
          *(undefined8 *)(pFVar12 + lVar21 + 0x30 + 8) = local_e8._8_8_;
          *(double *)(pFVar12 + lVar21 + 0x40) = local_d8;
          *(double *)(pFVar12 + lVar21 + 0x40 + 8) = dStack_d0;
          *(undefined8 *)(pFVar12 + lVar21 + 0x50) = local_c8._0_8_;
          *(undefined8 *)(pFVar12 + lVar21 + 0x50 + 8) = local_c8._8_8_;
          *(double *)(pFVar12 + lVar21 + 0x60) = local_b8;
          *(double *)(pFVar12 + lVar21 + 0x60 + 8) = dStack_b0;
        }
        pFVar22 = pFVar22 + 8;
      }
    }
  }
  return this;
}

// ~FChildActorComponentInstanceData @ 1478ab700

void __thiscall
FChildActorComponentInstanceData::~FChildActorComponentInstanceData
          (FChildActorComponentInstanceData *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComponentInstanceData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActorInstanceData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->AttachedActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

