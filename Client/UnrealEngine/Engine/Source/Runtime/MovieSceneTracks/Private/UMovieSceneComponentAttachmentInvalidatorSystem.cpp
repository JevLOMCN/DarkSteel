// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 146722ee0

UClass * __cdecl UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentAttachmentInvalidatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneComponentAttachmentInvalidatorSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneComponentAttachmentInvalidatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentAttachmentInvalidatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.InnerSingleton;
}

// UMovieSceneComponentAttachmentInvalidatorSystem @ 146762f70

UMovieSceneComponentAttachmentInvalidatorSystem * __thiscall
UMovieSceneComponentAttachmentInvalidatorSystem::UMovieSceneComponentAttachmentInvalidatorSystem
          (UMovieSceneComponentAttachmentInvalidatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneComponentAttachmentInvalidatorSystem__6B_;
  return this;
}

// UMovieSceneComponentAttachmentInvalidatorSystem @ 146762fa0

UMovieSceneComponentAttachmentInvalidatorSystem * __thiscall
UMovieSceneComponentAttachmentInvalidatorSystem::UMovieSceneComponentAttachmentInvalidatorSystem
          (UMovieSceneComponentAttachmentInvalidatorSystem *this,FObjectInitializer *param_1)

{
  FMovieSceneTracksComponentTypes *pFVar1;
  UClass *local_res8 [2];
  UObject *local_res18 [2];
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneComponentAttachmentInvalidatorSystem__6B_;
  pFVar1 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneObjectBindingID> *)&this->field_0x30 = pFVar1->AttachParentBinding;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieSceneComponentAttachmentInvalidatorSystem @ 14676a0f0

void __thiscall
UMovieSceneComponentAttachmentInvalidatorSystem::~UMovieSceneComponentAttachmentInvalidatorSystem
          (UMovieSceneComponentAttachmentInvalidatorSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneComponentAttachmentInvalidatorSystem__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 146798020

UClass * __cdecl UMovieSceneComponentAttachmentInvalidatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneComponentAttachmentInvalidatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneComponentAttachmentInvalidatorSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneComponentAttachmentInvalidatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneComponentAttachmentInvalidatorSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.InnerSingleton;
}

// OnRun @ 1467ae360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneComponentAttachmentInvalidatorSystem::OnRun
          (UMovieSceneComponentAttachmentInvalidatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FMovieSceneTracksComponentTypes *pFVar1;
  
  pFVar1 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings
            ((UMovieSceneEntityInstantiatorSystem *)this,pFVar1->AttachParentBinding);
  return;
}

// StaticRegisterNativesUMovieSceneComponentAttachmentInvalidatorSystem @ 1467c27c0

void __cdecl
UMovieSceneComponentAttachmentInvalidatorSystem::
StaticRegisterNativesUMovieSceneComponentAttachmentInvalidatorSystem(void)

{
  return;
}

