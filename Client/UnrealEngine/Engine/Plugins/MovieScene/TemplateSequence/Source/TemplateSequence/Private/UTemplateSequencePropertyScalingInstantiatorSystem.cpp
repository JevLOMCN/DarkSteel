// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 7

// StaticClass @ 14ac64270

UClass * __cdecl UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePropertyScalingInstantiatorSystem",
               &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
                InnerSingleton,
               StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequencePropertyScalingInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingInstantiatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
         InnerSingleton;
}

// UTemplateSequencePropertyScalingInstantiatorSystem @ 14ac70ac0

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePropertyScalingInstantiatorSystem * __thiscall
UTemplateSequencePropertyScalingInstantiatorSystem::
UTemplateSequencePropertyScalingInstantiatorSystem
          (UTemplateSequencePropertyScalingInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingInstantiatorSystem__6B_;
  *(undefined8 *)&this->PropertyScaledInstances = 0;
  *(undefined8 *)&(this->PropertyScaledInstances).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyScaledInstances).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x34 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PropertyScaledInstances).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x48 = 0;
  this->FloatScaleUseCount = 0;
  this->TransformScaleUseCount = 0;
  return this;
}

// UTemplateSequencePropertyScalingInstantiatorSystem @ 14ac70b20

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePropertyScalingInstantiatorSystem * __thiscall
UTemplateSequencePropertyScalingInstantiatorSystem::
UTemplateSequencePropertyScalingInstantiatorSystem
          (UTemplateSequencePropertyScalingInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FTemplateSequenceComponentTypes *pFVar3;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingInstantiatorSystem__6B_;
  *(undefined8 *)&this->PropertyScaledInstances = 0;
  *(undefined8 *)&(this->PropertyScaledInstances).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyScaledInstances).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyScaledInstances).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x48 = 0;
  this->FloatScaleUseCount = 0;
  this->TransformScaleUseCount = 0;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  *(TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *)&this->_padding_
       = pFVar3->PropertyScale;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UTemplateSequencePropertyScalingInstantiatorSystem @ 14ac71780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTemplateSequencePropertyScalingInstantiatorSystem::
~UTemplateSequencePropertyScalingInstantiatorSystem
          (UTemplateSequencePropertyScalingInstantiatorSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingInstantiatorSystem__6B_;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PropertyScaledInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyScaledInstances);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 14ac78070

UClass * __cdecl UTemplateSequencePropertyScalingInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePropertyScalingInstantiatorSystem",
               &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
                InnerSingleton,
               StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequencePropertyScalingInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingInstantiatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
         InnerSingleton;
}

// OnRun @ 14ac7b7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTemplateSequencePropertyScalingInstantiatorSystem::OnRun
          (UTemplateSequencePropertyScalingInstantiatorSystem *this,
          FSystemTaskPrerequisites *param_1,FSystemSubsequentTasks *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FInstanceRegistry *pFVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  bool bVar8;
  FBuiltInComponentTypes *pFVar9;
  FTemplateSequenceComponentTypes *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 auStack_5e8 [32];
  FComponentTypeID local_5c8;
  FComponentTypeID local_5c6;
  FComponentTypeID local_5c4;
  FComponentTypeID local_5c2;
  undefined1 local_5c0 [4];
  FComponentTypeID local_5bc;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> local_5ba;
  TArray<TTuple<UE::MovieScene::FMovieSceneEntityID,FGuid>,TSizedDefaultAllocator<32>_> local_5b8;
  undefined8 local_5a0;
  TStatIdData *pTStack_598;
  byte local_590;
  undefined7 uStack_58f;
  undefined4 uStack_588;
  uint uStack_584;
  undefined8 local_578;
  TStatIdData *pTStack_570;
  byte local_568;
  undefined7 uStack_567;
  undefined4 uStack_560;
  uint uStack_55c;
  undefined8 local_550;
  TStatIdData *pTStack_548;
  byte local_540;
  undefined7 uStack_53f;
  undefined4 uStack_538;
  uint uStack_534;
  initializer_list<UE::MovieScene::FComponentTypeID> local_528;
  <lambda_1> local_518;
  initializer_list<UE::MovieScene::FComponentTypeID> local_508;
  <lambda_2> local_4f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_4e8;
  undefined1 local_4d8 [28];
  undefined1 local_4bc;
  ushort local_4b8;
  bool local_4b4;
  <lambda_3> local_4b0;
  undefined2 local_498;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_496;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> TStack_494;
  undefined2 uStack_492;
  undefined8 uStack_490;
  TStatIdData *pTStack_488;
  ulonglong uStack_480;
  undefined8 uStack_478;
  undefined2 local_470;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_46e;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> TStack_46c;
  undefined2 uStack_46a;
  undefined8 uStack_468;
  TStatIdData *pTStack_460;
  ulonglong uStack_458;
  undefined8 uStack_450;
  undefined2 local_448;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_446;
  uint uStack_444;
  TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> TStack_440;
  TComponentTypeID<UObject_*> TStack_43e;
  undefined4 uStack_43c;
  FTypelessMutation local_418;
  undefined1 local_398 [8];
  FComponentAccess FStack_390;
  FComponentAccess aFStack_38e [3];
  wchar_t *local_388;
  TStatIdData *pTStack_380;
  ulonglong local_378;
  undefined8 uStack_370;
  FEntityComponentFilter local_368;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_278 [4];
  FComponentAccess aFStack_274 [2];
  wchar_t *pwStack_270;
  TStatIdData *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [2];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5e8;
  pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar10 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
  lVar2 = this->_padding_;
  if (*(longlong *)(lVar2 + 0x580) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TStack_496 = pFVar9->RootInstanceHandle;
  pFVar3 = *(FInstanceRegistry **)(lVar2 + 0x580);
  TStack_494 = pFVar10->PropertyScale;
  local_5c8.Value = (pFVar9->Tags).NeedsLink.Value;
  local_5a0 = 0;
  pTStack_598 = &TStatId::TStatId_NAME_None;
  uStack_584 = uStack_584 & 0xffffff00;
  uStack_588 = 0x6ff;
  uStack_480 = CONCAT71(uStack_58f,local_590) & 0xffffffffffffffe0;
  uStack_478._4_4_ = uStack_584;
  uStack_478._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_490 = 0;
  pTStack_488 = &TStatId::TStatId_NAME_None;
  local_278._2_2_ = TStack_496;
  local_278._0_2_ = local_498;
  unique0x10000733 = TStack_494;
  unique0x10000735 = uStack_492;
  local_250.AllMask.Bits.NumBits = 0;
  local_250.AllMask.Bits.MaxBits = 0x180;
  pwStack_270 = (wchar_t *)0x0;
  local_268 = &TStatId::TStatId_NAME_None;
  local_250.NoneMask.Bits.NumBits = 0;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1a0 = 0;
  local_19c = 0x180;
  local_168 = 0;
  local_164 = 0x180;
  local_590 = local_590 & 0xe0;
  local_518.__this = this;
  local_518.InstanceRegistry = pFVar3;
  uStack_260 = uStack_480;
  local_258 = uStack_478;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_250);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 4),&local_250);
  local_528._First = &local_5c8;
  local_528._Last = &local_5c6;
  UE::MovieScene::FComponentMask::SetAll(&local_250.AllMask,&local_528);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
  ::
  Iterate_PerEntityImpl<_UTemplateSequencePropertyScalingInstantiatorSystem::OnRun_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
              *)local_278,(FEntityManager *)(this->_padding_ + 0x28),&local_250,&local_518);
  if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  local_5ba = pFVar10->PropertyScale;
  TStack_46e = pFVar9->RootInstanceHandle;
  local_5bc.Value = (pFVar9->Tags).NeedsUnlink.Value;
  local_578 = 0;
  pTStack_570 = &TStatId::TStatId_NAME_None;
  uStack_560 = 0x6ff;
  uStack_55c = uStack_55c & 0xffffff00;
  uStack_458 = CONCAT71(uStack_567,local_568) & 0xffffffffffffffe0;
  uStack_450._4_4_ = uStack_55c;
  uStack_450._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_468 = 0;
  pTStack_460 = &TStatId::TStatId_NAME_None;
  local_158._2_2_ = TStack_46e;
  local_158._0_2_ = local_470;
  unique0x10000745 = local_5ba;
  unique0x10000747 = uStack_46a;
  local_130.AllMask.Bits.NumBits = 0;
  local_130.AllMask.Bits.MaxBits = 0x180;
  pwStack_150 = (wchar_t *)0x0;
  local_148 = &TStatId::TStatId_NAME_None;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_7c = 0x180;
  local_48 = 0;
  local_44 = 0x180;
  local_568 = local_568 & 0xe0;
  local_4f8.__this = this;
  local_4f8.InstanceRegistry = pFVar3;
  TStack_46c = local_5ba;
  uStack_140 = uStack_458;
  local_138 = uStack_450;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
  local_508._First = &local_5bc;
  local_508._Last = (FComponentTypeID *)&local_5b8;
  UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_508);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
  ::
  Iterate_PerEntityImpl<_UTemplateSequencePropertyScalingInstantiatorSystem::OnRun_::__l2::<lambda_2>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
              *)local_158,(FEntityManager *)(this->_padding_ + 0x28),&local_130,&local_4f8);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  local_4b0.PropertyScaledEntities = &local_5b8;
  local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b8.ArrayNum = 0;
  local_5b8.ArrayMax = 0;
  TStack_446 = pFVar9->RootInstanceHandle;
  uStack_444 = (ushort)pFVar9->SequenceID | 0x7fff0000;
  local_550 = 0;
  TStack_440 = pFVar9->ParentEntity;
  TStack_43e = pFVar9->BoundObject;
  uVar5 = pFVar9->ParentEntity;
  uVar6 = pFVar9->BoundObject;
  unique0x10000761 = uVar6;
  FStack_390.ComponentType.Value = uVar5;
  local_398 = (undefined1  [8])
              ((ulonglong)CONCAT24(pFVar9->SequenceID,CONCAT22(TStack_446,local_448)) |
              0x7fff000000000000);
  unique0x10000763 = uStack_43c;
  local_5c4.Value = (pFVar9->Tags).NeedsLink.Value;
  pTStack_548 = &TStatId::TStatId_NAME_None;
  uStack_538 = 0x6ff;
  uStack_534 = uStack_534 & 0xffffff00;
  local_378 = CONCAT71(uStack_53f,local_540) & 0xffffffffffffffe0;
  uStack_370._4_4_ = uStack_534;
  uStack_370._0_4_ = AnyHiPriThreadHiPriTask;
  local_388 = (wchar_t *)0x0;
  pTStack_380 = &TStatId::TStatId_NAME_None;
  local_368.AllMask.Bits.NumBits = 0;
  local_368.AllMask.Bits.MaxBits = 0x180;
  local_368.NoneMask.Bits.NumBits = 0;
  local_368.NoneMask.Bits.MaxBits = 0x180;
  local_368.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.ComplexMasks.ArrayNum = 0;
  local_368.ComplexMasks.ArrayMax = 0;
  local_2b8 = 0;
  local_2b4 = 0x180;
  local_280 = 0;
  local_27c = 0x180;
  local_540 = local_540 & 0xe0;
  local_4b0.__this = this;
  local_4b0.BuiltInComponents = pFVar9;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 2),&local_368);
  UE::MovieScene::AddAccessorToFilter(&FStack_390,&local_368);
  UE::MovieScene::AddAccessorToFilter(aFStack_38e,&local_368);
  local_4e8._First = &local_5c4;
  local_4e8._Last = &local_5c2;
  UE::MovieScene::FComponentMask::SetAll(&local_368.AllMask,&local_4e8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<UObject_*>_>
  ::
  Iterate_PerEntityImpl<_UTemplateSequencePropertyScalingInstantiatorSystem::OnRun_::__l2::<lambda_3>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<UObject_*>_>
              *)local_398,(FEntityManager *)(this->_padding_ + 0x28),&local_368,&local_4b0);
  if (local_368.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.ComplexMasks.AllocatorInstance.Data);
  }
  iVar7 = local_5b8.ArrayNum;
  uVar11 = (ulonglong)local_5b8.ArrayNum;
  pFVar1 = local_5b8.AllocatorInstance.Data + uVar11 * 0x14;
  FVar12.Data = local_5b8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar7) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,FGuid>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_5c0);
    }
    if (FVar12.Data == pFVar1) break;
    local_4d8._12_8_ = *(undefined8 *)(FVar12.Data + 4);
    local_4d8._20_8_ = *(undefined8 *)(FVar12.Data + 0xc);
    local_4d8._8_2_ = pFVar10->PropertyScaleReverseBindingLookup;
    local_4b8 = (pFVar9->Tags).DontOptimizeConstants.Value;
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_4d8._0_8_ =
         &___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__UFAdd_23__MovieScene_UE__6B_;
    local_418.RemoveMask.Bits.MaxBits = 0x180;
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_418.bRemoveAll = false;
    local_418._113_3_ = 0;
    local_4bc = 1;
    local_4b4 = false;
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_418.AddMask.Bits.NumBits = 0;
    local_418.AddMask.Bits.MaxBits = 0x180;
    local_418.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_418.RemoveMask.Bits.NumBits = 0;
    local_418.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_418.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_418.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
    MutateExisting((TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>
                    *)local_4d8,(FEntityManager *)(this->_padding_ + 0x28),
                   (FMovieSceneEntityID)*(ushort *)FVar12.Data,&local_418);
    uVar11 = local_5b8._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x14;
  }
  if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem @ 14ac805a0

void __cdecl
UTemplateSequencePropertyScalingInstantiatorSystem::
StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem(void)

{
  return;
}

