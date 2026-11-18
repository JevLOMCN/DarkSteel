// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463d1e90

UScriptStruct * __cdecl FAnimNode_CurveSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CurveSource.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CurveSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CurveSource,(UObject *)pUVar1,
                         L"AnimNode_CurveSource");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CurveSource.OuterSingleton;
}

// FAnimNode_CurveSource @ 146403b80

FAnimNode_CurveSource * __thiscall
FAnimNode_CurveSource::FAnimNode_CurveSource(FAnimNode_CurveSource *this)

{
  *(undefined4 *)&(this->SourcePose).field_0x8 = 0xffffffff;
  *(undefined8 *)&this->SourcePose = 0;
  (this->SourcePose).field_0xc = 0;
  this->_padding_ = (longlong)&___7FAnimNode_CurveSource__6B_;
  this->_padding_ = 0;
  this->SourceBinding = ICurveSourceInterface::DefaultBinding;
  *(undefined8 *)&this->CurveSource = 0;
  *(undefined8 *)&(this->CurveSource).field_0x8 = 0;
  this->Alpha = 1.0;
  return this;
}

// CacheBones_AnyThread @ 146419810

void __thiscall
FAnimNode_CurveSource::CacheBones_AnyThread
          (FAnimNode_CurveSource *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_CurveSource::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 146439aa0

void __thiscall
FAnimNode_CurveSource::Evaluate_AnyThread(FAnimNode_CurveSource *this,FPoseContext *param_1)

{
  <lambda_1> <Var1;
  FName *pFVar2;
  int iVar3;
  FTlsAutoCleanup *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  float fVar8;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  float local_res20 [2];
  FName local_88;
  float local_80;
  code *local_78;
  undefined1 *local_70;
  FString local_68;
  undefined1 local_58 [24];
  FCurveFilter *local_40;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CurveSource::Evaluate_AnyThread");
  FPoseLink::Evaluate(&this->SourcePose,param_1);
  if ((*(longlong *)&this->CurveSource != 0) && (*(longlong *)&(this->CurveSource).field_0x8 != 0))
  {
    local_70 = local_res8;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FExternalCurveScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,
                        &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FExternalCurveScratchArea>::GetTlsSlot(void)'
                         ::__l2::TlsSlot);
    <Var1.NamedCurveValues = (TArray<FNamedCurveValue,TSizedDefaultAllocator<32>_> *)(pFVar4 + 2);
    iVar3 = *(int *)&pFVar4[3].field_0x4;
    *(undefined4 *)(pFVar4 + 3) = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)<Var1.NamedCurveValues,0,(int *)&pFVar4[3].field_0x4);
    }
    ICurveSourceInterface::Execute_GetCurves(*(UObject **)&this->CurveSource,<Var1.NamedCurveValues)
    ;
    fVar8 = this->Alpha;
    if (__real_3f800000 <= this->Alpha) {
      fVar8 = __real_3f800000;
    }
    local_58._0_8_ = (FCurveElement *)0x0;
    local_58._8_8_ = 0;
    local_58[0x10] = false;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    local_40 = (FCurveFilter *)0x0;
    UE::Anim::FCurveUtils::
    BuildLinearUnfiltered<_FAnimNode_CurveSource::Evaluate_AnyThread_::__l5::<lambda_1>,_FAnimNode_CurveSource::Evaluate_AnyThread_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_58,
               *(int *)(pFVar4 + 3),<Var1,(<lambda_2>)<Var1.NamedCurveValues);
    iVar3 = *(int *)(pFVar4 + 3);
    pFVar6 = (FName *)((<Var1.NamedCurveValues)->AllocatorInstance).Data;
    pFVar2 = (FName *)((longlong)pFVar6 + (longlong)iVar3 * 0xc);
    while( true ) {
      if (*(int *)(pFVar4 + 3) != iVar3) {
        `TCheckedPointerIterator<FNamedCurveValue,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar6 == pFVar2) break;
      local_88 = *pFVar6;
      local_80 = (float)pFVar6[1].ComparisonIndex.Value;
      pFVar5 = ::FName::ToString(&local_88,&local_68);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      FAnimTrace::OutputAnimNodeValue
                ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                 pwVar7,local_80);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar6 = (FName *)&pFVar6[1].Number;
    }
    local_res20[0] = fVar8;
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::LerpToValid<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_58,
               (<lambda_1>)local_res20);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443720

void __thiscall
FAnimNode_CurveSource::GatherDebugData(FAnimNode_CurveSource *this,FNodeDebugData *param_1)

{
  UScriptStruct *pUVar1;
  FNodeDebugData *pFVar2;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CurveSource::GatherDebugData");
  pUVar1 = FAnimNode_Base::StaticStruct();
  local_res8 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(local_38,L"Non Overriden GatherDebugData! (%s)");
  FNodeDebugData::AddDebugItem(param_1,local_38,false);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->SourcePose,pFVar2);
  FStatsHierarchical::EndMeasurement();
  return;
}

// HasPreUpdate @ 146450c50

bool __thiscall FAnimNode_CurveSource::HasPreUpdate(FAnimNode_CurveSource *this)

{
  return true;
}

// Initialize_AnyThread @ 146459790

void __thiscall
FAnimNode_CurveSource::Initialize_AnyThread
          (FAnimNode_CurveSource *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_CurveSource::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// PreUpdate @ 146461130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimNode_CurveSource::PreUpdate(FAnimNode_CurveSource *this,UAnimInstance *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  longlong lVar6;
  FProperty *this_00;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  UClass *pUVar9;
  FName FVar10;
  AActor *this_01;
  void *pvVar11;
  UObjectBaseUtility *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  TFieldIterator<FObjectProperty> local_c8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pUVar12 = *(UObjectBaseUtility **)&this->CurveSource;
  if (pUVar12 != (UObjectBaseUtility *)0x0) {
    pUVar9 = Z_Construct_UClass_UCurveSourceInterface_NoRegister();
    UObjectBaseUtility::GetInterfaceAddress(pUVar12,pUVar9);
    FVar10 = ICurveSourceInterface::Execute_GetBindingName((UObject *)&stack0x00000020);
    if (*(FName *)FVar10 == this->SourceBinding) {
      return;
    }
  }
  this_01 = UAnimInstance::GetOwningActor(param_1);
  if (this_01 == (AActor *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UCurveSourceInterface_NoRegister();
  pvVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar9);
  if ((pvVar11 != (void *)0x0) &&
     (FVar10 = ICurveSourceInterface::Execute_GetBindingName((UObject *)&stack0xffffffffffffffb0),
     *(FName *)FVar10 == this->SourceBinding)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    *(AActor **)&this->CurveSource = this_01;
    *(void **)&(this->CurveSource).field_0x8 = pvVar11;
    return;
  }
  local_c8.Struct = (UStruct *)this_01->_padding_;
  iVar15 = 0;
  if (local_c8.Struct == (UStruct *)0x0) {
    local_c8.Field = (FField *)0x0;
  }
  else {
    local_c8.Field = (local_c8.Struct)->ChildProperties;
  }
  local_c8.InterfaceIndex = -1;
  local_c8.bIncludeSuper = true;
  local_c8.bIncludeDeprecated = true;
  local_c8.bIncludeInterface = false;
  TFieldIterator<FObjectProperty>::IterateToNext(&local_c8);
  this_00 = (FProperty *)local_c8.Field;
  while (local_c8.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
    pcVar4 = *(code **)(this_00->_padding_ + 0x1f8);
    pvVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this_01,0);
    pUVar12 = (UObjectBaseUtility *)(*pcVar4)(this_00,pvVar11);
    if (pUVar12 != (UObjectBaseUtility *)0x0) {
      pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar14 = (int)pUVar9->_padding_;
      if ((iVar14 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar9->_padding_)) {
        pUVar9 = Z_Construct_UClass_UCurveSourceInterface_NoRegister();
        pvVar11 = UObjectBaseUtility::GetInterfaceAddress(pUVar12,pUVar9);
        if ((pvVar11 != (void *)0x0) &&
           (FVar10 = ICurveSourceInterface::Execute_GetBindingName
                               ((UObject *)&stack0xffffffffffffffb8),
           *(FName *)FVar10 == this->SourceBinding)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          *(UObjectBaseUtility **)&this->CurveSource = pUVar12;
          *(void **)&(this->CurveSource).field_0x8 = pvVar11;
          return;
        }
      }
    }
    local_c8.Field = (FField *)this_00->_padding_;
    TFieldIterator<FObjectProperty>::IterateToNext(&local_c8);
    this_00 = (FProperty *)local_c8.Field;
  }
  pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      (&this_01->OwnedComponents);
  uStack_a4 = 1;
  local_90 = 0;
  local_a0 = &(pTVar13->Elements).field_0x10;
  iVar14 = *(int *)&(pTVar13->Elements).field_0x28;
  iStack_94 = iVar15;
  if (iVar14 != 0) {
    puVar19 = *(uint **)&(pTVar13->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_a0;
    }
    uVar17 = *puVar19;
    iVar15 = 0;
    local_90 = 0;
    while (uVar17 == 0) {
      iVar15 = iVar15 + 1;
      local_90 = local_90 + 0x20;
      iStack_94 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14646136c;
      uVar17 = puVar19[iVar15];
    }
    uStack_a4 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_94 = (int)lVar6 + -1 + local_90;
    if (iVar14 < iStack_94) {
      iStack_94 = iVar14;
    }
  }
LAB_14646136c:
  uVar17 = *(uint *)&(pTVar13->Elements).field_0x28;
  puVar2 = &(pTVar13->Elements).field_0x10;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_88 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iVar15);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar13;
  iStack_a8 = iVar15;
  iStack_8c = iStack_94;
  local_80 = pTVar13;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar17 < 0) || (*(int *)&(pTVar13->Elements).field_0x28 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
  if (uVar17 != uVar3) {
    puVar5 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
    puVar18 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar18 = puVar5;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      iVar14 = iVar14 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14) goto LAB_146461470;
      uVar17 = *(uint *)(puVar18 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar17 = (int)lVar6 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_146461470:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar17) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar13))
    break;
    pUVar12 = *(UObjectBaseUtility **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    if (pUVar12 != (UObjectBaseUtility *)0x0) {
      pUVar9 = Z_Construct_UClass_UCurveSourceInterface_NoRegister();
      pvVar11 = UObjectBaseUtility::GetInterfaceAddress(pUVar12,pUVar9);
      if ((pvVar11 != (void *)0x0) &&
         (FVar10 = ICurveSourceInterface::Execute_GetBindingName
                             ((UObject *)&stack0xffffffffffffffc0),
         *(FName *)FVar10 == this->SourceBinding)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        *(UObjectBaseUtility **)&this->CurveSource = pUVar12;
        *(void **)&(this->CurveSource).field_0x8 = pvVar11;
        return;
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// Update_AnyThread @ 146477ea0

void __thiscall
FAnimNode_CurveSource::Update_AnyThread
          (FAnimNode_CurveSource *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CurveSource::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

