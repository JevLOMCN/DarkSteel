// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146064350

UClass * __cdecl UMovieSceneBindingLifetimeSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeSystem",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingLifetimeSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton;
}

// UMovieSceneBindingLifetimeSystem @ 1460949a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBindingLifetimeSystem * __thiscall
UMovieSceneBindingLifetimeSystem::UMovieSceneBindingLifetimeSystem
          (UMovieSceneBindingLifetimeSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingLifetimeSystem__6B_;
  return this;
}

// UMovieSceneBindingLifetimeSystem @ 1460949d0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBindingLifetimeSystem * __thiscall
UMovieSceneBindingLifetimeSystem::UMovieSceneBindingLifetimeSystem
          (UMovieSceneBindingLifetimeSystem *this,FObjectInitializer *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  UClass *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 6;
  *(undefined ***)this = &___7UMovieSceneBindingLifetimeSystem__6B_;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *)&this->field_0x30 =
       pFVar1->BindingLifetime;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = *(UClass **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = *(UClass **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = UMovieSceneGenericBoundObjectInstantiator::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieSceneBindingLifetimeSystem @ 146098260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBindingLifetimeSystem::~UMovieSceneBindingLifetimeSystem
          (UMovieSceneBindingLifetimeSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneBindingLifetimeSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 1460cf190

UClass * __cdecl UMovieSceneBindingLifetimeSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeSystem",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingLifetimeSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSystem.InnerSingleton;
}

// OnRun @ 1460dbe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBindingLifetimeSystem::OnRun
          (UMovieSceneBindingLifetimeSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TComponentTypeID<FGuid> TVar1;
  longlong lVar2;
  FInstanceRegistry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBuiltInComponentTypes *pFVar7;
  FScriptContainerElement *this_00;
  ForAnyElementType FVar8;
  undefined1 auStack_5b8 [32];
  bool local_598 [4];
  FComponentTypeID local_594;
  FComponentTypeID local_592;
  FComponentTypeID local_590;
  FComponentTypeID local_58e;
  FComponentTypeID local_58c;
  FComponentTypeID local_58a;
  FComponentTypeID local_588;
  ushort local_586;
  FComponentTypeID local_584 [2];
  <lambda_2> local_580;
  <lambda_1> local_578;
  undefined8 local_560;
  TStatIdData *pTStack_558;
  byte local_550;
  undefined7 uStack_54f;
  undefined4 uStack_548;
  uint uStack_544;
  undefined8 local_538;
  TStatIdData *pTStack_530;
  byte local_528;
  undefined7 uStack_527;
  undefined4 uStack_520;
  uint uStack_51c;
  undefined8 local_510;
  TStatIdData *pTStack_508;
  byte local_500;
  undefined7 uStack_4ff;
  undefined4 uStack_4f8;
  uint uStack_4f4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_4e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_4d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_4c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_4b8;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_4a8;
  undefined2 local_498;
  TComponentTypeID<FGuid> TStack_496;
  uint uStack_494;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_490;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> TStack_48e;
  undefined4 uStack_48c;
  undefined2 local_468;
  TComponentTypeID<FGuid> TStack_466;
  uint uStack_464;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_460;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> TStack_45e;
  undefined4 uStack_45c;
  undefined2 local_438;
  TComponentTypeID<FGuid> TStack_436;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_434;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> TStack_432;
  TComponentTypeID<UObject_*> TStack_430;
  undefined6 uStack_42e;
  FEntityComponentFilter local_408;
  undefined1 local_388 [4];
  FComponentAccess FStack_384;
  FComponentAccess FStack_382;
  FComponentAccess aFStack_380 [4];
  wchar_t *local_378;
  TStatIdData *pTStack_370;
  ulonglong local_368;
  undefined8 uStack_360;
  FEntityComponentFilter local_358;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268 [8];
  FComponentAccess FStack_260;
  FComponentAccess aFStack_25e [3];
  wchar_t *local_258;
  TStatIdData *pTStack_250;
  ulonglong local_248;
  undefined8 uStack_240;
  FEntityComponentFilter local_238;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [8];
  FComponentAccess FStack_140;
  FComponentAccess aFStack_13e [3];
  wchar_t *local_138;
  TStatIdData *pTStack_130;
  ulonglong local_128;
  undefined8 uStack_120;
  FEntityComponentFilter local_118;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar2 = *(longlong *)&this->field_0x28;
  local_588.Value = (pFVar7->Tags).NeedsLink.Value;
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_586 = (pFVar7->Tags).NeedsUnlink.Value;
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_408.AllMask.Bits.NumBits = 0;
  local_408.AllMask.Bits.MaxBits = 0x180;
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_408.NoneMask.Bits.NumBits = 0;
  local_408.NoneMask.Bits.MaxBits = 0x180;
  local_408.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_408.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_408.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_408.ComplexMasks.ArrayNum = 0;
  local_408.ComplexMasks.ArrayMax = 0;
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_408.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x43c,&local_408.ComplexMasks.AllocatorInstance,
                     &local_408.ComplexMasks.ArrayMax);
  local_408.ComplexMasks.ArrayNum = iVar6 + 1;
  local_4e8._First = &local_588;
  this_00 = local_408.ComplexMasks.AllocatorInstance.Data + (longlong)iVar6 * 0x3c;
  local_4e8._Last = local_584;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_4e8);
  bVar5 = UE::MovieScene::FEntityManager::Contains((FEntityManager *)(lVar2 + 0x28),&local_408);
  if (local_408.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.ComplexMasks.AllocatorInstance.Data);
  }
  if (bVar5) {
    lVar2 = *(longlong *)&this->field_0x28;
    if (*(longlong *)(lVar2 + 0x580) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = *(FInstanceRegistry **)(lVar2 + 0x580);
    UMovieSceneEntitySystemLinker::GetRunner
              (*(UMovieSceneEntitySystemLinker **)&this->field_0x28,&local_4a8);
    TVar1 = pFVar7->GenericObjectBinding;
    if ((local_4a8.Object)->CurrentPhase == Spawn) {
      local_578.bLink = local_598;
      uStack_494 = (ushort)pFVar7->BoundObject | 0x7fff0000;
      TStack_490 = pFVar7->InstanceHandle;
      TStack_48e = pFVar7->BindingLifetime;
      local_268 = (undefined1  [8])
                  ((ulonglong)CONCAT24(pFVar7->BoundObject,CONCAT22(TVar1,local_498)) |
                  0x7fff000000000000);
      unique0x1000067e = TStack_48e;
      FStack_260.ComponentType.Value = TStack_490;
      unique0x10000680 = uStack_48c;
      local_594.Value = (pFVar7->Tags).NeedsUnlink.Value;
      local_560 = 0;
      pTStack_558 = &TStatId::TStatId_NAME_None;
      uStack_548 = 0x6ff;
      uStack_544 = uStack_544 & 0xffffff00;
      local_248 = CONCAT71(uStack_54f,local_550) & 0xffffffffffffffe0;
      uStack_240._4_4_ = uStack_544;
      uStack_240._0_4_ = AnyHiPriThreadHiPriTask;
      local_598[0] = false;
      local_258 = (wchar_t *)0x0;
      pTStack_250 = &TStatId::TStatId_NAME_None;
      local_238.AllMask.Bits.NumBits = 0;
      local_238.AllMask.Bits.MaxBits = 0x180;
      local_238.NoneMask.Bits.NumBits = 0;
      local_238.NoneMask.Bits.MaxBits = 0x180;
      local_238.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.ComplexMasks.ArrayNum = 0;
      local_238.ComplexMasks.ArrayMax = 0;
      local_188 = 0;
      local_184 = 0x180;
      local_150 = 0;
      local_14c = 0x180;
      local_578.InstanceRegistry = pFVar3;
      local_550 = local_550 & 0xe0;
      TStack_496 = TVar1;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_268 + 2),&local_238);
      UE::MovieScene::AddAccessorToFilter(&FStack_260,&local_238);
      UE::MovieScene::AddAccessorToFilter(aFStack_25e,&local_238);
      local_4d8._First = &local_594;
      local_4d8._Last = &local_592;
      UE::MovieScene::FComponentMask::SetAll(&local_238.AllMask,&local_4d8);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
      ::Iterate_PerEntityImpl<_UMovieSceneBindingLifetimeSystem::OnRun_::__l8::<lambda_1>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
                  *)local_268,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_238,
                 &local_578);
      if (local_238.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.ComplexMasks.AllocatorInstance.Data);
      }
      TStack_466 = pFVar7->GenericObjectBinding;
      uStack_464 = (ushort)pFVar7->BoundObject | 0x7fff0000;
      local_538 = 0;
      TStack_460 = pFVar7->InstanceHandle;
      TStack_45e = pFVar7->BindingLifetime;
      local_148 = (undefined1  [8])
                  ((ulonglong)CONCAT24(pFVar7->BoundObject,CONCAT22(TStack_466,local_468)) |
                  0x7fff000000000000);
      unique0x10000696 = TStack_45e;
      FStack_140.ComponentType.Value = TStack_460;
      unique0x10000698 = uStack_45c;
      local_590.Value = (pFVar7->Tags).NeedsLink.Value;
      pTStack_530 = &TStatId::TStatId_NAME_None;
      uStack_520 = 0x6ff;
      uStack_51c = uStack_51c & 0xffffff00;
      local_128 = CONCAT71(uStack_527,local_528) & 0xffffffffffffffe0;
      uStack_120._4_4_ = uStack_51c;
      uStack_120._0_4_ = AnyHiPriThreadHiPriTask;
      local_598[0] = true;
      local_138 = (wchar_t *)0x0;
      pTStack_130 = &TStatId::TStatId_NAME_None;
      local_118.AllMask.Bits.NumBits = 0;
      local_118.AllMask.Bits.MaxBits = 0x180;
      local_118.NoneMask.Bits.NumBits = 0;
      local_118.NoneMask.Bits.MaxBits = 0x180;
      local_118.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ComplexMasks.ArrayNum = 0;
      local_118.ComplexMasks.ArrayMax = 0;
      local_68 = 0;
      local_64 = 0x180;
      local_30 = 0;
      local_2c = 0x180;
      local_528 = local_528 & 0xe0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_118);
      UE::MovieScene::AddAccessorToFilter(&FStack_140,&local_118);
      UE::MovieScene::AddAccessorToFilter(aFStack_13e,&local_118);
      local_4c8._First = &local_590;
      local_4c8._Last = &local_58e;
      UE::MovieScene::FComponentMask::SetAll(&local_118.AllMask,&local_4c8);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
      ::Iterate_PerEntityImpl<_UMovieSceneBindingLifetimeSystem::OnRun_::__l8::<lambda_1>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
                  *)local_148,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_118,
                 &local_578);
      FVar8.Data = local_118.ComplexMasks.AllocatorInstance.Data;
    }
    else {
      TStack_434 = pFVar7->InstanceHandle;
      TStack_432 = pFVar7->BindingLifetime;
      TStack_430 = pFVar7->BoundObject;
      local_58c.Value = (pFVar7->Tags).NeedsLink.Value;
      local_388._2_2_ = TVar1;
      local_388._0_2_ = local_438;
      unique0x100006a4 = TStack_434;
      unique0x100006a6 = TStack_432;
      aFStack_380._2_6_ = uStack_42e;
      aFStack_380[0].ComponentType.Value = TStack_430;
      local_510 = 0;
      pTStack_508 = &TStatId::TStatId_NAME_None;
      uStack_4f8 = 0x6ff;
      uStack_4f4 = uStack_4f4 & 0xffffff00;
      local_368 = CONCAT71(uStack_4ff,local_500) & 0xffffffffffffffe0;
      uStack_360._4_4_ = uStack_4f4;
      uStack_360._0_4_ = AnyHiPriThreadHiPriTask;
      local_378 = (wchar_t *)0x0;
      pTStack_370 = &TStatId::TStatId_NAME_None;
      local_358.AllMask.Bits.NumBits = 0;
      local_358.AllMask.Bits.MaxBits = 0x180;
      local_358.NoneMask.Bits.NumBits = 0;
      local_358.NoneMask.Bits.MaxBits = 0x180;
      local_358.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_358.ComplexMasks.ArrayNum = 0;
      local_358.ComplexMasks.ArrayMax = 0;
      local_2a8 = 0;
      local_2a4 = 0x180;
      local_270 = 0;
      local_26c = 0x180;
      local_580.InstanceRegistry = pFVar3;
      local_500 = local_500 & 0xe0;
      TStack_436 = TVar1;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_388 + 2),&local_358);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_388 + 4),&local_358);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_388 + 6),&local_358);
      UE::MovieScene::AddAccessorToFilter(aFStack_380,&local_358);
      local_4b8._First = &local_58c;
      local_4b8._Last = &local_58a;
      UE::MovieScene::FComponentMask::SetAll(&local_358.AllMask,&local_4b8);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,UE::MovieScene::TReadAccess<UObject_*>_>
      ::Iterate_PerEntityImpl<_UMovieSceneBindingLifetimeSystem::OnRun_::__l10::<lambda_2>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,UE::MovieScene::TReadAccess<UObject_*>_>
                  *)local_388,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_358,
                 &local_580);
      FVar8.Data = local_358.ComplexMasks.AllocatorInstance.Data;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StaticRegisterNativesUMovieSceneBindingLifetimeSystem @ 1460fa1b0

void __cdecl
UMovieSceneBindingLifetimeSystem::StaticRegisterNativesUMovieSceneBindingLifetimeSystem(void)

{
  return;
}

