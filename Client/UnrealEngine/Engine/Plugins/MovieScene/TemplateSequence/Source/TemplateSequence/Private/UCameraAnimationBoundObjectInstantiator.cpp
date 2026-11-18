// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 8

// StaticClass @ 14ac63b30

UClass * __cdecl UCameraAnimationBoundObjectInstantiator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationBoundObjectInstantiator",
               &Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton,
               StaticRegisterNativesUCameraAnimationBoundObjectInstantiator,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationBoundObjectInstantiator>
               ,InternalVTableHelperCtorCaller<UCameraAnimationBoundObjectInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton;
}

// UCameraAnimationBoundObjectInstantiator @ 14ac6fd50

UCameraAnimationBoundObjectInstantiator * __thiscall
UCameraAnimationBoundObjectInstantiator::UCameraAnimationBoundObjectInstantiator
          (UCameraAnimationBoundObjectInstantiator *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationBoundObjectInstantiator__6B_;
  return this;
}

// UCameraAnimationBoundObjectInstantiator @ 14ac6fd80

UCameraAnimationBoundObjectInstantiator * __thiscall
UCameraAnimationBoundObjectInstantiator::UCameraAnimationBoundObjectInstantiator
          (UCameraAnimationBoundObjectInstantiator *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  EEntitySystemCategory EVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UCameraAnimationBoundObjectInstantiator__6B_;
  EVar2 = UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory();
  *(EEntitySystemCategory *)&this->field_0x38 = EVar2;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)&pFVar3->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UCameraAnimationBoundObjectInstantiator @ 14ac714e0

void __thiscall
UCameraAnimationBoundObjectInstantiator::~UCameraAnimationBoundObjectInstantiator
          (UCameraAnimationBoundObjectInstantiator *this)

{
  *(undefined ***)this = &___7UCameraAnimationBoundObjectInstantiator__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 14ac77790

UClass * __cdecl UCameraAnimationBoundObjectInstantiator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationBoundObjectInstantiator",
               &Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton,
               StaticRegisterNativesUCameraAnimationBoundObjectInstantiator,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationBoundObjectInstantiator>
               ,InternalVTableHelperCtorCaller<UCameraAnimationBoundObjectInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton;
}

// IsRelevantImpl @ 14ac7a640

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCameraAnimationBoundObjectInstantiator::IsRelevantImpl
          (UCameraAnimationBoundObjectInstantiator *this,UMovieSceneEntitySystemLinker *param_1)

{
  return param_1->Role == CameraAnimations;
}

// OnRun @ 14ac7ae30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationBoundObjectInstantiator::OnRun
          (UCameraAnimationBoundObjectInstantiator *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FBuiltInComponentTypes *pFVar6;
  FScriptContainerElement *this_00;
  undefined1 auStackY_1c8 [32];
  FComponentTypeID local_188;
  FComponentTypeID local_186;
  FComponentTypeID local_184;
  FComponentTypeID local_182;
  FComponentTypeID local_180;
  ushort local_17e;
  FComponentTypeID local_17c [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_178;
  initializer_list<UE::MovieScene::FComponentTypeID> local_168;
  initializer_list<UE::MovieScene::FComponentTypeID> local_158;
  IMovieSceneEntityMutation local_148;
  undefined8 local_140;
  FBuiltInComponentTypes *local_138;
  TBitArray<TFixedAllocator<12>_> local_128;
  TBitArray<TFixedAllocator<12>_> TStack_f0;
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar1 = *(longlong *)&this->field_0x28;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_140 = *(undefined8 *)(lVar1 + 0x580);
  local_148 = (IMovieSceneEntityMutation)
              &___7FCameraAnimationInstantiationMutation_MovieScene_UE__6B_;
  local_138 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_188.Value = *(ushort *)&pFVar6->GenericObjectBinding;
  TStack_f0.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_128.NumBits = 0;
  local_128.MaxBits = 0x180;
  TStack_f0.NumBits = 0;
  TStack_f0.MaxBits = 0x180;
  local_b8.Data = (FScriptContainerElement *)0x0;
  uStack_b0 = 0;
  local_128.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_128.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_128.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_128.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_128.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  TStack_f0.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  TStack_f0.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  TStack_f0.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  TStack_f0.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x43c,&local_b8,(int *)((longlong)&uStack_b0 + 4));
  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar5 + 1);
  local_178._First = &local_188;
  this_00 = local_b8.Data + (longlong)iVar5 * 0x3c;
  local_178._Last = &local_186;
  *(int *)&this_00[0x30].field_0x0 = 0;
  *(int *)&this_00[0x34].field_0x0 = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_178);
  local_180.Value = *(ushort *)&pFVar6->InstanceHandle;
  local_17e = (pFVar6->Tags).NeedsLink.Value;
  local_168._First = &local_180;
  local_168._Last = local_17c;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_128,&local_168);
  local_184.Value = (pFVar6->Tags).NeedsUnlink.Value;
  local_158._First = &local_184;
  local_158._Last = &local_182;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&TStack_f0,&local_158);
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_a8,&local_128);
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_a8.NoneMask.Bits,&TStack_f0);
  FVar3.Data = local_b8.Data;
  iVar5 = (int)uStack_b0;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = (int)uStack_b0;
  if ((int)uStack_b0 == 0) {
    local_a8.ComplexMasks.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,(int)uStack_b0,0,&local_a8.ComplexMasks.AllocatorInstance,(int)uStack_b0,
               &local_a8.ComplexMasks.ArrayMax);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              (local_a8.ComplexMasks.AllocatorInstance.Data,(FComplexMask *)FVar3.Data,iVar5);
  }
  if ((FComplexMask *)local_b8.Data != (FComplexMask *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  UE::MovieScene::FEntityManager::MutateAll
            ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_a8,&local_148,All);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUCameraAnimationBoundObjectInstantiator @ 14ac80480

void __cdecl
UCameraAnimationBoundObjectInstantiator::
StaticRegisterNativesUCameraAnimationBoundObjectInstantiator(void)

{
  return;
}

