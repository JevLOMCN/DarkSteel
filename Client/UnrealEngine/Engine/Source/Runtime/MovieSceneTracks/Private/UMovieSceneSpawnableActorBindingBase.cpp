// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 19

// StaticClass @ 146589b40

UClass * __cdecl UMovieSceneSpawnableActorBindingBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSpawnableActorBindingBase",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableActorBindingBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnableActorBindingBase>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableActorBindingBase>,local_res8,
               UMovieSceneSpawnableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.InnerSingleton;
}

// UMovieSceneSpawnableActorBindingBase @ 14661ba60

UMovieSceneSpawnableActorBindingBase * __thiscall
UMovieSceneSpawnableActorBindingBase::UMovieSceneSpawnableActorBindingBase
          (UMovieSceneSpawnableActorBindingBase *this,FVTableHelper *param_1)

{
  UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this,param_1);
  this->bNetAddressableName = false;
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableActorBindingBase__6B_;
  (this->LevelName).ComparisonIndex = 0;
  (this->LevelName).Number = 0;
  return this;
}

// UMovieSceneSpawnableActorBindingBase @ 14661baa0

UMovieSceneSpawnableActorBindingBase * __thiscall
UMovieSceneSpawnableActorBindingBase::UMovieSceneSpawnableActorBindingBase
          (UMovieSceneSpawnableActorBindingBase *this,FObjectInitializer *param_1)

{
  UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this,param_1);
  this->bNetAddressableName = false;
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableActorBindingBase__6B_;
  (this->LevelName).ComparisonIndex = 0;
  (this->LevelName).Number = 0;
  return this;
}

// ~UMovieSceneSpawnableActorBindingBase @ 146621dd0

void __thiscall
UMovieSceneSpawnableActorBindingBase::~UMovieSceneSpawnableActorBindingBase
          (UMovieSceneSpawnableActorBindingBase *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneSpawnableActorBindingBase__6B_;
  UMovieSceneSpawnableBindingBase::~UMovieSceneSpawnableBindingBase
            ((UMovieSceneSpawnableBindingBase *)this);
  return;
}

// AutoSetNetAddressableName @ 14663e6c0

void __thiscall
UMovieSceneSpawnableActorBindingBase::AutoSetNetAddressableName
          (UMovieSceneSpawnableActorBindingBase *this)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  UClass *local_res8;
  
  this->bNetAddressableName = false;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x358))();
  if (plVar2 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar2 + 0x738);
    local_res8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    lVar3 = (*pcVar1)(plVar2,&local_res8);
    if (lVar3 != 0) {
      this->bNetAddressableName = true;
    }
  }
  return;
}

// CopyObjectTemplate @ 146653d20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnableActorBindingBase::CopyObjectTemplate
          (UMovieSceneSpawnableActorBindingBase *this,UObject *param_1,UMovieSceneSequence *param_2)

{
  return;
}

// DestroySpawnedObjectInternal @ 146659fa0

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
UMovieSceneSpawnableActorBindingBase::DestroySpawnedObjectInternal
          (UMovieSceneSpawnableActorBindingBase *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_00;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      this_00 = AActor::GetWorld((AActor *)param_1);
      if (this_00 == (UWorld *)0x0) {
        return;
      }
      UWorld::DestroyActor(this_00,(AActor *)param_1,false,false);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7389950433491419342>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Bindings\\MovieSceneSpawnableActorBinding.cpp"
                     ,0xce,"Actor");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetActorClass @ 1466889c0

TSubclassOf<AActor> __thiscall
UMovieSceneSpawnableActorBindingBase::GetActorClass(UMovieSceneSpawnableActorBindingBase *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Bindings\\MovieSceneSpawnableActorBinding.h"
             ,0x4e,L"Pure virtual not implemented (%s)");
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<AActor>)in_RDX.field0_0x0;
}

// GetActorTemplate @ 146688a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UMovieSceneSpawnableActorBindingBase::GetActorTemplate(UMovieSceneSpawnableActorBindingBase *this)

{
  return (AActor *)0x0;
}

// GetBoundObjectClass @ 1466893d0

UClass * __thiscall
UMovieSceneSpawnableActorBindingBase::GetBoundObjectClass
          (UMovieSceneSpawnableActorBindingBase *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  UClass *pUVar5;
  undefined1 local_res8 [8];
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x350))(this,local_res8);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (UClass *)*plVar4;
      }
    }
  }
  return (UClass *)0x0;
}

// GetNetAddressableName @ 14668c930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall
UMovieSceneSpawnableActorBindingBase::GetNetAddressableName
          (UMovieSceneSpawnableActorBindingBase *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,FGuid *param_2,
          FMovieSceneSequenceID param_3,FString *param_4)

{
  IMovieScenePlayer *pIVar1;
  UObjectBaseUtility *this_00;
  void *pvVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  ulong64 uVar5;
  int iVar6;
  undefined4 in_register_0000008c;
  wchar_t *pwVar7;
  undefined8 *in_stack_00000030;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178.Object = *(FSharedPlaybackState **)param_2;
  local_178.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_2->C;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar1 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_178);
  if (((pIVar1 == (IMovieScenePlayer *)0x0) ||
      (this_00 = (UObjectBaseUtility *)(**(code **)(pIVar1->_padding_ + 0x28))(),
      this_00 == (UObjectBaseUtility *)0x0)) &&
     (this_00 = (UObjectBaseUtility *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_2 + 0x18)),
     this_00 == (UObjectBaseUtility *)0x0)) {
    param_1->Object = (FSharedPlaybackState *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_2->C);
  }
  else {
    local_168.Base = local_148;
    local_168.CurPos = local_148;
    local_168.End = (wchar_t *)local_48;
    local_168.bIsDynamic = false;
    local_168.bIsExternal = false;
    iVar6 = *(int *)(in_stack_00000030 + 1) + -1;
    if (*(int *)(in_stack_00000030 + 1) == 0) {
      iVar6 = 0;
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*in_stack_00000030;
    }
    uVar5 = (ulong64)iVar6;
    if (local_48 < local_148 + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,uVar5);
    }
    if (iVar6 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(local_168.CurPos,pwVar7,uVar5 * 2);
      local_168.CurPos = (wchar_t *)((longlong)pvVar2 + uVar5 * 2);
    }
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"_0x%08X");
    local_180 = *(undefined4 *)(CONCAT44(in_register_0000008c,param_3.Value) + 0xc);
    local_188 = *(undefined4 *)(CONCAT44(in_register_0000008c,param_3.Value) + 8);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"_%08X%08X%08X%08X");
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    pUVar4 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar3);
    if (pUVar4 == (UObject *)0x0) {
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      *local_168.CurPos = L'_';
      local_178.Object = *(FSharedPlaybackState **)&this_00->field_0x18;
    }
    else {
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      *local_168.CurPos = L'_';
      local_178.Object = *(FSharedPlaybackState **)&pUVar4->field_0x18;
    }
    local_168.CurPos = local_168.CurPos + 1;
    ::FName::AppendString((FName *)&local_178,&local_168);
    ::FName::FName((FName *)param_1,
                   (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1),local_168.Base,
                   FNAME_Add);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_2->C);
  }
  return (FName)param_1;
}

// GetObjectTemplate @ 14668e530

UObject * __thiscall
UMovieSceneSpawnableActorBindingBase::GetObjectTemplate(UMovieSceneSpawnableActorBindingBase *this)

{
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 146696cf0

UClass * __cdecl UMovieSceneSpawnableActorBindingBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSpawnableActorBindingBase",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableActorBindingBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSpawnableActorBindingBase>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableActorBindingBase>,local_res8,
               UMovieSceneSpawnableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.InnerSingleton;
}

// GetSpawnName @ 146697db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UMovieSceneSpawnableActorBindingBase::GetSpawnName
          (UMovieSceneSpawnableActorBindingBase *this,FGuid *param_1,UMovieScene *param_2,
          FMovieSceneSequenceID *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  bool bVar5;
  FSharedPlaybackState *pFVar6;
  ENetMode EVar7;
  UWorld *this_00;
  FMovieScenePossessable *pFVar8;
  FName FVar9;
  FSharedPlaybackState *in_stack_00000030;
  undefined8 in_stack_ffffffffffffff98;
  ForAnyElementType *pFVar10;
  undefined4 uVar11;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FGuid local_38;
  
  pFVar6 = in_stack_00000030;
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  pcVar3 = *(code **)(this->_padding_ + 0x338);
  local_38._0_8_ = in_stack_00000030->_padding_;
  local_38._8_8_ = in_stack_00000030->_padding_;
  if (local_38._8_8_ != 0) {
    LOCK();
    *(int *)(local_38._8_8_ + 8) = *(int *)(local_38._8_8_ + 8) + 1;
    UNLOCK();
  }
  this_00 = (UWorld *)(*pcVar3)(this,&local_38);
  if ((((this->bNetAddressableName == false) || (this_00 == (UWorld *)0x0)) ||
      ((this_00->WorldType).Value == '\x02')) ||
     (EVar7 = UWorld::InternalGetNetMode(this_00), EVar7 == NM_Standalone)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,&local_48);
  pFVar8 = UMovieScene::FindPossessable((UMovieScene *)param_3,(FGuid *)param_2);
  if (pFVar8 == (FMovieScenePossessable *)0x0) {
    param_1->A = 0;
    param_1->B = 0;
  }
  else {
    if ((local_40 < 2) && ((FString *)&local_48 != &pFVar8->Name)) {
      iVar1 = (pFVar8->Name).Data.ArrayNum;
      _Src = (pFVar8->Name).Data.AllocatorInstance.Data;
      local_40 = iVar1;
      if ((iVar1 == 0) && (local_3c == 0)) {
        local_3c = 0;
      }
      else {
        pFVar10 = &local_48;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_3c,pFVar10,iVar1,&local_3c);
        uVar11 = (undefined4)((ulonglong)pFVar10 >> 0x20);
        if (iVar1 != 0) {
          memcpy(local_48.Data,_Src,(longlong)iVar1 * 2);
        }
      }
    }
    if (bVar5) {
      local_38._0_8_ = pFVar6->_padding_;
      local_38._8_8_ = pFVar6->_padding_;
      uVar2 = *(undefined4 *)&param_4->Object;
      if (local_38._8_8_ != 0) {
        LOCK();
        *(int *)(local_38._8_8_ + 8) = *(int *)(local_38._8_8_ + 8) + 1;
        UNLOCK();
      }
      FVar9 = GetNetAddressableName
                        (this,(TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                              &stack0x00000030,&local_38,(FMovieSceneSequenceID)(uint)param_2,
                         (FString *)CONCAT44(uVar11,uVar2));
      uVar4 = *(undefined8 *)FVar9;
      param_1->A = (int)uVar4;
      param_1->B = (int)((ulonglong)uVar4 >> 0x20);
    }
    else {
      in_stack_00000030 = (FSharedPlaybackState *)0x0;
      param_1->A = 0;
      param_1->B = 0;
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6->_padding_);
  return (FName)param_1;
}

// GetSpawnTransform @ 1466980f0

TTransform<double> * __thiscall
UMovieSceneSpawnableActorBindingBase::GetSpawnTransform
          (UMovieSceneSpawnableActorBindingBase *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  longlong lVar12;
  TQuat<double> *pTVar13;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  lVar12 = (**(code **)(this->_padding_ + 0x358))();
  if (lVar12 != 0) {
    lVar12 = *(longlong *)(lVar12 + 0x1b8);
    if (lVar12 != 0) {
      dVar1 = *(double *)(lVar12 + 0x158);
      dVar10 = *(double *)(lVar12 + 0x150);
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar12 + 0x148);
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      local_48.Pitch = *(double *)(lVar12 + 0x160);
      local_48.Yaw = *(double *)(lVar12 + 0x168);
      local_48.Roll = *(double *)(lVar12 + 0x170);
      pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_48,&local_28);
      dVar1 = pTVar13->Y;
      dVar10 = pTVar13->Z;
      dVar11 = pTVar13->W;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar13->X;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar10;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
      dVar10 = *(double *)(lVar12 + 0x180);
      dVar1 = *(double *)(lVar12 + 0x188);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(lVar12 + 0x178);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// SetObjectTemplate @ 1466fb1a0

void __thiscall
UMovieSceneSpawnableActorBindingBase::SetObjectTemplate
          (UMovieSceneSpawnableActorBindingBase *this,UObject *param_1)

{
  return;
}

// SpawnObjectInternal @ 1466fd9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSpawnableActorBindingBase::SpawnObjectInternal
          (UMovieSceneSpawnableActorBindingBase *this,UWorld *param_1,FName param_2,FGuid *param_3,
          int param_4,UMovieScene *param_5,FMovieSceneSequenceID *param_6,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_7)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  UActorComponent *this_00;
  USceneComponent *pUVar4;
  code *pcVar5;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  UClass *pUVar8;
  AActor *pAVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  TQuat<double> *pTVar14;
  UWorld *this_01;
  UMovieSceneEntitySystemLinker *this_02;
  UClass *pUVar15;
  FString *pFVar16;
  UClass *pUVar17;
  longlong *plVar18;
  int iVar19;
  wchar_t *pwVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar29;
  wchar_t *pwVar30;
  undefined1 auStack_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7 [7];
  UClass *local_2d0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_2c8;
  UWorld *local_2c0;
  ulonglong local_2b8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_2b0;
  uint uStack_2a8;
  uint uStack_2a4;
  undefined1 *local_2a0;
  undefined4 uStack_298;
  uint uStack_294;
  uint local_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  int local_280;
  int local_27c;
  int local_278;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_270;
  UMovieSceneSpawnableActorBindingBase *local_268;
  UClass *local_260;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_258;
  uint uStack_250;
  undefined4 uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  TRotator<double> local_1c8;
  double local_1b0;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  double local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  FString local_180;
  FString local_170 [2];
  undefined4 local_144;
  TQuat<double> local_138;
  undefined1 local_118 [112];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_2c8 = param_7;
  local_2c0 = param_1;
  local_268 = this;
  (**(code **)(this->_padding_ + 0x350))(this,&local_2d0);
  pUVar17 = local_2d0;
  if ((local_2d0 == (UClass *)0x0) ||
     (pUVar8 = Z_Construct_UClass_AActor_NoRegister(), pUVar12 = local_2d0, pUVar8 == (UClass *)0x0)
     ) goto LAB_1466fe25c;
  iVar19 = (int)pUVar8->_padding_;
  if (((int)pUVar17->_padding_ < iVar19) ||
     ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar19 * 8) != &pUVar8->_padding_)
     ) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) || (local_2d0 == (UClass *)0x0)) goto LAB_1466fe25c;
  pUVar8 = Z_Construct_UClass_AActor_NoRegister();
  pUVar17 = (UClass *)0x0;
  uVar27 = 0;
  uVar22 = 0;
  if (pUVar8 == (UClass *)0x0) {
LAB_1466fda9e:
    pUVar12 = pUVar17;
  }
  else {
    iVar19 = (int)pUVar8->_padding_;
    if (((int)pUVar12->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar8->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pUVar12 = local_2d0;
    if (!bVar7) goto LAB_1466fda9e;
  }
  if ((int)pUVar12->ClassFlags < 0) {
LAB_1466fe25c:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_7->SharedReferenceCount).ReferenceController);
    return (UObject *)0x0;
  }
  pAVar9 = (AActor *)(**(code **)(this->_padding_ + 0x358))(this);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_118);
  local_118[0x32] = local_118[0x32] | 4;
  local_118._32_8_ = (param_1->PersistentLevel).field0_0x0;
  local_2b8 = 1;
  local_118._52_4_ = RF_Transient|RF_Transactional;
  local_118[0x30] = AlwaysSpawn;
  uVar24 = 0;
  local_118._0_8_ = param_2;
  local_118._8_8_ = pAVar9;
  if (pAVar9 != (AActor *)0x0) {
    pTVar10 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&pAVar9->OwnedComponents);
    uVar23 = *(uint *)&(pTVar10->Elements).field_0x28;
    puVar1 = &(pTVar10->Elements).field_0x10;
    uStack_2a4 = 1;
    uStack_294 = uVar24;
    uStack_2a8 = uVar22;
    local_290 = uVar24;
    if (uVar23 != 0) {
      puVar26 = *(uint **)&(pTVar10->Elements).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uStack_2a4 = *puVar26;
      pUVar12 = pUVar17;
      pUVar8 = pUVar17;
      uStack_2a8 = uVar27;
      local_290 = uVar27;
      while (uStack_2a4 == 0) {
        uStack_2a8 = (int)pUVar12 + 1;
        pUVar12 = (UClass *)(ulonglong)uStack_2a8;
        local_290 = (int)pUVar8 + 0x20;
        pUVar8 = (UClass *)(ulonglong)local_290;
        uStack_2a4 = 1;
        uStack_294 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2a8)
        goto LAB_1466fdbad;
        uStack_2a4 = puVar26[(int)uStack_2a8];
      }
      uStack_2a4 = ~(uStack_2a4 - 1) & uStack_2a4;
      uVar2 = (ulonglong)uStack_2a4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_280 = (int)lVar13;
      uStack_294 = local_280 + -1 + local_290;
      if ((int)uVar23 < (int)uStack_294) {
        uStack_294 = uVar23;
      }
    }
LAB_1466fdbad:
    uVar21 = *(uint *)&(pTVar10->Elements).field_0x28;
    uStack_28c = local_144;
    iStack_288 = *(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34;
    uVar28 = uVar21 & 0xffffffe0;
    TStack_220._padding_ = CONCAT44(uStack_2a4,uStack_2a8);
    uStack_298 = 0xffffffff;
    TStack_220.CurrentBitIndex = uStack_294;
    TStack_220.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar21 >> 5;
    TStack_220._28_4_ = local_144;
    TStack_220.BaseBitIndex = local_290;
    uStack_200 = CONCAT44(uStack_284,iStack_288);
    local_2b0 = pTVar10;
    local_2a0 = puVar1;
    local_270 = pTVar10;
    local_228 = pTVar10;
    TStack_220.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar21 < 0) || ((int)uVar23 < (int)uVar21)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UObject *)(*pcVar5)();
      return pUVar11;
    }
    pTVar6 = local_270;
    uVar23 = *(uint *)&(pTVar10->Elements).field_0x28;
    if (uVar21 != uVar23) {
      puVar3 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
      puVar25 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar25 = puVar3;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        iVar19 = iVar19 + 1;
        uVar28 = uVar28 + 0x20;
        uVar21 = uVar23;
        if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < iVar19)
        goto LAB_1466fdcd0;
        uVar21 = *(uint *)(puVar25 + (longlong)iVar19 * 4);
      }
      uVar2 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_27c = (int)lVar13;
      uVar21 = local_27c + -1 + uVar28;
      if ((int)uVar23 < (int)uVar21) {
        uVar21 = uVar23;
      }
    }
LAB_1466fdcd0:
    while( true ) {
      pTVar10 = local_228;
      if (*(int *)&(local_228->Elements).field_0x8 - *(int *)&(local_228->Elements).field_0x34 !=
          (int)uStack_200) {
        local_2d8 = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
      }
      if (((TStack_220.CurrentBitIndex == uVar21) &&
          (TStack_220.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (param_1 = local_2c0, this = local_268, pTVar10 == pTVar6)) break;
      this_00 = *(UActorComponent **)
                 (*(longlong *)&pTVar10->Elements + (longlong)TStack_220.CurrentBitIndex * 0x10);
      if (this_00 != (UActorComponent *)0x0) {
        pUVar12 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
        iVar19 = (int)pUVar12->_padding_;
        if ((iVar19 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
            &pUVar12->_padding_)) {
          UActorComponent::SetActiveFlag(this_00,false);
          this_00->bAutoActivate = '\0';
        }
      }
      TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
    }
  }
  pwVar30 = L"";
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  lVar13 = (**(code **)(this->_padding_ + 0x358))(this);
  if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x1b8), lVar13 != 0)) {
    local_1a0 = *(ulonglong *)(lVar13 + 0x158);
    local_1b0 = (*(double (*) [2])(lVar13 + 0x148))[0];
    uStack_1a8 = *(undefined8 *)(lVar13 + 0x150);
    local_a8.Translation.XY.m128d_f64 = *(double (*) [2])(lVar13 + 0x148);
    local_a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_a8.Translation.ZW.m128d_f64[0] = (double)local_1a0;
    local_1c8.Pitch = *(double *)(lVar13 + 0x160);
    local_1c8.Yaw = *(double *)(lVar13 + 0x168);
    local_1c8.Roll = *(double *)(lVar13 + 0x170);
    pTVar14 = UE::Math::TRotator<double>::Quaternion(&local_1c8,&local_138);
    local_a8.Rotation.XY.m128d_f64[0] = pTVar14->X;
    local_a8.Rotation.XY.m128d_f64[1] = pTVar14->Y;
    local_a8.Rotation.ZW.m128d_f64[0] = pTVar14->Z;
    local_a8.Rotation.ZW.m128d_f64[1] = pTVar14->W;
    local_188 = *(ulonglong *)(lVar13 + 0x188);
    local_198 = (*(double (*) [2])(lVar13 + 0x178))[0];
    uStack_190 = *(undefined8 *)(lVar13 + 0x180);
    local_a8.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar13 + 0x178);
    local_a8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)local_188;
  }
  pUVar12 = local_2d0;
  if ((local_2d0 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_AActor_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar19 = (int)pUVar8->_padding_;
    if (((int)pUVar12->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar8->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_1466fdebf;
  }
  local_2d0 = pUVar17;
LAB_1466fdebf:
  this_01 = (UWorld *)
            UWorld::SpawnActorAbsolute
                      (param_1,local_2d0,&local_a8,(FActorSpawnParameters *)local_118);
  local_2c0 = this_01;
  if (this_01 == (UWorld *)0x0) {
    if (local_118._64_8_ != 0) {
      plVar18 = (longlong *)(local_118 + 0x50);
      if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_118._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_2c8->SharedReferenceCount).ReferenceController);
    return (UObject *)0x0;
  }
  if (this->bNetAddressableName != false) {
    AActor::SetNetAddressable((AActor *)this_01);
  }
  pTVar29 = local_2c8;
  this_02 = (UMovieSceneEntitySystemLinker *)
            FWeakObjectPtr::Get(&(local_2c8->Object->WeakLinker).WeakPtr);
  if (this_02 != (UMovieSceneEntitySystemLinker *)0x0) {
    local_260 = Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_260 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_260);
    }
    pUVar8 = (UClass *)
             UMovieSceneEntitySystemLinker::FindSystem
                       (this_02,(TSubclassOf<UMovieSceneEntitySystem>)&local_260);
    pUVar12 = pUVar17;
    if (pUVar8 != (UClass *)0x0) {
      pUVar15 = Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();
      iVar19 = (int)pUVar15->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar19) ||
         (pUVar12 = pUVar8,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
         &pUVar15->_padding_)) {
        pFVar16 = GetTypeName<UMovieSceneDeferredComponentMovementSystem>(&local_180);
        if ((pFVar16->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
        pFVar16 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                            (local_170,(UMovieSceneEntitySystem *)pUVar8);
        if ((pFVar16->Data).ArrayNum != 0) {
          pwVar30 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar30,pwVar20);
      }
    }
    pTVar29 = local_2c8;
    if (pUVar12 != (UClass *)0x0) {
      pTVar10 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          (&((AActor *)this_01)->OwnedComponents);
      local_248 = &(pTVar10->Elements).field_0x10;
      uVar23 = *(uint *)&(pTVar10->Elements).field_0x28;
      uStack_23c = uVar24;
      if (uVar23 != 0) {
        puVar26 = *(uint **)&(pTVar10->Elements).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)local_248;
        }
        uVar21 = *puVar26;
        pUVar8 = pUVar17;
        uVar22 = uVar27;
        uVar24 = uVar27;
        while (uVar21 == 0) {
          uVar22 = (int)pUVar17 + 1;
          pUVar17 = (UClass *)(ulonglong)uVar22;
          uVar24 = (int)pUVar8 + 0x20;
          pUVar8 = (UClass *)(ulonglong)uVar24;
          uStack_23c = uVar23;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
          goto LAB_1466fe070;
          uVar21 = puVar26[(int)uVar22];
        }
        local_2b8 = (ulonglong)(~(uVar21 - 1) & uVar21);
        uVar2 = local_2b8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_278 = (int)lVar13;
        uStack_23c = local_278 + -1 + uVar24;
        if ((int)uVar23 < (int)uStack_23c) {
          uStack_23c = uVar23;
        }
      }
LAB_1466fe070:
      uVar27 = *(uint *)&(pTVar10->Elements).field_0x28;
      puVar1 = &(pTVar10->Elements).field_0x10;
      uStack_24c = (undefined4)local_2b8;
      uStack_234 = uStack_294;
      iStack_230 = *(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34;
      uStack_240 = 0xffffffff;
      uVar23 = uVar27 & 0xffffffe0;
      TStack_1f0._padding_ = CONCAT44(uStack_24c,uVar22);
      TStack_1f0.CurrentBitIndex = uStack_23c;
      TStack_1f0.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar27 >> 5;
      TStack_1f0._28_4_ = uStack_294;
      TStack_1f0.BaseBitIndex = uVar24;
      uStack_1d0 = CONCAT44(uStack_22c,iStack_230);
      local_258 = pTVar10;
      uStack_250 = uVar22;
      local_238 = uVar24;
      local_1f8 = pTVar10;
      TStack_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_248;
      if ((((int)uVar27 < 0) || (*(int *)&(pTVar10->Elements).field_0x28 < (int)uVar27)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UObject *)(*pcVar5)();
        return pUVar11;
      }
      uVar22 = *(uint *)&(pTVar10->Elements).field_0x28;
      if (uVar27 != uVar22) {
        puVar3 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
        puVar25 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar25 = puVar3;
        }
        uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar19 * 4);
        while (uVar27 == 0) {
          iVar19 = iVar19 + 1;
          uVar23 = uVar23 + 0x20;
          uVar27 = uVar22;
          if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar19)
          goto LAB_1466fe170;
          uVar27 = *(uint *)(puVar25 + (longlong)iVar19 * 4);
        }
        uVar2 = (ulonglong)(~(uVar27 - 1) & uVar27) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar27 = (int)lVar13 + -1 + uVar23;
        if ((int)uVar22 < (int)uVar27) {
          uVar27 = uVar22;
        }
      }
LAB_1466fe170:
      while( true ) {
        pTVar6 = local_1f8;
        if (*(int *)&(local_1f8->Elements).field_0x8 - *(int *)&(local_1f8->Elements).field_0x34 !=
            (int)uStack_1d0) {
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2d7);
        }
        if (((TStack_1f0.CurrentBitIndex == uVar27) &&
            (TStack_1f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (this_01 = local_2c0, pTVar29 = local_2c8, pTVar6 == pTVar10)) break;
        pUVar4 = *(USceneComponent **)
                  (*(longlong *)&pTVar6->Elements + (longlong)TStack_1f0.CurrentBitIndex * 0x10);
        if (pUVar4 != (USceneComponent *)0x0) {
          pUVar17 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar19 = (int)pUVar17->_padding_;
          if ((iVar19 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
              &pUVar17->_padding_)) {
            UMovieSceneDeferredComponentMovementSystem::DeferMovementUpdates
                      ((UMovieSceneDeferredComponentMovementSystem *)pUVar12,pUVar4);
          }
        }
        TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
      }
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&((AActor *)this_01)->Tags,&SequencerActorTag);
  AActor::FinishSpawning
            ((AActor *)this_01,&local_a8,true,(FComponentInstanceDataCache *)0x0,OverrideRootScale);
  if (local_118._64_8_ != 0) {
    plVar18 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar29->SharedReferenceCount).ReferenceController);
  return (UObject *)(AActor *)this_01;
}

// StaticRegisterNativesUMovieSceneSpawnableActorBindingBase @ 1466fe880

void __cdecl
UMovieSceneSpawnableActorBindingBase::StaticRegisterNativesUMovieSceneSpawnableActorBindingBase
          (void)

{
  return;
}

// SupportsObjectTemplates @ 1466fea70

bool __thiscall
UMovieSceneSpawnableActorBindingBase::SupportsObjectTemplates
          (UMovieSceneSpawnableActorBindingBase *this)

{
  return false;
}

