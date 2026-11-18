// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticStruct @ 1461e91a0

UScriptStruct * __cdecl FMovieSceneSpawnable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSpawnable,(UObject *)pUVar1,
                         L"MovieSceneSpawnable");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSpawnable.OuterSingleton;
}

// FMovieSceneSpawnable @ 1461fcb70

FMovieSceneSpawnable * __thiscall
FMovieSceneSpawnable::FMovieSceneSpawnable(FMovieSceneSpawnable *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->SpawnTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->SpawnTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->SpawnTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SpawnTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->SpawnTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->SpawnTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->SpawnTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SpawnTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->SpawnTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->SpawnTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->SpawnTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->SpawnTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  this->bContinuouslyRespawn = false;
  this->bNetAddressableName = false;
  (this->DynamicBinding_DEPRECATED).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DynamicBinding_DEPRECATED).ResolveParamsProperty = 0;
  *(undefined8 *)&(this->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DynamicBinding_DEPRECATED).ResolveParamsProperty.field_0x18 = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->ObjectTemplate).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->ChildPossessables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildPossessables).ArrayNum = 0;
  (this->ChildPossessables).ArrayMax = 0;
  this->Ownership = InnerSequence;
  (this->LevelName).ComparisonIndex = 0;
  (this->LevelName).Number = 0;
  return this;
}

// AutoSetNetAddressableName @ 146208400

void __thiscall FMovieSceneSpawnable::AutoSetNetAddressableName(FMovieSceneSpawnable *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  UClass *local_res8;
  
  this->bNetAddressableName = false;
  if ((this->ObjectTemplate).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->ObjectTemplate,pUVar4);
    if ((bVar3) && (pUVar1 = (this->ObjectTemplate).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0))
    {
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x738);
      local_res8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      lVar5 = (*pcVar2)(pUVar1,&local_res8);
      if (lVar5 != 0) {
        this->bNetAddressableName = true;
      }
    }
  }
  return;
}

// CopyObjectTemplate @ 14620c290

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnable::CopyObjectTemplate
          (FMovieSceneSpawnable *this,UObject *param_1,UMovieSceneSequence *param_2)

{
  code *pcVar1;
  UObject *pUVar2;
  FName FVar3;
  UObjectBase *this_00;
  longlong lVar4;
  undefined4 uVar5;
  FIsSpawnable *pFVar6;
  bool bVar7;
  FName *pFVar8;
  UClass *pUVar9;
  FName FVar10;
  FString *pFVar11;
  FUObjectItem *pFVar12;
  UObject *pUVar13;
  uint uVar14;
  wchar_t *pwVar15;
  undefined8 uVar16;
  undefined1 local_res8 [8];
  TPairInitializer<UObjectBase_const_*_const_&,FIsSpawnable_const_&> local_res18;
  undefined4 uVar17;
  FName local_78;
  undefined1 local_70 [16];
  FIsSpawnable **local_60;
  undefined1 *local_58;
  FString local_50;
  
  pUVar13 = (this->ObjectTemplate).field0_0x0.DebugPtr;
  if (pUVar13 == (UObject *)0x0) {
    uVar16 = *(undefined8 *)&param_1->field_0x18;
  }
  else {
    uVar16 = *(undefined8 *)&pUVar13->field_0x18;
    pcVar1 = *(code **)(*(longlong *)pUVar13 + 0x170);
    pFVar8 = ::FName::FName(&local_78,"ExpiredSpawnable");
    FVar10 = *pFVar8;
    pUVar2 = (this->ObjectTemplate).field0_0x0.DebugPtr;
    FVar3.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x10;
    FVar3.Number = *(uint *)&pUVar2->field_0x14;
    pUVar9 = (UClass *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
    uVar17 = 0;
    FVar10 = MakeUniqueObjectName
                       ((UObject *)local_70,pUVar9,FVar3,FVar10.ComparisonIndex.Value.Value);
    pFVar11 = ::FName::ToString((FName *)FVar10,&local_50);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pUVar13,pwVar15,0,0,uVar17);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    this_00 = (UObjectBase *)(this->ObjectTemplate).field0_0x0.DebugPtr;
    pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    if ((((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
    pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    do {
      lVar4 = (pFVar12->field0_0x0).FlagsAndRefCount;
      uVar14 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar14 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar12 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar7 = lVar4 == (pFVar12->field0_0x0).FlagsAndRefCount;
      if (bVar7) {
        (pFVar12->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar14 << 0x20 | (longlong)(int)lVar4 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar7);
    pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    FUObjectItem::ClearRootFlags(pFVar12,Async);
    (this->ObjectTemplate).field0_0x0.DebugPtr = (UObject *)0x0;
  }
  pUVar13 = (UObject *)(**(code **)(param_2->_padding_ + 0x330))(param_2,param_1,uVar16);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar13 == (UObject *)0x0)) {
    (this->ObjectTemplate).field0_0x0.DebugPtr = pUVar13;
    if ((pUVar13 == (UObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectTemplate",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSpawnable.cpp"
                           ,0x32,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable(pUVar13);
    (this->ObjectTemplate).field0_0x0.DebugPtr = pUVar13;
  }
  local_res18.Value = (FIsSpawnable *)(this->ObjectTemplate).field0_0x0.DebugPtr;
  if (((UObjectBase *)local_res18.Value == (UObjectBase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] = 1;
  AcquireSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationMapCritical);
  uVar5 = SpawnablesAnnotation.AnnotationMap._52_4_;
  uVar17 = SpawnablesAnnotation.AnnotationMap._8_4_;
  local_60 = &local_res18.Value;
  local_58 = local_res8;
  TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FIsSpawnable_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
              *)&SpawnablesAnnotation.AnnotationMap,&local_res18,(bool *)&local_60);
  pFVar6 = local_res18.Value;
  AcquireSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
  SpawnablesAnnotation.AnnotationCacheValue.bIsSpawnable = (bool)local_res8[0];
  SpawnablesAnnotation.AnnotationCacheKey = (UObjectBase *)pFVar6;
  ReleaseSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
  ReleaseSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationMapCritical);
  if (uVar17 == uVar5) {
    FUObjectAnnotationSparse<FIsSpawnable,1>::ProcessRegistration(&SpawnablesAnnotation);
  }
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_2);
  return;
}

// GetNetAddressableName @ 146219830

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FMovieSceneSpawnable::GetNetAddressableName
          (FMovieSceneSpawnable *this,IMovieScenePlayer *param_1,FMovieSceneSequenceID param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FName FVar6;
  undefined4 in_register_00000084;
  FSharedPlaybackState *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(*(longlong *)CONCAT44(in_register_00000084,param_2.Value) + 0x18))
                      ((longlong *)CONCAT44(in_register_00000084,param_2.Value));
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FName)(*pcVar3)();
      return FVar6;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FName)(*pcVar3)();
      return FVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar1;
  local_30 = pTVar2;
  GetNetAddressableName
            (this,(TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)param_1,
             (FMovieSceneSequenceID)(uint)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (FName)param_1;
}

// GetNetAddressableName @ 146219930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall
FMovieSceneSpawnable::GetNetAddressableName
          (FMovieSceneSpawnable *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID param_2)

{
  ushort uVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FPlayerIndexPlaybackCapability *pFVar7;
  FName FVar8;
  UObjectBaseUtility *this_01;
  void *pvVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FName *this_02;
  longlong lVar12;
  ulong64 uVar13;
  undefined4 in_register_00000084;
  longlong *plVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined1 auStack_1b8 [32];
  uint local_198;
  uint local_190;
  FMovieSceneSpawnable *local_188;
  FName local_180;
  FName local_178 [2];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  plVar14 = (longlong *)CONCAT44(in_register_00000084,param_2.Value);
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pTVar3 = (TReferenceControllerBase<1> *)plVar14[1];
  this_00 = (FSharedPlaybackState *)*plVar14;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188 = this;
  pFVar7 = UE::MovieScene::FSharedPlaybackState::
           FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>(this_00);
  pwVar15 = L"";
  if (pFVar7 == (FPlayerIndexPlaybackCapability *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_146219a39:
    this_01 = (UObjectBaseUtility *)FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar14 + 0x18));
    if (this_01 == (UObjectBaseUtility *)0x0) {
      param_1->Object = (FSharedPlaybackState *)0x0;
      goto LAB_146219be5;
    }
  }
  else {
    uVar1 = pFVar7->PlayerIndex;
    AcquireSRWLockShared((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
    if ((int)(uint)uVar1 < (int)UE::MovieScene::GGlobalPlayerRegistry._40_4_) {
      lVar12 = 0x154bf1650;
      if (UE::MovieScene::GGlobalPlayerRegistry._32_8_ != 0) {
        lVar12 = UE::MovieScene::GGlobalPlayerRegistry._32_8_;
      }
      if ((*(uint *)(lVar12 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
      goto LAB_1462199d7;
    }
    else {
LAB_1462199d7:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UE::MovieScene::GGlobalPlayerRegistry.IsValidIndex(InUniqueIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScenePlayer.cpp"
                         ,0x52,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        FVar8 = (FName)(*pcVar5)();
        return FVar8;
      }
    }
    plVar4 = *(longlong **)(UE::MovieScene::GGlobalPlayerRegistry._0_8_ + (ulonglong)uVar1 * 8);
    ReleaseSRWLockShared((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((plVar4 == (longlong *)0x0) ||
       (this_01 = (UObjectBaseUtility *)(**(code **)(*plVar4 + 0x28))(),
       this_01 == (UObjectBaseUtility *)0x0)) goto LAB_146219a39;
  }
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  iVar2 = (this->Name).Data.ArrayNum;
  iVar16 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar16 = 0;
  }
  else {
    pwVar15 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  uVar13 = (ulong64)iVar16;
  if (local_48 < local_148 + uVar13) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar13);
  }
  if (iVar16 != 0) {
    pvVar9 = FGenericPlatformString::Memcpy(local_168.CurPos,pwVar15,uVar13 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar9 + uVar13 * 2);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"_0x%08X");
  local_190 = (local_188->Guid).D;
  local_198 = (local_188->Guid).C;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"_%08X%08X%08X%08X");
  pUVar10 = Z_Construct_UClass_AActor_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter(this_01,pUVar10);
  if (pUVar11 == (UObject *)0x0) {
    if (local_168.End < local_168.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    *local_168.CurPos = L'_';
    this_02 = local_178;
    local_178[0].ComparisonIndex.Value = *(uint *)&this_01->field_0x18;
    local_178[0].Number = *(uint *)&this_01->field_0x1c;
  }
  else {
    if (local_168.End < local_168.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    *local_168.CurPos = L'_';
    this_02 = &local_180;
    local_180.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
    local_180.Number = *(uint *)&pUVar11->field_0x1c;
  }
  local_168.CurPos = local_168.CurPos + 1;
  ::FName::AppendString(this_02,&local_168);
  ::FName::FName((FName *)param_1,(int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1),
                 local_168.Base,FNAME_Add);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
LAB_146219be5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)plVar14[1]);
  return (FName)param_1;
}

// IsSpawnableTemplate @ 146222910

bool __cdecl FMovieSceneSpawnable::IsSpawnableTemplate(UObject *param_1)

{
  code *pcVar1;
  FIsSpawnable FVar2;
  bool bVar3;
  undefined1 uVar4;
  FIsSpawnable *pFVar5;
  char cVar6;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
  FVar2 = SpawnablesAnnotation.AnnotationCacheValue;
  if ((UObjectBase *)param_1 == SpawnablesAnnotation.AnnotationCacheKey) {
    ReleaseSRWLockShared((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
    return FVar2.bIsSpawnable != false;
  }
  ReleaseSRWLockShared((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
  AcquireSRWLockShared((PSRWLOCK)&SpawnablesAnnotation.AnnotationMapCritical);
  pFVar5 = TMapBase<UObjectBase_const_*,FIsSpawnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FIsSpawnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>_>
                   *)&SpawnablesAnnotation.AnnotationMap,(UObjectBase *)param_1);
  if (pFVar5 == (FIsSpawnable *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
    SpawnablesAnnotation.AnnotationCacheValue.bIsSpawnable = false;
    SpawnablesAnnotation.AnnotationCacheKey = (UObjectBase *)param_1;
    ReleaseSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
    cVar6 = '\0';
  }
  else {
    bVar3 = pFVar5->bIsSpawnable;
    AcquireSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
    SpawnablesAnnotation.AnnotationCacheKey = (UObjectBase *)param_1;
    SpawnablesAnnotation.AnnotationCacheValue.bIsSpawnable = bVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
    cVar6 = pFVar5->bIsSpawnable;
  }
  ReleaseSRWLockShared((PSRWLOCK)&SpawnablesAnnotation.AnnotationMapCritical);
  return cVar6 != '\0';
}

// MarkSpawnableTemplate @ 1462248e0

void __cdecl FMovieSceneSpawnable::MarkSpawnableTemplate(UObject *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FIsSpawnable *pFVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  TPairInitializer<UObjectBase_const_*_const_&,FIsSpawnable_const_&> local_res10;
  FIsSpawnable **local_28;
  undefined1 *local_20;
  
  local_res10.Value = (FIsSpawnable *)param_1;
  if (param_1 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = 1;
  AcquireSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationMapCritical);
  uVar3 = SpawnablesAnnotation.AnnotationMap._52_4_;
  uVar2 = SpawnablesAnnotation.AnnotationMap._8_4_;
  local_28 = &local_res10.Value;
  local_20 = local_res8;
  TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FIsSpawnable_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FIsSpawnable>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FIsSpawnable,0>,FDefaultSetAllocator>
              *)&SpawnablesAnnotation.AnnotationMap,&local_res10,(bool *)&local_28);
  pFVar4 = local_res10.Value;
  AcquireSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
  SpawnablesAnnotation.AnnotationCacheValue.bIsSpawnable = (bool)local_res8[0];
  SpawnablesAnnotation.AnnotationCacheKey = (UObjectBase *)pFVar4;
  ReleaseSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationCacheCritical);
  ReleaseSRWLockExclusive((PSRWLOCK)&SpawnablesAnnotation.AnnotationMapCritical);
  if (uVar2 == uVar3) {
    FUObjectAnnotationSparse<FIsSpawnable,1>::ProcessRegistration(&SpawnablesAnnotation);
  }
  return;
}

