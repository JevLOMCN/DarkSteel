// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticStruct @ 14750e240

UScriptStruct * __cdecl FAnimSingleNodeInstanceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy,(UObject *)pUVar1,
                         L"AnimSingleNodeInstanceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSingleNodeInstanceProxy.OuterSingleton;
}

// Initialize @ 14750e280

void __thiscall
FAnimSingleNodeInstanceProxy::Initialize(FAnimSingleNodeInstanceProxy *this,UAnimInstance *param_1)

{
  undefined8 uVar1;
  FAnimationBaseContext local_28;
  
  FAnimInstanceProxy::Initialize((FAnimInstanceProxy *)this,param_1);
  *(undefined4 *)&this->field_0x5b0 = 0xffff;
  this->CurrentAsset = (UAnimationAsset *)0x0;
  *(undefined8 *)&this->field_0x5a8 = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BlendSpacePosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendSpacePosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendSpacePosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CurrentTime = 0.0;
  (this->DeltaTimeRecord).Delta = 0.0;
  (this->DeltaTimeRecord).Previous = 0.0;
  *(undefined4 *)&(this->DeltaTimeRecord).bPreviousIsValid = 0;
  FAnimationBaseContext::FAnimationBaseContext
            (&local_28,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
  (**(code **)(this->SingleNode)._padding_)(&this->SingleNode,&local_28);
  return;
}

// Evaluate @ 14750e330

bool __thiscall
FAnimSingleNodeInstanceProxy::Evaluate(FAnimSingleNodeInstanceProxy *this,FPoseContext *param_1)

{
  (**(code **)((this->SingleNode)._padding_ + 0x18))();
  return true;
}

// UpdateAnimationNode @ 14750e350

void __thiscall
FAnimSingleNodeInstanceProxy::UpdateAnimationNode
          (FAnimSingleNodeInstanceProxy *this,FAnimationUpdateContext *param_1)

{
  *(short *)&this->field_0x5b0 = *(short *)&this->field_0x5b0 + 1;
  *(ulong64 *)&this->field_0x5a8 = GFrameCounter;
  if (*(short *)&this->field_0x5b0 == -1) {
    *(undefined2 *)&this->field_0x5b0 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014750e382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->SingleNode)._padding_ + 0x10))();
  return;
}

// PostUpdate @ 14750e390

void __thiscall
FAnimSingleNodeInstanceProxy::PostUpdate(FAnimSingleNodeInstanceProxy *this,UAnimInstance *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  UObject *pUVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  FAnimInstanceProxy::PostUpdate((FAnimInstanceProxy *)this,param_1);
  uVar11 = 0;
  pTVar8 = FAnimInstanceProxy::GetMontageEvaluationData((FAnimInstanceProxy *)this);
  fVar4 = __real_3727c5ac;
  pFVar13 = (param_1->MontageInstances).AllocatorInstance.Data;
  local_res18 = (param_1->MontageInstances).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  lVar12 = 0;
  local_res20 = pFVar13 + uVar9 * 8;
  while( true ) {
    pFVar5 = local_res20;
    if ((param_1->MontageInstances).ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar5) break;
    plVar2 = *(longlong **)pFVar13;
    if ((*plVar2 != 0) && (fVar4 < *(float *)(plVar2 + 0x33))) {
      uVar7 = 0;
      if ((int)uVar11 < pTVar8->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x58
                                    ));
      if ((UObject *)*plVar2 == (UObject *)0x0) {
        bVar6 = pUVar10 == (UObject *)0x0;
      }
      else {
        bVar6 = (UObject *)*plVar2 == pUVar10;
      }
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MontageInstance->Montage == EvaluationData[EvaluationDataIndex].Montage"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSingleNodeInstanceProxy.cpp"
                           ,0x5d,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar7 = 0;
      if ((int)uVar11 < pTVar8->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar11 = uVar11 + 1;
      lVar1 = lVar12 + 0x54;
      lVar12 = lVar12 + 0x58;
      *(FScriptContainerElement *)(plVar2 + 0xd) = (pTVar8->AllocatorInstance).Data[lVar1];
    }
    uVar9 = (ulonglong)local_res18;
    pFVar13 = pFVar13 + 8;
  }
  return;
}

// PreUpdate @ 14750e560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimSingleNodeInstanceProxy::PreUpdate
          (FAnimSingleNodeInstanceProxy *this,UAnimInstance *param_1,float param_2)

{
  undefined8 *puVar1;
  uchar uVar2;
  undefined1 uVar3;
  UActorComponent *this_00;
  TSharedRef<FTokenizedMessage,1> *pTVar4;
  longlong lVar5;
  USceneComponent *this_01;
  code *pcVar6;
  double dVar7;
  FName FVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  UWorld *this_02;
  AWorldSettings *pAVar14;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  TTransform<double> *pTVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined1 auStackY_108 [32];
  undefined1 auStack_d8 [4];
  undefined8 uStack_d4;
  uint uStack_cc;
  UAnimInstance *pUStack_c8;
  TTransform<double> TStack_b8;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pUStack_c8 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::PreUpdate");
  (**(code **)(*(longlong *)this + 0x80))(this);
  this_00 = *(UActorComponent **)&this->field_0x158;
  if ((this_00 == (UActorComponent *)0x0) ||
     ((this_02 = this_00->WorldPrivate, this_02 == (UWorld *)0x0 &&
      (this_02 = UActorComponent::GetWorld_Uncached(this_00), this_02 == (UWorld *)0x0)))) {
    *(float *)&this->field_0x168 = param_2;
    uVar25 = __real_3f800000;
  }
  else {
    pAVar14 = UWorld::GetWorldSettings(this_02,false,true);
    *(float *)&this->field_0x168 = param_2;
    uVar25 = __real_3f800000;
    if (pAVar14 != (AWorldSettings *)0x0) {
      uVar25 = (**(code **)(pAVar14->_padding_ + 0x790))(pAVar14);
    }
  }
  *(undefined4 *)&this->field_0x16c = uVar25;
  *(uint *)&this->field_0x3c0 = (uint)(param_1->RootMotionMode).Value;
  uVar2 = (param_1->RootMotionMode).Value;
  if ((uVar2 == '\x02') || (uVar2 == '\x01')) {
    bVar9 = 2;
  }
  else {
    bVar9 = 0;
  }
  this->field_0x801 = this->field_0x801 & 0xfd;
  this->field_0x801 = this->field_0x801 | bVar9;
  if (*(longlong *)&this->field_0x158 != 0) {
    iVar17 = *(int *)&this->field_0x670;
    iVar11 = (**(code **)(*(longlong *)param_1 + 0x360))(param_1);
    *(int *)&this->field_0x670 = iVar11;
    if (iVar11 != iVar17) {
      FAnimInstanceProxy::OnPreUpdateLODChanged((FAnimInstanceProxy *)this,iVar17,iVar11);
    }
  }
  FAnimNotifyQueue::Reset
            ((FAnimNotifyQueue *)&this->field_0x348,*(USkeletalMeshComponent **)&this->field_0x158);
  if (*(int *)&this->field_0x1c < 0) {
    DestructItems<FQueuedDrawDebugItem,int>
              (*(FQueuedDrawDebugItem **)&this->field_0x10,*(int *)&this->field_0x18);
    *(undefined4 *)&this->field_0x18 = 0;
    if (*(int *)&this->field_0x1c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
    }
  }
  else {
    DestructItems<FQueuedDrawDebugItem,int>
              (*(FQueuedDrawDebugItem **)&this->field_0x10,*(int *)&this->field_0x18);
    *(undefined4 *)&this->field_0x18 = 0;
  }
  FVar8 = NAME_Update;
  uVar20 = 0;
  uVar12 = ::GetTypeHash(NAME_Update.ComparisonIndex.Value);
  pTVar15 = TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->field_0x7a0,uVar12 + FVar8.Number,&NAME_Update);
  pTVar4 = (TSharedRef<FTokenizedMessage,1> *)(pTVar15->AllocatorInstance).Data;
  uVar12 = 0;
  if (pTVar15->ArrayMax < 0) {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar4,pTVar15->ArrayNum);
    pTVar15->ArrayNum = 0;
    if (pTVar15->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar15->AllocatorInstance,0,&pTVar15->ArrayMax);
    }
  }
  else {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar4,pTVar15->ArrayNum);
    pTVar15->ArrayNum = 0;
  }
  lVar18 = (longlong)*(int *)&this->field_0x340;
  lVar24 = (longlong)(1 - *(int *)&this->field_0x340);
  iVar17 = *(int *)(&this->field_0x420 + lVar18 * 0x10);
  uVar22 = uVar20;
  if (0 < iVar17) {
    do {
      uVar19 = (uint)uVar20;
      uStack_d4 = 0;
      uStack_cc = uStack_cc & 0xffff0000;
      uVar23 = ~uVar19 >> 0x1f;
      uVar13 = uVar12;
      if ((int)uVar19 < iVar17) {
        uVar13 = uVar23;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(&this->field_0x418 + lVar18 * 0x10);
      *(undefined8 *)(lVar5 + uVar22) = uStack_d4;
      *(uint *)(lVar5 + 8 + uVar22) = uStack_cc;
      uVar13 = uVar12;
      if ((int)uVar19 < *(int *)(&this->field_0x420 + lVar24 * 0x10)) {
        uVar13 = uVar23;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined1 *)(*(longlong *)(&this->field_0x418 + lVar24 * 0x10) + 8 + uVar22);
      uVar13 = uVar12;
      if ((int)uVar19 < *(int *)(&this->field_0x420 + lVar18 * 0x10)) {
        uVar13 = uVar23;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      *(undefined1 *)(*(longlong *)(&this->field_0x418 + lVar18 * 0x10) + 9 + uVar22) = uVar3;
      iVar17 = *(int *)(&this->field_0x420 + lVar18 * 0x10);
      param_1 = pUStack_c8;
      uVar22 = uVar22 + 0xc;
    } while ((int)(uVar19 + 1) < iVar17);
  }
  UE::Anim::FAnimSync::Reset((FAnimSync *)&this->field_0x1e0);
  memset(*(void **)(&this->field_0x2d0 + (longlong)*(int *)&this->field_0x340 * 0x10),0,
         (longlong)*(int *)(&this->field_0x2d8 + (longlong)*(int *)&this->field_0x340 * 0x10) << 2);
  memset(*(void **)(&this->field_0x2b0 + (longlong)*(int *)&this->field_0x340 * 0x10),0,
         (longlong)*(int *)(&this->field_0x2b8 + (longlong)*(int *)&this->field_0x340 * 0x10) << 2);
  this_01 = *(USceneComponent **)&this->field_0x158;
  dVar7 = (this_01->ComponentToWorld).Rotation.XY.m128d_f64[1];
  *(double *)&this->field_0x20 = (this_01->ComponentToWorld).Rotation.XY.m128d_f64[0];
  *(double *)&this->field_0x28 = dVar7;
  dVar7 = (this_01->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  *(double *)&this->field_0x30 = (this_01->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  *(double *)&this->field_0x38 = dVar7;
  dVar7 = (this_01->ComponentToWorld).Translation.XY.m128d_f64[1];
  *(double *)&this->field_0x40 = (this_01->ComponentToWorld).Translation.XY.m128d_f64[0];
  *(double *)&this->field_0x48 = dVar7;
  dVar7 = (this_01->ComponentToWorld).Translation.ZW.m128d_f64[1];
  *(double *)&this->field_0x50 = (this_01->ComponentToWorld).Translation.ZW.m128d_f64[0];
  *(double *)&this->field_0x58 = dVar7;
  dVar7 = (this_01->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  *(double *)&this->field_0x60 = (this_01->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  *(double *)&this->field_0x68 = dVar7;
  dVar7 = (this_01->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
  *(double *)&this->field_0x70 = (this_01->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  *(double *)&this->field_0x78 = dVar7;
  pTVar16 = USceneComponent::GetRelativeTransform(this_01,&TStack_b8);
  dVar7 = (pTVar16->Rotation).XY.m128d_f64[1];
  *(double *)&this->field_0x80 = (pTVar16->Rotation).XY.m128d_f64[0];
  *(double *)&this->field_0x88 = dVar7;
  dVar7 = (pTVar16->Rotation).ZW.m128d_f64[1];
  *(double *)&this->field_0x90 = (pTVar16->Rotation).ZW.m128d_f64[0];
  *(double *)&this->field_0x98 = dVar7;
  dVar7 = (pTVar16->Translation).XY.m128d_f64[1];
  *(double *)&this->field_0xa0 = (pTVar16->Translation).XY.m128d_f64[0];
  *(double *)&this->field_0xa8 = dVar7;
  dVar7 = (pTVar16->Translation).ZW.m128d_f64[1];
  *(double *)&this->field_0xb0 = (pTVar16->Translation).ZW.m128d_f64[0];
  *(double *)&this->field_0xb8 = dVar7;
  dVar7 = (pTVar16->Scale3D).XY.m128d_f64[1];
  *(double *)&this->field_0xc0 = (pTVar16->Scale3D).XY.m128d_f64[0];
  *(double *)&this->field_0xc8 = dVar7;
  dVar7 = (pTVar16->Scale3D).ZW.m128d_f64[1];
  *(double *)&this->field_0xd0 = (pTVar16->Scale3D).ZW.m128d_f64[0];
  *(double *)&this->field_0xd8 = dVar7;
  lVar18 = *(longlong *)(*(longlong *)&this->field_0x158 + 0xa8);
  if ((lVar18 == 0) || (lVar18 = *(longlong *)(lVar18 + 0x1b8), lVar18 == 0)) {
    pTVar16 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar16 = (TTransform<double> *)(lVar18 + 0x1f0);
  }
  dVar7 = (pTVar16->Rotation).XY.m128d_f64[1];
  *(double *)&this->field_0xe0 = (pTVar16->Rotation).XY.m128d_f64[0];
  *(double *)&this->field_0xe8 = dVar7;
  dVar7 = (pTVar16->Rotation).ZW.m128d_f64[1];
  *(double *)&this->field_0xf0 = (pTVar16->Rotation).ZW.m128d_f64[0];
  *(double *)&this->field_0xf8 = dVar7;
  dVar7 = (pTVar16->Translation).XY.m128d_f64[1];
  *(double *)&this->field_0x100 = (pTVar16->Translation).XY.m128d_f64[0];
  *(double *)&this->field_0x108 = dVar7;
  dVar7 = (pTVar16->Translation).ZW.m128d_f64[1];
  *(double *)&this->field_0x110 = (pTVar16->Translation).ZW.m128d_f64[0];
  *(double *)&this->field_0x118 = dVar7;
  dVar7 = (pTVar16->Scale3D).XY.m128d_f64[1];
  *(double *)&this->field_0x120 = (pTVar16->Scale3D).XY.m128d_f64[0];
  *(double *)&this->field_0x128 = dVar7;
  dVar7 = (pTVar16->Scale3D).ZW.m128d_f64[1];
  *(double *)&this->field_0x130 = (pTVar16->Scale3D).ZW.m128d_f64[0];
  *(double *)&this->field_0x138 = dVar7;
  puVar21 = *(undefined8 **)&this->field_0x730;
  iVar17 = *(int *)&this->field_0x738;
  puVar1 = puVar21 + iVar17;
  while( true ) {
    if (*(int *)&this->field_0x738 != iVar17) {
      `TCheckedPointerIterator<FAnimNode_Base_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_d8);
    }
    if (puVar21 == puVar1) break;
    (**(code **)(*(longlong *)*puVar21 + 0x40))((longlong *)*puVar21,param_1);
    puVar21 = puVar21 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeObjects @ 14750e570

void __thiscall
FAnimSingleNodeInstanceProxy::InitializeObjects
          (FAnimSingleNodeInstanceProxy *this,UAnimInstance *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FAnimSingleNodeInstanceProxy *this_00;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 local_38;
  char local_37;
  FString local_30;
  FString local_20;
  
  FAnimInstanceProxy::InitializeObjects((FAnimInstanceProxy *)this,param_1);
  if (param_1 == (UAnimInstance *)0x0) {
    pFVar3 = GetTypeName<UAnimSingleNodeInstance>(&local_30);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UAnimSingleNodeInstance::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    this->CurrentAsset = *(UAnimationAsset **)&param_1->field_0x428;
    this_00 = UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>(param_1);
    FAnimInstanceProxy::GetInterpolationOverride((FAnimInstanceProxy *)this_00);
    if (&local_38 != &this->field_0x5e8) {
      if (local_37 == '\0') {
        if (this->field_0x5e9 != '\0') {
          this->field_0x5e9 = 0;
          return;
        }
      }
      else {
        this->field_0x5e8 = local_38;
        this->field_0x5e9 = 1;
      }
    }
    return;
  }
  pFVar3 = GetTypeName<UAnimSingleNodeInstance>(&local_30);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UAnimInstance>(&local_20,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearObjects @ 14750e6a0

void __thiscall FAnimSingleNodeInstanceProxy::ClearObjects(FAnimSingleNodeInstanceProxy *this)

{
  FAnimInstanceProxy::ClearObjects((FAnimInstanceProxy *)this);
  this->CurrentAsset = (UAnimationAsset *)0x0;
  return;
}

// SetAnimationAsset @ 14750e790

void __thiscall
FAnimSingleNodeInstanceProxy::SetAnimationAsset
          (FAnimSingleNodeInstanceProxy *this,UAnimationAsset *param_1,
          USkeletalMeshComponent *param_2,bool param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  FBlendSampleData *pFVar3;
  undefined8 uVar4;
  UClass *pUVar5;
  TVector<double>_u_0 local_28;
  
  this->PlayRate = param_4;
  piVar1 = &(this->BlendSampleData).ArrayMax;
  this->bLooping = param_3;
  this->CurrentTime = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BlendSpacePosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendSpacePosition).field0_0x0._s_0.Y = (double)uVar4;
  (this->BlendSpacePosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar3 = (FBlendSampleData *)(this->BlendSampleData).AllocatorInstance.Data;
  iVar2 = (this->BlendSampleData).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FBlendSampleData,int>(pFVar3,iVar2);
    (this->BlendSampleData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->BlendSampleData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FBlendSampleData,int>(pFVar3,iVar2);
    (this->BlendSampleData).ArrayNum = 0;
  }
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  UE::Anim::FAnimSync::ResetAll((FAnimSync *)&this->field_0x1e0);
  local_28._s_0.X = (this->BlendSpacePosition).field0_0x0._s_0.X;
  local_28._s_0.Y = (this->BlendSpacePosition).field0_0x0._s_0.Y;
  local_28._s_0.Z = (this->BlendSpacePosition).field0_0x0._s_0.Z;
  UpdateBlendspaceSamples(this,(TVector<double> *)&local_28._s_0);
  if (param_1 != (UAnimationAsset *)0x0) {
    pUVar5 = UBlendSpace::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      UBlendSpace::InitializeFilter((UBlendSpace *)param_1,&this->BlendFilter,2);
    }
  }
  return;
}

// FAnimSingleNodeInstanceProxy @ 14752f1a0

FAnimSingleNodeInstanceProxy * __thiscall
FAnimSingleNodeInstanceProxy::FAnimSingleNodeInstanceProxy(FAnimSingleNodeInstanceProxy *this)

{
  FAnimInstanceProxy::FAnimInstanceProxy((FAnimInstanceProxy *)this);
  *(undefined ***)this = &___7FAnimSingleNodeInstanceProxy__6B_;
  *(undefined8 *)&(this->PreviewCurveOverride).field_0x8 = 0;
  *(undefined8 *)&this->PreviewCurveOverride = 0;
  *(undefined8 *)&(this->PreviewCurveOverride).field_0x20 = 0;
  *(undefined4 *)&(this->PreviewCurveOverride).field_0x28 = 0;
  *(undefined4 *)&(this->PreviewCurveOverride).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviewCurveOverride).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviewCurveOverride).field_0x34 = 0;
  *(undefined8 *)&(this->PreviewCurveOverride).field_0x40 = 0;
  *(undefined4 *)&(this->PreviewCurveOverride).field_0x48 = 0;
  (this->SingleNode)._padding_ = (longlong)&___7FAnimNode_SingleNode__6B_;
  (this->SingleNode)._padding_ = 0;
  *(undefined8 *)&(this->SingleNode).SourcePose = 0;
  *(undefined4 *)&(this->SingleNode).SourcePose.field_0x8 = 0xffffffff;
  (this->SingleNode).SourcePose.field_0xc = 0;
  (this->SingleNode).ActiveMontageSlot.ComparisonIndex = 0;
  (this->SingleNode).ActiveMontageSlot.Number = 0;
  (this->BlendSampleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendSampleData).ArrayNum = 0;
  (this->BlendSampleData).ArrayMax = 0;
  (this->BlendFilter).FilterPerAxis.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendFilter).FilterPerAxis.ArrayNum = 0;
  (this->BlendFilter).FilterPerAxis.ArrayMax = 0;
  (this->WeightInfo).SourceWeight = 0.0;
  (this->WeightInfo).SlotNodeWeight = 0.0;
  (this->WeightInfo).TotalNodeWeight = 0.0;
  (this->DeltaTimeRecord).Delta = 0.0;
  (this->DeltaTimeRecord).Previous = 0.0;
  (this->DeltaTimeRecord).bPreviousIsValid = false;
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  return this;
}

// ~FAnimSingleNodeInstanceProxy @ 147533100

void __thiscall
FAnimSingleNodeInstanceProxy::~FAnimSingleNodeInstanceProxy(FAnimSingleNodeInstanceProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7FAnimSingleNodeInstanceProxy__6B_;
  DestructItems<FFIRFilterTimeBased,int>
            ((FFIRFilterTimeBased *)(this->BlendFilter).FilterPerAxis.AllocatorInstance.Data,
             (this->BlendFilter).FilterPerAxis.ArrayNum);
  pFVar1 = (this->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)(this->BlendSampleData).AllocatorInstance.Data,
             (this->BlendSampleData).ArrayNum);
  pFVar1 = (this->BlendSampleData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PreviewCurveOverride).field_0x48 = 0;
  (this->SingleNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  pvVar2 = *(void **)&(this->PreviewCurveOverride).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviewCurveOverride);
  FAnimInstanceProxy::~FAnimInstanceProxy((FAnimInstanceProxy *)this);
  return;
}

// GetBlendSpaceLength @ 14755a840

float __thiscall
FAnimSingleNodeInstanceProxy::GetBlendSpaceLength(FAnimSingleNodeInstanceProxy *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = __real_3f800000;
  uVar6 = 0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  if ((this->BlendSampleData).ArrayNum != 0) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->BlendSampleData).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
      pFVar1 = (this->BlendSampleData).AllocatorInstance.Data;
      fVar8 = (float)(**(code **)(**(longlong **)(pFVar1 + lVar5 + 8) + 0x2c0))();
      fVar9 = *(float *)(pFVar1 + lVar5 + 0x10);
      uVar6 = uVar6 + 1;
      if (fVar7 <= fVar9) {
        fVar9 = fVar7;
      }
      lVar5 = lVar5 + 0x60;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar11 = fVar11 + fVar9;
      fVar10 = fVar10 + fVar9 * fVar8;
    } while (uVar6 != (this->BlendSampleData).ArrayNum);
    if (0.0 < fVar11) {
      return fVar10 / fVar11;
    }
  }
  return 0.0;
}

// GetBlendSpaceState @ 14755a980

void __thiscall
FAnimSingleNodeInstanceProxy::GetBlendSpaceState
          (FAnimSingleNodeInstanceProxy *this,TVector<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (this->BlendFilter).FilterPerAxis.ArrayNum;
  if (iVar1 < 3) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    if (iVar1 < 2) {
      if (iVar1 < 1) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = *(float *)(this->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      }
    }
    else {
      pFVar2 = (this->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      fVar5 = *(float *)(pFVar2 + 0x38);
      fVar4 = *(float *)pFVar2;
    }
  }
  else {
    pFVar2 = (this->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
    fVar6 = *(float *)(pFVar2 + 0x70);
    fVar5 = *(float *)(pFVar2 + 0x38);
    fVar4 = *(float *)pFVar2;
  }
  (param_2->field0_0x0)._s_0.X = (double)fVar4;
  (param_2->field0_0x0)._s_0.Y = (double)fVar5;
  (param_2->field0_0x0)._s_0.Z = (double)fVar6;
  dVar3 = (this->BlendSpacePosition).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->BlendSpacePosition).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar3;
  (param_1->field0_0x0)._s_0.Z = (this->BlendSpacePosition).field0_0x0._s_0.Z;
  return;
}

// GetMirrorDataTable @ 14755d880

UMirrorDataTable * __thiscall
FAnimSingleNodeInstanceProxy::GetMirrorDataTable(FAnimSingleNodeInstanceProxy *this)

{
  return this->MirrorDataTable;
}

// InternalBlendSpaceEvaluatePose @ 147566350

void __thiscall
FAnimSingleNodeInstanceProxy::InternalBlendSpaceEvaluatePose
          (FAnimSingleNodeInstanceProxy *this,UBlendSpace *param_1,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_2,FPoseContext *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FBlendedCurve local_158;
  TArray<int,TSizedDefaultAllocator<32>_> *local_138;
  undefined8 local_130;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_128;
  undefined8 local_120;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_118
  ;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  FAnimExtractContext local_f8;
  FBaseCompactPose<TMemStackAllocator<0>_> local_a8;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  TArrayView<FPoseLink,int> local_68;
  TArrayView<FPoseLink,int> local_58;
  FAnimationPoseData local_48;
  FAnimationPoseData local_30;
  
  FAnimationPoseData::FAnimationPoseData
            (&local_30,&param_3->Pose,&param_3->Curve,&param_3->CustomAttributes);
  local_f8.bExtractRootMotion = (bool)((byte)this->field_0x801 >> 1 & 1);
  local_f8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.DeltaTimeRecord.bPreviousIsValid = (this->DeltaTimeRecord).bPreviousIsValid;
  local_f8.DeltaTimeRecord._9_3_ = *(undefined3 *)&(this->DeltaTimeRecord).field_0x9;
  local_f8.CurrentTime = (double)this->CurrentTime;
  local_f8.bLooping = this->bLooping;
  local_f8.PoseCurves.ArrayNum = 0;
  local_f8.PoseCurves.ArrayMax = 0;
  local_f8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BonesRequired.ArrayNum = 0;
  local_f8.BonesRequired.ArrayMax = 0;
  local_f8.DeltaTimeRecord.Delta = (this->DeltaTimeRecord).Delta;
  local_f8.DeltaTimeRecord.Previous = (this->DeltaTimeRecord).Previous;
  local_f8.InterpolationOverride.bIsSet = false;
  if (((TOptional<EAnimInterpolationType> *)&this->field_0x5e8 != &local_f8.InterpolationOverride)
     && (this->field_0x5e9 != '\0')) {
    local_f8.InterpolationOverride.TypedValue = this->field_0x5e8;
    local_f8.InterpolationOverride.bIsSet = true;
  }
  cVar2 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  if (cVar2 == '\0') {
    local_78 = 0;
    uStack_70 = 0;
    local_58._8_8_ = (ulonglong)uStack_6c << 0x20;
    local_58.DataPtr = (FPoseLink *)0x0;
    UBlendSpace::GetAnimationPose_Internal
              (param_1,param_2,&local_58,(FAnimInstanceProxy *)0x0,false,&local_f8,&local_30);
  }
  else {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8.BoneContainer = (FBoneContainer *)0x0;
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._16_1_ = 0;
    local_158._24_8_ = 0;
    local_138 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_130 = 0;
    local_128 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_120 = 0;
    local_118 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 *)0x0;
    local_110 = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              (&local_a8,*(FBoneContainer **)&(param_3->Pose).field_0x10);
    if (&param_3->Curve == &local_158) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4808592878626406918>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                         ,0x206,"&InCurveToInitFrom != this");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if ((longlong)local_158._8_8_ < 0) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)&local_158,0,
                   (int *)&local_158.field_0xc);
      }
      local_158._24_8_ = *(undefined8 *)&(param_3->Curve).field_0x18;
      local_158._16_1_ = 0;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_3->Pose,
               *(FBoneContainer **)&(param_3->Pose).field_0x10);
    FAnimationPoseData::FAnimationPoseData
              (&local_48,(FCompactPose *)&local_a8,&local_158,(FStackAttributeContainer *)&local_138
              );
    local_88 = 0;
    uStack_80 = 0;
    local_68._8_8_ = (ulonglong)uStack_7c << 0x20;
    local_68.DataPtr = (FPoseLink *)0x0;
    UBlendSpace::GetAnimationPose_Internal
              (param_1,param_2,&local_68,(FAnimInstanceProxy *)0x0,false,&local_f8,&local_48);
    FAnimationRuntime::AccumulateAdditivePose
              (&local_30,&local_48,__real_3f800000,
               (param_1->bContainsRotationOffsetMeshSpaceSamples != false) + AAT_LocalSpaceBase);
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_118,(int)local_110);
    if (local_118 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_118);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_128,(int)local_120);
    if (local_128 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_128);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_138,(int)local_130);
    if (local_138 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_138);
    }
  }
  if (local_f8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BonesRequired.AllocatorInstance.Data);
  }
  if (local_f8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.PoseCurves.AllocatorInstance.Data);
  }
  return;
}

// SetBlendSpacePosition @ 147578ad0

void __thiscall
FAnimSingleNodeInstanceProxy::SetBlendSpacePosition
          (FAnimSingleNodeInstanceProxy *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->BlendSpacePosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->BlendSpacePosition).field0_0x0._s_0.Y = dVar1;
  (this->BlendSpacePosition).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetMirrorDataTable @ 147579120

void __thiscall
FAnimSingleNodeInstanceProxy::SetMirrorDataTable
          (FAnimSingleNodeInstanceProxy *this,UMirrorDataTable *param_1)

{
  this->MirrorDataTable = param_1;
  return;
}

// SetMontagePreviewSlot @ 147579380

void __thiscall
FAnimSingleNodeInstanceProxy::SetMontagePreviewSlot
          (FAnimSingleNodeInstanceProxy *this,FName param_1)

{
  (this->SingleNode).ActiveMontageSlot = param_1;
  return;
}

// SetPreviewCurveOverride @ 147579ba0

void __thiscall
FAnimSingleNodeInstanceProxy::SetPreviewCurveOverride
          (FAnimSingleNodeInstanceProxy *this,FName *param_1,float param_2,bool param_3)

{
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  int iVar1;
  int iVar2;
  FName FVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 *puVar8;
  float *pfVar9;
  FName local_res8;
  float local_res18 [4];
  FName *local_28;
  float *local_20;
  
  FVar3 = *param_1;
  this_00 = &this->PreviewCurveOverride;
  local_res18[0] = param_2;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  iVar1 = *(int *)&(this->PreviewCurveOverride).field_0x8;
  pfVar9 = (float *)0x0;
  iVar2 = *(int *)&(this->PreviewCurveOverride).field_0x34;
  pfVar6 = pfVar9;
  if (iVar1 != iVar2) {
    puVar8 = *(undefined1 **)&(this->PreviewCurveOverride).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->PreviewCurveOverride).field_0x38;
    }
    fVar5 = *(float *)(puVar8 + (ulonglong)
                                (*(int *)&(this->PreviewCurveOverride).field_0x48 - 1U &
                                FVar3.Number + uVar4) * 4);
    if (fVar5 != -NAN) {
      do {
        pfVar6 = (float *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)fVar5 * 0x14);
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)fVar5 * 0x14) == FVar3)
        break;
        fVar5 = pfVar6[3];
        pfVar6 = pfVar9;
      } while (fVar5 != -NAN);
    }
  }
  pfVar7 = pfVar6 + 2;
  if (pfVar6 == (float *)0x0) {
    pfVar7 = pfVar9;
  }
  if ((!param_3) ||
     (__real_3727c5ac < (float)((uint)local_res18[0] & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_res18[0];
      return;
    }
    local_20 = local_res18;
    local_28 = param_1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<FName_const_&,float_const_&> *)(local_res18 + 2),
               (bool *)&local_28);
  }
  else {
    FVar3 = *param_1;
    if (iVar1 != iVar2) {
      local_res8 = FVar3;
      uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                         *)this_00,FVar3.Number + uVar4,&local_res8);
      return;
    }
  }
  return;
}

// SetReverse @ 147579eb0

void __thiscall
FAnimSingleNodeInstanceProxy::SetReverse(FAnimSingleNodeInstanceProxy *this,bool param_1)

{
  float fVar1;
  
  fVar1 = (float)((uint)this->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff);
  this->bReverse = param_1;
  if (param_1) {
    fVar1 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  }
  this->PlayRate = fVar1;
  return;
}

// UpdateBlendspaceSamples @ 147581bd0

void __thiscall
FAnimSingleNodeInstanceProxy::UpdateBlendspaceSamples
          (FAnimSingleNodeInstanceProxy *this,TVector<double> *param_1)

{
  int iVar1;
  UBlendSpace *pUVar2;
  UClass *pUVar3;
  float local_res8 [2];
  FMarkerTickRecord local_18;
  
  pUVar2 = (UBlendSpace *)this->CurrentAsset;
  if (pUVar2 != (UBlendSpace *)0x0) {
    pUVar3 = UBlendSpace::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      local_res8[0] = 0.0;
      local_18.PreviousMarker.MarkerIndex = -2;
      local_18.NextMarker.MarkerIndex = -2;
      FAnimInstanceProxy::BlendSpaceAdvanceImmediate
                ((FAnimInstanceProxy *)this,pUVar2,param_1,&this->BlendSampleData,&this->BlendFilter
                 ,false,__real_3f800000,0.0,local_res8,&local_18);
    }
  }
  return;
}

// UpdateMontageWeightForSlot @ 147582150

void __thiscall
FAnimSingleNodeInstanceProxy::UpdateMontageWeightForSlot
          (FAnimSingleNodeInstanceProxy *this,FName param_1,float param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  FAnimInstanceProxy::GetSlotWeight
            ((FAnimInstanceProxy *)this,local_res10,&(this->WeightInfo).SlotNodeWeight,
             &(this->WeightInfo).SourceWeight,&(this->WeightInfo).TotalNodeWeight);
  FAnimInstanceProxy::UpdateSlotNodeWeight
            ((FAnimInstanceProxy *)this,local_res10,(this->WeightInfo).SlotNodeWeight,param_2);
  return;
}

