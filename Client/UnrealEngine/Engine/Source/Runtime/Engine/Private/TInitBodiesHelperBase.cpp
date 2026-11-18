// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> @ 1481c67d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> * __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,FPhysScene_Chaos *param_5,
          FInitBodySpawnParams *param_6,FPhysicsAggregateReference_Chaos param_7,
          IPhysicsBodyInstanceOwner *param_8)

{
  UObject *pUVar1;
  
  if (param_4 == (UPrimitiveComponent *)0x0) {
    if (param_8 == (IPhysicsBodyInstanceOwner *)0x0) {
      pUVar1 = (UObject *)0x0;
    }
    else {
      pUVar1 = (UObject *)(**(code **)((longlong)*param_8 + 0x10))(param_8);
    }
  }
  else {
    pUVar1 = *(UObject **)&param_4->field_0xa8;
  }
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
            (this,param_1,param_2,param_3,param_4,pUVar1,param_5,param_6,param_7,param_8);
  return this;
}

// TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> @ 1481c68a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> * __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          UBodySetup *param_3,UPrimitiveComponent *param_4,UObject *param_5,
          FPhysScene_Chaos *param_6,FInitBodySpawnParams *param_7,
          FPhysicsAggregateReference_Chaos param_8,IPhysicsBodyInstanceOwner *param_9)

{
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *pTVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> local_18;
  
  this->PrimitiveComp = param_4;
  this->BodyInstanceOwner = param_9;
  this->SourceObject = param_5;
  this->PhysScene = param_6;
  this->Bodies = param_1;
  this->Transforms = param_2;
  this->BodySetup = param_3;
  pTVar5 = ::operator_new(0x10);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar10;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pTVar5->SharedReferenceCount = (atomic<int>)0x0;
    pTVar5->WeakReferenceCount = (atomic<int>)0x0;
    pTVar7 = pTVar5;
  }
  (this->DebugName).Object = (FString *)pTVar7;
  pTVar6 = ::operator_new(0x18);
  pTVar5 = pTVar10;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6[1]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)pTVar7;
    pTVar5 = pTVar6;
  }
  (this->DebugName).SharedReferenceCount.ReferenceController = pTVar5;
  pTVar1 = &this->PhysXName;
  this->SpawnParams = param_7;
  pTVar1->Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
  (this->PhysXName).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bInstanceSimulatePhysics = false;
  this->InstanceBlendWeight = -1.0;
  this->SkelMeshComp = (USkeletalMeshComponent *)0x0;
  pTVar3 = CDisableQueryOnlyActors.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000004;
    if (!bVar4) goto LAB_1481c6991;
  }
  pTVar7 = pTVar10;
LAB_1481c6991:
  this->DisableQueryOnlyActors =
       *(int *)((longlong)pTVar3->ShadowedValue + (longlong)&pTVar7->_padding_) != 0;
  if (((this->DebugName).Object == (FString *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  pTVar9 = GetDebugDebugName(&local_18,this->PrimitiveComp,this->SourceObject,this->BodySetup,
                             (this->DebugName).Object);
  if (pTVar1 != pTVar9) {
    pTVar1->Object = pTVar9->Object;
    pTVar9->Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PhysXName).SharedReferenceCount,&pTVar9->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1481c6a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FBodyInstance_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2,UBodySetup *param_3,UPrimitiveComponent *param_4,UObject *param_5,
          FPhysScene_Chaos *param_6,FInitBodySpawnParams *param_7,
          FPhysicsAggregateReference_Chaos param_8,IPhysicsBodyInstanceOwner *param_9)

{
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *pTVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> local_18;
  
  this->PrimitiveComp = param_4;
  this->BodyInstanceOwner = param_9;
  this->SourceObject = param_5;
  this->PhysScene = param_6;
  this->Bodies = param_1;
  this->Transforms = param_2;
  this->BodySetup = param_3;
  pTVar5 = ::operator_new(0x10);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar10;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    pTVar5->SharedReferenceCount = (atomic<int>)0x0;
    pTVar5->WeakReferenceCount = (atomic<int>)0x0;
    pTVar7 = pTVar5;
  }
  (this->DebugName).Object = (FString *)pTVar7;
  pTVar6 = ::operator_new(0x18);
  pTVar5 = pTVar10;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6[1]._padding_)->AllocatorInstance).Data
         = (FScriptContainerElement *)pTVar7;
    pTVar5 = pTVar6;
  }
  (this->DebugName).SharedReferenceCount.ReferenceController = pTVar5;
  pTVar1 = &this->PhysXName;
  this->SpawnParams = param_7;
  pTVar1->Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
  (this->PhysXName).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bInstanceSimulatePhysics = false;
  this->InstanceBlendWeight = -1.0;
  this->SkelMeshComp = (USkeletalMeshComponent *)0x0;
  pTVar3 = CDisableQueryOnlyActors.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000004;
    if (!bVar4) goto LAB_1481c6b21;
  }
  pTVar7 = pTVar10;
LAB_1481c6b21:
  this->DisableQueryOnlyActors =
       *(int *)((longlong)pTVar3->ShadowedValue + (longlong)&pTVar7->_padding_) != 0;
  if (((this->DebugName).Object == (FString *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  pTVar9 = GetDebugDebugName(&local_18,this->PrimitiveComp,this->SourceObject,this->BodySetup,
                             (this->DebugName).Object);
  if (pTVar1 != pTVar9) {
    pTVar1->Object = pTVar9->Object;
    pTVar9->Object = (TArray<char,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PhysXName).SharedReferenceCount,&pTVar9->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator() @ 1481cd9e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::InitBodies'::__l12::<lambda_1>::operator()
          (void *this)

{
  undefined8 *puVar1;
  FName FVar2;
  longlong lVar3;
  IPhysicsProxyBase *pIVar4;
  FPhysScene_Chaos *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FWeakObjectPtr this_01;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  TEnumAsByte<ECollisionTraceFlag> TVar12;
  EChaosCollisionTraceFlag EVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_InitBodyAdd> FVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  UBodySetupCore *this_02;
  undefined7 extraout_var;
  UPrimitiveComponent *pUVar20;
  UWorld *pUVar21;
  FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd> FVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  FNameEntryId FVar29;
  longlong *plVar30;
  longlong lVar31;
  FWeakObjectPtr this_03;
  FWeakObjectPtr *this_04;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_e8;
  FName local_d8;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> local_c8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  longlong *local_a0;
  FColor_u_0 local_98;
  uint local_94;
  FColor_u_0 local_90 [2];
  longlong *local_88;
  longlong *local_80;
  FName local_78;
  FName local_70;
  FWeakObjectPtr *local_68;
  FName local_60;
  FName local_58 [3];
  
  if ((**(char **)this != '\0') ||
     (bVar9 = TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors
                        (*(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> **)
                          ((longlong)this + 8)), bVar9)) {
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x30) != 0) {
      FVar17 = StatPtr_STAT_InitBodyAdd;
      if (StatPtr_STAT_InitBodyAdd == (FThreadSafeStaticStat<FStat_STAT_InitBodyAdd>)0x0) {
        pFVar16 = ::FName::FName(&local_60,"STAT_InitBodyAdd");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_InitBodyAdd>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyAdd,*pFVar16,
                            L"Init Body Add","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                            true,ST_int64,true,false,MCR_Invalid);
      }
      local_e8.ComparisonIndex.Value = 0;
      local_e8.Number = 0;
      bVar7 = false;
      bVar6 = false;
      bVar9 = false;
      FVar2 = *(FName *)FVar17;
      FVar29 = FVar2.ComparisonIndex.Value;
      uVar26 = FVar2.Number;
      if ((FVar29.Value != 0) || (uVar26 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_98.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_98._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
          bVar6 = false;
          bVar9 = true;
          if (-1 < CpuChannel->Enabled) {
            local_78.ComparisonIndex.Value = FVar29.Value;
            local_78.Number = uVar26;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_78,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x64c);
            bVar6 = true;
            bVar9 = true;
          }
        }
        bVar7 = false;
        if (FThreadStats::bPrimaryEnable != false) {
          local_res10 = FVar29.Value;
          uStackX_14 = uVar26;
          FThreadStats::AddMessage(FVar2,CycleScopeStart);
          bVar7 = true;
          local_e8 = FVar2;
        }
      }
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      uVar26 = *(uint *)(**(longlong **)((longlong)this + 8) + 8);
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      if (0 < (int)uVar26) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar26,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
      }
      local_80 = (longlong *)**(longlong **)((longlong)this + 8);
      local_94 = *(uint *)(local_80 + 1);
      uVar25 = (ulonglong)(int)local_94;
      plVar30 = (longlong *)*local_80;
      plVar27 = plVar30 + uVar25;
      local_88 = plVar27;
      while( true ) {
        local_a0 = plVar30;
        if ((int)local_80[1] != (int)uVar25) {
          local_res10 = local_res10 & 0xffffff00;
          `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (plVar30 == plVar27) break;
        this_04 = (FWeakObjectPtr *)*plVar30;
        local_b0 = this_04[0x27];
        local_68 = this_04;
        if (local_b0 != (FWeakObjectPtr)0x0) {
          if (((local_c8.AllocatorInstance.Data <= &local_b0) &&
              (&local_b0 <
               (FWeakObjectPtr *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)
              )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_c8.ArrayNum == local_c8.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
            local_c8.ArrayNum = iVar14;
          }
          this_03 = local_b0;
          lVar23 = (longlong)local_c8.ArrayNum;
          local_c8.ArrayNum = local_c8.ArrayNum + 1;
          *(FWeakObjectPtr *)(local_c8.AllocatorInstance.Data + lVar23 * 8) = local_b0;
          local_a8 = local_b0;
          iVar14 = FChaosEngineInterface::GetNumShapes((FSingleParticlePhysicsProxy **)&local_b0);
          lVar23 = (longlong)iVar14;
          pUVar18 = FWeakObjectPtr::Get(this_04 + 0x2a);
          if (pUVar18 == (UObject *)0x0) {
LAB_1481cdd04:
            cVar11 = *(char *)((longlong)&this_04[2].ObjectSerialNumber + 3);
LAB_1481cdd09:
            if (cVar11 != '\x01') goto LAB_1481cdd10;
LAB_1481cdd6f:
            this_01 = local_a8;
            uVar26 = 0;
            lVar31 = 0;
            this_03 = local_a8;
            if (0 < lVar23) {
              do {
                Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                          ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
                lVar3 = *(longlong *)((longlong)this_01 + 0x40);
                uVar15 = 0;
                if ((int)uVar26 < *(int *)(lVar3 + 0x90)) {
                  uVar15 = ~uVar26 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar24 = lVar3 + 0x80;
                if (*(longlong *)(lVar3 + 0x88) != 0) {
                  lVar24 = *(longlong *)(lVar3 + 0x88);
                }
                if ((*(byte *)(*(longlong *)(lVar24 + lVar31 * 8) + 0x79) & 1) != 0) {
                  uVar15 = 0;
                  if ((int)uVar26 < *(int *)(lVar3 + 0x90)) {
                    uVar15 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar24 = lVar3 + 0x80;
                  if (*(longlong *)(lVar3 + 0x88) != 0) {
                    lVar24 = *(longlong *)(lVar3 + 0x88);
                  }
                  lVar3 = *(longlong *)(lVar24 + lVar31 * 8);
                  pIVar4 = *(IPhysicsProxyBase **)(lVar3 + 0x48);
                  *(byte *)(lVar3 + 0x79) = *(byte *)(lVar3 + 0x79) & 0xfe;
                  uVar15 = *(uint *)(lVar3 + 0xc);
                  *(uint *)(lVar3 + 0xc) = uVar15 | 1;
                  if (((uVar15 == 0) && (pIVar4 != (IPhysicsProxyBase *)0x0)) &&
                     (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
                    Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                              (pIVar4->Solver,pIVar4,*(uint *)(lVar3 + 8) >> 3);
                  }
                }
                uVar26 = uVar26 + 1;
                lVar31 = lVar31 + 1;
                plVar30 = local_a0;
                this_03 = local_a8;
                this_04 = local_68;
              } while (lVar31 < lVar23);
            }
          }
          else {
            if ((*(longlong *)&pUVar18[4].field_0x8 == 0) ||
               ((*(byte *)(*(longlong *)&pUVar18[4].field_0x8 + 0x5d) & 1) != 0)) {
              pUVar19 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
              iVar14 = (int)pUVar19->_padding_;
              if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar14) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar14 * 8)
                  != &pUVar19->_padding_)) goto LAB_1481cdd04;
              cVar11 = pUVar18[0x17].field_0xf;
              goto LAB_1481cdd09;
            }
LAB_1481cdd10:
            pUVar18 = FWeakObjectPtr::Get(this_04 + 0x2a);
            if (pUVar18 == (UObject *)0x0) {
LAB_1481cdd62:
              cVar11 = *(char *)((longlong)&this_04[2].ObjectSerialNumber + 3);
            }
            else {
              if ((*(longlong *)&pUVar18[4].field_0x8 != 0) &&
                 ((*(byte *)(*(longlong *)&pUVar18[4].field_0x8 + 0x5d) & 1) == 0))
              goto LAB_1481cdd6f;
              pUVar19 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
              iVar14 = (int)pUVar19->_padding_;
              if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar14) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar14 * 8)
                  != &pUVar19->_padding_)) goto LAB_1481cdd62;
              cVar11 = pUVar18[0x17].field_0xf;
            }
            if (cVar11 == '\0') goto LAB_1481cdd6f;
          }
          this_02 = (UBodySetupCore *)FWeakObjectPtr::Get(this_04);
          plVar27 = local_88;
          if (this_02 != (UBodySetupCore *)0x0) {
            uVar26 = 0;
            lVar31 = 0;
            plVar30 = local_a0;
            if (0 < lVar23) {
              do {
                TVar12 = UBodySetupCore::GetCollisionTraceFlag(this_02);
                EVar13 = ChaosInterface::ConvertCollisionTraceFlag
                                   ((uint)*(byte *)CONCAT71(extraout_var,TVar12.Value));
                Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                          ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_03);
                lVar3 = *(longlong *)((longlong)this_03 + 0x40);
                uVar15 = 0;
                if ((int)uVar26 < *(int *)(lVar3 + 0x90)) {
                  uVar15 = ~uVar26 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar24 = lVar3 + 0x80;
                if (*(longlong *)(lVar3 + 0x88) != 0) {
                  lVar24 = *(longlong *)(lVar3 + 0x88);
                }
                if (*(EChaosCollisionTraceFlag *)(*(longlong *)(lVar24 + lVar31 * 8) + 0x78) !=
                    EVar13) {
                  uVar15 = 0;
                  if ((int)uVar26 < *(int *)(lVar3 + 0x90)) {
                    uVar15 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar24 = lVar3 + 0x80;
                  if (*(longlong *)(lVar3 + 0x88) != 0) {
                    lVar24 = *(longlong *)(lVar3 + 0x88);
                  }
                  lVar3 = *(longlong *)(lVar24 + lVar31 * 8);
                  pIVar4 = *(IPhysicsProxyBase **)(lVar3 + 0x48);
                  *(EChaosCollisionTraceFlag *)(lVar3 + 0x78) = EVar13;
                  uVar15 = *(uint *)(lVar3 + 0xc);
                  *(uint *)(lVar3 + 0xc) = uVar15 | 1;
                  if (((uVar15 == 0) && (pIVar4 != (IPhysicsProxyBase *)0x0)) &&
                     (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
                    Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                              (pIVar4->Solver,pIVar4,*(uint *)(lVar3 + 8) >> 3);
                  }
                }
                uVar26 = uVar26 + 1;
                lVar31 = lVar31 + 1;
                plVar27 = local_88;
                plVar30 = local_a0;
                this_03 = local_a8;
              } while (lVar31 < lVar23);
            }
          }
        }
        plVar30 = plVar30 + 1;
        uVar25 = (ulonglong)local_94;
      }
      FChaosScene::AddActorsToScene_AssumesLocked
                (*(FChaosScene **)(*(longlong *)((longlong)this + 8) + 0x30),&local_c8,true);
      plVar27 = (longlong *)**(longlong **)((longlong)this + 8);
      plVar30 = (longlong *)*plVar27;
      lVar23 = plVar27[1];
      local_80 = plVar30 + (int)lVar23;
      while( true ) {
        plVar8 = local_80;
        if ((int)plVar27[1] != (int)lVar23) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (plVar30 == plVar8) break;
        lVar31 = *plVar30;
        pIVar4 = *(IPhysicsProxyBase **)(lVar31 + 0x138);
        if (pIVar4 != (IPhysicsProxyBase *)0x0) {
          this_00 = *(FPhysScene_Chaos **)(*(longlong *)((longlong)this + 8) + 0x30);
          pUVar20 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar31 + 0x150));
          FPhysScene_Chaos::AddToComponentMaps(this_00,pUVar20,pIVar4);
        }
        if (((*(byte *)(lVar31 + 0x3b) & 0x40) != 0) &&
           (pUVar20 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar31 + 0x150))
           , pUVar20 != (UPrimitiveComponent *)0x0)) {
          pUVar21 = *(UWorld **)&pUVar20->field_0xb0;
          if (pUVar21 == (UWorld *)0x0) {
            pUVar21 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar20);
          }
          FPhysScene_Chaos::RegisterForCollisionEvents(pUVar21->PhysicsScene,pUVar20);
        }
        plVar30 = plVar30 + 1;
      }
      if ((FWeakObjectPtr *)local_c8.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(local_e8,CycleScopeEnd);
      }
    }
    plVar27 = (longlong *)**(longlong **)((longlong)this + 8);
    puVar28 = (undefined8 *)*plVar27;
    lVar23 = plVar27[1];
    puVar1 = puVar28 + (int)lVar23;
    while( true ) {
      if ((int)plVar27[1] != (int)lVar23) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar28 == puVar1) break;
      Chaos::Private::FInitBodiesHelperBaseInternal::UpdateBodyInstanceSolverAsyncDeltaTime
                (*(FInitBodiesHelperBaseInternal **)((longlong)this + 8),(FBodyInstance *)*puVar28);
      puVar28 = puVar28 + 1;
    }
    if (*(char *)(*(longlong *)((longlong)this + 8) + 0x60) == '\0') {
      FVar22 = StatPtr_STAT_InitBodyPostAdd;
      if (StatPtr_STAT_InitBodyPostAdd == (FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd>)0x0) {
        pFVar16 = ::FName::FName(local_58,"STAT_InitBodyPostAdd");
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyPostAdd,*pFVar16,
                            L"Init Body Post Add to Scene","STATGROUP_Physics","STATCAT_Advanced",
                            L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      bVar7 = false;
      bVar6 = false;
      bVar9 = false;
      FVar2 = *(FName *)FVar22;
      if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_90[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_90[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
          bVar6 = false;
          bVar9 = true;
          if (-1 < CpuChannel->Enabled) {
            local_70.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
            local_70.Number = FVar2.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_70,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x68a);
            bVar6 = true;
            bVar9 = true;
          }
        }
        bVar7 = false;
        if (FThreadStats::bPrimaryEnable != false) {
          FThreadStats::AddMessage(FVar2,CycleScopeStart);
          bVar7 = true;
          local_d8 = FVar2;
        }
      }
      uVar26 = 0;
      lVar23 = 0;
      lVar31 = (longlong)*(int *)(**(longlong **)((longlong)this + 8) + 8);
      if (0 < lVar31) {
        do {
          plVar27 = (longlong *)**(longlong **)((longlong)this + 8);
          uVar15 = 0;
          if ((int)uVar26 < (int)plVar27[1]) {
            uVar15 = ~uVar26 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FBodyInstance::InitDynamicProperties_AssumesLocked
                    (*(FBodyInstance **)(*plVar27 + lVar23 * 8));
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 1;
        } while (lVar23 < lVar31);
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(local_d8,CycleScopeEnd);
      }
    }
  }
  return;
}

// operator() @ 1481ce390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::InitBodies'::__l12
::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  FName FVar4;
  FWeakObjectPtr *this_00;
  longlong lVar5;
  IPhysicsProxyBase *pIVar6;
  FPhysScene_Chaos *this_01;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  TEnumAsByte<ECollisionTraceFlag> TVar14;
  EChaosCollisionTraceFlag EVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_InitBodyAdd> FVar18;
  UObject *pUVar19;
  UClass *pUVar20;
  UBodySetupCore *this_02;
  undefined7 extraout_var;
  UPrimitiveComponent *pUVar21;
  UWorld *pUVar22;
  FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd> FVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  undefined8 *puVar27;
  FNameEntryId FVar28;
  longlong *plVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  int *piVar33;
  longlong lVar34;
  FWeakObjectPtr this_03;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_d0;
  FName local_c0;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> local_b0;
  int *local_98;
  FWeakObjectPtr local_90;
  longlong *local_88;
  FWeakObjectPtr local_80;
  FColor_u_0 local_78;
  FColor_u_0 local_74;
  undefined8 *local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  if ((**(char **)this != '\0') ||
     (bVar11 = TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
               CreateShapesAndActors
                         (*(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                            **)((longlong)this + 8)), bVar11)) {
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x30) != 0) {
      FVar18 = StatPtr_STAT_InitBodyAdd;
      if (StatPtr_STAT_InitBodyAdd == (FThreadSafeStaticStat<FStat_STAT_InitBodyAdd>)0x0) {
        pFVar17 = ::FName::FName(&local_58,"STAT_InitBodyAdd");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_InitBodyAdd>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyAdd,*pFVar17,
                            L"Init Body Add","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                            true,ST_int64,true,false,MCR_Invalid);
      }
      local_d0.ComparisonIndex.Value = 0;
      local_d0.Number = 0;
      bVar9 = false;
      bVar8 = false;
      bVar11 = false;
      FVar4 = *(FName *)FVar18;
      FVar28 = FVar4.ComparisonIndex.Value;
      uVar26 = FVar4.Number;
      if ((FVar28.Value != 0) || (uVar26 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_78.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_78._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
          bVar8 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_68.ComparisonIndex.Value = FVar28.Value;
            local_68.Number = uVar26;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_68,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x64c);
            bVar8 = true;
            bVar11 = true;
          }
        }
        bVar9 = false;
        if (FThreadStats::bPrimaryEnable != false) {
          local_res10 = FVar28.Value;
          uStackX_14 = uVar26;
          FThreadStats::AddMessage(FVar4,CycleScopeStart);
          bVar9 = true;
          local_d0 = FVar4;
        }
      }
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.ArrayNum = 0;
      local_b0.ArrayMax = 0;
      uVar26 = *(uint *)(**(longlong **)((longlong)this + 8) + 0x10);
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      if (0 < (int)uVar26) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar26,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
      }
      local_88 = (longlong *)**(longlong **)((longlong)this + 8);
      iVar3 = *(int *)(local_88 + 2);
      piVar33 = (int *)(local_88 + 2);
      if ((undefined8 *)local_88[1] != (undefined8 *)0x0) {
        local_88 = (undefined8 *)local_88[1];
      }
      puVar27 = local_88 + iVar3;
      local_98 = piVar33;
      local_70 = puVar27;
      while( true ) {
        plVar1 = local_88;
        if (*piVar33 != iVar3) {
          local_res10 = local_res10 & 0xffffff00;
          `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (plVar1 == puVar27) break;
        this_00 = (FWeakObjectPtr *)*plVar1;
        local_90 = this_00[0x27];
        if (local_90 != (FWeakObjectPtr)0x0) {
          if (((local_b0.AllocatorInstance.Data <= &local_90) &&
              (&local_90 <
               (FWeakObjectPtr *)(local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 8)
              )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_b0.ArrayNum == local_b0.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
            local_b0.ArrayNum = iVar16;
          }
          this_03 = local_90;
          lVar24 = (longlong)local_b0.ArrayNum;
          local_b0.ArrayNum = local_b0.ArrayNum + 1;
          *(FWeakObjectPtr *)(local_b0.AllocatorInstance.Data + lVar24 * 8) = local_90;
          local_80 = local_90;
          iVar16 = FChaosEngineInterface::GetNumShapes((FSingleParticlePhysicsProxy **)&local_90);
          lVar24 = (longlong)iVar16;
          pUVar19 = FWeakObjectPtr::Get(this_00 + 0x2a);
          if (pUVar19 == (UObject *)0x0) {
LAB_1481ce6d5:
            cVar13 = *(char *)((longlong)&this_00[2].ObjectSerialNumber + 3);
LAB_1481ce6da:
            if (cVar13 != '\x01') goto LAB_1481ce6e1;
LAB_1481ce748:
            this_03 = local_80;
            uVar26 = 0;
            lVar34 = 0;
            if (0 < lVar24) {
              do {
                Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                          ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_03);
                lVar5 = *(longlong *)((longlong)this_03 + 0x40);
                uVar31 = 0;
                if ((int)uVar26 < *(int *)(lVar5 + 0x90)) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar25 = lVar5 + 0x80;
                if (*(longlong *)(lVar5 + 0x88) != 0) {
                  lVar25 = *(longlong *)(lVar5 + 0x88);
                }
                if ((*(byte *)(*(longlong *)(lVar25 + lVar34 * 8) + 0x79) & 1) != 0) {
                  uVar31 = 0;
                  if ((int)uVar26 < *(int *)(lVar5 + 0x90)) {
                    uVar31 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar25 = lVar5 + 0x80;
                  if (*(longlong *)(lVar5 + 0x88) != 0) {
                    lVar25 = *(longlong *)(lVar5 + 0x88);
                  }
                  lVar5 = *(longlong *)(lVar25 + lVar34 * 8);
                  pIVar6 = *(IPhysicsProxyBase **)(lVar5 + 0x48);
                  *(byte *)(lVar5 + 0x79) = *(byte *)(lVar5 + 0x79) & 0xfe;
                  uVar31 = *(uint *)(lVar5 + 0xc);
                  *(uint *)(lVar5 + 0xc) = uVar31 | 1;
                  if (((uVar31 == 0) && (pIVar6 != (IPhysicsProxyBase *)0x0)) &&
                     (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
                    Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                              (pIVar6->Solver,pIVar6,*(uint *)(lVar5 + 8) >> 3);
                  }
                }
                uVar26 = uVar26 + 1;
                lVar34 = lVar34 + 1;
              } while (lVar34 < lVar24);
            }
          }
          else {
            if ((*(longlong *)&pUVar19[4].field_0x8 == 0) ||
               ((*(byte *)(*(longlong *)&pUVar19[4].field_0x8 + 0x5d) & 1) != 0)) {
              pUVar20 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
              iVar16 = (int)pUVar20->_padding_;
              local_98 = piVar33;
              if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar16) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar16 * 8)
                  != &pUVar20->_padding_)) goto LAB_1481ce6d5;
              cVar13 = pUVar19[0x17].field_0xf;
              goto LAB_1481ce6da;
            }
LAB_1481ce6e1:
            pUVar19 = FWeakObjectPtr::Get(this_00 + 0x2a);
            if (pUVar19 == (UObject *)0x0) {
LAB_1481ce73b:
              cVar13 = *(char *)((longlong)&this_00[2].ObjectSerialNumber + 3);
            }
            else {
              if ((*(longlong *)&pUVar19[4].field_0x8 != 0) &&
                 ((*(byte *)(*(longlong *)&pUVar19[4].field_0x8 + 0x5d) & 1) == 0))
              goto LAB_1481ce748;
              pUVar20 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
              iVar16 = (int)pUVar20->_padding_;
              if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar16) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar16 * 8)
                  != &pUVar20->_padding_)) goto LAB_1481ce73b;
              cVar13 = pUVar19[0x17].field_0xf;
              local_98 = piVar33;
            }
            if (cVar13 == '\0') goto LAB_1481ce748;
          }
          this_02 = (UBodySetupCore *)FWeakObjectPtr::Get(this_00);
          puVar27 = local_70;
          piVar33 = local_98;
          if (this_02 != (UBodySetupCore *)0x0) {
            uVar26 = 0;
            lVar34 = 0;
            if (0 < lVar24) {
              do {
                TVar14 = UBodySetupCore::GetCollisionTraceFlag(this_02);
                EVar15 = ChaosInterface::ConvertCollisionTraceFlag
                                   ((uint)*(byte *)CONCAT71(extraout_var,TVar14.Value));
                Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                          ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_03);
                lVar5 = *(longlong *)((longlong)this_03 + 0x40);
                uVar31 = 0;
                if ((int)uVar26 < *(int *)(lVar5 + 0x90)) {
                  uVar31 = ~uVar26 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar25 = lVar5 + 0x80;
                if (*(longlong *)(lVar5 + 0x88) != 0) {
                  lVar25 = *(longlong *)(lVar5 + 0x88);
                }
                if (*(EChaosCollisionTraceFlag *)(*(longlong *)(lVar25 + lVar34 * 8) + 0x78) !=
                    EVar15) {
                  uVar31 = 0;
                  if ((int)uVar26 < *(int *)(lVar5 + 0x90)) {
                    uVar31 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar31 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar25 = lVar5 + 0x80;
                  if (*(longlong *)(lVar5 + 0x88) != 0) {
                    lVar25 = *(longlong *)(lVar5 + 0x88);
                  }
                  lVar5 = *(longlong *)(lVar25 + lVar34 * 8);
                  pIVar6 = *(IPhysicsProxyBase **)(lVar5 + 0x48);
                  *(EChaosCollisionTraceFlag *)(lVar5 + 0x78) = EVar15;
                  uVar31 = *(uint *)(lVar5 + 0xc);
                  *(uint *)(lVar5 + 0xc) = uVar31 | 1;
                  if (((uVar31 == 0) && (pIVar6 != (IPhysicsProxyBase *)0x0)) &&
                     (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
                    Chaos::FPhysicsSolverBase::AddDirtyProxyShape
                              (pIVar6->Solver,pIVar6,*(uint *)(lVar5 + 8) >> 3);
                  }
                }
                uVar26 = uVar26 + 1;
                lVar34 = lVar34 + 1;
                puVar27 = local_70;
                piVar33 = local_98;
                this_03 = local_80;
              } while (lVar34 < lVar24);
            }
          }
        }
        local_88 = local_88 + 1;
      }
      FChaosScene::AddActorsToScene_AssumesLocked
                (*(FChaosScene **)(*(longlong *)((longlong)this + 8) + 0x30),&local_b0,true);
      plVar29 = (longlong *)**(longlong **)((longlong)this + 8);
      lVar24 = plVar29[2];
      plVar1 = plVar29 + 2;
      if ((longlong *)plVar29[1] != (longlong *)0x0) {
        plVar29 = (longlong *)plVar29[1];
      }
      local_88 = plVar29 + (int)lVar24;
      while( true ) {
        plVar10 = local_88;
        if ((int)*plVar1 != (int)lVar24) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (plVar29 == plVar10) break;
        lVar34 = *plVar29;
        pIVar6 = *(IPhysicsProxyBase **)(lVar34 + 0x138);
        if (pIVar6 != (IPhysicsProxyBase *)0x0) {
          this_01 = *(FPhysScene_Chaos **)(*(longlong *)((longlong)this + 8) + 0x30);
          pUVar21 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar34 + 0x150));
          FPhysScene_Chaos::AddToComponentMaps(this_01,pUVar21,pIVar6);
        }
        if (((*(byte *)(lVar34 + 0x3b) & 0x40) != 0) &&
           (pUVar21 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar34 + 0x150))
           , pUVar21 != (UPrimitiveComponent *)0x0)) {
          pUVar22 = *(UWorld **)&pUVar21->field_0xb0;
          if (pUVar22 == (UWorld *)0x0) {
            pUVar22 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar21);
          }
          FPhysScene_Chaos::RegisterForCollisionEvents(pUVar22->PhysicsScene,pUVar21);
        }
        plVar29 = plVar29 + 1;
      }
      if ((FWeakObjectPtr *)local_b0.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FThreadStats::AddMessage(local_d0,CycleScopeEnd);
      }
    }
    uVar30 = 0;
    puVar27 = (undefined8 *)**(longlong **)((longlong)this + 8);
    iVar3 = *(int *)(puVar27 + 2);
    piVar33 = (int *)(puVar27 + 2);
    if ((undefined8 *)puVar27[1] != (undefined8 *)0x0) {
      puVar27 = (undefined8 *)puVar27[1];
    }
    puVar2 = puVar27 + iVar3;
    while( true ) {
      if (*piVar33 != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar27 == puVar2) break;
      Chaos::Private::FInitBodiesHelperBaseInternal::UpdateBodyInstanceSolverAsyncDeltaTime
                (*(FInitBodiesHelperBaseInternal **)((longlong)this + 8),(FBodyInstance *)*puVar27);
      puVar27 = puVar27 + 1;
    }
    if (*(char *)(*(longlong *)((longlong)this + 8) + 0x60) == '\0') {
      FVar23 = StatPtr_STAT_InitBodyPostAdd;
      if (StatPtr_STAT_InitBodyPostAdd == (FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd>)0x0) {
        pFVar17 = ::FName::FName(local_50,"STAT_InitBodyPostAdd");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_InitBodyPostAdd>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitBodyPostAdd,*pFVar17,
                            L"Init Body Post Add to Scene","STATGROUP_Physics","STATCAT_Advanced",
                            L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_c0.ComparisonIndex.Value = 0;
      local_c0.Number = 0;
      bVar9 = false;
      bVar8 = false;
      bVar11 = false;
      FVar4 = *(FName *)FVar23;
      if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_74.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_74._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          bVar8 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_60.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
            local_60.Number = FVar4.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_60,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x68a);
            bVar8 = true;
            bVar11 = true;
          }
        }
        bVar9 = false;
        if (FThreadStats::bPrimaryEnable != false) {
          FThreadStats::AddMessage(FVar4,CycleScopeStart);
          bVar9 = true;
          local_c0 = FVar4;
        }
      }
      lVar24 = (longlong)*(int *)(**(longlong **)((longlong)this + 8) + 0x10);
      uVar32 = uVar30;
      if (0 < lVar24) {
        do {
          uVar31 = (uint)uVar32;
          lVar34 = **(longlong **)((longlong)this + 8);
          uVar26 = 0;
          if ((int)uVar31 < *(int *)(lVar34 + 0x10)) {
            uVar26 = ~uVar31 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(longlong *)(lVar34 + 8) != 0) {
            lVar34 = *(longlong *)(lVar34 + 8);
          }
          FBodyInstance::InitDynamicProperties_AssumesLocked
                    (*(FBodyInstance **)(lVar34 + uVar30 * 8));
          uVar32 = (ulonglong)(uVar31 + 1);
          uVar30 = uVar30 + 1;
        } while ((longlong)uVar30 < lVar24);
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FThreadStats::AddMessage(local_c0,CycleScopeEnd);
      }
    }
  }
  return;
}

// CreateActor_AssumesLocked @ 1481dc250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateActor_AssumesLocked
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this,FBodyInstance *param_1,
          TTransform<double> *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor> FVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  uchar uVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_158 [32];
  FSingleParticlePhysicsProxy *local_f8;
  LARGE_INTEGER local_f0;
  FName local_e8;
  byte local_e0;
  FStatMessage local_d8;
  FActorCreationParams local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar11 = '\0';
  FVar7 = StatPtr_STAT_CreatePhysicsActor;
  if (StatPtr_STAT_CreatePhysicsActor == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor>)0x0)
  {
    pFVar6 = ::FName::FName((FName *)&local_d8,"STAT_CreatePhysicsActor");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsActor,*pFVar6,
                       L"CreatePhysicsActor","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_e0 = 0;
  FVar4 = *(FName *)FVar7;
  FVar13 = FVar4.ComparisonIndex.Value;
  uVar12 = FVar4.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      local_e0 = local_e0 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_f0.s.LowPart = FVar13.Value;
        local_f0.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f0.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x50c);
        local_e0 = local_e0 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0.s.LowPart = FVar13.Value;
      local_f0.s.HighPart = uVar12;
      local_e8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_e0 = local_e0 | 4;
    }
  }
  pUVar8 = FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
  if (pUVar8 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar8[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar8[4].field_0x8 + 0x5d) & 1) == 0)) goto LAB_1481dc3fa;
    pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar9->_padding_)) {
      uVar11 = pUVar8[0x17].field_0xf;
      goto LAB_1481dc3fa;
    }
  }
  uVar11 = (param_1->CollisionEnabled).Value;
LAB_1481dc3fa:
  local_c8.InitialTM.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_c8.InitialTM.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_c8.InitialTM.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_c8.InitialTM.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_c8.InitialTM.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_c8.InitialTM.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_c8.InitialTM.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_c8.InitialTM.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_c8.InitialTM.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_c8.InitialTM.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_c8.InitialTM.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_c8.InitialTM.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_c8.bSimulatePhysics =
       FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)param_1);
  local_c8.bStartAwake = (bool)((byte)param_1->_padding_ >> 6 & 1);
  if ((param_1->CharDebugName).Object == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) {
    local_c8.DebugName = (char *)0x0;
  }
  else {
    local_c8.DebugName = (char *)(((param_1->CharDebugName).Object)->AllocatorInstance).Data;
  }
  bVar2 = (byte)param_1->_padding_;
  local_c8.bEnableGravity = (bool)(bVar2 >> 2 & 1);
  local_c8.bUpdateKinematicFromSimulation = (bool)(bVar2 >> 3 & 1);
  local_c8.Scene = (FChaosScene *)this->PhysScene;
  local_c8.bQueryOnly = uVar11 == '\x01';
  local_c8.bStatic = this->bStatic;
  local_f8 = (FSingleParticlePhysicsProxy *)0x0;
  FChaosEngineInterface::CreateActor(&local_c8,&local_f8,(UObject *)this->PrimitiveComp);
  param_1->ActorHandle = local_f8;
  if (this->bStatic == false) {
    FChaosEngineInterface::SetCcdEnabled_AssumesLocked(&local_f8,param_1->bUseCCD);
    FChaosEngineInterface::SetMACDEnabled_AssumesLocked(&local_f8,param_1->bUseMACD);
    FChaosEngineInterface::SetPartialIslandSleepAllowed_AssumesLocked
              (&local_f8,param_1->bAllowPartialIslandSleep);
    bVar5 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)param_1);
    FChaosEngineInterface::SetIsKinematic_AssumesLocked(&local_f8,!bVar5);
    FChaosEngineInterface::SetMaxLinearVelocity_AssumesLocked(&local_f8,__real_7f7fffff);
    FChaosEngineInterface::SetSmoothEdgeCollisionsEnabled_AssumesLocked
              (&local_f8,param_1->bSmoothEdgeCollisions);
    FChaosEngineInterface::SetInertiaConditioningEnabled_AssumesLocked
              (&local_f8,param_1->bInertiaConditioning);
    FChaosEngineInterface::SetGyroscopicTorqueEnabled_AssumesLocked
              (&local_f8,(bool)((byte)param_1->_padding_ >> 4 & 1));
    uVar12 = 0xffffffff;
    if (param_1->bOverrideIterationCounts == '\0') {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)param_1->PositionSolverIterationCount;
    }
    FChaosEngineInterface::SetPositionSolverIterationCount_AssumesLocked(&local_f8,uVar10);
    if (param_1->bOverrideIterationCounts == '\0') {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)param_1->VelocitySolverIterationCount;
    }
    FChaosEngineInterface::SetVelocitySolverIterationCount_AssumesLocked(&local_f8,uVar10);
    if (param_1->bOverrideIterationCounts != '\0') {
      uVar12 = (uint)param_1->ProjectionSolverIterationCount;
    }
    FChaosEngineInterface::SetProjectionSolverIterationCount_AssumesLocked(&local_f8,uVar12);
    FChaosEngineInterface::SetGravityGroupIndex_AssumesLocked
              (&local_f8,(uint)param_1->GravityGroupIndex);
    FChaosEngineInterface::SetSendsSleepNotifies_AssumesLocked
              (&local_f8,(bool)((byte)param_1->_padding_ >> 7));
  }
  if ((local_e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar4 = local_e8;
  if (((((local_e0 & 4) != 0) && (local_e8 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// CreateActor_AssumesLocked @ 1481dc6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
CreateActor_AssumesLocked
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          FBodyInstance *param_1,TTransform<double> *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor> FVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  uchar uVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_158 [32];
  FSingleParticlePhysicsProxy *local_f8;
  LARGE_INTEGER local_f0;
  FName local_e8;
  byte local_e0;
  FStatMessage local_d8;
  FActorCreationParams local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar11 = '\0';
  FVar7 = StatPtr_STAT_CreatePhysicsActor;
  if (StatPtr_STAT_CreatePhysicsActor == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor>)0x0)
  {
    pFVar6 = ::FName::FName((FName *)&local_d8,"STAT_CreatePhysicsActor");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsActor>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsActor,*pFVar6,
                       L"CreatePhysicsActor","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_e0 = 0;
  FVar4 = *(FName *)FVar7;
  FVar13 = FVar4.ComparisonIndex.Value;
  uVar12 = FVar4.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      local_e0 = local_e0 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_f0.s.LowPart = FVar13.Value;
        local_f0.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f0.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x50c);
        local_e0 = local_e0 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0.s.LowPart = FVar13.Value;
      local_f0.s.HighPart = uVar12;
      local_e8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_e0 = local_e0 | 4;
    }
  }
  pUVar8 = FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
  if (pUVar8 != (UObject *)0x0) {
    if ((*(longlong *)&pUVar8[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar8[4].field_0x8 + 0x5d) & 1) == 0)) goto LAB_1481dc87a;
    pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar9->_padding_)) {
      uVar11 = pUVar8[0x17].field_0xf;
      goto LAB_1481dc87a;
    }
  }
  uVar11 = (param_1->CollisionEnabled).Value;
LAB_1481dc87a:
  local_c8.InitialTM.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_c8.InitialTM.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_c8.InitialTM.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_c8.InitialTM.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_c8.InitialTM.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_c8.InitialTM.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_c8.InitialTM.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_c8.InitialTM.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_c8.InitialTM.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_c8.InitialTM.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_c8.InitialTM.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_c8.InitialTM.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_c8.bSimulatePhysics =
       FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)param_1);
  local_c8.bStartAwake = (bool)((byte)param_1->_padding_ >> 6 & 1);
  if ((param_1->CharDebugName).Object == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) {
    local_c8.DebugName = (char *)0x0;
  }
  else {
    local_c8.DebugName = (char *)(((param_1->CharDebugName).Object)->AllocatorInstance).Data;
  }
  bVar2 = (byte)param_1->_padding_;
  local_c8.bEnableGravity = (bool)(bVar2 >> 2 & 1);
  local_c8.bUpdateKinematicFromSimulation = (bool)(bVar2 >> 3 & 1);
  local_c8.Scene = (FChaosScene *)this->PhysScene;
  local_c8.bQueryOnly = uVar11 == '\x01';
  local_c8.bStatic = this->bStatic;
  local_f8 = (FSingleParticlePhysicsProxy *)0x0;
  FChaosEngineInterface::CreateActor(&local_c8,&local_f8,(UObject *)this->PrimitiveComp);
  param_1->ActorHandle = local_f8;
  if (this->bStatic == false) {
    FChaosEngineInterface::SetCcdEnabled_AssumesLocked(&local_f8,param_1->bUseCCD);
    FChaosEngineInterface::SetMACDEnabled_AssumesLocked(&local_f8,param_1->bUseMACD);
    FChaosEngineInterface::SetPartialIslandSleepAllowed_AssumesLocked
              (&local_f8,param_1->bAllowPartialIslandSleep);
    bVar5 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)param_1);
    FChaosEngineInterface::SetIsKinematic_AssumesLocked(&local_f8,!bVar5);
    FChaosEngineInterface::SetMaxLinearVelocity_AssumesLocked(&local_f8,__real_7f7fffff);
    FChaosEngineInterface::SetSmoothEdgeCollisionsEnabled_AssumesLocked
              (&local_f8,param_1->bSmoothEdgeCollisions);
    FChaosEngineInterface::SetInertiaConditioningEnabled_AssumesLocked
              (&local_f8,param_1->bInertiaConditioning);
    FChaosEngineInterface::SetGyroscopicTorqueEnabled_AssumesLocked
              (&local_f8,(bool)((byte)param_1->_padding_ >> 4 & 1));
    uVar12 = 0xffffffff;
    if (param_1->bOverrideIterationCounts == '\0') {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)param_1->PositionSolverIterationCount;
    }
    FChaosEngineInterface::SetPositionSolverIterationCount_AssumesLocked(&local_f8,uVar10);
    if (param_1->bOverrideIterationCounts == '\0') {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)param_1->VelocitySolverIterationCount;
    }
    FChaosEngineInterface::SetVelocitySolverIterationCount_AssumesLocked(&local_f8,uVar10);
    if (param_1->bOverrideIterationCounts != '\0') {
      uVar12 = (uint)param_1->ProjectionSolverIterationCount;
    }
    FChaosEngineInterface::SetProjectionSolverIterationCount_AssumesLocked(&local_f8,uVar12);
    FChaosEngineInterface::SetGravityGroupIndex_AssumesLocked
              (&local_f8,(uint)param_1->GravityGroupIndex);
    FChaosEngineInterface::SetSendsSleepNotifies_AssumesLocked
              (&local_f8,(bool)((byte)param_1->_padding_ >> 7));
  }
  if ((local_e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar4 = local_e8;
  if (((((local_e0 & 4) != 0) && (local_e8 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// CreateShapesAndActors @ 1481de530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this)

{
  UBodySetup **ppUVar1;
  byte bVar2;
  FName FVar3;
  UBodySetup *pUVar4;
  UPrimitiveComponent *pUVar5;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FBodyInstance *this_00;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  UPrimitiveComponent *pUVar11;
  TGeometryParticle<double,3> *pTVar12;
  IPhysicsProxyBase *pIVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  bool bVar22;
  bool bVar23;
  undefined1 uVar24;
  uchar uVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors> FVar30;
  UObject *pUVar31;
  UClass *pUVar32;
  UWorld *this_01;
  byte bVar33;
  FStaticBasicLogRecord *pFVar34;
  FScriptContainerElement *pFVar35;
  char *pcVar36;
  FString *pFVar37;
  uint uVar38;
  longlong lVar39;
  bool bVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  FColor_u_0 local_res10 [2];
  UBodySetup **local_res18;
  FWeakObjectPtr local_res20;
  char *in_stack_fffffffffffffe08;
  FName local_1b8;
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  longlong local_180;
  UPrimitiveComponent *local_178;
  FName local_170;
  UObject *local_168;
  UBodySetup *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FSingleParticlePhysicsProxy *local_120;
  TArray<char,TSizedDefaultAllocator<32>_> *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FString *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FBodyInstance *pFStack_f0;
  FName local_e8;
  void *local_e0 [2];
  void *local_d0 [2];
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  
  FVar30 = StatPtr_STAT_CreatePhysicsShapesAndActors;
  if (StatPtr_STAT_CreatePhysicsShapesAndActors ==
      (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors>)0x0) {
    pFVar29 = ::FName::FName(&local_e8,"STAT_CreatePhysicsShapesAndActors");
    in_stack_fffffffffffffe08 = "STATCAT_Advanced";
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsShapesAndActors,
                        *pFVar29,L"CreatePhysicsShapesAndActors","STATGROUP_Physics",
                        "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  FVar3 = *(FName *)FVar30;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_170.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x59a);
        bVar16 = true;
        bVar15 = true;
      }
    }
    bVar17 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar17 = true;
      local_1b8 = FVar3;
    }
  }
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1435,"CreatePhysicsShapesAndActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
               ,0x59b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1435);
  }
  iVar28 = this->Bodies->ArrayNum;
  bVar22 = IsInGameThread();
  ppUVar1 = &this->BodySetup;
  local_res18 = ppUVar1;
  if (bVar22) {
    (**(code **)((*ppUVar1)->_padding_ + 0x2b0))();
  }
  else if (((Chaos::CVars::bEnableAsyncInitBody == false) ||
           ((*ppUVar1)->bCreatedPhysicsMeshes == '\0' &&
            (*ppUVar1)->bNeverNeedsCookedCollisionData == '\0')) &&
          (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsInGameThread || (Chaos::CVars::bEnableAsyncInitBody && (BodySetup->bCreatedPhysicsMeshes || BodySetup->bNeverNeedsCookedCollisionData))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                               ,0x5a1,L""), bVar23)) {
    pcVar14 = (code *)swi(3);
    uVar24 = (*pcVar14)();
    return (bool)uVar24;
  }
  dVar21 = __real_3f1a36e2e0000000;
  fVar20 = __real_bf800000;
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (((bSkipShapeCreationForEmptyBodySetup == false) ||
      (pUVar4 = *ppUVar1, (pUVar4->TriMeshGeometries).ArrayNum != 0)) ||
     ((pUVar4->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
      (pUVar4->AggGeom).MLLevelSetElems.ArrayNum + (pUVar4->AggGeom).SkinnedLevelSetElems.ArrayNum +
      (pUVar4->AggGeom).LevelSetElems.ArrayNum + (pUVar4->AggGeom).TaperedCapsuleElems.ArrayNum +
      (pUVar4->AggGeom).ConvexElems.ArrayNum + (pUVar4->AggGeom).SphylElems.ArrayNum +
      (pUVar4->AggGeom).BoxElems.ArrayNum + (pUVar4->AggGeom).SphereElems.ArrayNum != 0)) {
    uVar38 = iVar28 - 1;
    if (-1 < (int)uVar38) {
      lVar39 = (longlong)(int)uVar38;
      do {
        pTVar6 = this->Bodies;
        uVar41 = 0;
        if ((int)uVar38 < pTVar6->ArrayNum) {
          uVar41 = ~uVar38 >> 0x1f;
        }
        local_180 = lVar39;
        if (uVar41 == 0) {
          in_stack_fffffffffffffe08 = (char *)(longlong)(int)uVar38;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar14 = (code *)swi(3);
            uVar24 = (*pcVar14)();
            return (bool)uVar24;
          }
        }
        this_00 = *(FBodyInstance **)((pTVar6->AllocatorInstance).Data + lVar39 * 8);
        pTVar7 = this->Transforms;
        uVar27 = 0;
        uVar41 = uVar27;
        if ((int)uVar38 < pTVar7->ArrayNum) {
          uVar41 = ~uVar38 >> 0x1f;
        }
        if (uVar41 == 0) {
          in_stack_fffffffffffffe08 = (char *)(longlong)(int)uVar38;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar14 = (code *)swi(3);
            uVar24 = (*pcVar14)();
            return (bool)uVar24;
          }
        }
        local_178 = (UPrimitiveComponent *)((pTVar7->AllocatorInstance).Data + local_180 * 0x60);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FString::FString(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                              ::__l2::NullName,L"<NoName>");
          atexit(`GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>'::__l2::
                 _dynamic_atexit_destructor_for__NullName__);
          _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pUVar5 = local_178;
        pFVar8 = (this->DebugName).Object;
        local_b0 = *(undefined8 *)&local_178->field_0x50;
        pFVar37 = &`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedDefaultAllocator<32>_>(TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>&___ptr64)'
                   ::__l2::NullName;
        if (pFVar8 != (FString *)0x0) {
          pFVar37 = pFVar8;
        }
        local_c0 = *(uint *)&local_178->field_0x40;
        uStack_bc = *(uint *)&local_178->field_0x44;
        uStack_b8 = *(uint *)&local_178->field_0x48;
        uStack_b4 = *(uint *)&local_178->field_0x4c;
        if (((((double)CONCAT44(uStack_bc & uVar19,local_c0 & uVar18) < dVar21 ||
               (double)CONCAT44(uStack_bc & uVar19,local_c0 & uVar18) == dVar21) &&
             ((double)CONCAT44(uStack_b4 & uVar19,uStack_b8 & uVar18) <= dVar21)) &&
            (uVar41 = (uint)local_b0 & uVar18, uVar42 = (uint)((ulonglong)local_b0 >> 0x20) & uVar19
            , (double)CONCAT44(uVar42,uVar41) < dVar21 || (double)CONCAT44(uVar42,uVar41) == dVar21)
            ) && (2 < (byte)LogPhysics._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        }
        fVar43 = (float)(*(double *)&pUVar5->field_0x48 * *(double *)&pUVar5->field_0x40 *
                        *(double *)&pUVar5->field_0x50);
        if ((0.0 <= fVar43) || ((*local_res18)->bGenerateMirroredCollision != '\0')) {
          if ((0.0 < fVar43) &&
             (((*local_res18)->bGenerateNonMirroredCollision == '\0' && (2 < (byte)LogPhysics._0_1_)
              ))) {
            pFVar34 = &::LOG_Static;
            goto LAB_1481dea8b;
          }
        }
        else if (2 < (byte)LogPhysics._0_1_) {
          if ((pFVar37->Data).ArrayNum == 0) {
            pFVar34 = &::LOG_Static;
          }
          else {
            pFVar34 = &::LOG_Static;
          }
LAB_1481dea8b:
          UE::Logging::Private::BasicLog<3>(pFVar34,(FLogCategoryBase *)&LogPhysics);
        }
        bVar23 = ValidateTransformNaN
                           ((TTransform<double> *)pUVar5,pFVar37,(FName *)&(*local_res18)->_padding_
                           );
        if (!bVar23) {
          if (bPreventInvalidBodyInstanceTransforms != false) {
            if (1 < (byte)LogPhysics._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors(void)___ptr64'
                          ::__l45::LOG_Static,(FLogCategoryBase *)&LogPhysics);
            }
            goto LAB_1481df161;
          }
          if (1 < (byte)LogPhysics._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors(void)___ptr64'
                        ::__l64::LOG_Static,(FLogCategoryBase *)&LogPhysics);
          }
        }
        local_178 = this->PrimitiveComp;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_178 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_178);
        }
        FWeakObjectPtr::operator=(&(this_00->OwnerComponent).WeakPtr,(FObjectPtr)&local_178);
        this_00->BodyInstanceOwner = this->BodyInstanceOwner;
        local_168 = this->SourceObject;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_168);
        }
        FWeakObjectPtr::operator=(&(this_00->SourceObject).WeakPtr,(FObjectPtr)&local_168);
        local_160 = *local_res18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UBodySetup *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_160);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_160);
        local_a8 = *(double *)&pUVar5->field_0x40;
        dStack_a0 = *(double *)&pUVar5->field_0x48;
        local_98 = *(double *)&pUVar5->field_0x50;
        (this_00->Scale3D).field0_0x0._s_0.X = local_a8;
        (this_00->Scale3D).field0_0x0._s_0.Y = dStack_a0;
        (this_00->Scale3D).field0_0x0._s_0.Z = local_98;
        pTVar9 = (this->PhysXName).Object;
        pTVar10 = (this->PhysXName).SharedReferenceCount.ReferenceController;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_118 = (this_00->CharDebugName).Object;
        pTStack_110 = (this_00->CharDebugName).SharedReferenceCount.ReferenceController;
        (this_00->CharDebugName).Object = pTVar9;
        (this_00->CharDebugName).SharedReferenceCount.ReferenceController = pTVar10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_110);
        bVar2 = (byte)this_00->_padding_;
        if (((bVar2 & 4) == 0) ||
           ((this->SkelMeshComp != (USkeletalMeshComponent *)0x0 &&
            ((this->SkelMeshComp->_padding_ & 4) == 0)))) {
          bVar33 = 0;
        }
        else {
          bVar33 = 4;
        }
        *(byte *)&this_00->_padding_ = bVar2 & 0xfb | bVar33;
        if ((this->bStatic == false) && ((bVar2 & 0x20) != 0)) {
          pUVar31 = FWeakObjectPtr::Get(&(this_00->OwnerComponent).WeakPtr);
          if (pUVar31 == (UObject *)0x0) {
LAB_1481dec69:
            uVar25 = (this_00->CollisionEnabled).Value;
LAB_1481dec6d:
            if (uVar25 == '\x01') goto LAB_1481ded35;
          }
          else if ((*(longlong *)&pUVar31[4].field_0x8 == 0) ||
                  ((*(byte *)(*(longlong *)&pUVar31[4].field_0x8 + 0x5d) & 1) != 0)) {
            pUVar32 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar28 = (int)pUVar32->_padding_;
            if ((*(int *)(*(longlong *)&pUVar31->field_0x10 + 0x38) < iVar28) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar31->field_0x10 + 0x30) + (longlong)iVar28 * 8) !=
                &pUVar32->_padding_)) goto LAB_1481dec69;
            uVar25 = pUVar31[0x17].field_0xf;
            goto LAB_1481dec6d;
          }
          if (this->PrimitiveComp != (UPrimitiveComponent *)0x0) {
            lVar39 = *(longlong *)&this->PrimitiveComp->field_0xd0;
            if (lVar39 == 0) {
LAB_1481decb1:
              lVar39 = 0;
            }
            else {
              pUVar32 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
              iVar28 = (int)pUVar32->_padding_;
              if ((*(int *)(*(longlong *)(lVar39 + 0x10) + 0x38) < iVar28) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar39 + 0x10) + 0x30) + (longlong)iVar28 * 8) !=
                  &pUVar32->_padding_)) goto LAB_1481decb1;
            }
            if (lVar39 != 0) {
              this_01 = *(UWorld **)&this->PrimitiveComp->field_0xb0;
              if (((this_01 != (UWorld *)0x0) ||
                  (this_01 = UActorComponent::GetWorld_Uncached
                                       ((UActorComponent *)this->PrimitiveComp),
                  this_01 != (UWorld *)0x0)) && (bVar23 = UWorld::IsGameWorld(this_01), bVar23)) {
                if ((!bVar22) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("bIsInGameThread",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                                        ,0x5e8,L""), bVar23)) {
                  pcVar14 = (code *)swi(3);
                  uVar24 = (*pcVar14)();
                  return (bool)uVar24;
                }
                pUVar11 = this->PrimitiveComp;
                in_stack_fffffffffffffe08 =
                     (char *)((ulonglong)in_stack_fffffffffffffe08 & 0xffffffffffffff00);
                cVar26 = (**(code **)(*(longlong *)pUVar11 + 0x858))
                                   (pUVar11,lVar39,*(undefined8 *)&pUVar11->field_0xd8,0,
                                    in_stack_fffffffffffffe08);
                if (cVar26 != '\0') goto LAB_1481df161;
              }
            }
          }
        }
LAB_1481ded35:
        if (this_00->ActorHandle == (FSingleParticlePhysicsProxy *)0x0) {
          if ((this->bStatic == false) &&
             (this->SpawnParams->bPhysicsTypeDeterminesSimulation != false)) {
            *(byte *)&this_00->_padding_ =
                 (byte)this_00->_padding_ ^
                 ((byte)this_00->_padding_ ^ this->bInstanceSimulatePhysics) & 1;
            if (this->InstanceBlendWeight != fVar20) {
              this_00->PhysicsBlendWeight = this->InstanceBlendWeight;
            }
          }
          local_f8 = 1;
          *(ulonglong *)&this_00->PhysicsUserData = CONCAT44(uStack_f4,1);
          (this_00->PhysicsUserData).Payload = this_00;
          pFStack_f0 = this_00;
          CreateActor_AssumesLocked(this,this_00,(TTransform<double> *)pUVar5);
          bVar23 = CreateShapes_AssumesLocked(this,this_00);
          if (bVar23) {
            if (4 < (byte)LogPhysics._0_1_) {
              (**(code **)(*(longlong *)this->PrimitiveComp + 0x478))(this->PrimitiveComp,local_d0);
              UE::Logging::Private::BasicLog<5>
                        (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors(void)___ptr64'
                          ::__l116::LOG_Static,(FLogCategoryBase *)&LogPhysics);
              if (local_d0[0] != (void *)0x0) {
                FMemory::Free(local_d0[0]);
              }
            }
            FBodyInstance::ReleasePhysicsActor(this_00);
            local_198.ObjectIndex = 0;
            local_198.ObjectSerialNumber = 0;
            local_140 = 0;
            FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_140);
            (this_00->OwnerComponent).WeakPtr = local_198;
            this_00->BodyInstanceOwner = (IPhysicsBodyInstanceOwner *)0x0;
            local_190.ObjectIndex = 0;
            local_190.ObjectSerialNumber = 0;
            local_138 = 0;
            FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_138);
            (this_00->SourceObject).WeakPtr = local_190;
            local_188.ObjectIndex = 0;
            local_188.ObjectSerialNumber = 0;
            local_130 = 0;
            FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_130);
            this_00->_padding_ = (longlong)local_188;
            local_128 = 0;
            FWeakObjectPtr::operator=
                      (&(this_00->ExternalCollisionProfileBodySetup).WeakPtr,(FObjectPtr)&local_128)
            ;
          }
          else {
            local_120 = this_00->ActorHandle;
            FChaosEngineInterface::SetActorUserData_AssumesLocked
                      (&local_120,&this_00->PhysicsUserData);
            pTVar12 = (this_00->ActorHandle->Particle).Ptr;
            pFVar8 = (this->DebugName).Object;
            pTVar10 = (this->DebugName).SharedReferenceCount.ReferenceController;
            pIVar13 = pTVar12->Proxy;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_108 = (pTVar12->MNonFrequentData).Property.MDebugName.Object;
            pTStack_100 = (pTVar12->MNonFrequentData).Property.MDebugName.SharedReferenceCount.
                          ReferenceController;
            (pTVar12->MNonFrequentData).Property.MDebugName.Object = pFVar8;
            (pTVar12->MNonFrequentData).Property.MDebugName.SharedReferenceCount.ReferenceController
                 = pTVar10;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_100);
            (pTVar12->MDirtyFlags).Bits = (pTVar12->MDirtyFlags).Bits | 0x10;
            if ((pIVar13 != (IPhysicsProxyBase *)0x0) &&
               (pIVar13->Solver != (FPhysicsSolverBase *)0x0)) {
              Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar13->Solver,pIVar13);
            }
          }
        }
        else {
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_158 = 0;
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_158);
          (this_00->OwnerComponent).WeakPtr = local_res20;
          this_00->BodyInstanceOwner = (IPhysicsBodyInstanceOwner *)0x0;
          local_1a8.ObjectIndex = 0;
          local_1a8.ObjectSerialNumber = 0;
          local_150 = 0;
          FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_150);
          (this_00->SourceObject).WeakPtr = local_1a8;
          local_1a0.ObjectIndex = 0;
          local_1a0.ObjectSerialNumber = 0;
          local_148 = 0;
          FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_148);
          this_00->_padding_ = (longlong)local_1a0;
          pTVar6 = this->Bodies;
          uVar41 = uVar27;
          if ((int)(uVar38 + 1) <= pTVar6->ArrayNum) {
            uVar41 = ~uVar38 >> 0x1f;
          }
          if (uVar41 == 0) {
            in_stack_fffffffffffffe08 = (char *)(longlong)(int)uVar38;
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar14 = (code *)swi(3);
              uVar24 = (*pcVar14)();
              return (bool)uVar24;
            }
          }
          pcVar36 = (char *)(longlong)(int)uVar38;
          pFVar35 = (pTVar6->AllocatorInstance).Data + (longlong)pcVar36 * 8;
          iVar28 = (pTVar6->ArrayNum - uVar38) + -1;
          if (iVar28 != 0) {
            memmove(pFVar35,pFVar35 + 8,(longlong)iVar28 << 3);
          }
          pTVar6->ArrayNum = pTVar6->ArrayNum + -1;
          pTVar7 = this->Transforms;
          if ((int)(uVar38 + 1) <= pTVar7->ArrayNum) {
            uVar27 = ~uVar38 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (in_stack_fffffffffffffe08 = pcVar36,
             bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar23)) {
            pcVar14 = (code *)swi(3);
            uVar24 = (*pcVar14)();
            return (bool)uVar24;
          }
          pFVar35 = (pTVar7->AllocatorInstance).Data + (longlong)pcVar36 * 0x60;
          iVar28 = (pTVar7->ArrayNum - uVar38) + -1;
          if (iVar28 != 0) {
            memmove(pFVar35,pFVar35 + 0x60,(longlong)iVar28 * 0x60);
          }
          pTVar7->ArrayNum = pTVar7->ArrayNum + -1;
        }
        lVar39 = local_180 + -1;
        uVar38 = uVar38 - 1;
        local_180 = lVar39;
      } while (-1 < (int)uVar38);
    }
    bVar22 = true;
  }
  else {
    if (4 < (byte)LogPhysics._0_1_) {
      pUVar5 = this->PrimitiveComp;
      if (pUVar5 != (UPrimitiveComponent *)0x0) {
        (**(code **)(*(longlong *)pUVar5 + 0x478))(pUVar5,local_e0);
      }
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapesAndActors(void)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      if ((pUVar5 != (UPrimitiveComponent *)0x0) && (local_e0[0] != (void *)0x0)) {
        FMemory::Free(local_e0[0]);
        bVar22 = false;
        goto LAB_1481df090;
      }
    }
LAB_1481df161:
    bVar22 = false;
  }
LAB_1481df090:
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(local_1b8,CycleScopeEnd);
  }
  return bVar22;
}

// CreateShapesAndActors @ 1481df170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
CreateShapesAndActors
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  UBodySetup **ppUVar1;
  byte bVar2;
  FName FVar3;
  UBodySetup *pUVar4;
  UPrimitiveComponent *pUVar5;
  FBodyInstance *this_00;
  FString *pFVar6;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  UPrimitiveComponent *pUVar9;
  TGeometryParticle<double,3> *pTVar10;
  IPhysicsProxyBase *pIVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  double dVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  uchar uVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors> FVar28;
  UObject *pUVar29;
  UClass *pUVar30;
  UWorld *this_01;
  byte bVar31;
  FStaticBasicLogRecord *pFVar32;
  ForElementType<FBodyInstance_*> FVar33;
  void *pvVar34;
  ForElementType<UE::Math::TTransform<double>_> FVar35;
  ForElementType<FBodyInstance_*> FVar36;
  ForElementType<UE::Math::TTransform<double>_> FVar37;
  char *pcVar38;
  FString *pFVar39;
  uint uVar40;
  longlong lVar41;
  bool bVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  FColor_u_0 local_res10 [2];
  UBodySetup **local_res18;
  FWeakObjectPtr local_res20;
  char *in_stack_fffffffffffffe08;
  FName local_1b8;
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  longlong local_180;
  UPrimitiveComponent *local_178;
  FName local_170;
  UObject *local_168;
  UBodySetup *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FSingleParticlePhysicsProxy *local_120;
  TArray<char,TSizedDefaultAllocator<32>_> *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FString *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FBodyInstance *pFStack_f0;
  FName local_e8;
  void *local_e0 [2];
  void *local_d0 [2];
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  
  FVar28 = StatPtr_STAT_CreatePhysicsShapesAndActors;
  if (StatPtr_STAT_CreatePhysicsShapesAndActors ==
      (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors>)0x0) {
    pFVar27 = ::FName::FName(&local_e8,"STAT_CreatePhysicsShapesAndActors");
    in_stack_fffffffffffffe08 = "STATCAT_Advanced";
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapesAndActors>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsShapesAndActors,
                        *pFVar27,L"CreatePhysicsShapesAndActors","STATGROUP_Physics",
                        "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  FVar3 = *(FName *)FVar28;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_170.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x59a);
        bVar14 = true;
        bVar13 = true;
      }
    }
    bVar15 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar15 = true;
      local_1b8 = FVar3;
    }
  }
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CreateShapesAndActors(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1435,"CreatePhysicsShapesAndActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
               ,0x59b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CreateShapesAndActors(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1435);
  }
  iVar26 = this->Bodies->ArrayNum;
  bVar20 = IsInGameThread();
  ppUVar1 = &this->BodySetup;
  local_res18 = ppUVar1;
  if (bVar20) {
    (**(code **)((*ppUVar1)->_padding_ + 0x2b0))();
  }
  else if (((Chaos::CVars::bEnableAsyncInitBody == false) ||
           ((*ppUVar1)->bCreatedPhysicsMeshes == '\0' &&
            (*ppUVar1)->bNeverNeedsCookedCollisionData == '\0')) &&
          (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsInGameThread || (Chaos::CVars::bEnableAsyncInitBody && (BodySetup->bCreatedPhysicsMeshes || BodySetup->bNeverNeedsCookedCollisionData))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                               ,0x5a1,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    uVar22 = (*pcVar12)();
    return (bool)uVar22;
  }
  dVar19 = __real_3f1a36e2e0000000;
  fVar18 = __real_bf800000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (((bSkipShapeCreationForEmptyBodySetup == false) ||
      (pUVar4 = *ppUVar1, (pUVar4->TriMeshGeometries).ArrayNum != 0)) ||
     ((pUVar4->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
      (pUVar4->AggGeom).MLLevelSetElems.ArrayNum + (pUVar4->AggGeom).SkinnedLevelSetElems.ArrayNum +
      (pUVar4->AggGeom).LevelSetElems.ArrayNum + (pUVar4->AggGeom).TaperedCapsuleElems.ArrayNum +
      (pUVar4->AggGeom).ConvexElems.ArrayNum + (pUVar4->AggGeom).SphylElems.ArrayNum +
      (pUVar4->AggGeom).BoxElems.ArrayNum + (pUVar4->AggGeom).SphereElems.ArrayNum != 0)) {
    uVar40 = iVar26 - 1;
    if (-1 < (int)uVar40) {
      lVar41 = (longlong)(int)uVar40;
      do {
        FVar36 = (ForElementType<FBodyInstance_*>)this->Bodies;
        uVar43 = 0;
        if ((int)uVar40 < *(int *)((longlong)FVar36 + 0x10)) {
          uVar43 = ~uVar40 >> 0x1f;
        }
        local_180 = lVar41;
        if (uVar43 == 0) {
          in_stack_fffffffffffffe08 = (char *)(longlong)(int)uVar40;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar12 = (code *)swi(3);
            uVar22 = (*pcVar12)();
            return (bool)uVar22;
          }
        }
        if (*(ForElementType<FBodyInstance_*> *)((longlong)FVar36 + 8) !=
            (ForElementType<FBodyInstance_*>)0x0) {
          FVar36 = *(ForElementType<FBodyInstance_*> *)((longlong)FVar36 + 8);
        }
        this_00 = *(FBodyInstance **)((longlong)FVar36 + lVar41 * 8);
        FVar37 = (ForElementType<UE::Math::TTransform<double>_>)this->Transforms;
        uVar25 = 0;
        uVar43 = uVar25;
        if ((int)uVar40 < *(int *)((longlong)FVar37 + 0x70)) {
          uVar43 = ~uVar40 >> 0x1f;
        }
        if (uVar43 == 0) {
          in_stack_fffffffffffffe08 = (char *)(longlong)(int)uVar40;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar12 = (code *)swi(3);
            uVar22 = (*pcVar12)();
            return (bool)uVar22;
          }
        }
        if (*(ForElementType<UE::Math::TTransform<double>_> *)((longlong)FVar37 + 0x60) !=
            (ForElementType<UE::Math::TTransform<double>_>)0x0) {
          FVar37 = *(ForElementType<UE::Math::TTransform<double>_> *)((longlong)FVar37 + 0x60);
        }
        local_178 = (UPrimitiveComponent *)(local_180 * 0x60 + (longlong)FVar37);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FString::FString(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                              ::__l2::NullName,L"<NoName>");
          atexit(`GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
                 ::__l2::_dynamic_atexit_destructor_for__NullName__);
          _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pUVar5 = local_178;
        pFVar6 = (this->DebugName).Object;
        local_b0 = *(undefined8 *)&local_178->field_0x50;
        pFVar39 = &`class_FString_const&___ptr64___cdecl_GetBodyInstanceDebugName<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>(TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>&___ptr64)'
                   ::__l2::NullName;
        if (pFVar6 != (FString *)0x0) {
          pFVar39 = pFVar6;
        }
        local_c0 = *(uint *)&local_178->field_0x40;
        uStack_bc = *(uint *)&local_178->field_0x44;
        uStack_b8 = *(uint *)&local_178->field_0x48;
        uStack_b4 = *(uint *)&local_178->field_0x4c;
        if (((((double)CONCAT44(uStack_bc & uVar17,local_c0 & uVar16) < dVar19 ||
               (double)CONCAT44(uStack_bc & uVar17,local_c0 & uVar16) == dVar19) &&
             ((double)CONCAT44(uStack_b4 & uVar17,uStack_b8 & uVar16) <= dVar19)) &&
            (uVar43 = (uint)local_b0 & uVar16, uVar44 = (uint)((ulonglong)local_b0 >> 0x20) & uVar17
            , (double)CONCAT44(uVar44,uVar43) < dVar19 || (double)CONCAT44(uVar44,uVar43) == dVar19)
            ) && (2 < (byte)LogPhysics._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        }
        fVar45 = (float)(*(double *)&pUVar5->field_0x48 * *(double *)&pUVar5->field_0x40 *
                        *(double *)&pUVar5->field_0x50);
        if ((0.0 <= fVar45) || ((*local_res18)->bGenerateMirroredCollision != '\0')) {
          if ((0.0 < fVar45) &&
             (((*local_res18)->bGenerateNonMirroredCollision == '\0' && (2 < (byte)LogPhysics._0_1_)
              ))) {
            pFVar32 = &::LOG_Static;
            goto LAB_1481df6da;
          }
        }
        else if (2 < (byte)LogPhysics._0_1_) {
          if ((pFVar39->Data).ArrayNum == 0) {
            pFVar32 = &::LOG_Static;
          }
          else {
            pFVar32 = &::LOG_Static;
          }
LAB_1481df6da:
          UE::Logging::Private::BasicLog<3>(pFVar32,(FLogCategoryBase *)&LogPhysics);
        }
        bVar21 = ValidateTransformNaN
                           ((TTransform<double> *)pUVar5,pFVar39,(FName *)&(*local_res18)->_padding_
                           );
        if (!bVar21) {
          if (bPreventInvalidBodyInstanceTransforms != false) {
            if (1 < (byte)LogPhysics._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CreateShapesAndActors(void)___ptr64'
                          ::__l45::LOG_Static,(FLogCategoryBase *)&LogPhysics);
            }
            goto LAB_1481dfdd9;
          }
          if (1 < (byte)LogPhysics._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CreateShapesAndActors(void)___ptr64'
                        ::__l64::LOG_Static,(FLogCategoryBase *)&LogPhysics);
          }
        }
        local_178 = this->PrimitiveComp;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_178 != (UPrimitiveComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_178);
        }
        FWeakObjectPtr::operator=(&(this_00->OwnerComponent).WeakPtr,(FObjectPtr)&local_178);
        this_00->BodyInstanceOwner = this->BodyInstanceOwner;
        local_168 = this->SourceObject;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_168);
        }
        FWeakObjectPtr::operator=(&(this_00->SourceObject).WeakPtr,(FObjectPtr)&local_168);
        local_160 = *local_res18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UBodySetup *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_160);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_160);
        local_a8 = *(double *)&pUVar5->field_0x40;
        dStack_a0 = *(double *)&pUVar5->field_0x48;
        local_98 = *(double *)&pUVar5->field_0x50;
        (this_00->Scale3D).field0_0x0._s_0.X = local_a8;
        (this_00->Scale3D).field0_0x0._s_0.Y = dStack_a0;
        (this_00->Scale3D).field0_0x0._s_0.Z = local_98;
        pTVar7 = (this->PhysXName).Object;
        pTVar8 = (this->PhysXName).SharedReferenceCount.ReferenceController;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_118 = (this_00->CharDebugName).Object;
        pTStack_110 = (this_00->CharDebugName).SharedReferenceCount.ReferenceController;
        (this_00->CharDebugName).Object = pTVar7;
        (this_00->CharDebugName).SharedReferenceCount.ReferenceController = pTVar8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_110);
        bVar2 = (byte)this_00->_padding_;
        if (((bVar2 & 4) == 0) ||
           ((this->SkelMeshComp != (USkeletalMeshComponent *)0x0 &&
            ((this->SkelMeshComp->_padding_ & 4) == 0)))) {
          bVar31 = 0;
        }
        else {
          bVar31 = 4;
        }
        *(byte *)&this_00->_padding_ = bVar2 & 0xfb | bVar31;
        if ((this->bStatic == false) && ((bVar2 & 0x20) != 0)) {
          pUVar29 = FWeakObjectPtr::Get(&(this_00->OwnerComponent).WeakPtr);
          if (pUVar29 == (UObject *)0x0) {
LAB_1481df8bc:
            uVar23 = (this_00->CollisionEnabled).Value;
LAB_1481df8c1:
            if (uVar23 == '\x01') goto LAB_1481df989;
          }
          else if ((*(longlong *)&pUVar29[4].field_0x8 == 0) ||
                  ((*(byte *)(*(longlong *)&pUVar29[4].field_0x8 + 0x5d) & 1) != 0)) {
            pUVar30 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar26 = (int)pUVar30->_padding_;
            if ((*(int *)(*(longlong *)&pUVar29->field_0x10 + 0x38) < iVar26) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar29->field_0x10 + 0x30) + (longlong)iVar26 * 8) !=
                &pUVar30->_padding_)) goto LAB_1481df8bc;
            uVar23 = pUVar29[0x17].field_0xf;
            goto LAB_1481df8c1;
          }
          if (this->PrimitiveComp != (UPrimitiveComponent *)0x0) {
            lVar41 = *(longlong *)&this->PrimitiveComp->field_0xd0;
            if (lVar41 == 0) {
LAB_1481df905:
              lVar41 = 0;
            }
            else {
              pUVar30 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
              iVar26 = (int)pUVar30->_padding_;
              if ((*(int *)(*(longlong *)(lVar41 + 0x10) + 0x38) < iVar26) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar41 + 0x10) + 0x30) + (longlong)iVar26 * 8) !=
                  &pUVar30->_padding_)) goto LAB_1481df905;
            }
            if (lVar41 != 0) {
              this_01 = *(UWorld **)&this->PrimitiveComp->field_0xb0;
              if (((this_01 != (UWorld *)0x0) ||
                  (this_01 = UActorComponent::GetWorld_Uncached
                                       ((UActorComponent *)this->PrimitiveComp),
                  this_01 != (UWorld *)0x0)) && (bVar21 = UWorld::IsGameWorld(this_01), bVar21)) {
                if ((!bVar20) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("bIsInGameThread",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                                        ,0x5e8,L""), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  uVar22 = (*pcVar12)();
                  return (bool)uVar22;
                }
                pUVar9 = this->PrimitiveComp;
                in_stack_fffffffffffffe08 =
                     (char *)((ulonglong)in_stack_fffffffffffffe08 & 0xffffffffffffff00);
                cVar24 = (**(code **)(*(longlong *)pUVar9 + 0x858))
                                   (pUVar9,lVar41,*(undefined8 *)&pUVar9->field_0xd8,0,
                                    in_stack_fffffffffffffe08);
                if (cVar24 != '\0') goto LAB_1481dfdd9;
              }
            }
          }
        }
LAB_1481df989:
        if (this_00->ActorHandle == (FSingleParticlePhysicsProxy *)0x0) {
          if ((this->bStatic == false) &&
             (this->SpawnParams->bPhysicsTypeDeterminesSimulation != false)) {
            *(byte *)&this_00->_padding_ =
                 (byte)this_00->_padding_ ^
                 ((byte)this_00->_padding_ ^ this->bInstanceSimulatePhysics) & 1;
            if (this->InstanceBlendWeight != fVar18) {
              this_00->PhysicsBlendWeight = this->InstanceBlendWeight;
            }
          }
          local_f8 = 1;
          *(ulonglong *)&this_00->PhysicsUserData = CONCAT44(uStack_f4,1);
          (this_00->PhysicsUserData).Payload = this_00;
          pFStack_f0 = this_00;
          CreateActor_AssumesLocked(this,this_00,(TTransform<double> *)pUVar5);
          bVar21 = CreateShapes_AssumesLocked(this,this_00);
          if (bVar21) {
            if (4 < (byte)LogPhysics._0_1_) {
              (**(code **)(*(longlong *)this->PrimitiveComp + 0x478))(this->PrimitiveComp,local_d0);
              UE::Logging::Private::BasicLog<5>
                        (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CreateShapesAndActors(void)___ptr64'
                          ::__l116::LOG_Static,(FLogCategoryBase *)&LogPhysics);
              if (local_d0[0] != (void *)0x0) {
                FMemory::Free(local_d0[0]);
              }
            }
            FBodyInstance::ReleasePhysicsActor(this_00);
            local_198.ObjectIndex = 0;
            local_198.ObjectSerialNumber = 0;
            local_140 = 0;
            FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_140);
            (this_00->OwnerComponent).WeakPtr = local_198;
            this_00->BodyInstanceOwner = (IPhysicsBodyInstanceOwner *)0x0;
            local_190.ObjectIndex = 0;
            local_190.ObjectSerialNumber = 0;
            local_138 = 0;
            FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_138);
            (this_00->SourceObject).WeakPtr = local_190;
            local_188.ObjectIndex = 0;
            local_188.ObjectSerialNumber = 0;
            local_130 = 0;
            FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_130);
            this_00->_padding_ = (longlong)local_188;
            local_128 = 0;
            FWeakObjectPtr::operator=
                      (&(this_00->ExternalCollisionProfileBodySetup).WeakPtr,(FObjectPtr)&local_128)
            ;
          }
          else {
            local_120 = this_00->ActorHandle;
            FChaosEngineInterface::SetActorUserData_AssumesLocked
                      (&local_120,&this_00->PhysicsUserData);
            pTVar10 = (this_00->ActorHandle->Particle).Ptr;
            pFVar6 = (this->DebugName).Object;
            pTVar8 = (this->DebugName).SharedReferenceCount.ReferenceController;
            pIVar11 = pTVar10->Proxy;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_108 = (pTVar10->MNonFrequentData).Property.MDebugName.Object;
            pTStack_100 = (pTVar10->MNonFrequentData).Property.MDebugName.SharedReferenceCount.
                          ReferenceController;
            (pTVar10->MNonFrequentData).Property.MDebugName.Object = pFVar6;
            (pTVar10->MNonFrequentData).Property.MDebugName.SharedReferenceCount.ReferenceController
                 = pTVar8;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_100);
            (pTVar10->MDirtyFlags).Bits = (pTVar10->MDirtyFlags).Bits | 0x10;
            if ((pIVar11 != (IPhysicsProxyBase *)0x0) &&
               (pIVar11->Solver != (FPhysicsSolverBase *)0x0)) {
              Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar11->Solver,pIVar11);
            }
          }
        }
        else {
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_158 = 0;
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_158);
          (this_00->OwnerComponent).WeakPtr = local_res20;
          this_00->BodyInstanceOwner = (IPhysicsBodyInstanceOwner *)0x0;
          local_1a8.ObjectIndex = 0;
          local_1a8.ObjectSerialNumber = 0;
          local_150 = 0;
          FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_150);
          (this_00->SourceObject).WeakPtr = local_1a8;
          local_1a0.ObjectIndex = 0;
          local_1a0.ObjectSerialNumber = 0;
          local_148 = 0;
          FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_148);
          this_00->_padding_ = (longlong)local_1a0;
          FVar36 = (ForElementType<FBodyInstance_*>)this->Bodies;
          uVar43 = uVar25;
          if ((int)(uVar40 + 1) <= *(int *)((longlong)FVar36 + 0x10)) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          if (uVar43 == 0) {
            in_stack_fffffffffffffe08 = (char *)(longlong)(int)uVar40;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar21) {
              pcVar12 = (code *)swi(3);
              uVar22 = (*pcVar12)();
              return (bool)uVar22;
            }
          }
          pcVar38 = (char *)(longlong)(int)uVar40;
          FVar33 = FVar36;
          if (*(ForElementType<FBodyInstance_*> *)((longlong)FVar36 + 8) !=
              (ForElementType<FBodyInstance_*>)0x0) {
            FVar33 = *(ForElementType<FBodyInstance_*> *)((longlong)FVar36 + 8);
          }
          pvVar34 = (void *)((longlong)FVar33 + (longlong)pcVar38 * 8);
          iVar26 = (*(int *)((longlong)FVar36 + 0x10) - uVar40) + -1;
          if (iVar26 != 0) {
            memmove(pvVar34,(void *)((longlong)pvVar34 + 8),(longlong)iVar26 << 3);
          }
          *(int *)((longlong)FVar36 + 0x10) = *(int *)((longlong)FVar36 + 0x10) + -1;
          FVar37 = (ForElementType<UE::Math::TTransform<double>_>)this->Transforms;
          if ((int)(uVar40 + 1) <= *(int *)((longlong)FVar37 + 0x70)) {
            uVar25 = ~uVar40 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), in_stack_fffffffffffffe08 = pcVar38, bVar21)) {
            pcVar12 = (code *)swi(3);
            uVar22 = (*pcVar12)();
            return (bool)uVar22;
          }
          FVar35 = FVar37;
          if (*(ForElementType<UE::Math::TTransform<double>_> *)((longlong)FVar37 + 0x60) !=
              (ForElementType<UE::Math::TTransform<double>_>)0x0) {
            FVar35 = *(ForElementType<UE::Math::TTransform<double>_> *)((longlong)FVar37 + 0x60);
          }
          pvVar34 = (void *)((longlong)(int)uVar40 * 0x60 + (longlong)FVar35);
          iVar26 = (*(int *)((longlong)FVar37 + 0x70) - uVar40) + -1;
          if (iVar26 != 0) {
            memmove(pvVar34,(void *)((longlong)pvVar34 + 0x60),(longlong)iVar26 * 0x60);
          }
          *(int *)((longlong)FVar37 + 0x70) = *(int *)((longlong)FVar37 + 0x70) + -1;
        }
        lVar41 = local_180 + -1;
        uVar40 = uVar40 - 1;
        local_180 = lVar41;
      } while (-1 < (int)uVar40);
    }
    bVar20 = true;
  }
  else {
    if (4 < (byte)LogPhysics._0_1_) {
      pUVar5 = this->PrimitiveComp;
      if (pUVar5 != (UPrimitiveComponent *)0x0) {
        (**(code **)(*(longlong *)pUVar5 + 0x478))(pUVar5,local_e0);
      }
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CreateShapesAndActors(void)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      if ((pUVar5 != (UPrimitiveComponent *)0x0) && (local_e0[0] != (void *)0x0)) {
        FMemory::Free(local_e0[0]);
        bVar20 = false;
        goto LAB_1481dfd08;
      }
    }
LAB_1481dfdd9:
    bVar20 = false;
  }
LAB_1481dfd08:
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(local_1b8,CycleScopeEnd);
  }
  return bVar20;
}

// CreateShapes_AssumesLocked @ 1481dfdf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::CreateShapes_AssumesLocked
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this,FBodyInstance *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  TEnumAsByte<ECollisionTraceFlag> TVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes> FVar13;
  undefined7 extraout_var;
  UObject *pUVar14;
  UClass *pUVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar16;
  longlong lVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_a8 [8];
  FStatNameAndInfo local_a0;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> local_88;
  FBodyCollisionData local_78;
  
  lVar17 = 0;
  FVar13 = StatPtr_STAT_CreatePhysicsShapes;
  if (StatPtr_STAT_CreatePhysicsShapes == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes>)0x0
     ) {
    pFVar12 = ::FName::FName(&local_res10,"STAT_CreatePhysicsShapes");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsShapes,*pFVar12,
                        L"CreatePhysicsShapes","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar16 = *(LARGE_INTEGER *)FVar13;
  bVar3 = false;
  bVar5 = false;
  if ((LVar16.s.LowPart == 0) && (LVar16.s.HighPart == 0)) {
LAB_1481dff16:
    bVar4 = false;
    LVar16._0_4_ = 0;
    LVar16._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x539);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481dff16;
    local_res8 = LVar16;
    FThreadStats::AddMessage((FName)LVar16.s,CycleScopeStart);
    bVar4 = true;
  }
  local_res10 = (FName)FBodyInstance::GetSimplePhysicalMaterial(param_1);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_a8 = (undefined1  [8])0x0;
  local_a0.Index.Value = 0;
  local_a0.Number = 0;
  FBodyInstance::GetComplexPhysicalMaterials
            (param_1,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)
                     (param_1->OwnerComponent).WeakPtr,
             (TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *)local_a8,&local_88,
             param_1->BodyInstanceOwner);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)local_a8;
  local_98.ArrayNum = local_a0.Index.Value;
  local_98.ArrayMax = local_a0.Number;
  local_78.CollisionFilterData.SimFilter.Word2 = 0;
  local_78.CollisionFilterData.SimFilter.Word3 = 0;
  local_78.CollisionFilterData.SimFilter.Word0 = 0;
  local_78.CollisionFilterData.SimFilter.Word1 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word2 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word3 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word0 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word1 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word2 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word3 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word0 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word1 = 0;
  local_78.CollisionFlags.bEnableSimCollisionSimple = false;
  local_78.CollisionFlags.bEnableSimCollisionComplex = false;
  local_78.CollisionFlags.bEnableQueryCollision = false;
  local_78.CollisionFlags.bEnableProbeCollision = false;
  FBodyInstance::BuildBodyFilterData(param_1,&local_78.CollisionFilterData,-1);
  TVar7 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this->BodySetup);
  cVar2 = *(char *)CONCAT71(extraout_var,TVar7.Value);
  pUVar14 = FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
  if (pUVar14 == (UObject *)0x0) {
LAB_1481e0021:
    bVar8 = (param_1->CollisionEnabled).Value;
  }
  else {
    if ((*(longlong *)&pUVar14[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar14[4].field_0x8 + 0x5d) & 1) == 0)) {
      local_78.CollisionFlags.bEnableSimCollisionSimple = false;
      local_78.CollisionFlags.bEnableSimCollisionComplex = false;
      local_78.CollisionFlags.bEnableQueryCollision = false;
      local_78.CollisionFlags.bEnableProbeCollision = false;
      goto LAB_1481e008b;
    }
    pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar11 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar15->_padding_)) goto LAB_1481e0021;
    bVar8 = pUVar14[0x17].field_0xf;
  }
  local_78.CollisionFlags.bEnableSimCollisionSimple = false;
  local_78.CollisionFlags.bEnableSimCollisionComplex = false;
  local_78.CollisionFlags.bEnableQueryCollision = false;
  local_78.CollisionFlags.bEnableProbeCollision = false;
  if (bVar8 != 0) {
    if (((bVar8 - 1 & 0xfffffff9) == 0) && (bVar8 != 7)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    local_78.CollisionFlags = (FBodyCollisionFlags)((uint)bVar9 << 0x10);
    bVar10 = bVar8 - 4 < 2;
    if ((SimCollisionEnabled != 0) && ((bVar10 || (bVar8 - 2 < 2)))) {
      local_78.CollisionFlags.bEnableProbeCollision = bVar10;
      local_78.CollisionFlags.bEnableQueryCollision = (bool)bVar9;
      local_78.CollisionFlags.bEnableSimCollisionComplex = cVar2 == '\x03';
      local_78.CollisionFlags.bEnableSimCollisionSimple = true;
    }
  }
LAB_1481e008b:
  UBodySetup::AddShapesToRigidActor_AssumesLocked
            (this->BodySetup,param_1,&param_1->Scale3D,(UPhysicalMaterial *)local_res10,&local_98,
             &local_88,&local_78,&UE::Math::TTransform<double>::Identity,
             (TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *)0x0);
  pTVar6 = CVarIgnoreAnalyticCollisionsOverride.Ref;
  bVar10 = IsInParallelGameThread();
  if ((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) {
    lVar17 = 4;
  }
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar17) == 0) {
    bVar10 = param_1->bIgnoreAnalyticCollisions;
  }
  else {
    bVar10 = true;
  }
  local_res8 = (LARGE_INTEGER)param_1->ActorHandle;
  FChaosEngineInterface::SetIgnoreAnalyticCollisions_AssumesLocked
            ((FSingleParticlePhysicsProxy **)&local_res8,bVar10);
  local_res8 = (LARGE_INTEGER)param_1->ActorHandle;
  iVar11 = FChaosEngineInterface::GetNumShapes((FSingleParticlePhysicsProxy **)&local_res8);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)LVar16.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0 = (FStatNameAndInfo)(LVar16.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_a8 = (undefined1  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return iVar11 == 0;
}

// CreateShapes_AssumesLocked @ 1481e0240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
CreateShapes_AssumesLocked
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          FBodyInstance *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  TEnumAsByte<ECollisionTraceFlag> TVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes> FVar13;
  undefined7 extraout_var;
  UObject *pUVar14;
  UClass *pUVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar16;
  longlong lVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_a8 [8];
  FStatNameAndInfo local_a0;
  TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> local_88;
  FBodyCollisionData local_78;
  
  lVar17 = 0;
  FVar13 = StatPtr_STAT_CreatePhysicsShapes;
  if (StatPtr_STAT_CreatePhysicsShapes == (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes>)0x0
     ) {
    pFVar12 = ::FName::FName(&local_res10,"STAT_CreatePhysicsShapes");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_CreatePhysicsShapes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreatePhysicsShapes,*pFVar12,
                        L"CreatePhysicsShapes","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar16 = *(LARGE_INTEGER *)FVar13;
  bVar3 = false;
  bVar5 = false;
  if ((LVar16.s.LowPart == 0) && (LVar16.s.HighPart == 0)) {
LAB_1481e0366:
    bVar4 = false;
    LVar16._0_4_ = 0;
    LVar16._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x539);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481e0366;
    local_res8 = LVar16;
    FThreadStats::AddMessage((FName)LVar16.s,CycleScopeStart);
    bVar4 = true;
  }
  local_res10 = (FName)FBodyInstance::GetSimplePhysicalMaterial(param_1);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_a8 = (undefined1  [8])0x0;
  local_a0.Index.Value = 0;
  local_a0.Number = 0;
  FBodyInstance::GetComplexPhysicalMaterials
            (param_1,(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>)
                     (param_1->OwnerComponent).WeakPtr,
             (TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *)local_a8,&local_88,
             param_1->BodyInstanceOwner);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)local_a8;
  local_98.ArrayNum = local_a0.Index.Value;
  local_98.ArrayMax = local_a0.Number;
  local_78.CollisionFilterData.SimFilter.Word2 = 0;
  local_78.CollisionFilterData.SimFilter.Word3 = 0;
  local_78.CollisionFilterData.SimFilter.Word0 = 0;
  local_78.CollisionFilterData.SimFilter.Word1 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word2 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word3 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word0 = 0;
  local_78.CollisionFilterData.QuerySimpleFilter.Word1 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word2 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word3 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word0 = 0;
  local_78.CollisionFilterData.QueryComplexFilter.Word1 = 0;
  local_78.CollisionFlags.bEnableSimCollisionSimple = false;
  local_78.CollisionFlags.bEnableSimCollisionComplex = false;
  local_78.CollisionFlags.bEnableQueryCollision = false;
  local_78.CollisionFlags.bEnableProbeCollision = false;
  FBodyInstance::BuildBodyFilterData(param_1,&local_78.CollisionFilterData,-1);
  TVar7 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)this->BodySetup);
  cVar2 = *(char *)CONCAT71(extraout_var,TVar7.Value);
  pUVar14 = FWeakObjectPtr::Get(&(param_1->OwnerComponent).WeakPtr);
  if (pUVar14 == (UObject *)0x0) {
LAB_1481e0471:
    bVar8 = (param_1->CollisionEnabled).Value;
  }
  else {
    if ((*(longlong *)&pUVar14[4].field_0x8 != 0) &&
       ((*(byte *)(*(longlong *)&pUVar14[4].field_0x8 + 0x5d) & 1) == 0)) {
      local_78.CollisionFlags.bEnableSimCollisionSimple = false;
      local_78.CollisionFlags.bEnableSimCollisionComplex = false;
      local_78.CollisionFlags.bEnableQueryCollision = false;
      local_78.CollisionFlags.bEnableProbeCollision = false;
      goto LAB_1481e04db;
    }
    pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar11 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar15->_padding_)) goto LAB_1481e0471;
    bVar8 = pUVar14[0x17].field_0xf;
  }
  local_78.CollisionFlags.bEnableSimCollisionSimple = false;
  local_78.CollisionFlags.bEnableSimCollisionComplex = false;
  local_78.CollisionFlags.bEnableQueryCollision = false;
  local_78.CollisionFlags.bEnableProbeCollision = false;
  if (bVar8 != 0) {
    if (((bVar8 - 1 & 0xfffffff9) == 0) && (bVar8 != 7)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    local_78.CollisionFlags = (FBodyCollisionFlags)((uint)bVar9 << 0x10);
    bVar10 = bVar8 - 4 < 2;
    if ((SimCollisionEnabled != 0) && ((bVar10 || (bVar8 - 2 < 2)))) {
      local_78.CollisionFlags.bEnableProbeCollision = bVar10;
      local_78.CollisionFlags.bEnableQueryCollision = (bool)bVar9;
      local_78.CollisionFlags.bEnableSimCollisionComplex = cVar2 == '\x03';
      local_78.CollisionFlags.bEnableSimCollisionSimple = true;
    }
  }
LAB_1481e04db:
  UBodySetup::AddShapesToRigidActor_AssumesLocked
            (this->BodySetup,param_1,&param_1->Scale3D,(UPhysicalMaterial *)local_res10,&local_98,
             &local_88,&local_78,&UE::Math::TTransform<double>::Identity,
             (TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *)0x0);
  pTVar6 = CVarIgnoreAnalyticCollisionsOverride.Ref;
  bVar10 = IsInParallelGameThread();
  if ((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) {
    lVar17 = 4;
  }
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar17) == 0) {
    bVar10 = param_1->bIgnoreAnalyticCollisions;
  }
  else {
    bVar10 = true;
  }
  local_res8 = (LARGE_INTEGER)param_1->ActorHandle;
  FChaosEngineInterface::SetIgnoreAnalyticCollisions_AssumesLocked
            ((FSingleParticlePhysicsProxy **)&local_res8,bVar10);
  local_res8 = (LARGE_INTEGER)param_1->ActorHandle;
  iVar11 = FChaosEngineInterface::GetNumShapes((FSingleParticlePhysicsProxy **)&local_res8);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)LVar16.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0 = (FStatNameAndInfo)(LVar16.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_a8 = (undefined1  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return iVar11 == 0;
}

// InitBodies @ 148202040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::InitBodies
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  char local_res10 [8];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  char *local_28;
  TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLLMScope::FLLMScope(local_res18,ChaosBody,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,ChaosBody,true);
  local_res10[0] = IsInGameThread();
  if ((Chaos::CVars::bEnableAsyncInitBody == false) && (!(bool)local_res10[0])) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chaos::CVars::bEnableAsyncInitBody || bIsInGameThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x634,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_res10[0] != '\0') {
    bVar2 = CreateShapesAndActors(this);
    if (!bVar2) goto LAB_1482020f6;
  }
  local_28 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::InitBodies'::__l12::<lambda_1>,void>
             ::Call;
  local_20 = this;
  FPhysInterface_Chaos::ExecuteWrite(this->PhysScene,(TFunctionRef<void___cdecl(void)> *)&local_18);
LAB_1482020f6:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// InitBodies @ 148202120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::InitBodies
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  char local_res10 [8];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  char *local_28;
  TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLLMScope::FLLMScope(local_res18,ChaosBody,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,ChaosBody,true);
  local_res10[0] = IsInGameThread();
  if ((Chaos::CVars::bEnableAsyncInitBody == false) && (!(bool)local_res10[0])) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chaos::CVars::bEnableAsyncInitBody || bIsInGameThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                       ,0x634,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_res10[0] != '\0') {
    bVar2 = CreateShapesAndActors(this);
    if (!bVar2) goto LAB_1482021d6;
  }
  local_28 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::InitBodies'::__l12::<lambda_1>,void>
             ::Call;
  local_20 = this;
  FPhysInterface_Chaos::ExecuteWrite(this->PhysScene,(TFunctionRef<void___cdecl(void)> *)&local_18);
LAB_1482021d6:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// UpdateSimulatingAndBlendWeight @ 148225f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInitBodiesHelperBase<TSizedDefaultAllocator<32>_>::UpdateSimulatingAndBlendWeight
          (TInitBodiesHelperBase<TSizedDefaultAllocator<32>_> *this)

{
  GetSimulatingAndBlendWeight
            (this->SkelMeshComp,this->BodySetup,&this->InstanceBlendWeight,
             &this->bInstanceSimulatePhysics);
  return;
}

// UpdateSimulatingAndBlendWeight @ 148225f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
UpdateSimulatingAndBlendWeight
          (TInitBodiesHelperBase<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

{
  GetSimulatingAndBlendWeight
            (this->SkelMeshComp,this->BodySetup,&this->InstanceBlendWeight,
             &this->bInstanceSimulatePhysics);
  return;
}

