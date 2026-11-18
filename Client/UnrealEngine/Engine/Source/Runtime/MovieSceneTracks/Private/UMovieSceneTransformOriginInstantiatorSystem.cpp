// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467cd6a0

UClass * __cdecl UMovieSceneTransformOriginInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformOriginInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneTransformOriginInstantiatorSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTransformOriginInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformOriginInstantiatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.InnerSingleton;
}

// UMovieSceneTransformOriginInstantiatorSystem @ 14680c3d0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTransformOriginInstantiatorSystem * __thiscall
UMovieSceneTransformOriginInstantiatorSystem::UMovieSceneTransformOriginInstantiatorSystem
          (UMovieSceneTransformOriginInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTransformOriginInstantiatorSystem__6B_;
  return this;
}

// UMovieSceneTransformOriginInstantiatorSystem @ 14680c400

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTransformOriginInstantiatorSystem * __thiscall
UMovieSceneTransformOriginInstantiatorSystem::UMovieSceneTransformOriginInstantiatorSystem
          (UMovieSceneTransformOriginInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UClass *local_res8;
  UObject *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UMovieSceneTransformOriginInstantiatorSystem__6B_;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = *(UClass **)&this->field_0x10;
    FVar1.Value = (pFVar2->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneTransformOriginInstantiatorSystem @ 14680fe70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTransformOriginInstantiatorSystem::~UMovieSceneTransformOriginInstantiatorSystem
          (UMovieSceneTransformOriginInstantiatorSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneTransformOriginInstantiatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 1468371a0

UClass * __cdecl UMovieSceneTransformOriginInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformOriginInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneTransformOriginInstantiatorSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTransformOriginInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformOriginInstantiatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.InnerSingleton;
}

// OnRun @ 14684c000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTransformOriginInstantiatorSystem::OnRun
          (UMovieSceneTransformOriginInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int iVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  FScriptContainerElement *this_00;
  undefined1 auStack_e8 [32];
  FComponentTypeID local_c8;
  FComponentTypeID local_c6 [7];
  initializer_list<UE::MovieScene::FComponentTypeID> local_b8;
  FComponentTypeID local_a8;
  TComponentTypeID<double> local_a6;
  TComponentTypeID<double> local_a4;
  FComponentTypeID local_a2;
  TComponentTypeID<double> local_a0;
  TComponentTypeID<double> local_9e;
  FComponentTypeID local_9c [2];
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.AllMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  local_a8.Value = (pFVar3->ComponentTransform).PropertyTag.Value;
  local_a4 = (TComponentTypeID<double>)(pFVar2->Tags).NeedsLink.Value;
  local_b8._First = &local_a8;
  local_a6 = (TComponentTypeID<double>)(pFVar2->Tags).AbsoluteBlend.Value;
  local_b8._Last = &local_a2;
  UE::MovieScene::FComponentMask::SetAll(&local_98.AllMask,&local_b8);
  local_c8.Value = *(ushort *)&pFVar2->BlendChannelOutput;
  local_b8._First = &local_c8;
  local_b8._Last = local_c6;
  UE::MovieScene::FComponentMask::SetAll(&local_98.NoneMask,&local_b8);
  local_a8.Value = *(ushort *)pFVar2->DoubleResult;
  local_a6 = pFVar2->DoubleResult[1];
  local_a4 = pFVar2->DoubleResult[2];
  local_a2.Value = *(ushort *)(pFVar2->DoubleResult + 3);
  local_a0 = pFVar2->DoubleResult[4];
  local_9e = pFVar2->DoubleResult[5];
  iVar1 = local_98.ComplexMasks.ArrayNum;
  if (local_98.ComplexMasks.ArrayNum == local_98.ComplexMasks.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_98.ComplexMasks.AllocatorInstance,
                       &local_98.ComplexMasks.ArrayMax);
  }
  local_98.ComplexMasks.ArrayNum = iVar1 + 1;
  local_b8._First = &local_a8;
  this_00 = local_98.ComplexMasks.AllocatorInstance.Data + (longlong)iVar1 * 0x3c;
  local_b8._Last = local_9c;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_b8);
  local_b8._First = (FComponentTypeID *)&___7FAddSingleMutation_MovieScene_UE__6B_;
  local_b8._Last =
       (FComponentTypeID *)CONCAT62(local_b8._Last._2_6_,(pFVar2->Tags).DontOptimizeConstants.Value)
  ;
  UE::MovieScene::FEntityManager::MutateAll
            ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_98,
             (IMovieSceneEntityMutation *)&local_b8,Mandatory);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneTransformOriginInstantiatorSystem @ 14686cc90

void __cdecl
UMovieSceneTransformOriginInstantiatorSystem::
StaticRegisterNativesUMovieSceneTransformOriginInstantiatorSystem(void)

{
  return;
}

