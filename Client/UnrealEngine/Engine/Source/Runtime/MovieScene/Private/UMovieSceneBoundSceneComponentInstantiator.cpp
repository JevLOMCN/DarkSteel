// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146062060

UClass * __cdecl UMovieSceneBoundSceneComponentInstantiator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoundSceneComponentInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton
               ,StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBoundSceneComponentInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneBoundSceneComponentInstantiator>,local_res8
               ,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton;
}

// UMovieSceneBoundSceneComponentInstantiator @ 146094cd0

UMovieSceneBoundSceneComponentInstantiator * __thiscall
UMovieSceneBoundSceneComponentInstantiator::UMovieSceneBoundSceneComponentInstantiator
          (UMovieSceneBoundSceneComponentInstantiator *this,FObjectInitializer *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  UClass *local_res8 [2];
  UObject *local_res18 [2];
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBoundSceneComponentInstantiator__6B_;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<FGuid> *)&this->field_0x30 = pFVar1->SceneComponentBinding;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = UMovieSceneGenericBoundObjectInstantiator::StaticClass();
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

// UMovieSceneBoundSceneComponentInstantiator @ 146094d60

UMovieSceneBoundSceneComponentInstantiator * __thiscall
UMovieSceneBoundSceneComponentInstantiator::UMovieSceneBoundSceneComponentInstantiator
          (UMovieSceneBoundSceneComponentInstantiator *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBoundSceneComponentInstantiator__6B_;
  return this;
}

// ~UMovieSceneBoundSceneComponentInstantiator @ 1460982c0

void __thiscall
UMovieSceneBoundSceneComponentInstantiator::~UMovieSceneBoundSceneComponentInstantiator
          (UMovieSceneBoundSceneComponentInstantiator *this)

{
  *(undefined ***)this = &___7UMovieSceneBoundSceneComponentInstantiator__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 1460cf310

UClass * __cdecl UMovieSceneBoundSceneComponentInstantiator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoundSceneComponentInstantiator",
               &Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton
               ,StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBoundSceneComponentInstantiator>,
               InternalVTableHelperCtorCaller<UMovieSceneBoundSceneComponentInstantiator>,local_res8
               ,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.InnerSingleton;
}

// OnRun @ 1460dc410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBoundSceneComponentInstantiator::OnRun
          (UMovieSceneBoundSceneComponentInstantiator *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_d8 [32];
  FComponentTypeID local_b8;
  FComponentTypeID local_b6 [3];
  IMovieSceneEntityMutation local_b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_a8;
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar1 = *(longlong *)&this->field_0x28;
  local_b0 = (IMovieSceneEntityMutation)
             &`UMovieSceneBoundSceneComponentInstantiator::OnRun'::`2'::
              FSceneComponentBindingMutation::_vftable_;
  local_b8.Value = *(ushort *)&pFVar2->SceneComponentBinding;
  local_a8._First = &local_b8;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8._Last = local_b6;
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.AllMask.Bits.NumBits = 0;
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  UE::MovieScene::FComponentMask::SetAll(&local_98.AllMask,&local_a8);
  UE::MovieScene::FEntityManager::MutateAll
            ((FEntityManager *)(lVar1 + 0x28),&local_98,&local_b0,Mandatory);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator @ 1460fa1d0

void __cdecl
UMovieSceneBoundSceneComponentInstantiator::
StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator(void)

{
  return;
}

