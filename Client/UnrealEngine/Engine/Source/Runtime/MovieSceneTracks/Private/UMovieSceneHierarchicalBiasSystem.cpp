// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467ce470

UClass * __cdecl UMovieSceneHierarchicalBiasSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalBiasSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneHierarchicalBiasSystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneHierarchicalBiasSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalBiasSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.InnerSingleton;
}

// UMovieSceneHierarchicalBiasSystem @ 1468094f0

UMovieSceneHierarchicalBiasSystem * __thiscall
UMovieSceneHierarchicalBiasSystem::UMovieSceneHierarchicalBiasSystem
          (UMovieSceneHierarchicalBiasSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalBiasSystem__6B_;
  (this->GroupingSystem).field0_0x0.DebugPtr = (UMovieSceneEntityGroupingSystem *)0x0;
  return this;
}

// UMovieSceneHierarchicalBiasSystem @ 146809520

UMovieSceneHierarchicalBiasSystem * __thiscall
UMovieSceneHierarchicalBiasSystem::UMovieSceneHierarchicalBiasSystem
          (UMovieSceneHierarchicalBiasSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UClass *local_res8;
  UObject *local_res18;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalBiasSystem__6B_;
  (this->GroupingSystem).field0_0x0.DebugPtr = (UMovieSceneEntityGroupingSystem *)0x0;
  *(undefined4 *)&this->_padding_ = 2;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->Group;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = (pFVar2->Tags).Ignored.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->HierarchicalBlendTarget;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneHierarchicalBiasSystem @ 14680f690

void __thiscall
UMovieSceneHierarchicalBiasSystem::~UMovieSceneHierarchicalBiasSystem
          (UMovieSceneHierarchicalBiasSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneHierarchicalBiasSystem__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 146835d60

UClass * __cdecl UMovieSceneHierarchicalBiasSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalBiasSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneHierarchicalBiasSystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneHierarchicalBiasSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalBiasSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.InnerSingleton;
}

// IsRelevantImpl @ 14683f190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneHierarchicalBiasSystem::IsRelevantImpl
          (UMovieSceneHierarchicalBiasSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TVar1;
  FBuiltInComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> *pTVar4;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> local_18;
  TComponentTypeID<short> local_16;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> local_14 [6];
  
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_18 = pFVar2->Group;
  local_16 = pFVar2->HierarchicalBias;
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  pTVar4 = &local_18;
  while( true ) {
    TVar1 = *pTVar4;
    if (((TVar1 == (TComponentTypeID<UE::MovieScene::FEntityGroupID>)0xffff) ||
        ((pFVar3->Bits).NumBits <= (int)(uint)(ushort)TVar1)) ||
       ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
         ((ushort)TVar1 & 0x1f) & 1) == 0)) break;
    pTVar4 = pTVar4 + 1;
    if (pTVar4 == local_14) {
      return true;
    }
  }
  return false;
}

// OnLink @ 146842ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneHierarchicalBiasSystem::OnLink(UMovieSceneHierarchicalBiasSystem *this)

{
  UMovieSceneEntityGroupingSystem *pUVar1;
  
  pUVar1 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieSceneEntityGroupingSystem>
                     ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMovieSceneEntityGroupingSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->GroupingSystem).field0_0x0.DebugPtr = pUVar1;
  FMovieSceneEntitySystemGraph::AddReference
            ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
             (UMovieSceneEntitySystem *)this,(UMovieSceneEntitySystem *)pUVar1);
  return;
}

// OnRun @ 146845130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneHierarchicalBiasSystem::OnRun
          (UMovieSceneHierarchicalBiasSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  byte bVar1;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FBuiltInComponentTypes *pFVar8;
  FEntityAllocationWriteContext *pFVar9;
  FScriptContainerElement *this_00;
  undefined1 auStackY_2f8 [32];
  FComponentTypeID local_2c8;
  FComponentTypeID local_2c6;
  FComponentTypeID local_2c4;
  FComponentTypeID local_2c2;
  FComponentTypeID local_2c0;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> local_2be;
  FComponentTypeID local_2bc [2];
  TArray<UE::MovieScene::FHBiasMetaData,TSizedDefaultAllocator<32>_> local_2b8;
  TComponentTypeID<short> local_2a8;
  undefined2 uStack_2a6;
  undefined8 local_298;
  TStatIdData *pTStack_290;
  byte local_288;
  undefined7 uStack_287;
  undefined4 uStack_280;
  uint uStack_27c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_278;
  <lambda_1> local_268;
  FHBiasMetaData *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  FHBiasMetaData *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  IMovieSceneConditionalEntityMutation local_218;
  FHBiasMetaData *local_210;
  undefined8 uStack_208;
  IMovieSceneConditionalEntityMutation local_200;
  FHBiasMetaData *local_1f8;
  undefined8 uStack_1f0;
  ulong64 local_1e8;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> local_1e0;
  undefined4 local_1de;
  wchar_t *local_1d8;
  TStatIdData *pTStack_1d0;
  ulonglong local_1c8;
  undefined8 uStack_1c0;
  FEntityAllocationWriteContext local_1b8 [2];
  FEntityComponentFilter local_1a8;
  FEntityComponentFilter local_128;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  uVar3 = *(uint *)&(((this->GroupingSystem).field0_0x0.DebugPtr)->AllocatedGroupIndices).field_0x8;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar3,&local_2b8.AllocatorInstance,&local_2b8.ArrayNum,
                       &local_2b8.ArrayMax);
    DefaultConstructItems<UE::MovieScene::FHBiasMetaData,int>
              (local_2b8.AllocatorInstance.Data + (longlong)iVar7 * 0x18,uVar3);
  }
  bVar1 = local_288 & 0xe0;
  local_268.HBiasMetaData = &local_2b8;
  TVar2 = pFVar8->Group;
  pTStack_290 = &TStatId::TStatId_NAME_None;
  uStack_2a6 = 0x7fff;
  local_2a8 = pFVar8->HierarchicalBias;
  local_298 = 0;
  uStack_280 = 0x6ff;
  uStack_27c = uStack_27c & 0xffffff00;
  local_1c8 = CONCAT71(uStack_287,local_288) & 0xffffffffffffffe0;
  uStack_1c0._4_4_ = uStack_27c;
  uStack_1c0._0_4_ = AnyHiPriThreadHiPriTask;
  local_1de = _local_2a8;
  lVar4 = this->_padding_;
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  local_1d8 = (wchar_t *)0x0;
  pTStack_1d0 = &TStatId::TStatId_NAME_None;
  local_288 = bVar1;
  local_268.BuiltInComponents = pFVar8;
  local_1e0 = TVar2;
  if (TVar2 == (TComponentTypeID<UE::MovieScene::FEntityGroupID>)0xffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("In->ComponentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1a8,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_278._First = &local_2c8;
  local_278._Last = &local_2c6;
  local_2c8.Value = (ushort)TVar2;
  UE::MovieScene::FComponentMask::SetAll(&local_a8.AllMask,&local_278);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>,UE::MovieScene::TOptionalReadAccess<short>_>
  ::Iterate_PerAllocationImpl<_UMovieSceneHierarchicalBiasSystem::OnRun_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>,UE::MovieScene::TOptionalReadAccess<short>_>
              *)&local_1e0,(FEntityManager *)(lVar4 + 0x28),&local_a8,&local_268);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  iVar7 = local_2b8.ArrayNum;
  local_258 = (FHBiasMetaData *)local_2b8.AllocatorInstance.Data;
  if (local_2b8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iStack_250 = iVar7;
  uStack_208 = CONCAT44(uStack_24c,iVar7);
  lVar4 = this->_padding_;
  local_218 = (IMovieSceneConditionalEntityMutation)&___7FToggleIgnoredMutation_MovieScene_UE__6B_;
  local_210 = local_258;
  local_2c4.Value = *(ushort *)&pFVar8->Group;
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_248._First = &local_2c4;
  local_248._Last = &local_2c2;
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_128.AllMask.Bits.NumBits = 0;
  local_128.AllMask.Bits.MaxBits = 0x180;
  local_128.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_128.NoneMask.Bits.NumBits = 0;
  local_128.NoneMask.Bits.MaxBits = 0x180;
  local_128.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_128.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_128.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_128.ComplexMasks.ArrayNum = 0;
  local_128.ComplexMasks.ArrayMax = 0;
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_128.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  UE::MovieScene::FComponentMask::SetAll(&local_128.AllMask,&local_248);
  UE::MovieScene::FEntityManager::MutateConditional
            ((FEntityManager *)(lVar4 + 0x28),&local_128,&local_218,Mandatory);
  if (local_128.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ComplexMasks.AllocatorInstance.Data);
  }
  pFVar9 = UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                     (local_1b8,(FEntityManager *)(this->_padding_ + 0x28));
  iStack_230 = local_2b8.ArrayNum;
  local_1e8 = pFVar9->SystemSerial;
  local_238 = (FHBiasMetaData *)local_2b8.AllocatorInstance.Data;
  if (local_2b8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  local_200 = (IMovieSceneConditionalEntityMutation)&___7FBlendTargetMutation_MovieScene_UE__6B_;
  uStack_1f0 = CONCAT44(uStack_22c,iStack_230);
  local_1f8 = local_238;
  local_2c0.Value = *(ushort *)&pFVar8->Group;
  local_2be = pFVar8->HierarchicalBlendTarget;
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_1a8.AllMask.Bits.NumBits = 0;
  local_1a8.AllMask.Bits.MaxBits = 0x180;
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.NumBits = 0;
  local_1a8.NoneMask.Bits.MaxBits = 0x180;
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_1a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_1a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_1a8.ComplexMasks.ArrayNum = 0;
  local_1a8.ComplexMasks.ArrayMax = 0;
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_1a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x43c,&local_1a8.ComplexMasks.AllocatorInstance,
                     &local_1a8.ComplexMasks.ArrayMax);
  local_1a8.ComplexMasks.ArrayNum = iVar7 + 1;
  local_228._First = &local_2c0;
  this_00 = local_1a8.ComplexMasks.AllocatorInstance.Data + (longlong)iVar7 * 0x3c;
  local_228._Last = local_2bc;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_228);
  UE::MovieScene::FEntityManager::MutateConditional
            ((FEntityManager *)(lVar4 + 0x28),&local_1a8,&local_200,Mandatory);
  if (local_1a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.ComplexMasks.AllocatorInstance.Data);
  }
  local_200 = (IMovieSceneConditionalEntityMutation)
              &___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
  local_218 = (IMovieSceneConditionalEntityMutation)
              &___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
  DestructItems<UE::MovieScene::FHBiasMetaData,int>
            ((FHBiasMetaData *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum);
  if ((FHBiasMetaData *)local_2b8.AllocatorInstance.Data != (FHBiasMetaData *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneHierarchicalBiasSystem @ 14686cae0

void __cdecl
UMovieSceneHierarchicalBiasSystem::StaticRegisterNativesUMovieSceneHierarchicalBiasSystem(void)

{
  return;
}

