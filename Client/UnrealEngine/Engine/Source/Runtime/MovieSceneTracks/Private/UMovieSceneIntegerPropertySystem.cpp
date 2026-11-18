// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467cf0b0

UClass * __cdecl UMovieSceneIntegerPropertySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneIntegerPropertySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneIntegerPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneIntegerPropertySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneIntegerPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneIntegerPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneIntegerPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneIntegerPropertySystem.InnerSingleton;
}

// UMovieSceneIntegerPropertySystem @ 146809660

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneIntegerPropertySystem * __thiscall
UMovieSceneIntegerPropertySystem::UMovieSceneIntegerPropertySystem
          (UMovieSceneIntegerPropertySystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  code *pcVar2;
  bool bVar3;
  EEntitySystemCategory EVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  UMovieSceneIntegerPropertySystem *pUVar6;
  UObject *local_res8;
  UClass *local_res18;
  UObject *local_res20;
  UClass *local_18;
  UObject *local_10;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 8;
  *(undefined ***)this = &UMovieScenePropertySystem::_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 =
       &UMovieScenePropertySystem::_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0xffffffffffffffff;
  EVar4 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->field_0x38 = EVar4 | PropertySystems;
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if ((*(short *)&this->field_0x30 != -1) || (*(int *)&this->field_0x58 != -1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RelevantComponent && !CompositePropertyID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                       ,0x1f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UMovieSceneIntegerPropertySystem *)(*pcVar2)();
      return pUVar6;
    }
  }
  *(ushort *)&this->field_0x30 = (pFVar5->Integer).PropertyTag.Value;
  *(TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
    *)&this->field_0x58 = (pFVar5->Integer).CompositeID;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = UMovieScenePiecewiseIntegerBlenderSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res20 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_18 = Z_Construct_UClass_UIntegerChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res20);
    pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_10 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar5->Integer).PropertyTag.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_10);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_10,FVar1);
  }
  return this;
}

// UMovieSceneIntegerPropertySystem @ 1468097f0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneIntegerPropertySystem * __thiscall
UMovieSceneIntegerPropertySystem::UMovieSceneIntegerPropertySystem
          (UMovieSceneIntegerPropertySystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  *(undefined8 *)&this->field_0x58 = 0xffffffffffffffff;
  return this;
}

// ~UMovieSceneIntegerPropertySystem @ 14680f6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneIntegerPropertySystem::~UMovieSceneIntegerPropertySystem
          (UMovieSceneIntegerPropertySystem *this)

{
  *(undefined ***)this = &UMovieScenePropertySystem::_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146835e20

UClass * __cdecl UMovieSceneIntegerPropertySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneIntegerPropertySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneIntegerPropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneIntegerPropertySystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneIntegerPropertySystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneIntegerPropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneIntegerPropertySystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneIntegerPropertySystem.InnerSingleton;
}

// OnRun @ 1468455c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneIntegerPropertySystem::OnRun
          (UMovieSceneIntegerPropertySystem *this,FSystemTaskPrerequisites *param_1,
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

// StaticRegisterNativesUMovieSceneIntegerPropertySystem @ 14686caf0

void __cdecl
UMovieSceneIntegerPropertySystem::StaticRegisterNativesUMovieSceneIntegerPropertySystem(void)

{
  return;
}

