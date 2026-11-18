// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 8

// StaticClass @ 14ac63a20

UClass * __cdecl UCameraAnimationSpawnableSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSpawnableSystem",
               &Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSpawnableSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSpawnableSystem>,
               InternalVTableHelperCtorCaller<UCameraAnimationSpawnableSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton;
}

// UCameraAnimationSpawnableSystem @ 14ac70390

/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSpawnableSystem * __thiscall
UCameraAnimationSpawnableSystem::UCameraAnimationSpawnableSystem
          (UCameraAnimationSpawnableSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationSpawnableSystem__6B_;
  return this;
}

// UCameraAnimationSpawnableSystem @ 14ac703c0

/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSpawnableSystem * __thiscall
UCameraAnimationSpawnableSystem::UCameraAnimationSpawnableSystem
          (UCameraAnimationSpawnableSystem *this,FObjectInitializer *param_1)

{
  EEntitySystemCategory EVar1;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 2;
  *(undefined ***)this = &___7UCameraAnimationSpawnableSystem__6B_;
  EVar1 = UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory();
  *(EEntitySystemCategory *)&this->field_0x38 = EVar1;
  return this;
}

// ~UCameraAnimationSpawnableSystem @ 14ac71620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSpawnableSystem::~UCameraAnimationSpawnableSystem
          (UCameraAnimationSpawnableSystem *this)

{
  *(undefined ***)this = &___7UCameraAnimationSpawnableSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 14ac77bf0

UClass * __cdecl UCameraAnimationSpawnableSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSpawnableSystem",
               &Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSpawnableSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSpawnableSystem>,
               InternalVTableHelperCtorCaller<UCameraAnimationSpawnableSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton;
}

// IsRelevantImpl @ 14ac7a660

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCameraAnimationSpawnableSystem::IsRelevantImpl
          (UCameraAnimationSpawnableSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return param_1->Role == CameraAnimations;
}

// OnRun @ 14ac7b0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSpawnableSystem::OnRun
          (UCameraAnimationSpawnableSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  FInstanceRegistry *pFVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  undefined1 auStack_1d8 [32];
  FComponentTypeID local_1b8;
  FComponentTypeID local_1b6 [3];
  <lambda_1> local_1b0 [2];
  undefined8 local_1a0;
  TStatIdData *pTStack_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined4 uStack_188;
  uint uStack_184;
  initializer_list<UE::MovieScene::FComponentTypeID> local_178;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_168;
  TComponentTypeID<FGuid> TStack_166;
  undefined4 uStack_164;
  undefined8 uStack_160;
  TStatIdData *pTStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined1 local_138 [8];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)&this->field_0x28;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FInstanceRegistry **)(lVar1 + 0x580);
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pTStack_198 = &TStatId::TStatId_NAME_None;
  local_1a0 = 0;
  local_168 = pFVar5->InstanceHandle;
  TStack_166 = pFVar5->SpawnableBinding;
  local_1b8.Value = (pFVar5->Tags).NeedsLink.Value;
  uStack_184 = uStack_184 & 0xffffff00;
  uStack_160 = 0;
  pTStack_158 = &TStatId::TStatId_NAME_None;
  local_110.AllMask.Bits.NumBits = 0;
  local_138._2_2_ = TStack_166;
  local_138._0_2_ = local_168;
  local_138._4_4_ = uStack_164;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_188 = 0x6ff;
  uStack_150 = CONCAT71(uStack_18f,local_190) & 0xffffffffffffffe0;
  uStack_148._4_4_ = uStack_184;
  uStack_148._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_190 = local_190 & 0xe0;
  uStack_120 = uStack_150;
  local_118 = uStack_148;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  local_178._First = &local_1b8;
  local_178._Last = local_1b6;
  UE::MovieScene::FComponentMask::SetAll(&local_110.AllMask,&local_178);
  local_1b0[0].InstanceRegistry = pFVar2;
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
  ::Iterate_PerEntityImpl<_UCameraAnimationSpawnableSystem::OnRun_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
              *)local_138,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_110,
             local_1b0);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUCameraAnimationSpawnableSystem @ 14ac804e0

void __cdecl
UCameraAnimationSpawnableSystem::StaticRegisterNativesUCameraAnimationSpawnableSystem(void)

{
  return;
}

