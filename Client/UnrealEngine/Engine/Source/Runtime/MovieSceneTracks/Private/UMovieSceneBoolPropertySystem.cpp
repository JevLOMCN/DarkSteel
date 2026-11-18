// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 146728690

UClass * __cdecl UMovieSceneBoolPropertySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBoolPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoolPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBoolPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.InnerSingleton;
}

// UMovieSceneBoolPropertySystem @ 146761a30

UMovieSceneBoolPropertySystem * __thiscall
UMovieSceneBoolPropertySystem::UMovieSceneBoolPropertySystem
          (UMovieSceneBoolPropertySystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  UMovieSceneBoolPropertySystem *pUVar5;
  UObject *local_res8 [2];
  UClass *local_res18;
  UObject *local_res20;
  UClass *local_38;
  UObject *local_30;
  
  UMovieScenePropertySystem::UMovieScenePropertySystem((UMovieScenePropertySystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if (((*(short *)&this->field_0x30 != -1) || (*(int *)&this->field_0x58 != -1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RelevantComponent && !CompositePropertyID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                         ,0x1f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UMovieSceneBoolPropertySystem *)(*pcVar2)();
    return pUVar5;
  }
  *(ushort *)&this->field_0x30 = (pFVar4->Bool).PropertyTag.Value;
  *(TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits> *)&this->field_0x58 =
       (pFVar4->Bool).CompositeID;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18 = UBoolChannelEvaluatorSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res20 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_38 = Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res20);
    pFVar4 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_30 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar4->Bool).PropertyTag.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_30);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_30,FVar1);
  }
  return this;
}

// UMovieSceneBoolPropertySystem @ 146761bb0

UMovieSceneBoolPropertySystem * __thiscall
UMovieSceneBoolPropertySystem::UMovieSceneBoolPropertySystem
          (UMovieSceneBoolPropertySystem *this,FVTableHelper *param_1)

{
  UMovieScenePropertySystem::UMovieScenePropertySystem((UMovieScenePropertySystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  return this;
}

// ~UMovieSceneBoolPropertySystem @ 146769d60

void __thiscall
UMovieSceneBoolPropertySystem::~UMovieSceneBoolPropertySystem(UMovieSceneBoolPropertySystem *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146797660

UClass * __cdecl UMovieSceneBoolPropertySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBoolPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoolPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBoolPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.InnerSingleton;
}

// OnRun @ 1467adfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBoolPropertySystem::OnRun
          (UMovieSceneBoolPropertySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *this_00;
  FPropertyDefinition *pFVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  int aiStackX_8 [2];
  FScriptContainerElement *pFStack_28;
  uint uStack_20;
  
  if (*(UMovieScenePropertyInstantiatorSystem **)&this->field_0x50 !=
      (UMovieScenePropertyInstantiatorSystem *)0x0) {
    UMovieScenePropertyInstantiatorSystem::GetStatsForProperty
              (*(UMovieScenePropertyInstantiatorSystem **)&this->field_0x50,
               (FCompositePropertyTypeID)(int)aiStackX_8);
    if (0 < aiStackX_8[0]) {
      this_00 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar3 = UE::MovieScene::FPropertyRegistry::GetDefinition
                         (&this_00->PropertyRegistry,
                          (FCompositePropertyTypeID)*(int *)&this->field_0x58);
      pTVar4 = &pFVar3->Handler;
      if (!(pFVar3->Handler).bIsValid) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (!(pFVar3->Handler).bInline) {
        pTVar4 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                  (pTVar4->Data).Pad;
      }
      pFStack_28 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
                   (ulonglong)pFVar3->VariableSizeCompositeOffset * 4;
      uStack_20 = (uint)pFVar3->CompositeSize;
      (**(code **)(*(longlong *)(pTVar4->Data).Pad + 0x28))
                (pTVar4,pFVar3,&pFStack_28,aiStackX_8,param_1,param_2,
                 *(undefined8 *)&this->field_0x28);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneBoolPropertySystem @ 1467c2660

void __cdecl UMovieSceneBoolPropertySystem::StaticRegisterNativesUMovieSceneBoolPropertySystem(void)

{
  return;
}

