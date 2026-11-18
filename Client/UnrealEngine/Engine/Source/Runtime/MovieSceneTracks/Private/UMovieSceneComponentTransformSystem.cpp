// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 146725b20

UClass * __cdecl UMovieSceneComponentTransformSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentTransformSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentTransformSystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentTransformSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentTransformSystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.InnerSingleton;
}

// UMovieSceneComponentTransformSystem @ 146763830

UMovieSceneComponentTransformSystem * __thiscall
UMovieSceneComponentTransformSystem::UMovieSceneComponentTransformSystem
          (UMovieSceneComponentTransformSystem *this,FVTableHelper *param_1)

{
  UMovieScenePropertySystem::UMovieScenePropertySystem((UMovieScenePropertySystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  return this;
}

// UMovieSceneComponentTransformSystem @ 146763870

UMovieSceneComponentTransformSystem * __thiscall
UMovieSceneComponentTransformSystem::UMovieSceneComponentTransformSystem
          (UMovieSceneComponentTransformSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  code *pcVar2;
  bool bVar3;
  EEntitySystemCategory EVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  UMovieSceneComponentTransformSystem *pUVar7;
  uint uVar8;
  TComponentTypeID<double> *pTVar9;
  UObject *local_res8;
  UClass *local_res18;
  UObject *local_res20;
  UObject *local_38 [2];
  
  UMovieScenePropertySystem::UMovieScenePropertySystem((UMovieScenePropertySystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  EVar4 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->field_0x38 = *(uint *)&this->field_0x38 & ~EVar4;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if (((*(short *)&this->field_0x30 != -1) || (*(int *)&this->field_0x58 != -1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RelevantComponent && !CompositePropertyID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                         ,0x1f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UMovieSceneComponentTransformSystem *)(*pcVar2)();
    return pUVar7;
  }
  *(ushort *)&this->field_0x30 = (pFVar6->ComponentTransform).PropertyTag.Value;
  *(TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
    *)&this->field_0x58 = (pFVar6->ComponentTransform).CompositeID;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res20 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar6->ComponentTransform).PropertyTag.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,FVar1);
    uVar8 = 0;
    pTVar9 = pFVar5->DoubleResult;
    do {
      local_38[0] = *(UObject **)&this->field_0x10;
      FVar1.Value = *(ushort *)pTVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38[0]);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)local_38,FVar1);
      uVar8 = uVar8 + 1;
      pTVar9 = pTVar9 + 1;
    } while (uVar8 < 9);
  }
  return this;
}

// ~UMovieSceneComponentTransformSystem @ 14676a2c0

void __thiscall
UMovieSceneComponentTransformSystem::~UMovieSceneComponentTransformSystem
          (UMovieSceneComponentTransformSystem *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  return;
}

// GetPrivateStaticClass @ 1467983e0

UClass * __cdecl UMovieSceneComponentTransformSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentTransformSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneComponentTransformSystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneComponentTransformSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentTransformSystem>,local_res8,
               UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.InnerSingleton;
}

// OnRun @ 1467ae730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentTransformSystem::OnRun
          (UMovieSceneComponentTransformSystem *this,FSystemTaskPrerequisites *param_1,
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

// StaticRegisterNativesUMovieSceneComponentTransformSystem @ 1467c2840

void __cdecl
UMovieSceneComponentTransformSystem::StaticRegisterNativesUMovieSceneComponentTransformSystem(void)

{
  return;
}

