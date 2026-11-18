// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 146724ee0

UClass * __cdecl UMovieSceneBaseValueEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBaseValueEvaluatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBaseValueEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBaseValueEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.InnerSingleton;
}

// UMovieSceneBaseValueEvaluatorSystem @ 146761970

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBaseValueEvaluatorSystem * __thiscall
UMovieSceneBaseValueEvaluatorSystem::UMovieSceneBaseValueEvaluatorSystem
          (UMovieSceneBaseValueEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBaseValueEvaluatorSystem__6B_;
  return this;
}

// UMovieSceneBaseValueEvaluatorSystem @ 1467619a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneBaseValueEvaluatorSystem * __thiscall
UMovieSceneBaseValueEvaluatorSystem::UMovieSceneBaseValueEvaluatorSystem
          (UMovieSceneBaseValueEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UMovieSceneBaseValueEvaluatorSystem__6B_;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<FFrameTime> *)&this->field_0x30 = pFVar2->BaseValueEvalTime;
  *(undefined4 *)&this->field_0x38 = 4;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneBaseValueEvaluatorSystem @ 146769d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBaseValueEvaluatorSystem::~UMovieSceneBaseValueEvaluatorSystem
          (UMovieSceneBaseValueEvaluatorSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneBaseValueEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 1467975a0

UClass * __cdecl UMovieSceneBaseValueEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBaseValueEvaluatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBaseValueEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneBaseValueEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.InnerSingleton;
}

// OnRun @ 1467ad740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBaseValueEvaluatorSystem::OnRun
          (UMovieSceneBaseValueEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *pFVar3;
  FEntityManager *pFVar4;
  TComponentTypeID<double> *pTVar5;
  TComponentTypeID<double> *pTVar6;
  FAssignBaseValueEvalSeconds FVar7;
  longlong lVar8;
  undefined1 auStack_858 [32];
  FEvaluateBaseByteValues local_838 [8];
  FComponentTypeID local_830;
  FComponentTypeID local_82e;
  FComponentTypeID local_82c;
  FComponentTypeID local_82a;
  FComponentTypeID local_828;
  FComponentTypeID local_826;
  FComponentTypeID local_824;
  FComponentTypeID local_822;
  FComponentTypeID local_820;
  FComponentTypeID local_81e;
  FComponentTypeID local_81c;
  FComponentTypeID local_81a;
  FComponentTypeID local_818;
  FComponentTypeID local_816;
  FComponentTypeID local_814;
  FComponentTypeID local_812;
  FAssignBaseValueEvalSeconds local_810 [2];
  undefined8 local_800;
  TStatIdData *pTStack_7f8;
  byte local_7f0;
  undefined7 uStack_7ef;
  undefined4 uStack_7e8;
  uint uStack_7e4;
  undefined8 local_7d8;
  TStatIdData *pTStack_7d0;
  byte local_7c8;
  undefined7 uStack_7c7;
  undefined4 uStack_7c0;
  uint uStack_7bc;
  undefined8 local_7b0;
  TStatIdData *pTStack_7a8;
  byte local_7a0;
  undefined7 uStack_79f;
  undefined4 uStack_798;
  uint uStack_794;
  undefined8 local_788;
  TStatIdData *pTStack_780;
  byte local_778;
  undefined7 uStack_777;
  undefined4 uStack_770;
  uint uStack_76c;
  undefined8 local_760;
  TStatIdData *pTStack_758;
  byte local_750;
  undefined7 uStack_74f;
  undefined4 uStack_748;
  uint uStack_744;
  initializer_list<UE::MovieScene::FComponentTypeID> local_738;
  initializer_list<UE::MovieScene::FComponentTypeID> local_728;
  initializer_list<UE::MovieScene::FComponentTypeID> local_718;
  initializer_list<UE::MovieScene::FComponentTypeID> local_708;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_6c8;
  TComponentTypeID<UE::MovieScene::FSourceByteChannel> local_6b8;
  TComponentTypeID<FFrameTime> TStack_6b6;
  TComponentTypeID<unsigned_char> TStack_6b4;
  undefined2 uStack_6b2;
  undefined8 uStack_6b0;
  TStatIdData *pTStack_6a8;
  ulonglong uStack_6a0;
  undefined8 uStack_698;
  TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> local_690;
  TComponentTypeID<FFrameTime> TStack_68e;
  TComponentTypeID<__int64> TStack_68c;
  undefined2 uStack_68a;
  undefined8 uStack_688;
  TStatIdData *pTStack_680;
  ulonglong uStack_678;
  undefined8 uStack_670;
  TComponentTypeID<double> local_668;
  TComponentTypeID<FFrameTime> TStack_666;
  TComponentTypeID<double> TStack_664;
  undefined2 uStack_662;
  undefined8 uStack_660;
  TStatIdData *pTStack_658;
  ulonglong uStack_650;
  undefined8 uStack_648;
  TComponentTypeID<double> local_640;
  TComponentTypeID<FFrameTime> TStack_63e;
  TComponentTypeID<double> TStack_63c;
  undefined2 uStack_63a;
  undefined8 uStack_638;
  TStatIdData *pTStack_630;
  ulonglong uStack_628;
  undefined8 uStack_620;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_618;
  TComponentTypeID<FFrameTime> local_616;
  TComponentTypeID<double> local_614;
  undefined8 local_610;
  TStatIdData *pTStack_608;
  ulonglong local_600;
  undefined8 uStack_5f8;
  undefined1 local_5e8 [2];
  FComponentAccess FStack_5e6;
  FComponentAccess aFStack_5e4 [2];
  undefined8 uStack_5e0;
  TStatIdData *local_5d8;
  ulonglong uStack_5d0;
  undefined8 local_5c8;
  FEntityComponentFilter local_5c0;
  TBitArray<TFixedAllocator<12>_> local_540;
  TBitArray<TFixedAllocator<12>_> local_508;
  undefined1 local_4c8 [4];
  FComponentAccess aFStack_4c4 [2];
  undefined8 uStack_4c0;
  TStatIdData *local_4b8;
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  FEntityComponentFilter local_4a0;
  int local_3f0;
  int local_3ec;
  int local_3b8;
  int local_3b4;
  undefined1 local_3a8 [4];
  FComponentAccess aFStack_3a4 [2];
  undefined8 uStack_3a0;
  TStatIdData *local_398;
  ulonglong uStack_390;
  undefined8 local_388;
  FEntityComponentFilter local_380;
  int local_2d0;
  int local_2cc;
  int local_298;
  int local_294;
  undefined1 local_288 [4];
  FComponentAccess aFStack_284 [2];
  undefined8 uStack_280;
  TStatIdData *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  FEntityComponentFilter local_260;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  undefined1 local_168 [24];
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  TBitArray<TFixedAllocator<12>_> local_c0;
  TBitArray<TFixedAllocator<12>_> local_88;
  FEntityManager *local_50;
  FEntityAllocationWriteContext local_48 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_858;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar8 = *(longlong *)&this->field_0x28;
  if ((*(longlong *)(lVar8 + 0x580) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_810[0].InstanceRegistry = *(FInstanceRegistry **)(lVar8 + 0x580);
  local_618 = pFVar3->InstanceHandle;
  local_616 = pFVar3->BaseValueEvalTime;
  local_614 = pFVar3->BaseValueEvalSeconds;
  local_800 = 0;
  pTStack_7f8 = &TStatId::TStatId_NAME_None;
  uStack_7e8 = 0x6ff;
  uStack_7e4 = uStack_7e4 & 0xffffff00;
  local_600 = CONCAT71(uStack_7ef,local_7f0) & 0xffffffffffffffe0;
  uStack_5f8._4_4_ = uStack_7e4;
  uStack_5f8._0_4_ = 0x6ff;
  local_610 = 0;
  pTStack_608 = &TStatId::TStatId_NAME_None;
  local_7f0 = local_7f0 & 0xe0;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
  ::RunInline_PerEntity<UE::MovieScene::FAssignBaseValueEvalSeconds>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
              *)&local_618,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),local_810);
  local_6b8 = pFVar3->ByteChannel;
  TStack_6b6 = pFVar3->BaseValueEvalTime;
  TStack_6b4 = pFVar3->BaseByte;
  local_830.Value = (pFVar3->Tags).NeedsLink.Value;
  local_7d8 = 0;
  pTStack_7d0 = &TStatId::TStatId_NAME_None;
  uStack_7c0 = 0x6ff;
  uStack_7bc = uStack_7bc & 0xffffff00;
  uStack_6a0 = CONCAT71(uStack_7c7,local_7c8) & 0xffffffffffffffe0;
  uStack_698._4_4_ = uStack_7bc;
  uStack_698._0_4_ = 0x6ff;
  uStack_6b0 = 0;
  pTStack_6a8 = &TStatId::TStatId_NAME_None;
  local_4a0.AllMask.Bits.NumBits = 0;
  local_4c8._2_2_ = TStack_6b6;
  local_4c8._0_2_ = local_6b8;
  unique0x1000093c = TStack_6b4;
  unique0x1000093e = uStack_6b2;
  local_4a0.AllMask.Bits.MaxBits = 0x180;
  local_4a0.NoneMask.Bits.NumBits = 0;
  local_4a0.NoneMask.Bits.MaxBits = 0x180;
  uStack_4c0 = 0;
  local_4b8 = &TStatId::TStatId_NAME_None;
  local_4a0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.ComplexMasks.ArrayNum = 0;
  local_4a0.ComplexMasks.ArrayMax = 0;
  local_3f0 = 0;
  local_3ec = 0x180;
  local_3b8 = 0;
  local_3b4 = 0x180;
  local_7c8 = local_7c8 & 0xe0;
  uStack_4b0 = uStack_6a0;
  local_4a8 = uStack_698;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_4c8,&local_4a0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4c8 + 2),&local_4a0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4c8 + 4),&local_4a0);
  local_708._First = &local_830;
  local_708._Last = &local_82e;
  UE::MovieScene::FComponentMask::SetAll(&local_4a0.AllMask,&local_708);
  local_82c.Value = (pFVar3->Tags).Ignored.Value;
  local_6f8._First = &local_82c;
  local_6f8._Last = &local_82a;
  UE::MovieScene::FComponentMask::SetAll(&local_4a0.NoneMask,&local_6f8);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
  ::RunInline_PerEntity<UE::MovieScene::FEvaluateBaseByteValues>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
              *)local_4c8,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),local_838[0]);
  if (local_4a0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.ComplexMasks.AllocatorInstance.Data);
  }
  local_690 = pFVar3->IntegerChannel;
  TStack_68e = pFVar3->BaseValueEvalTime;
  TStack_68c = pFVar3->BaseInteger;
  local_828.Value = (pFVar3->Tags).NeedsLink.Value;
  local_7b0 = 0;
  pTStack_7a8 = &TStatId::TStatId_NAME_None;
  uStack_798 = 0x6ff;
  uStack_794 = uStack_794 & 0xffffff00;
  uStack_678 = CONCAT71(uStack_79f,local_7a0) & 0xffffffffffffffe0;
  uStack_670._4_4_ = uStack_794;
  uStack_670._0_4_ = 0x6ff;
  uStack_688 = 0;
  pTStack_680 = &TStatId::TStatId_NAME_None;
  local_380.AllMask.Bits.NumBits = 0;
  local_3a8._2_2_ = TStack_68e;
  local_3a8._0_2_ = local_690;
  unique0x1000094e = TStack_68c;
  unique0x10000950 = uStack_68a;
  local_380.AllMask.Bits.MaxBits = 0x180;
  local_380.NoneMask.Bits.NumBits = 0;
  local_380.NoneMask.Bits.MaxBits = 0x180;
  uStack_3a0 = 0;
  local_398 = &TStatId::TStatId_NAME_None;
  local_380.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.ComplexMasks.ArrayNum = 0;
  local_380.ComplexMasks.ArrayMax = 0;
  local_2d0 = 0;
  local_2cc = 0x180;
  local_298 = 0;
  local_294 = 0x180;
  local_7a0 = local_7a0 & 0xe0;
  uStack_390 = uStack_678;
  local_388 = uStack_670;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_3a8,&local_380);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3a8 + 2),&local_380);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3a8 + 4),&local_380);
  local_6e8._First = &local_828;
  local_6e8._Last = &local_826;
  UE::MovieScene::FComponentMask::SetAll(&local_380.AllMask,&local_6e8);
  local_824.Value = (pFVar3->Tags).Ignored.Value;
  local_6d8._First = &local_824;
  local_6d8._Last = &local_822;
  UE::MovieScene::FComponentMask::SetAll(&local_380.NoneMask,&local_6d8);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
  ::RunInline_PerEntity<UE::MovieScene::FEvaluateBaseIntegerValues>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
              *)local_3a8,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),
             (FEvaluateBaseIntegerValues)local_838[0]);
  if (local_380.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.ComplexMasks.AllocatorInstance.Data);
  }
  pTVar5 = pFVar3->BaseDouble;
  local_810[0].InstanceRegistry = (FInstanceRegistry *)&DAT_00000009;
  lVar8 = 9;
  pTVar6 = pTVar5;
  do {
    local_668 = pTVar6[-0x29];
    TStack_666 = pFVar3->BaseValueEvalTime;
    TStack_664 = *pTVar6;
    local_788 = 0;
    uStack_76c = uStack_76c & 0xffffff00;
    local_820.Value = (pFVar3->Tags).NeedsLink.Value;
    local_260.AllMask.Bits.NumBits = 0;
    local_260.NoneMask.Bits.NumBits = 0;
    local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ComplexMasks.ArrayNum = 0;
    local_260.ComplexMasks.ArrayMax = 0;
    local_1b0 = 0;
    local_178 = 0;
    pTStack_780 = &TStatId::TStatId_NAME_None;
    uStack_770 = 0x6ff;
    uStack_650 = CONCAT71(uStack_777,local_778) & 0xffffffffffffffe0;
    uStack_648._4_4_ = uStack_76c;
    uStack_648._0_4_ = 0x6ff;
    uStack_660 = 0;
    pTStack_658 = &TStatId::TStatId_NAME_None;
    local_260.AllMask.Bits.MaxBits = 0x180;
    local_288._2_2_ = TStack_666;
    local_288._0_2_ = local_668;
    unique0x10000960 = TStack_664;
    unique0x10000962 = uStack_662;
    local_260.NoneMask.Bits.MaxBits = 0x180;
    local_1ac = 0x180;
    local_174 = 0x180;
    uStack_280 = 0;
    local_278 = &TStatId::TStatId_NAME_None;
    local_778 = local_778 & 0xe0;
    uStack_270 = uStack_650;
    local_268 = uStack_648;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_288 + 2),&local_260);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_288 + 4),&local_260);
    local_6c8._First = &local_820;
    local_6c8._Last = &local_81e;
    UE::MovieScene::FComponentMask::SetAll(&local_260.AllMask,&local_6c8);
    local_81c.Value = (pFVar3->Tags).Ignored.Value;
    local_738._First = &local_81c;
    local_738._Last = &local_81a;
    UE::MovieScene::FComponentMask::SetAll(&local_260.NoneMask,&local_738);
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
    ::RunInline_PerEntity<UE::MovieScene::FEvaluateBaseFloatValues>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
                *)local_288,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),
               (FEvaluateBaseFloatValues)local_838[0]);
    if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
    }
    pTVar6 = pTVar6 + 1;
    lVar8 = lVar8 + -1;
    FVar7.InstanceRegistry = local_810[0].InstanceRegistry;
  } while (lVar8 != 0);
  do {
    pTStack_758 = &TStatId::TStatId_NAME_None;
    local_640 = pTVar5[-0x20];
    TStack_63e = pFVar3->BaseValueEvalTime;
    TStack_63c = *pTVar5;
    local_818.Value = (pFVar3->Tags).NeedsLink.Value;
    local_760 = 0;
    uStack_748 = 0x6ff;
    uStack_744 = uStack_744 & 0xffffff00;
    uStack_628 = CONCAT71(uStack_74f,local_750) & 0xffffffffffffffe0;
    uStack_620._4_4_ = uStack_744;
    uStack_620._0_4_ = 0x6ff;
    uStack_638 = 0;
    pTStack_630 = &TStatId::TStatId_NAME_None;
    local_5c0.AllMask.Bits.NumBits = 0;
    FStack_5e6.ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_63e;
    local_5e8 = (undefined1  [2])local_640;
    aFStack_5e4[0].ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_63c;
    unique0x10000974 = uStack_63a;
    local_5c0.AllMask.Bits.MaxBits = 0x180;
    local_5c0.NoneMask.Bits.NumBits = 0;
    local_5c0.NoneMask.Bits.MaxBits = 0x180;
    uStack_5e0 = 0;
    local_5d8 = &TStatId::TStatId_NAME_None;
    local_5c0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5c0.ComplexMasks.ArrayNum = 0;
    local_5c0.ComplexMasks.ArrayMax = 0;
    local_540.NumBits = 0;
    local_540.MaxBits = 0x180;
    local_508.NumBits = 0;
    local_508.MaxBits = 0x180;
    local_750 = local_750 & 0xe0;
    uStack_5d0 = uStack_628;
    local_5c8 = uStack_620;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_5e8,&local_5c0);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_5e8 + 2),&local_5c0);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_5e8 + 4),&local_5c0);
    local_728._First = &local_818;
    local_728._Last = &local_816;
    UE::MovieScene::FComponentMask::SetAll(&local_5c0.AllMask,&local_728);
    local_814.Value = (pFVar3->Tags).Ignored.Value;
    local_718._First = &local_814;
    local_718._Last = &local_812;
    UE::MovieScene::FComponentMask::SetAll(&local_5c0.NoneMask,&local_718);
    pFVar4 = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
    if (local_5e8 != (undefined1  [2])0xffff &&
        (aFStack_5e4[0].ComponentType.Value != 0xffff && FStack_5e6.ComponentType.Value != 0xffff))
    {
      local_168._0_8_ = _local_5e8;
      local_168._8_8_ = uStack_5e0;
      local_148 = local_5c8;
      local_168._16_8_ = local_5d8;
      uStack_150 = uStack_5d0;
      UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter
                ((FEntityComponentFilter *)(local_168 + 0x28),&local_5c0);
      local_c0.NumBits = 0;
      local_c0.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)(local_168 + 0xa8),&local_540);
      local_88.NumBits = 0;
      local_88.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)(local_168 + 0xe0),&local_508);
      local_50 = pFVar4;
      UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                ((FEntityAllocationWriteContext *)(local_168 + 0x120),pFVar4);
      UE::MovieScene::
      TEntityTaskBase<UE::MovieScene::FEvaluateBaseDoubleValues,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
      ::Run((TEntityTaskBase<UE::MovieScene::FEvaluateBaseDoubleValues,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
             *)local_168,(FEvaluateBaseDoubleValues *)local_838);
      if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
      }
    }
    if (local_5c0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.ComplexMasks.AllocatorInstance.Data);
    }
    pTVar5 = pTVar5 + 1;
    FVar7.InstanceRegistry =
         (FInstanceRegistry *)&FVar7.InstanceRegistry[-1].InvalidatedObjectBindings.field_0x4f;
  } while (FVar7.InstanceRegistry != (FInstanceRegistry *)0x0);
  return;
}

// StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem @ 1467c2650

void __cdecl
UMovieSceneBaseValueEvaluatorSystem::StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem(void)

{
  return;
}

